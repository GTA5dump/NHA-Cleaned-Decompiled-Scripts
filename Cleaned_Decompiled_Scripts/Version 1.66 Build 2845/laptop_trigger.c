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
int iLocal_111=0;
int iLocal_112=0;
int iLocal_113=0;
int iLocal_114=0;
int iLocal_115=0;
var uLocal_116=0;
var uLocal_117=0;
var uLocal_118=0;
var uLocal_119=0;
var uLocal_120=0;
var uLocal_121=0;
int iLocal_122=0;
int iLocal_123=0;
int iLocal_124=0;
struct<3> Local_125={
0, 0, 0 
};
struct<3> Local_126={
0, 0, 0 
};
char cLocal_127[16]="";
var uLocal_128=0;
var uLocal_129=0;
int iLocal_130=0;
#endregion

void __EntryFunction__(){
bool bVar0;
char* sVar1;
var uVar2[25];
bool bVar3;
struct<3> Var4;
int iVar5;
struct<3> Var6;
bool bVar7;
int iVar8;
int iVar9;
struct<3> Var10;
bool bVar11;
int iVar12;
bool bVar13;
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
iLocal_28=3;
fLocal_31=80f;
fLocal_32=140f;
fLocal_33=180f;
iLocal_39=1;
iLocal_40=65;
iLocal_41=49;
iLocal_42=64;
fLocal_62=((0.05f + 0.275f) - 0.01f);
iLocal_111=-1;
Local_125={
0f, 0f, 0f 
};
iLocal_122=iScriptParam_130;
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_122)){
SCRIPT::TERMINATE_THIS_THREAD();
}
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3)){
func_247();
SCRIPT::TERMINATE_THIS_THREAD();
}
if(func_246(13) || func_246(14)){
func_247();
SCRIPT::TERMINATE_THIS_THREAD();
}
if(Global_38594){
func_247();
SCRIPT::TERMINATE_THIS_THREAD();
}
if(Global_75803){
SCRIPT::TERMINATE_THIS_THREAD();
}
bVar0=false;
sVar1="tvscreen";
bVar3=true;
Var4={
ENTITY::GET_ENTITY_COORDS(iScriptParam_130, 1) - ENTITY::GET_ENTITY_FORWARD_VECTOR(iScriptParam_130) * Vector(0.6f, 0.6f, 0.6f) 
};
Var4.f_2=(Var4.f_2 + 0.5f);
Local_126={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iScriptParam_130, Local_125) 
};
Global_1949969=0;
Global_1949965=0;
Global_1950077=0;
while (bVar3){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_122)){
if(iLocal_113){
if(!func_244(PLAYER::PLAYER_ID())){
if(!func_243(&uLocal_116)){
func_242(&uLocal_116, 1, 0);
}}}
if(Global_1949965 && (func_241(PLAYER::PLAYER_ID()) || func_240(PLAYER::PLAYER_ID()))){
if(!func_243(&uLocal_120)){
func_242(&uLocal_120, 0, 0);
}elseif(func_239(&uLocal_120, 10000, 0)){
func_238(&uLocal_120);
Global_1949965=0;
}
func_232(0);
}
if(Global_1853760){
if(!bVar0){
iVar5=ENTITY::GET_ENTITY_MODEL(iLocal_122);
if(iVar5==joaat("prop_laptop_01a")){
ENTITY::CREATE_MODEL_HIDE(ENTITY::GET_ENTITY_COORDS(iScriptParam_130, 1), 1f, joaat("prop_laptop_01a"), 0);
Var6={
ENTITY::GET_ENTITY_ROTATION(iLocal_122, 2) 
};
iLocal_122=OBJECT::CREATE_OBJECT(joaat("prop_laptop_lester2"), ENTITY::GET_ENTITY_COORDS(iLocal_122, 1), 0, 1, 0);
ENTITY::SET_ENTITY_ROTATION(iLocal_122, Var6, 2, 1);
bVar0=true;
}}}
if(OBJECT::HAS_OBJECT_BEEN_BROKEN(iLocal_122, 0)){
func_247();
SCRIPT::TERMINATE_THIS_THREAD();
}}
if(((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_122)) && !CUTSCENE::IS_CUTSCENE_PLAYING()) && PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())){
if(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_122)){
bVar7=false;
iVar8=PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar2, -1);
iVar9=0;
iVar9=0;
while (iVar9 < iVar8){
if(!ENTITY::IS_ENTITY_DEAD(uVar2[iVar9], 0)){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(uVar2[iVar9], "MP_COMMON_MISS", "HACK_INTRO", 3)){
bVar7=true;
}
elseif(ENTITY::IS_ENTITY_PLAYING_ANIM(uVar2[iVar9], "MP_COMMON_MISS", "HACK_LOOP", 3)){
bVar7=true;
}}
iVar9++;
}
if(Global_16){
bVar7=true;
}
Var10={
0.6f, 0.6f, 0.8f 
};
if(((func_231() || func_230(PLAYER::PLAYER_ID())) || func_240(PLAYER::PLAYER_ID())) || func_229()){
Var10={
1f, 1f, 0.9f 
};
}elseif(func_228()){
Var10={
0.75f, 0.55f, 1.25f 
};
}
bVar11=func_227(PLAYER::PLAYER_ID());
iVar12=1;
if(func_228() || func_226()){
iVar12=func_225(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(iLocal_122), 90f);
}
if((((((((((((((((((((!bVar7 && !Global_32434) && !func_224(0)) && !PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)) && !func_223()) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var4, Var10, 0, 1, 1)) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iLocal_122)) && !MISC::IS_BIT_SET(Global_2621446, 15)) && !func_222()) && !(Global_78558 && func_221())) && !(!Global_78558 && func_220())) && !((Global_78558 && MISC::IS_BIT_SET(Global_4718592.f_14, 24)) && NETWORK::NETWORK_IS_ACTIVITY_SESSION())) && !((Global_78558 && func_219()) && func_218())) && !(Global_78558 && func_216(PLAYER::PLAYER_ID())==5)) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) && !Global_77328) && !func_213()) && !func_212()) && iVar12) && !func_211()) && !func_210()){
if((!func_209(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33) && !func_208(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33, -1)) && !func_207(PLAYER::PLAYER_ID())){
if(iLocal_114 !=bVar11){
if((func_241(PLAYER::PLAYER_ID()) || func_206(PLAYER::PLAYER_ID())) || func_240(PLAYER::PLAYER_ID())){
if(iLocal_111 !=-1){
func_205(&iLocal_111);
}
if(func_203()){
HUD::CLEAR_HELP(1);
}}
}
iLocal_114=bVar11;
if(iLocal_111==-1){
if(bVar0){
func_202(&iLocal_111, 1, "MPLA_BILL", 0, 0, 0, 0);
}elseif(func_231()){
func_201(bVar11);
}elseif(func_198()){
func_195(bVar11);
}elseif(func_229()){
func_183(bVar11);
}elseif(func_228()){
func_181(bVar11);
}else{
func_202(&iLocal_111, 1, "BROWSEINPUTTRIG", 0, 0, 0, 0);
}
}}
if(((iLocal_111 !=-1 && func_179(iLocal_111, 1)) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) && func_178()){
if(iLocal_111 !=-1){
func_205(&iLocal_111);
}
if(!bVar0){
if((func_177() || func_176()) || func_175()){
func_170();
}
if(func_231()){
func_30(0, bVar11);
func_29(0, 0, 1);
}elseif(func_229()){
func_30(0, bVar11);
func_29(0, 0, 3);
}elseif(func_198()){
func_30(1, bVar11);
func_29(0, 0, 2);
}elseif(func_228()){
func_29(8, 0, 0);
}else{
func_29(0, 0, 0);
}
if(!iLocal_112){
func_22();
iLocal_112=1;
}
bVar13=true;
if((func_177() || func_176()) || func_175()){
func_21(&uLocal_118, 0, 0);
while (!func_239(&uLocal_118, 500, 0)){
func_232(0);
wait(0);
}
func_238(&uLocal_118);
}
while (bVar13){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_122) || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_122, 1), 1.5f, 1.5f, 4f, 0, 1, 1)){
Global_75696=1;
}
if(((func_177() || func_176()) || func_207(PLAYER::PLAYER_ID())) || func_175()){
if(!func_20() && !Global_77328){
bVar13=false;
}}elseif(func_20() || Global_75696){
bVar13=false;
}
if(func_177()){
func_232(0);
}
wait(0);
}
if((func_177() || func_176()) || func_175()){
func_6();
}
func_232(0);
func_238(&uLocal_120);
iLocal_112=0;
}}elseif((((iLocal_111 !=-1 && PAD::IS_CONTROL_JUST_PRESSED(2, 52)) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) && func_178()) && func_175()){
if(iLocal_111 !=-1){
func_205(&iLocal_111);
func_5();
}
func_170();
MISC::SET_BIT(&(Global_1950108.f_4), 28);
while (MISC::IS_BIT_SET(Global_1950108.f_4, 28)){
wait(0);
}
func_6();
func_4();
func_232(0);
}}else{
if(iLocal_111 !=-1){
func_205(&iLocal_111);
}
if(func_241(PLAYER::PLAYER_ID()) || func_206(PLAYER::PLAYER_ID())){
if(func_203()){
HUD::CLEAR_HELP(1);
}}
if(ENTITY::DOES_ENTITY_EXIST(iScriptParam_130)){
if(func_1()){
bVar3=false;
}}}}elseif(iLocal_111 !=-1){
func_205(&iLocal_111);
}}else{
if(iLocal_111 !=-1){
func_205(&iLocal_111);
}
bVar3=false;
}
wait(0);
}
if(bVar0){
if(HUD::IS_NAMED_RENDERTARGET_REGISTERED(sVar1)){
HUD::RELEASE_NAMED_RENDERTARGET(sVar1);
}}}

int func_1(){
int iVar0;
struct<3> Var1;
struct<3> Var2;
if(ENTITY::DOES_ENTITY_EXIST(iLocal_122)){
iVar0=ENTITY::GET_ENTITY_MODEL(iLocal_122);
if(func_3(iVar0)){
if(func_2(PLAYER::PLAYER_PED_ID())){
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
Var2={
ENTITY::GET_ENTITY_COORDS(iLocal_122, 1) 
};
return vdist2(Var1, Var2) > 10000f;
}}else{
return !BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iLocal_122);
}}
return 0;
}

int func_2(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}}
return 0;
}

int func_3(int iParam0){
if(iParam0==joaat("prop_laptop_lester")){
return 1;
}
return 0;
}


void func_4(){
if(Global_2672505.f_947.f_10){
Global_2672505.f_947.f_10=0;
}}


void func_5(){
if(!Global_2672505.f_947.f_10){
Global_2672505.f_947.f_10=1;
}}


void func_6(){
char* sVar0;
if(!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1) && ENTITY::DOES_ENTITY_EXIST(iLocal_122)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_USING_ANY_SCENARIO(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(PLAYER::PLAYER_PED_ID());
if(!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1)){
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
}}
if(func_7(1, &sVar0)){
STREAMING::REMOVE_ANIM_DICT(&sVar0);
}
if(func_7(2, &sVar0)){
if(iLocal_123 !=0){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_124)){
PED::DETACH_SYNCHRONIZED_SCENE(iLocal_124);
iLocal_124=-1;
}
iLocal_124=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_126, ENTITY::GET_ENTITY_ROTATION(iLocal_122, 2), 2, 0, 0, 1065353216, 0, 1065353216);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_124, &sVar0, "exit", 8f, -4f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_124);
STREAMING::REMOVE_ANIM_DICT(&sVar0);
}}}}}
Global_1949964=0;
}

int func_7(int iParam0, char* sParam1){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
StringCopy(sParam1, "", 64);
return 0;
}
if(func_12()){
StringCopy(sParam1, "", 64);
return 0;
}
if((!func_241(PLAYER::PLAYER_ID()) && !func_240(PLAYER::PLAYER_ID())) && !func_8(PLAYER::PLAYER_ID())){
StringCopy(sParam1, "", 64);
return 0;
}
StringCopy(sParam1, "anim@amb@warehouse@laptop@", 64);
return 1;
}

int func_8(int iParam0){
if(iParam0 !=func_11()){
if(func_10(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_9(Global_2657589[iParam0 /*466*/].f_321.f_7)==13;
}}}
return 0;
}

int func_9(int iParam0){
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

int func_10(int iParam0, bool bParam1, bool bParam2){
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

int func_11(){
return -1;
}

int func_12(){
if(Global_1575035==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_19()){
return 1;
}
if(Global_2696917){
return 1;
}
if(func_18()){
return 1;
}
if(func_17(159)){
if(!func_16()){
return 1;
}}
if(func_17(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_13() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_13())==0){
return 1;
}}
return 0;
}

int func_13(){
switch (func_15()){
case 0:
return func_14();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_14(){
switch (Global_2697021){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_15(){
return Global_32163;
}


bool func_16(){
return Global_2683864.f_698;
}

int func_17(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_18(){
return Global_2694526;
}


bool func_19(){
return Global_2683864.f_693;
}


bool func_20(){
return Global_75693;
}


void func_21(var uParam0, bool bParam1, bool bParam2){
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


void func_22(){
if(func_28() || func_27()){
func_26();
func_23();
}}


void func_23(){
if((!func_25() && !func_24()) && Global_2684800){
Global_4718592.f_113724=0;
}}


bool func_24(){
return Global_2683864.f_691;
}


bool func_25(){
return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192 !=0;
}


void func_26(){
Global_2683864.f_756=1;
}


var func__27(){
return Global_2683864.f_735;
}


var func__28(){
return MISC::IS_BIT_SET(Global_2683864.f_2, 11);
}

int func_29(int iParam0, bool bParam1, int iParam2){
bool bVar0;
bool bVar1;
bool bVar2;
Global_75806=iParam0;
bVar0=iParam2==true;
bVar1=iParam2==2;
bVar2=iParam2==3;
switch (Global_75806){
case 3:
Global_75804=0;
break;
case 4:
Global_75804=3;
break;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecuroserv")) > 0){
if(bVar0){
}
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appbikerbusiness")) > 0){
if(bVar1){
}
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appimportexport")) > 0){
if(bVar2){
}
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0){
if((bVar0 || bVar1) || bVar2){
}
return 0;
}
if(Global_78558 && func_221()){
return 0;
}
if(!Global_78558 && func_220()){
return 0;
}
if(bVar0){
if(!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ")){
SCRIPT::REQUEST_SCRIPT("appSecuroServ");
if(bParam1){
return 0;
}}
while (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ")){
wait(0);
}
start_new_script("appSecuroServ", 4592);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appSecuroServ");
return 1;
}
if(bVar1){
if(!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness")){
SCRIPT::REQUEST_SCRIPT("appBikerBusiness");
if(bParam1){
return 0;
}}
while (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness")){
wait(0);
}
start_new_script("appBikerBusiness", 4592);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appBikerBusiness");
return 1;
}
if(bVar2){
if(!SCRIPT::HAS_SCRIPT_LOADED("appImportExport")){
SCRIPT::REQUEST_SCRIPT("appImportExport");
if(bParam1){
return 0;
}}
while (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport")){
wait(0);
}
start_new_script("appImportExport", 4592);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appImportExport");
return 1;
}
if(!SCRIPT::HAS_SCRIPT_LOADED("appInternet")){
SCRIPT::REQUEST_SCRIPT("appInternet");
if(bParam1){
return 0;
}}
while (!SCRIPT::HAS_SCRIPT_LOADED("appInternet")){
wait(0);
}
start_new_script("appInternet", 4592);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appInternet");
return 1;
}


void func_30(int iParam0, bool bParam1){
if((((!bParam1 && !func_169(PLAYER::PLAYER_ID(), 1)) && func_168() < func_167()) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_163(PLAYER::PLAYER_ID())){
func_31(1, iParam0);
}}


void func_31(bool bParam0, int iParam1){
struct<14> Var0;
func_112(1, 1, iParam1);
if(bParam0){
if(func_111(91) || func_111(98)){
func_108();
}
func_93();
func_92(17);
Var0.f_2=-1858635130;
Var0.f_3=iParam1;
if(func_91(PLAYER::PLAYER_ID()) && iParam1==0){
Var0.f_3=100;
}
func_89(Var0, func_90(0, 1));
func_57();
if(!func_91(PLAYER::PLAYER_ID()) && iParam1 !=1){
func_32(82, "GB_TXTMSG_INIT2", 2, 0, 0, 0, 0, 1, 0, 1);
}}}

int func_32(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9){
int iVar0;
char* sVar1;
int iVar2;
char* sVar3;
int iVar4;
char* sVar5;
char* sVar6;
int iVar7;
MISC::CLEAR_BIT(&Global_8253, 10);
iVar0=0;
sVar1="NULL";
iVar2=-99;
sVar3="NULL";
iVar4=0;
sVar5="NULL";
sVar6="NULL";
iVar7=3;
if(func_34(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7)==1){
if(bParam7==1){
Global_8960=iParam6;
Global_8863[3 /*6*/]={
func_33(iParam0) 
};
Global_8940=iParam0;
MISC::SET_BIT(&Global_8253, 1);
MISC::SET_BIT(&Global_8253, 7);
}
return 1;
}
return 0;
}


struct<4> func_33(int iParam0){
return Global_2028[iParam0 /*29*/].f_3;
}

int func_34(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16){
int iVar0;
bool bVar1;
if(iParam13 > 99){}
if(MISC::ARE_STRINGS_EQUAL(sParam14, sParam15)){}
func_50();
iVar0=0;
switch (iParam16){
case 0:
if(Global_20383==0){
iVar0=0;
}else{
iVar0=1;
}
break;
case 2:
if(Global_20383==2){
iVar0=0;
}else{
iVar0=1;
}
break;
case 1:
if(Global_20383==1){
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
if(Global_113648.f_14053[Global_20383 /*20*/].f_17==1){
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0){
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0){
return 0;
}}
if(func_49()==0){
func_47();
return 0;
}
func_46(Global_22792);
StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/]), sParam1, 64);
Global_113648.f_14143[Global_22792 /*104*/].f_17=iParam0;
if(iParam2==0){}else{
Global_113648.f_14143[Global_22792 /*104*/].f_24=iParam2;
}
Global_113648.f_14143[Global_22792 /*104*/].f_25=iParam7;
Global_113648.f_14143[Global_22792 /*104*/].f_26=uParam8;
Global_113648.f_14143[Global_22792 /*104*/].f_29=uParam9;
Global_113648.f_14143[Global_22792 /*104*/].f_30=uParam12;
Global_113648.f_14143[Global_22792 /*104*/].f_31=uParam11;
Global_113648.f_14143[Global_22792 /*104*/].f_28=0;
Global_113648.f_14143[Global_22792 /*104*/].f_32=iParam3;
StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_33), sParam4, 64);
Global_113648.f_14143[Global_22792 /*104*/].f_49=iParam6;
StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_50), sParam5, 64);
Global_113648.f_14143[Global_22792 /*104*/].f_66=iParam13;
StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_67), sParam14, 64);
StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_83), sParam15, 64);
if(MISC::IS_BIT_SET(Global_8253, 10)){
Global_113648.f_14143[Global_22792 /*104*/].f_99[0]=1;
Global_113648.f_14143[Global_22792 /*104*/].f_99[1]=1;
Global_113648.f_14143[Global_22792 /*104*/].f_99[2]=1;
Global_8959=4;
func_45(0);
func_45(2);
func_45(1);
}else{
func_50();
switch (iParam16){
case 3:
Global_113648.f_14143[Global_22792 /*104*/].f_99[Global_20383]=1;
break;
case 0:
Global_113648.f_14143[Global_22792 /*104*/].f_99[0]=1;
break;
case 2:
Global_113648.f_14143[Global_22792 /*104*/].f_99[2]=1;
break;
case 1:
Global_113648.f_14143[Global_22792 /*104*/].f_99[1]=1;
break;
}
if(iParam16==3){
switch (Global_20383){
case 0:
func_45(0);
Global_8959=0;
break;
case 1:
func_45(1);
Global_8959=1;
break;
case 2:
func_45(2);
Global_8959=2;
break;
case 3:
func_45(3);
Global_8959=3;
break;
default:
Global_8959=4;
break;
}}}
if(iParam7==1){
if(MISC::IS_BIT_SET(Global_8253, 10)){
Global_113648.f_14053[0 /*20*/].f_17=1;
Global_113648.f_14053[1 /*20*/].f_17=1;
Global_113648.f_14053[2 /*20*/].f_17=1;
}else{
switch (iParam16){
case 3:
Global_113648.f_14053[Global_20383 /*20*/].f_17=1;
break;
case 0:
Global_113648.f_14053[0 /*20*/].f_17=1;
break;
case 2:
Global_113648.f_14053[2 /*20*/].f_17=1;
break;
case 1:
Global_113648.f_14053[1 /*20*/].f_17=1;
break;
}}}
Global_22794[Global_22792]=0;
if(bParam10){
func_50();
if(Global_20326){
StringCopy(&Global_20372, "Phone_SoundSet_Prologue", 24);
}else{
switch (Global_20383){
case 0:
StringCopy(&Global_20372, "Phone_SoundSet_Michael", 24);
break;
case 2:
StringCopy(&Global_20372, "Phone_SoundSet_Trevor", 24);
break;
case 1:
StringCopy(&Global_20372, "Phone_SoundSet_Franklin", 24);
break;
default:
StringCopy(&Global_20372, "Phone_SoundSet_Default", 24);
break;
}}
if(!Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259==1){
if(!func_44()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20372, 1);
}}}
if(!Global_20585){
if(Global_20383.f_1==6){
func_43(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_40(1);
func_43(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20363), -1082130432, -1082130432, -1082130432);
}}
if(Global_1977527 !=-1 && iParam0==Global_1977527){
bVar1=true;
}
func_35(iParam0, sParam1, bVar1, func_39(PLAYER::PLAYER_ID()));
return 1;
}


void func_35(int iParam0, char* sParam1, bool bParam2, var uParam3){
if(!func_36()){
return;
}
STATS::PLAYSTATS_NPC_PHONE(iParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0, bParam2, uParam3, Global_1977511.f_7, Global_1977511.f_8, Global_1977511.f_9, Global_1977511.f_10, Global_1977511.f_11, Global_1977511.f_12, Global_1977511.f_13);
if(bParam2){
Global_1977527=-1;
}}

int func_36(){
if(!Global_262145.f_28878){
return 0;
}
if(!Global_78558){
return 0;
}
if(PLAYER::PLAYER_ID()==func_11()){
return 0;
}
if(func_37(PLAYER::PLAYER_ID())){
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


bool func_37(int iParam0){
return func_38(iParam0, 20);
}


bool func_38(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}


var func__39(int iParam0){
return Global_1853910[iParam0 /*862*/].f_205.f_6;
}


void func_40(int iParam0){
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
Global_22793=0;
Global_8858=iParam0;
iVar0=0;
while (iVar0 < 9){
Global_8822[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 9){
iVar1=0;
if(func_246(14)){
while (iVar1 < 34){
if(iParam0==Global_8260[iVar1 /*15*/].f_11){
if(iVar0==Global_8260[iVar1 /*15*/].f_4){
if(Global_8822[iVar0]==0){
Global_8786[iVar0]=iVar1;
if(iVar1==3){
if(MISC::IS_BIT_SET(Global_8254, 3)){
iVar2=42;
Global_20588=1;
}else{
iVar2=255;
Global_20588=0;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_42(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(Global_2694521){
if(iVar1==14){
func_41(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}}
Global_8822[iVar0]=1;
}}}
iVar1++;
}}else{
while (iVar1 < 34){
if(iParam0==Global_8260[iVar1 /*15*/].f_11){
if(iVar0==Global_8260[iVar1 /*15*/].f_4){
if(Global_8822[iVar0]==0){
Global_8786[iVar0]=iVar1;
if(iVar1==1){
iVar3=0;
while (iVar3 < 35){
if(Global_113648.f_14143[iVar3 /*104*/].f_24 !=0){
if(Global_113648.f_14143[iVar3 /*104*/].f_28==0){
if(Global_113648.f_14143[iVar3 /*104*/].f_99[Global_20383]==1){
Global_22793++;
}
}
}
iVar3++;
}
func_41(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22793), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}elseif(iVar1==7){
if(Global_78558){
iVar4=0;
iVar4=Global_4541031;
iVar5=0;
while (iVar5 < 12){
if(Global_4541032[iVar5 /*104*/].f_24 !=0){
if(Global_4541032[iVar5 /*104*/].f_28==0){
if(Global_4541032[iVar5 /*104*/].f_99[Global_20383]==1){
iVar4++;
}}
}
iVar5++;
}
func_41(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}else{
switch (Global_20383){
case 0:
iVar6=Global_44457;
break;
case 1:
iVar6=Global_44458;
break;
case 2:
iVar6=Global_44459;
break;
default:
break;
}
func_41(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}}elseif(iVar1==14){
func_41(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}elseif(iVar1==20){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_42(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8259);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==2){
if(MISC::IS_BIT_SET(Global_8254, 6)){
iVar7=42;
}else{
iVar7=255;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_42(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==3){
if(MISC::IS_BIT_SET(Global_8254, 3)){
iVar8=42;
Global_20588=1;
}else{
iVar8=255;
Global_20588=0;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_42(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==8){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_42(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif((iVar1==23 && MISC::ARE_STRINGS_EQUAL(&(Global_8260[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_8254, 6)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_42(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(Global_8260[iVar1 /*15*/].f_10==57 && iVar1==23){
iVar9=0;
iVar9=Global_1890001.f_1;
func_41(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}else{
func_41(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}
Global_8822[iVar0]=1;
}}}
iVar1++;
}}
iVar0++;
}}


void func_41(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11){
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
func_42(sParam7);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)){
func_42(sParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)){
func_42(sParam9);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam10)){
func_42(sParam10);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam11)){
func_42(sParam11);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_42(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_43(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6){
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


bool func_44(){
return Global_1575060;
}


void func_45(int iParam0){
var uVar0;
var uVar1;
uVar0=Global_113648.f_14053[iParam0 /*20*/].f_8;
uVar0=uVar0;
uVar1=uVar1;
}


void func_46(int iParam0){
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
Global_113648.f_14143[iParam0 /*104*/].f_18=uVar0;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_1=uVar1;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_2=uVar2;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_3=uVar3;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_4=uVar4;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_5=uVar5;
}


void func_47(){
int iVar0;
int iVar1;
int iVar2;
if(Global_78558){
iVar0=24;
iVar1=33;
}else{
iVar0=0;
iVar1=20;
}
iVar2=iVar0;
Global_22792=34;
Global_113648.f_14143[Global_22792 /*104*/].f_18=-1;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_1=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_2=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_3=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_5=99999;
while (iVar2 < iVar1){
if(!func_48(Global_113648.f_14143[iVar2 /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18)){
Global_22792=iVar2;
}
iVar2++;
}
Global_113648.f_14143[Global_22792 /*104*/].f_24=1;
}

int func_48(struct<6> Param0, struct<6> Param1){
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

int func_49(){
int iVar0;
int iVar1;
int iVar2;
if(Global_78558){
iVar0=24;
iVar1=33;
}else{
iVar0=0;
iVar1=20;
}
iVar2=iVar0;
while (iVar2 < iVar1){
if(Global_113648.f_14143[iVar2 /*104*/].f_24==0){
Global_22792=iVar2;
return 1;
}
iVar2++;
}
iVar2=iVar0;
Global_22792=34;
Global_113648.f_14143[Global_22792 /*104*/].f_18=-1;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_1=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_2=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_3=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_5=99999;
while (iVar2 < iVar1){
if(Global_113648.f_14143[iVar2 /*104*/].f_24==0 || Global_113648.f_14143[iVar2 /*104*/].f_24==1){
if(!func_48(Global_113648.f_14143[iVar2 /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18)){
Global_22792=iVar2;
}}
if(Global_113648.f_14143[iVar2 /*104*/].f_24==2){
}
iVar2++;
}
if(Global_22792==34){
return 0;
}
Global_113648.f_14143[Global_22792 /*104*/].f_99[0]=0;
Global_113648.f_14143[Global_22792 /*104*/].f_99[1]=0;
Global_113648.f_14143[Global_22792 /*104*/].f_99[2]=0;
return 1;
}


void func_50(){
if(func_246(14)){
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
Global_20383=func_51();
if(Global_20383==145){
Global_20383=3;
}
if(Global_78558){
Global_20383=3;
}
if(Global_20383 > 3){
Global_20383=3;
}}}


var func__51(){
func_52();
return Global_113648.f_2365.f_539.f_4321;
}


void func_52(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_55(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_54(PLAYER::PLAYER_PED_ID());
if(func_53(iVar0) && (!func_246(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_53(Global_113648.f_2365.f_539.f_4321)){
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


bool func_53(int iParam0){
return iParam0 < 3;
}

int func_54(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_55(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_55(int iParam0){
if(func_53(iParam0)){
return func_56(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__56(int iParam0){
return Global_2028[iParam0 /*29*/];
}


void func_57(){
if((!func_86() && func_71()) && func_69(PLAYER::PLAYER_ID())){
if(func_66()){
func_58("GB_INFO_MC_L", 0);
}else{
func_58("GB_INFO_LFG", 0);
}}}

int func_58(char* sParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=-1;
iVar1=1;
if(bParam1){
iVar1=2;
}
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
func_59(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
return iVar0;
}


void func_59(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11){
int iVar0;
if((!func_65() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_62(PLAYER::PLAYER_ID(), 0)){
return;
}
iVar0=func_60(iParam2);
if(iVar0 >=0 && iVar0 < 5){
Global_1944061.f_5[iVar0 /*53*/]=iParam0;
Global_1944061.f_5[iVar0 /*53*/].f_1=iParam2;
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_8), sParam1, 16);
Global_1944061.f_5[iVar0 /*53*/].f_2[0]=iParam4;
Global_1944061.f_5[iVar0 /*53*/].f_2[1]=iParam5;
Global_1944061.f_5[iVar0 /*53*/].f_2[2]=iParam6;
Global_1944061.f_5[iVar0 /*53*/].f_7=iParam7;
Global_1944061.f_5[iVar0 /*53*/].f_6=iParam8;
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_12), sParam3, 64);
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
}}

int func_60(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(Global_1944061 - 1)){
if(iParam0 > Global_1944061.f_5[iVar0 /*53*/].f_1){
func_61(iVar0);
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


void func_61(int iParam0){
int iVar0;
iVar0=4;
while (iVar0 >=iParam0 + 1){
Global_1944061.f_5[iVar0 /*53*/]={
Global_1944061.f_5[(iVar0 - 1) /*53*/] 
};
iVar0=(iVar0 + -1);
}}


bool func_62(int iParam0, int iParam1){
bool bVar0;
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_63(-1, 0)==8;
}else{
bVar0=Global_1853910[iParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_63(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_64();
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

int func_64(){
return Global_1574918;
}


bool func_65(){
return DLC::IS_DLC_PRESENT(-1762644250);
}


bool func_66(){
return func_67(PLAYER::PLAYER_ID());
}


bool func_67(int iParam0){
return func_68(iParam0, 1);
}

int func_68(int iParam0, int iParam1){
if(iParam0 !=func_11()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_11()){
if(Global_1894573[iParam0 /*608*/].f_10==iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428==iParam1){
return 1;
}}}
return 0;
}

int func_69(int iParam0){
if(iParam0==func_11()){
return 0;
}
if(!func_10(iParam0, 0, 1)){
return 0;
}
if(func_62(iParam0, 0)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_139, 2) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_139, 5)){
return 0;
}
if(func_70(iParam0)){
return 0;
}
return 1;
}

int func_70(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_38(iParam0, 9);
}
return 0;
}

int func_71(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
iVar1=PLAYER::INT_TO_PLAYERINDEX(iVar0);
if(func_72(iVar1)){
return 1;
}
iVar0++;
}
return 0;
}

int func_72(int iParam0){
int iVar0;
if(func_10(iParam0, 0, 1)){
if(iParam0 !=PLAYER::PLAYER_ID()){
iVar0=0;
if(func_85(1)){
if(func_84(iParam0, 9)){
iVar0=1;
}}elseif(func_38(iParam0, 15)){
iVar0=1;
}
if(iVar0 && func_73(iParam0, 0, 0)){
return 1;
}}}
return 0;
}

int func_73(int iParam0, int iParam1, bool bParam2){
if(iParam0==func_11()){
return 0;
}
if(!func_10(iParam0, 0, 1)){
return 0;
}
if(func_62(iParam0, 0)){
return 0;
}
if(func_82(iParam0)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_139, 2) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_139, 5)){
return 0;
}
if(func_81(iParam0)){
return 0;
}
if(bParam2){
if(func_79(iParam0, iParam1, 1)){
return 0;
}
if(func_37(iParam0)){
return 0;
}
if(func_77(iParam0, 1)){
return 0;
}}elseif(func_169(iParam0, 1)){
return 0;
}
if(func_76(iParam0)){
return 0;
}
if(func_70(iParam0)){
return 0;
}
if(func_163(iParam0)){
return 0;
}
if(func_74(iParam0)){
return 0;
}
return 1;
}

int func_74(int iParam0){
if(func_62(iParam0, 0)){
return 1;
}
if(func_75()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_75(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_76(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1894573[iVar0 /*608*/].f_1, 0);
}
return 0;
}


bool func_77(int iParam0, bool bParam1){
return func_78(iParam0, bParam1, 1);
}

int func_78(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(iParam0==func_11()){
return 0;
}
if(!bParam1){
if(func_68(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1894573[iParam0 /*608*/].f_10;
if(iVar0 !=func_11() && Global_1894573[iVar0 /*608*/].f_10.f_428==iParam2){
return 1;
}
return 0;
}

int func_79(int iParam0, int iParam1, bool bParam2){
if(iParam1 !=func_11()){
if(!bParam2){
if(func_80(iParam0, iParam1)){
return 0;
}}
if(Global_1894573[iParam0 /*608*/].f_10 !=func_11()){
return iParam1==Global_1894573[iParam0 /*608*/].f_10;
}}
return 0;
}

int func_80(int iParam0, int iParam1){
if(iParam1 !=func_11()){
if(iParam0 !=func_11()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_11()){
if(Global_1894573[iParam0 /*608*/].f_10==iParam0){
return iParam1==iParam0;
}}}}
return 0;
}


bool func_81(int iParam0){
return func_38(iParam0, 30);
}

int func_82(int iParam0){
if(!func_38(iParam0, 2)){
return 1;
}
if(func_38(iParam0, 1)){
return 1;
}
if(func_83(iParam0) > 0){
return 1;
}
return 0;
}

int func_83(int iParam0){
return Global_1894573[iParam0 /*608*/].f_10.f_23;
}


bool func_84(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_5, iParam1);
}


bool func_85(bool bParam0){
return func_77(PLAYER::PLAYER_ID(), bParam0);
}

int func_86(){
int iVar0;
var uVar1;
struct<16> Var2;
iVar0=0;
while (iVar0 < 7){
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_11[iVar0]==func_11()){
StringCopy(&Var2, "", 64);
Var2={
func_87(func_88(iVar0)) 
};
if(MISC::ARE_STRINGS_EQUAL(&Var2, &uVar1)){
return 0;
}}
iVar0++;
}
return 1;
}
struct<16> func_87(int iParam0){
return Global_2684801.f_3076.f_18[iParam0 /*16*/];
}

int func_88(int iParam0){
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
default:
}
return 0;
}


void func_89(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13){
Param0.f_0=2041805809;
Param0.f_1=PLAYER::PLAYER_ID();
if(!iParam13==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Param0, 14, iParam13);
}}

int func_90(int iParam0, bool bParam1){
var uVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar1);
if(func_10(iVar2, 0, 0)){
if(iVar2 !=PLAYER::PLAYER_ID() || iParam0){
if(bParam1){
MISC::SET_BIT(&uVar0, iVar1);
}elseif(!func_62(iVar2, 0)){
MISC::SET_BIT(&uVar0, iVar1);
}}}
iVar1++;
}
return uVar0;
}

int func_91(int iParam0){
if(iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 26);
}


void func_92(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::SET_BIT(&(Global_2793046.f_5225.f_7[iVar0]), iVar1);
}


void func_93(){
struct<8> Var0;
int iVar1;
Var0={
func_107(65, 67, -1) 
};
iVar1=0;
if(func_85(1)){
Var0={
func_107(47, 48, -1) 
};
iVar1=1;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&Var0)){
StringCopy(&Var0, func_105(PLAYER::PLAYER_ID(), 0), 64);
}
func_99(&Var0, iVar1, 0);
if((!func_98() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || func_96()){
func_95(28);
}else{
func_94(28);
}}


void func_94(int iParam0){
MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_4), iParam0);
}


void func_95(bool bParam0){
MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_4), iParam0);
}

int func_96(){
if(NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV()==0){
return 0;
}
if(func_97()){
if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1)){
if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()){
return 1;
}}}elseif(func_98()){
if(NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, 1)){
return 1;
}}elseif(MISC::IS_PC_VERSION()){
if(NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1)){
if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()){
return 1;
}}}
return 0;
}


bool func_97(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


bool func_98(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}


void func_99(char* sParam0, int iParam1, bool bParam2){
if(bParam2){
if(func_85(1) || iParam1==1){
func_102(47, 48, sParam0, -1, 1);
if(func_66() && iParam1==1){
func_101(sParam0, bParam2);
}}else{
func_102(65, 67, sParam0, -1, 1);
if(func_218() && iParam1==0){
func_100(sParam0, bParam2);
}}}
StringCopy(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_105), sParam0, 64);
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_121=LOCALIZATION::LOCALIZATION_GET_SYSTEM_LANGUAGE();
if((!func_98() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || func_96()){
func_95(28);
}else{
func_94(28);
}}


void func_100(char* sParam0, bool bParam1){
struct<16> Var0;
if(bParam1){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
func_102(45, 46, sParam0, -1, 1);
Var0={
func_107(65, 67, -1) 
};
if(MISC::IS_STRING_NULL_OR_EMPTY(&Var0)){
func_102(65, 67, sParam0, -1, 1);
}}}
if((!func_98() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || func_96()){
func_95(28);
}else{
func_94(28);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
StringCopy(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_338), sParam0, 64);
}}


void func_101(char* sParam0, bool bParam1){
if(bParam1){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
func_102(49, 50, sParam0, -1, 1);
}}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
StringCopy(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_354), sParam0, 64);
}
if((!func_98() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || func_96()){
func_95(28);
}else{
func_94(28);
}}


void func_102(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
char cVar2[32];
char cVar3[32];
int iVar4;
int iVar5;
if(func_104()){
iVar0=Global_2849801[iParam0 /*3*/][func_103(iParam3)];
iVar1=Global_2849801[iParam1 /*3*/][func_103(iParam3)];
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

int func_103(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_64();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}

int func_104(){
return 1;
return 0;
}


char* func_105(int iParam0, bool bParam1){
if(!bParam1){
if(func_77(iParam0, 1)){
return func_106();
}}
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC");
}


char* func_106(){
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM");
}
struct<16> func_107(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
struct<16> Var2;
char cVar3[32];
uVar0=Global_2849801[iParam0 /*3*/][func_103(iParam2)];
uVar1=Global_2849801[iParam1 /*3*/][func_103(iParam2)];
StringCopy(&Var2, STATS::STAT_GET_STRING(uVar0, -1), 64);
StringCopy(&cVar3, STATS::STAT_GET_STRING(uVar1, -1), 32);
StringConCat(&Var2, &cVar3, 64);
return Var2;
}


void func_108(){
int iVar0;
iVar0=0;
while (iVar0 <=3){
if(Global_2672505.f_2514[iVar0 /*80*/].f_2 !=0){
Global_2672505.f_2514[iVar0 /*80*/].f_2=5;
func_109(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 1);
}
iVar0++;
}}


void func_109(var uParam0, int iParam1){
func_110(uParam0, iParam1);
}


void func_110(var uParam0, var uParam1){
*uParam0=(*uParam0 || uParam1);
}


bool func_111(int iParam0){
return Global_2672505.f_2514[0 /*80*/].f_1==iParam0;
}


void func_112(bool bParam0, bool bParam1, int iParam2){
var uVar0;
int iVar1;
int iVar2;
var uVar3;
var uVar4;
char* sVar5;
struct<16> Var6;
bool bVar7;
int iVar8;
if(!func_160()){
return;
}
iVar2=1;
if(func_91(PLAYER::PLAYER_ID())){
iVar2=2;
}
if(iParam2==1){
iVar2=3;
}
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10 !=PLAYER::PLAYER_ID()){
if(bParam1){
STATS::START_BEING_BOSS(iVar2);
func_157(0);
func_155(0);
func_95(21);
func_95(22);
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_466=iVar2;
}
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10=PLAYER::PLAYER_ID();
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_428=iParam2;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_465=iParam2;
STATS::GET_BOSS_GOON_UUID(func_64(), &uVar3, &uVar4);
func_154(uVar3, uVar4);
sVar5=NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &uVar0);
StringCopy(&Var6, sVar5, 64);
func_153(Var6);
func_152();
if(func_151(12425, -1, 0) <=0){
iVar1=NETWORK::GET_CLOUD_TIME_AS_INT();
}else{
iVar1=(func_151(12425, -1, 0) - 43200);
}
func_148(iVar1);
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Boss", 3)){
DECORATOR::DECOR_SET_INT(PLAYER::PLAYER_PED_ID(), "Player_Boss", PLAYER::PLAYER_ID());
}
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_24=-1;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_25=-1;
Global_2793046.f_5225.f_223=-1;
func_142();
func_134(12, 0, 1);
if(bParam0){
func_92(0);
}
if(Global_2793046.f_5225.f_259 !=func_11()){
Global_2793046.f_5225.f_259=func_11();
}
if(MISC::IS_BIT_SET(Global_2793046.f_1831, 15)){
MISC::CLEAR_BIT(&(Global_2793046.f_1831), 15);
}
if(func_133(15)){
func_132(15);
}
if(!func_131() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
func_130();
func_129(2);
}
func_128(12465, 2, -1, 1, 0);
func_95(31);
func_93();
func_127();
func_126();
func_125();
if(iParam2 !=1){
if(!func_124(82, 3)){
bVar7=false;
iVar8=func_151(12422, -1, 0);
if(!MISC::IS_BIT_SET(iVar8, 11)){
MISC::SET_BIT(&iVar8, 11);
func_128(12422, iVar8, -1, 1, 0);
bVar7=true;
}
func_118(82, 3, bVar7);
}}
if(iParam2==1){
STATS::PLAYSTATS_CHANGE_MC_ROLE(func_116(func_117()), func_115(func_117()), func_114(), func_113(), Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_429, 4, Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_467);
}}}

int func_113(){
if(Global_1947733.f_3 !=0){
return Global_1947733.f_3;
}
return -1;
}

int func_114(){
if(Global_1947733.f_2 !=0){
return Global_1947733.f_2;
}
return -1;
}

int func_115(int iParam0){
if(iParam0==func_11()){
return -1;
}
return Global_1894573[iParam0 /*608*/].f_10.f_8[1];
}

int func_116(int iParam0){
if(iParam0==func_11()){
return -1;
}
return Global_1894573[iParam0 /*608*/].f_10.f_8[0];
}

int func_117(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}


void func_118(int iParam0, int iParam1, bool bParam2){
int iVar0;
Global_8939=iParam0;
if(Global_117[iParam0 /*10*/].f_8 !=169){
func_50();
if(iParam1==4){
func_123(iParam0, 0, 1);
func_123(iParam0, 1, 1);
func_123(iParam0, 2, 1);
func_122(iParam0, 0, 1);
func_122(iParam0, 1, 1);
func_122(iParam0, 2, 1);
}else{
if(func_121(iParam0, iParam1)==1 && func_120(iParam0, iParam1)==1){
bParam2=false;
}
iVar0=iParam1;
func_123(iParam0, iVar0, 1);
func_122(iParam0, iVar0, 1);
if(iParam0==172 && !Global_2793046.f_6891){
bParam2=false;
}
if(iParam0==171 && !Global_2793046.f_6890){
bParam2=false;
}
if(iParam0==173 && !Global_2793046.f_6890){
bParam2=false;
}}
if(bParam2){
if(!Global_78558){
if(iParam1 !=4){
if(Global_20383 !=iParam1){
Global_8912[iParam1 /*4*/]={
func_33(iParam0) 
};
Global_8929[iParam1]=1;
Global_8934[iParam1]=iParam0;
}elseif(iParam0==Global_20383){
}else{
Global_8863[1 /*6*/]={
func_33(iParam0) 
};
Global_8863[1 /*6*/].f_5=iParam1;
func_119();
}}else{
Global_8863[1 /*6*/]={
func_33(iParam0) 
};
Global_8863[1 /*6*/].f_5=iParam1;
func_119();
}}else{
Global_8863[1 /*6*/]={
func_33(iParam0) 
};
Global_8863[1 /*6*/].f_5=iParam1;
func_119();
}}}}


void func_119(){
char cVar0[64];
char cVar1[64];
char* sVar2;
StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[Global_8939 /*29*/].f_7)), 64);
if(Global_8958==0){
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
StringCopy(&cVar1, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_8863[1 /*6*/])), 64);
sVar2=HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253");
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
}else{
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_8863[1 /*6*/]));
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, "", 0);
}
MISC::CLEAR_BIT(&Global_8253, false);
}

int func_120(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

int func_121(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2028[iParam0 /*29*/].f_12[iParam1];
}


void func_122(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2028[iParam0 /*29*/].f_24[iParam1]=iParam2;
if(iParam0 < 162){
Global_113648.f_28052[iParam0 /*29*/].f_24[iParam1]=iParam2;
}}


void func_123(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2028[iParam0 /*29*/].f_12[iParam1]=iParam2;
if(iParam0 < 162){
Global_113648.f_28052[iParam0 /*29*/].f_12[iParam1]=iParam2;
}}

int func_124(int iParam0, int iParam1){
if(func_121(iParam0, iParam1)==1){
return 1;
}
return 0;
}


void func_125(){
if(!Global_2793046.f_5225.f_338){
Global_2793046.f_5225.f_338=1;
}}


void func_126(){
struct<16> Var0;
Var0={
func_107(49, 50, -1) 
};
func_101(&Var0, 0);
if((!func_98() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || func_96()){
func_95(28);
}else{
func_94(28);
}}


void func_127(){
struct<16> Var0;
Var0={
func_107(45, 46, -1) 
};
func_100(&Var0, 0);
if((!func_98() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || func_96()){
func_95(28);
}else{
func_94(28);
}}


void func_128(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2805029[iParam0 /*3*/][func_103(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}


void func_129(int iParam0){
MISC::SET_BIT(&(Global_4585323.f_2), iParam0);
if(Global_4585323){
return;
}
Global_4585323=1;
Global_4585323.f_1=0;
}


void func_130(){
int iVar0;
iVar0=0;
while (iVar0 < 15){
if(Global_4585249.f_28[iVar0 /*2*/] !=-1 && Global_4585249.f_28[iVar0 /*2*/].f_1 !=0){
if(HUD::DOES_BLIP_EXIST(Global_4585249.f_28[iVar0 /*2*/].f_1)){
HUD::SET_BLIP_AS_SHORT_RANGE(Global_4585249.f_28[iVar0 /*2*/].f_1, 1);
}}
iVar0++;
}}


bool func_131(){
return Global_2683864.f_740;
}


void func_132(int iParam0){
int iVar0;
bool bVar1;
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(Global_2793046.f_5225.f_7[iVar0]), bVar1);
}


bool func_133(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
return MISC::IS_BIT_SET(Global_2793046.f_5225.f_7[iVar0], iVar1);
}


void func_134(int iParam0, int iParam1, bool bParam2){
if(func_141()){
if(iParam1==1){
if(Global_2793046.f_4492==-1){
Global_2793046.f_4492=Global_262145.f_27184;
}
func_21(&(Global_2793046.f_4490), 0, 0);
if(bParam2){
if(Global_2793046.f_4495==-1){
Global_2793046.f_4495=Global_262145.f_27185;
}
func_21(&(Global_2793046.f_4493), 0, 0);
}else{
Global_1574582=0;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_8=0;
func_140(1);
}}else{
Global_1574582=0;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_8=0;
func_140(1);
}
if((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_139()) && !func_135(PLAYER::PLAYER_ID())){
Global_1057408=0;
}
STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(0, -1, -1, iParam0);
}}

int func_135(int iParam0){
if(func_136(iParam0, 1, 0)){
if(Global_1853910[iParam0 /*862*/] !=6){
return 1;
}}
return 0;
}

int func_136(int iParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_137(iParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853910[iParam0 /*862*/]==-1){
return 0;
}
return 1;
}


bool func_137(int iParam0){
return func_138(iParam0);
}


var func__138(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}


bool func_139(){
return Global_2683864.f_841;
}


void func_140(bool bParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_141()){
if(func_10(PLAYER::PLAYER_ID(), 1, 0)){
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
if(func_10(PLAYER::PLAYER_ID(), 1, 1)){
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


bool func_141(){
return Global_1574582;
}


void func_142(){
int iVar0;
bool bVar1;
iVar0=0;
while (iVar0 < 32){
bVar1=PLAYER::INT_TO_PLAYERINDEX(iVar0);
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1)){
func_144(1, bVar1);
if(bVar1 !=PLAYER::PLAYER_ID()){
func_143(bVar1);
}}
iVar0++;
}}


void func_143(bool bParam0){
var uVar0;
if(MISC::IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_101, bParam0)){
uVar0=PLAYER::GET_PLAYER_PED(bParam0);
PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(uVar0, PLAYER::PLAYER_ID(), 1);
PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(PLAYER::PLAYER_ID(), bParam0, 1);
PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(bParam0, PLAYER::PLAYER_ID(), 1);
func_144(1, bParam0);
MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_101), bParam0);
}}


void func_144(bool bParam0, bool bParam1){
int iVar0;
var uVar1;
int iVar2;
int iVar3;
if(func_10(bParam1, 0, 1)){
uVar1=PLAYER::GET_PLAYER_PED(bParam1);
if(ENTITY::DOES_ENTITY_EXIST(uVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
if((ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_VEHICLE(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(iVar0, bParam0, 1);
if(func_79(bParam1, func_117(), 1)){
if(func_117()==bParam1){
if(Global_2793046.f_5225.f_260[3] !=iVar0){
Global_2793046.f_5225.f_260[3]=iVar0;
}
}
else{
iVar2=func_145(func_117(), bParam1);
if(iVar2 !=-1){
if(Global_2793046.f_5225.f_260[iVar2] !=iVar0){
Global_2793046.f_5225.f_260[iVar2]=iVar0;
}}
}}}}elseif(!bParam0){
if(func_79(bParam1, func_117(), 1)){
if(func_117()==bParam1){
iVar0=Global_2793046.f_5225.f_260[3];
if((ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_VEHICLE(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(iVar0, true, 1);
Global_2793046.f_5225.f_260[3]=0;
}}else{
iVar3=func_145(func_117(), bParam1);
if(iVar3 !=-1){
iVar0=Global_2793046.f_5225.f_260[iVar3];
if((ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_VEHICLE(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(iVar0, true, 1);
Global_2793046.f_5225.f_260[iVar3]=0;
}
}}}}}}}

int func_145(int iParam0, int iParam1){
int iVar0;
if(func_227(iParam0)){
if(func_79(iParam1, iParam0, 0) || func_147(iParam1, iParam0)){
iVar0=0;
while (iVar0 < 7){
if(func_146(iParam0, iVar0)==iParam1){
return iVar0;
}
iVar0++;
}}}
return -1;
}

int func_146(int iParam0, int iParam1){
if(func_227(iParam0)){
if(iParam1 > -1 && iParam1 < 7){
return Global_1894573[iParam0 /*608*/].f_10.f_11[iParam1];
}}
return func_11();
}

int func_147(int iParam0, int iParam1){
if(iParam1 !=func_11()){
if(Global_1894573[iParam0 /*608*/].f_10.f_26 !=func_11()){
return iParam1==Global_1894573[iParam0 /*608*/].f_10.f_26;
}}
return 0;
}


void func_148(int iParam0){
if(!func_160()){
return;
}
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_1=iParam0;
if(func_151(12425, -1, 0) !=func_149(PLAYER::PLAYER_ID())){
func_128(12425, func_149(PLAYER::PLAYER_ID()), -1, 1, 0);
}}

int func_149(int iParam0){
if(func_150(iParam0)==-1){
return -1;
}
return (func_150(iParam0) + 43200);
}

int func_150(int iParam0){
return Global_1894573[iParam0 /*608*/].f_10.f_1;
}

int func_151(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805029[iParam0 /*3*/][func_103(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


void func_152(){
if(MISC::IS_PC_VERSION()){
NETWORK::NETWORK_SET_SCRIPT_CONTROLLING_TEAMS(1);
if(func_85(1)){
HUD::OVERRIDE_MP_TEXT_CHAT_TEAM_STRING(joaat("PI_BIK_0_T"));
}else{
HUD::OVERRIDE_MP_TEXT_CHAT_TEAM_STRING(-1755491431);
}}}


void func_153(char[64] cParam0){
Global_2684801.f_3076.f_2={
cParam0 
};
}


void func_154(var uParam0, var uParam1){
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_8[0]=uParam0;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_8[1]=uParam1;
}


void func_155(int iParam0){
func_156(204, iParam0, -1, 1);
}


void func_156(int iParam0, var uParam1, int iParam2, int iParam3){
int iVar0;
if(func_104()){
iVar0=Global_2848282[iParam0 /*3*/][func_103(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, uParam1, iParam3);
}}}


void func_157(bool bParam0){
if(bParam0){
if(func_159(4)){
func_94(21);
func_94(22);
}
func_94(31);
func_158(bParam0);
}else{
if(func_38(PLAYER::PLAYER_ID(), 21)){
func_95(21);
if(!func_159(3) && func_159(4)){
func_94(22);
}}
func_95(31);
func_158(bParam0);
}}


void func_158(bool bParam0){
func_156(424, bParam0, -1, 1);
}


bool func_159(int iParam0){
return MISC::IS_BIT_SET(Global_2793046.f_5225.f_47, iParam0);
}

int func_160(){
if(func_162() && func_161(0)){
return 1;
}
return 0;
}


var func__161(int iParam0){
return Global_1574538[iParam0];
}


var func__162(){
return func_161(func_64() + 1);
}


bool func_163(int iParam0){
return func_164(iParam0) > 0;
}

int func_164(int iParam0){
int iVar0;
int iVar1;
if(func_10(iParam0, 0, 1)){
if(Global_1894573[iParam0 /*608*/].f_10.f_181 !=-1){
iVar0=Global_1894573[iParam0 /*608*/].f_10.f_181;
}else{
iVar0=func_166(joaat("mpply_vipgameplaydisabledtimer"));
}
iVar1=((iVar0 + func_165()) - NETWORK::GET_CLOUD_TIME_AS_INT());
return iVar1;
}
return -1;
}

int func_165(){
return Global_262145.f_15410;
}

int func_166(int iParam0){
var uVar0;
var uVar1;
uVar0=iParam0;
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_167(){
return Global_262145.f_12841;
}

int func_168(){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar0);
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2)){
if(func_227(bVar2)){
iVar1++;
}}
iVar0++;
}
return iVar1;
}


bool func_169(int iParam0, bool bParam1){
if(!bParam1){
if(func_227(iParam0)){
return 0;
}}
return Global_1894573[iParam0 /*608*/].f_10 !=func_11();
}


void func_170(){
char* sVar0;
struct<3> Var1;
bool bVar2;
Global_1949964=1;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
Var1={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_122, 0.0328f, -0.8f, 0.3f) 
};
bVar2=false;
func_238(&uLocal_118);
if(func_7(0, &sVar0)){
while (!bVar2){
func_232(0);
if(!func_243(&uLocal_118)){
func_242(&uLocal_118, 0, 0);
}elseif(func_239(&uLocal_118, 4000, 0)){
bVar2=true;
}
if(!func_174(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var1, 0.05f, 0) && !func_225(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(iLocal_122), 5f)){
if(!func_172(PLAYER::PLAYER_PED_ID(), joaat("script_task_go_straight_to_coord"))){
TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var1, 1f, 5000, ENTITY::GET_ENTITY_HEADING(iLocal_122), 0.25f);
}}else{
bVar2=true;
}
GRAPHICS::DRAW_DEBUG_SPHERE(Var1, 0.1f, 255, 0, 0, 255);
GRAPHICS::DRAW_DEBUG_LINE(Var1, ENTITY::GET_ENTITY_COORDS(iLocal_122, 1), 0, 255, 0, 255);
GRAPHICS::DRAW_DEBUG_LINE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var1, 0, 0, 255, 255);
wait(0);
}
func_238(&uLocal_118);
iLocal_123=0;
}}
while (iLocal_123 !=3){
func_171(iLocal_122);
func_232(0);
wait(0);
}}


void func_171(int iParam0){
char* sVar0;
char* sVar1;
char* sVar2;
char* sVar3;
int iVar4;
int iVar5;
int iVar6;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return;
}
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
return;
}
if((!func_241(PLAYER::PLAYER_ID()) && !func_240(PLAYER::PLAYER_ID())) && !func_8(PLAYER::PLAYER_ID())){
return;
}
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return;
}
func_7(0, &sVar0);
func_7(1, &sVar1);
func_7(2, &sVar2);
STREAMING::REQUEST_ANIM_DICT(&sVar2);
STREAMING::REQUEST_ANIM_DICT(&sVar0);
sVar3="idle_a";
iVar4=1;
if(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==joaat("mp_f_freemode_01")){
iVar4=1;
}
switch (iLocal_123){
case 0:
iLocal_115=0;
GRAPHICS::DRAW_DEBUG_TEXT("walk", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 64, 256, 64, 64);
if(STREAMING::HAS_ANIM_DICT_LOADED(&sVar0)){
if(TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_go_straight_to_coord"))==7 && STREAMING::HAS_ANIM_DICT_LOADED(&sVar0)){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_124)){
PED::DETACH_SYNCHRONIZED_SCENE(iLocal_124);
iLocal_124=-1;
}
iLocal_124=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_126, ENTITY::GET_ENTITY_ROTATION(iParam0, 2), 2, 0, 0, 1065353216, 0, 1065353216);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_124, &sVar0, "enter", 4f, -2f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_124);
STREAMING::REMOVE_ANIM_DICT(&sVar0);
iLocal_123=1;
}}
break;
case 1:
GRAPHICS::DRAW_DEBUG_TEXT("enter", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 64, 256, 64, 64);
STREAMING::REQUEST_ANIM_DICT(&sVar1);
iVar5=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_124);
if(!iLocal_115){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar5) >=0.93f){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Login", "GTAO_Exec_SecuroServ_Warehouse_PC_Sounds", 1);
iLocal_115=1;
}}
if(STREAMING::HAS_ANIM_DICT_LOADED(&sVar1) && (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar5) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar5) >=0.96f)){
iVar6=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
if((((MISC::ARE_STRINGS_EQUAL(&cLocal_127, "idle_a") && iVar6==0) || (MISC::ARE_STRINGS_EQUAL(&cLocal_127, "idle_b") && iVar6==1)) || (MISC::ARE_STRINGS_EQUAL(&cLocal_127, "idle_c") && iVar6==2)) || (MISC::ARE_STRINGS_EQUAL(&cLocal_127, "idle_d") && iVar6==3)){
iVar6++;
if(iVar6 >=iVar4){
iVar6=0;
}}
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_124)){
PED::DETACH_SYNCHRONIZED_SCENE(iLocal_124);
iLocal_124=-1;
}
iLocal_124=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_126, ENTITY::GET_ENTITY_ROTATION(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
switch (iVar6){
case 0:
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_124, &sVar1, "idle_a", 4f, -2f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_124);
StringCopy(&cLocal_127, "idle_a", 16);
iLocal_123=3;
break;
case 1:
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_124, &sVar1, "idle_b", 4f, -2f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_124);
StringCopy(&cLocal_127, "idle_b", 16);
iLocal_123=3;
break;
case 2:
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_124, &sVar1, "idle_c", 4f, -2f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_124);
StringCopy(&cLocal_127, "idle_c", 16);
iLocal_123=3;
break;
case 3:
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_124, &sVar1, "idle_d", 4f, -2f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_124);
StringCopy(&cLocal_127, "idle_d", 16);
iLocal_123=3;
break;
default:
StringCopy(&cLocal_127, "idle_XXX", 16);
break;
}}
break;
case 3:
iLocal_115=0;
if(ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sVar1, "idle_a", 2)){
GRAPHICS::DRAW_DEBUG_TEXT("idle_a", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
}elseif(ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sVar1, "idle_b", 2)){
GRAPHICS::DRAW_DEBUG_TEXT("idle_b", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
}elseif(ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sVar1, "idle_c", 2)){
GRAPHICS::DRAW_DEBUG_TEXT("idle_c", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
}elseif(ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sVar1, "idle_d", 2)){
GRAPHICS::DRAW_DEBUG_TEXT("idle_d", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
}else{
GRAPHICS::DRAW_DEBUG_TEXT("idle_XXX", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
}
iVar5=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_124);
if(!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_124) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar5)){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_124)){
PED::DETACH_SYNCHRONIZED_SCENE(iLocal_124);
iLocal_124=-1;
}
iLocal_124=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_126, ENTITY::GET_ENTITY_ROTATION(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
iVar5=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_124);
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar5)){
PED::SET_SYNCHRONIZED_SCENE_PHASE(iVar5, 0f);
}
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_124, &sVar1, sVar3, 4f, -2f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_124);
iLocal_123=3;
return;
}
if(STREAMING::HAS_ANIM_DICT_LOADED(&sVar1) && (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar5) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar5) >=0.99f)){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_124)){
PED::DETACH_SYNCHRONIZED_SCENE(iLocal_124);
iLocal_124=-1;
}
iLocal_124=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_126, ENTITY::GET_ENTITY_ROTATION(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_124, &sVar1, sVar3, 4f, -2f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_124);
iLocal_123=3;
return;
}
break;
}}

int func_172(int iParam0, int iParam1){
if(func_173(iParam0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1)==1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1)==0){
return 1;
}}
return 0;
}

int func_173(int iParam0){
if(func_2(iParam0)){
if(!PED::IS_PED_INJURED(iParam0)){
return 1;
}}
return 0;
}

int func_174(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3){
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

int func_175(){
if(!func_8(PLAYER::PLAYER_ID())){
return 0;
}
return MISC::IS_BIT_SET(Global_1950108.f_515, 30);
}

int func_176(){
if(func_240(PLAYER::PLAYER_ID())){
if(MISC::IS_BIT_SET(Global_1950108.f_515, 0) || MISC::IS_BIT_SET(Global_1950108.f_515, 2)){
return 1;
}}
return 0;
}

int func_177(){
if(func_241(PLAYER::PLAYER_ID())){
if(MISC::IS_BIT_SET(Global_1950108.f_515, 0) || MISC::IS_BIT_SET(Global_1950108.f_515, 2)){
return 1;
}}
return 0;
}

int func_178(){
if(func_163(PLAYER::PLAYER_ID())){
return 0;
}
if(func_212()){
return 0;
}
if(func_211()){
return 0;
}
if(func_227(PLAYER::PLAYER_ID())){
return 1;
}elseif(func_168() < func_167()){
return 1;
}
return 0;
}

int func_179(int iParam0, bool bParam1){
int iVar0;
iVar0=func_180(iParam0);
if(iVar0==-1){
return 0;
}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())){
return 0;
}
if(func_224(0)){
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

int func_180(int iParam0){
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


void func_181(bool bParam0){
if(((func_175() && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID())) && !func_182()) && !Global_1949965){
func_202(&iLocal_111, 2, "ARENAWHINPUT", 0, 0, 0, 0);
}}


bool func_182(){
return Global_1950108.f_528;
}


void func_183(bool bParam0){
if((((func_207(PLAYER::PLAYER_ID()) && func_193(PLAYER::PLAYER_ID())==func_192(PLAYER::PLAYER_ID())) && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID())) && !func_182()) && !Global_1949965){
if(func_189()){
func_188("WHPRIVSESLAP");
}elseif(!bParam0){
if(func_168() >=func_167()){
func_202(&iLocal_111, 1, "WHSECUROMAXVIP", 0, 0, 0, 0);
}elseif(func_163(PLAYER::PLAYER_ID())){
func_202(&iLocal_111, 1, "PIM_EXECH0x1", 0, 0, 0, 0);
}elseif(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
func_188("WHSECUROBLCK");
}else{
func_202(&iLocal_111, 1, "SECINPUTTREGLAP", 0, 0, 0, 0);
}}elseif(func_67(PLAYER::PLAYER_ID())){
func_188("WHBIKERBLCK");
}elseif((func_243(&uLocal_116) && func_239(&uLocal_116, 10000, 1)) || !iLocal_113){
if(func_184(PLAYER::PLAYER_ID()) || Global_1949965==1){
iLocal_113=1;
if(!Global_1949965){
func_188("WHSECUROBLCK");
}}else{
if(func_203()){
HUD::CLEAR_HELP(1);
}
iLocal_113=0;
func_238(&uLocal_116);
func_202(&iLocal_111, 1, "WHSECUROINPUT", 0, 0, 0, 0);
}}elseif(iLocal_113){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_188("WHSECUROBLCK");
}
if(!func_184(PLAYER::PLAYER_ID())){
HUD::CLEAR_HELP(1);
iLocal_113=0;
}}}}


bool func_184(int iParam0){
return func_185(func_186(iParam0));
}

int func_185(int iParam0){
switch (iParam0){
case 178:
case 188:
return 1;
default:
}
return 0;
}

int func_186(int iParam0){
if(func_187(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_33;
}
return -1;
}

int func_187(int iParam0, int iParam1){
if(Global_1894573[iParam0 /*608*/].f_10.f_33 !=-1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 !=-1)){
return 1;
}
return 0;
}


void func_188(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_189(){
if(Global_1949970){
return 0;
}
return func_190();
}

int func_190(){
if(func_191()){
return 1;
}
return Global_2683864.f_744;
}


bool func_191(){
return Global_1575018==10;
}

int func_192(int iParam0){
if(iParam0==func_11()){
return 0;
}
return Global_1853910[iParam0 /*862*/].f_267.f_144;
}

int func_193(int iParam0){
if(func_207(iParam0)){
return func_194(Global_2657589[iParam0 /*466*/].f_321.f_7);
}
return 0;
}

int func_194(int iParam0){
switch (iParam0){
case 60:
return 1;
break;
case 61:
return 2;
break;
case 62:
return 3;
break;
case 63:
return 4;
break;
case 64:
return 5;
break;
case 65:
return 6;
break;
case 66:
return 7;
break;
case 67:
return 8;
break;
case 68:
return 9;
break;
case 69:
return 10;
break;
}
return 0;
}


void func_195(bool bParam0){
if(((((func_206(PLAYER::PLAYER_ID()) || func_176()) && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID())) && !func_182()) && !Global_1949965) && func_225(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(iLocal_122), 90f)){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
func_188("WHSECUROBLCK");
}elseif(func_189()){
if(func_206(PLAYER::PLAYER_ID())){
func_188("BIKERWHBLCKC");
}else{
func_188("BIKERWHBLCKD");
}}elseif(func_67(PLAYER::PLAYER_ID())){
if((func_243(&uLocal_116) && func_239(&uLocal_116, 10000, 1)) || !iLocal_113){
if(func_196(PLAYER::PLAYER_ID()) || Global_1949965==1){
iLocal_113=1;
if(!Global_1949965){
func_188("WHSECUROBLCK");
}}else{
if(func_203()){
HUD::CLEAR_HELP(1);
}
iLocal_113=0;
func_238(&uLocal_116);
func_202(&iLocal_111, 1, "BIKERWHINPUT", 0, 0, 0, 0);
}}elseif(iLocal_113){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_188("WHSECUROBLCK");
}
if(!func_196(PLAYER::PLAYER_ID())){
iLocal_113=0;
HUD::CLEAR_HELP(1);
}}}elseif(!bParam0 && func_168() < func_167()){
func_202(&iLocal_111, 1, "BIKERWHBLCKA", 0, 0, 0, 0);
}else{
func_188("BIKERWHBLCKB");
}}}


bool func_196(int iParam0){
return func_197(func_186(iParam0));
}

int func_197(int iParam0){
switch (iParam0){
case 190:
case 191:
case 192:
return 1;
default:
}
return 0;
}

int func_198(){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_122)){
if(func_200(PLAYER::PLAYER_ID())){
return 0;
}
if(func_240(PLAYER::PLAYER_ID()) || func_199(PLAYER::PLAYER_ID())){
return 1;
}}
return 0;
}

int func_199(int iParam0){
if(func_208(Global_1853910[iParam0 /*862*/].f_267.f_33, -1)){
return 1;
}
return 0;
}

int func_200(int iParam0){
if(iParam0 !=func_11()){
if(func_10(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[iParam0 /*466*/].f_321.f_10 !=func_11()){
return func_9(Global_2657589[iParam0 /*466*/].f_321.f_7)==25;
}}}
return 0;
}


void func_201(bool bParam0){
if(((func_177() && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID())) && !func_182()) && !Global_1949965){
if(func_189()){
func_188("WHPRIVSESLAP");
}elseif(!bParam0){
if(func_168() >=func_167()){
func_202(&iLocal_111, 1, "WHSECUROMAXVIP", 0, 0, 0, 0);
}elseif(func_163(PLAYER::PLAYER_ID())){
func_202(&iLocal_111, 1, "PIM_EXECH0x1", 0, 0, 0, 0);
}elseif(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
func_188("WHSECUROBLCK");
}else{
func_202(&iLocal_111, 1, "SECINPUTTREGLAP", 0, 0, 0, 0);
}}elseif(func_67(PLAYER::PLAYER_ID())){
func_188("WHBIKERBLCK");
}elseif((func_243(&uLocal_116) && func_239(&uLocal_116, 10000, 1)) || !iLocal_113){
if(func_244(PLAYER::PLAYER_ID()) || Global_1949965==1){
iLocal_113=1;
if(!Global_1949965){
func_188("WHSECUROBLCK");
}}else{
if(func_203()){
HUD::CLEAR_HELP(1);
}
iLocal_113=0;
func_238(&uLocal_116);
func_202(&iLocal_111, 1, "WHSECUROINPUT", 0, 0, 0, 0);
}}elseif(iLocal_113){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_188("WHSECUROBLCK");
}
if(!func_244(PLAYER::PLAYER_ID())){
HUD::CLEAR_HELP(1);
iLocal_113=0;
}}}}


void func_202(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6){
int iVar0;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1){}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!*iParam0==-1){
func_205(iParam0);
}
return;
}
if(!*iParam0==-1){
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
*iParam0=Global_44000[iVar0 /*32*/].f_1;
return;
}
iVar0++;
}}

int func_203(){
if((((((((((func_204("MP_OFF_LAP_1") || func_204("WHPRIVSESLAP")) || func_204("WHSECUROBLCK")) || func_204("SECINPUTTREGLAP")) || func_204("BIKERWHINPUT")) || func_204("BIKERWHBLCKA")) || func_204("BIKERWHBLCKB")) || func_204("WHBIKERBLCK")) || func_204("BIKERWHBLCKC")) || func_204("BIKERWHBLCKD")) || func_204("ARENAWHINPUT")){
return 1;
}
return 0;
}


var func__204(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_205(int iParam0){
int iVar0;
if(*iParam0==-1){
return;
}
iVar0=func_180(*iParam0);
if(iVar0==-1){
*iParam0=-1;
return;
}
if(iVar0 > -1 && iVar0 < 6){
if(Global_44000[iVar0 /*32*/]){
Global_44000[iVar0 /*32*/].f_7=1;
*iParam0=-1;
return;
}}
*iParam0=-1;
}

int func_206(int iParam0){
if(func_208(Global_1853910[iParam0 /*862*/].f_267.f_33, -1) && !MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 1)){
return 1;
}
return 0;
}

int func_207(int iParam0){
if(iParam0 !=func_11()){
if(func_10(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_9(Global_2657589[iParam0 /*466*/].f_321.f_7)==1;
}}}
return 0;
}

int func_208(int iParam0, int iParam1){
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

int func_209(int iParam0){
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


bool func_210(){
return Global_77337;
}

int func_211(){
if(((func_2(PLAYER::PLAYER_PED_ID()) && func_169(PLAYER::PLAYER_ID(), 1)) && func_187(PLAYER::PLAYER_ID(), 0)) && func_70(PLAYER::PLAYER_ID())){
if(func_186(PLAYER::PLAYER_ID())==256){
if(ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 1155f, -3200.515f, -40.05f, 1176.79f, -3189.532f, -34.785f, 0, 1, 0)){
return 1;
}}
if(func_186(PLAYER::PLAYER_ID())==271){
if(ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -1470.88f, -528.8513f, 75.0839f, -1472.63f, -526.5934f, 73.3136f, 0, 1, 0)){
return 1;
}elseif(ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 1008.467f, -3167.947f, -37.5246f, 1006.903f, -3171.152f, -39.6192f, 0, 1, 0)){
return 1;
}}}
return 0;
}


bool func_212(){
return MISC::IS_BIT_SET(Global_1950108.f_11, 1);
}

int func_213(){
if(func_215(PLAYER::PLAYER_ID())==150 && func_214(PLAYER::PLAYER_PED_ID(), 3084.511f, -4686.664f, 26.2522f, 50f, 1)){
return 1;
}
return 0;
}


bool func_214(int iParam0, struct<3> Param1, float fParam2, int iParam3){
return vdist2(ENTITY::GET_ENTITY_COORDS(iParam0, iParam3), Param1) <=(fParam2 * fParam2);
}

int func_215(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return Global_1894573[iVar0 /*608*/];
}
return -1;
}

int func_216(int iParam0){
if(func_186(iParam0)==243){
return func_217(iParam0);
}
return -1;
}

int func_217(int iParam0){
if(func_187(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_182;
}
return -1;
}

int func_218(){
return func_227(PLAYER::PLAYER_ID());
}


bool func_219(){
return Global_1853910[PLAYER::PLAYER_ID() /*862*/]==148;
}


var func__220(){
return Global_75694;
}


var func__221(){
return Global_1935689;
}

int func_222(){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1, 0)==PLAYER::PLAYER_PED_ID()){
return 1;
}}
return 0;
}

int func_223(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0){
return 1;
}
return 0;
}

int func_224(int iParam0){
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

int func_225(float fParam0, float fParam1, float fParam2){
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
if(fVar0 > fVar1){
if(fParam0 < fVar0 && fParam0 > fVar1){
return 1;
}}elseif(fParam0 < fVar0 || fParam0 > fVar1){
return 1;
}
return 0;
}

int func_226(){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_122)){
if(func_241(PLAYER::PLAYER_ID())){
return 1;
}}
return 0;
}

int func_227(int iParam0){
if(iParam0 !=func_11()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_11()){
return Global_1894573[iParam0 /*608*/].f_10==iParam0;
}}
return 0;
}

int func_228(){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_122) && func_8(PLAYER::PLAYER_ID())){
return 1;
}
return 0;
}

int func_229(){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_122) && func_207(PLAYER::PLAYER_ID())){
return 1;
}
return 0;
}

int func_230(int iParam0){
if(func_208(Global_1853910[iParam0 /*862*/].f_267.f_33, -1)){
return 1;
}
return 0;
}

int func_231(){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_122)){
if(ENTITY::GET_ENTITY_MODEL(iLocal_122)==joaat("ex_prop_monitor_01_ex") || func_241(PLAYER::PLAYER_ID())){
return 1;
}}
return 0;
}


void func_232(int iParam0){
if(func_237()){
return;
}
if(!Global_20383.f_1==1){
if(func_224(0)){
func_233(iParam0);
}
MISC::SET_BIT(&Global_8254, 2);
}}


void func_233(int iParam0){
if(func_237()){
return;
}
if(Global_20584){
if(func_236()){
func_235(1, 1);
}else{
func_235(0, 0);
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
if(!func_234()){
Global_20383.f_1=3;
}}

int func_234(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_235(bool bParam0, bool bParam1){
if(bParam0){
if(func_224(0)){
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


bool func_236(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}


bool func_237(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}


void func_238(var uParam0){
uParam0->f_1=0;
}

int func_239(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_242(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}

int func_240(int iParam0){
int iVar0;
if(iParam0 !=func_11()){
if(func_10(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
iVar0=func_9(Global_2657589[iParam0 /*466*/].f_321.f_7);
return (iVar0==2 || iVar0==25);
}}}
return 0;
}

int func_241(int iParam0){
if(iParam0 !=func_11()){
if(func_10(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_9(Global_2657589[iParam0 /*466*/].f_321.f_7)==0;
}}}
return 0;
}


void func_242(var uParam0, bool bParam1, bool bParam2){
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


bool func_243(var uParam0){
return uParam0->f_1;
}


bool func_244(int iParam0){
return func_245(func_186(iParam0));
}

int func_245(int iParam0){
switch (iParam0){
case 167:
case 169:
case 168:
return 1;
default:
}
return 0;
}


bool func_246(int iParam0){
return Global_43257==iParam0;
}


void func_247(){
if(iLocal_111 !=-1){
func_205(&iLocal_111);
}
if(func_203()){
HUD::CLEAR_HELP(1);
}
Global_1949965=0;
Global_1949964=0;
}