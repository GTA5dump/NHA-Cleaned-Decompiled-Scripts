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
float fLocal_13=0f;
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
int iLocal_29=0;
int iLocal_30=0;
int iLocal_31=0;
int iLocal_32=0;
int iLocal_33[21]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
float fLocal_34=0f;
struct<3> Local_35={
0, 0, 0 
};
int iLocal_36=0;
int iLocal_37=0;
struct<9> Local_38={
0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<9> Local_39={
0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<3> Local_40={
0, 0, 0 
};
struct<3> Local_41={
0, 0, 0 
};
struct<3> Local_42={
0, 0, 0 
};
float fLocal_43=0f;
float fLocal_44=0f;
float fLocal_45=0f;
float fLocal_46=0f;
float fLocal_47=0f;
int iLocal_48=0;
bool bLocal_49=0;
int iLocal_50=0;
int iLocal_51=0;
int iLocal_52=0;
int iLocal_53=0;
int iLocal_54=0;
int iLocal_55=0;
int iLocal_56=0;
char* sLocal_57=NULL;
int iLocal_58=0;
var uLocal_59=0;
var uLocal_60=0;
float fLocal_61=0f;
float fLocal_62=0f;
float fLocal_63=0f;
var uLocal_64=0;
var uLocal_65=0;
var uLocal_66=0;
var uLocal_67=0;
var uLocal_68=0;
int iLocal_69=0;
int iLocal_70=0;
int iLocal_71=0;
int iLocal_72=0;
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
bool bLocal_88=0;
float fLocal_89=0f;
int iLocal_90=0;
int iLocal_91=0;
int iLocal_92=0;
int iLocal_93=0;
int iLocal_94=0;
int iLocal_95=0;
int iLocal_96=0;
int iLocal_97=0;
float fLocal_98=0f;
float fLocal_99=0f;
float fLocal_100=0f;
float fLocal_101=0f;
float fLocal_102=0f;
float fLocal_103=0f;
float fLocal_104=0f;
float fLocal_105=0f;
int iLocal_106[11]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
bool bLocal_107=0;
struct<68> Local_108={
0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 
};
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
float fLocal_130=0f;
var uLocal_131=0;
var uLocal_132=0;
var uLocal_133=0;
int iLocal_134=0;
int iLocal_135=0;
int iLocal_136=0;
struct<3> Local_137={
0, 0, 0 
};
var uLocal_138[2]={
0, 0 
};
int iLocal_139=0;
int iLocal_140=0;
int iLocal_141=0;
int iLocal_142=0;
int iLocal_143=0;
int iLocal_144=0;
int iLocal_145=0;
bool bLocal_146=0;
bool bLocal_147=0;
bool bLocal_148=0;
int iLocal_149=0;
int iLocal_150=0;
bool bLocal_151=0;
int iLocal_152=0;
int iLocal_153=0;
bool bLocal_154=0;
bool bLocal_155=0;
bool bLocal_156=0;
int iLocal_157=0;
int iLocal_158=0;
int iLocal_159=0;
int iLocal_160=0;
bool bLocal_161=0;
var uLocal_162=0;
int iLocal_163=0;
int iLocal_164=0;
int iLocal_165=0;
int iLocal_166=0;
int iLocal_167=0;
var uLocal_168=0;
int iLocal_169=0;
int iLocal_170=0;
int iLocal_171=0;
int iLocal_172=0;
var uLocal_173=0;
var uLocal_174=0;
int iLocal_175=0;
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
struct<3> Local_207={
0, 0, 0 
};
struct<3> Local_208={
0, 0, 0 
};
struct<3> Local_209={
0, 0, 0 
};
struct<3> Local_210={
0, 0, 0 
};
struct<3> Local_211={
0, 0, 0 
};
struct<3> Local_212={
0, 0, 0 
};
float fLocal_213=0f;
float fLocal_214=0f;
float fLocal_215=0f;
float fLocal_216=0f;
int iLocal_217=0;
int iLocal_218=0;
char* sLocal_219=NULL;
char* sLocal_220=NULL;
int iLocal_221=0;
char* sLocal_222=NULL;
char* sLocal_223=NULL;
char* sLocal_224[3]={
NULL, NULL, NULL 
};
char* sLocal_225[3]={
NULL, NULL, NULL 
};
char* sLocal_226[3]={
NULL, NULL, NULL 
};
char* sLocal_227[3]={
NULL, NULL, NULL 
};
struct<5> Local_228={
0, 0, 0, 0, 0 
};
var uLocal_229=0;
var uLocal_230=0;
#endregion

void __EntryFunction__(){
struct<460> Var0;
int iVar1;
struct<4> Var2;
struct<3> Var3;
struct<25> Var4;
struct<682> Var5;
struct<532> Var6;
bool bVar7;
bool bVar8;
bool bVar9;
bool bVar10;
var uVar11;
int iVar12;
int iVar13;
int iVar14;
float fVar15;
float fVar16;
struct<3> Var17;
struct<3> Var18;
struct<3> Var19;
struct<3> Var20;
struct<3> Var21;
char* sVar22;
var uVar23;
var uVar24;
var uVar25;
var uVar26[20];
var uVar27;
int iVar28;
int iVar29;
int iVar30;
int iVar31;
int iVar32;
int iVar33;
float fVar34;
int iVar35;
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
iLocal_28=joaat("prop_dart_1");
iLocal_29=joaat("prop_dart_2");
iLocal_32=joaat("prop_dart_bd_cab_01");
fLocal_34=0.063f;
Local_35={
-0.0035f, 0f, -0.001f 
};
iLocal_37=joaat("prop_target_bull");
Local_42={
987.8541f, -98.4173f, 73.8599f 
};
fLocal_47=0.1f;
iLocal_58=3;
fLocal_61=80f;
fLocal_62=140f;
fLocal_63=180f;
iLocal_69=1;
iLocal_70=65;
iLocal_71=49;
iLocal_72=64;
iLocal_95=65;
iLocal_97=660;
fLocal_102=0.27f;
fLocal_103=0.1f;
fLocal_104=-120f;
fLocal_105=127f;
fLocal_130=((0.05f + 0.275f) - 0.01f);
Local_137={
500f, 500f, 500f 
};
bLocal_148=true;
Local_209={
-573.1373f, 294.0269f, 78.1765f 
};
Local_210={
-574.1169f, 292.7964f, 78.1766f 
};
Local_211={
1995.295f, 3050.084f, 46.91535f 
};
Local_212={
1995.488f, 3047.383f, 46.91535f 
};
fLocal_213=172.6813f;
fLocal_214=274.5094f;
fLocal_215=142.6717f;
fLocal_216=44.8785f;
Var0.f_1=2;
Var0.f_5=2;
Var0.f_5.f_1=3;
Var0.f_5.f_1.f_79=3;
Var0.f_164=3;
Var0.f_257=16;
Var0.f_422=2;
Var0.f_425=2;
Var0.f_429=2;
Var0.f_432=2;
Var0.f_437=2;
Var0.f_440=2;
Var0.f_443=2;
Var0.f_446=2;
Var0.f_449=2;
Var4.f_1=2;
Var4.f_1.f_1=7;
Var4.f_1.f_1.f_8=7;
Var5.f_3=8;
Var5.f_12=8;
Var5.f_21=4;
Var5.f_26.f_3=8;
Var5.f_26.f_12=8;
Var5.f_26.f_21=4;
Var5.f_72=3;
Var5.f_72.f_44.f_3.f_1=4;
Var5.f_72.f_113=2;
Var5.f_72.f_113.f_1.f_1=4;
Var5.f_72.f_113.f_1.f_66.f_1=4;
Var5.f_72.f_246.f_6=12;
Var5.f_72.f_246.f_187=3;
Var5.f_509.f_2=8;
Var5.f_509.f_2.f_1.f_3=4;
Var5.f_509.f_2.f_1.f_15.f_3=4;
Var5.f_509.f_2.f_1.f_15.f_15.f_3=4;
Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_3=4;
Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_3=4;
Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3=4;
Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3=4;
Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3=4;
Var5.f_681=2;
Var6.f_32=3;
Var6.f_36=1;
Var6.f_53=2;
Var6.f_57=13;
Var6.f_71=13;
Var6.f_280=13;
Var6.f_489=13;
Var6.f_503=13;
Var6.f_517=13;
Var6.f_531=13;
iVar13=0;
sLocal_222="facials@gen_female@variations@happy";
switch (func_506(PLAYER::PLAYER_PED_ID())){
case 0:
sLocal_223="facials@p_m_zero@variations@happy";
break;
case 1:
sLocal_223="facials@p_m_one@variations@happy";
break;
case 2:
sLocal_223="facials@p_m_two@variations@happy";
break;
}
sLocal_224[0]="mood_happy_1";
sLocal_224[1]="mood_happy_2";
sLocal_224[2]="mood_happy_3";
sLocal_225[0]="darts_outro_01_guy1";
sLocal_225[1]="darts_outro_02_guy2";
sLocal_225[2]="darts_outro_03_guy2";
sLocal_226[0]="darts_outro_01_guy2";
sLocal_226[1]="darts_outro_02_guy1";
sLocal_226[2]="darts_outro_03_guy1";
sLocal_227[0]="darts_outro_01_cam";
sLocal_227[1]="darts_outro_02_cam";
sLocal_227[2]="darts_outro_03_cam";
uLocal_138[0]=PLAYER::PLAYER_PED_ID();
bLocal_151=true;
Var17={
1992.293f, 3050.583f, 47.98973f 
};
Var18={
-572.0406f, 294.1958f, 79.9374f 
};
func_505();
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iLocal_175=1;
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2)){
case 0:
iLocal_172=joaat("a_f_m_salton_01");
break;
case 1:
iLocal_172=joaat("a_f_o_salton_01");
break;
}
iLocal_170=10;
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
}
if(!ENTITY::DOES_ENTITY_EXIST(ScriptParam_228.f_4)){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(iLocal_175==2){
ScriptParam_228={
Var18 
};
ScriptParam_228.f_3=-0.09f;
}else{
ScriptParam_228={
Var17 
};
ScriptParam_228.f_3=57.78315f;
}
if(OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(ScriptParam_228, 5f, joaat("prop_dart_bd_cab_01"), 0)){
ScriptParam_228.f_4=OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ScriptParam_228, 5f, joaat("prop_dart_bd_cab_01"), 1, 0, 1);
OBJECT::GET_COORDS_AND_ROTATION_OF_CLOSEST_OBJECT_OF_TYPE(ScriptParam_228, 5f, joaat("prop_dart_bd_cab_01"), &ScriptParam_228, &Var19, 0);
ScriptParam_228.f_3=Var19.f_2;
}}}else{
Var19={
ENTITY::GET_ENTITY_COORDS(ScriptParam_228.f_4, 1) 
};
}
if(!ENTITY::IS_ENTITY_DEAD(func_504(), 0)){
func_502(iLocal_170, 1);
if(PED::IS_PED_IN_ANY_VEHICLE(func_504(), 0)){
TASK::TASK_LEAVE_ANY_VEHICLE(func_504(), 0, 0);
}
uLocal_138[1]=func_504();
}else{
MISC::SET_MISSION_FLAG(1);
}
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67)){
func_493();
func_475(&Var0, &Var5, &Var6);
}
HUD::DISPLAY_AREA_NAME(0);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
func_473(1);
iLocal_166=func_470(func_506(uLocal_138[0]), 1);
fVar15=(to_float(iLocal_166) / 100f);
fVar16=(fVar15 * 1200f);
iLocal_97=round(fVar16);
if(iLocal_97 < 660){
iLocal_97=660;
}
func_469(23, 1);
while (true){
wait(0);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
if(iLocal_158 && Var0.f_0 < 13){
GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(Var4.f_0, Var4.f_18, Var4.f_21, Var4.f_24, Var4.f_24, 2);
}
if((PED::IS_PED_INJURED(ScriptParam_228.f_5) && !ENTITY::DOES_ENTITY_EXIST(func_504())) || (ENTITY::DOES_ENTITY_EXIST(func_504()) && PED::IS_PED_INJURED(func_504()))){
func_475(&Var0, &Var5, &Var6);
}
if(!PED::IS_PED_INJURED(uLocal_138[0])){
PED::SET_PED_RESET_FLAG(uLocal_138[0], 239, 1);
PED::SET_PED_RESET_FLAG(uLocal_138[0], 124, 1);
func_468();
PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOU(0);
PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOU(2);
iVar14=0;
while (iVar14 < PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar26, -1)){
if(uVar26[iVar14] !=uLocal_138[1]){
if(!PED::IS_PED_INJURED(uVar26[iVar14])){
PED::SET_PED_RESET_FLAG(uVar26[iVar14], 240, 1);
}}
iVar14++;
}
switch (Var0.f_0){
case 0:
HUD::CLEAR_HELP(1);
func_467(&(Var0.f_243), &ScriptParam_228);
func_466(Var0.f_243.f_1, Var0.f_243.f_4);
if(ENTITY::DOES_ENTITY_EXIST(Var0.f_243)){
Local_207={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Var0.f_243, 0.7792f, -1.138f, 0.1814f) 
};
Local_208={
-7.9947f, 0f, (Var0.f_243.f_4 + 36.19176f) 
};
uLocal_84=CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_207, Local_208, 65f, 0, 2);
CAM::SET_CAM_FOV(uLocal_84, 30f);
}
func_465();
settimera(0);
Var0.f_0=1;
break;
case 1:
if(timera() > 500 && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())){
MISC::CLEAR_AREA(ScriptParam_228, 0.5f, 1, 0, 0, 0);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
TASK::CLEAR_SEQUENCE_TASK(&uLocal_173);
TASK::OPEN_SEQUENCE_TASK(&uLocal_173);
TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_173);
TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_173);
}
Local_42={
Local_42 
};
Var0.f_0=2;
}
break;
case 2:
iVar28=0;
while (iVar28 < 2){
iVar29=0;
while (iVar29 < 3){
func_464(&(Var0.f_5[iVar28 /*79*/][iVar29 /*26*/]), iVar28);
iVar29++;
}
iVar28++;
}
iVar30=0;
while (iVar30 < 3){
func_464(&(Var0.f_164[iVar30 /*26*/]), 0);
iVar30++;
}
iVar1=2;
func_463(0);
func_461(&Var4, iLocal_175, Var0.f_243.f_1, Var0.f_243.f_4);
if(ENTITY::DOES_ENTITY_EXIST(Var0.f_243)){
Var19={
ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Var0.f_243, Var4.f_18) 
};
}
func_458(&Var4, &Var5);
AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
Var0.f_0=3;
break;
case 3:
if(func_455(&Var4, &Var5)){
func_452(&(Var0.f_243), &Var2, &Var3, 0);
iLocal_217=func_506(uLocal_138[0]);
switch (iLocal_217){
case 0:
sLocal_219=func_451("MICHAEL");
if(!MISC::IS_BIT_SET(Global_113609, 0)){
sVar22="darts_ig_intro_player_0_face";
}else{
sVar22="darts_ig_intro_alt1_player_0_face";
}
break;
case 1:
sLocal_219=func_451("FRANKLIN");
bLocal_155=true;
if(!MISC::IS_BIT_SET(Global_113609, 0)){
sVar22="darts_ig_intro_player_1_face";
}else{
sVar22="darts_ig_intro_alt1_player_1_face";
}
break;
case 2:
sLocal_219=func_451("TREVOR");
if(!MISC::IS_BIT_SET(Global_113609, 0)){
sVar22="darts_ig_intro_player_2_face";
}else{
sVar22="darts_ig_intro_alt1_player_2_face";
}
break;
}
if(!ENTITY::IS_ENTITY_DEAD(func_504(), 0)){
iLocal_218=func_506(func_504());
if(iLocal_218==145){
iLocal_218=func_448(func_504());
}
switch (iLocal_218){
case 0:
sLocal_220=func_451("MICHAEL");
break;
case 1:
sLocal_220=func_451("FRANKLIN");
break;
case 2:
sLocal_220=func_451("TREVOR");
break;
case 19:
sLocal_220=func_451("LAMAR");
PED::SET_PED_COMPONENT_VARIATION(func_504(), 5, 2, 0, 0);
break;
case 14:
sLocal_220=func_451("JIMMY");
break;
default:
sLocal_220="NEW_GUY";
break;
}
}
else{
iVar12=MISC::GET_RANDOM_INT_IN_RANGE(0, 200);
if(iLocal_175==2){
if(iVar12 < 51){
sLocal_220=func_451("RAYMOND");
iLocal_221=954610991;
}elseif(iVar12 < 101){
sLocal_220=func_451("JOHAN");
iLocal_221=94453331;
}elseif(iVar12 < 151){
sLocal_220=func_451("STAN");
iLocal_221=1891555423;
}else{
sLocal_220=func_451("VINCE");
iLocal_221=-1067630349;
}}elseif(iVar12 < 51){
sLocal_220=func_451("KRISTY");
iLocal_221=885327384;
}elseif(iVar12 < 101){
sLocal_220=func_451("MARLENE");
iLocal_221=-1791000994;
}elseif(iVar12 < 151){
sLocal_220=func_451("LORIE");
iLocal_221=1954368234;
}else{
sLocal_220=func_451("SHELLEY");
iLocal_221=-863218904;
}
}
uLocal_36=OBJECT::CREATE_OBJECT(iLocal_37, Var3, 1, 1, 0);
Var0.f_446[0]=0;
Var0.f_446[1]=0;
Var0.f_0=4;
}
break;
case 4:
if(!CAM::IS_INTERPOLATING_TO_SCRIPT_CAMS()){
uVar27=OBJECT::CREATE_OBJECT(joaat("prop_dart_1"), Var3, 1, 1, 0);
func_445(Var0.f_243.f_4, Var2, &uVar26, &ScriptParam_228);
func_444(&Var4, sLocal_219, sLocal_220);
TASK::CLEAR_PED_TASKS(uLocal_138[1]);
uLocal_174=CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), 0, 0, 0);
}
func_443(&(Var0.f_257), 0, PLAYER::PLAYER_PED_ID(), sLocal_219, 0, 1);
if(ENTITY::IS_ENTITY_DEAD(func_504(), 0)){
if(iLocal_175==2){
func_443(&(Var0.f_257), 3, uLocal_138[1], "DartsBillLost1", 0, 1);
}else{
func_443(&(Var0.f_257), 3, uLocal_138[1], "DartsMelHick1", 0, 1);
}
iVar13=-1;
}
else{
func_443(&(Var0.f_257), 3, func_504(), sLocal_220, 0, 1);
func_441(&uVar25);
iVar13=6;
}
if(!MISC::IS_BIT_SET(Global_113609, 0)){
iVar13=-1;
}
else{
iVar13=3;
}
func_440(&Var4, 0);
Var0.f_0=5;
}
break;
case 5:
if((((!PED::IS_PED_INJURED(uLocal_138[1]) && PED::IS_PED_ON_FOOT(uLocal_138[0])) && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_138[0], 1)) && PED::IS_PED_ON_FOOT(uLocal_138[1])) && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_138[1], 1)){
bLocal_146=func_438(&uLocal_162);
if((func_437() && MISC::GET_GAME_TIMER() >=iLocal_164 + 1000) && iVar13 !=9){
if(!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT()){
CAM::DO_SCREEN_FADE_OUT(500);
}
}
if(CAM::IS_SCREEN_FADED_OUT() && iVar13 !=9){
func_433(0);
func_431();
iVar13=9;
}
switch (iVar13){
case -1:
if(!PED::IS_PED_INJURED(uLocal_138[1])){
uLocal_168=PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(ScriptParam_228.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (ENTITY::GET_ENTITY_HEADING(ScriptParam_228.f_4) - 3.783146f), 2);
uLocal_174=CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_174, uLocal_168, "darts_ig_intro_cam", "mini@dartsintro");
CAM::SET_CAM_ACTIVE(uLocal_174, 1);
CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
TASK::TASK_CLEAR_LOOK_AT(uLocal_138[0]);
TASK::TASK_CLEAR_LOOK_AT(uLocal_138[1]);
TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_138[0]);
TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_138[1]);
TASK::TASK_SYNCHRONIZED_SCENE(uLocal_138[1], uLocal_168, "mini@dartsintro", "darts_ig_intro_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
TASK::TASK_SYNCHRONIZED_SCENE(uLocal_138[0], uLocal_168, "mini@dartsintro", "darts_ig_intro_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
TASK::TASK_PLAY_ANIM(uLocal_138[1], "mini@dartsintro", "darts_ig_intro_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
TASK::TASK_PLAY_ANIM(uLocal_138[0], "mini@dartsintro", sVar22, 8f, -8f, -1, 32, 0, 0, 0, 0);
ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uVar27, uLocal_168, "darts_ig_intro_dart", "mini@dartsintro", 1000f, 1090519040, 0, 1148846080);
func_430(&uVar25);
iVar13++;
}
break;
case 0:
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_168)){
if(!bVar9){
if(func_429(&uVar25) > 1.5f){
func_428(uLocal_138[0], "DARTS_REQUEST_GAME", 6);
bVar9=true;
func_427(&uVar25);
}
}
elseif(!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_138[0])){
if(!bVar10){
if(!func_426(&uVar25)){
func_441(&uVar25);
}elseif(func_429(&uVar25) > 0.5f){
func_425(uLocal_138[1]);
func_427(&uVar25);
bVar10=true;
}
}
}
switch (iLocal_31){
case 0:
func_430(&uVar25);
func_424("DARTS_HOW_TO_2", -1);
iLocal_31++;
break;
case 1:
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_168) > 0.25f){
func_430(&uVar25);
func_424("DARTS_HOW_TO_3", -1);
iLocal_31++;
}
break;
case 2:
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_168) > 0.55f){
func_424("DARTS_HOW_3A", -1);
iLocal_31++;
}
break;
case 3:
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_168) > 0.85f){
func_424("DARTS_HOW_3A", -1);
iLocal_31++;
}
break;
}
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_168) > 0.95f){
iLocal_158=1;
iVar13++;
}
elseif((MISC::GET_GAME_TIMER() % 1000) < 50){
}}
break;
case 1:
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_168) > 0.99f){
if(!PED::IS_PED_INJURED(uLocal_138[1])){
func_421(Var0.f_243.f_1, Var0.f_243.f_4, func_423(2), func_422(0), 0, 1);
iLocal_31=0;
HUD::CLEAR_HELP(1);
CAM::DESTROY_CAM(uLocal_174, 0);
TASK::CLEAR_PED_TASKS(uLocal_138[0]);
TASK::CLEAR_PED_TASKS(uLocal_138[1]);
ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uVar27, -1000f, 0);
OBJECT::DELETE_OBJECT(&uVar27);
AUDIO::STOP_AUDIO_SCENE(func_420(0));
func_427(&uVar25);
Var0.f_0=6;
iVar13=0;
}}
break;
case 3:
if(!PED::IS_PED_INJURED(uLocal_138[1])){
uLocal_168=PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(ScriptParam_228.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (ENTITY::GET_ENTITY_HEADING(ScriptParam_228.f_4) - 3.783146f), 2);
uLocal_174=CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_174, uLocal_168, "darts_ig_intro_alt1_cam", "mini@dartsintro_alt1");
CAM::SET_CAM_ACTIVE(uLocal_174, 1);
CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
TASK::TASK_CLEAR_LOOK_AT(uLocal_138[0]);
TASK::TASK_CLEAR_LOOK_AT(uLocal_138[1]);
TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_138[0]);
TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_138[1]);
TASK::TASK_SYNCHRONIZED_SCENE(uLocal_138[1], uLocal_168, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
TASK::TASK_SYNCHRONIZED_SCENE(uLocal_138[0], uLocal_168, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
TASK::TASK_PLAY_ANIM(uLocal_138[1], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
TASK::TASK_PLAY_ANIM(uLocal_138[0], "mini@dartsintro_alt1", sVar22, 8f, -8f, -1, 32, 0, 0, 0, 0);
ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uVar27, uLocal_168, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, 1090519040, 0, 1148846080);
func_430(&uVar25);
iVar13++;
}
break;
case 4:
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_168)){
if(!bVar9){
if(func_429(&uVar25) > 0.5f){
func_428(uLocal_138[0], "DARTS_REQUEST_GAME", 6);
bVar9=true;
func_427(&uVar25);
}
}
elseif(!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_138[0])){
if(!bVar10){
if(!func_426(&uVar25)){
func_441(&uVar25);
}elseif(func_429(&uVar25) > 0.25f){
func_425(uLocal_138[1]);
func_427(&uVar25);
bVar10=true;
}
}
}
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_168) > 0.95f){
iLocal_158=1;
iVar13++;
}
elseif((MISC::GET_GAME_TIMER() % 1000) < 50){
}}
break;
case 5:
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_168) > 0.99f){
if(!PED::IS_PED_INJURED(uLocal_138[1])){
func_419();
CAM::DESTROY_CAM(uLocal_174, 0);
TASK::CLEAR_PED_TASKS(uLocal_138[0]);
TASK::CLEAR_PED_TASKS(uLocal_138[1]);
ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uVar27, -1000f, 0);
OBJECT::DELETE_OBJECT(&uVar27);
AUDIO::STOP_AUDIO_SCENE(func_420(0));
func_427(&uVar25);
Var0.f_0=6;
iVar13=0;
}}
break;
case 9:
if(CAM::IS_SCREEN_FADED_OUT()){
iLocal_158=1;
iLocal_31=0;
HUD::CLEAR_HELP(1);
if(!PED::IS_PED_INJURED(uLocal_138[1])){
ENTITY::SET_ENTITY_COORDS(uLocal_138[0], Var2, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(uLocal_138[0], Var0.f_243.f_4);
ENTITY::SET_ENTITY_COORDS(uLocal_138[1], Var2.f_3, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(uLocal_138[1], Var0.f_243.f_4);
TASK::CLEAR_PED_TASKS(uLocal_138[0]);
TASK::CLEAR_PED_TASKS(uLocal_138[1]);
}
CAM::DESTROY_CAM(uLocal_174, 0);
ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uVar27, -1000f, 0);
OBJECT::DELETE_OBJECT(&uVar27);
if(!MISC::IS_BIT_SET(Global_113609, 0)){
func_421(Var0.f_243.f_1, Var0.f_243.f_4, func_423(2), func_422(0), 0, 1);
}
else{
func_419();
}
AUDIO::STOP_AUDIO_SCENE(func_420(0));
func_427(&uVar25);
CAM::DO_SCREEN_FADE_IN(500);
Var0.f_0=6;
iVar13=0;
}
break;
}}
break;
case 6:
switch (iVar13){
case 0:
iLocal_164=MISC::GET_GAME_TIMER();
if(!PED::IS_PED_INJURED(uLocal_138[1])){
ENTITY::SET_ENTITY_COORDS(uLocal_138[0], Var2, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(uLocal_138[0], Var0.f_243.f_4);
ENTITY::SET_ENTITY_COORDS(uLocal_138[1], Var2.f_3, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(uLocal_138[1], Var0.f_243.f_4);
}
AUDIO::START_AUDIO_SCENE(func_420(1));
iVar13=0;
Var0.f_0=7;
break;
case 1:
if((MISC::GET_GAME_TIMER() - iLocal_164) > 1500){
func_417(&(Var5.f_57), "DARTS_TITLE", 0, 4000, 12, 2, 0, 0);
iVar13++;
}
break;
case 2:
if(!func_416(&(Var5.f_57), 1, 0)){
AUDIO::START_AUDIO_SCENE(func_420(1));
iVar13=0;
Var0.f_0=7;
}
break;
}
break;
case 7:
if(!MISC::IS_BIT_SET(Global_113609, 0)){
if(func_413(&iVar1, &(Var0.f_243), &(Var0.f_249), &(Var0.f_1), &(Var0.f_164), &uVar24)){
MISC::SET_BIT(&Global_113609, 0);
Var0.f_0=8;
}}else{
CAM::SET_CAM_ACTIVE(uLocal_75, 1);
Var0.f_0=8;
}
break;
case 8:
if(CAM::IS_SCREEN_FADED_OUT()){
CAM::DO_SCREEN_FADE_IN(500);
}
switch (iVar13){
case 0:
if(!ENTITY::DOES_ENTITY_EXIST(func_504())){
if(!MISC::IS_BIT_SET(Global_113609, 10)){
MISC::SET_BIT(&Global_113609, 10);
}else{
MISC::CLEAR_BIT(&Global_113609, 10);
}
func_411(&Var5);
iVar13++;
}else{
func_411(&Var5);
iVar13++;
}
break;
case 1:
if(MISC::IS_PC_VERSION()){
if(fLocal_89 !=GRAPHICS::GET_ASPECT_RATIO(0)){
fLocal_89=GRAPHICS::GET_ASPECT_RATIO(0);
CAM::SET_CAM_FOV(uLocal_75, func_410(fLocal_89));
CAM::SET_CAM_FOV(uLocal_76, func_410(fLocal_89));
}}
if(func_350(&Var5, &(Var0.f_452), &(Var0.f_453))){
AUDIO::STOP_AUDIO_SCENE(func_420(1));
if(Var0.f_452 > 0){
iVar13=0;
if(Var0.f_452 > 1 || Var0.f_453 > 1){
func_349(&Var4, 0, 0, 0, 0);
bVar8=true;
}
func_346(1, -1);
Var0.f_0=9;
}elseif(Var0.f_452 < 0){
Var0.f_0=15;
}}
break;
}
break;
case 9:
if(func_339(&Var0, &Var4, &Var5)){
Var0.f_249.f_4=1;
if(Global_113648.f_18972.f_5 >=5 && Global_113648.f_18972.f_7 >=0.8f){
Var0.f_249.f_4=2;
}
elseif(Global_113648.f_18972.f_5 >=3 && Global_113648.f_18972.f_7 >=0.66f){
Var0.f_249.f_4=1;
}
else{
Var0.f_249.f_4=0;
}
if(func_338(Global_113648.f_18972.f_5, &iLocal_167)){
func_337(&(Var5.f_666), 24, 1);
}
fLocal_45=func_336(Global_113648.f_18972.f_5);
fLocal_46=func_335(Global_113648.f_18972.f_5);
fLocal_43=fLocal_45;
fLocal_44=fLocal_46;
iLocal_106[4]++;
if(!PED::IS_PED_INJURED(uLocal_138[1])){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_138[1]);
ENTITY::SET_ENTITY_COORDS(uLocal_138[1], Var2.f_3, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(uLocal_138[1], Var0.f_243.f_4);
}
if(func_426(&uVar23)){
func_427(&uVar23);
}
AUDIO::START_AUDIO_SCENE(func_420(2));
func_334(uLocal_138[1]);
Var0.f_0=10;
Var0.f_1=2;
}
break;
case 10:
if(MISC::IS_PC_VERSION()){
if(fLocal_89 !=GRAPHICS::GET_ASPECT_RATIO(0)){
fLocal_89=GRAPHICS::GET_ASPECT_RATIO(0);
CAM::SET_CAM_FOV(uLocal_75, func_410(fLocal_89));
CAM::SET_CAM_FOV(uLocal_76, func_410(fLocal_89));
}}
if(!bLocal_156){
STREAMING::REQUEST_ANIM_DICT("mini@dartsoutro");
bLocal_156=true;
}
if(!iLocal_157){
if(bLocal_156){
if(!STREAMING::HAS_ANIM_DICT_LOADED("mini@dartsoutro")){
}else{
iLocal_157=1;
}
}}
func_252(&Var0, &Var3, &Var4, &Var5, &uVar23);
break;
case 11:
switch (iVar13){
case 0:
if(func_429(&(Var0.f_254)) > 0.5f){
HUD::CLEAR_HELP(1);
HUD::CLEAR_PRINTS();
func_251(PLAYER::PLAYER_PED_ID());
func_349(&Var4, Var0.f_449[0], Var0.f_449[1], Var0.f_446[0], Var0.f_446[1]);
iVar31=0;
while (iVar31 < 2){
iVar32=0;
while (iVar32 < 3){
func_250(&(Var0.f_5[iVar31 /*79*/][iVar32 /*26*/]));
iVar32++;
}
func_249(&Var4, iVar31);
iVar31++;
}
if(Var0.f_459){
if(Var0.f_454){
func_247(&(Var5.f_62), "DARTS_WINNER", "DARTS_SETW", 4000, 5, 12);
}
else{
func_247(&(Var5.f_62), "DARTS_LOSER", "DARTS_SETL", 4000, 5, 6);
}
Var0.f_459=0;
}elseif(Var0.f_454){
func_247(&(Var5.f_62), "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 12);
}else{
func_247(&(Var5.f_62), "DARTS_LOSER", "DARTS_LEGL", 4000, 5, 6);
}
fVar34=GRAPHICS::GET_ASPECT_RATIO(1);
if(fVar34 > 2f){
Var20={
1992.294f, 3047.577f, 46.21517f 
};
Var21={
0f, 0f, 138.74f 
};
}else{
Var20={
1992.336f, 3047.924f, 46.21517f 
};
Var21={
0f, 0f, 136.74f 
};
}
iVar33=func_246();
uLocal_168=PED::CREATE_SYNCHRONIZED_SCENE(Var20, Var21, 2);
uLocal_174=CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_174, uLocal_168, sLocal_227[iVar33], "mini@dartsoutro");
CAM::SET_CAM_ACTIVE(uLocal_174, 1);
CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
if(!PED::IS_PED_INJURED(uLocal_138[0]) && !PED::IS_PED_INJURED(uLocal_138[1])){
if(Var0.f_454){
if((Var0.f_437[0] + Var0.f_437[1])==1){
iVar35=1;
}
else{
iVar35=0;
}
AUDIO::PLAY_SOUND_FRONTEND(-1, "TENNIS_POINT_WON", "HUD_AWARDS", 1);
func_245(&uLocal_138, iVar35);
TASK::TASK_SYNCHRONIZED_SCENE(uLocal_138[0], uLocal_168, "mini@dartsoutro", sLocal_225[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
TASK::TASK_SYNCHRONIZED_SCENE(uLocal_138[1], uLocal_168, "mini@dartsoutro", sLocal_226[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_223, sLocal_224[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
}
else{
AUDIO::PLAY_SOUND_FRONTEND(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
func_244(&uLocal_138);
TASK::TASK_SYNCHRONIZED_SCENE(uLocal_138[1], uLocal_168, "mini@dartsoutro", sLocal_225[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
TASK::TASK_SYNCHRONIZED_SCENE(uLocal_138[0], uLocal_168, "mini@dartsoutro", sLocal_226[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
TASK::TASK_PLAY_ANIM(uLocal_138[1], sLocal_222, sLocal_224[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
}}
iVar13++;
}
break;
case 1:
if(!func_242(&(Var5.f_62), 1)){
iVar13++;
}
break;
case 2:
func_427(&(Var0.f_254));
iLocal_152=0;
AUDIO::STOP_AUDIO_SCENE(func_420(3));
func_419();
if(CAM::DOES_CAM_EXIST(uLocal_174)){
CAM::DESTROY_CAM(uLocal_174, 0);
}
iVar13=0;
Var0.f_0=9;
break;
}
break;
case 12:
if(func_429(&(Var0.f_254)) > 0.92f){
func_44(&Var0, &Var5, &Var4, &Var6, bVar8);
}
break;
case 13:
uVar11=func_10(&Var6, 0, 1065353216, 0, 0, 0);
if(!ENTITY::IS_ENTITY_DEAD(func_504(), 0)){
TASK::CLEAR_PED_TASKS(uLocal_138[1]);
Var0.f_0=15;
}
switch (iVar13){
case 0:
TASK::CLEAR_PED_TASKS(uLocal_138[0]);
if(!bLocal_154){
CAM::RENDER_SCRIPT_CAMS(0, bLocal_154, 3000, 1, 0, 0);
}else{
CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
}
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
HUD::CLEAR_PRINTS();
TASK::TASK_LOOK_AT_ENTITY(uLocal_138[0], uLocal_138[1], 5000, 2049, 3);
func_441(&uVar25);
iVar13++;
break;
case 1:
if(func_7(&uVar25) > 0.1f){
if(!bVar7){
}
func_441(&uVar25);
iVar13++;
}
break;
case 2:
if(func_7(&uVar25) > 0.3f){
if(!PED::IS_PED_INJURED(uLocal_138[1])){
if(!bVar7){
func_4(uLocal_138[0], "GENERIC_THANKS", 1, 4);
}}
func_441(&uVar25);
iVar13++;
}
break;
case 3:
if(uVar11 || bVar7){
Var0.f_0=15;
iVar13++;
}
break;
}
break;
case 14:
func_2(&Var5);
if(PAD::IS_CONTROL_JUST_RELEASED(2, 201)){
func_1(uLocal_138[1]);
iLocal_171=2;
bVar7=true;
if(AUDIO::IS_AUDIO_SCENE_ACTIVE(func_420(2))){
AUDIO::STOP_AUDIO_SCENE(func_420(2));
}
Var0.f_0=13;
}
if(PAD::IS_CONTROL_JUST_RELEASED(2, 202)){
if(Var0.f_1==2){
iLocal_55=0;
}
func_337(&(Var5.f_666), 8, 0);
Var0.f_0=10;
}
break;
case 15:
func_475(&Var0, &Var5, &Var6);
break;
}}}}


void func_1(int iParam0){
if(!PED::IS_PED_INJURED(iParam0)){
func_4(iParam0, "GAME_QUIT_EARLY", 0, 6);
}}


void func_2(var uParam0){
if(!HUD::IS_PAUSE_MENU_ACTIVE()){
if(!func_3(&(uParam0->f_666), 8)){
func_337(&(uParam0->f_666), 8, 1);
func_337(&(uParam0->f_666), 15, 0);
func_337(&(uParam0->f_666), 16, 0);
func_337(&(uParam0->f_666), 17, 0);
}
HUD::CLEAR_SMALL_PRINTS();
set_warning_message_with_header("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, false, -1, 0, 0, true, 0);
}elseif(func_3(&(uParam0->f_666), 8)){
func_337(&(uParam0->f_666), 8, 0);
}}


bool func_3(var uParam0, int iParam1){
return MISC::IS_BIT_SET(*uParam0, iParam1);
}


void func_4(int iParam0, char* sParam1, int iParam2, int iParam3){
if(!ENTITY::IS_ENTITY_DEAD(func_504(), 0) || iParam2){
func_428(iParam0, sParam1, iParam3);
}elseif(!PED::IS_PED_INJURED(iParam0)){
func_5(iParam0, sParam1, sLocal_57, iParam3);
}}


void func_5(var uParam0, char* sParam1, char* sParam2, int iParam3){
AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(uParam0, sParam1, sParam2, func_6(iParam3), 0);
}

int func_6(int iParam0){
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


float func_7(var uParam0){
if(func_426(uParam0)){
if(func_9(uParam0)){
return uParam0->f_2;
}else{
return (func_8(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
}}
return uParam0->f_1;
}


float func_8(bool bParam0){
float fVar0;
float fVar1;
int iVar2;
float fVar3;
float fVar4;
if(bParam0){
fVar0=to_float(MISC::GET_GAME_TIMER());
fVar1=(fVar0 / 1000f);
return fVar1;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar2=NETWORK::GET_NETWORK_TIME();
fVar3=to_float(iVar2);
fVar4=(fVar3 / 1000f);
return fVar4;
}
return (to_float(MISC::GET_GAME_TIMER()) / 1000f);
}


bool func_9(var uParam0){
return MISC::IS_BIT_SET(*uParam0, 2);
}

int func_10(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5){
bool bVar0;
if(MISC::GET_FRAME_COUNT()==uParam0->f_578){
return uParam0->f_579;
}
uParam0->f_578=MISC::GET_FRAME_COUNT();
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 1)){
uParam0->f_579=1;
return 1;
}
if(TASK::IS_PED_BEING_ARRESTED(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()))){
uParam0->f_579=1;
return 1;
}}
if(!uParam0->f_568){
if(CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()){
SCRIPT::SET_NO_LOADING_SCREEN(1);
uParam0->f_568=1;
}}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0)){
PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
}}}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
PAD::DISABLE_CONTROL_ACTION(2, 19, 1);
PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
PAD::DISABLE_CONTROL_ACTION(0, 28, 1);
PAD::DISABLE_CONTROL_ACTION(0, 29, 1);
PAD::DISABLE_CONTROL_ACTION(0, 171, 1);
func_41(0);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(PLAYER::GET_ARE_CAMERA_CONTROLS_DISABLED() || (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())){
HUD::SET_MOUSE_CURSOR_THIS_FRAME();
}}
Global_43807=1;
if(!uParam0->f_567){
switch (func_506(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()))){
case 1:
GRAPHICS::ANIMPOSTFX_PLAY("SuccessFranklin", 1000, 0);
break;
case 2:
GRAPHICS::ANIMPOSTFX_PLAY("SuccessTrevor", 1000, 0);
break;
default:
GRAPHICS::ANIMPOSTFX_PLAY("SuccessMichael", 1000, 0);
break;
}
uParam0->f_567=1;
}
if(uParam0->f_562==0){
uParam0->f_562=(uParam0->f_576 + floor((15000f * fParam2)));
}
if(iParam4 && uParam0->f_576 >=(uParam0->f_562 - 1500)){
uParam0->f_562=uParam0->f_576 + 3000;
}
if(uParam0->f_564==0f){
uParam0->f_564=(uParam0->f_564 + func_40(30f));
uParam0->f_564=(uParam0->f_564 + (IntToFloat(uParam0->f_56) * func_40(25f)));
if(uParam0->f_56 > 0){
uParam0->f_564=(uParam0->f_564 + func_40((25f * 0.5f)));
}
if(uParam0->f_549){
uParam0->f_564=(uParam0->f_564 + (func_40(30f) - func_40(2f)));
}}
bVar0=true;
while (bVar0){
func_39(1);
uParam0->f_576=(uParam0->f_576 + round((0f + (1000f * timestep()))));
func_15(uParam0, fParam2, bParam3);
if(IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 666) - (15000f * fParam2))){
if(uParam0->f_30 < 1f){
uParam0->f_30=(uParam0->f_30 + (0f + ((1f / 0.225f) * timestep())));
}}
uParam0->f_30=func_14(uParam0->f_30, 0f, 1f);
if(uParam0->f_576 > (uParam0->f_562 - 333)){
if(!uParam0->f_565){
if(uParam0->f_569){
uParam0->f_569=0;
uParam0->f_570=0;
uParam0->f_577=0.75f;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
uParam0->f_547=(uParam0->f_547 - (0f + ((1f / 1.215f) * timestep())));
}}
uParam0->f_547=func_14(uParam0->f_547, 0f, 1f);
if((uParam0->f_547 <=0.7f && !uParam0->f_545) && uParam0->f_1 !=0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_OUT");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
uParam0->f_546=uParam0->f_576;
uParam0->f_545=1;
}
if(uParam0->f_576 > (uParam0->f_562 - 333)){
if(!uParam0->f_565){
if(uParam0->f_548 < 1f){
uParam0->f_548=(uParam0->f_548 + (0f + ((1f / 0.3f) * timestep())));
}}}
uParam0->f_548=func_14(uParam0->f_548, 0f, 1f);
if(uParam0->f_566){
if(PAD::HAVE_CONTROLS_CHANGED(2)){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4)){
if(!uParam0->f_571){
func_11(uParam0, (!uParam0->f_569 && uParam0->f_56 > 0));
}}}}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 216) && uParam0->f_562 > uParam0->f_576 + 333){
if(((!uParam0->f_570 && uParam0->f_56 !=0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4)) && IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 1165) - (15000f * fParam2))){
if(!uParam0->f_569){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
uParam0->f_569=1;
uParam0->f_577=0.75f;
if(uParam0->f_576 > (uParam0->f_562 - 5000)){
uParam0->f_562=uParam0->f_576 + 5000;
}}elseif(bParam5){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
uParam0->f_569=0;
uParam0->f_577=0.75f;
}
func_11(uParam0, (!uParam0->f_569 && uParam0->f_56 > 0));
}}
if((uParam0->f_569 || uParam0->f_570) && uParam0->f_56 !=0){
if(IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 1165) - (15000f * fParam2))){
if(uParam0->f_570 && !uParam0->f_569){
uParam0->f_569=1;
uParam0->f_577=0.75f;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
uParam0->f_563=func_14((uParam0->f_563 + (((1f / 0.3f) * uParam0->f_577) * timestep())), 0f, 1f);
uParam0->f_577=func_14((uParam0->f_577 + 0.07f), 0.75f, 1.15f);
}}else{
uParam0->f_563=func_14((uParam0->f_563 - ((((1f / 0.3f) * uParam0->f_577) * 0.01f) * timestep())), 0f, 1f);
uParam0->f_577=func_14((uParam0->f_577 + 0.07f), 0.75f, 1.15f);
}
if(uParam0->f_576 > uParam0->f_562){
if(uParam0->f_565){
if(!uParam0->f_571){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 215)){
uParam0->f_565=0;
}}}elseif((uParam0->f_576 - uParam0->f_546) > 1000 && uParam0->f_545){
bVar0=false;
}}
uParam0->f_579=!bVar0;
if(bParam1){
wait(0);
}else{
if(!bVar0){
func_39(0);
}
return !bVar0;
}}
func_39(0);
return 1;
}


void func_11(var uParam0, bool bParam1){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 215, 1));
func_12("ES_HELP");
if(MISC::IS_PC_VERSION()){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(215);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(bParam1){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 216, 1));
func_12("ES_XPAND");
if(MISC::IS_PC_VERSION()){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(216);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_12(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_13(char* sParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}


float func_14(float fParam0, float fParam1, float fParam2){
if(fParam0 > fParam2){
return fParam2;
}elseif(fParam0 < fParam1){
return fParam1;
}
return fParam0;
}


void func_15(var uParam0, float fParam1, bool bParam2){
int iVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
int iVar13;
int iVar14;
int iVar15;
int iVar16;
int iVar17;
float fVar18;
float fVar19;
float fVar20;
float fVar21;
float fVar22;
char cVar23[16];
char cVar24[32];
int iVar25;
int iVar26;
int iVar27;
int iVar28;
float fVar29;
float fVar30;
float fVar31;
float fVar32;
float fVar33;
iVar0=round((uParam0->f_547 * 255f));
fVar1=(func_38() * 0.25f);
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1)){
if(uParam0->f_30 >=0f){
if(!uParam0->f_2){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
func_12(&(uParam0->f_5));
if(uParam0->f_560==4){
func_37(&(uParam0->f_13));
}else{
func_12(&(uParam0->f_13));
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(150);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
if(uParam0->f_560==4){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT((uParam0->f_56 - 1));
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_56);
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
if(uParam0->f_560==4 || uParam0->f_560==3){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(69);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
uParam0->f_2=1;
}
if((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_576 > 600){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_UP");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.15f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
uParam0->f_3=1;
}}
func_36();
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_1, 255, 255, 255, 255, 0);
}
fVar2=((uParam0->f_564 * uParam0->f_563) * (1f - uParam0->f_548));
fVar3=0f;
if(uParam0->f_571){
fVar3=(((0.1388889f + func_40((2f * 2f))) * uParam0->f_572) * (1f - uParam0->f_548));
fVar2=(fVar2 + (3f * fVar3));
}
if(uParam0->f_548 !=0f){
fVar4=0f;
if(fVar2 < fVar4){
fVar2=fVar4;
}}else{
fVar5=0f;
if(uParam0->f_30 >=0.975f){
if(fVar2 < fVar5){
fVar2=fVar5;
}}}
fVar1=(0.3f * func_38());
if(uParam0->f_12){
fVar1=0.5f;
}
fVar6=(*uParam0 * 2f);
if(uParam0->f_560 !=4){
fVar7=func_35(&(uParam0->f_13));
if(fVar6 < fVar7){
fVar6=(fVar7 + (3f * 0.006f));
}
if(GRAPHICS::GET_ASPECT_RATIO(0) < 1.4f){
fVar6=(fVar6 * 1.3f);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_554))){
fVar7=func_34(&(uParam0->f_550), &(uParam0->f_554));
}else{
fVar7=func_35(&(uParam0->f_550));
}
fVar8=(((0.119f + 0.05f) / func_38()) / 2.5f);
if((uParam0->f_560==1 || uParam0->f_560==0) && uParam0->f_561 !=0){
if(fVar6 < (fVar7 + (2.6f * fVar8))){
fVar6=(fVar7 + (2.6f * fVar8));
}}elseif(uParam0->f_560==5){
if(fVar6 < (fVar7 + (2.6f * fVar8))){
fVar6=(fVar7 + (2.6f * fVar8));
}}elseif(fVar6 < (fVar7 + (1.9f * fVar8))){
fVar6=(fVar7 + (2f * fVar8));
}}
fVar9=((0.499f - (fVar6 / 2f)) + 0.006f);
fVar10=((0.499f + (fVar6 / 2f)) - 0.006f);
PAD::SET_INPUT_EXCLUSIVE(2, 215);
PAD::SET_INPUT_EXCLUSIVE(2, 216);
PAD::SET_INPUT_EXCLUSIVE(2, 200);
PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
if(uParam0->f_566 || uParam0->f_571){
if((IntToFloat(uParam0->f_562) - (14000f * fParam1)) < IntToFloat(uParam0->f_576) || ((uParam0->f_571 && uParam0->f_563 > 0.95f) && (uParam0->f_562 - 10000) < uParam0->f_576)){
if(uParam0->f_571){
if(uParam0->f_574 < 0){
uParam0->f_574=(uParam0->f_574 * -1);
uParam0->f_574=(uParam0->f_576 + uParam0->f_574);
}
if(uParam0->f_574 > 0){
if((uParam0->f_574 - uParam0->f_576) > 0){
func_31((uParam0->f_574 - uParam0->f_576), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}else{
uParam0->f_574=0;
uParam0->f_573=1;
uParam0->f_571=0;
uParam0->f_565=0;
uParam0->f_566=0;
uParam0->f_562=uParam0->f_576 + 500;
uParam0->f_574=0;
}}
if(uParam0->f_572 < 1f){
uParam0->f_572=(uParam0->f_572 + (0f + ((1f / 0.166f) * timestep())));
if(uParam0->f_572 > 1f){
uParam0->f_572=1f;
}}}
if(CAM::IS_SCREEN_FADED_OUT()){
HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
}
if((uParam0->f_4 !=0 && uParam0->f_548 < 0.1f) && uParam0->f_576 <=uParam0->f_562){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_4, 255, 255, 255, iVar0, 0);
}
if(uParam0->f_571){
PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
PAD::DISABLE_CONTROL_ACTION(2, 188, 1);
if(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 188)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
uParam0->f_571=0;
uParam0->f_565=0;
uParam0->f_566=0;
uParam0->f_562=uParam0->f_576 + 500;
uParam0->f_573=3;
uParam0->f_574=0;
AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
}
PAD::DISABLE_CONTROL_ACTION(2, 187, 1);
if(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 187)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
uParam0->f_571=0;
uParam0->f_565=0;
uParam0->f_566=0;
uParam0->f_562=uParam0->f_576 + 500;
uParam0->f_573=4;
uParam0->f_574=0;
AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
}
PAD::DISABLE_CONTROL_ACTION(2, 202, 1);
if(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
uParam0->f_571=0;
uParam0->f_565=0;
uParam0->f_566=0;
uParam0->f_562=uParam0->f_576 + 500;
uParam0->f_573=2;
uParam0->f_574=0;
AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
}}elseif(uParam0->f_566){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 215) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 200)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
uParam0->f_566=0;
uParam0->f_565=0;
uParam0->f_562=uParam0->f_576 + 500;
AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
}}}}
HUD::GET_HUD_COLOUR(1, &iVar13, &iVar14, &iVar15, &iVar16);
HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, iVar0);
HUD::SET_TEXT_WRAP(fVar9, fVar10);
HUD::SET_TEXT_JUSTIFICATION(0);
HUD::SET_TEXT_SCALE(1f, 0.4f);
fVar1=(fVar1 - func_40(6f));
fVar1=(fVar1 + (func_40(30f) - func_40((2f * 2f))));
fVar11=(fVar2 - func_40((2f * 14f)));
if(fVar11 >=0f){
fVar12=func_14((fVar11 / (0.6f * func_40(25f))), 0f, 1f);
func_36();
GRAPHICS::DRAW_RECT(0.5f, (fVar1 - (func_40((2f - 0.5f)) - 0.001388889f)), fVar6, func_30(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
}else{
return;
}
fVar1=(fVar1 + func_40((2f * 0.3f)));
if(uParam0->f_56 > 0){
fVar1=(fVar1 + func_40((25f * 0.2f)));
}
iVar17=0;
iVar17=0;
while (iVar17 < uParam0->f_56){
fVar11=(fVar2 - (fVar1 - (0.3f * func_38())));
if(fVar11 >=0f){
fVar12=func_14((fVar11 / (0.8f * func_40(25f))), 0f, 1f);
func_27(uParam0, iVar17, (fVar1 + func_40(2f)), fVar9, fVar10, round((IntToFloat(iVar0) * fVar12)));
}else{
return;
}
fVar1=(fVar1 + func_40(25f));
if(uParam0->f_560==4){
if(iVar17==(uParam0->f_580 - 1)){
fVar1=(fVar1 + func_40((25f * 0.2f)));
fVar11=(fVar2 - (fVar1 - (0.3f * func_38())));
if(fVar11 >=0f){
fVar1=(fVar1 + func_40(2f));
fVar12=func_14((fVar11 / (0.6f * func_40(25f))), 0f, 1f);
func_36();
GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_40((2f * 0.5f))), fVar6, func_30(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
fVar1=(fVar1 + func_40((2f * 0.3f)));
if(uParam0->f_56 > 0){
fVar1=(fVar1 + func_40((25f * 0.2f)));
}}}}
iVar17++;
}
if(uParam0->f_560==4){
return;
}
if(uParam0->f_56 > 0){
fVar1=(fVar1 + func_40((25f * 0.2f)));
fVar11=(fVar2 - (fVar1 - (0.3f * func_38())));
if(fVar11 >=0f){
fVar1=(fVar1 + func_40(2f));
fVar12=func_14((fVar11 / (0.6f * func_40(25f))), 0f, 1f);
func_36();
GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_40((2f * 0.5f))), fVar6, func_30(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
}}
if(uParam0->f_549){
fVar1=(fVar1 + func_40((25f * 0.2f)));
fVar11=(fVar2 - (fVar1 - (0.3f * func_38())));
if(fVar11 >=0f){
fVar12=func_14((fVar11 / (0.8f * func_40(25f))), 0f, 1f);
HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar0))));
func_19(7, 0, 1, &fVar18, &fVar19, 0);
fVar20=fVar9;
fVar21=fVar10;
if(LOCALIZATION::GET_CURRENT_LANGUAGE()==0){
fVar20=(fVar9 + ((0.119f / func_38()) / 2.5f));
fVar21=(fVar10 - ((0.119f / func_38()) / 2.5f));
if(uParam0->f_560==1){
fVar20=(fVar9 + (((0.119f + 0.05f) / func_38()) / 2.5f));
fVar21=(fVar10 - (((0.119f + 0.05f) / func_38()) / 2.5f));
}}
if(uParam0->f_561==0){
fVar20=(fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
fVar21=(fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
}
if(uParam0->f_560 !=3){
HUD::SET_TEXT_WRAP(fVar20, fVar21);
HUD::SET_TEXT_JUSTIFICATION(1);
}else{
fVar20=0.5f;
HUD::SET_TEXT_JUSTIFICATION(0);
}
HUD::SET_TEXT_SCALE(1f, 0.4f);
if(MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_554))){
func_18(&(uParam0->f_550), fVar20, (fVar1 + func_40((2f * 2f))), 0, 0, 0);
}else{
func_17(&(uParam0->f_550), &(uParam0->f_554), fVar20, (fVar1 + func_40((2f * 2f))), 0, 0);
}
HUD::SET_TEXT_WRAP(fVar20, fVar21);
HUD::SET_TEXT_JUSTIFICATION(2);
HUD::SET_TEXT_SCALE(1f, 0.4f);
HUD::SET_TEXT_CENTRE(0);
func_36();
fVar22=fVar21;
StringCopy(&cVar23, "MPHud", 16);
StringCopy(&cVar24, "MissionPassedMedal", 32);
fVar22=(fVar22 - ((fVar18 * 0.28f) + 0.006f));
HUD::SET_TEXT_WRAP(fVar20, fVar22);
HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar0))));
switch (uParam0->f_560){
case 0:
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_558);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_40((2f * 2f))), 0);
break;
case 1:
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_558);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_559);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_40((2f * 2f))), 0);
break;
case 2:
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("MTPHPER_XPNO");
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_558);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_40((2f * 2f))), 0);
break;
case 5:
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(uParam0->f_558, 1);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_40((2f * 2f))), 0);
break;
}
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar23, 0);
if(uParam0->f_561 !=0 && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar23)){
iVar25=255;
iVar26=255;
iVar27=255;
iVar28=iVar0;
switch (uParam0->f_561){
case 1:
HUD::GET_HUD_COLOUR(107, &iVar25, &iVar26, &iVar27, &iVar28);
break;
case 3:
HUD::GET_HUD_COLOUR(109, &iVar25, &iVar26, &iVar27, &iVar28);
break;
case 2:
HUD::GET_HUD_COLOUR(108, &iVar25, &iVar26, &iVar27, &iVar28);
break;
}
fVar29=(0.001388889f * 5f);
fVar30=((0.00078125f * 16f) * 2f);
fVar31=((0.001388889f * 16f) * 2f);
fVar32=((fVar21 + func_16(4f)) - 0.006f);
fVar33=((fVar1 + func_40(10f)) + fVar29);
if(uParam0->f_560==-1){
fVar32=(fVar32 - (0.006f * 6f));
}
fVar30=(fVar30 * 0.65f);
fVar31=(fVar31 * 0.65f);
GRAPHICS::DRAW_SPRITE(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, round((fVar12 * IntToFloat(iVar0))), 0, 0);
}
fVar1=(fVar1 + (func_40(30f) - 2f));
}}}


float func_16(float fParam0){
return (fParam0 * 0.00078125f);
}


void func_17(char* sParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5){
HUD::SET_TEXT_CENTRE(iParam4);
HUD::SET_TEXT_FONT(iParam5);
func_36();
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam2, fParam3, 0);
}


void func_18(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5){
HUD::SET_TEXT_CENTRE(iParam3);
HUD::SET_TEXT_FONT(iParam5);
func_36();
if(bParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
}else{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam1, fParam2, 0);
}

int func_19(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5){
char cVar0[64];
char cVar1[64];
int iVar2;
int iVar3;
float fVar4;
struct<3> Var5;
float fVar6;
StringCopy(&cVar0, func_26(iParam0), 64);
StringCopy(&cVar1, func_23(iParam0, bParam1), 64);
if(MISC::GET_HASH_KEY(&cVar1) !=0){
fVar4=1f;
func_21(bParam5, &iVar2, &iVar3, &fVar4);
Var5={
GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar1) 
};
fVar6=(func_20(iParam0) / fVar4);
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
if(iParam0==29 && MISC::GET_HASH_KEY(&(Global_23270.f_7488[29 /*16*/]))==joaat("crew_logo")){
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
if(*fParam3 > Global_23269){
*fParam4=(*fParam4 * (Global_23269 / *fParam3));
*fParam3=Global_23269;
}}
return 1;
}
return 0;
}


float func_20(int iParam0){
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


void func_21(bool bParam0, var uParam1, var uParam2, float fParam3){
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
if(func_22(*uParam1, *uParam2)){
*fParam3=1f;
*uParam1=round((fVar1 * fVar2));
*uParam2=round(fVar1);
return;
}
*fParam3=((fVar0 / fVar1) / fVar2);
*uParam1=round((fVar0 / *fParam3));
*uParam2=round((fVar1 / *fParam3));
}


bool func_22(int iParam0, int iParam1){
return (to_float(iParam0) / to_float(iParam1)) > 3.5f;
}


var func__23(int iParam0, bool bParam1){
char* sVar0[2];
var uVar1;
struct<13> Var2;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_7488[iParam0 /*16*/]))){
if(MISC::GET_HASH_KEY(&(Global_23270.f_7488[iParam0 /*16*/]))==joaat("crew_logo")){
Var2={
func_25(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var2, &uVar1)){
return func_24(&uVar1);
}}else{
return func_24(&(Global_23270.f_7488[iParam0 /*16*/]));
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


var func__24(var uParam0){
return uParam0;
}
struct<13> func_25(int iParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
return Var0;
}


char* func_26(int iParam0){
var uVar0;
struct<13> Var1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_6463[iParam0 /*16*/]))){
if(MISC::GET_HASH_KEY(&(Global_23270.f_6463[iParam0 /*16*/]))==joaat("crew_logo")){
Var1={
func_25(PLAYER::PLAYER_ID()) 
};
NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var1, &uVar0);
return func_24(&uVar0);
}else{
return func_24(&(Global_23270.f_6463[iParam0 /*16*/]));
}}
if(iParam0==52){
return "MPShopSale";
}
return "CommonMenu";
}


void func_27(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
float fVar4;
float fVar5;
float fVar6;
HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iParam5);
HUD::SET_TEXT_WRAP(fParam3, fParam4);
HUD::SET_TEXT_JUSTIFICATION(1);
HUD::SET_TEXT_SCALE(1f, func_29(14f));
HUD::SET_TEXT_CENTRE(0);
HUD::SET_TEXT_FONT(0);
func_36();
if(uParam0->f_531[iParam1]){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_71[iParam1 /*16*/]));
}else{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(uParam0->f_71[iParam1 /*16*/]));
if(uParam0->f_57[iParam1]==16 || uParam0->f_57[iParam1]==17){
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_489[iParam1]);
}}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam3, fParam2, 0);
fVar4=fParam4;
switch (uParam0->f_517[iParam1]){
case 0:
break;
case 1:
func_19(7, 0, 1, &fVar5, &fVar6, 0);
GRAPHICS::DRAW_SPRITE("CommonMenu", func_23(7, 0), (fParam4 - 0.006f), ((fParam2 + func_40(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0, 0);
fVar4=(fVar4 - ((fVar5 * 0.38f) + 0.006f));
break;
case 2:
func_19(5, 0, 1, &fVar5, &fVar6, 0);
GRAPHICS::DRAW_SPRITE("CommonMenu", func_23(5, 0), (fParam4 - 0.006f), ((fParam2 + func_40(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0, 0);
fVar4=(fVar4 - ((fVar5 * 0.38f) + 0.006f));
break;
case 3:
func_19(6, 0, 1, &fVar5, &fVar6, 0);
GRAPHICS::DRAW_SPRITE("CommonMenu", func_23(6, 0), (fParam4 - 0.006f), ((fParam2 + func_40(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0, 0);
fVar4=(fVar4 - ((fVar5 * 0.38f) + 0.006f));
break;
}
if(uParam0->f_57[iParam1]==0){
return;
}
if(uParam0->f_57[iParam1]==15){
HUD::SET_TEXT_JUSTIFICATION(1);
}else{
HUD::SET_TEXT_JUSTIFICATION(2);
}
HUD::SET_TEXT_SCALE(1f, func_29(14f));
if(uParam0->f_57[iParam1]==5 || uParam0->f_57[iParam1]==4){
HUD::SET_TEXT_WRAP(fParam3, (fVar4 - (0.00078125f * 3f)));
}else{
HUD::SET_TEXT_WRAP(fParam3, (fVar4 + (0.00078125f * 2f)));
}
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iParam5);
func_28(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}


void func_28(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5){
int iVar0;
float fVar1;
float fVar2;
float fVar3;
int iVar4;
int iVar5;
int iVar6;
iVar0=1;
HUD::SET_TEXT_CENTRE(0);
HUD::SET_TEXT_FONT(0);
func_36();
fVar1=0f;
fVar2=(8f * 0.00078125f);
fVar3=(16f * 0.001388889f);
iVar4=93;
iVar5=182;
iVar6=229;
if(iParam5==4){
iVar4=194;
iVar5=80;
iVar6=80;
}
switch (iParam5){
case 4:
case 5:
HUD::SET_TEXT_SCALE(1f, func_29(18f));
HUD::SET_TEXT_FONT(4);
if(iParam0 < 0){
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("ESMINDOLLA");
HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), 1);
fVar1=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(0);
}else{
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("ESDOLLA");
HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
fVar1=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(0);
}
fVar1=(fVar1 - (fVar1 % 0.00078125f));
GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0, 0);
GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0, 0);
GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0, 0);
HUD::SET_TEXT_SCALE(1f, func_29(14f));
break;
}
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iVar0);
switch (iParam5){
case 11:
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
break;
case 1:
HUD::SET_TEXT_FONT(5);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_NUM");
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
break;
case 2:
HUD::SET_TEXT_FONT(5);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
break;
case 4:
case 5:
HUD::SET_TEXT_SCALE(1f, func_29(18f));
case 3:
if(iParam0 < 0){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESMINDOLLA");
HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), 1);
}else{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
}
break;
case 6:
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
break;
case 7:
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
break;
case 8:
HUD::SET_TEXT_FONT(5);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 14);
break;
case 9:
HUD::SET_TEXT_FONT(5);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 6);
break;
case 10:
HUD::SET_TEXT_FONT(5);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
break;
case 18:
HUD::SET_TEXT_FONT(5);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
break;
case 12:
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("AHD_DIST");
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
break;
case 13:
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
break;
case 15:
case 14:
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
break;
case 16:
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
break;
case 20:
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
break;
}
if(iParam5 !=17){
if(iParam5==4 || iParam5==5){
HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fParam2 - (0.00078125f * 4f)), fParam3, 0);
HUD::SET_TEXT_SCALE(1f, func_29(14f));
}else{
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam2, fParam3, 0);
}}}


float func_29(float fParam0){
return (fParam0 * 0.025f);
}


float func_30(float fParam0){
return (fParam0 * 0.0009259259f);
}


void func_31(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17){
int iVar0;
int iVar1;
iVar0=-1;
iVar1=0;
while (iVar1 <=9){
if(iVar0==-1){
if(func_33(7, iVar1)==0){
iVar0=iVar1;
}}
iVar1++;
}
if(iVar0 > -1){
Global_1655472.f_1=1;
func_32(7, iVar0);
Global_1655472.f_4659[iVar0]=iParam0;
StringCopy(&(Global_1655472.f_4659.f_11[iVar0 /*16*/]), sParam1, 64);
Global_1655472.f_4659.f_172[iVar0]=iParam2;
Global_1655472.f_4659.f_216[iVar0]=iParam3;
Global_1655472.f_4659.f_183[iVar0]=iParam4;
Global_1655472.f_4659.f_194[iVar0]=iParam5;
Global_1655472.f_4659.f_249[iVar0]=iParam6;
Global_1655472.f_4659.f_260[iVar0]=iParam7;
Global_1655472.f_4659.f_205[iVar0]=iParam8;
Global_1655472.f_4659.f_314[iVar0]=iParam9;
Global_1655472.f_4659.f_325[iVar0]=iParam10;
Global_1655472.f_4659.f_357[iVar0]=iParam11;
Global_1655472.f_4659.f_238[iVar0]=iParam12;
Global_1655472.f_4659.f_271[iVar0]=iParam13;
Global_1655472.f_4659.f_368[iVar0]=iParam14;
Global_1655472.f_4659.f_379[iVar0]=iParam15;
Global_1655472.f_4659.f_390[iVar0]=iParam16;
Global_1655472.f_4659.f_227[iVar0]=iParam17;
}}


void func_32(int iParam0, int iParam1){
MISC::SET_BIT(&(Global_1655472.f_7009[iParam0]), iParam1);
}

int func_33(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1655472.f_7009[iParam0], iParam1);
}


float func_34(char* sParam0, char* sParam1){
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam1);
return (HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1) / 2f);
}


float func_35(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
return (HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1) / 2f);
}


void func_36(){
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
if(CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT()){
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
}
GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
}


void func_37(char* sParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}


float func_38(){
float fVar0;
fVar0=1f;
if(MISC::IS_PC_VERSION()){}
return fVar0;
}


void func_39(int iParam0){
Global_78819=iParam0;
Global_78820=iParam0;
}


float func_40(float fParam0){
return (fParam0 * 0.001388889f);
}


void func_41(int iParam0){
if(func_43()){
return;
}
if(!Global_20383.f_1==1){
if(func_42(0)){
func_433(iParam0);
}
MISC::SET_BIT(&Global_8254, 2);
}}

int func_42(int iParam0){
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


bool func_43(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}


void func_44(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4){
int iVar0;
bool bVar1;
int iVar2;
struct<3> Var3;
float fVar4;
struct<3> Var5;
struct<3> Var6;
int iVar7;
int iVar8;
int iVar9;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
}
if(PLAYER::IS_PLAYER_ONLINE()){
if(!iLocal_159){
if(func_219(uParam1, 0, &iLocal_160)){
func_337(&(uParam1->f_666), 9, 0);
iLocal_159=1;
}}}
if(iLocal_141){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
HUD::SET_MOUSE_CURSOR_THIS_FRAME();
}
bVar1=true;
if(uParam1->f_680){
if(!uParam1->f_646 && !PLAYER::IS_PLAYER_ONLINE()){
uParam1->f_646=func_210(&(uParam1->f_647), 0);
bVar1=false;
if(uParam1->f_646){
uParam1->f_680=0;
func_337(&(uParam1->f_666), 9, 0);
uParam1->f_646=0;
}}else{
func_127(&(uParam1->f_72), &(uParam1->f_645));
}
if(bVar1){
func_123(&(uParam1->f_509), 1128792064, 1, 0, 1, 1065353216);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 202)){
uParam1->f_680=0;
func_337(&(uParam1->f_666), 9, 0);
}elseif(PAD::IS_CONTROL_JUST_PRESSED(2, 215)){
iVar0=2;
}elseif(PAD::IS_CONTROL_JUST_PRESSED(2, 216)){
iVar0=1;
}}
if(func_122(&(uParam1->f_72))){
if(!bLocal_161){
bLocal_161=true;
func_121(&(uParam1->f_509), 0, 0, 1, 1);
func_120(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
func_120(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
func_120(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
func_120(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
func_117(&(uParam1->f_509), 1);
}}}else{
iVar0=func_110(uParam1, 0, 0, iLocal_159);
func_10(uParam3, 0, 1065353216, 0, 0, 0);
}
if((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_168) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_168) >=0.995f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_168)){
bLocal_154=true;
if(CAM::DOES_CAM_EXIST(uLocal_174)){
CAM::DESTROY_CAM(uLocal_174, 0);
if(!PED::IS_PED_INJURED(uLocal_138[0]) && !PED::IS_PED_INJURED(uLocal_138[1])){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_138[0]);
TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_138[1]);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_138[0], 0, 0);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_138[1], 0, 0);
}}
func_109();
}
if(func_429(&(uParam0->f_254)) > 2f){
if(!iLocal_152){
if(uParam0->f_454){
if((uParam0->f_437[0] + uParam0->f_437[1])==1){
iVar2=1;
}else{
iVar2=0;
}
func_245(&uLocal_138, iVar2);
}else{
func_244(&uLocal_138);
}
iLocal_152=1;
}}
if(iVar0==1){
HUD::CLEAR_HELP(1);
AUDIO::STOP_AUDIO_SCENE(func_420(3));
if(!PED::IS_PED_INJURED(uLocal_138[0]) && !PED::IS_PED_INJURED(uLocal_138[1])){
TASK::TASK_CLEAR_LOOK_AT(uLocal_138[0]);
TASK::TASK_CLEAR_LOOK_AT(uLocal_138[1]);
}
func_108(uParam3);
if(bParam4){
func_349(uParam2, 0, 0, 0, 0);
}
uParam0->f_429[0]=0;
uParam0->f_429[1]=0;
uParam0->f_432[0]=0;
uParam0->f_432[1]=0;
iLocal_30=1;
func_427(&(uParam0->f_254));
*uParam0=9;
iLocal_152=0;
iLocal_150=0;
bLocal_154=false;
func_105();
iLocal_159=0;
iLocal_134=0;
uParam1->f_680=0;
iLocal_160=0;
bLocal_161=false;
func_97(&(uParam1->f_72), 0);
func_465();
}elseif(iVar0==2){
func_96(uParam3);
AUDIO::STOP_AUDIO_SCENE(func_420(3));
if(uParam0->f_446[0] * 10 > 0){
func_56(func_91(), 21, uParam0->f_446[0] * 10, 0, 0);
}
HUD::CLEAR_PRINTS();
*uParam0=13;
}elseif(((PAD::IS_CONTROL_JUST_PRESSED(0, 234) || PAD::IS_CONTROL_JUST_PRESSED(0, 235)) && uParam0->f_248==1) && bVar1){
uParam0->f_457=0;
if(iLocal_140){
Var3={
ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], 1) 
};
func_55(Var3, 0, iLocal_140);
iLocal_140=0;
}elseif(PAD::IS_CONTROL_JUST_PRESSED(2, 190)){
iLocal_163++;
if(iLocal_163 >=uParam0->f_436){
iLocal_163=0;
}
Var3={
ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], 1) 
};
func_53(Var3);
}elseif(PAD::IS_CONTROL_JUST_PRESSED(2, 189)){
iLocal_163=(iLocal_163 - 1);
if(iLocal_163 < 0){
iLocal_163=(uParam0->f_436 - 1);
}
Var3={
ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], 1) 
};
func_53(Var3);
}}elseif(((PAD::IS_CONTROL_JUST_PRESSED(0, 211) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 211)) && bVar1) && (iLocal_159 || !PLAYER::IS_PLAYER_ONLINE())){
uParam1->f_680=1;
func_121(&(uParam1->f_509), 0, 0, 1, 1);
func_120(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
func_120(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
func_120(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
if(bLocal_161){
func_120(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
}
func_117(&(uParam1->f_509), 1);
}}elseif(!uParam0->f_457){
HUD::CLEAR_HELP(1);
HUD::CLEAR_PRINTS();
func_49(uParam3, uParam0->f_454, uParam0->f_429[iLocal_30], uParam0->f_432[iLocal_30], iLocal_106[2], uParam0->f_437[0], uParam0->f_437[1], uParam0->f_440[0], uParam0->f_440[1], uParam0->f_443[0], uParam0->f_443[1], bParam4);
fVar4=GRAPHICS::GET_ASPECT_RATIO(1);
if(fVar4 > 2f){
Var5={
1992.294f, 3047.577f, 46.21517f 
};
Var6={
0f, 0f, 138.74f 
};
}else{
Var5={
1992.336f, 3047.924f, 46.21517f 
};
Var6={
0f, 0f, 136.74f 
};
}
iVar7=func_246();
uLocal_168=PED::CREATE_SYNCHRONIZED_SCENE(Var5, Var6, 2);
uLocal_174=CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_174, uLocal_168, sLocal_227[iVar7], "mini@dartsoutro");
CAM::SET_CAM_ACTIVE(uLocal_174, 1);
CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
if(!PED::IS_PED_INJURED(uLocal_138[0]) && !PED::IS_PED_INJURED(uLocal_138[1])){
if(uParam0->f_454){
TASK::TASK_SYNCHRONIZED_SCENE(uLocal_138[0], uLocal_168, "mini@dartsoutro", sLocal_225[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
TASK::TASK_SYNCHRONIZED_SCENE(uLocal_138[1], uLocal_168, "mini@dartsoutro", sLocal_226[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_223, sLocal_224[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
}else{
TASK::TASK_SYNCHRONIZED_SCENE(uLocal_138[1], uLocal_168, "mini@dartsoutro", sLocal_225[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
TASK::TASK_SYNCHRONIZED_SCENE(uLocal_138[0], uLocal_168, "mini@dartsoutro", sLocal_226[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
TASK::TASK_PLAY_ANIM(uLocal_138[1], sLocal_222, sLocal_224[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
}}
bLocal_154=false;
uParam0->f_457=1;
uParam1->f_671=MISC::GET_GAME_TIMER();
iVar8=0;
while (iVar8 < 2){
iVar9=0;
while (iVar9 < 3){
func_250(&(uParam0->f_5[iVar8 /*79*/][iVar9 /*26*/]));
iVar9++;
}
func_249(uParam2, iVar8);
iVar8++;
}}elseif((MISC::GET_GAME_TIMER() - uParam1->f_671) > 400 && func_45(uParam3, 0, 0)){
if(!uParam0->f_454){
AUDIO::PLAY_SOUND_FRONTEND(-1, "LOOSE_MATCH", "HUD_MINI_GAME_SOUNDSET", 1);
}
iLocal_141=1;
}}

int func_45(var uParam0, bool bParam1, int iParam2){
uParam0->f_12=iParam2;
func_48(uParam0);
func_47(uParam0);
if(MISC::ARE_STRINGS_EQUAL(&(uParam0->f_550), "SPR_RESULT") || (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_550), "") && uParam0->f_56 > 0)){
uParam0->f_570=1;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", 0);
}
if(uParam0->f_1==0){
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPLeaderboard", 0);
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", 0);
uParam0->f_1=GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
uParam0->f_2=0;
uParam0->f_3=0;
}
uParam0->f_4=GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
if(bParam1){
while (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud")){
wait(0);
}
if(uParam0->f_566 || uParam0->f_571){
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4)){
wait(0);
}}}else{
if(((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud")){
return 0;
}
if(uParam0->f_566){
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4)){
return 0;
}}}
if(uParam0->f_566){
if(uParam0->f_571){
func_46(uParam0);
}elseif(uParam0->f_56 !=0){
func_11(uParam0, 1);
}else{
func_11(uParam0, 0);
}}
Global_78820=1;
return 1;
}


void func_46(var uParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 188, 1));
func_12("ES_HELP_TU");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 187, 1));
func_12("ES_HELP_TD");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 202, 1));
func_12("ES_HELP_AB");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_47(var uParam0){
float fVar0;
int iVar1;
int iVar2;
int iVar3;
fVar0=0f;
HUD::SET_TEXT_JUSTIFICATION(0);
HUD::SET_TEXT_SCALE(1f, func_29(16f));
if(uParam0->f_31==0){
if(uParam0->f_29){
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_13));
fVar0=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}else{
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(uParam0->f_13));
fVar0=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}}else{
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("STRING");
iVar1=0;
iVar2=0;
iVar3=0;
iVar3=0;
while (iVar3 < uParam0->f_31){
switch (uParam0->f_32[iVar3]){
case 0:
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_53[iVar1]);
iVar1++;
break;
case 1:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam0->f_36[iVar2 /*16*/]));
iVar2++;
break;
case 2:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_36[iVar2 /*16*/]));
iVar2++;
break;
}
iVar3++;
}
fVar0=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}
if(fVar0 > ((0.1125f * 2f) - (0.006f * 2f))){
*uParam0=((fVar0 / 2f) + (0.006f * 2f));
}}


void func_48(var uParam0){
uParam0->f_547=1f;
uParam0->f_546=0;
uParam0->f_572=0f;
uParam0->f_562=0;
uParam0->f_30=0f;
uParam0->f_548=0f;
uParam0->f_563=0f;
uParam0->f_564=0f;
uParam0->f_545=0;
uParam0->f_567=0;
uParam0->f_576=0;
uParam0->f_568=0;
uParam0->f_569=0;
uParam0->f_570=0;
*uParam0=0.1125f;
uParam0->f_2=0;
uParam0->f_3=0;
uParam0->f_578=0;
uParam0->f_579=0;
uParam0->f_577=1f;
}


void func_49(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11){
uParam0->f_565=1;
if(bParam1){
func_52(uParam0, "DARTS_WINNER", "DARTS_YJ", 0);
}else{
func_52(uParam0, "DARTS_LOSE_R", "DARTS_YJ", 0);
}
func_51(uParam0, 1, "DARTS_NUM_T", "", uParam2, 0, 0, 0);
func_51(uParam0, 1, "DARTS_NUM_B", "", uParam3, 0, 0, 0);
func_51(uParam0, 1, "DARTS_NUM_180", "", uParam4, 0, 0, 0);
if(bParam11){
func_51(uParam0, 2, "DARTS_WIN", "", iParam5, (iParam5 + iParam6), 0, 0);
func_51(uParam0, 2, "DARTS_SWIN", "", iParam7, (iParam7 + iParam8), 0, 0);
}
func_51(uParam0, 2, "DARTS_GWIN", "", iParam9, (iParam9 + iParam10), 0, 0);
func_50(uParam0, 0, "", 0, 0, 0, 0, 0);
func_39(1);
}


void func_50(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
uParam0->f_549=iParam1;
StringCopy(&(uParam0->f_550), sParam2, 16);
StringCopy(&(uParam0->f_554), "", 16);
uParam0->f_558=iParam3;
uParam0->f_559=iParam4;
uParam0->f_560=iParam5;
uParam0->f_561=iParam6;
uParam0->f_580=iParam7;
}


void func_51(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7){
int iVar0;
if(uParam0->f_56==13){
return;
}
iVar0=uParam0->f_56;
uParam0->f_57[iVar0]=iParam1;
StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
uParam0->f_489[iVar0]=uParam4;
uParam0->f_503[iVar0]=iParam5;
uParam0->f_517[iVar0]=iParam6;
uParam0->f_531[iVar0]=iParam7;
uParam0->f_56++;
}


void func_52(var uParam0, char* sParam1, char* sParam2, int iParam3){
StringCopy(&(uParam0->f_5), sParam1, 16);
StringCopy(&(uParam0->f_13), sParam2, 64);
uParam0->f_29=iParam3;
uParam0->f_11=0;
}


void func_53(struct<3> Param0){
struct<3> Var0;
Var0={
func_54(Param0) 
};
if(bLocal_88){
CAM::SET_CAM_COORD(uLocal_86, Var0);
CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_86, uLocal_85, 500, 1, 1);
bLocal_88=false;
}else{
CAM::SET_CAM_COORD(uLocal_85, Var0);
CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_85, uLocal_86, 500, 1, 1);
bLocal_88=true;
}}


Vector3 func__54(struct<3> Param0){
struct<3> Var0;
struct<3> Var1;
Var1={
0.3495f, -0.0276f, -0.0114f 
};
Var0={
Param0 - Var1 
};
return Var0;
}


void func_55(struct<3> Param0, bool bParam1, bool bParam2){
struct<3> Var0;
Var0={
func_54(Param0) 
};
if(bParam1){
CAM::SET_CAM_COORD(uLocal_85, Var0);
CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_85, uLocal_84, 1500, 1, 1);
CAM::SET_CAM_ACTIVE(uLocal_84, 0);
CAM::SET_CAM_COORD(uLocal_86, Var0);
bLocal_88=true;
}elseif(bParam2){
CAM::SET_CAM_COORD(uLocal_85, Var0);
CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_85, uLocal_77, 2000, 1, 1);
bLocal_88=true;
}else{
if(bLocal_88){
CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_84, uLocal_85, 1500, 1, 1);
}else{
CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_84, uLocal_86, 1500, 1, 1);
}
CAM::SET_CAM_ACTIVE(uLocal_85, 0);
}}


void func_56(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4){
int iVar0;
int iVar1;
if(func_90(iParam0)==3){
return;
}
if(func_90(iParam0)==4){
return;
}
func_57(func_90(iParam0), 1, iParam1, iParam2, 0);
if(bParam3){
iVar0=0;
if(bParam4){
switch (iParam0){
case 0:
iVar1=joaat("sp0_money_made_from_random_peds");
break;
case 1:
iVar1=joaat("sp1_money_made_from_random_peds");
break;
case 2:
iVar1=joaat("sp2_money_made_from_random_peds");
break;
default:
return;
}}else{
switch (iParam0){
case 0:
iVar1=joaat("sp0_money_made_from_missions");
break;
case 1:
iVar1=joaat("sp1_money_made_from_missions");
break;
case 2:
iVar1=joaat("sp2_money_made_from_missions");
break;
default:
return;
}}
STATS::STAT_GET_INT(iVar1, &iVar0, -1);
iVar0=(iVar0 + iParam2);
STATS::STAT_SET_INT(iVar1, iVar0, 1);
}}

int func_57(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
float fVar0;
bool bVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
func_89();
if(iParam3 < 1){
return 0;
}
fVar0=1f;
switch (iParam1){
case 0:
switch (iParam0){
case 0:
func_88(99, 1);
func_87(joaat("sp0_money_total_spent"), iParam3);
break;
case 1:
func_87(joaat("sp1_money_total_spent"), iParam3);
break;
case 2:
func_87(joaat("sp2_money_total_spent"), iParam3);
break;
}
func_71(0);
switch (iParam2){
case 127:
case 129:
case 125:
case 126:
case 128:
if(func_68(5)){
fVar0=0.9f;
bVar1=5;
}
break;
case 63:
case 64:
case 65:
case 66:
case 67:
case 68:
switch (iParam0){
case 0:
func_87(joaat("sp0_money_spent_on_tattoos"), iParam3);
break;
case 1:
func_87(joaat("sp1_money_spent_on_tattoos"), iParam3);
break;
case 2:
func_87(joaat("sp2_money_spent_on_tattoos"), iParam3);
break;
}
if(func_68(1)){
fVar0=0f;
bVar1=true;
}
break;
case 21:
switch (iParam0){
case 0:
func_87(joaat("sp0_money_spent_on_taxis"), iParam3);
break;
case 1:
func_87(joaat("sp1_money_spent_on_taxis"), iParam3);
break;
case 2:
func_87(joaat("sp2_money_spent_on_taxis"), iParam3);
break;
}
break;
case 25:
switch (iParam0){
case 0:
func_87(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
break;
case 1:
func_87(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
break;
case 2:
func_87(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
break;
}
break;
case 99:
case 100:
case 101:
case 102:
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
switch (iParam0){
case 0:
func_87(joaat("sp0_money_spent_property"), iParam3);
break;
case 1:
func_87(joaat("sp1_money_spent_property"), iParam3);
break;
case 2:
func_87(joaat("sp2_money_spent_property"), iParam3);
break;
}
break;
default:
switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()){
case joaat("clothes_shop_sp"):
switch (iParam0){
case 0:
func_87(joaat("sp0_money_spent_in_clothes"), iParam3);
break;
case 1:
func_87(joaat("sp1_money_spent_in_clothes"), iParam3);
break;
case 2:
func_87(joaat("sp2_money_spent_in_clothes"), iParam3);
break;
}
break;
case joaat("hairdo_shop_sp"):
switch (iParam0){
case 0:
func_87(joaat("sp0_money_spent_on_hairdos"), iParam3);
break;
case 1:
func_87(joaat("sp1_money_spent_on_hairdos"), iParam3);
break;
case 2:
func_87(joaat("sp2_money_spent_on_hairdos"), iParam3);
break;
}
if(func_68(0)){
fVar0=0f;
bVar1=false;
}
break;
case joaat("gunclub_shop"):
switch (iParam0){
case 0:
func_87(joaat("sp0_money_spent_in_buying_guns"), iParam3);
break;
case 1:
func_87(joaat("sp1_money_spent_in_buying_guns"), iParam3);
break;
case 2:
func_87(joaat("sp2_money_spent_in_buying_guns"), iParam3);
break;
}
break;
case joaat("carmod_shop"):
switch (iParam0){
case 0:
func_87(joaat("sp0_money_spent_car_mods"), iParam3);
break;
case 1:
func_87(joaat("sp1_money_spent_car_mods"), iParam3);
break;
case 2:
func_87(joaat("sp2_money_spent_car_mods"), iParam3);
break;
}
func_67(iParam3);
break;
}
break;
}
break;
case 1:
switch (iParam0){
case 0:
func_88(95, iParam3);
break;
case 1:
func_88(97, iParam3);
break;
case 2:
func_88(96, iParam3);
break;
}
func_88(98, iParam3);
break;
}
iVar2=iParam0;
iParam3=floor((fVar0 * to_float(iParam3)));
iVar3=0;
iVar4=iParam3;
if(fVar0==0f){
func_60(bVar1);
return 1;
}elseif(fVar0 !=1f){
func_60(bVar1);
}
iVar5=(Global_60536[iVar2] + iParam3);
switch (iParam1){
case 1:
if(Global_60536[iVar2] >=0 && iParam3 > 0){
if(iVar5 <=0){
Global_60536[iVar2]=2147483647;
}else{
Global_60536[iVar2]=(Global_60536[iVar2] + iParam3);
}}
switch (iParam0){
case 0:
func_87(joaat("sp0_total_cash_earned"), iParam3);
break;
case 1:
func_87(joaat("sp1_total_cash_earned"), iParam3);
break;
case 2:
func_87(joaat("sp2_total_cash_earned"), iParam3);
break;
}
break;
case 0:
if(!bParam4){
if((Global_60536[iVar2] - iParam3) < 0){
return 0;
}}
iVar3=Global_60536[iVar2];
Global_60536[iVar2]=(Global_60536[iVar2] - iParam3);
if(bParam4){
iVar4=iVar3;
}
break;
}
if(iParam2==1){
if(iVar4 > 20){
}}else{
Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/]=iParam1;
Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/].f_1=iParam2;
Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/].f_2=iParam3;
Global_113648.f_20566.f_233[iVar2 /*69*/]++;
Global_113648.f_20566.f_233[iVar2 /*69*/].f_1++;
if(Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 > 10){
Global_113648.f_20566.f_233[iVar2 /*69*/].f_1=0;
}}
func_59(iParam0);
if(Global_43257==15){
func_58(0);
}
return 1;
}


void func_58(bool bParam0){
int iVar0;
int iVar1;
iVar0=0;
iVar1=0;
iVar0=0;
while (iVar0 < 3){
iVar1=0;
while (iVar1 < 11){
Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3=Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4=Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5=Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
iVar1++;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 10){
Global_60544[iVar0 /*3*/][0]=Global_113648.f_20566[iVar0];
Global_60544.f_31[iVar0 /*3*/][0]=Global_113648.f_20566.f_11[iVar0];
Global_60544.f_62[iVar0 /*3*/][0]=Global_113648.f_20566.f_22[iVar0];
Global_60544.f_93[iVar0 /*3*/][0]=Global_113648.f_20566.f_33[iVar0];
Global_60544.f_124[iVar0 /*3*/][0]=Global_113648.f_20566.f_44[iVar0];
Global_60544.f_155[iVar0 /*3*/][0]=Global_113648.f_20566.f_55[iVar0];
Global_60544.f_186[iVar0 /*3*/][0]=Global_113648.f_20566.f_66[iVar0];
Global_60544.f_217[iVar0 /*3*/][0]=Global_113648.f_20566.f_77[iVar0];
Global_60544.f_248[iVar0 /*3*/][0]=Global_113648.f_20566.f_88[iVar0];
if(!bParam0){
Global_60544[iVar0 /*3*/][1]=Global_113648.f_20566[iVar0];
Global_60544.f_31[iVar0 /*3*/][1]=Global_113648.f_20566.f_11[iVar0];
Global_60544.f_62[iVar0 /*3*/][1]=Global_113648.f_20566.f_22[iVar0];
Global_60544.f_93[iVar0 /*3*/][1]=Global_113648.f_20566.f_33[iVar0];
Global_60544.f_124[iVar0 /*3*/][1]=Global_113648.f_20566.f_44[iVar0];
Global_60544.f_155[iVar0 /*3*/][1]=Global_113648.f_20566.f_55[iVar0];
Global_60544.f_186[iVar0 /*3*/][1]=Global_113648.f_20566.f_66[iVar0];
Global_60544.f_217[iVar0 /*3*/][1]=Global_113648.f_20566.f_77[iVar0];
Global_60544.f_248[iVar0 /*3*/][1]=Global_113648.f_20566.f_88[iVar0];
}
iVar0++;
}}


void func_59(int iParam0){
int iVar0;
iVar0=Global_60536[iParam0];
switch (iParam0){
case 0:
STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
break;
case 1:
STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
break;
case 2:
STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
break;
}}


void func_60(bool bParam0){
bool bVar0;
char cVar1[64];
if(bParam0==8){
func_66(129, 0, -1);
return;
}
if(bParam0==9){
func_66(135, 0, -1);
return;
}
if(bParam0==10){
func_66(136, 0, -1);
return;
}
if(bParam0==11){
func_66(137, 0, -1);
return;
}
if(bParam0==12){
func_63(8272, 0, -1, 1, 0);
return;
}
if(bParam0==13){
func_63(8273, 0, -1, 1, 0);
return;
}
if(bParam0==14){
func_63(8274, 0, -1, 1, 0);
return;
}
if(bParam0==15){
func_63(8275, 0, -1, 1, 0);
return;
}
if(bParam0==16){
func_63(8276, 0, -1, 1, 0);
return;
}
if(bParam0==17){
func_63(8277, 0, -1, 1, 0);
return;
}
bVar0=false;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(MISC::IS_BIT_SET(Global_113648.f_20566.f_471, bParam0)){
bVar0=true;
MISC::CLEAR_BIT(&(Global_113648.f_20566.f_471), bParam0);
}}elseif(MISC::IS_BIT_SET(Global_113648.f_20566.f_471, bParam0) || MISC::IS_BIT_SET(Global_2359296[func_62() /*5568*/].f_681.f_10, bParam0)){
bVar0=true;
MISC::CLEAR_BIT(&(Global_113648.f_20566.f_471), bParam0);
MISC::CLEAR_BIT(&(Global_2359296[func_62() /*5568*/].f_681.f_10), bParam0);
}
if(bVar0){
StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_61(bParam0));
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
}}


char* func_61(bool bParam0){
switch (bParam0){
case 0:
return "COUP_HAIRC";
case 1:
return "COUP_TATTOO";
case 2:
return "COUP_WARSTOCK";
case 3:
return "COUP_MOSPORT";
case 4:
return "COUP_ELITAS";
case 5:
return "COUP_MEDSPENS";
case 6:
return "COUP_SPRUNK";
case 7:
return "COUP_RESPRAY";
case 8:
return "COUP_XMAS2017";
case 9:
return "COUP_CAR_XMAS2018";
case 10:
return "COUP_HELI_XMAS2018";
case 11:
return "COUP_CAR2_XMAS2018";
case 12:
return "COUP_CAS_ELITAS";
case 13:
return "COUP_CAS_DOCKTEASE";
case 14:
return "COUP_CAS_MOSPORT";
case 15:
return "COUP_CAS_SSASA";
case 16:
return "COUP_CAS_WARSTOCK";
case 17:
return "COUP_CAS_PANDM";
break;
default:
break;
}
return "";
}

int func_62(){
int iVar0;
iVar0=0;
return iVar0;
}


void func_63(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2805029[iParam0 /*3*/][func_64(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}

int func_64(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_65();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}

int func_65(){
return Global_1574918;
}


void func_66(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_65();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}


void func_67(int iParam0){
func_88(93, iParam0);
func_88(29, iParam0);
func_88(30, iParam0);
}

int func_68(int iParam0){
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
if(iParam0==8){
return func_70(129, -1);
}
if(iParam0==9){
return func_70(135, -1);
}
if(iParam0==10){
return func_70(136, -1);
}
if(iParam0==11){
return func_70(137, -1);
}
if(iParam0==12){
iVar0=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar1=func_69(8272, -1, 0);
if(iVar1==0 || iVar0 >=iVar1){
return 0;
}
return 1;
}
if(iParam0==13){
iVar2=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar3=func_69(8273, -1, 0);
if(iVar3==0 || iVar2 >=iVar3){
return 0;
}
return 1;
}
if(iParam0==14){
iVar4=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar5=func_69(8274, -1, 0);
if(iVar5==0 || iVar4 >=iVar5){
return 0;
}
return 1;
}
if(iParam0==15){
iVar6=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar7=func_69(8275, -1, 0);
if(iVar7==0 || iVar6 >=iVar7){
return 0;
}
return 1;
}
if(iParam0==16){
iVar8=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar9=func_69(8276, -1, 0);
if(iVar9==0 || iVar8 >=iVar9){
return 0;
}
return 1;
}
if(iParam0==17){
iVar10=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar11=func_69(8277, -1, 0);
if(iVar11==0 || iVar10 >=iVar11){
return 0;
}
return 1;
}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return MISC::IS_BIT_SET(Global_113648.f_20566.f_471, iParam0);
}
return MISC::IS_BIT_SET(Global_2359296[func_62() /*5568*/].f_681.f_10, iParam0);
}

int func_69(int iParam0, int iParam1, int iParam2){
int iVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
iVar0=Global_2805029[iParam0 /*3*/][func_64(iParam1)];
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


var func__70(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_65();
}
return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_71(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
iVar1=0;
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27)){
return 0;
}
if(STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1)){
iVar1=(iVar1 + iVar0);
}
if(STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1)){
iVar1=(iVar1 + iVar0);
}
if(STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1)){
iVar1=(iVar1 + iVar0);
}
if(bParam0){}
iVar2=0;
STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
if(iVar1 > 0 && (iVar2 / 2000000) !=(iVar1 / 2000000)){
STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
func_86(27, iVar1);
}
if(iVar1 < 200000000){
return 0;
}
func_72(27, 1);
return 1;
}

int func_72(int iParam0, int iParam1){
if(iParam0 >=78){
return 0;
}
return func_73(iParam0, iParam1);
}

int func_73(int iParam0, int iParam1){
if(func_85(14) && !func_84(iParam0)){
return 0;
}
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1==1){
return 0;
}
if(Global_32414 !=0 && !Global_78558){
return 0;
}
if(func_83(&Global_4542597)){
if(func_81(&Global_4542597, iParam0)){
return 0;
}
if(func_74(&Global_4542597, iParam0)){
return 1;
}}else{
if(!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0)){
return 0;
}
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0)){
return 1;
}
return 0;
}
return 0;
}

int func_74(var uParam0, int iParam1){
int iVar0;
var uVar1[78];
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)){
return 0;
}
if(func_85(14) && !func_84(iParam1)){
return 0;
}
if(func_81(uParam0, iParam1)){
return 0;
}
if(func_80(uParam0) < 0f){
func_79(uParam0, 0);
}
func_77(&uVar1);
iVar0=0;
iVar0=0;
while (iVar0 < (*uParam0 - 1)){
uVar1[iVar0 + 1]=(*uParam0)[iVar0];
iVar0++;
}
func_75(&uVar1, iParam1);
iVar0=0;
iVar0=0;
while (iVar0 < *uParam0){
(*uParam0)[iVar0]=uVar1[iVar0];
iVar0++;
}
return 1;
}

int func_75(var uParam0, int iParam1){
int iVar0;
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)){
return 0;
}
if(func_85(14) && !func_84(iParam1)){
return 0;
}
if(func_81(uParam0, iParam1)){
return 0;
}
if(func_80(uParam0) < 0f){
func_79(uParam0, 0);
}
iVar0=0;
while (iVar0 < *uParam0){
if(func_76(uParam0, iVar0)){
(*uParam0)[iVar0]=iParam1;
return 1;
}
iVar0++;
}
return 0;
}


bool func_76(var uParam0, int iParam1){
return (*uParam0)[iParam1]==78;
}


void func_77(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < *uParam0){
func_78(uParam0, iVar0);
iVar0++;
}
func_79(uParam0, (Global_4542596 - 0.5f));
}


void func_78(var uParam0, int iParam1){
(*uParam0)[iParam1]=78;
}


void func_79(var uParam0, float fParam1){
if(fParam1==0f){
uParam0->f_80=0f;
}else{
uParam0->f_80=fParam1;
}}


float func_80(var uParam0){
return uParam0->f_80;
}


bool func_81(var uParam0, int iParam1){
return func_82(uParam0, iParam1) !=-1;
}

int func_82(var uParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < *uParam0){
if((*uParam0)[iVar0]==iParam1){
return iVar0;
}
iVar0++;
}
return -1;
}


bool func_83(var uParam0){
return uParam0->f_79==1;
}

int func_84(int iParam0){
switch (iParam0){
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
default:
}
return 0;
}


bool func_85(int iParam0){
return Global_43257==iParam0;
}

int func_86(int iParam0, int iParam1){
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


void func_87(int iParam0, int iParam1){
int iVar0;
STATS::STAT_GET_INT(iParam0, &iVar0, -1);
iVar0=(iVar0 + iParam1);
STATS::STAT_SET_INT(iParam0, iVar0, 1);
}


void func_88(int iParam0, int iParam1){
int iVar0;
if(iParam1 < 1){
return;
}
if(Global_59104[iParam0 /*7*/].f_2){
return;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return;
}
if(Global_59104[iParam0 /*7*/]){
STATS::STAT_GET_INT(Global_59104[iParam0 /*7*/].f_1, &iVar0, -1);
iVar0=(iVar0 + iParam1);
STATS::STAT_SET_INT(Global_59104[iParam0 /*7*/].f_1, iVar0, 1);
}}


void func_89(){
int iVar0;
if(NETWORK::NETWORK_IS_SIGNED_IN()){
STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
if(!Global_60536[0]==iVar0){
Global_60536[0]=iVar0;
}
STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
if(!Global_60536[1]==iVar0){
Global_60536[1]=iVar0;
}
STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
if(!Global_60536[2]==iVar0){
Global_60536[2]=iVar0;
}}}

int func_90(int iParam0){
return Global_2028[iParam0 /*29*/].f_17;
}

int func_91(){
func_92();
return Global_113648.f_2365.f_539.f_4321;
}


void func_92(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_94(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_506(PLAYER::PLAYER_PED_ID());
if(func_93(iVar0) && (!func_85(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_93(Global_113648.f_2365.f_539.f_4321)){
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


bool func_93(int iParam0){
return iParam0 < 3;
}

int func_94(int iParam0){
if(func_93(iParam0)){
return func_95(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__95(int iParam0){
return Global_2028[iParam0 /*29*/];
}


void func_96(var uParam0){
if(uParam0->f_565 || uParam0->f_576 <=uParam0->f_562){
uParam0->f_565=0;
uParam0->f_562=(uParam0->f_576 - 1);
}}


void func_97(var uParam0, int iParam1){
if(uParam0->f_4 !=0){
func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
}
if((((*uParam0)[0] !=0 || (*uParam0)[1] !=0) || (*uParam0)[2] !=0) || iParam1==1){
func_103(uParam0);
func_102(uParam0);
func_101(&Global_2101867);
}
if(Global_2097536.f_2708 !=0 || Global_2097536.f_3184){
func_99();
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE")){
AUDIO::STOP_AUDIO_SCENE("LEADERBOARD_SCENE");
}
if(NETWORK::NETWORK_IS_SIGNED_ONLINE()){
func_98(&(Global_2103068.f_49));
}
Global_2793046.f_4062=0;
}


void func_98(var uParam0){
uParam0->f_1=0;
}


void func_99(){
int iVar0;
int iVar1;
struct<75> Var2;
Var2.f_60=6;
Var2.f_67=6;
iVar0=0;
while (iVar0 < 3){
iVar1=0;
while (iVar1 < 12){
Global_2097536[iVar0 /*901*/][iVar1 /*75*/]={
Var2 
};
iVar1++;
}
Global_2097536.f_2704[iVar0]=0;
iVar0++;
}
Global_2097536.f_2708=0;
Global_2097536.f_2709=0;
iVar0=0;
iVar0=0;
while (iVar0 < 6){
Global_2097536.f_2710[iVar0]=0;
StringCopy(&(Global_2097536.f_2717[iVar0 /*6*/]), "", 24);
Global_2097536.f_2754[iVar0]=0;
Global_2097536.f_2761[iVar0]=0;
iVar0++;
}
Global_2097536.f_2768=0;
Global_2097536.f_2769=0;
Global_2097536.f_2770=0;
iVar0=0;
iVar0=0;
while (iVar0 < 3){
Global_2097536.f_2771[iVar0]=0;
Global_2097536.f_2775[iVar0]=0;
iVar0++;
}
Global_2097536.f_2779=0;
func_100(&(Global_2097536.f_2780));
func_98(&(Global_2097536.f_2823));
Global_2097536.f_2825=-1;
Global_2097536.f_2826=0;
func_98(&(Global_2097536.f_2827));
Global_2097536.f_2829=0;
func_98(&(Global_2097536.f_2830));
Global_2097536.f_2832=0;
Global_2097536.f_2780.f_28=0;
Global_2097536.f_2780.f_27=0;
Global_2097536.f_3184=0;
}


void func_100(var uParam0){
int iVar0;
*uParam0=0;
StringCopy(&(uParam0->f_1), "", 32);
StringCopy(&(uParam0->f_9), "", 64);
uParam0->f_25=1;
uParam0->f_26=0;
uParam0->f_27=0;
uParam0->f_28=0;
iVar0=0;
while (iVar0 < 6){
uParam0->f_29[iVar0]=0;
uParam0->f_36[iVar0]=0;
iVar0++;
}}


void func_101(var uParam0){
struct<13> Var0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < 12){
StringCopy(uParam0[iVar1 /*100*/], "", 64);
StringCopy(&((uParam0[iVar1 /*100*/])->f_16), "", 64);
(uParam0[iVar1 /*100*/])->f_32={
Var0 
};
(uParam0[iVar1 /*100*/])->f_45={
Var0 
};
(uParam0[iVar1 /*100*/])->f_58=0;
(uParam0[iVar1 /*100*/])->f_59=0;
iVar2=0;
while (iVar2 < 6){
(uParam0[iVar1 /*100*/])->f_60[iVar2]=0f;
(uParam0[iVar1 /*100*/])->f_67[iVar2]=0;
iVar2++;
}
(uParam0[iVar1 /*100*/])->f_75=0;
(uParam0[iVar1 /*100*/])->f_74=0;
(uParam0[iVar1 /*100*/])->f_76=0;
(uParam0[iVar1 /*100*/])->f_77=0;
(uParam0[iVar1 /*100*/])->f_78=0;
(uParam0[iVar1 /*100*/])->f_79=0;
StringCopy(&((uParam0[iVar1 /*100*/])->f_80), "", 16);
iVar1++;
}
func_98(&(Global_2097536.f_2830));
}


void func_102(var uParam0){
int iVar0;
struct<13> Var1;
uParam0->f_246=0;
uParam0->f_246.f_1=-1;
uParam0->f_246.f_2=0;
func_98(&(uParam0->f_246.f_3));
uParam0->f_246.f_5=0;
iVar0=0;
while (iVar0 < 12){
uParam0->f_246.f_6[iVar0 /*15*/]=-1;
uParam0->f_246.f_6[iVar0 /*15*/].f_1=0;
uParam0->f_246.f_6[iVar0 /*15*/].f_2={
Var1 
};
iVar0++;
}
iVar0=0;
while (iVar0 < 3){
uParam0->f_246.f_187[iVar0]=0;
iVar0++;
}}


void func_103(var uParam0){
int iVar0;
struct<35> Var1;
(*uParam0)[0]=0;
(*uParam0)[1]=0;
(*uParam0)[2]=0;
uParam0->f_4=0;
uParam0->f_6=0;
uParam0->f_7={
Var1 
};
uParam0->f_42=0;
uParam0->f_43=0;
uParam0->f_44=0;
uParam0->f_44.f_1=0;
uParam0->f_44.f_2=0;
uParam0->f_44.f_3=0;
iVar0=0;
while (iVar0 < 4){
StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/]), "", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
iVar0++;
}
uParam0->f_113[0 /*66*/]=0;
iVar0=0;
while (iVar0 < 4){
StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
iVar0++;
}}


void func_104(var uParam0, var uParam1, var uParam2){
*uParam0=0;
*uParam1=0;
Global_2097152=0;
func_98(&(Global_2097152.f_1));
STATS::LEADERBOARDS_READ_CLEAR(*uParam2, uParam2->f_1, -1);
}


void func_105(){
struct<68> Var0;
Global_2097157=0;
Global_2097157.f_1=0;
Global_2097157.f_2=0;
Global_2097157.f_3=0;
Global_2097157.f_4=0;
func_107(&(Global_2097157.f_73));
func_107(&(Global_2097157.f_142));
func_107(&(Global_2097157.f_211));
func_107(&(Global_2097157.f_280));
StringCopy(&(Global_2097157.f_349), "", 24);
StringCopy(&(Global_2097157.f_355), "", 24);
func_106(&(Global_2097157.f_361));
Global_2097157.f_374=-1;
Global_2097532=0;
Global_2097533=0;
Var0.f_2.f_1=4;
Global_2097157.f_5={
Var0 
};
}


void func_106(var uParam0){
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


void func_107(var uParam0){
int iVar0;
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0;
iVar0=0;
while (iVar0 < 32){
uParam0->f_3[iVar0]=0f;
uParam0->f_36[iVar0]=0;
iVar0++;
}}


void func_108(var uParam0){
func_48(uParam0);
uParam0->f_574=0;
uParam0->f_31=0;
uParam0->f_56=0;
uParam0->f_571=0;
uParam0->f_573=0;
}


void func_109(){
CAM::SET_CAM_ACTIVE(uLocal_81, 1);
}

int func_110(var uParam0, bool bParam1, bool bParam2, int iParam3){
if(!func_3(&(uParam0->f_666), 7)){
if(!func_3(&(uParam0->f_666), 9)){
func_39(1);
func_121(&(uParam0->f_509), 0, 0, 1, 1);
func_120(&(uParam0->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
if(!bParam2){
func_120(&(uParam0->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
}else{
func_120(&(uParam0->f_509), "DARTS_REPLAY", 2, 216, 1, 1, 0);
}
if(iParam3 || !PLAYER::IS_PLAYER_ONLINE()){
func_120(&(uParam0->f_509), "HUD_LBD_LBD", 2, 211, 1, 1, 0);
}
func_117(&(uParam0->f_509), 1);
func_337(&(uParam0->f_666), 8, 0);
func_337(&(uParam0->f_666), 9, 1);
}
if(!func_3(&(uParam0->f_666), 14)){
if(bParam1){
if(!bParam2){
func_113(func_116(uParam0->f_668 < uParam0->f_669, uParam0->f_668, uParam0->f_669), func_115(uParam0->f_668 < uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
func_113(func_116(uParam0->f_668 >=uParam0->f_669, uParam0->f_668, uParam0->f_669), func_115(uParam0->f_668 >=uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
}else{
func_113(uParam0->f_668, &(uParam0->f_648), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
}
func_416(&(uParam0->f_57), 0, 0);
}
func_123(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
}
if(!HUD::IS_PAUSE_MENU_ACTIVE()){
if((MISC::GET_GAME_TIMER() - uParam0->f_671) > 900){
if(PAD::IS_CONTROL_PRESSED(2, 216)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
func_337(&(uParam0->f_666), 9, 0);
return 1;
}elseif(PAD::IS_CONTROL_JUST_PRESSED(2, 215)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
func_112();
func_111();
return 2;
}}}}else{
func_2(uParam0);
if(PAD::IS_CONTROL_JUST_RELEASED(2, 201)){
return 2;
}elseif(PAD::IS_CONTROL_JUST_RELEASED(2, 202)){
func_337(&(uParam0->f_666), 9, 0);
func_337(&(uParam0->f_666), 7, 0);
}}
return 0;
}


void func_111(){
if(Global_2672505.f_2514[0 /*80*/].f_2 !=0){
Global_2672505.f_2514[0 /*80*/].f_2=5;
}}


void func_112(){
Global_32308=1;
}


void func_113(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14){
int iVar0;
int iVar1;
if(func_114(sParam6)){
sParam6="NUMBER";
}
iVar0=-1;
iVar1=0;
while (iVar1 <=9){
if(iVar0==-1){
if(func_33(3, iVar1)==0){
iVar0=iVar1;
}}
iVar1++;
}
if(iVar0 > -1){
Global_1655472.f_1=1;
func_32(3, iVar0);
Global_1655472.f_2839[iVar0]=iParam0;
StringCopy(&(Global_1655472.f_2839.f_11[iVar0 /*16*/]), sParam1, 64);
Global_1655472.f_2839.f_183[iVar0]=iParam3;
Global_1655472.f_2839.f_172[iVar0]=iParam2;
Global_1655472.f_2839.f_205[iVar0]=iParam4;
Global_1655472.f_2839.f_216[iVar0]=iParam5;
StringCopy(&(Global_1655472.f_2839.f_259[iVar0 /*16*/]), sParam6, 64);
Global_1655472.f_2839.f_420[iVar0]=iParam7;
Global_1655472.f_2839.f_453[iVar0]=iParam8;
Global_1655472.f_2839.f_431[iVar0]=iParam9;
Global_1655472.f_2839.f_442[iVar0]=iParam10;
Global_1655472.f_2839.f_464[iVar0]=iParam11;
Global_1655472.f_2839.f_475[iVar0]=iParam12;
Global_1655472.f_2839.f_486[iVar0]=iParam13;
Global_1655472.f_2839.f_497[iVar0]=iParam14;
}}

int func_114(var uParam0){
if(MISC::IS_STRING_NULL(uParam0)){
return 1;
}elseif(MISC::ARE_STRINGS_EQUAL(uParam0, "") || MISC::ARE_STRINGS_EQUAL(uParam0, "0")){
return 1;
}
return 0;
}


char* func_115(bool bParam0, char* sParam1, char* sParam2){
if(bParam0){
return sParam1;
}
return sParam2;
}

int func_116(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}


void func_117(var uParam0, bool bParam1){
if(bParam1){
func_119(&(uParam0->f_1), 1024);
}else{
func_118(&(uParam0->f_1), 1024);
}}


void func_118(var uParam0, int iParam1){
*uParam0=(*uParam0 - (*uParam0 && iParam1));
}


void func_119(var uParam0, int iParam1){
*uParam0=(*uParam0 || iParam1);
}

int func_120(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
int iVar0;
int iVar1;
if(*uParam0==0){
return 0;
}
iVar0=0;
if(iParam5==1){
iVar0=1;
}
iVar1=uParam0->f_123;
if(iVar1 < 8){
uParam0->f_2[iVar1 /*15*/]=sParam1;
uParam0->f_2[iVar1 /*15*/].f_1=iVar0;
uParam0->f_2[iVar1 /*15*/].f_2=iParam6;
uParam0->f_2[iVar1 /*15*/].f_12=0;
uParam0->f_2[iVar1 /*15*/].f_13=0;
uParam0->f_2[iVar1 /*15*/].f_14=0;
uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/]=iParam2;
uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1=iParam3;
if(iParam4==1){
MISC::SET_BIT(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
}
uParam0->f_2[iVar1 /*15*/].f_14++;
uParam0->f_123++;
return 1;
}
return 0;
}


void func_121(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4){
if(*uParam0==0){
*uParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
}
uParam0->f_1=0;
uParam0->f_123=0;
if(bParam1){
func_119(&(uParam0->f_1), 32);
}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
func_119(&(uParam0->f_1), 1);
if(bParam2){
GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, 1);
}}
if(MISC::IS_PC_VERSION()){
if(bParam3){
func_119(&(uParam0->f_1), 4096);
}}
if(bParam4){
func_119(&(uParam0->f_1), 8192);
}}

int func_122(var uParam0){
if((MISC::IS_BIT_SET(uParam0->f_42, 1) && Global_2097536.f_2704[0] > 0) && uParam0->f_246.f_1 >=0){
return 1;
}
return 0;
}


void func_123(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5){
int iVar0;
var uVar1;
int iVar2;
char* sVar3;
bool bVar4;
int iVar5;
int iVar6;
bool bVar7;
float fVar8;
if(((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || MISC::IS_FRONTEND_FADING()){
if(!bParam3){
return;
}}
if(!func_126(uParam0)){
return;
}
HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
if(!func_125(uParam0->f_1, 256) || (func_125(uParam0->f_1, 8192) && PAD::HAVE_CONTROLS_CHANGED(2))){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_125(uParam0->f_1, 4096));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iVar5=0;
iVar6=0;
while (iVar6 < uParam0->f_123){
switch (uParam0->f_2[iVar6 /*15*/].f_2){
case 0:
bVar4=true;
break;
case 1:
bVar4=PAD::IS_USING_KEYBOARD_AND_MOUSE(2);
break;
case 2:
bVar4=!PAD::IS_USING_KEYBOARD_AND_MOUSE(2);
break;
default:
bVar4=false;
break;
}
if(bVar4){
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT")){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
iVar5++;
bVar7=false;
while (bVar7 < uParam0->f_2[iVar6 /*15*/].f_14){
iVar0=uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/];
uVar1=uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/].f_1;
iVar2=MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_13, bVar7);
if(!MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_12, bVar7)){
sVar3=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar0, uVar1, iVar2);
}
else{
sVar3=PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(iVar0, iVar1, iVar2);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sVar3)){
func_13(sVar3);
}
bVar7++;
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/])){
func_12(uParam0->f_2[iVar6 /*15*/]);
}
if(MISC::IS_PC_VERSION()){
if(func_125(uParam0->f_1, 4096)){
if(uParam0->f_2[iVar6 /*15*/].f_1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
}
}}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
iVar6++;
}
fVar8=func_124(bParam4, func_124(func_125(uParam0->f_1, 32), 1f, 0f), -1f);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_119(&(uParam0->f_1), 256);
func_118(&(uParam0->f_1), 128);
}
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}


float func_124(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}


bool func_125(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}

int func_126(var uParam0){
if(*uParam0 !=0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
func_119(&(uParam0->f_1), 1);
return 1;
}}
return 0;
}


void func_127(var uParam0, var uParam1){
func_128(uParam1, uParam0);
}


void func_128(var uParam0, var uParam1){
int iVar0;
bool bVar1;
var uVar2[3];
int iVar3;
bool bVar4;
bool bVar5;
char cVar6[64];
char[] cVar7[8];
int iVar8[3];
int iVar9;
struct<13> Var10;
var uVar11;
struct<3> Var12;
struct<3> Var13;
bool bVar14;
func_209(&(Global_2103068.f_49), 1, 0);
HUD::HIDE_HELP_TEXT_THIS_FRAME();
func_208();
func_41(0);
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
func_206(1);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
func_205(1);
func_204(1);
if(!func_201()){
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE")){
AUDIO::START_AUDIO_SCENE("LEADERBOARD_SCENE");
}}
if(!MISC::IS_BIT_SET(uParam1->f_42, 3)){
*uParam0=func_200();
MISC::SET_BIT(&(uParam1->f_42), 3);
}
Var10={
func_25(PLAYER::PLAYER_ID()) 
};
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
if(((!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())) || Global_2097536.f_2832 !=0){
if(!PLAYER::IS_PLAYER_ONLINE()){
if(Global_2097536.f_2829 !=2){
MISC::CLEAR_BIT(&(uParam1->f_42), true);
Global_2097536.f_2829=2;
}}elseif(!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS()){
if(Global_2097536.f_2829 !=3){
MISC::CLEAR_BIT(&(uParam1->f_42), true);
Global_2097536.f_2829=3;
}}elseif(!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
if(Global_2097536.f_2829 !=4){
MISC::CLEAR_BIT(&(uParam1->f_42), true);
Global_2097536.f_2829=4;
}}elseif(Global_2097536.f_2832 !=0){
if(Global_2097536.f_2829 !=5){
MISC::CLEAR_BIT(&(uParam1->f_42), true);
Global_2097536.f_2829=5;
}}
if(!MISC::IS_BIT_SET(uParam1->f_42, 1)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_199(*uParam0, Global_2097536.f_2780);
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1))){
if(!func_198(uParam1->f_44)){
if(Global_2097536.f_2780.f_26 > 0){
cVar6={
Global_2097536.f_2780.f_9 
};
func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &cVar6, Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
}
else{
func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
}}elseif(!Global_2097536.f_2780.f_27){
StringCopy(&cVar6, "FMMC_COR_SCLB5", 64);
if(Global_2097536.f_2780.f_26 > 0){
func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
}
else{
func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
}}else{
StringCopy(&cVar6, "FMMC_COR_SCLB6", 64);
if(Global_2097536.f_2780.f_26 > 0){
func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
}
else{
func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
}}
func_196(*uParam0, "SCLB_C_RANK", &(Global_2097536.f_2717), Global_2097536.f_2708);
}
iVar9=0;
MISC::SET_BIT(&iVar9, 4);
func_195(*uParam0, &iVar3, iVar9, 1, 1);
iVar9=0;
MISC::SET_BIT(&iVar9, 5);
func_195(*uParam0, &iVar3, iVar9, 1, 1);
iVar9=0;
MISC::SET_BIT(&iVar9, 6);
func_195(*uParam0, &iVar3, iVar9, 1, 1);
MISC::SET_BIT(&(uParam1->f_42), 1);
func_194(*uParam0);
MISC::CLEAR_BIT(&(uParam1->f_42), 2);
HUD::CLEAR_HELP(1);
}else{
func_194(*uParam0);
}}else{
if(Global_2097536.f_2829 !=1){
MISC::CLEAR_BIT(&(uParam1->f_42), true);
Global_2097536.f_2829=1;
}
if(!func_157(uParam1)){
uParam1->f_246.f_1=-1;
MISC::CLEAR_BIT(&(uParam1->f_42), true);
if(!MISC::IS_BIT_SET(uParam1->f_42, 0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_199(*uParam0, Global_2097536.f_2780);
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1))){
if(!func_198(uParam1->f_44)){
if(Global_2097536.f_2780.f_26 > 0){
cVar6={
Global_2097536.f_2780.f_9 
};
func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &cVar6, 1, Global_2097536.f_2780.f_26);
}else{
func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
}
}
elseif(!Global_2097536.f_2780.f_27){
StringCopy(&cVar6, "FMMC_COR_SCLB5", 64);
if(Global_2097536.f_2780.f_26 > 0){
func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
}else{
func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
}
}
else{
StringCopy(&cVar6, "FMMC_COR_SCLB6", 64);
if(Global_2097536.f_2780.f_26 > 0){
func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
}else{
func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
}
}
func_196(*uParam0, "SCLB_C_RANK", &(Global_2097536.f_2717), Global_2097536.f_2708);
}
MISC::SET_BIT(&(uParam1->f_42), 0);
MISC::CLEAR_BIT(&(uParam1->f_42), 2);
}
iVar3=0;
iVar0=0;
if(Global_2097536.f_2825==-1){
StringCopy(&Var12, "SC_LB_DL0", 24);
iVar0=0;
while (iVar0 < 3){
if(iVar0==0){
iVar9=0;
MISC::SET_BIT(&iVar9, 4);
func_195(*uParam0, &iVar3, iVar9, 0, 0);
}
elseif(iVar0==1){
iVar9=0;
MISC::SET_BIT(&iVar9, 5);
func_195(*uParam0, &iVar3, iVar9, 0, 0);
}
elseif(iVar0==2){
iVar9=0;
MISC::SET_BIT(&iVar9, 6);
func_195(*uParam0, &iVar3, iVar9, 0, 0);
}
iVar9=0;
MISC::SET_BIT(&iVar9, 7);
func_156(*uParam0, iVar3, iVar9, &Var12);
iVar3++;
iVar0++;
}
Global_2097536.f_2825=1;
func_98(&(Global_2097536.f_2823));
}elseif(func_154(&(Global_2097536.f_2823), 300, 0)){
StringCopy(&Var13, "SC_LB_DL", 24);
StringIntConCat(&Var13, Global_2097536.f_2825, 24);
iVar0=0;
while (iVar0 < 3){
if(iVar0==0){
iVar9=0;
MISC::SET_BIT(&iVar9, 4);
func_195(*uParam0, &iVar3, iVar9, 0, 0);
}
elseif(iVar0==1){
iVar9=0;
MISC::SET_BIT(&iVar9, 5);
func_195(*uParam0, &iVar3, iVar9, 0, 0);
}
elseif(iVar0==2){
iVar9=0;
MISC::SET_BIT(&iVar9, 6);
func_195(*uParam0, &iVar3, iVar9, 0, 0);
}
iVar9=0;
MISC::SET_BIT(&iVar9, 7);
func_156(*uParam0, iVar3, iVar9, &Var13);
iVar3++;
iVar0++;
}
Global_2097536.f_2825++;
if(Global_2097536.f_2825 > 3){
Global_2097536.f_2825=0;
}
func_98(&(Global_2097536.f_2823));
}
func_194(*uParam0);
}else{
MISC::CLEAR_BIT(&(uParam1->f_42), false);
if(!MISC::IS_BIT_SET(uParam1->f_42, 1)){
iVar0=0;
while (iVar0 < 3){
uParam1->f_246.f_187[iVar0]=0;
iVar0++;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_199(*uParam0, Global_2097536.f_2780);
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1))){
if(!func_198(uParam1->f_44)){
if(Global_2097536.f_2780.f_26 > 0){
cVar6={
Global_2097536.f_2780.f_9 
};
func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &cVar6, 1, Global_2097536.f_2780.f_26);
}else{
func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
}
}
elseif(!Global_2097536.f_2780.f_27){
StringCopy(&cVar6, "FMMC_COR_SCLB5", 64);
if(Global_2097536.f_2780.f_26 > 0){
func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
}else{
func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
}
}
else{
StringCopy(&cVar6, "FMMC_COR_SCLB6", 64);
if(Global_2097536.f_2780.f_26 > 0){
func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
}else{
func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
}
}
func_196(*uParam0, "SCLB_C_RANK", &(Global_2097536.f_2717), Global_2097536.f_2708);
}
if(!MISC::IS_BIT_SET(uParam1->f_42, 6)){
func_101(&Global_2101867);
func_150(uParam1, &Global_2101867);
func_149(uParam1, &Global_2101867);
}
iVar3=0;
uParam1->f_246.f_2=0;
if((Global_2097536.f_2704[0] > 1 || (Global_2097536.f_2704[0] > 0 && Global_2097536.f_2775[0] !=-1)) || (((Global_2097536.f_2704[0] > 0 && Global_2097536.f_2780.f_27) && func_198(uParam1->f_44)) && Global_2097536.f_2775[0] !=-1)){
uParam1->f_246.f_1=-1;
iVar0=0;
iVar0=0;
while (iVar0 < 12){
bVar14=false;
if(Global_2101867[iVar0 /*100*/].f_75==1){
if(!iVar8[0]){
iVar9=0;
MISC::SET_BIT(&iVar9, 4);
func_195(*uParam0, &iVar3, iVar9, 0, 0);
iVar8[0]=1;
}}elseif(Global_2101867[iVar0 /*100*/].f_75==2){
if(!iVar8[1]){
iVar9=0;
MISC::SET_BIT(&iVar9, 5);
if((Global_2097536.f_2704[1] < 1 && Global_2097536.f_2775[1]==-1) && !(((Global_2097536.f_2704[1] > 0 && Global_2097536.f_2780.f_27) && func_198(uParam1->f_44)) && Global_2097536.f_2775[1] !=-1)){
func_195(*uParam0, &iVar3, iVar9, 1, 0);
bVar14=true;
}
else{
func_195(*uParam0, &iVar3, iVar9, 0, 0);
}
iVar8[1]=1;
}}elseif(Global_2101867[iVar0 /*100*/].f_75==3){
if(!iVar8[2]){
iVar9=0;
MISC::SET_BIT(&iVar9, 6);
if(!NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()){
bVar14=true;
}
elseif(!NETWORK::NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT()){
bVar14=true;
}
if((Global_2097536.f_2704[2] < 2 && Global_2097536.f_2775[2]==-1) && !(((Global_2097536.f_2704[2] > 0 && Global_2097536.f_2780.f_27) && func_198(uParam1->f_44)) && Global_2097536.f_2775[2] !=-1)){
bVar14=true;
}
if(bVar14){
func_195(*uParam0, &iVar3, iVar9, 1, 0);
}
else{
func_195(*uParam0, &iVar3, iVar9, 0, 0);
}
iVar8[2]=1;
}}
if(func_148(Global_2101867[iVar0 /*100*/].f_32)){
if(func_198(uParam1->f_44)){
NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &uVar11);
if(!Global_2101867[iVar0 /*100*/].f_74 && MISC::ARE_STRINGS_EQUAL(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar11)){
bVar14=true;
}}
if(!bVar14){
iVar9=0;
if(!Global_2097536.f_2780.f_27){
if(func_147(&(Global_2101867[iVar0 /*100*/].f_32), &Var10)){
MISC::SET_BIT(&iVar9, 1);
if(uParam1->f_246.f_1==-1){
bVar4=true;
uParam1->f_246.f_1=iVar0;
MISC::SET_BIT(&iVar9, 3);
}
}
}
if(func_198(uParam1->f_44)){
cVar6={
Global_2101867[iVar0 /*100*/] 
};
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2101867[iVar0 /*100*/].f_84)) && !MISC::ARE_STRINGS_EQUAL(&(Global_2101867[iVar0 /*100*/].f_84), "")){
StringConCat(&cVar6, "/", 64);
StringConCat(&cVar6, &(Global_2101867[iVar0 /*100*/].f_84), 64);
}
func_146(*uParam0, iVar3, iVar9, Global_2101867[iVar0 /*100*/].f_59, &cVar6, &(Global_2101867[iVar0 /*100*/].f_80));
uParam1->f_246.f_6[iVar0 /*15*/]=iVar3;
uParam1->f_246.f_6[iVar0 /*15*/].f_1=iVar9;
uParam1->f_246.f_6[iVar0 /*15*/].f_2={
Global_2101867[iVar0 /*100*/].f_32 
};
uParam1->f_246.f_2++;
}
else{
func_146(*uParam0, iVar3, iVar9, Global_2101867[iVar0 /*100*/].f_59, &(Global_2101867[iVar0 /*100*/]), &(Global_2101867[iVar0 /*100*/].f_80));
uParam1->f_246.f_6[iVar0 /*15*/]=iVar3;
uParam1->f_246.f_6[iVar0 /*15*/].f_1=iVar9;
uParam1->f_246.f_6[iVar0 /*15*/].f_2={
Global_2101867[iVar0 /*100*/].f_32 
};
uParam1->f_246.f_2++;
}
bVar1=false;
while (bVar1 < Global_2097536.f_2708){
bVar5=false;
if(MISC::IS_BIT_SET(Global_2097536.f_2770, bVar1)){
if(MISC::IS_BIT_SET(Global_2097536.f_2768, bVar1)){
if(Global_2097536.f_2754[bVar1]==Global_2101867[iVar0 /*100*/].f_67[bVar1]){
bVar5=true;
}}
if(bVar5){
func_137(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_67[bVar1], 0, Global_2101867[iVar0 /*100*/].f_58);
}else{
func_137(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_67[bVar1], Global_2101867[iVar0 /*100*/].f_74, Global_2101867[iVar0 /*100*/].f_58);
}
}
else{
if(MISC::IS_BIT_SET(Global_2097536.f_2768, bVar1)){
if(Global_2097536.f_2761[bVar1]==Global_2101867[iVar0 /*100*/].f_67[bVar1]){
bVar5=true;
}}
if(bVar5){
func_134(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_60[bVar1], 0);
}else{
func_134(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_60[bVar1], Global_2101867[iVar0 /*100*/].f_74);
}
}
bVar1++;
}
func_133();
uVar2[(Global_2101867[iVar0 /*100*/].f_75 - 1)]++;
if(uVar2[(Global_2101867[iVar0 /*100*/].f_75 - 1)]==2){
if(Global_2101867[iVar0 /*100*/].f_59 > 2){
MISC::SET_BIT(&iVar9, 2);
MISC::SET_BIT(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
func_132(*uParam0, (iVar3 - 1), iVar9);
}
}
iVar3++;
}}
iVar0++;
}
iVar0=0;
iVar0=0;
while (iVar0 < 3){
uParam1->f_246.f_187[iVar0]=uVar2[iVar0];
iVar0++;
}}else{
iVar9=0;
MISC::SET_BIT(&iVar9, 4);
func_195(*uParam0, &iVar3, iVar9, 1, 0);
iVar9=0;
MISC::SET_BIT(&iVar9, 5);
func_195(*uParam0, &iVar3, iVar9, 1, 0);
iVar9=0;
MISC::SET_BIT(&iVar9, 6);
func_195(*uParam0, &iVar3, iVar9, 1, 0);
}
MISC::SET_BIT(&(uParam1->f_42), 1);
MISC::CLEAR_BIT(&(uParam1->f_42), 2);
func_194(*uParam0);
HUD::CLEAR_HELP(1);
if(uParam1->f_246.f_1==-1 && !bVar4==1){
if(Global_2097536.f_2704[0] > 1){
uParam1->f_246.f_1=0;
MISC::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
func_132(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
}}}else{
func_194(*uParam0);
func_129(uParam0, uParam1);
}}}}}


void func_129(var uParam0, var uParam1){
bool bVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
var uVar5;
int iVar6;
var uVar7;
var uVar8;
iVar1=uParam1->f_246.f_1;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
HUD::SET_MOUSE_CURSOR_THIS_FRAME();
PAD::SET_INPUT_EXCLUSIVE(2, 239);
PAD::SET_INPUT_EXCLUSIVE(2, 240);
PAD::SET_INPUT_EXCLUSIVE(2, 237);
PAD::SET_INPUT_EXCLUSIVE(2, 238);
PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
if(PAD::IS_DISABLED_CONTROL_PRESSED(2, 241)){
PAD::SET_CONTROL_VALUE_NEXT_FRAME(2, 188, 1f);
}
if(PAD::IS_DISABLED_CONTROL_PRESSED(2, 242)){
PAD::SET_CONTROL_VALUE_NEXT_FRAME(2, 187, 1f);
}
if(HUD::GET_MOUSE_EVENT(*uParam0, &iVar2, &iVar3, &uVar4)){
if(iVar2==5){
if(iVar3 > uParam1->f_246.f_187[0]){
if(iVar3 <=(uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2){
iVar3=(iVar3 - 2);
}else{
iVar3=(iVar3 - 4);
}}
iVar3=(iVar3 - 1);
if(uParam1->f_246.f_1 !=iVar3){
uParam1->f_246.f_1=iVar3;
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
bVar0=true;
}else{
PAD::SET_CONTROL_VALUE_NEXT_FRAME(2, 217, 1f);
}}}}
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_131(&uVar5, &iVar6, &uVar7, &uVar8, 0);
}
if(uParam1->f_246.f_2 > 0){
if(!MISC::IS_BIT_SET(uParam1->f_246, 0)){
if((PAD::IS_CONTROL_PRESSED(2, 188) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 188)) || iVar6 < -100){
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
uParam1->f_246.f_1=(uParam1->f_246.f_1 + -1);
MISC::SET_BIT(&(uParam1->f_246), 0);
func_98(&(uParam1->f_246.f_3));
bVar0=true;
}}elseif(func_130(uParam1, 188)){
MISC::CLEAR_BIT(&(uParam1->f_246), false);
}
if(!MISC::IS_BIT_SET(uParam1->f_246, 1)){
if((PAD::IS_CONTROL_PRESSED(2, 187) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 187)) || iVar6 > 100){
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
uParam1->f_246.f_1++;
MISC::SET_BIT(&(uParam1->f_246), 1);
func_98(&(uParam1->f_246.f_3));
bVar0=true;
}}elseif(func_130(uParam1, 187)){
MISC::CLEAR_BIT(&(uParam1->f_246), true);
}}
if(bVar0){
if(uParam1->f_246.f_1 < 0){
uParam1->f_246.f_1=(uParam1->f_246.f_2 - 1);
}
if(uParam1->f_246.f_1 >=uParam1->f_246.f_2){
uParam1->f_246.f_1=0;
}}
if(!MISC::IS_BIT_SET(uParam1->f_246, 3)){
if((PAD::IS_CONTROL_PRESSED(2, 204) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 204)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237)){
MISC::SET_BIT(&(uParam1->f_246), 3);
func_98(&(uParam1->f_246.f_3));
bVar0=true;
}}elseif(func_130(uParam1, 204)){
MISC::CLEAR_BIT(&(uParam1->f_246), 3);
}
if(uParam1->f_246.f_1 >=0){
if(uParam1->f_246.f_1 !=iVar1){
if(iVar1 >=0){
MISC::CLEAR_BIT(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
func_132(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
}
MISC::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
func_132(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
MISC::CLEAR_BIT(&(uParam1->f_42), 2);
}
if(func_148(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2)){
if(!MISC::IS_BIT_SET(uParam1->f_246, 2)){
if(PAD::IS_CONTROL_PRESSED(2, 217) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 217)){
if(!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
MISC::SET_BIT(&(uParam1->f_246), 2);
NETWORK::NETWORK_SHOW_PROFILE_UI(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
}}}elseif(!PAD::IS_CONTROL_PRESSED(2, 217)){
MISC::CLEAR_BIT(&(uParam1->f_246), 2);
}}}}

int func_130(var uParam0, int iParam1){
var uVar0;
int iVar1;
var uVar2;
var uVar3;
if(iParam1==188 || iParam1==187){
func_131(&uVar0, &iVar1, &uVar2, &uVar3, 0);
if(((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_154(&(uParam0->f_246.f_3), 250, 0)){
return 1;
}}elseif((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, iParam1)) || func_154(&(uParam0->f_246.f_3), 250, 0)){
return 1;
}
return 0;
}


void func_131(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4){
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


void func_132(var uParam0, int iParam1, int iParam2){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT_STATE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_133(){
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_134(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, float fParam15, bool bParam16){
switch (Param0.f_29[bParam14]){
case 4:
if(bParam16){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_FLOAT(fParam15, 2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 12:
if(bParam16){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_INTEGER(floor(fParam15));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 17:
case 19:
case 18:
case 20:
if(bParam16){
if(Param0.f_29[bParam14]==18 || Param0.f_29[bParam14]==20){
fParam15=(fParam15 * -1f);
}
if(!MISC::SHOULD_USE_METRIC_MEASUREMENTS()){
if(Param0.f_29[bParam14]==19 || Param0.f_29[bParam14]==20){
fParam15=func_136(fParam15);
}else{
fParam15=func_135(fParam15);
}}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_FLOAT(fParam15, 2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 0:
break;
}}


float func_135(float fParam0){
return (fParam0 / 0.3048f);
}


float func_136(float fParam0){
return (fParam0 / 1609.344f);
}


void func_137(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17){
struct<4> Var0;
if(iParam15==2147483647 || iParam15==-2147483647){
bParam16=false;
}
StringCopy(&Var0, "", 16);
switch (Param0.f_29[bParam14]){
case 5:
if(bParam16){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam15);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 7:
if(bParam16){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_INTEGER(-iParam15);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 1:
case 9:
case 11:
if(bParam16){
if(Param0.f_29[bParam14]==11 && iParam15 < 0){
iParam15=(iParam15 * -1);
}
if(iParam15 >=3600000 || iParam15 <=-3600000){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(Param0.f_29[bParam14]==9){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 6);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 6:
if(bParam16){
if(iParam15==2147483647){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(iParam15 >=3600000 || iParam15 <=-3600000){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 2:
case 10:
if(bParam16){
iParam15=(iParam15 * -1);
if(iParam15 >=3600000 || iParam15 <=-3600000){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(Param0.f_29[bParam14]==10){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 6);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 3:
if(bParam17){
if(STREAMING::IS_MODEL_IN_CDIMAGE(iParam15)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SCLB_VEH_CUST");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam15));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}}elseif(STREAMING::IS_MODEL_IN_CDIMAGE(iParam15)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam15));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 8:
if(func_145(iParam15) !=0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(func_142(func_145(iParam15), 0));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 13:
case 15:
case 14:
case 16:
if(bParam16){
if(Param0.f_29[bParam14]==14 || Param0.f_29[bParam14]==16){
iParam15=(iParam15 * -1);
}
if(!MISC::SHOULD_USE_METRIC_MEASUREMENTS()){
if(Param0.f_29[bParam14]==15 || Param0.f_29[bParam14]==16){
iParam15=floor(func_136(to_float(iParam15)));
}else{
iParam15=floor(func_135(to_float(iParam15)));
}}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam15);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 21:
if(iParam15 > 20){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
Var0={
func_141(iParam15) 
};
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Var0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 22:
if(bParam16){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_INTEGER(func_138(iParam15));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 0:
break;
}}

int func_138(int iParam0){
int iVar0;
float fVar1;
int iVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
iVar0=func_140(199);
if(iParam0 < 100){
return 1;
}elseif(iParam0 > iVar0){
fVar1=(to_float(iParam0) - to_float(iVar0));
iVar2=floor((fVar1 / to_float(Global_262145.f_31089)));
return (199 + iVar2);
}
fVar3=(to_float(Global_262145.f_31088) / 2f);
fVar4=(-(fVar3 * 3f) + fVar3);
fVar5=fVar3;
fVar6=((-(fVar3 * 3f) + fVar4) + 100f);
fVar7=((-3f * fVar4) - 100f);
fVar7=(IntToFloat(iParam0) - fVar7);
return floor(func_139(-fVar5, -fVar6, fVar7, 1));
}


float func_139(float fParam0, float fParam1, float fParam2, bool bParam3){
if(bParam3){
return ((-fParam1 - sqrt(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
}
return ((-fParam1 + sqrt(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
}

int func_140(int iParam0){
float fVar0;
float fVar1;
fVar0=to_float(iParam0);
fVar1=(to_float(Global_262145.f_31088) / 2f);
return round((((fVar0 * 100f) - 100f) + ((fVar0 - 3f) * ((fVar1 * (fVar0 - 3f)) + fVar1))));
}


struct<4> func_141(int iParam0){
struct<4> Var0;
StringCopy(&Var0, "ARENA_C_SL", 16);
if(iParam0 > 20){
StringCopy(&Var0, "**INVALID**", 16);
return Var0;
}
if(iParam0 < 0){
iParam0=0;
}
StringIntConCat(&Var0, iParam0, 16);
return Var0;
}


char* func_142(int iParam0, bool bParam1){
struct<32> Var0;
switch (iParam0){
case 0:
if(bParam1){
return "WTU_INVALID";
}else{
return "WT_INVALID";
}
break;
case joaat("weapon_unarmed"):
if(bParam1){
return "WTU_UNARMED";
}else{
return "WT_UNARMED";
}
break;
case joaat("weapon_pistol"):
if(bParam1){
return "WTU_PIST";
}else{
return "WT_PIST";
}
break;
case joaat("weapon_combatpistol"):
if(bParam1){
return "WTU_PIST_CBT";
}else{
return "WT_PIST_CBT";
}
break;
case joaat("weapon_appistol"):
if(bParam1){
return "WTU_PIST_AP";
}else{
return "WT_PIST_AP";
}
break;
case joaat("weapon_smg"):
if(bParam1){
return "WTU_SMG";
}else{
return "WT_SMG";
}
break;
case joaat("weapon_microsmg"):
if(bParam1){
return "WTU_SMG_MCR";
}else{
return "WT_SMG_MCR";
}
break;
case joaat("weapon_assaultrifle"):
if(bParam1){
return "WTU_RIFLE_ASL";
}else{
return "WT_RIFLE_ASL";
}
break;
case joaat("weapon_carbinerifle"):
if(bParam1){
return "WTU_RIFLE_CBN";
}else{
return "WT_RIFLE_CBN";
}
break;
case joaat("weapon_advancedrifle"):
if(bParam1){
return "WTU_RIFLE_ADV";
}else{
return "WT_RIFLE_ADV";
}
break;
case joaat("weapon_mg"):
if(bParam1){
return "WTU_MG";
}else{
return "WT_MG";
}
break;
case joaat("weapon_combatmg"):
if(bParam1){
return "WTU_MG_CBT";
}else{
return "WT_MG_CBT";
}
break;
case joaat("weapon_pumpshotgun"):
if(bParam1){
return "WTU_SG_PMP";
}else{
return "WT_SG_PMP";
}
break;
case joaat("weapon_sawnoffshotgun"):
if(bParam1){
return "WTU_SG_SOF";
}else{
return "WT_SG_SOF";
}
break;
case joaat("weapon_assaultshotgun"):
if(bParam1){
return "WTU_SG_ASL";
}else{
return "WT_SG_ASL";
}
break;
case joaat("weapon_heavysniper"):
if(bParam1){
return "WTU_SNIP_HVY";
}else{
return "WT_SNIP_HVY";
}
break;
case joaat("weapon_remotesniper"):
if(bParam1){
return "WTU_SNIP_RMT";
}else{
return "WT_SNIP_RMT";
}
break;
case joaat("weapon_sniperrifle"):
if(bParam1){
return "WTU_SNIP_RIF";
}else{
return "WT_SNIP_RIF";
}
break;
case joaat("weapon_grenadelauncher"):
if(bParam1){
return "WTU_GL";
}else{
return "WT_GL";
}
break;
case joaat("weapon_rpg"):
if(bParam1){
return "WTU_RPG";
}else{
return "WT_RPG";
}
break;
case joaat("weapon_minigun"):
if(bParam1){
return "WTU_MINIGUN";
}else{
return "WT_MINIGUN";
}
break;
case joaat("weapon_grenade"):
if(bParam1){
return "WTU_GNADE";
}else{
return "WT_GNADE";
}
break;
case joaat("weapon_smokegrenade"):
if(bParam1){
return "WTU_GNADE_SMK";
}else{
return "WT_GNADE_SMK";
}
break;
case joaat("weapon_stickybomb"):
if(bParam1){
return "WTU_GNADE_STK";
}else{
return "WT_GNADE_STK";
}
break;
case joaat("weapon_molotov"):
if(bParam1){
return "WTU_MOLOTOV";
}else{
return "WT_MOLOTOV";
}
break;
case joaat("weapon_stungun"):
if(bParam1){
return "WTU_STUN";
}else{
return "WT_STUN";
}
break;
case joaat("weapon_petrolcan"):
if(bParam1){
return "WTU_PETROL";
}else{
return "WT_PETROL";
}
break;
case joaat("weapon_electric_fence"):
if(bParam1){
return "WTU_ELCFEN";
}else{
return "WT_ELCFEN";
}
break;
case joaat("vehicle_weapon_tank"):
if(bParam1){
return "WTU_V_TANK";
}else{
return "WT_V_TANK";
}
break;
case joaat("vehicle_weapon_space_rocket"):
if(bParam1){
return "WTU_V_SPACERKT";
}else{
return "WT_V_SPACERKT";
}
break;
case joaat("vehicle_weapon_player_laser"):
if(bParam1){
return "WTU_V_PLRLSR";
}else{
return "WT_V_PLRLSR";
}
break;
case joaat("object"):
if(bParam1){
return "WTU_OBJECT";
}else{
return "WT_OBJECT";
}
break;
case joaat("gadget_parachute"):
if(bParam1){
return "WTU_PARA";
}else{
return "WT_PARA";
}
break;
case joaat("AMMO_RPG"):
if(bParam1){
return "WTU_A_RPG";
}else{
return "WT_A_RPG";
}
break;
case joaat("AMMO_TANK"):
if(bParam1){
return "WTU_A_TANK";
}else{
return "WT_A_TANK";
}
break;
case joaat("AMMO_SPACE_ROCKET"):
if(bParam1){
return "WTU_A_SPACERKT";
}else{
return "WT_A_SPACERKT";
}
break;
case joaat("AMMO_PLAYER_LASER"):
if(bParam1){
return "WTU_A_PLRLSR";
}else{
return "WT_A_PLRLSR";
}
break;
case joaat("AMMO_ENEMY_LASER"):
if(bParam1){
return "WTU_A_ENMYLSR";
}else{
return "WT_A_ENMYLSR";
}
break;
case joaat("weapon_knife"):
if(bParam1){
return "WTU_KNIFE";
}else{
return "WT_KNIFE";
}
break;
case joaat("weapon_nightstick"):
if(bParam1){
return "WTU_NGTSTK";
}else{
return "WT_NGTSTK";
}
break;
case joaat("weapon_hammer"):
if(bParam1){
return "WTU_HAMMER";
}else{
return "WT_HAMMER";
}
break;
case joaat("weapon_bat"):
if(bParam1){
return "WTU_BAT";
}else{
return "WT_BAT";
}
break;
case joaat("weapon_crowbar"):
if(bParam1){
return "WTU_CROWBAR";
}else{
return "WT_CROWBAR";
}
break;
case joaat("weapon_golfclub"):
if(bParam1){
return "WTU_GOLFCLUB";
}else{
return "WT_GOLFCLUB";
}
break;
case joaat("weapon_rammed_by_car"):
if(bParam1){
return "WTU_PIST";
}else{
return "WT_PIST";
}
break;
case joaat("weapon_run_over_by_car"):
if(bParam1){
return "WTU_PIST";
}else{
return "WT_PIST";
}
break;
case joaat("weapon_assaultsmg"):
if(bParam1){
return "WTU_SMG_ASL";
}else{
return "WT_SMG_ASL";
}
break;
case joaat("weapon_bullpupshotgun"):
if(bParam1){
return "WTU_SG_BLP";
}else{
return "WT_SG_BLP";
}
break;
case joaat("weapon_pistol50"):
if(bParam1){
return "WTU_PIST_50";
}else{
return "WT_PIST_50";
}
break;
case joaat("weapon_bottle"):
if(bParam1){
return "WTU_BOTTLE";
}else{
return "WT_BOTTLE";
}
break;
case joaat("weapon_gusenberg"):
if(bParam1){
return "WTU_GUSENBERG";
}else{
return "WT_GUSENBERG";
}
break;
case joaat("weapon_snspistol"):
if(bParam1){
return "WTU_SNSPISTOL";
}else{
return "WT_SNSPISTOL";
}
break;
case joaat("weapon_vintagepistol"):
if(bParam1){
return "WTU_VPISTOL";
}else{
return "WT_VPISTOL";
}
break;
case joaat("weapon_dagger"):
if(bParam1){
return "WTU_DAGGER";
}else{
return "WT_DAGGER";
}
break;
case joaat("weapon_flaregun"):
if(bParam1){
return "WTU_FLAREGUN";
}else{
return "WT_FLAREGUN";
}
break;
case joaat("weapon_heavypistol"):
if(bParam1){
return "WTU_HEAVYPSTL";
}else{
return "WT_HEAVYPSTL";
}
break;
case joaat("weapon_specialcarbine"):
if(bParam1){
return "WTU_RIFLE_SCBN";
}else{
return "WT_RIFLE_SCBN";
}
break;
case joaat("weapon_musket"):
if(bParam1){
return "WTU_MUSKET";
}else{
return "WT_MUSKET";
}
break;
case joaat("weapon_firework"):
if(bParam1){
return "WTU_FWRKLNCHR";
}else{
return "WT_FWRKLNCHR";
}
break;
case joaat("weapon_marksmanrifle"):
if(bParam1){
return "WTU_MKRIFLE";
}else{
return "WT_MKRIFLE";
}
break;
case joaat("weapon_heavyshotgun"):
if(bParam1){
return "WTU_HVYSHOT";
}else{
return "WT_HVYSHOT";
}
break;
case joaat("weapon_proxmine"):
if(bParam1){
return "WTU_PRXMINE";
}else{
return "WT_PRXMINE";
}
break;
case joaat("weapon_hominglauncher"):
if(bParam1){
return "WTU_HOMLNCH";
}else{
return "WT_HOMLNCH";
}
break;
case joaat("weapon_hatchet"):
if(bParam1){
return "WTU_HATCHET";
}else{
return "WT_HATCHET";
}
break;
case joaat("weapon_railgun"):
if(bParam1){
return "WTU_RAILGUN";
}else{
return "WT_RAILGUN";
}
break;
case joaat("weapon_combatpdw"):
if(bParam1){
return "WTU_COMBATPDW";
}else{
return "WT_COMBATPDW";
}
break;
case joaat("weapon_knuckle"):
if(bParam1){
return "WTU_KNUCKLE";
}else{
return "WT_KNUCKLE";
}
break;
case joaat("weapon_marksmanpistol"):
if(bParam1){
return "WTU_MKPISTOL";
}else{
return "WT_MKPISTOL";
}
break;
case joaat("weapon_bullpuprifle"):
if(bParam1){
return "WTU_BULLRIFLE";
}else{
return "WT_BULLRIFLE";
}
break;
case joaat("weapon_machete"):
if(bParam1){
return "WTU_MACHETE";
}else{
return "WT_MACHETE";
}
break;
case joaat("weapon_machinepistol"):
if(bParam1){
return "WTU_MCHPIST";
}else{
return "WT_MCHPIST";
}
break;
case joaat("weapon_flashlight"):
if(bParam1){
return "WTU_FLASHLIGHT";
}else{
return "WT_FLASHLIGHT";
}
break;
case joaat("weapon_dbshotgun"):
if(bParam1){
return "WTU_DBSHGN";
}else{
return "WT_DBSHGN";
}
break;
case joaat("weapon_compactrifle"):
if(bParam1){
return "WTU_CMPRIFLE";
}else{
return "WT_CMPRIFLE";
}
break;
case joaat("weapon_switchblade"):
if(bParam1){
return "WTU_SWBLADE";
}else{
return "WT_SWBLADE";
}
break;
case joaat("weapon_revolver"):
if(bParam1){
return "WTU_REVOLVER";
}else{
return "WT_REVOLVER";
}
break;
case joaat("weapon_autoshotgun"):
if(bParam1){
return "WTU_AUTOSHGN";
}else{
return "WT_AUTOSHGN";
}
break;
case joaat("weapon_battleaxe"):
if(bParam1){
return "WTU_BATTLEAXE";
}else{
return "WT_BATTLEAXE";
}
break;
case joaat("weapon_compactlauncher"):
if(bParam1){
return "WTU_CMPGL";
}else{
return "WT_CMPGL";
}
break;
case joaat("weapon_minismg"):
if(bParam1){
return "WTU_MINISMG";
}else{
return "WT_MINISMG";
}
break;
case joaat("weapon_pipebomb"):
if(bParam1){
return "WTU_PIPEBOMB";
}else{
return "WT_PIPEBOMB";
}
break;
case joaat("weapon_poolcue"):
if(bParam1){
return "WTU_POOLCUE";
}else{
return "WT_POOLCUE";
}
break;
case joaat("weapon_wrench"):
if(bParam1){
return "WTU_WRENCH";
}else{
return "WT_WRENCH";
}
break;
case joaat("weapon_cougar"):
return "WT_RAGE";
break;
case -159960575:
return "WT_VEH_WEP";
break;
case joaat("weapon_pistol_mk2"):
if(bParam1){
return "WTU_PIST2";
}else{
return "WT_PIST2";
}
break;
case joaat("weapon_smg_mk2"):
if(bParam1){
return "WTU_SMG2";
}else{
return "WT_SMG2";
}
break;
case joaat("weapon_heavysniper_mk2"):
if(bParam1){
return "WTU_SNIP_HVY2";
}else{
return "WT_SNIP_HVY2";
}
break;
case joaat("weapon_combatmg_mk2"):
if(bParam1){
return "WTU_MG_CBT2";
}else{
return "WT_MG_CBT2";
}
break;
case joaat("weapon_assaultrifle_mk2"):
if(bParam1){
return "WTU_RIFLE_ASL2";
}else{
return "WT_RIFLE_ASL2";
}
break;
case joaat("weapon_carbinerifle_mk2"):
if(bParam1){
return "WTU_RIFLE_CBN2";
}else{
return "WT_RIFLE_CBN2";
}
break;
case joaat("weapon_pumpshotgun_mk2"):
if(bParam1){
return "WTU_SG_PMP2";
}else{
return "WT_SG_PMP2";
}
break;
case joaat("weapon_specialcarbine_mk2"):
if(bParam1){
return "WTU_SPCARBINE2";
}else{
return "WT_SPCARBINE2";
}
break;
case joaat("weapon_snspistol_mk2"):
if(bParam1){
return "WTU_SNSPISTOL2";
}else{
return "WT_SNSPISTOL2";
}
break;
case joaat("weapon_marksmanrifle_mk2"):
if(bParam1){
return "WTU_MKRIFLE2";
}else{
return "WT_MKRIFLE2";
}
break;
case joaat("weapon_revolver_mk2"):
if(bParam1){
return "WTU_REVOLVER2";
}else{
return "WT_REVOLVER2";
}
break;
case joaat("weapon_bullpuprifle_mk2"):
if(bParam1){
return "WTU_BULLRIFLE2";
}else{
return "WT_BULLRIFLE2";
}
break;
case joaat("weapon_doubleaction"):
if(bParam1){
return "WTU_REV_DA";
}else{
return "WT_REV_DA";
}
break;
case joaat("weapon_stone_hatchet"):
if(bParam1){
return "WTU_SHATCHET";
}else{
return "WT_SHATCHET";
}
break;
case joaat("weapon_raypistol"):
if(bParam1){
return "WTU_RAYPISTOL";
}else{
return "WT_RAYPISTOL";
}
break;
case joaat("weapon_raycarbine"):
if(bParam1){
return "WTU_RAYCARBINE";
}else{
return "WT_RAYCARBINE";
}
break;
case joaat("weapon_rayminigun"):
if(bParam1){
return "WTU_RAYMINIGUN";
}else{
return "WT_RAYMINIGUN";
}
break;
case joaat("weapon_navyrevolver"):
if(bParam1){
return "WTU_REV_NV";
}else{
return "WT_REV_NV";
}
break;
case joaat("weapon_ceramicpistol"):
if(bParam1){
return "WTU_CERPST";
}else{
return "WT_CERPST";
}
break;
case joaat("weapon_gadgetpistol"):
if(bParam1){
return "WTU_GDGTPST";
}else{
return "WT_GDGTPST";
}
break;
case joaat("weapon_militaryrifle"):
if(bParam1){
return "WTU_MLTRYRFL";
}else{
return "WT_MLTRYRFL";
}
break;
case joaat("weapon_combatshotgun"):
if(bParam1){
return "WTU_CMBSHGN";
}else{
return "WT_CMBSHGN";
}
break;
case joaat("vehicle_weapon_turret_dinghy5_50cal"):
if(bParam1){
return "WTU_VEH_DINGHY_50C";
}else{
return "WTU_VEH_DINGHY_50C";
}
break;
case joaat("weapon_fertilizercan"):
if(bParam1){
return "WTU_FERTCAN";
}else{
return "WT_FERTCAN";
}
break;
case joaat("weapon_heavyrifle"):
if(bParam1){
return "WTU_HEAVYRIFLE";
}else{
return "WT_HEAVYRIFLE";
}
break;
case joaat("weapon_emplauncher"):
if(bParam1){
return "WTU_EMPL";
}else{
return "WT_EMPL";
}
break;
case joaat("weapon_stungun_mp"):
if(bParam1){
return "WTU_STNGUNMP";
}else{
return "WT_STNGUNMP";
}
break;
case joaat("weapon_tacticalrifle"):
if(bParam1){
return "WTU_TACRIFLE";
}else{
return "WT_TACRIFLE";
}
break;
case joaat("weapon_precisionrifle"):
if(bParam1){
return "WTU_PRCSRIFLE";
}else{
return "WT_PRCSRIFLE";
}
break;
case joaat("weapon_bzgas"):
if(bParam1){
return "WTU_BZGAS";
}else{
return "WTU_BZGAS";
}
break;
case joaat("weapon_stinger"):
if(bParam1){
return "WTU_STINGER";
}else{
return "WTU_STINGER";
}
break;
case joaat("weapon_grenadelauncher_smoke"):
if(bParam1){
return "WTU_GR_LAUN_SM";
}else{
return "WTU_GR_LAUN_SM";
}
break;
case joaat("weapon_pistolxm3"):
if(bParam1){
return "WTU_PISTOLXM3";
}else{
return "WT_PISTOLXM3";
}
break;
case joaat("weapon_candycane"):
if(bParam1){
return "WTU_CANDYCANE";
}else{
return "WT_CANDYCANE";
}
break;
case joaat("weapon_railgunxm3"):
if(bParam1){
return "WTU_RAILGUNXM3";
}else{
return "WT_RAILGUNXM3";
}
break;
default:
if(func_144(iParam0, &Var0) !=-1){
if(bParam1){
return func_143(&(Var0.f_31));
}else{
return func_143(&(Var0.f_7));
}}
break;
}
return "WT_INVALID";
}


var func__143(var uParam0){
return uParam0;
}

int func_144(int iParam0, var uParam1){
int iVar0;
int iVar1;
iVar1=FILES::GET_NUM_DLC_WEAPONS();
iVar0=0;
while (iVar0 < iVar1){
if(FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1)){
if(uParam1->f_1==iParam0){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_145(int iParam0){
if(iParam0==600){
return joaat("weapon_railgun");
}elseif(iParam0==500){
return joaat("weapon_minigun");
}elseif(iParam0==400){
return joaat("weapon_mg");
}elseif(iParam0==401){
return joaat("weapon_combatmg");
}elseif(iParam0==402){
return -572349828;
}elseif(iParam0==300){
return joaat("weapon_assaultrifle");
}elseif(iParam0==301){
return joaat("weapon_carbinerifle");
}elseif(iParam0==302){
return joaat("weapon_advancedrifle");
}elseif(iParam0==303){
return joaat("weapon_heavyrifle");
}elseif(iParam0==200){
return joaat("weapon_pumpshotgun");
}elseif(iParam0==201){
return joaat("weapon_sawnoffshotgun");
}elseif(iParam0==202){
return joaat("weapon_assaultshotgun");
}elseif(iParam0==203){
return joaat("weapon_bullpupshotgun");
}elseif(iParam0==100){
return joaat("weapon_microsmg");
}elseif(iParam0==101){
return joaat("weapon_smg");
}elseif(iParam0==102){
return joaat("weapon_assaultsmg");
}elseif(iParam0==0){
return joaat("weapon_pistol");
}elseif(iParam0==1){
return joaat("weapon_combatpistol");
}elseif(iParam0==2){
return joaat("weapon_appistol");
}elseif(iParam0==3){
return joaat("weapon_pistol50");
}
return 0;
}


void func_146(var uParam0, int iParam1, int iParam2, int iParam3, char[4] cParam4, char* sParam5){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
if(iParam3 > 0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(cParam4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam5);
}

int func_147(var uParam0, var uParam1){
if(!func_148(*uParam0)){
return 0;
}
if(!func_148(*uParam1)){
return 0;
}
if(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1)){
return 1;
}
return 0;
}


bool func_148(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12){
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}


void func_149(var uParam0, var uParam1){
int iVar0;
int iVar1;
struct<75> Var2;
var uVar3;
Var2.f_60=6;
Var2.f_67=6;
if(!MISC::IS_BIT_SET(uParam0->f_42, 5) && !MISC::IS_BIT_SET(uParam0->f_42, 6)){
iVar0=0;
while (iVar0 < 12){
if((uParam1[iVar0 /*100*/])->f_75 !=0){
iVar1=iVar0 + 1;
while (iVar1 <=11){
if((uParam1[iVar1 /*100*/])->f_75 !=0){
if((uParam1[iVar1 /*100*/])->f_75 < (uParam1[iVar0 /*100*/])->f_75){
uVar3=(uParam1[iVar1 /*100*/])->f_75;
(uParam1[iVar1 /*100*/])->f_75=(uParam1[iVar0 /*100*/])->f_75;
(uParam1[iVar0 /*100*/])->f_75=uVar3;
Var2={
*(uParam1[iVar1 /*100*/]) 
};
*(uParam1[iVar1 /*100*/])={
*(uParam1[iVar0 /*100*/]) 
};
*(uParam1[iVar0 /*100*/])={
Var2 
};
}
elseif((uParam1[iVar1 /*100*/])->f_75==(uParam1[iVar0 /*100*/])->f_75){
if((uParam1[iVar1 /*100*/])->f_59 !=-1){
if((uParam1[iVar1 /*100*/])->f_59 < (uParam1[iVar0 /*100*/])->f_59 || (uParam1[iVar0 /*100*/])->f_59==-1){
uVar3=(uParam1[iVar1 /*100*/])->f_75;
(uParam1[iVar1 /*100*/])->f_75=(uParam1[iVar0 /*100*/])->f_75;
(uParam1[iVar0 /*100*/])->f_75=uVar3;
Var2={
*(uParam1[iVar1 /*100*/]) 
};
*(uParam1[iVar1 /*100*/])={
*(uParam1[iVar0 /*100*/]) 
};
*(uParam1[iVar0 /*100*/])={
Var2 
};
}}
}}
iVar1++;
}}
iVar0++;
}}}


void func_150(var uParam0, var uParam1){
var uVar0;
var uVar1;
var uVar2;
int iVar3;
int iVar4;
if(!MISC::IS_BIT_SET(uParam0->f_42, 5) && !MISC::IS_BIT_SET(uParam0->f_42, 6)){
iVar4=0;
while (iVar4 < 12){
if(func_153(uParam1, iVar3, &uVar0, 0)){
(uParam1[iVar3 /*100*/])->f_75=1;
iVar3++;
if(iVar3 >=12){
return;
}}
if(func_153(uParam1, iVar3, &uVar1, 1)){
(uParam1[iVar3 /*100*/])->f_75=2;
iVar3++;
if(iVar3 >=12){
return;
}}
if(func_153(uParam1, iVar3, &uVar2, 2)){
(uParam1[iVar3 /*100*/])->f_75=3;
iVar3++;
if(iVar3 >=12){
return;
}}
iVar4++;
}}else{
func_151(uParam1);
}}


void func_151(var uParam0){
int iVar0;
bool bVar1;
int iVar2;
struct<13> Var3;
int iVar4;
iVar0=0;
while (iVar0 < 3){
Global_2097536.f_2704[iVar0]=0;
Global_2097536.f_2775[iVar0]=-1;
iVar0++;
}
Var3={
func_25(PLAYER::PLAYER_ID()) 
};
if(STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_2097536.f_2826)){
iVar4=STATS::LEADERBOARDS_GET_CACHE_NUMBER_OF_ROWS(Global_2097536.f_2826);
iVar0=0;
iVar0=0;
while (iVar0 < iVar4){
if(iVar0 < 12){
func_152(&Global_2101737);
iVar2=0;
STATS::LEADERBOARDS_GET_CACHE_DATA_ROW(Global_2097536.f_2826, iVar0, &Global_2101737);
*(uParam0[iVar0 /*100*/])={
Global_2101737.f_1 
};
(uParam0[iVar0 /*100*/])->f_16={
Global_2101737.f_17 
};
(uParam0[iVar0 /*100*/])->f_32={
Global_2101737.f_33 
};
(uParam0[iVar0 /*100*/])->f_45={
Global_2101737.f_46 
};
(uParam0[iVar0 /*100*/])->f_58=Global_2101737.f_59;
(uParam0[iVar0 /*100*/])->f_59=Global_2101737.f_60;
Global_2097536.f_2708=Global_2101737.f_62;
Global_2097536.f_2769=Global_2101737.f_63;
iVar2=0;
if(MISC::IS_BIT_SET(Global_2101737.f_61, 1)){
iVar2=1;
}elseif(MISC::IS_BIT_SET(Global_2101737.f_61, 2)){
iVar2=2;
}elseif(MISC::IS_BIT_SET(Global_2101737.f_61, 3)){
iVar2=3;
}
Global_2097536.f_2704[(iVar2 - 1)]++;
(uParam0[iVar0 /*100*/])->f_75=iVar2;
if((uParam0[iVar0 /*100*/])->f_59 !=-1){
if(MISC::IS_BIT_SET(Global_2101737.f_61, 0)){
(uParam0[iVar0 /*100*/])->f_74=1;
}else{
(uParam0[iVar0 /*100*/])->f_74=0;
}
if(func_147(&((uParam0[iVar0 /*100*/])->f_32), &Var3)){
Global_2097536.f_2775[(iVar2 - 1)]=0;
}}
bVar1=false;
while (bVar1 < Global_2101737.f_62){
if(MISC::IS_BIT_SET(Global_2101737.f_63, bVar1)){
(uParam0[iVar0 /*100*/])->f_67[bVar1]=Global_2101737.f_97[bVar1];
}else{
(uParam0[iVar0 /*100*/])->f_60[bVar1]=Global_2101737.f_64[bVar1];
}
bVar1++;
}}
iVar0++;
}}}


void func_152(var uParam0){
struct<13> Var0;
int iVar1;
*uParam0=0;
StringCopy(&(uParam0->f_1), "", 64);
StringCopy(&(uParam0->f_17), "", 64);
uParam0->f_33={
Var0 
};
uParam0->f_46={
Var0 
};
uParam0->f_59=0;
uParam0->f_60=0;
uParam0->f_61=0;
uParam0->f_62=0;
uParam0->f_63=0;
iVar1=0;
while (iVar1 < 32){
uParam0->f_64[iVar1]=0f;
uParam0->f_97[iVar1]=0;
iVar1++;
}}

int func_153(var uParam0, int iParam1, var uParam2, int iParam3){
int iVar0;
if(*uParam2==0){
if(Global_2097536[iParam3 /*901*/][0 /*75*/].f_59 > 0){
*(uParam0[iParam1 /*100*/])={
Global_2097536[iParam3 /*901*/][0 /*75*/] 
};
Global_2101680[iParam3 /*16*/]={
Global_2097536[iParam3 /*901*/][0 /*75*/] 
};
Global_2101680.f_49[iParam3]=Global_2097536[iParam3 /*901*/][0 /*75*/].f_67[Global_2097536.f_2779];
Global_2101680.f_53[iParam3]=Global_2097536[iParam3 /*901*/][0 /*75*/].f_60[Global_2097536.f_2779];
*uParam2++;
return 1;
}}elseif(*uParam2==1){
if(Global_2097536.f_2775[iParam3] > 0){
*(uParam0[iParam1 /*100*/])={
Global_2097536[iParam3 /*901*/][Global_2097536.f_2775[iParam3] /*75*/] 
};
*uParam2++;
return 1;
}else{
if(Global_2097536.f_2775[iParam3] < 0){
StringCopy(uParam0[iParam1 /*100*/], PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
(uParam0[iParam1 /*100*/])->f_32={
func_25(PLAYER::PLAYER_ID()) 
};
(uParam0[iParam1 /*100*/])->f_59=-1;
(uParam0[iParam1 /*100*/])->f_67[0]=-1;
(uParam0[iParam1 /*100*/])->f_67[1]=-1;
(uParam0[iParam1 /*100*/])->f_67[2]=-1;
(uParam0[iParam1 /*100*/])->f_67[3]=-1;
(uParam0[iParam1 /*100*/])->f_60[0]=-1f;
(uParam0[iParam1 /*100*/])->f_60[1]=-1f;
(uParam0[iParam1 /*100*/])->f_60[2]=-1f;
(uParam0[iParam1 /*100*/])->f_60[3]=-1f;
*uParam2++;
return 1;
}
*uParam2++;
}}elseif((*uParam2 % 2)==0){
iVar0=(*uParam2 / 2);
if((Global_2097536.f_2775[iParam3] - iVar0) >=1){
if(Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] - iVar0) /*75*/].f_59 > 0){
*(uParam0[iParam1 /*100*/])={
Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] - iVar0) /*75*/] 
};
*uParam2++;
return 1;
}}}else{
iVar0=floor(to_float((*uParam2 / 2)));
if((Global_2097536.f_2775[iParam3] + iVar0) < 12 && (Global_2097536.f_2775[iParam3] + iVar0) > 0){
if(Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] + iVar0) /*75*/].f_59 > 1){
*(uParam0[iParam1 /*100*/])={
Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] + iVar0) /*75*/] 
};
*uParam2++;
return 1;
}}}
*uParam2++;
return 0;
}

int func_154(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_155(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_155(var uParam0, bool bParam1, bool bParam2){
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


void func_156(var uParam0, int iParam1, int iParam2, char* sParam3){
MISC::SET_BIT(&iParam2, 7);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_157(var uParam0){
if(!Global_2097532){
if(!func_193(&(Global_2097536.f_2827))){
func_155(&(Global_2097536.f_2827), 1, 0);
return 0;
}elseif(!func_154(&(Global_2097536.f_2827), 1000, 1)){
return 0;
}}
if(((!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())) || Global_2097536.f_2832 !=0){
MISC::CLEAR_BIT(&(uParam0->f_42), 4);
return 1;
}
if(!MISC::IS_BIT_SET(uParam0->f_42, 4)){
func_192(uParam0);
MISC::SET_BIT(&(uParam0->f_42), 4);
return 0;
}elseif(MISC::IS_BIT_SET(uParam0->f_42, 5)){
(*uParam0)[0]=2;
(*uParam0)[1]=1;
(*uParam0)[2]=3;
return 1;
}
if(!func_190(uParam0)){
return 0;
}
if(!func_188(uParam0)){
return 0;
}
if(!func_175(uParam0)){
return 0;
}
if(!MISC::IS_BIT_SET(uParam0->f_42, 6)){
func_101(&Global_2101867);
func_150(uParam0, &Global_2101867);
func_149(uParam0, &Global_2101867);
MISC::SET_BIT(&(uParam0->f_42), 6);
}
if(!MISC::IS_BIT_SET(uParam0->f_42, 7)){
if(!func_193(&(Global_2097536.f_2830))){
func_155(&(Global_2097536.f_2830), 1, 0);
}elseif(func_154(&(Global_2097536.f_2830), 30000, 1)){
MISC::SET_BIT(&(uParam0->f_42), 7);
}
if(func_172(&Global_2101867)){
}else{
return 0;
}
if(func_169(&Global_2101867)){
}else{
return 0;
}
if(func_162(&Global_2101867)){
func_158(&Global_2101867);
MISC::SET_BIT(&(uParam0->f_42), 7);
func_158(&Global_2101867);
}else{
return 0;
}}
return 1;
}


void func_158(var uParam0){
int iVar0;
bool bVar1;
int iVar2;
iVar2=func_161(Global_2097536.f_2826);
if(Global_2100721.f_81[iVar2] !=0){
func_160(-1, iVar2);
}
iVar0=0;
while (iVar0 < 12){
func_152(&Global_2101737);
if((uParam0[iVar0 /*100*/])->f_75 !=0){
Global_2101737=Global_2097536.f_2826;
Global_2101737.f_1={
*(uParam0[iVar0 /*100*/]) 
};
if(MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*100*/])->f_16), "")){
Global_2101737.f_17={
*(uParam0[iVar0 /*100*/]) 
};
}else{
Global_2101737.f_17={
(uParam0[iVar0 /*100*/])->f_16 
};
}
Global_2101737.f_33={
(uParam0[iVar0 /*100*/])->f_32 
};
if(func_148((uParam0[iVar0 /*100*/])->f_45)){
Global_2101737.f_46={
(uParam0[iVar0 /*100*/])->f_45 
};
}else{
Global_2101737.f_46={
(uParam0[iVar0 /*100*/])->f_32 
};
}
Global_2101737.f_59=(uParam0[iVar0 /*100*/])->f_58;
Global_2101737.f_60=(uParam0[iVar0 /*100*/])->f_59;
Global_2101737.f_62=Global_2097536.f_2708;
Global_2101737.f_63=Global_2097536.f_2770;
if((uParam0[iVar0 /*100*/])->f_74){
MISC::SET_BIT(&(Global_2101737.f_61), 0);
}else{
MISC::CLEAR_BIT(&(Global_2101737.f_61), false);
}
MISC::SET_BIT(&(Global_2101737.f_61), (uParam0[iVar0 /*100*/])->f_75);
bVar1=false;
while (bVar1 < Global_2101737.f_62){
if(MISC::IS_BIT_SET(Global_2101737.f_63, bVar1)){
Global_2101737.f_97[bVar1]=(uParam0[iVar0 /*100*/])->f_67[bVar1];
}else{
Global_2101737.f_64[bVar1]=(uParam0[iVar0 /*100*/])->f_60[bVar1];
}
bVar1++;
}
Global_2100721.f_81[iVar2]=Global_2097536.f_2826;
STATS::LEADERBOARDS_CACHE_DATA_ROW(&Global_2101737);
}
iVar0++;
}
Global_2100721.f_87[iVar2 /*3*/]={
func_159(PLAYER::PLAYER_ID()) 
};
}


Vector3 func__159(int iParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}


void func_160(int iParam0, int iParam1){
int iVar0;
if(iParam1 !=-1){
if(STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_2100721.f_81[iParam1])){
STATS::LEADERBOARDS_CLEAR_CACHE_DATA_ID(Global_2100721.f_81[iParam1]);
}
Global_2100721.f_81[iParam1]=0;
}elseif(iParam0 !=-1){
if(STATS::LEADERBOARDS_GET_CACHE_EXISTS(iParam0)){
STATS::LEADERBOARDS_CLEAR_CACHE_DATA_ID(iParam0);
}
iVar0=0;
while (iVar0 < 5){
if(Global_2100721.f_81[iVar0]==iParam0){
Global_2100721.f_81[iVar0]=0;
}
iVar0++;
}}}

int func_161(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=0;
while (iVar0 < 5){
if(Global_2100721.f_81[iVar0]==iParam0){
return iVar0;
}
iVar0++;
}
iVar0=0;
iVar0=0;
while (iVar0 < 5){
if(Global_2100721.f_81[iVar0]==0){
return iVar0;
}elseif(STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_2100721.f_81[iVar0])){
iVar3=STATS::LEADERBOARDS_GET_CACHE_TIME(Global_2100721.f_81[iVar0]);
if(iVar3 > iVar2){
iVar1=iVar0;
iVar2=iVar3;
}}else{
return iVar0;
}
iVar0++;
}
return iVar1;
}

int func_162(var uParam0){
int iVar0;
int iVar1;
switch ((uParam0[0 /*100*/])->f_76){
case 0:
func_168(uParam0);
if((func_167() || func_166()) && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
(uParam0[0 /*100*/])->f_76=3;
return 0;
}
iVar0=0;
while (iVar0 < 12){
if(func_148((uParam0[iVar0 /*100*/])->f_32)){
if(!func_165(&((uParam0[iVar0 /*100*/])->f_32), &Global_2103169)){
Global_2103169[Global_2103169.f_206 /*13*/]={
(uParam0[iVar0 /*100*/])->f_32 
};
Global_2103169.f_206++;
}}
iVar0++;
}
if(Global_2103169.f_206 > 0){
(uParam0[0 /*100*/])->f_76=1;
}else{
(uParam0[0 /*100*/])->f_76=3;
}
break;
case 1:
if(func_163(&((uParam0[1 /*100*/])->f_76), &(Global_2103169.f_206), &Global_2103169, &(Global_2103169.f_157))){
(uParam0[0 /*100*/])->f_76=2;
}
break;
case 2:
if(Global_2103169.f_206 > 12){
Global_2103169.f_206=12;
}
iVar0=0;
while (iVar0 < 12){
iVar1=0;
while (iVar1 < Global_2103169.f_206){
if(func_148((uParam0[iVar0 /*100*/])->f_32) && func_148(Global_2103169[iVar1 /*13*/])){
if(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&((uParam0[iVar0 /*100*/])->f_32), &(Global_2103169[iVar1 /*13*/]))){
(uParam0[iVar0 /*100*/])->f_80={
Global_2103169.f_157[iVar1 /*4*/] 
};
}}
iVar1++;
}
iVar0++;
}
(uParam0[0 /*100*/])->f_76=3;
break;
case 3:
return 1;
break;
}
return 0;
}

int func_163(var uParam0, var uParam1, var uParam2, var uParam3){
var uVar0;
int iVar1;
switch (*uParam0){
case 0:
if(NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING()){
}else{
NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_START(uParam2, *uParam1);
*uParam0=1;
}
break;
case 1:
if(!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING()){
if(NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS()){
*uParam0=2;
}else{
*uParam0=3;
}}
break;
case 2:
iVar1=0;
while (iVar1 < *uParam1){
if(NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_NEW(uParam2[iVar1 /*13*/], &uVar0)){
func_164(&uVar0, uParam3[iVar1 /*4*/]);
}
iVar1++;
}
if(NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING()){
NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
}else{
NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
}
*uParam0=3;
break;
case 3:
return 1;
break;
}
return 0;
}


void func_164(var uParam0, var uParam1){
NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, uParam1);
}

int func_165(var uParam0, var uParam1){
int iVar0;
iVar0=0;
while (iVar0 < 12){
if(func_148(*(uParam1[iVar0 /*13*/]))){
if(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1[iVar0 /*13*/])){
return 1;
}}
iVar0++;
}
return 0;
}


bool func_166(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}


bool func_167(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


void func_168(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < 12){
func_106(&(Global_2103169[iVar0 /*13*/]));
StringCopy(&(Global_2103169.f_157[iVar0 /*4*/]), "", 16);
iVar0++;
}
if((uParam0[0 /*100*/])->f_76 > 0){
(uParam0[0 /*100*/])->f_76=0;
(uParam0[1 /*100*/])->f_76=0;
if(!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING()){
NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
}}
if(NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING()){
NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
}
Global_2103169.f_206=0;
}

int func_169(var uParam0){
int iVar0;
if(MISC::IS_PC_VERSION()){
return 1;
}elseif(func_166() || func_167()){
if(!func_171(uParam0)){
return 0;
}}else{
iVar0=0;
while (iVar0 < 12){
if(!func_170(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/])){
return 0;
}
iVar0++;
}}
return 1;
}

int func_170(var uParam0, var uParam1, char* sParam2){
if(*uParam0==2){
return 1;
}
switch (*uParam0){
case 0:
if(func_148(*uParam1)){
if(!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1)){
if(func_166() || func_167()){
if(NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(uParam1)){
*uParam0=1;
}}elseif(MISC::IS_XBOX360_VERSION()){
if(NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(uParam1)){
*uParam0=1;
}}else{
StringCopy(sParam2, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam1), 64);
if(MISC::IS_PS3_VERSION()){
}
elseif(func_167()){
}
elseif(MISC::IS_PC_VERSION()){
}
*uParam0=2;
}}else{
StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1)), 64);
*uParam0=2;
}}else{
*uParam0=2;
}
break;
case 1:
if(!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1)){
if(!NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING()){
if(NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED()){
StringCopy(sParam2, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam1), 64);
}
*uParam0=2;
return 1;
}}else{
StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1)), 64);
*uParam0=2;
}
break;
case 2:
return 1;
break;
}
return 0;
}

int func_171(var uParam0){
int iVar0;
int iVar1;
int iVar2;
if(!func_166() && !func_167()){
return 1;
}
if((uParam0[0 /*100*/])->f_78==2){
return 1;
}
switch ((uParam0[0 /*100*/])->f_78){
case 0:
Global_2097536.f_3183=0;
iVar1=0;
while (iVar1 < 12){
StringCopy(&(Global_2097536.f_2833[iVar1 /*16*/]), "", 64);
func_106(&(Global_2097536.f_3026[iVar1 /*13*/]));
if(func_148((uParam0[iVar1 /*100*/])->f_32)){
Global_2097536.f_3026[Global_2097536.f_3183 /*13*/]={
(uParam0[iVar1 /*100*/])->f_32 
};
Global_2097536.f_3183++;
}
iVar1++;
}
if(Global_2097536.f_3183 > 0){
(uParam0[0 /*100*/])->f_79=NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&(Global_2097536.f_3026), Global_2097536.f_3183);
(uParam0[0 /*100*/])->f_78=1;
}else{
(uParam0[0 /*100*/])->f_78=2;
}
break;
case 1:
iVar0=NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES((uParam0[0 /*100*/])->f_79, &(Global_2097536.f_2833), Global_2097536.f_3183);
if(iVar0==0){
iVar1=0;
while (iVar1 < 12){
if(func_148((uParam0[iVar1 /*100*/])->f_32)){
*(uParam0[iVar1 /*100*/])={
Global_2097536.f_2833[iVar2 /*16*/] 
};
iVar2++;
}
iVar1++;
}
(uParam0[0 /*100*/])->f_78=2;
}elseif(iVar0==-1){
(uParam0[0 /*100*/])->f_78=2;
}else{
return 0;
}
break;
case 2:
(uParam0[0 /*100*/])->f_79=-1;
return 1;
break;
}
return 0;
}

int func_172(var uParam0){
int iVar0;
if(func_166() || func_167()){
iVar0=0;
while (iVar0 < 12){
if(!func_174(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_2097536.f_2833), &((uParam0[iVar0 /*100*/])->f_79))){
return 0;
}
iVar0++;
}}else{
iVar0=0;
while (iVar0 < 12){
if(!func_173(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84))){
return 0;
}
iVar0++;
}}
return 1;
}

int func_173(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17){
struct<13> Var0;
if(*uParam0==2){
return 1;
}elseif(MISC::IS_STRING_NULL_OR_EMPTY(&uParam1)){
*uParam0=2;
return 1;
}
NETWORK::NETWORK_HANDLE_FROM_USER_ID(&uParam1, &Var0, 13);
switch (*uParam0){
case 0:
if(func_148(Var0)){
if(!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0)){
if((MISC::IS_XBOX360_VERSION() || func_166()) || func_167()){
if(NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(&Var0)){
*uParam0=1;
}}else{
StringCopy(sParam17, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 64);
if(MISC::IS_PS3_VERSION()){
}
elseif(func_167()){
}
elseif(MISC::IS_PC_VERSION()){
}
*uParam0=2;
}}else{
StringCopy(sParam17, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0)), 64);
*uParam0=2;
}}else{
*uParam0=2;
}
break;
case 1:
if(!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0)){
if(!NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING()){
if(NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED()){
StringCopy(sParam17, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 64);
}
*uParam0=2;
return 1;
}}else{
StringCopy(sParam17, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0)), 64);
*uParam0=2;
}
break;
case 2:
return 1;
break;
}
return 0;
}

int func_174(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4){
int iVar0;
struct<13> Var1[1];
if(!func_166() && !func_167()){
return 1;
}
if(*uParam0==2){
return 1;
}elseif(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
*uParam0=2;
return 1;
}
NETWORK::NETWORK_HANDLE_FROM_USER_ID(sParam1, &(Var1[0 /*13*/]), 13);
switch (*uParam0){
case 0:
StringCopy(uParam3[0 /*16*/], "", 64);
if(func_148(Var1[0 /*13*/])){
if(!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Var1[0 /*13*/]))){
*uParam4=NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&Var1, 1);
*uParam0=1;
}else{
StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var1[0 /*13*/]))), 64);
*uParam0=2;
}}else{
*uParam0=2;
}
break;
case 1:
iVar0=NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(*uParam4, uParam3, 1);
if(iVar0==0){
*sParam2={
*(uParam3[0 /*16*/]) 
};
*uParam0=2;
}elseif(iVar0==-1){
*uParam0=2;
}else{
return 0;
}
break;
case 2:
*uParam4=-1;
return 1;
break;
}
return 0;
}

int func_175(var uParam0){
struct<97> Var0;
struct<6> Var1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bool bVar8;
int iVar9;
bool bVar10;
int iVar11;
struct<13> Var12;
Var0.f_19.f_1=4;
iVar5=-1;
iVar9=2;
Var12={
func_25(PLAYER::PLAYER_ID()) 
};
switch ((*uParam0)[iVar9]){
case 0:
Global_2097536.f_2775[iVar9]=-1;
Global_2097536.f_2704[iVar9]=0;
Global_2097157.f_374=-1;
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var12)){
if(NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&(uParam0->f_7), 35, &Var12)){
uParam0->f_44.f_2=uParam0->f_7;
uParam0->f_44.f_1=3;
(*uParam0)[iVar9]=1;
return 0;
}}else{
(*uParam0)[iVar9]=3;
return 1;
}}else{
(*uParam0)[iVar9]=3;
return 1;
}
break;
case 1:
uParam0->f_44.f_1=3;
Var1.f_0=uParam0->f_44;
Var1.f_1=uParam0->f_44.f_1;
if(func_186(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var12, func_187(), 0, 0, 0)){
func_185(&Var1, &(uParam0->f_44));
if(uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var1)){
if(Var1.f_3 > 0){
iVar7=0;
iVar2=0;
if(func_187()){
iVar7=0;
while (iVar7 < Var1.f_3){
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar7, &Var0);
if(Global_2097157.f_374 < 0){
if(func_147(&Var0, &Var12) || func_147(&Var0, &(Global_2097157.f_361))){
Global_2097157.f_374=Var0.f_96;
}}
if(iVar5 < 0){
if(MISC::IS_BIT_SET(Global_2097157.f_142.f_2, 0)){
if(Global_2097157.f_211.f_36[0] >=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar7, 0)){
iVar5=iVar7;
}
}
elseif(Global_2097157.f_211.f_3[0] >=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar7, 0)){
iVar5=iVar7;
}}
func_184(&Var0);
iVar7++;
}
if(iVar5 < 0){
iVar5=Var1.f_3;
}
}
iVar7=0;
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &Var0);
if(Var0.f_96 <=1){
if(Global_2097536.f_2704[iVar9] < 11){
if(func_187() && iVar5==0){
func_183(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Var0.f_96);
Global_2097536.f_2775[iVar9]=0;
Global_2097536.f_2704[iVar9]++;
}
if(func_187() && (func_147(&Var0, &Var12) || func_147(&Var0, &(Global_2097157.f_361)))){
}else{
if(func_147(&Var0, &Var12)){
iVar5=0;
Global_2097536.f_2775[iVar9]=0;
}
MemCopy(&(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]),{
Var0.f_13
}
, 16);
Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_32={
Var0 
};
Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_59=Var0.f_96;
if(func_182(uParam0->f_44)){
iVar4=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
if(iVar4==1){
Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58=1;
}
else{
Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58=0;
}
}
if(func_198(uParam0->f_44)){
MemCopy(&(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_16),{
Var0.f_19.f_1[1 /*16*/].f_8
}
, 16);
}
Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_74=1;
iVar3=0;
iVar3=0;
while (iVar3 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[iVar3])){
Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_67[iVar3]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2710[iVar3]);
}
else{
Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_60[iVar3]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(0, Global_2097536.f_2710[iVar3]);
}
iVar3++;
}
Global_2097536.f_2704[iVar9]++;
}
bVar8=true;
}
}
if(!bVar8){
Global_2097536.f_2704[iVar9]++;
}
if(!func_187()){
iVar5=Var1.f_5;
}
if(iVar5 > 6){
iVar6=(iVar5 - 6);
}
elseif(bVar8){
iVar6=1;
}
else{
iVar6=0;
}
iVar7=iVar6;
func_184(&Var0);
iVar7=iVar6;
while (iVar7 <=(Var1.f_3 - 1)){
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar7, &Var0);
if(Global_2097536.f_2704[iVar9] < 11 && Var0.f_96 > 1){
if(func_187() && iVar5==iVar7){
if(!func_147(&(Global_2097536[iVar9 /*901*/][0 /*75*/].f_32), &Var12)){
func_183(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Var0.f_96);
Global_2097536.f_2775[iVar9]=Global_2097536.f_2704[iVar9];
Global_2097536.f_2704[iVar9]++;
}}
if(func_187() && (func_147(&Var0, &Var12) || func_147(&Var0, &(Global_2097157.f_361)))){
}elseif(Global_2097536.f_2704[iVar9] < 11){
if(func_148(Var0) && !func_147(&Var0, &(Global_2097536[iVar9 /*901*/][0 /*75*/].f_32))){
if(func_147(&Var0, &Var12)){
if(Global_2097536.f_2775[iVar9] < 0){
Global_2097536.f_2775[iVar9]=Global_2097536.f_2704[iVar9];
}
}
MemCopy(&(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]),{
Var0.f_13
}
, 16);
Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_32={
Var0 
};
Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_59=Var0.f_96;
Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_74=1;
if(func_182(uParam0->f_44)){
iVar4=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar7, Global_2097536.f_2709);
if(iVar4==1){
Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58=1;
}else{
Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58=0;
}
}
if(func_198(uParam0->f_44)){
MemCopy(&(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_16),{
Var0.f_19.f_1[1 /*16*/].f_8
}
, 16);
}
iVar2=0;
iVar2=0;
while (iVar2 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[iVar2])){
Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_67[iVar2]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar7, Global_2097536.f_2710[iVar2]);
}else{
Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_60[iVar2]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar7, Global_2097536.f_2710[iVar2]);
}
iVar2++;
}
Global_2097536.f_2704[iVar9]++;
}}}
func_184(&Var0);
iVar7++;
}
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
if(bVar8){
if(Global_2097536.f_2775[iVar9]==-1 && func_187()){
if(Global_2097536.f_2704[iVar9] >=1){
func_183(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Global_2097536[iVar9 /*901*/][(Global_2097536.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
}else{
func_183(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), 1);
}
Global_2097536.f_2775[iVar9]=Global_2097536.f_2704[iVar9];
Global_2097536.f_2704[iVar9]++;
}
(*uParam0)[iVar9]=3;
}
else{
(*uParam0)[iVar9]=2;
}}else{
if(!bVar8){
Global_2097536.f_2704[iVar9]++;
}
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
Global_2097536.f_2775[iVar9]=-1;
(*uParam0)[iVar9]=2;
}}else{
func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
Global_2097536.f_2775[iVar9]=-1;
(*uParam0)[iVar9]=2;
MISC::SET_BIT(&(Global_2097536.f_2832), iVar9);
}}
break;
case 2:
if(Global_2097536.f_2775[iVar9]==-1){
iVar11=11;
}else{
iVar11=1;
}
uParam0->f_44.f_1=3;
Var1.f_0=uParam0->f_44;
Var1.f_1=uParam0->f_44.f_1;
if(func_177(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar11)){
func_185(&Var1, &(uParam0->f_44));
if(uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var1)){
if(Var1.f_3 > 0){
iVar2=0;
while (iVar2 < Var1.f_3){
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar2, &Var0);
bVar10=false;
if(Global_2097536[iVar9 /*901*/][0 /*75*/].f_59 > 1 || Global_2097536[iVar9 /*901*/][0 /*75*/].f_59 <=0){
bVar10=true;
}
if(Global_2097536.f_2704[iVar9] < 11 || bVar10){
if(func_187() && (func_147(&Var0, &Var12) || func_147(&Var0, &(Global_2097157.f_361)))){
}elseif(iVar2==0 || bVar10){
MemCopy(&(Global_2097536[iVar9 /*901*/][0 /*75*/]),{
Var0.f_13
}
, 16);
Global_2097536[iVar9 /*901*/][0 /*75*/].f_32={
Var0 
};
Global_2097536[iVar9 /*901*/][0 /*75*/].f_59=Var0.f_96;
if(func_182(uParam0->f_44)){
iVar4=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
if(iVar4==1){
Global_2097536[iVar9 /*901*/][0 /*75*/].f_58=1;
}
else{
Global_2097536[iVar9 /*901*/][0 /*75*/].f_58=0;
}
}
if(func_198(uParam0->f_44)){
MemCopy(&(Global_2097536[iVar9 /*901*/][0 /*75*/].f_16),{
Var0.f_19.f_1[1 /*16*/].f_8
}
, 16);
}
Global_2097536[iVar9 /*901*/][0 /*75*/].f_74=1;
iVar3=0;
iVar3=0;
while (iVar3 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[iVar3])){
Global_2097536[iVar9 /*901*/][0 /*75*/].f_67[iVar3]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2710[iVar3]);
}
else{
Global_2097536[iVar9 /*901*/][0 /*75*/].f_60[iVar3]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(0, Global_2097536.f_2710[iVar3]);
}
iVar3++;
}
if(Global_2097536.f_2704[iVar9]==0){
if(bVar10){
}
else{
Global_2097536.f_2704[iVar9]++;
}
}}elseif(Global_2097536.f_2704[iVar9] < 11){
MemCopy(&(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]),{
Var0.f_13
}
, 16);
Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_32={
Var0 
};
if(func_182(uParam0->f_44)){
iVar4=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar2, Global_2097536.f_2709);
if(iVar4==1){
Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58=1;
}
else{
Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58=0;
}
}
if(func_198(uParam0->f_44)){
MemCopy(&(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_16),{
Var0.f_19.f_1[1 /*16*/].f_8
}
, 16);
}
Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_59=Var0.f_96;
Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_74=1;
iVar3=0;
iVar3=0;
while (iVar3 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[iVar3])){
Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_67[iVar3]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar2, Global_2097536.f_2710[iVar3]);
}
else{
Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_60[iVar3]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar2, Global_2097536.f_2710[iVar3]);
}
iVar3++;
}
if(iVar2 !=0){
Global_2097536.f_2704[iVar9]++;
}}}
func_184(&Var0);
iVar2++;
}}
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
(*uParam0)[iVar9]=3;
}else{
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
MISC::SET_BIT(&(Global_2097536.f_2832), iVar9);
Global_2097536.f_2704[iVar9]=0;
(*uParam0)[iVar9]=3;
}
if(Global_2097536.f_2775[iVar9]==-1 && func_187()){
if(Global_2097536.f_2704[iVar9] >=1){
func_183(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Global_2097536[iVar9 /*901*/][(Global_2097536.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
}else{
func_183(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), 1);
}
Global_2097536.f_2775[iVar9]=Global_2097536.f_2704[iVar9];
Global_2097536.f_2704[iVar9]++;
}}
break;
case 3:
func_176(iVar9, Global_2097157.f_374);
(*uParam0)[iVar9]=4;
break;
case 4:
return 1;
break;
}
return 0;
}


void func_176(int iParam0, int iParam1){
int iVar0;
if((func_187() && Global_2097536.f_2704[iParam0] > Global_2097536.f_2775[iParam0]) && Global_2097536.f_2775[iParam0] >=0){
if(iParam1 !=Global_2097536[iParam0 /*901*/][Global_2097536.f_2775[iParam0] /*75*/].f_59){
iVar0=0;
while (iVar0 < Global_2097536.f_2704[iParam0]){
if(iVar0 !=Global_2097536.f_2775[iParam0]){
if(Global_2097536[iParam0 /*901*/][iVar0 /*75*/].f_59 >=Global_2097536[iParam0 /*901*/][Global_2097536.f_2775[iParam0] /*75*/].f_59){
if(Global_2097536[iParam0 /*901*/][iVar0 /*75*/].f_59 < iParam1 || iParam1==-1){
Global_2097536[iParam0 /*901*/][iVar0 /*75*/].f_59++;
}}}
iVar0++;
}}}else{
if(!func_187()){
}
if(Global_2097536.f_2704[iParam0] <=Global_2097536.f_2775[iParam0]){
}
if(Global_2097536.f_2775[iParam0] < 0){
}}}

int func_177(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4){
switch (*uParam0){
case 0:
if(!func_180() && !func_179()){
func_178(*uParam2);
if(STATS::LEADERBOARDS2_READ_BY_RANK(uParam2, iParam3, iParam4)){
*uParam0++;
}else{
*uParam1=0;
*uParam0=3;
}}
break;
case 1:
if(!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1)){
*uParam0++;
}
break;
case 2:
if(STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0)){
*uParam1=1;
*uParam0++;
}else{
*uParam1=0;
*uParam0++;
}
break;
case 3:
return 1;
break;
}
return 0;
}


void func_178(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67){
Global_2097152=1;
func_209(&(Global_2097152.f_1), 1, 0);
Global_2097152.f_3=Param0.f_0;
Global_2097152.f_4=Param0.f_1;
}

int func_179(){
if(HUD::IS_PAUSE_MENU_ACTIVE() && !func_201()){
return 1;
}
return 0;
}

int func_180(){
if(STATS::LEADERBOARDS_READ_ANY_PENDING() || Global_2097152){
func_181();
return 1;
}
return 0;
}


void func_181(){
if(func_154(&(Global_2097152.f_1), 120000, 1)){
STATS::LEADERBOARDS_READ_CLEAR(Global_2097152.f_3, Global_2097152.f_4, -1);
Global_2097152=0;
func_98(&(Global_2097152.f_1));
}}

int func_182(int iParam0){
if((((((iParam0==815 || iParam0==824) || iParam0==825) || iParam0==826) || iParam0==827) || iParam0==828) || iParam0==849){
return 1;
}
return 0;
}


void func_183(var uParam0, char* sParam1, int iParam2){
int iVar0;
int iVar1;
if(func_198(uParam0->f_44)){
MemCopy(sParam1,{
Global_2097157.f_355
}
, 16);
sParam1->f_32={
Global_2097157.f_361 
};
MemCopy(&(sParam1->f_16),{
Global_2097157.f_349
}
, 16);
}else{
StringCopy(sParam1, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
sParam1->f_32={
func_25(PLAYER::PLAYER_ID()) 
};
}
sParam1->f_59=iParam2;
if(func_182(uParam0->f_44)){
iVar0=Global_2097157.f_211.f_36[Global_2097536.f_2709];
if(iVar0==1){
sParam1->f_58=1;
}else{
sParam1->f_58=0;
}}
sParam1->f_74=1;
iVar1=0;
while (iVar1 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097157.f_142.f_2, Global_2097536.f_2710[iVar1])){
sParam1->f_67[iVar1]=Global_2097157.f_211.f_36[Global_2097536.f_2710[iVar1]];
}else{
sParam1->f_60[iVar1]=Global_2097157.f_211.f_3[Global_2097536.f_2710[iVar1]];
}
iVar1++;
}}


void func_184(var uParam0){
int iVar0;
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
StringCopy(&(uParam0->f_13), "", 24);
uParam0->f_19=0;
iVar0=0;
while (iVar0 < 4){
StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/]), "", 32);
StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/].f_8), "", 32);
iVar0++;
}
uParam0->f_85=0;
StringCopy(&(uParam0->f_86), "", 32);
StringCopy(&(uParam0->f_94), "", 8);
uParam0->f_96=0;
uParam0->f_97=0;
}


void func_185(var uParam0, var uParam1){
*uParam0=*uParam1;
uParam0->f_1=uParam1->f_1;
uParam0->f_2=0;
}

int func_186(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8){
var uVar0;
var uVar1;
uVar0=Global_2097157.f_211.f_36[0];
uVar1=Global_2097157.f_211.f_3[0];
if(bParam6){
uVar0=iParam7;
uVar1=iParam8;
}
switch (*uParam0){
case 0:
if(!func_180() && !func_179()){
func_178(*uParam2);
if(bParam5){
if(MISC::IS_BIT_SET(Global_2097157.f_142.f_2, 0)){
if(STATS::LEADERBOARDS2_READ_BY_SCORE_INT(uParam2, uVar0, iParam3)){
*uParam0++;
}
else{
*uParam1=0;
*uParam0=3;
}}elseif(STATS::LEADERBOARDS2_READ_BY_SCORE_FLOAT(uParam2, uVar1, iParam3)){
*uParam0++;
}else{
*uParam1=0;
*uParam0=3;
}}elseif(STATS::LEADERBOARDS2_READ_BY_RADIUS(uParam2, iParam3, uParam4)){
*uParam0++;
}else{
*uParam1=0;
*uParam0=3;
}}
break;
case 1:
if(!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1)){
*uParam0++;
}
break;
case 2:
if(STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0)){
*uParam1=1;
*uParam0++;
}else{
*uParam1=0;
*uParam0++;
}
break;
case 3:
return 1;
break;
}
return 0;
}

int func_187(){
if(Global_2097532 && Global_2097533){
return 1;
}
return 0;
}

int func_188(var uParam0){
struct<20> Var0;
struct<6> Var1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bool bVar8;
int iVar9;
struct<13> Var10;
Var0.f_19.f_1=4;
iVar4=-1;
iVar9=1;
Var10={
func_25(PLAYER::PLAYER_ID()) 
};
switch ((*uParam0)[1]){
case 0:
iVar3=NETWORK::NETWORK_GET_FRIEND_COUNT();
Global_2097536.f_2775[1]=-1;
Global_2097157.f_374=-1;
Global_2097536.f_2704[iVar9]=0;
if(iVar3 > 0){
if(func_187()){
bVar8=false;
}else{
bVar8=true;
}
if(func_189(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar8, 0, 100)){
func_185(&Var1, &(uParam0->f_44));
if(uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var1)){
if(func_187()){
iVar6=0;
iVar6=0;
while (iVar6 < Var1.f_3){
if(iVar4 < 0){
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar6, &Var0);
if(func_198(uParam0->f_44)){
if(Global_2097157.f_374 < 0){
if(func_147(&Var0, &(Global_2097157.f_361))){
Global_2097157.f_374=Var0.f_96;
}
}
}
if(MISC::IS_BIT_SET(Global_2097157.f_142.f_2, 0)){
if(Global_2097157.f_211.f_36[0] >=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar6, 0)){
iVar4=iVar6;
}
}
elseif(Global_2097157.f_211.f_3[0] >=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar6, 0)){
iVar4=iVar6;
}
func_184(&Var0);
}
iVar6++;
}
if(iVar4 < 0){
iVar4=Var1.f_3;
}
}
iVar6=0;
if(func_187() && iVar4==0){
if(Global_2097536.f_2704[iVar9] < 11){
func_183(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), 1);
Global_2097536.f_2775[iVar9]=0;
Global_2097536.f_2704[iVar9]++;
}
}
if(Var1.f_3 > 0){
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &Var0);
if(func_187() && (func_147(&Var0, &Var10) || func_147(&Var0, &(Global_2097157.f_361)))){
}elseif(func_148(Var0) && Global_2097536.f_2704[iVar9] < 11){
if(func_147(&Var0, &Var10)){
iVar4=0;
Global_2097536.f_2775[1]=0;
}
MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]),{
Var0.f_13
}
, 16);
Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_32={
Var0 
};
Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_59=1;
if(func_182(uParam0->f_44)){
iVar7=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
if(iVar7==1){
Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58=1;
}
else{
Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58=0;
}}
if(func_198(uParam0->f_44)){
MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_16),{
Var0.f_19.f_1[1 /*16*/].f_8
}
, 16);
}
Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_74=1;
iVar2=0;
while (iVar2 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[iVar2])){
Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_67[iVar2]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2710[iVar2]);
}
else{
Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_60[iVar2]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(0, Global_2097536.f_2710[iVar2]);
}
iVar2++;
}
Global_2097536.f_2704[1]++;
}else{
func_184(&Var0);
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
Global_2097536.f_2704[1]=0;
(*uParam0)[1]=1;
if(Global_2097536.f_2775[iVar9]==-1 && func_187()){
if(Global_2097536.f_2704[iVar9] >=1){
func_183(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Global_2097536[iVar9 /*901*/][(Global_2097536.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
}
else{
func_183(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), 1);
}
Global_2097536.f_2775[iVar9]=Global_2097536.f_2704[iVar9];
Global_2097536.f_2704[iVar9]++;
}
return 0;
}
func_184(&Var0);
}
else{
Global_2097536.f_2704[1]=0;
func_184(&Var0);
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
if(Global_2097536.f_2775[iVar9]==-1 && func_187()){
if(Global_2097536.f_2704[iVar9] >=1){
func_183(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Global_2097536[iVar9 /*901*/][(Global_2097536.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
}else{
func_183(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), 1);
}
Global_2097536.f_2775[iVar9]=Global_2097536.f_2704[iVar9];
Global_2097536.f_2704[iVar9]++;
}
(*uParam0)[1]=1;
return 0;
}
if(!func_187()){
iVar4=Var1.f_5;
}
if(iVar4 > 6){
iVar5=(iVar4 - 6);
}
else{
iVar5=1;
}
iVar6=iVar5;
iVar6=iVar5;
while (iVar6 <=(Var1.f_3 - 1)){
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar6, &Var0);
if(Global_2097536.f_2704[iVar9] < 11 && Var0.f_96 > 1){
if(func_187() && iVar4==iVar6){
if(!func_147(&(Global_2097536[iVar9 /*901*/][0 /*75*/].f_32), &Var10)){
func_183(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Var0.f_96);
Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_59=iVar6 + 1;
Global_2097536.f_2775[iVar9]=Global_2097536.f_2704[iVar9];
Global_2097536.f_2704[iVar9]++;
}}
if(func_187() && (func_147(&Var0, &Var10) || func_147(&Var0, &(Global_2097157.f_361)))){
}elseif(Global_2097536.f_2704[1] < 12){
if(func_148(Var0) && !func_147(&Var0, &(Global_2097536[iVar9 /*901*/][0 /*75*/].f_32))){
if(func_147(&Var0, &Var10)){
if(Global_2097536.f_2775[1] < 0){
Global_2097536.f_2775[1]=Global_2097536.f_2704[1];
}
}
MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/]),{
Var0.f_13
}
, 16);
Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_32={
Var0 
};
Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_59=iVar6 + 1;
Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_74=1;
if(func_182(uParam0->f_44)){
iVar7=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar6, Global_2097536.f_2709);
if(iVar7==1){
Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_58=1;
}else{
Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_58=0;
}
}
if(func_198(uParam0->f_44)){
MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_16),{
Var0.f_19.f_1[1 /*16*/].f_8
}
, 16);
}
iVar2=0;
while (iVar2 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[iVar2])){
Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_67[iVar2]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar6, Global_2097536.f_2710[iVar2]);
}else{
Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_60[iVar2]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar6, Global_2097536.f_2710[iVar2]);
}
iVar2++;
}
Global_2097536.f_2704[1]++;
}}}
func_184(&Var0);
iVar6++;
}
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
(*uParam0)[1]=1;
if(Global_2097536.f_2775[iVar9]==-1 && func_187()){
if(Global_2097536.f_2704[iVar9] >=1){
func_183(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Global_2097536[iVar9 /*901*/][(Global_2097536.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
}else{
func_183(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), 1);
}
Global_2097536.f_2775[iVar9]=Global_2097536.f_2704[iVar9];
Global_2097536.f_2704[iVar9]++;
}
return 0;
}else{
func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
Global_2097536.f_2704[1]=0;
(*uParam0)[1]=1;
MISC::SET_BIT(&(Global_2097536.f_2832), 1);
return 0;
}}}else{
func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
Global_2097536.f_2704[1]=0;
(*uParam0)[1]=1;
return 0;
}
break;
case 1:
func_176(iVar9, Global_2097157.f_374);
(*uParam0)[1]=2;
break;
case 2:
return 1;
break;
}
return 0;
}

int func_189(var uParam0, var uParam1, var* uParam2, var* uParam3, int iParam4, bool bParam5, int iParam6, int iParam7){
switch (*uParam0){
case 0:
if(!func_180() && !func_179()){
func_178(*uParam2);
if(leaderboards2_read_friends_by_row(uParam2, uParam3, iParam4, bParam5, iParam6, iParam7)){
*uParam0++;
}else{
*uParam1=0;
*uParam0=3;
}}
break;
case 1:
if(!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1)){
*uParam0++;
}
break;
case 2:
if(STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0)){
*uParam1=1;
*uParam0++;
}else{
*uParam1=0;
*uParam0++;
}
break;
case 3:
return 1;
break;
}
return 0;
}

int func_190(var uParam0){
struct<13> Var0;
struct<97> Var1;
struct<6> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bool bVar9;
int iVar10;
bool bVar11;
int iVar12;
Var1.f_19.f_1=4;
iVar6=-1;
iVar10=0;
Var0={
func_25(PLAYER::PLAYER_ID()) 
};
switch ((*uParam0)[iVar10]){
case 0:
Global_2097536.f_2775[iVar10]=-1;
Global_2097536.f_2704[iVar10]=0;
Global_2097157.f_374=-1;
Global_2097533=0;
if(func_191(uParam0->f_44)){
if(!Global_2097533){
Global_2097533=1;
}}elseif(Global_2097533){
Global_2097533=0;
}
if(!Global_2097533){
}
if(func_186(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_187(), 0, 0, 0)){
func_185(&Var2, &(uParam0->f_44));
if(uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var2)){
if(Var2.f_3 > 0){
iVar8=0;
iVar3=0;
if(func_187()){
iVar8=0;
while (iVar8 < Var2.f_3){
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar8, &Var1);
if(Global_2097157.f_374 < 0){
if(func_147(&Var1, &Var0) || func_147(&Var1, &(Global_2097157.f_361))){
Global_2097157.f_374=Var1.f_96;
}}
if(iVar6 < 0){
if(MISC::IS_BIT_SET(Global_2097157.f_142.f_2, 0)){
if(Global_2097157.f_211.f_36[0] >=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar8, 0)){
iVar6=iVar8;
}
}
elseif(Global_2097157.f_211.f_3[0] >=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar8, 0)){
iVar6=iVar8;
}}
func_184(&Var1);
iVar8++;
}
if(iVar6 < 0){
iVar6=Var2.f_3;
}
}
iVar8=0;
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &Var1);
if(Var1.f_96 <=1){
if(Global_2097536.f_2704[iVar10] < 11){
if(func_187() && iVar6==0){
func_183(uParam0, &(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), Var1.f_96);
Global_2097536.f_2775[iVar10]=0;
Global_2097536.f_2704[iVar10]++;
}
if(func_187() && (func_147(&Var1, &Var0) || func_147(&Var1, &(Global_2097157.f_361)))){
}else{
if(func_147(&Var1, &Var0)){
iVar6=0;
Global_2097536.f_2775[iVar10]=0;
}
MemCopy(&(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]),{
Var1.f_13
}
, 16);
Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_32={
Var1 
};
Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_59=Var1.f_96;
if(func_182(uParam0->f_44)){
iVar5=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
if(iVar5==1){
Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_58=1;
}
else{
Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_58=0;
}
}
if(func_198(uParam0->f_44)){
MemCopy(&(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_16),{
Var1.f_19.f_1[1 /*16*/].f_8
}
, 16);
}
Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_74=1;
iVar3=0;
while (iVar3 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[iVar3])){
Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_67[iVar3]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2710[iVar3]);
}
else{
Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_60[iVar3]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(0, Global_2097536.f_2710[iVar3]);
}
iVar3++;
}
Global_2097536.f_2704[iVar10]++;
}
bVar9=true;
}
}
if(!bVar9){
Global_2097536.f_2704[iVar10]++;
}
if(!func_187()){
iVar6=Var2.f_5;
}
if(iVar6 > 6){
iVar7=(iVar6 - 6);
}
elseif(bVar9){
iVar7=1;
}
else{
iVar7=0;
}
iVar8=iVar7;
func_184(&Var1);
iVar8=iVar7;
while (iVar8 <=(Var2.f_3 - 1)){
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar8, &Var1);
if(Global_2097536.f_2704[iVar10] < 11 && Var1.f_96 > 1){
if(func_187() && iVar6==iVar8){
if(!func_147(&(Global_2097536[iVar10 /*901*/][0 /*75*/].f_32), &Var1)){
func_183(uParam0, &(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), Var1.f_96);
Global_2097536.f_2775[iVar10]=Global_2097536.f_2704[iVar10];
Global_2097536.f_2704[iVar10]++;
}}
if(func_187() && (func_147(&Var1, &Var0) || func_147(&Var1, &(Global_2097157.f_361)))){
}elseif(Global_2097536.f_2704[iVar10] < 11){
if(func_148(Var1) && !func_147(&(Global_2097536[iVar10 /*901*/][0 /*75*/].f_32), &Var1)){
if(func_147(&Var1, &Var0)){
if(Global_2097536.f_2775[iVar10] < 0){
Global_2097536.f_2775[iVar10]=Global_2097536.f_2704[iVar10];
}
}
MemCopy(&(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]),{
Var1.f_13
}
, 16);
Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_32={
Var1 
};
Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_59=Var1.f_96;
Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_74=1;
if(func_182(uParam0->f_44)){
iVar5=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar8, Global_2097536.f_2709);
if(iVar5==1){
Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_58=1;
}else{
Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_58=0;
}
}
if(func_198(uParam0->f_44)){
MemCopy(&(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_16),{
Var1.f_19.f_1[1 /*16*/].f_8
}
, 16);
}
iVar3=0;
iVar3=0;
while (iVar3 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[iVar3])){
Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_67[iVar3]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar8, Global_2097536.f_2710[iVar3]);
}else{
Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_60[iVar3]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar8, Global_2097536.f_2710[iVar3]);
}
iVar3++;
}
Global_2097536.f_2704[iVar10]++;
}}}
func_184(&Var1);
iVar8++;
}
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
if(bVar9){
if(Global_2097536.f_2775[iVar10]==-1 && func_187()){
if(Global_2097536.f_2704[iVar10] >=1){
func_183(uParam0, &(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), Global_2097536[iVar10 /*901*/][(Global_2097536.f_2704[iVar10] - 1) /*75*/].f_59 + 1);
}else{
func_183(uParam0, &(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), 1);
}
Global_2097536.f_2775[iVar10]=Global_2097536.f_2704[iVar10];
Global_2097536.f_2704[iVar10]++;
}
(*uParam0)[iVar10]=2;
}
else{
(*uParam0)[iVar10]=1;
}}else{
if(!bVar9){
Global_2097536.f_2704[iVar10]++;
}
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
Global_2097536.f_2775[iVar10]=-1;
(*uParam0)[iVar10]=1;
}}else{
func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
Global_2097536.f_2775[iVar10]=-1;
(*uParam0)[iVar10]=1;
MISC::SET_BIT(&(Global_2097536.f_2832), iVar10);
}}
break;
case 1:
if(Global_2097536.f_2775[iVar10]==-1){
iVar12=11;
}else{
iVar12=1;
}
if(func_177(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar12)){
func_185(&Var2, &(uParam0->f_44));
if(uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var2)){
if(Var2.f_3 > 0){
iVar3=0;
while (iVar3 < Var2.f_3){
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar3, &Var1);
if(func_187() && (func_147(&Var1, &Var0) || func_147(&Var1, &(Global_2097157.f_361)))){
}else{
bVar11=false;
if(Global_2097536[iVar10 /*901*/][0 /*75*/].f_59 > 1 || Global_2097536[iVar10 /*901*/][0 /*75*/].f_59 <=0){
bVar11=true;
}
if(Global_2097536.f_2704[iVar10] < 11 || bVar11){
if(iVar3==0 || bVar11){
MemCopy(&(Global_2097536[iVar10 /*901*/][0 /*75*/]),{
Var1.f_13
}
, 16);
Global_2097536[iVar10 /*901*/][0 /*75*/].f_32={
Var1 
};
Global_2097536[iVar10 /*901*/][0 /*75*/].f_59=Var1.f_96;
if(func_182(uParam0->f_44)){
iVar5=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
if(iVar5==1){
Global_2097536[iVar10 /*901*/][0 /*75*/].f_58=1;
}else{
Global_2097536[iVar10 /*901*/][0 /*75*/].f_58=0;
}
}
if(func_198(uParam0->f_44)){
MemCopy(&(Global_2097536[iVar10 /*901*/][0 /*75*/].f_16),{
Var1.f_19.f_1[1 /*16*/].f_8
}
, 16);
}
Global_2097536[iVar10 /*901*/][0 /*75*/].f_74=1;
iVar4=0;
iVar4=0;
while (iVar4 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[iVar4])){
Global_2097536[iVar10 /*901*/][iVar3 /*75*/].f_67[iVar4]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar3, Global_2097536.f_2710[iVar4]);
}else{
Global_2097536[iVar10 /*901*/][iVar3 /*75*/].f_60[iVar4]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar3, Global_2097536.f_2710[iVar4]);
}
iVar4++;
}
if(Global_2097536.f_2704[iVar10]==0){
if(bVar11){
}else{
Global_2097536.f_2704[iVar10]++;
}
}
elseif(Global_2097536.f_2704[iVar10]==1 && Global_2097536.f_2775[iVar10]==-1){
Global_2097536.f_2704[iVar10]++;
}
}
elseif(Global_2097536.f_2704[iVar10] < 11){
MemCopy(&(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]),{
Var1.f_13
}
, 16);
Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_32={
Var1 
};
if(func_182(uParam0->f_44)){
iVar5=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar3, Global_2097536.f_2709);
if(iVar5==1){
Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_58=1;
}else{
Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_58=0;
}
}
if(func_198(uParam0->f_44)){
MemCopy(&(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_16),{
Var1.f_19.f_1[1 /*16*/].f_8
}
, 16);
}
Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_59=Var1.f_96;
Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_74=1;
iVar4=0;
iVar4=0;
while (iVar4 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[iVar4])){
Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_67[iVar4]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar3, Global_2097536.f_2710[iVar4]);
}else{
Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_60[iVar4]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar3, Global_2097536.f_2710[iVar4]);
}
iVar4++;
}
if(iVar3 !=0){
Global_2097536.f_2704[iVar10]++;
}
}}}
func_184(&Var1);
iVar3++;
}}
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
(*uParam0)[iVar10]=2;
}else{
MISC::SET_BIT(&(Global_2097536.f_2832), iVar10);
func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
Global_2097536.f_2704[iVar10]=0;
(*uParam0)[iVar10]=2;
Global_2097536.f_2704[1]=0;
(*uParam0)[1]=1;
Global_2097536.f_2704[2]=0;
(*uParam0)[2]=3;
}}
if(Global_2097536.f_2775[iVar10]==-1 && func_187()){
if(Global_2097536.f_2704[iVar10] >=1){
func_183(uParam0, &(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), Global_2097536[iVar10 /*901*/][(Global_2097536.f_2704[iVar10] - 1) /*75*/].f_59 + 1);
}else{
func_183(uParam0, &(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), 1);
}
Global_2097536.f_2775[iVar10]=Global_2097536.f_2704[iVar10];
Global_2097536.f_2704[iVar10]++;
}
break;
case 2:
func_176(iVar10, Global_2097157.f_374);
(*uParam0)[iVar10]=3;
break;
case 3:
return 1;
break;
}
return 0;
}

int func_191(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65){
int iVar0;
if(Global_2097532){
if(Global_2097157.f_5 !=0){
if(Global_2097157.f_5==Param0.f_0){
if(Global_2097157.f_5.f_2==Param0.f_3){
iVar0=0;
while (iVar0 < Param0.f_3){
if(!MISC::ARE_STRINGS_EQUAL(&(Global_2097157.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_2097157.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8))){
return 0;
}
iVar0++;
}
return 1;
}}}}
return 0;
}


void func_192(var uParam0){
int iVar0;
if(STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_2097536.f_2826)){
iVar0=STATS::LEADERBOARDS_GET_CACHE_TIME(Global_2097536.f_2826);
if(iVar0 < 300000){
MISC::SET_BIT(&(uParam0->f_42), 5);
}else{
MISC::CLEAR_BIT(&(uParam0->f_42), 5);
func_160(Global_2097536.f_2826, -1);
}}}


bool func_193(var uParam0){
return uParam0->f_1;
}


void func_194(var uParam0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0)){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0, 255, 255, 255, 0, 0);
}}


void func_195(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4){
char* sVar0;
struct<2> Var1;
struct<16> Var2;
bool bVar3;
struct<13> Var4;
int iVar5;
struct<13> Var6;
int iVar7;
sVar0="";
if(MISC::IS_BIT_SET(iParam2, 4)){
sVar0="SCLB_GLOBAL";
}elseif(MISC::IS_BIT_SET(iParam2, 5)){
*iParam1++;
sVar0="SCLB_FRIENDS";
}elseif(MISC::IS_BIT_SET(iParam2, 6)){
*iParam1++;
if(NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if((func_167() || func_166()) && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
sVar0="SCLB_CREW";
}else{
Var4={
func_25(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var4)){
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var4);
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1))){
sVar0="STRING";
Var2={
Var1.f_1 
};
bVar3=true;
}else{
sVar0="SCLB_CREW";
}}else{
sVar0="SCLB_CREW";
}}}else{
sVar0="SCLB_CREW";
}}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
if(bVar3){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&Var2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
*iParam1++;
if(bParam4){
iVar5=0;
MISC::SET_BIT(&iVar5, 7);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
sVar0="SCLB_NOT_ONL";
}elseif(!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
sVar0="SCLB_NO_ROS";
}elseif(Global_2097536.f_2832 !=0){
sVar0="SCLB_READ_FAIL";
}else{
sVar0="HUD_PERM";
}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
*iParam1++;
}elseif(bParam3){
if(MISC::IS_BIT_SET(iParam2, 4)){
sVar0="SCLB_NO_GLOBAL";
}elseif(MISC::IS_BIT_SET(iParam2, 5)){
if(NETWORK::NETWORK_GET_FRIEND_COUNT() > 0){
sVar0="SCLB_NO_FRNDS";
}else{
sVar0="SCLB_NO_FRNDSb";
}}elseif(MISC::IS_BIT_SET(iParam2, 6)){
if(NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()){
if(NETWORK::NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT()){
if(NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if((func_167() || func_166()) && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
sVar0="SCLB_NO_CREWc";
}
else{
Var6={
func_25(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var6)){
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var6);
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1))){
sVar0="SCLB_NO_CREWb";
Var2={
Var1.f_1 
};
bVar3=true;
}else{
sVar0="SCLB_NO_CREWc";
}}else{
sVar0="SCLB_NO_CREWa";
}
}}else{
sVar0="SCLB_NO_CREWa";
}}else{
sVar0="SCLB_NO_CREWe";
}}else{
sVar0="SCLB_NO_CREWd";
}}
iVar7=0;
MISC::SET_BIT(&iVar7, 7);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
if(bVar3){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&Var2);
GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
*iParam1++;
}}


void func_196(var uParam0, char* sParam1, var uParam2, int iParam3){
int iVar0;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_TITLE");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
iVar0=0;
while (iVar0 < iParam3){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam2[iVar0 /*6*/]);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
iVar0++;
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_197(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_MULTIPLAYER_TITLE");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam2)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
}
if(iParam5==-1){
if(bParam4){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
}}elseif(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
}}else{
if(bParam4){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
}}elseif(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
}
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_198(int iParam0){
if(iParam0==825 || iParam0==828){
return 1;
}
return 0;
}


void func_199(var uParam0, int iParam1){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DISPLAY_TYPE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


var func__200(){
return GRAPHICS::REQUEST_SCALEFORM_MOVIE("SC_LEADERBOARD");
}


bool func_201(){
return func_202(PLAYER::PLAYER_ID());
}

int func_202(int iParam0){
switch (func_203(iParam0)){
case 0:
case 1:
case 2:
case 3:
case 4:
case 6:
case 5:
case 7:
case 42:
case 37:
case 40:
case 43:
return 0;
default:
}
return 1;
}

int func_203(int iParam0){
return Global_1853910[iParam0 /*862*/].f_192;
}


void func_204(int iParam0){
Global_1577898=iParam0;
}


void func_205(int iParam0){
Global_1655472.f_1163=iParam0;
}


void func_206(bool bParam0){
if(bParam0){
func_208();
}
func_207(4, -1);
func_207(6, -1);
func_207(7, -1);
func_207(3, -1);
func_207(1, -1);
func_207(2, -1);
func_207(11, -1);
func_207(13, -1);
func_207(14, -1);
func_207(16, -1);
}


void func_207(int iParam0, int iParam1){
MISC::SET_BIT(&(Global_1653913.f_1047), iParam0);
switch (iParam0){
case 5:
if(iParam1 > -1){
Global_1653913.f_170[iParam1]=1;
}
break;
}}


void func_208(){
Global_2793046.f_4629=0;
}


void func_209(var uParam0, bool bParam1, bool bParam2){
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

int func_210(var uParam0, bool bParam1){
int iVar0;
int iVar1;
bool bVar2;
iVar0=2;
if(Global_2103068.f_2 + 5 < MISC::GET_FRAME_COUNT() && Global_2103068.f_2 > 0){
func_98(&Global_2103068);
func_98(&(Global_2103068.f_49));
*uParam0=0;
Global_2103068.f_2=0;
func_218(0);
}
Global_2103068.f_2=MISC::GET_FRAME_COUNT();
iVar1=-1;
if(func_167()){
if(NETWORK::NETWORK_IS_NP_AVAILABLE()==0){
iVar1=NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON();
}}
if((func_167() && (((iVar1==4 || iVar1==2) || iVar1==1) || iVar1==5)) || (!func_216() && NETWORK::NETWORK_IS_SIGNED_ONLINE())){
if(NETWORK::NETWORK_IS_REFRESHING_ROS_CREDENTIALS()){
func_213(&(Global_2103068.f_3), func_215(&(Global_2103068.f_3)));
if(!MISC::IS_BIT_SET(*uParam0, 4)){
MISC::SET_BIT(uParam0, 4);
StringCopy(&(Global_2103068.f_3.f_1), "", 64);
func_211(&(Global_2103068.f_3), 0);
}}else{
if(iVar1==4){
set_warning_message_with_header("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, false, -1, 0, 0, true, 0);
}elseif(iVar1==2){
set_warning_message_with_header("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
}elseif(iVar1==1){
set_warning_message_with_header("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
}elseif(iVar1==5){
set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
}elseif(!func_216()){
set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, false, -1, 0, 0, true, 0);
}
if(!MISC::IS_BIT_SET(*uParam0, 0)){
if(!PAD::IS_CONTROL_PRESSED(2, 201)){
MISC::SET_BIT(uParam0, 0);
}}elseif(PAD::IS_CONTROL_JUST_RELEASED(2, 201)){
func_98(&(Global_2103068.f_49));
func_98(&Global_2103068);
*uParam0=0;
Global_2103068.f_2=0;
func_218(0);
return 1;
}}}else{
func_213(&(Global_2103068.f_3), func_215(&(Global_2103068.f_3)));
if((func_193(&(Global_2103068.f_49)) && !func_154(&(Global_2103068.f_49), 2000, 1)) && !NETWORK::NETWORK_IS_SIGNED_ONLINE()){
MISC::SET_BIT(uParam0, 3);
StringCopy(&(Global_2103068.f_3.f_1), "", 64);
func_211(&(Global_2103068.f_3), 0);
}elseif(!MISC::IS_BIT_SET(*uParam0, 3)){
if(!MISC::IS_BIT_SET(*uParam0, 1)){
PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(0);
MISC::SET_BIT(uParam0, 1);
StringCopy(&(Global_2103068.f_3.f_1), "", 64);
func_211(&(Global_2103068.f_3), 0);
}}
if(func_193(&Global_2103068)){
if(!func_154(&Global_2103068, 4000, 1)){
bVar2=true;
}}
if(!bVar2){
if(bParam1){
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
if(NETWORK::NETWORK_IS_CABLE_CONNECTED()){
set_warning_message_with_header("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, false, -1, 0, 0, true, 0);
}else{
set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
}
if(!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()){
if(!MISC::IS_BIT_SET(*uParam0, 0)){
if(!PAD::IS_CONTROL_PRESSED(2, 201)){
MISC::SET_BIT(uParam0, 0);
}
}
elseif(PAD::IS_CONTROL_JUST_RELEASED(2, 201)){
func_98(&Global_2103068);
*uParam0=0;
Global_2103068.f_2=0;
func_218(0);
return 1;
}}}else{
func_98(&Global_2103068);
*uParam0=0;
Global_2103068.f_2=0;
func_218(0);
return 1;
}}elseif(MISC::IS_BIT_SET(*uParam0, 3)){
if(NETWORK::NETWORK_IS_CABLE_CONNECTED()){
set_warning_message_with_header("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, false, -1, 0, 0, true, 0);
}else{
set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
}
if(!MISC::IS_BIT_SET(*uParam0, 0)){
if(!PAD::IS_CONTROL_PRESSED(2, 201)){
MISC::SET_BIT(uParam0, 0);
}}elseif(PAD::IS_CONTROL_JUST_RELEASED(2, 201)){
func_98(&(Global_2103068.f_49));
func_98(&Global_2103068);
*uParam0=0;
Global_2103068.f_2=0;
func_218(0);
return 1;
}}else{
if(NETWORK::NETWORK_IS_CABLE_CONNECTED()){
set_warning_message_with_header("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, false, -1, 0, 0, true, 0);
}else{
set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
}
if(!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()){
if(!MISC::IS_BIT_SET(*uParam0, 0)){
if(!PAD::IS_CONTROL_PRESSED(2, 201)){
MISC::SET_BIT(uParam0, 0);
}}elseif(PAD::IS_CONTROL_JUST_RELEASED(2, 201)){
func_98(&(Global_2103068.f_49));
func_98(&Global_2103068);
*uParam0=0;
Global_2103068.f_2=0;
func_218(0);
return 1;
}}}}}
return 0;
}


void func_211(var uParam0, bool bParam1){
func_212(uParam0);
if(bParam1){
func_218(0);
}
uParam0->f_35=1;
}


void func_212(var uParam0){
struct<46> Var0;
Var0.f_41=1;
*uParam0={
Var0 
};
}


void func_213(var uParam0, int iParam1){
if(iParam1==1){
*uParam0=0;
func_214(uParam0);
}
if(*uParam0==0){
if(uParam0->f_36){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}elseif(uParam0->f_37){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}elseif(uParam0->f_39){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}elseif(uParam0->f_38){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}elseif(uParam0->f_40){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam0->f_33, 70);
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}else{
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}
*uParam0=1;
}
if(*uParam0==1){}}


void func_214(var uParam0){
uParam0->f_35=0;
}

int func_215(var uParam0){
return uParam0->f_35;
}

int func_216(){
if(func_217()){
return 0;
}
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()==0){
return 0;
}
return 1;
}


bool func_217(){
return Global_2695033;
}


void func_218(bool bParam0){
HUD::BUSYSPINNER_OFF();
if(bParam0){
HUD::PRELOAD_BUSYSPINNER();
}}

int func_219(var uParam0, bool bParam1, bool bParam2){
if(!iLocal_134){
func_231(&(uParam0->f_72), bParam1);
iLocal_134=1;
func_337(&(uParam0->f_666), 9, 0);
}else{
if(Global_2097157.f_1 && !Global_2097157.f_2){
func_228(190, bParam1);
Global_2097157.f_2=1;
*bParam2=1;
}
if(func_220(&(uParam0->f_72))){
Global_2097532=1;
return 1;
}}
return 0;
}

int func_220(var uParam0){
struct<98> Var0;
struct<4> Var1;
struct<37> Var2;
struct<13> Var3;
int iVar4;
Var0.f_19.f_1=4;
Var2.f_3=32;
Var2.f_36=32;
if(func_198(uParam0->f_44)){
Var3={
Global_2097157.f_361 
};
}else{
Var3={
func_25(PLAYER::PLAYER_ID()) 
};
}
switch (Global_2097157){
case 0:
if(func_227(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var3)){
func_185(&Var1, &(uParam0->f_44));
Global_2097157.f_142=uParam0->f_44;
Global_2097157.f_142.f_1=STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(uParam0->f_44, 0);
iVar4=0;
while (iVar4 < Global_2097157.f_142.f_1){
if(!func_226(uParam0->f_44, iVar4)){
if(func_225(uParam0->f_44, 4, iVar4)){
MISC::SET_BIT(&(Global_2097157.f_142.f_2), iVar4);
}
else{
MISC::CLEAR_BIT(&(Global_2097157.f_142.f_2), iVar4);
}}
bVar4++;
}
if(uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var1)){
if(Var1.f_3 > 0){
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &Var0);
if(Var0.f_97 !=Global_2097157.f_142.f_1){
}
if(!func_148(Var0)){
Global_2097157.f_4=1;
}
else{
bVar4=false;
while (bVar4 < Global_2097157.f_142.f_1){
if(!func_226(uParam0->f_44, bVar4)){
if(func_225(uParam0->f_44, 4, bVar4)){
Global_2097157.f_73.f_36[bVar4]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, bVar4);
if(Global_2097157.f_73.f_36[bVar4]==-1){
if(bVar4 > Var0.f_97){
Global_2097157.f_73.f_36[bVar4]=0;
}
}
}
else{
Global_2097157.f_73.f_3[bVar4]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(0, bVar4);
if(Global_2097157.f_73.f_3[bVar4]==-1f){
if(bVar4 > Var0.f_97){
Global_2097157.f_73.f_3[bVar4]=0f;
}
}
}}
bVar4++;
}
}}else{
Global_2097157.f_4=1;
}
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
}else{
Global_2097157.f_4=1;
}
Global_2097157=1;
func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
}
break;
case 1:
Global_2097157.f_1=1;
if(Global_2097157.f_2){
func_224();
if(Global_2097157.f_4){
if(func_223(uParam0->f_44)){
Global_2097157=3;
}else{
Global_2097157=2;
}}else{
Global_2097157=2;
}}
break;
case 2:
STATS::LEADERBOARDS2_READ_RANK_PREDICTION(&(Global_2097157.f_73), &(Global_2097157.f_142), &(Global_2097157.f_211));
Global_2097157=4;
uParam0->f_4=0;
uParam0->f_5=0;
break;
case 3:
Global_2097157.f_211={
Global_2097157.f_142 
};
Global_2097157=4;
uParam0->f_4=0;
uParam0->f_5=0;
break;
case 4:
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_222()){
if(func_221()){
Global_2097157=99;
}else{
Global_2097157=999;
return 1;
}}else{
Global_2097157=999;
return 1;
}
break;
case 99:
if(func_223(uParam0->f_44)){
Global_2097157.f_280={
Global_2097157.f_142 
};
}else{
Var2.f_0=Global_2097157.f_142;
Var2.f_1=Global_2097157.f_142.f_1;
Var2.f_2=Global_2097157.f_142.f_2;
STATS::LEADERBOARDS2_READ_RANK_PREDICTION(&Var2, &(Global_2097157.f_142), &(Global_2097157.f_280));
}
Global_2097157=100;
uParam0->f_4=0;
uParam0->f_5=0;
break;
case 100:
if(func_186(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var3, 1, 1, Global_2097157.f_280.f_36[0], Global_2097157.f_280.f_3[0])){
func_185(&Var1, &(uParam0->f_44));
if(uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var1)){
if(Var1.f_3 > 0){
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &Var0);
if(MISC::ARE_STRINGS_EQUAL(&(Var0.f_13), "")){
Global_1057163.f_1=-1;
}
else{
Global_1057163.f_1=Var0.f_96;
}}else{
Global_1057163.f_1=-1;
}
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
}else{
Global_1057163.f_1=-1;
}
Global_2097157=999;
func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
}
break;
case 999:
return 1;
break;
}
return 0;
}


bool func_221(){
return MISC::IS_BIT_SET(Global_1048576.f_10, 1);
}


var func__222(){
return Global_2692735.f_3;
}

int func_223(int iParam0){
switch (iParam0){
case 817:
case 850:
case 824:
case 827:
case 815:
case 826:
case 777:
case 825:
case 828:
case 849:
case 928:
case 795:
case 202:
case 811:
case 193:
case 975:
case 976:
case 970:
case 973:
case 968:
case 969:
case 966:
case 974:
case 971:
case 967:
case 965:
case 972:
return 1;
break;
}
if(iParam0 >=998 && iParam0 <=1197){
return 1;
}
return 0;
}


void func_224(){
Global_2097157.f_73=Global_2097157.f_142;
Global_2097157.f_73.f_1=Global_2097157.f_142.f_1;
Global_2097157.f_73.f_2=Global_2097157.f_142.f_2;
Global_2097157.f_211=Global_2097157.f_142;
Global_2097157.f_211.f_1=Global_2097157.f_142.f_1;
Global_2097157.f_211.f_2=Global_2097157.f_142.f_2;
}

int func_225(int iParam0, int iParam1, int iParam2){
int iVar0;
if(iParam0==190){
if(iParam2==0){
return 0;
}}
if(iParam0==203){
if(iParam2==3 || iParam2==6){
return 0;
}}
if(iParam0==912){
if(iParam2==0 || iParam2==3){
return 0;
}}
if((iParam0==762 || iParam0==822) || iParam0==823){
if(iParam2==0 || iParam2==3){
return 0;
}}
if(iParam0==791){
if(iParam2==4){
return 0;
}}
if(iParam0==780){
if(iParam2==3){
return 0;
}}
if(iParam0==777){
if(iParam2==3 || iParam2==7){
return 0;
}}
if(iParam0==1200){
if(iParam2==4){
return 0;
}}
iVar0=STATS::LEADERBOARDS_GET_COLUMN_TYPE(iParam0, iParam1, iParam2);
switch (iVar0){
case 1:
case 2:
return 1;
break;
}
return 0;
}

int func_226(int iParam0, int iParam1){
if(STATS::LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, iParam1)==156){
return 1;
}
switch (iParam0){
case 912:
if(iParam1==5){
return 1;
}
break;
case 780:
if(iParam1==4){
return 1;
}
break;
case 1200:
if(iParam1==5){
return 1;
}
break;
}
return 0;
}

int func_227(var uParam0, var uParam1, var uParam2, var uParam3){
switch (*uParam0){
case 0:
if(!func_180() && !func_179()){
func_178(*uParam2);
if(STATS::LEADERBOARDS2_READ_BY_HANDLE(uParam2, uParam3)){
*uParam0++;
}else{
*uParam1=0;
*uParam0=3;
}}
break;
case 1:
if(!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1)){
*uParam0++;
}
break;
case 2:
if(STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0)){
*uParam1=1;
*uParam0++;
}else{
*uParam1=0;
*uParam0++;
}
break;
case 3:
return 1;
break;
}
return 0;
}


void func_228(int iParam0, bool bParam1){
struct<6> Var0[1];
struct<8> Var1[1];
if(!PLAYER::IS_PLAYER_ONLINE()){
return;
}
StringCopy(&(Var1[0 /*8*/]), "GameType", 32);
if(bParam1){
StringCopy(&(Var0[0 /*6*/]), "MP", 24);
}else{
StringCopy(&(Var0[0 /*6*/]), "SP", 24);
}
if(func_230(iParam0, &Var0, &Var1, 1, -1, 1, 0)){
func_229(190, 131, 0, 0f, 1);
func_229(190, 103, iLocal_106[1], 0f, 0);
func_229(190, 99, iLocal_106[2], 0f, 0);
func_229(190, 109, iLocal_106[3], 0f, 0);
func_229(190, 106, iLocal_106[5], 0f, 0);
func_229(190, 2, iLocal_106[10], 0f, 0);
func_229(190, 107, iLocal_106[8], 0f, 0);
func_229(190, 116, iLocal_106[6], 0f, 0);
iLocal_106[1]=0;
iLocal_106[2]=0;
iLocal_106[3]=0;
iLocal_106[5]=0;
iLocal_106[10]=0;
iLocal_106[8]=0;
iLocal_106[6]=0;
}}


void func_229(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4){
int iVar0;
int iVar1;
if(!bParam4){
STATS::LEADERBOARDS_WRITE_ADD_COLUMN(iParam1, iParam2, fParam3);
}
if(!Global_2097157.f_3){
Global_2097157.f_142=iParam0;
Global_2097157.f_142.f_1=STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(Global_2097157.f_142, 0);
iVar1=0;
while (iVar1 < 32){
if(iVar1 < Global_2097157.f_142.f_1){
if(iParam1==156){
}elseif(func_225(iParam0, 4, iVar1)){
MISC::SET_BIT(&(Global_2097157.f_142.f_2), iVar1);
}else{
MISC::CLEAR_BIT(&(Global_2097157.f_142.f_2), iVar1);
}}else{
MISC::CLEAR_BIT(&(Global_2097157.f_142.f_2), bVar1);
}
bVar1++;
}
Global_2097157.f_3=1;
}
bVar1=false;
while (bVar1 < 32){
if(iParam1==STATS::LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, bVar1)){
iVar0=bVar1;
bVar1=32;
}
bVar1++;
}
Global_2097157.f_142.f_36[iVar0]=iParam2;
Global_2097157.f_142.f_3[iVar0]=fParam3;
if(iParam2 !=0){
MISC::SET_BIT(&(Global_2097157.f_142.f_2), iVar0);
}elseif(fParam3 !=0f){
MISC::CLEAR_BIT(&(Global_2097157.f_142.f_2), iVar0);
}}

int func_230(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6){
struct<68> Var0;
int iVar1;
struct<13> Var2;
var uVar3;
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){}
if((!NETWORK::NETWORK_PLAYER_IS_CHEATER() && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())) && NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV()){
Var0.f_2.f_1=4;
Var0.f_0=uParam0;
if(iParam4==-1){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Var2={
func_25(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var2)){
if(NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar3, 35, &Var2)){
Var0.f_1=uVar3;
}}}}else{
Var0.f_1=iParam4;
}
Var0.f_2=iParam3;
iVar1=0;
while (iVar1 < iParam3){
Var0.f_2.f_1[iVar1 /*16*/]={
*(uParam2[iVar1 /*8*/]) 
};
MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8),{
*(uParam1[iVar1 /*6*/])
}
, 8);
iVar1++;
}
if(bParam5){
Global_2097157.f_5={
Var0 
};
}
if(!bParam6){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2692735.f_3){
STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&Var0, &(Global_1935368.f_10));
}else{
STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
}}
return 1;
}
if(NETWORK::NETWORK_PLAYER_IS_CHEATER()){}
if(!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()){}
if(NETWORK::NETWORK_HAS_AGE_RESTRICTIONS()){}
if(!NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV()){}
return 0;
}


void func_231(var uParam0, bool bParam1){
int iVar0;
iVar0=0;
if(bParam1){
iVar0=-1;
}
func_232(uParam0, 14, "DartsLB", "", iVar0, -1, 0, 0);
}


void func_232(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7){
struct<8> Var0;
struct<8> Var1;
int iVar2;
struct<6> Var3;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam2)){
StringCopy(&Var0, sParam2, 32);
}
if(bParam7){}
Global_2097536.f_2769=0;
Global_2097536.f_2770=0;
Global_2097536.f_2768=0;
switch (iParam1){
case 2:
if(iParam4==0){
if(iParam5 > 0 && !func_241()){
uParam0->f_44=826;
}else{
uParam0->f_44=815;
}
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
if(iParam5 > 0 && !func_241()){
uParam0->f_44.f_3=2;
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
StringCopy(&Var1, "", 32);
StringIntConCat(&Var1, iParam5, 32);
uParam0->f_44.f_3.f_1[1 /*16*/].f_8={
Var1 
};
Global_2097536.f_2780.f_26=iParam5;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
if(iParam5==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_L1", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}
else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_LM", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}}elseif(iParam5==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
}}else{
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN", 32);
}
Global_2097536.f_2780.f_26=-1;
}
Global_2097536.f_2780=1;
if(iParam5 <=0 || func_241()){
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
Global_2097536.f_2710[0]=1;
Global_2097536.f_2710[1]=3;
Global_2097536.f_2710[2]=0;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2709=4;
Global_2097536.f_2708=2;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=3;
Global_2097536.f_2780.f_29[2]=5;
}else{
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=2;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2709=4;
Global_2097536.f_2708=3;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=1;
Global_2097536.f_2780.f_29[2]=3;
Global_2097536.f_2780.f_29[3]=5;
}
Global_2097536.f_2779=0;
}elseif(iParam4==1){
if(iParam5 > 0 && !func_241()){
uParam0->f_44=827;
}else{
uParam0->f_44=824;
}
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
if(iParam5 > 0 && !func_241()){
uParam0->f_44.f_3=2;
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
StringCopy(&Var1, "", 32);
StringIntConCat(&Var1, iParam5, 32);
uParam0->f_44.f_3.f_1[1 /*16*/].f_8={
Var1 
};
Global_2097536.f_2780.f_26=iParam5;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
if(iParam5==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_L1", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}
else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_LM", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}}elseif(iParam5==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
}}else{
Global_2097536.f_2780.f_26=-1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN", 32);
}}
Global_2097536.f_2780=1;
if(iParam5 <=0 || func_241()){
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
Global_2097536.f_2710[0]=1;
Global_2097536.f_2710[1]=5;
Global_2097536.f_2710[2]=0;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2709=6;
Global_2097536.f_2708=2;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=3;
Global_2097536.f_2780.f_29[2]=5;
}else{
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=2;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=5;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2708=3;
Global_2097536.f_2709=6;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=1;
Global_2097536.f_2780.f_29[2]=3;
Global_2097536.f_2780.f_29[3]=5;
}
Global_2097536.f_2779=0;
}elseif(iParam4==2){
if(iParam5 > 0 && !func_241()){
uParam0->f_44=828;
}else{
uParam0->f_44=825;
}
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=2;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
if(!bParam6){
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "", 32);
}else{
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &Var3);
MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8),{
Var3
}
, 8);
Global_2097536.f_2780.f_27=1;
}
if(iParam5 > 0 && !func_241()){
uParam0->f_44.f_3=3;
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
StringCopy(&Var1, "", 32);
StringIntConCat(&Var1, iParam5, 32);
uParam0->f_44.f_3.f_1[2 /*16*/].f_8={
Var1 
};
Global_2097536.f_2780.f_26=iParam5;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
if(iParam5==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_L1", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}
else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_LM", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}}elseif(iParam5==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
}}else{
Global_2097536.f_2780.f_26=-1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN", 32);
}}
if(iParam5 <=0 || func_241()){
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
Global_2097536.f_2710[0]=1;
Global_2097536.f_2710[1]=3;
Global_2097536.f_2710[2]=0;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2709=4;
Global_2097536.f_2708=2;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=3;
Global_2097536.f_2780.f_29[2]=5;
}else{
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=2;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2708=3;
Global_2097536.f_2709=4;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=1;
Global_2097536.f_2780.f_29[2]=3;
Global_2097536.f_2780.f_29[3]=5;
}
Global_2097536.f_2779=0;
}elseif(iParam4==10 || iParam4==11){
if(iParam5 > 0 && !func_241()){
uParam0->f_44=928;
}else{
uParam0->f_44=849;
}
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
if(iParam5 > 0 && !func_241()){
uParam0->f_44.f_3=2;
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
StringCopy(&Var1, "", 32);
StringIntConCat(&Var1, iParam5, 32);
uParam0->f_44.f_3.f_1[1 /*16*/].f_8={
Var1 
};
Global_2097536.f_2780.f_26=iParam5;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
if(iParam5==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_L1", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}
else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_LM", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}}elseif(iParam5==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
}}else{
Global_2097536.f_2780.f_26=-1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN", 32);
}}
Global_2097536.f_2780=1;
if(iParam5 <=0 || func_241()){
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
Global_2097536.f_2710[0]=1;
Global_2097536.f_2710[1]=0;
Global_2097536.f_2710[2]=0;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2709=0;
Global_2097536.f_2708=1;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=5;
}else{
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=2;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=0;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2708=2;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=1;
Global_2097536.f_2780.f_29[2]=5;
}
Global_2097536.f_2779=0;
}elseif(iParam4==3){
if(iParam5 > 0 && !func_241()){
uParam0->f_44=(998 + (iParam5 - 1));
}else{
uParam0->f_44=975;
}
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
if(iParam5 > 0 && !func_241()){
Global_2097536.f_2780.f_26=iParam5;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
if(iParam5==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_L1", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}
else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_LM", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}}elseif(iParam5==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
}}else{
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN", 32);
}
Global_2097536.f_2780.f_26=-1;
}
Global_2097536.f_2780=1;
if(iParam5 <=0 || func_241()){
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
Global_2097536.f_2710[0]=1;
Global_2097536.f_2710[1]=3;
Global_2097536.f_2710[2]=0;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2709=4;
Global_2097536.f_2708=2;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=3;
Global_2097536.f_2780.f_29[2]=5;
}else{
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=2;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2709=4;
Global_2097536.f_2708=3;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=1;
Global_2097536.f_2780.f_29[2]=3;
Global_2097536.f_2780.f_29[3]=5;
}
Global_2097536.f_2779=0;
}
break;
case 1:
if(iParam4==0 || iParam4==3){
uParam0->f_44=762;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
if(iParam4==3){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_KOTH", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_KOTH_NN", 32);
}}elseif(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_DM", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_DM_NN", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=4;
Global_2097536.f_2710[2]=6;
Global_2097536.f_2710[3]=3;
Global_2097536.f_2710[4]=1;
Global_2097536.f_2710[5]=2;
Global_2097536.f_2708=6;
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=4;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=4;
Global_2097536.f_2780.f_29[4]=5;
Global_2097536.f_2780.f_29[5]=5;
}elseif(iParam4==1 || iParam4==4){
uParam0->f_44=822;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
if(iParam4==4){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TKOTH", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TKOTH_NN", 32);
}}elseif(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TDM", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TDM_NN", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=4;
Global_2097536.f_2710[2]=6;
Global_2097536.f_2710[3]=3;
Global_2097536.f_2710[4]=1;
Global_2097536.f_2710[5]=2;
Global_2097536.f_2708=6;
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=4;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=4;
Global_2097536.f_2780.f_29[4]=5;
Global_2097536.f_2780.f_29[5]=5;
}elseif(iParam4==2){
uParam0->f_44=823;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_VEHDM", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_VEHDM_NN", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=4;
Global_2097536.f_2710[2]=6;
Global_2097536.f_2710[3]=3;
Global_2097536.f_2710[4]=1;
Global_2097536.f_2710[5]=2;
Global_2097536.f_2708=6;
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=4;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=4;
Global_2097536.f_2780.f_29[4]=5;
Global_2097536.f_2780.f_29[5]=5;
}
break;
case 11:
uParam0->f_44=193;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
Global_2097536.f_2780=1;
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_GOLF", 32);
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2708=3;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=7;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
case 94:
uParam0->f_44=193;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
Global_2097536.f_2780=1;
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_GOLF", 32);
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2708=3;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=7;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
case 92:
uParam0->f_44=811;
uParam0->f_44.f_1=1;
uParam0->f_44.f_3=0;
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_HUNTING", 32);
StringCopy(&(Global_2097536.f_2780.f_9), "CMSW", 64);
Global_2097536.f_2780.f_25=0;
Global_2097536.f_2780=0;
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_EKILLS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_PHOTOS", 24);
StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MONEY", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=5;
Global_2097536.f_2710[2]=2;
Global_2097536.f_2710[3]=4;
Global_2097536.f_2710[4]=6;
Global_2097536.f_2708=5;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
Global_2097536.f_2780.f_28=6;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=6;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
Global_2097536.f_2780.f_29[4]=5;
break;
case 15:
uParam0->f_44=749;
uParam0->f_44.f_1=1;
uParam0->f_44.f_3=0;
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_ARM", 32);
Global_2097536.f_2780=1;
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_WLRAT", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=2;
Global_2097536.f_2710[1]=5;
Global_2097536.f_2710[2]=0;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2708=3;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=4;
Global_2097536.f_2780.f_29[3]=5;
break;
case 14:
uParam0->f_44=190;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
if(iParam4==-1){
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
}else{
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
}
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_DARTS", 32);
Global_2097536.f_2780=1;
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=7;
Global_2097536.f_2710[2]=5;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2708=3;
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=4;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
case 12:
uParam0->f_44=283;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TENNIS", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_TENNIS", 64);
StringIntConCat(&(Global_2097536.f_2780.f_9), iParam4 + 1, 64);
}
Global_2097536.f_2780.f_25=0;
Global_2097536.f_2780=1;
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=9;
Global_2097536.f_2710[2]=7;
Global_2097536.f_2710[3]=5;
Global_2097536.f_2710[4]=2;
Global_2097536.f_2708=5;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
Global_2097536.f_2780.f_29[4]=5;
break;
case 87:
uParam0->f_44=283;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TENNIS", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
Global_2097536.f_2780.f_25=0;
Global_2097536.f_2780=1;
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=9;
Global_2097536.f_2710[2]=7;
Global_2097536.f_2710[3]=5;
Global_2097536.f_2710[4]=2;
Global_2097536.f_2708=5;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
Global_2097536.f_2780.f_29[4]=5;
break;
case 13:
uParam0->f_44=912;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=2;
switch (iParam4){
case 0:
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEa", 32);
break;
case 1:
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEb", 32);
break;
case 2:
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEc", 32);
break;
default:
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEa", 32);
break;
}
switch (iParam5){
case 0:
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_PISTOL", 64);
break;
case 1:
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_SMG", 64);
break;
case 2:
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_ASSAULT", 64);
break;
case 3:
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
break;
case 4:
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_LMG", 64);
break;
case 5:
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_HEAVY", 64);
break;
default:
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_PISTOL", 64);
break;
}
Global_2097536.f_2780.f_25=0;
Global_2097536.f_2780=1;
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_HITS", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_SHOTS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_ACC", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=2;
Global_2097536.f_2710[2]=1;
Global_2097536.f_2710[3]=3;
Global_2097536.f_2708=4;
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=4;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=4;
break;
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
case 206:
case 207:
case 208:
case 209:
uParam0->f_44=203;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGE", 32);
MemCopy(&(Global_2097536.f_2780.f_9),{
func_240(iParam1)
}
, 16);
Global_2097536.f_2780.f_25=0;
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=7;
Global_2097536.f_2708=2;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=8;
break;
case 69:
case 71:
case 70:
uParam0->f_44=202;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TRI", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
Global_2097536.f_2780.f_25=0;
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_RANK", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=0;
Global_2097536.f_2710[2]=0;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2708=1;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
Global_2097536.f_2780.f_28=3;
Global_2097536.f_2780.f_29[0]=2;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=0;
Global_2097536.f_2780.f_29[3]=0;
break;
case 80:
uParam0->f_44=817;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=3;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
uParam0->f_44.f_3.f_1[1 /*16*/].f_8={
Var0 
};
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
Global_2097536.f_2780.f_25=0;
Global_2097536.f_2780=1;
StringCopy(&(Global_2097536.f_2780.f_1), "OFFR_TITLE", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
Global_2097536.f_2710[0]=3;
Global_2097536.f_2708=1;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
Global_2097536.f_2780.f_28=3;
Global_2097536.f_2780.f_29[0]=1;
break;
case 3:
uParam0->f_44=791;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HRD", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HRD_NN", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WAVE", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TKILLS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TDEATH", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=2;
Global_2097536.f_2710[3]=3;
Global_2097536.f_2708=4;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
case 0:
if(iParam4==7 || iParam4==1){
uParam0->f_44=1200;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
if(iParam4==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEIST", 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEISTP", 32);
}
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}elseif(iParam4==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEIST_NN", 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEISTPNN", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_ACC", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_HEADSHOT", 24);
StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=4;
Global_2097536.f_2710[3]=5;
Global_2097536.f_2710[4]=6;
Global_2097536.f_2708=3;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
Global_2097536.f_2780.f_28=6;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=11;
Global_2097536.f_2780.f_29[2]=4;
Global_2097536.f_2780.f_29[3]=5;
Global_2097536.f_2780.f_29[4]=5;
}elseif(Global_4718592.f_1221==1){
uParam0->f_44=777;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
if(Global_4718592.f_2==5){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS", 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS", 32);
}
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}elseif(Global_4718592.f_2==5){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS_NN", 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=2;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2708=3;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=2;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
}else{
uParam0->f_44=780;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
if(Global_4718592.f_2==5){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS", 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS", 32);
}
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}elseif(Global_4718592.f_2==5){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS_NN", 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
}
if(func_239(Global_4718592.f_166301) || func_236(Global_4718592.f_166301)){
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=2;
Global_2097536.f_2710[2]=0;
Global_2097536.f_2708=2;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
}elseif(func_235(Global_4718592.f_166301)){
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=2;
Global_2097536.f_2710[2]=0;
Global_2097536.f_2708=2;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
}else{
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=2;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2708=3;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
}}
break;
case 8:
uParam0->f_44=795;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ_NN", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_JUMPS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=1;
MISC::SET_BIT(&(Global_2097536.f_2768), 1);
Global_2097536.f_2754[1]=-1;
Global_2097536.f_2710[2]=2;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2708=3;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=11;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
case 85:
uParam0->f_44=274;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
Global_2097536.f_2780.f_25=0;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ_NN", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_CASH", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_TOTCASH", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=3;
Global_2097536.f_2708=2;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
Global_2097536.f_2780.f_28=3;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=5;
break;
case 122:
switch (iParam4){
case 0:
case 9:
case 4:
case 8:
switch (iParam4){
case 0:
uParam0->f_44=965;
break;
case 9:
uParam0->f_44=966;
break;
case 4:
uParam0->f_44=967;
break;
case 8:
uParam0->f_44=968;
break;
}
uParam0->f_44.f_1=1;
uParam0->f_44.f_3=0;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
Global_2097536.f_2780=1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
Global_2097536.f_2710[0]=1;
Global_2097536.f_2710[1]=4;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2710[3]=2;
Global_2097536.f_2708=4;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
case 1:
case 2:
case 3:
switch (iParam4){
case 1:
uParam0->f_44=969;
break;
case 2:
uParam0->f_44=970;
break;
case 3:
uParam0->f_44=973;
break;
}
uParam0->f_44.f_1=1;
uParam0->f_44.f_3=0;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
Global_2097536.f_2780=1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_DIST", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
Global_2097536.f_2710[0]=1;
Global_2097536.f_2710[1]=4;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2710[3]=2;
Global_2097536.f_2708=4;
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
Global_2097536.f_2780.f_29[0]=4;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
case 7:
uParam0->f_44=971;
uParam0->f_44.f_1=1;
uParam0->f_44.f_3=0;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
Global_2097536.f_2780=1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_AVG_HEI", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
Global_2097536.f_2710[0]=1;
Global_2097536.f_2710[1]=4;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2710[3]=2;
Global_2097536.f_2708=4;
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
Global_2097536.f_2780.f_29[0]=4;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
case 6:
case 5:
switch (iParam4){
case 6:
uParam0->f_44=972;
break;
case 5:
uParam0->f_44=974;
break;
}
uParam0->f_44.f_1=1;
uParam0->f_44.f_3=0;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
Global_2097536.f_2780=1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=3;
Global_2097536.f_2710[2]=2;
Global_2097536.f_2710[3]=1;
Global_2097536.f_2708=4;
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
Global_2097536.f_2780.f_29[0]=12;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
}
break;
case 83:
uParam0->f_44=192;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_DIST", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
Global_2097536.f_2710[0]=2;
Global_2097536.f_2710[1]=5;
Global_2097536.f_2710[2]=4;
Global_2097536.f_2710[3]=3;
Global_2097536.f_2708=4;
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
Global_2097536.f_2780.f_29[0]=17;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
case 82:
uParam0->f_44=850;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
Global_2097536.f_2780.f_25=0;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=4;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2710[3]=2;
Global_2097536.f_2708=4;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
Global_2097536.f_2780.f_29[0]=10;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
case 84:
uParam0->f_44=820;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
Global_2097536.f_2780.f_25=0;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_ACC", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL1", 24);
StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MEDAL2", 24);
StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MEDAL3", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=2;
Global_2097536.f_2710[3]=5;
Global_2097536.f_2710[4]=4;
Global_2097536.f_2710[5]=3;
Global_2097536.f_2708=6;
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
Global_2097536.f_2780.f_29[0]=4;
Global_2097536.f_2780.f_29[1]=9;
Global_2097536.f_2780.f_29[2]=4;
Global_2097536.f_2780.f_29[3]=5;
Global_2097536.f_2780.f_29[4]=5;
Global_2097536.f_2780.f_29[5]=5;
break;
case 86:
uParam0->f_44=817;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=3;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
uParam0->f_44.f_3.f_1[1 /*16*/].f_8={
Var0 
};
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
Global_2097536.f_2780=1;
Global_2097536.f_2780.f_25=0;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SPR_TITLE", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
Global_2097536.f_2710[0]=2;
Global_2097536.f_2708=1;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
Global_2097536.f_2780.f_28=3;
Global_2097536.f_2780.f_29[0]=1;
break;
case 91:
uParam0->f_44=817;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=3;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
Global_2097536.f_2780=1;
if(iParam5 <=0){
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
Global_2097536.f_2710[0]=3;
Global_2097536.f_2710[1]=4;
Global_2097536.f_2710[2]=1;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2709=6;
Global_2097536.f_2708=2;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=3;
}else{
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
Global_2097536.f_2710[0]=3;
Global_2097536.f_2710[1]=2;
Global_2097536.f_2710[2]=4;
Global_2097536.f_2710[3]=1;
Global_2097536.f_2709=4;
Global_2097536.f_2708=3;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=1;
Global_2097536.f_2780.f_29[2]=3;
}
Global_2097536.f_2779=0;
switch (iParam4){
case 0:
StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_1", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
break;
case 1:
StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_2", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
break;
case 2:
StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_4", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
break;
case 3:
StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_5", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
break;
case 4:
StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_6", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
break;
case 5:
StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_1", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
break;
case 6:
StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_2", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
break;
case 7:
StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_3", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
break;
case 8:
StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_4", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
break;
default:
break;
}
break;
case 888:
uParam0->f_44=1201;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "ArenaMode", 32);
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=2;
Global_2097536.f_2710[3]=3;
MemCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8),{
func_234(iParam4)
}
, 8);
Global_2097536.f_2708=4;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
switch (iParam4){
case 1:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_BUZZ", 32);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
Global_2097536.f_2780.f_29[3]=9;
break;
case 2:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_CARN", 32);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
break;
case 3:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_FLAGW", 32);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_FLAGS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
break;
case 4:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_WRECK", 32);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
break;
case 5:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_BOMBB", 32);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_POINTS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_GOALS", 24);
break;
case 6:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_GAMEM", 32);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_CPOINTS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
break;
case 7:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_MNSTR", 32);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
break;
case 8:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_HOTB", 32);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_PASSES", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
Global_2097536.f_2780.f_29[3]=9;
break;
case 9:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_TAGT", 32);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TAGS", 24);
break;
}
Global_2097536.f_2780=1;
Global_2097536.f_2708=4;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
case 889:
uParam0->f_44=1202;
uParam0->f_44.f_1=1;
uParam0->f_44.f_3=0;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_CAREER", 32);
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_CARPT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WLRAT", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MATCHES", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TITLE", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2710[3]=4;
Global_2097536.f_2780=1;
Global_2097536.f_2708=4;
Global_2097536.f_2780.f_28=5;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=4;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=21;
break;
case 890:
uParam0->f_44=1203;
uParam0->f_44.f_1=1;
uParam0->f_44.f_3=0;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_CCM_CAREER", 32);
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_CCMLVL", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WLRAT", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RACES", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=4;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2780=1;
Global_2097536.f_2708=3;
Global_2097536.f_2780.f_28=4;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=22;
Global_2097536.f_2780.f_29[1]=4;
Global_2097536.f_2780.f_29[2]=5;
break;
case 276:
uParam0->f_44=1204;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
StringCopy(&Var0, "TUNER_SANDB_SVAR", 32);
if(iParam4==2 || iParam4==3){
StringIntConCat(&Var0, 2, 32);
}else{
StringIntConCat(&Var0, iParam4, 32);
}
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=2;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2709=4;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2708=3;
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=2;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=3;
switch (iParam4){
case 0:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_TT", 32);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=3;
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
Global_2097536.f_2708=2;
Global_2097536.f_2780.f_28=3;
Global_2097536.f_2780.f_29[0]=2;
Global_2097536.f_2780.f_29[1]=3;
break;
case 1:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_CD", 32);
break;
case 2:
case 3:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_HH1", 32);
break;
}
break;
case 278:
case 279:
uParam0->f_44=1204;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=2;
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[1 /*16*/].f_8={
Var0 
};
if(iParam1==278){
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "TUNER_SRS", 32);
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_SRS", 32);
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
}else{
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "TUNER_PS", 32);
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_PURS", 32);
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
}
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=2;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2709=4;
Global_2097536.f_2708=3;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=2;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=3;
Global_2097536.f_2780=1;
break;
}
iVar2=0;
iVar2=0;
while (iVar2 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[iVar2])){
MISC::SET_BIT(&(Global_2097536.f_2770), iVar2);
}
iVar2++;
}
Global_2097536.f_2826=func_233(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_233(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5){
char cVar0[64];
MemCopy(&cVar0,{
Param0
}
, 16);
StringIntConCat(&cVar0, iParam1, 64);
StringConCat(&cVar0, "_", 64);
if(func_198(iParam1)){
if(bParam5){
StringConCat(&cVar0, "CoDri", 64);
}else{
StringConCat(&cVar0, "Dri", 64);
}
StringConCat(&cVar0, "_", 64);
}
StringIntConCat(&cVar0, iParam2, 64);
StringConCat(&cVar0, "_", 64);
StringIntConCat(&cVar0, iParam3, 64);
StringConCat(&cVar0, "_", 64);
StringIntConCat(&cVar0, iParam4, 64);
return MISC::GET_HASH_KEY(&cVar0);
}


struct<6> func_234(int iParam0){
struct<6> Var0;
switch (iParam0){
case 1:
StringCopy(&Var0, "BuzzerBeater", 24);
break;
case 2:
StringCopy(&Var0, "Carnage", 24);
break;
case 3:
StringCopy(&Var0, "FlagWar", 24);
break;
case 4:
StringCopy(&Var0, "WreckIt", 24);
break;
case 5:
StringCopy(&Var0, "BombBall", 24);
break;
case 6:
StringCopy(&Var0, "GamesMasters", 24);
break;
case 7:
StringCopy(&Var0, "Monsters", 24);
break;
case 8:
StringCopy(&Var0, "HotBomb", 24);
break;
case 9:
StringCopy(&Var0, "TagTeam", 24);
break;
default:
break;
}
return Var0;
}


bool func_235(int iParam0){
return iParam0==74;
}


var func__236(int iParam0){
return (func_238(iParam0) || func_237(iParam0));
}


bool func_237(int iParam0){
return iParam0==44;
}


bool func_238(int iParam0){
return iParam0==45;
}


bool func_239(int iParam0){
return iParam0==12;
}


struct<6> func_240(int iParam0){
struct<6> Var0;
switch (iParam0){
case 38:
StringCopy(&Var0, "HUD_MG_RANGE0", 24);
break;
case 39:
StringCopy(&Var0, "HUD_MG_RANGE1", 24);
break;
case 40:
StringCopy(&Var0, "HUD_MG_RANGE2", 24);
break;
case 41:
StringCopy(&Var0, "HUD_MG_RANGE3", 24);
break;
case 42:
StringCopy(&Var0, "HUD_MG_RANGE4", 24);
break;
case 43:
StringCopy(&Var0, "HUD_MG_RANGE5", 24);
break;
case 44:
StringCopy(&Var0, "HUD_MG_RANGE6", 24);
break;
case 45:
StringCopy(&Var0, "HUD_MG_RANGE7", 24);
break;
case 46:
StringCopy(&Var0, "HUD_MG_RANGE8", 24);
break;
case 47:
StringCopy(&Var0, "HUD_MG_RANGE9", 24);
break;
case 48:
StringCopy(&Var0, "HUD_MG_RANGE10", 24);
break;
case 49:
StringCopy(&Var0, "HUD_MG_RANGE11", 24);
break;
case 50:
StringCopy(&Var0, "HUD_MG_RANGE12", 24);
break;
case 51:
StringCopy(&Var0, "HUD_MG_RANGE13", 24);
break;
case 52:
StringCopy(&Var0, "HUD_MG_RANGE14", 24);
break;
case 53:
StringCopy(&Var0, "HUD_MG_RANGE15", 24);
break;
case 54:
StringCopy(&Var0, "HUD_MG_RANGE16", 24);
break;
case 55:
StringCopy(&Var0, "HUD_MG_RANGE17", 24);
break;
case 206:
StringCopy(&Var0, "HUD_MG_RANGE18", 24);
break;
case 207:
StringCopy(&Var0, "HUD_MG_RANGE19", 24);
break;
case 208:
StringCopy(&Var0, "HUD_MG_RANGE20", 24);
break;
case 209:
StringCopy(&Var0, "HUD_MG_RANGE21", 24);
break;
}
return Var0;
}

int func_241(){
if((((((((((((Global_4718592.f_104427==1 || Global_4718592.f_104427==3) || Global_4718592.f_104427==5) || Global_4718592.f_104427==7) || Global_4718592.f_104427==19) || Global_4718592.f_104427==8) || Global_4718592.f_104427==9) || Global_4718592.f_104427==11) || Global_4718592.f_104427==13) || Global_4718592.f_104427==21) || Global_4718592.f_104427==23) || Global_4718592.f_104427==25) || Global_4718592.f_104427==26){
return 1;
}
return 0;
}

int func_242(var uParam0, int iParam1){
if(!func_426(&(uParam0->f_2))){
func_441(&(uParam0->f_2));
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
if(iParam1 || uParam0->f_8){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 201) || uParam0->f_8){
if(!func_426(&(uParam0->f_5))){
func_441(&(uParam0->f_5));
func_243(uParam0, 1051260355);
}}
if(func_426(&(uParam0->f_5))){
if(func_7(&(uParam0->f_5)) > 0.33f){
func_427(&(uParam0->f_5));
return 0;
}}}
if(uParam0->f_1==-1){
return 1;
}
if(func_7(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1){
if(!func_426(&(uParam0->f_5))){
func_441(&(uParam0->f_5));
func_243(uParam0, 1051260355);
}elseif(func_7(&(uParam0->f_5)) > 0.33f){
func_427(&(uParam0->f_2));
return 0;
}}
return 1;
}


void func_243(var uParam0, float fParam1){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHARD_ANIM_OUT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_9);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_244(var uParam0){
int iVar0;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
if(iVar0 < 40){
if(!PED::IS_PED_INJURED((*uParam0)[1])){
func_4((*uParam0)[1], "DARTS_LOSE", 0, 4);
}}elseif(iVar0 < 70){
if(!PED::IS_PED_INJURED((*uParam0)[0])){
func_4((*uParam0)[0], "GAME_LOSE_SELF", 1, 4);
}}elseif(!PED::IS_PED_INJURED((*uParam0)[1])){
func_4((*uParam0)[1], "GAME_WIN_SELF", 0, 4);
}}


void func_245(var uParam0, int iParam1){
int iVar0;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
if(iVar0 < 30){
if(!PED::IS_PED_INJURED((*uParam0)[0])){
func_4((*uParam0)[0], "DARTS_LOSE", 1, 4);
}}elseif(iVar0 < 50){
if(!PED::IS_PED_INJURED((*uParam0)[1])){
func_4((*uParam0)[1], "DARTS_WIN", 0, 4);
}}elseif(iVar0 < 75 && iParam1){
if(!PED::IS_PED_INJURED((*uParam0)[1])){
func_4((*uParam0)[1], "DARTS_LOSING_BADLY", 0, 4);
}}elseif(iVar0 < 88){
if(!PED::IS_PED_INJURED((*uParam0)[0])){
func_4((*uParam0)[0], "GAME_WIN_SELF", 1, 4);
}}elseif(!PED::IS_PED_INJURED((*uParam0)[1])){
func_4((*uParam0)[1], "GAME_LOSE_SELF", 0, 4);
}}

int func_246(){
int iVar0;
if(!bLocal_155){
iVar0=(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
}else{
iLocal_169++;
iVar0=(iLocal_169 % 2);
}
return iVar0;
}


void func_247(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
char* sVar0;
sVar0=func_248(iParam4);
if(iParam4 !=5){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "RESET_MOVIE");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, sVar0);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_12(sParam2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_441(&(uParam0->f_2));
uParam0->f_1=iParam3;
uParam0->f_9=iParam5;
}


char* func_248(int iParam0){
switch (iParam0){
case 0:
return "SHOW_SHARD_CENTERED_MP_MESSAGE";
case 1:
return "SHOW_SHARD_CENTERED_TOP_MP_MESSAGE";
case 2:
return "SHOW_SHARD_WASTED_MP_MESSAGE";
case 3:
return "SHOW_SHARD_RANKUP_MP_MESSAGE";
case 4:
return "SHOW_SHARD_CREW_RANKUP_MP_MESSAGE";
case 5:
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return "SHOW_COND_SHARD_MESSAGE";
}
return "SHOW_SHARD_MIDSIZED_MESSAGE";
default:
}
return "SHOW_SHARD_CENTERED_MP_MESSAGE";
}


void func_249(var uParam0, int iParam1){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_SCORES");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_250(var uParam0){
uParam0->f_2={
0f, -2.3685f, -0.2f 
};
uParam0->f_5={
0f, 0f, 0f 
};
uParam0->f_8={
0f, 0f, 0f 
};
uParam0->f_20=0;
uParam0->f_23=0;
uParam0->f_24=0;
uParam0->f_25=0;
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
OBJECT::DELETE_OBJECT(uParam0);
}
return 1;
}


void func_251(int iParam0){
CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_77, uLocal_75, 1500, 1, 1);
CAM::SET_CAM_ACTIVE(uLocal_78, 1);
CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_77, uLocal_78, 8000, 1, 1);
CAM::ATTACH_CAM_TO_ENTITY(uLocal_80, iParam0, -0.0301f, 1.498f, 0.7435f, 1);
CAM::POINT_CAM_AT_ENTITY(uLocal_80, iParam0, 0.0557f, -1.4905f, 0.4958f, 1);
CAM::SET_CAM_FOV(uLocal_80, 35f);
}


void func_252(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4){
bool bVar0;
if(!CAM::IS_CAM_INTERPOLATING(uLocal_75)){
bVar0=false;
func_333(uParam0);
if(!bLocal_147){
if(uParam0->f_1==5){
if(uParam3->f_672){
HUD::CLEAR_HELP(1);
uParam3->f_672=0;
}}elseif(!bLocal_107){
if(func_3(&(uParam3->f_666), 18)){
if(!func_3(&(uParam3->f_666), 21)){
if(!MISC::IS_BIT_SET(Global_113609, 3)){
func_424("DARTS_INSTR_W", -1);
MISC::SET_BIT(&Global_113609, 3);
}
func_337(&(uParam3->f_666), 21, 1);
}elseif(!func_3(&(uParam3->f_666), 20) && func_3(&(uParam3->f_666), 19)){
if(!MISC::IS_BIT_SET(Global_113609, 4)){
func_424("DARTS_INSTR_B", -1);
MISC::SET_BIT(&Global_113609, 4);
}
func_337(&(uParam3->f_666), 20, 1);
}}
uParam3->f_672=1;
}elseif(uParam3->f_672){
HUD::CLEAR_HELP(1);
uParam3->f_672=0;
}}
if(uParam0->f_1==1){
if(!CAM::IS_CAM_INTERPOLATING(uLocal_84) && uParam0->f_3==2){
func_332(uParam3);
}}else{
func_330(uParam3, iLocal_30);
}
func_329(&(uParam0->f_1));
}else{
bVar0=true;
}
func_326(uParam3);
switch (uParam0->f_1){
case 1:
if(!func_318(&(uParam0->f_3))){
uParam0->f_1=2;
}
break;
case 0:
if(func_311(uParam0->f_422[iLocal_30], &(uParam0->f_243), &(uParam0->f_4), &(uParam0->f_461))){
uParam0->f_1=2;
}
break;
case 2:
if(PAD::IS_CONTROL_PRESSED(2, 228) && iLocal_30==0){
uParam0->f_1=1;
}
if(iLocal_30==0){
func_310(iLocal_31, 0);
if(((((!func_309("DARTS_SHT_USE") && !func_309("DARTS_INSTR_W")) && !func_309("DARTS_INSTR_B")) && !func_309("DARTS_AIM_HLP")) && !func_309("DARTS_STD_HLP")) && !func_309("DARTS_FST_HLP")){
if(func_3(&(uParam3->f_666), 24)){
func_424("DARTS_LEVEL", -1);
MISC::SET_BIT(&(Global_113648.f_18972.f_6), iLocal_167);
func_337(&(uParam3->f_666), 24, 0);
}}
if((((uParam0->f_422[iLocal_30] % 2)==0 && uParam0->f_422[iLocal_30] < 41) && iLocal_31==0) && !iLocal_145){
if(!func_3(&(uParam3->f_666), 6)){
func_337(&(uParam3->f_666), 6, 1);
}
iLocal_145=1;
}elseif(uParam0->f_422[iLocal_30]==50 && !iLocal_145){
if(!func_3(&(uParam3->f_666), 6)){
func_337(&(uParam3->f_666), 6, 1);
}
iLocal_145=1;
}elseif(func_299(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam1, bVar0, 0, 0, uParam0->f_248)){
HUD::CLEAR_PRINTS();
uParam3->f_670=(uParam3->f_670 - 1);
uParam0->f_1=3;
}elseif(!iLocal_142){
if(!func_426(uParam4)){
func_297(uParam4);
}elseif(func_7(uParam4) > 20f){
func_296(uLocal_138[(1 - iLocal_30)]);
func_427(uParam4);
iLocal_142=1;
}}}elseif(iLocal_31==0){
iLocal_165=0;
func_295(&(uParam0->f_422), &(uParam0->f_249));
func_292(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
}elseif(timera() > MISC::GET_RANDOM_INT_IN_RANGE(1250, 2500)){
func_295(&(uParam0->f_422), &(uParam0->f_249));
func_292(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
}
break;
case 3:
if(func_279(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_248, 0)){
uParam0->f_436++;
uParam0->f_455=func_278(uParam0);
uParam0->f_1=4;
}
break;
case 4:
if(!func_3(&(uParam3->f_666), 5)){
func_276(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_455);
}
func_261(uParam0, uParam3);
break;
case 5:
func_254(uParam0, uParam2, uParam3);
if(func_426(uParam4)){
func_427(uParam4);
}
break;
case 6:
func_253(uParam0, uParam3);
break;
}}


void func_253(var uParam0, var uParam1){
struct<3> Var0;
float fVar1;
int iVar2;
float fVar3;
iLocal_165++;
iLocal_30=1;
iLocal_31=0;
iLocal_149=1;
while (iLocal_31 < 3 && uParam0->f_1==6){
if(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23){
if(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_25){
iLocal_31++;
}else{
func_276(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
func_261(uParam0, uParam1);
}}elseif(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24){
if(bLocal_148){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/])){
OBJECT::DELETE_OBJECT(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]));
}}else{
uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23=1;
uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24=0;
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) 
};
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/])){
ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], Var0, 1, 0, 0, 1);
}}
func_276(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
func_261(uParam0, uParam1);
if(bLocal_148){
if(iLocal_150){
uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]=OBJECT::CREATE_OBJECT(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_1, Local_40, 1, 1, 0);
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) 
};
ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], Var0, 1, 0, 0, 1);
fVar1=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17={
90f, fVar1, uParam0->f_243.f_4 
};
ENTITY::SET_ENTITY_ROTATION(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17, 0, 1);
uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23=1;
uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24=0;
}}}else{
func_295(&(uParam0->f_422), &(uParam0->f_249));
func_292(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
uParam0->f_436++;
func_276(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
if((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21==2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20==50) && uParam0->f_422[iLocal_30]==0){
if(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20==50){
uParam0->f_432[iLocal_30]++;
}
func_337(&(uParam1->f_666), 2, 0);
func_337(&(uParam1->f_666), 3, 0);
func_337(&(uParam1->f_666), 4, 0);
func_337(&(uParam1->f_666), 5, 1);
settimerb(0);
}
func_261(uParam0, uParam1);
if(bLocal_148){
if(iLocal_150){
iVar2=0;
while (iVar2 < iLocal_31 + 1){
if(!uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_23){
uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/]=OBJECT::CREATE_OBJECT(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_1, Local_40, 1, 1, 0);
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11.f_2) 
};
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/])){
ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/], Var0, 1, 0, 0, 1);
}
fVar3=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_17={
90f, fVar3, uParam0->f_243.f_4 
};
ENTITY::SET_ENTITY_ROTATION(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_17, 0, 1);
uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_23=1;
uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_24=0;
}
iVar2++;
}}}}}
uParam0->f_1=5;
if(iLocal_165 > 2){
uParam0->f_1=5;
}}


void func_254(var uParam0, var uParam1, var uParam2){
struct<3> Var0;
int iVar1;
switch (uParam0->f_2){
case 0:
if(uParam0->f_248==1){
func_260();
}
if(iLocal_30==0){
if(func_3(&(uParam2->f_666), 3)){
func_259("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
}elseif(func_3(&(uParam2->f_666), 4)){
func_258("DARTS_ONE_PT", 5000, 0);
}elseif(func_3(&(uParam2->f_666), 2)){
func_259("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
}else{
func_259("DARTS_SWITCH_C", uParam0->f_422[iLocal_30], 5000, 0);
}}elseif(func_3(&(uParam2->f_666), 3)){
func_259("DARTS_OPP_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
}elseif(func_3(&(uParam2->f_666), 4)){
func_258("DARTS_ONE_PT", 5000, 0);
}elseif(func_3(&(uParam2->f_666), 2)){
func_259("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
}else{
func_259("DARTS_SWITCH_B", uParam0->f_422[iLocal_30], 5000, 0);
}
settimerb(0);
uParam0->f_2=2;
break;
case 1:
if(PAD::IS_CONTROL_JUST_PRESSED(2, 190)){
iLocal_163++;
if(iLocal_163 >=uParam0->f_436){
iLocal_163=0;
}
Var0={
ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], 1) 
};
func_53(Var0);
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 189)){
iLocal_163=(iLocal_163 - 1);
if(iLocal_163 < 0){
iLocal_163=(uParam0->f_436 - 1);
}
Var0={
ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], 1) 
};
func_53(Var0);
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 202)){
Var0={
ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], 1) 
};
func_55(Var0, 0, 0);
uParam0->f_2=2;
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 201)){
iLocal_139=1;
uParam0->f_2=2;
}
break;
case 2:
if(PAD::IS_CONTROL_JUST_PRESSED(2, 201) || (iLocal_149 && bLocal_148)){
iLocal_139=1;
}
if((PAD::IS_CONTROL_JUST_PRESSED(2, 189) || PAD::IS_CONTROL_JUST_PRESSED(2, 190)) && uParam0->f_248==1){
Var0={
ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], 1) 
};
func_55(Var0, 1, 0);
uParam0->f_2=1;
}
if(!func_3(&(uParam2->f_666), 6)){
if(!iLocal_144){
if(func_257(iLocal_30==0, &(uLocal_138[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1])){
iLocal_144=1;
}}elseif((MISC::GET_GAME_TIMER() % 500) < 50){
}}elseif(!iLocal_144){
if(func_256(iLocal_30==0, &(uLocal_138[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1])){
iLocal_144=1;
}}elseif((MISC::GET_GAME_TIMER() % 500) < 50){
}
if(iLocal_139 || timerb() > 2000){
iLocal_149=0;
iVar1=0;
while (iVar1 < 3){
func_250(&(uParam0->f_5[iLocal_30 /*79*/][iVar1 /*26*/]));
iVar1++;
}
if(uParam0->f_425[iLocal_30] !=uParam0->f_422[iLocal_30]){
func_255(uParam1, iLocal_30, uParam0->f_422[iLocal_30]);
AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCOREBOARD_MASTER", uParam0->f_243.f_1, 0, 0, 0, 0);
}
uParam0->f_425[iLocal_30]=uParam0->f_422[iLocal_30];
iLocal_31=0;
uParam0->f_428=0;
if(iLocal_30==0){
iLocal_30=1;
}else{
iLocal_30=0;
}
func_440(uParam1, iLocal_30);
iLocal_54=0;
func_419();
if(!bLocal_148){
HUD::CLEAR_SMALL_PRINTS();
}
iLocal_48=0;
uParam2->f_670=3;
iLocal_145=0;
iLocal_142=0;
iLocal_144=0;
iLocal_139=0;
iLocal_163=0;
uParam0->f_436=0;
uParam0->f_1=2;
uParam0->f_2=0;
}
break;
}}


void func_255(var uParam0, int iParam1, int iParam2){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_DARTS_SCORE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_256(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4){
var uVar0;
int iVar1;
int iVar2;
if(bParam0){
if((iParam2 > 30 && bParam0) || iParam3 < 20){
MISC::SET_BIT(&uVar0, 0);
}
if((iParam2 <=30 && bParam0) || iParam3 >=20){
MISC::SET_BIT(&uVar0, 2);
}}else{
if((iParam2 > 20 && !bParam0) || iParam4 < 30){
MISC::SET_BIT(&uVar0, 1);
}
if((iParam2 <=20 && !bParam0) || iParam4 >=30){
MISC::SET_BIT(&uVar0, 3);
}}
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
iVar2=MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
if(iVar2 < 85){
if(MISC::IS_BIT_SET(uVar0, 0)){
if(iVar1 < 50){
func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_SELF", 1, 4);
}elseif(iVar1 < 75){
func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
}elseif(iVar1 < 100){
func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
}
return 1;
}elseif(MISC::IS_BIT_SET(uVar0, 2)){
if(iVar1 < 50){
func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_SELF", 1, 4);
}elseif(iVar1 < 68){
func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
}elseif(iVar1 < 86){
func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
}elseif(iVar1 < 100){
func_4(*uParam1, "GAME_HECKLE", 0, 4);
}
return 1;
}elseif(MISC::IS_BIT_SET(uVar0, 1)){
if(iVar1 < 50){
func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_OTHER", 1, 4);
}elseif(iVar1 < 75){
func_4(*uParam1, "DARTS_HAPPY", 0, 4);
}elseif(iVar1 < 100){
func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
}
return 1;
}elseif(MISC::IS_BIT_SET(uVar0, 3)){
if(iVar1 < 50){
func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_OTHER", 1, 4);
}elseif(iVar1 < 100){
func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
}
return 1;
}}
return 0;
}

int func_257(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4){
var uVar0;
int iVar1;
int iVar2;
if(bParam0){
if((iParam2 > 100 && bParam0) || (iParam4 - iParam3) > 75){
MISC::SET_BIT(&uVar0, 0);
}
if((iParam2 < 70 && bParam0) || (iParam3 - iParam4) < 50){
MISC::SET_BIT(&uVar0, 2);
}}else{
if((iParam2 > 75 && !bParam0) || (iParam3 - iParam4) > 50){
MISC::SET_BIT(&uVar0, 1);
}
if((iParam2 < 40 && !bParam0) || (iParam4 - iParam3) < 30){
MISC::SET_BIT(&uVar0, 3);
}}
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
iVar2=MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
if(iVar2 < 75){
if(MISC::IS_BIT_SET(uVar0, 0)){
if(iVar1 < 35){
func_4(PLAYER::PLAYER_PED_ID(), "DARTS_HAPPY", 1, 4);
}elseif(iVar1 < 70){
func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
}elseif(iVar1 < 85){
func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_SELF", 1, 4);
}else{
func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
}
return 1;
}elseif(MISC::IS_BIT_SET(uVar0, 2)){
if(iVar1 < 50){
func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_SELF", 1, 4);
}elseif(iVar1 < 68 && !ENTITY::DOES_ENTITY_EXIST(func_504())){
func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
}elseif(iVar1 < 86){
func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
}elseif(iVar1 < 100){
func_4(*uParam1, "GAME_HECKLE", 0, 4);
}
return 1;
}elseif(MISC::IS_BIT_SET(uVar0, 1)){
if(iVar1 < 40){
func_4(PLAYER::PLAYER_PED_ID(), "DARTS_PLAYING_WELL", 1, 4);
}elseif(iVar1 < 60){
func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_OTHER", 1, 4);
}elseif(iVar1 < 80){
func_4(*uParam1, "DARTS_HAPPY", 0, 4);
}elseif(iVar1 < 100){
func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
}
return 1;
}elseif(MISC::IS_BIT_SET(uVar0, 3)){
if(iVar1 < 33){
func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_OTHER", 1, 4);
}elseif(iVar1 < 66){
func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
}elseif(iVar1 < 100){
func_4(PLAYER::PLAYER_PED_ID(), "GAME_HECKLE", 1, 4);
}
return 1;
}}
return 0;
}


void func_258(char* sParam0, int iParam1, int iParam2){
iParam2=iParam2;
HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}


void func_259(char* sParam0, int iParam1, int iParam2, int iParam3){
iParam3=iParam3;
HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
HUD::END_TEXT_COMMAND_PRINT(iParam2, 1);
}


void func_260(){
CAM::SET_CAM_ACTIVE(uLocal_84, 1);
CAM::SET_CAM_ACTIVE(uLocal_75, 0);
}


void func_261(var uParam0, var uParam1){
uParam0->f_455=0;
if(!func_3(&(uParam1->f_666), 5)){
uParam0->f_422[iLocal_30]=(uParam0->f_422[iLocal_30] - uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
uParam0->f_428=(uParam0->f_428 + uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
}
if(func_3(&(uParam1->f_666), 5)){
func_273(uParam0);
func_337(&(uParam1->f_666), 5, 0);
}else{
uParam0->f_429[iLocal_30]++;
if(iLocal_30==0){
func_271(4);
iLocal_106[10]++;
}
if((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21==2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20==50) && uParam0->f_422[iLocal_30]==0){
if(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20==50){
uParam0->f_432[iLocal_30]++;
if(iLocal_30==0){
func_271(0);
iLocal_106[1]++;
}}
func_337(&(uParam1->f_666), 2, 0);
func_337(&(uParam1->f_666), 3, 0);
func_337(&(uParam1->f_666), 4, 0);
func_337(&(uParam1->f_666), 5, 1);
func_273(uParam0);
func_337(&(uParam1->f_666), 5, 0);
settimerb(0);
}elseif((uParam0->f_422[iLocal_30]==1 || uParam0->f_422[iLocal_30] < 0) || (uParam0->f_422[iLocal_30]==0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 !=2)){
if(uParam0->f_422[iLocal_30]==0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 !=2){
func_259("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
func_337(&(uParam1->f_666), 3, 1);
}elseif(uParam0->f_422[iLocal_30]==1){
func_337(&(uParam1->f_666), 4, 1);
}elseif(iLocal_30==1){
func_259("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
}else{
func_259("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
}
if(!iLocal_144){
if(func_270(uLocal_138[(1 - iLocal_30)])){
iLocal_144=1;
}}
uParam0->f_422[iLocal_30]=uParam0->f_425[iLocal_30];
if(uParam0->f_1==6){
}
settimera(0);
uParam0->f_1=5;
if(iLocal_30==0){
uParam0->f_435++;
}
func_337(&(uParam1->f_666), 2, 1);
}else{
if(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20==50){
uParam0->f_432[iLocal_30]++;
if(iLocal_30==0){
func_269(uParam1, 1);
func_271(0);
iLocal_106[1]++;
}
if(!iLocal_144 && !iLocal_149){
if(func_268(uLocal_138[iLocal_30])){
iLocal_144=1;
}}}
if(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20==0){
if(!iLocal_144 && !iLocal_149){
func_267(uLocal_138[(1 - iLocal_30)]);
iLocal_144=1;
}}
if(uParam0->f_428==180){
if(!iLocal_144 && !iLocal_149){
if(func_266(uLocal_138[1], iLocal_30==0)){
iLocal_144=1;
}}
if(iLocal_30==0){
func_269(uParam1, 0);
func_271(1);
iLocal_106[2]++;
}}
if(uParam0->f_428==140){
if(!iLocal_144 && !iLocal_149){
if(func_264(uLocal_138[iLocal_30], iLocal_30==0)){
iLocal_144=1;
}}}
if(iLocal_30==0){
if(iLocal_31 < 2){
if(uParam0->f_422[iLocal_30] <=170 && !func_3(&(uParam1->f_666), 18)){
func_337(&(uParam1->f_666), 18, 1);
}
if(!func_3(&(uParam1->f_666), 19) && func_3(&(uParam1->f_666), 21)){
func_337(&(uParam1->f_666), 19, 1);
}
if(((uParam0->f_422[iLocal_30] < 41 && uParam0->f_422[iLocal_30] > 0) && (uParam0->f_422[iLocal_30] % 2)==0) || uParam0->f_422[iLocal_30]==50){
if(uParam0->f_422[iLocal_30]==50){
}
if(!iLocal_143){
func_263(uLocal_138[1]);
iLocal_143=1;
}
if(!uParam0->f_456){
uParam0->f_456=1;
}
if(!func_3(&(uParam1->f_666), 6)){
func_337(&(uParam1->f_666), 6, 1);
}}elseif(uParam0->f_456){
uParam0->f_456=0;
}}}
if(iLocal_30==0 && iLocal_31 < 2){
func_262("DARTS_REMAIN", (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[iLocal_30], 7500, 0);
}elseif(iLocal_30==1 && iLocal_31==2){
}elseif(uParam0->f_1 !=6){
func_329(&(uParam0->f_1));
}
uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_25=1;
iLocal_31++;
settimera(0);
if(uParam0->f_1 !=6){
if(uParam0->f_456 && uParam0->f_248==1){
uParam0->f_1=0;
}else{
uParam0->f_1=2;
}}
if(iLocal_31==3){
iLocal_31=2;
uParam0->f_1=5;
}
if(iLocal_30==0){
uParam0->f_435=0;
}
func_337(&(uParam1->f_666), 3, 0);
func_337(&(uParam1->f_666), 2, 0);
func_337(&(uParam1->f_666), 4, 0);
}}}


void func_262(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4){
iParam4=iParam4;
HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
HUD::END_TEXT_COMMAND_PRINT(iParam3, 1);
}


void func_263(int iParam0){
if(!PED::IS_PED_INJURED(iParam0)){
func_4(iParam0, "DARTS_1_DART_AWAY", 0, 4);
}}

int func_264(int iParam0, bool bParam1){
int iVar0;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
if(iVar0 < 75){
if(ENTITY::DOES_ENTITY_EXIST(func_504())){
if(bParam1){
func_4(PLAYER::PLAYER_PED_ID(), "DARTS_140", 1, 4);
}else{
func_4(func_504(), "DARTS_140", 0, 4);
}
return 1;
}elseif(bParam1){
if(func_265()){
func_4(PLAYER::PLAYER_PED_ID(), "DARTS_140", 1, 4);
}else{
func_4(iParam0, "DARTS_140", 0, 4);
}
return 1;
}}
return 0;
}

int func_265(){
if(MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0)){
return 1;
}
return 0;
}

int func_266(int iParam0, bool bParam1){
int iVar0;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
if(iVar0 < 75){
if(ENTITY::DOES_ENTITY_EXIST(func_504())){
if(bParam1){
func_4(PLAYER::PLAYER_PED_ID(), "DARTS_180", 1, 4);
}else{
func_4(func_504(), "DARTS_180", 0, 4);
}
return 1;
}elseif(bParam1){
if(func_265()){
func_4(PLAYER::PLAYER_PED_ID(), "DARTS_180", 1, 4);
}else{
func_4(iParam0, "DARTS_180", 0, 4);
}
return 1;
}}
return 0;
}

int func_267(int iParam0){
int iVar0;
int iVar1;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
if(iVar0 < 75){
if(iParam0==PLAYER::PLAYER_PED_ID()){
iVar1=1;
}
if(!PED::IS_PED_INJURED(iParam0)){
func_4(iParam0, "DARTS_MISS_BOARD", iVar1, 4);
}
return 1;
}
return 0;
}

int func_268(int iParam0){
int iVar0;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
if(iVar0 < 100){
func_4(iParam0, "DARTS_BULLSEYE", 0, 4);
return 1;
}
return 0;
}


void func_269(var uParam0, int iParam1){
uParam0->f_679=1;
uParam0->f_682=iParam1;
}

int func_270(int iParam0){
int iVar0;
if(iParam0==PLAYER::PLAYER_PED_ID()){
iVar0=1;
}
if(!PED::IS_PED_INJURED(iParam0)){
func_4(iParam0, "DARTS_BUST", iVar0, 4);
}
return 1;
}


void func_271(int iParam0){
switch (iParam0){
case 0:
Global_113648.f_18972++;
func_272("DARTS_STAT_NUM_BULLSEYES", Global_113648.f_18972);
break;
case 1:
Global_113648.f_18972.f_1++;
func_272("DARTS_STAT_NUM_180S", Global_113648.f_18972.f_1);
break;
case 2:
Global_113648.f_18972.f_2++;
func_272("DARTS_STAT_NUM_WINS", Global_113648.f_18972.f_2);
break;
case 3:
Global_113648.f_18972.f_3++;
func_272("DARTS_STAT_NUM_LOSS", Global_113648.f_18972.f_3);
break;
case 4:
Global_113648.f_18972.f_4++;
func_272("DARTS_STAT_DARTS_THROWN", Global_113648.f_18972.f_4);
break;
case 5:
Global_113648.f_18972.f_5++;
func_272("DARTS_STAT_NUM_GAMES", Global_113648.f_18972.f_5);
break;
case 7:
Global_113648.f_18972.f_7=(to_float(Global_113648.f_18972.f_2) / to_float(Global_113648.f_18972.f_5));
break;
case 8:
Global_113648.f_18972.f_8=(to_float(Global_113648.f_18972.f_4) / to_float(Global_113648.f_18972.f_5));
break;
}}


void func_272(char* sParam0, var uParam1){
}


void func_273(var uParam0){
if(!uParam0->f_460){
uParam0->f_460=1;
}
func_271(5);
HUD::CLEAR_SMALL_PRINTS();
HUD::CLEAR_HELP(1);
if(AUDIO::IS_AUDIO_SCENE_ACTIVE(func_420(2))){
AUDIO::STOP_AUDIO_SCENE(func_420(2));
}
if(uParam0->f_248==1){
func_260();
}
if(iLocal_30==0){
uParam0->f_454=1;
iLocal_153=1;
uParam0->f_446[iLocal_30]++;
uParam0->f_437[iLocal_30]++;
func_271(2);
iLocal_106[8]++;
}else{
uParam0->f_454=0;
uParam0->f_446[iLocal_30]++;
uParam0->f_437[iLocal_30]++;
func_271(3);
iLocal_106[9]++;
}
func_271(7);
func_441(&(uParam0->f_254));
if(func_275(uParam0)){
uParam0->f_449[0]=0;
uParam0->f_449[1]=0;
uParam0->f_446[0]=0;
uParam0->f_446[1]=0;
uParam0->f_443[iLocal_30]++;
if(!uParam0->f_458){
if(uParam0->f_454){
func_274(1);
}
uParam0->f_458=1;
}
if(uParam0->f_454){
iLocal_106[3]++;
iLocal_171=0;
}else{
iLocal_106[5]++;
iLocal_171=3;
}
*uParam0=12;
}else{
*uParam0=11;
}
uParam0->f_1=2;
AUDIO::START_AUDIO_SCENE(func_420(3));
iLocal_150=1;
uParam0->f_428=0;
iLocal_54=0;
uParam0->f_425[0]=301;
uParam0->f_425[1]=301;
}


void func_274(bool bParam0){
char* sVar0;
AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
switch (func_91()){
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

int func_275(var uParam0){
int iVar0;
int iVar1;
iVar0=func_116(uParam0->f_454, 0, 1);
switch (uParam0->f_452){
case 1:
iVar1=1;
break;
case 3:
iVar1=2;
break;
case 5:
iVar1=3;
break;
}
if(uParam0->f_446[iVar0]==iVar1){
uParam0->f_449[iVar0]++;
uParam0->f_440[iVar0]++;
uParam0->f_446[0]=0;
uParam0->f_446[1]=0;
uParam0->f_459=1;
if(iVar0==0){
iLocal_106[6]++;
}
if(uParam0->f_449[iVar0]==uParam0->f_453){
uParam0->f_459=0;
return 1;
}}
return 0;
}


void func_276(var uParam0, var uParam1, bool bParam2){
float fVar0;
float fVar1;
float fVar2;
struct<3> Var3;
int iVar4;
int iVar5;
Var3={
uParam0->f_8 
};
Var3.f_0=(Var3.f_0 + 0.0041f);
Var3.f_2=(Var3.f_2 + 0.0002f);
fVar1=MISC::GET_ANGLE_BETWEEN_2D_VECTORS(0f, 1f, Var3.f_0, Var3.f_2);
fVar0=func_277(Var3);
uParam0->f_22=fVar0;
if(bParam2){
AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_DART_MASTER", uParam1->f_1, 0, 0, 0, 0);
}
if(fVar0 < 0.009f){
AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BULLSEYE_MASTER", uParam1->f_1, 0, 0, 0, 0);
uParam0->f_20=50;
}elseif(fVar0 < 0.021f){
AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
uParam0->f_20=25;
}elseif(fVar0 > 0.3f){
AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_WALL_MASTER", uParam1->f_1, 0, 0, 0, 0);
uParam0->f_20=0;
}elseif(fVar0 >=0.226f){
AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
uParam0->f_20=0;
}else{
if(fVar0 > 0.1285f && fVar0 < 0.1405f){
uParam0->f_21=3;
AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCORE_TRIPLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
}elseif(fVar0 > 0.2132f && fVar0 < 0.226f){
uParam0->f_21=2;
AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCORE_DOUBLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
}else{
uParam0->f_21=1;
AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
}
if(uParam0->f_8 < 0f){
fVar1=(360f - fVar1);
}
fVar2=0f;
iVar4=0;
iVar4=0;
while (iVar4 < 21){
if(fVar1 >=(fVar2 - 9f) && fVar1 < (fVar2 + 9f)){
if((fVar1 <=(fVar2 - 8.1f) && fVar1 >=(fVar2 - 9.9f)) || (fVar1 >=(fVar2 + 8.1f) && fVar1 <=(fVar2 + 9.9f))){
AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_WIRE_MASTER", uParam1->f_1, 0, 0, 0, 0);
}
iVar5=(iLocal_33[iVar4] * uParam0->f_21);
uParam0->f_20=iVar5;
}
fVar2=(fVar2 + 18f);
iVar4++;
}}}


float func_277(struct<3> Param0){
return sqrt(((Param0.f_0 * Param0.f_0) + (Param0.f_2 * Param0.f_2)));
}

int func_278(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < iLocal_31){
if(((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 - 0.008f) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 + 0.008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 - 0.008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 + 0.008f)){
return 1;
}
iVar0++;
}
return 0;
}

int func_279(var uParam0, var uParam1, int iParam2, bool bParam3){
struct<3> Var0;
struct<3> Var1;
float fVar2;
if(iLocal_30==0 && iParam2==1){
func_280("Darts", "Dart_Reticules", &Local_39, 1, 0, 4, 0);
}
fVar2=MISC::GET_FRAME_TIME();
Var1={
uParam0->f_5 * Vector(fVar2, fVar2, fVar2) * Vector(8.5f, 8.5f, 8.5f) 
};
uParam0->f_2={
uParam0->f_2 - Var1 
};
if(uParam0->f_2.f_1 > (uParam0->f_8.f_1 - 0.04f)){
uParam0->f_23=1;
uParam0->f_24=0;
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_11, (uParam0->f_11.f_1 + fLocal_34), uParam0->f_11.f_2) 
};
ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, 1, 0, 0, 1);
return 1;
}
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_34), uParam0->f_2.f_2) 
};
ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, 1, 0, 0, 1);
uParam0->f_17.f_1=(uParam0->f_17.f_1 + (1000f * fVar2));
ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_17, 0, 1);
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(bParam3){
}}else{
return 1;
}
return 0;
}


void func_280(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6){
struct<9> Var0;
Var0={
*uParam2 
};
switch (iParam4){
case 0:
func_291(&Var0);
break;
case 1:
func_290(&Var0);
break;
case 5:
func_289(&Var0);
break;
case 6:
func_288(&Var0);
break;
case 7:
func_287(&Var0);
break;
case 8:
func_286(&Var0);
break;
case 9:
func_285(&Var0);
break;
}
if(func_283()){
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
if(iParam3==1){
GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_282(Var0.f_0), func_281(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6, 0);
}else{
GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_282(Var0.f_0), func_281(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6, 0);
}
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
}}


float func_281(float fParam0){
return (fParam0 + fLocal_13);
}


float func_282(float fParam0){
return (fParam0 + fLocal_12);
}

int func_283(){
if(func_284()){
return 1;
}
if(CAM::IS_SCREEN_FADED_OUT()){
return 0;
}
if(CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()){
return 0;
}
if(MISC::IS_FRONTEND_FADING()){
return 0;
}
return 1;
}


bool func_284(){
return Global_1574604;
}


void func_285(var uParam0){
uParam0->f_4=128;
uParam0->f_5=128;
uParam0->f_6=128;
}


void func_286(var uParam0){
uParam0->f_7=2;
}


void func_287(var uParam0){
uParam0->f_7=5;
}


void func_288(var uParam0){
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=70;
}


void func_289(var uParam0){
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=100;
}


void func_290(var uParam0){
uParam0->f_4=(uParam0->f_4 - 50);
uParam0->f_5=(uParam0->f_5 - 50);
uParam0->f_6=(uParam0->f_6 - 50);
}


void func_291(var uParam0){
uParam0->f_4=uParam0->f_4;
uParam0->f_5=uParam0->f_5;
uParam0->f_6=uParam0->f_6;
uParam0->f_7=uParam0->f_7;
}


void func_292(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
int iVar5;
int iVar6;
struct<3> Var7;
struct<3> Var8;
float fVar9;
if(*uParam3==50){
fVar3=0f;
fVar4=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
}elseif(*uParam3==25){
fVar3=0.14f;
fVar4=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
}else{
if(uParam3->f_1==3){
fVar3=0.1345f;
}elseif(uParam3->f_1==2){
fVar3=0.218f;
}else{
fVar3=0.18f;
}
fVar9=0f;
iVar5=0;
iVar5=0;
while (iVar5 < 21){
if(*uParam3==iLocal_33[iVar5]){
fVar4=fVar9;
}
fVar9=(fVar9 + 18f);
iVar5++;
}}
if(!bParam4 && uParam3->f_3 < 30){
iVar5=MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
iVar6=MISC::GET_RANDOM_INT_IN_RANGE(func_294(uParam3), 150);
if(uParam3->f_2 > 140){
fVar0=MISC::GET_RANDOM_FLOAT_IN_RANGE(-35f, 35f);
}elseif(iVar5 < iVar6 && uParam3->f_4==2){
fVar0=MISC::GET_RANDOM_FLOAT_IN_RANGE(-80f, 80f);
}elseif(iVar5 < iVar6 && uParam3->f_2 > -140){
fVar0=MISC::GET_RANDOM_FLOAT_IN_RANGE(-60f, 60f);
}else{
fVar0=MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
if(fVar0 > 0f){
fVar0=MISC::GET_RANDOM_FLOAT_IN_RANGE(-200f, -60f);
}else{
fVar0=MISC::GET_RANDOM_FLOAT_IN_RANGE(60f, 200f);
}}
fVar0=(fVar0 / 10f);
fVar4=(fVar4 + fVar0);
iVar5=MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
iVar6=MISC::GET_RANDOM_INT_IN_RANGE(func_294(uParam3), 150);
if(uParam3->f_2 > 140){
fVar0=MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.25f, 0.25f);
}elseif(iVar5 < iVar6 && uParam3->f_4==2){
fVar0=MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.07f, 0.07f);
}elseif(iVar5 < iVar6 && uParam3->f_2 > -140){
fVar0=MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.15f, 0.15f);
}else{
fVar0=MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
if(fVar0 > 0f){
fVar0=MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, -0.3f);
}else{
fVar0=MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 1f);
}}
fVar0=(fVar0 / 10f);
fVar3=(fVar3 + fVar0);
}
uParam0->f_8=(sin(fVar4) * fVar3);
uParam0->f_8.f_1=-0.23f;
uParam0->f_8.f_2=(cos(fVar4) * fVar3);
uParam0->f_8=(uParam0->f_8 - 0.0035f);
uParam0->f_8.f_2=(uParam0->f_8.f_2 - 0.0002f);
if(*uParam2==6){
func_293(uParam0);
}else{
uParam0->f_23=0;
uParam0->f_24=1;
func_293(uParam0);
*uParam0=OBJECT::CREATE_OBJECT(uParam0->f_1, Local_40, 0, 0, 0);
fVar1=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
Var7={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, Local_41) 
};
Var8={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_34), uParam0->f_8.f_2) 
};
fVar2=MISC::GET_HEADING_FROM_VECTOR_2D((Var7.f_0 - Var8.f_0), (Var7.f_1 - Var8.f_1));
fVar2=(fVar2 - 180f);
uParam0->f_17={
90f, fVar1, fVar2 
};
ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_17, 0, 1);
uParam0->f_2={
Local_41 
};
*uParam2=3;
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
}}


void func_293(var uParam0){
struct<3> Var0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
fVar4=0.08f;
uParam0->f_8.f_1=-0.213f;
Var0={
Local_41 - uParam0->f_8 
};
fVar1=vmag(Var0);
uParam0->f_5={
Var0 / Vector(fVar1, fVar1, fVar1) 
};
fVar2=MISC::GET_HEADING_FROM_VECTOR_2D(uParam0->f_5, uParam0->f_5.f_1);
uParam0->f_17.f_2=(fVar2 - 180f);
fVar3=(MISC::TAN(uParam0->f_17.f_2) * fVar4);
uParam0->f_11={
uParam0->f_8 
};
uParam0->f_11=(uParam0->f_11 + fVar3);
Var0={
Local_41 - uParam0->f_11 
};
fVar1=vmag(Var0);
uParam0->f_5={
Var0 / Vector(fVar1, fVar1, fVar1) 
};
}

int func_294(var uParam0){
switch (uParam0->f_4){
case 0:
return 25;
case 1:
return 75;
case 2:
return 90;
default:
}
return 25;
}


void func_295(var uParam0, var uParam1){
int iVar0;
*uParam1=0;
uParam1->f_1=0;
uParam1->f_2=((*uParam0)[1] - (*uParam0)[0]);
uParam1->f_3++;
if((*uParam0)[iLocal_30] > 121){
*uParam1=20;
uParam1->f_1=3;
}elseif((*uParam0)[iLocal_30] > 60){
if(((*uParam0)[iLocal_30] % 2)==1){
if(func_265()){
*uParam1=19;
}else{
*uParam1=17;
}
uParam1->f_1=3;
}else{
*uParam1=20;
uParam1->f_1=3;
}}elseif((*uParam0)[iLocal_30] < 61){
if((*uParam0)[iLocal_30]==50){
*uParam1=50;
uParam1->f_1=1;
}elseif((*uParam0)[iLocal_30] > 52){
*uParam1=((*uParam0)[iLocal_30] - 40);
uParam1->f_1=1;
}elseif((*uParam0)[iLocal_30] > 40){
*uParam1=((*uParam0)[iLocal_30] - 32);
uParam1->f_1=1;
}elseif(((*uParam0)[iLocal_30] % 2)==0){
iVar0=1;
iVar0=0;
while (iVar0 < 20){
*uParam1=((*uParam0)[iLocal_30] / 2);
uParam1->f_1=2;
iVar0++;
}}else{
iVar0=32;
while (*uParam1==0 && iVar0 > 1){
if((*uParam0)[iLocal_30] > iVar0){
*uParam1=((*uParam0)[iLocal_30] - iVar0);
uParam1->f_1=1;
}
iVar0=(iVar0 / 2);
}}}}

int func_296(var uParam0){
int iVar0;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
if(iVar0 < 33){
func_4(uParam0, "DARTS_BORED", 0, 4);
return 1;
}
return 0;
}


void func_297(var uParam0){
func_298(uParam0, 0f);
}


void func_298(var uParam0, float fParam1){
uParam0->f_1=(func_8(MISC::IS_BIT_SET(*uParam0, 4)) + fParam1);
MISC::SET_BIT(uParam0, 1);
MISC::CLEAR_BIT(uParam0, 2);
uParam0->f_2=0f;
}

int func_299(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6){
float fVar0;
int iVar1;
switch (iParam6){
case 0:
if(iLocal_52){
if(timerb() > 50){
iLocal_53=0;
iLocal_54=0;
iLocal_56=0;
if(func_308(uParam0, uParam1, 0)){
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
iLocal_52=0;
return 1;
}}}elseif(!bParam3){
if(!(PAD::IS_CONTROL_JUST_PRESSED(2, 223) && iLocal_56) && !bParam4){
iLocal_53=1;
iLocal_54=1;
if(!iLocal_55){
func_307(uParam0, *uParam2);
iLocal_55=1;
}else{
if(!bParam5){
func_306();
}
func_305(uParam0, iParam6);
func_304(uParam0, uParam1, bParam3, 0);
}}else{
if(bParam4){
fVar0=MISC::GET_RANDOM_FLOAT_IN_RANGE(0.02f, 0.1f);
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
if(iVar1 < 50){
if((uParam0->f_8 + fVar0) < 0.33f){
uParam0->f_8=(uParam0->f_8 + fVar0);
}else{
uParam0->f_8=(uParam0->f_8 - fVar0);
}
}
elseif((uParam0->f_8 - fVar0) > -0.33f){
uParam0->f_8=(uParam0->f_8 - fVar0);
}
else{
uParam0->f_8=(uParam0->f_8 + fVar0);
}
fVar0=MISC::GET_RANDOM_FLOAT_IN_RANGE(0.02f, 0.1f);
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
if(iVar1 < 50){
if((uParam0->f_8.f_2 + fVar0) < 0.29f){
uParam0->f_8.f_2=(uParam0->f_8.f_2 + fVar0);
}else{
uParam0->f_8.f_2=(uParam0->f_8.f_2 - fVar0);
}
}
elseif((uParam0->f_8.f_2 - fVar0) > -0.29f){
uParam0->f_8.f_2=(uParam0->f_8.f_2 - fVar0);
}
else{
uParam0->f_8.f_2=(uParam0->f_8.f_2 + fVar0);
}
uParam0->f_2={
Local_41 
};
iLocal_53=1;
iLocal_54=1;
}
if(iLocal_53 && iLocal_54){
if(!iLocal_52){
HUD::CLEAR_PRINTS();
iLocal_52=1;
settimerb(0);
}}}}
break;
case 1:
if(iLocal_52){
func_280("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
if(timerb() > 25){
if(func_308(uParam0, uParam1, 1)){
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
iLocal_52=0;
return 1;
}}}elseif(!func_300(uParam0)){
if(!iLocal_55){
func_307(uParam0, *uParam2);
}else{
func_306();
func_305(uParam0, iParam6);
func_304(uParam0, uParam1, bParam3, 0);
}}elseif(!iLocal_52){
iLocal_52=1;
settimerb(0);
}
break;
}
return 0;
}

int func_300(var uParam0){
int iVar0;
float fVar1;
float fVar2;
fVar1=PAD::GET_CONTROL_NORMAL(2, 220);
fVar2=PAD::GET_CONTROL_NORMAL(2, 221);
iLocal_91=round(fVar2);
switch (iLocal_90){
case 0:
if(iLocal_91 > 120){
iLocal_92=MISC::GET_GAME_TIMER();
iLocal_90=1;
}
if(iLocal_91 < -100){
iLocal_96=round(fVar1);
}
break;
case 1:
if(iLocal_91 > 120){
iLocal_92=MISC::GET_GAME_TIMER();
}elseif((iLocal_91 < 120 && iLocal_91 > -120) && (MISC::GET_GAME_TIMER() - iLocal_92) > 500){
iLocal_90=0;
}elseif(iLocal_91 < -100){
iLocal_93=MISC::GET_GAME_TIMER();
if((iLocal_93 - iLocal_92) < 500){
iLocal_96=round(fVar1);
iLocal_94=(iLocal_93 - iLocal_92);
iLocal_90=2;
}}
break;
case 2:
if(iLocal_94 > iLocal_95){
if(iLocal_94 > 100 && iLocal_94 < 150){
fLocal_99=0.066477f;
uParam0->f_8.f_2=(uParam0->f_8.f_2 - fLocal_99);
}else{
fLocal_98=(to_float(iLocal_95) / to_float(iLocal_94));
fLocal_99=((1f - fLocal_98) * fLocal_102);
uParam0->f_8.f_2=(uParam0->f_8.f_2 - fLocal_99);
}}else{
fLocal_99=0f;
}
if(iLocal_96 > 7){
fLocal_100=(to_float(iLocal_96) / fLocal_105);
fLocal_101=(fLocal_103 * fLocal_100);
uParam0->f_8=(uParam0->f_8 + fLocal_101);
}elseif(iLocal_96 < -7){
fLocal_100=(to_float(iLocal_96) / fLocal_104);
fLocal_101=(fLocal_103 * fLocal_100);
uParam0->f_8=(uParam0->f_8 - fLocal_101);
}else{
fLocal_101=0f;
}
if(fLocal_99 < 0.066477f && fLocal_101==0f){
func_303();
}elseif(fLocal_99 <=0.066477f && fLocal_101 < 0.06f){
func_302();
}else{
func_301();
}
iVar0=1;
iLocal_90=0;
break;
}
return iVar0;
}


void func_301(){
Local_39.f_4=210;
Local_39.f_5=23;
Local_39.f_6=19;
}


void func_302(){
Local_39.f_4=183;
Local_39.f_5=137;
Local_39.f_6=0;
}


void func_303(){
Local_39.f_4=16;
Local_39.f_5=184;
Local_39.f_6=10;
}


void func_304(var uParam0, var uParam1, bool bParam2, int iParam3){
struct<3> Var0;
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_34), uParam0->f_14.f_2) 
};
if(iParam3==1){
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_34), uParam0->f_14.f_2) 
};
}
GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &Local_38, &(Local_38.f_1));
if((MISC::GET_GAME_TIMER() % 1000) < 50){}
if(!bParam2){
if(bLocal_49){
func_280("Darts", "Dart_Reticules_Zoomed", &Local_38, 1, 0, 4, 0);
}else{
func_280("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
}
if(!iLocal_56){
iLocal_56=1;
}}}


void func_305(var uParam0, int iParam1){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
bool bVar7;
float fVar8;
float fVar9;
fVar0=0.033367f;
bVar7=false;
fVar3=PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218);
fVar4=PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219);
fVar5=PAD::GET_CONTROL_NORMAL(2, 220);
fVar6=PAD::GET_CONTROL_NORMAL(2, 221);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(MISC::ABSF(fVar5) > MISC::ABSF(fVar3) || MISC::ABSF(fVar6) > MISC::ABSF(fVar4)){
fVar3=fVar5;
fVar4=fVar6;
bVar7=false;
}else{
if(PAD::IS_MOUSE_LOOK_INVERTED()){
fVar4=(fVar4 * -1f);
}
if(PAD::IS_LOOK_INVERTED()){
fVar4=(fVar4 * -1f);
}
if(PAD::IS_CONTROL_PRESSED(2, 227)){
uParam0->f_8=(uParam0->f_8 + (fVar3 * 0.06f));
uParam0->f_8.f_2=(uParam0->f_8.f_2 - (fVar4 * 0.06f));
}else{
uParam0->f_8=(uParam0->f_8 + (fVar3 * 0.03f));
uParam0->f_8.f_2=(uParam0->f_8.f_2 - (fVar4 * 0.03f));
}
uParam0->f_8=func_14(uParam0->f_8, -0.33f, 0.33f);
uParam0->f_8.f_2=func_14(uParam0->f_8.f_2, -0.29f, 0.29f);
bVar7=true;
}}
if(!bVar7){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(fVar5 !=0f || fVar6 !=0f){
fVar3=fVar5;
fVar4=fVar6;
}}
if(fVar3 > 0f){
if((uParam0->f_8 + (fLocal_47 * fVar0)) < 0.33f){
uParam0->f_8=(uParam0->f_8 + (fLocal_47 * fVar0));
}}elseif(fVar3 < 0f){
if((uParam0->f_8 - (fLocal_47 * fVar0)) > -0.33f){
uParam0->f_8=(uParam0->f_8 - (fLocal_47 * fVar0));
}}
if(fVar4 > 0f){
if((uParam0->f_8.f_2 - (fLocal_47 * fVar0)) > -0.29f){
uParam0->f_8.f_2=(uParam0->f_8.f_2 - (fLocal_47 * fVar0));
}}elseif(fVar4 < 0f){
if((uParam0->f_8.f_2 + (fLocal_47 * fVar0)) < 0.29f){
uParam0->f_8.f_2=(uParam0->f_8.f_2 + (fLocal_47 * fVar0));
}}}
uParam0->f_14={
uParam0->f_8 
};
if(iParam1==0){
fVar2=MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_44), (0f + fLocal_44));
fVar1=MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_43), (0f + fLocal_43));
if((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f){
uParam0->f_8=(uParam0->f_8 + (fVar2 * fVar0));
uParam0->f_14=uParam0->f_8;
uParam0->f_14=(uParam0->f_14 + (fVar1 * fVar0));
}
fVar2=MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_44), (0f + fLocal_44));
fVar1=MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_43), (0f + fLocal_43));
if((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.29f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.29f){
uParam0->f_8.f_2=(uParam0->f_8.f_2 + (fVar2 * fVar0));
uParam0->f_14.f_2=uParam0->f_8.f_2;
uParam0->f_14.f_2=(uParam0->f_14.f_2 + (fVar1 * fVar0));
}}
if(iParam1==1){
fLocal_47=0.5f;
if(iLocal_90==1){
fVar8=0.06f;
fVar9=0.08f;
}else{
fVar8=0.02f;
fVar9=0.03f;
}
fVar2=MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar9), (0f + fVar9));
fVar1=MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar8), (0f + fVar8));
if((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f){
uParam0->f_8=(uParam0->f_8 + (fVar2 * fVar0));
uParam0->f_14=uParam0->f_8;
uParam0->f_14=(uParam0->f_14 + (fVar1 * fVar0));
}
fVar2=MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar9), (0f + fVar9));
fVar1=MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar8), (0f + fVar8));
if((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.33f){
uParam0->f_8.f_2=(uParam0->f_8.f_2 + (fVar2 * fVar0));
uParam0->f_14.f_2=uParam0->f_8.f_2;
uParam0->f_14.f_2=(uParam0->f_14.f_2 + (fVar1 * fVar0));
}}}


void func_306(){
if(PAD::IS_CONTROL_PRESSED(2, 227)){
fLocal_47=0.3f;
}else{
fLocal_47=0.1f;
}
if(PAD::IS_CONTROL_PRESSED(2, 229)){
if(bLocal_49){
if(timera() > iLocal_97){
fLocal_43=fLocal_45;
fLocal_44=fLocal_46;
fLocal_47=0.1f;
bLocal_49=false;
}}elseif(iLocal_48 < 1){
fLocal_43=0.03f;
fLocal_44=0.05f;
fLocal_47=0.1f;
settimera(0);
bLocal_49=true;
iLocal_48++;
}elseif((((((!func_309("DARTS_FST_HLP") && !func_309("DARTS_AIM_HLP")) && !func_309("DARTS_CLOCK")) && !func_309("DARTS_STD_HLP")) && !func_309("DARTS_INSTR_W")) && !func_309("DARTS_INSTR_B")) && !iLocal_50){
iLocal_50=1;
if(!MISC::IS_BIT_SET(Global_113609, 1)){
func_424("DARTS_SHT_USE", -1);
MISC::SET_BIT(&Global_113609, 1);
}}}elseif(bLocal_49){
fLocal_43=fLocal_45;
fLocal_44=fLocal_46;
fLocal_47=0.1f;
bLocal_49=false;
}}


void func_307(var uParam0, struct<4> Param1, var uParam2, var uParam3){
struct<3> Var0;
Var0={
0f, 0f, 0f 
};
Var0.f_0=(Var0.f_0 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f));
Var0.f_2=(Var0.f_2 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f));
uParam0->f_8={
Param1.f_3 + Var0 
};
uParam0->f_2={
Local_41 
};
}

int func_308(var uParam0, var uParam1, bool bParam2){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
float fVar3;
float fVar4;
float fVar5;
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
ENTITY::SET_ENTITY_COORDS(*uParam0, Local_40, 1, 0, 0, 1);
}else{
*uParam0=OBJECT::CREATE_OBJECT(uParam0->f_1, Local_40, 0, 0, 0);
}
bLocal_49=false;
fLocal_47=0.1f;
fLocal_43=fLocal_45;
fLocal_44=fLocal_46;
uParam0->f_23=0;
uParam0->f_24=1;
func_293(uParam0);
fVar4=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
Var1={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, Local_41) 
};
Var2={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, (uParam0->f_14 + 0.0035f), (uParam0->f_14.f_1 + fLocal_34), uParam0->f_14.f_2) 
};
fVar5=MISC::GET_HEADING_FROM_VECTOR_2D((Var1.f_0 - Var2.f_0), (Var1.f_1 - Var2.f_1));
fVar5=(fVar5 - 180f);
fVar3=90f;
uParam0->f_17={
fVar3, fVar4, fVar5 
};
ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_17, 0, 1);
iLocal_53=0;
iLocal_55=0;
if(bParam2){
func_280("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
}
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_34), uParam0->f_8.f_2) 
};
GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &Local_39, &(Local_39.f_1));
return 1;
}


bool func_309(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_310(int iParam0, int iParam1){
if(iParam0==0){
if(!MISC::IS_BIT_SET(Global_113609, 9)){
if((!func_309("DARTS_SHT_USE") && !func_309("DARTS_INSTR_W")) && !func_309("DARTS_INSTR_B")){
func_424("DARTS_AIM_HLP", -1);
MISC::SET_BIT(&Global_113609, 9);
}}elseif(iParam1 && !MISC::IS_BIT_SET(Global_113609, 7)){
if((!func_309("DARTS_AIM_HLP") && !func_309("DARTS_INSTR_W")) && !func_309("DARTS_INSTR_B")){
func_424("DARTS_CLOCK", -1);
MISC::SET_BIT(&Global_113609, 7);
}}}elseif(iParam0==1){
if(!MISC::IS_BIT_SET(Global_113609, 8)){
if((!func_309("DARTS_SHT_USE") && !func_309("DARTS_INSTR_W")) && !func_309("DARTS_INSTR_B")){
func_424("DARTS_STD_HLP", -1);
MISC::SET_BIT(&Global_113609, 8);
}}}elseif(iParam0==2){
if(((!iLocal_51 && !func_309("DARTS_SHT_USE")) && !func_309("DARTS_INSTR_W")) && !func_309("DARTS_INSTR_B")){
if(!MISC::IS_BIT_SET(Global_113609, 2)){
func_424("DARTS_FST_HLP", -1);
MISC::SET_BIT(&Global_113609, 2);
}
iLocal_51=1;
}}}

int func_311(int iParam0, var uParam1, var uParam2, var uParam3){
struct<3> Var0;
switch (*uParam2){
case 0:
Var0={
func_314(iParam0) 
};
*uParam3={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, Var0) 
};
func_313(*uParam3);
settimerb(0);
*uParam2=1;
break;
case 1:
if(timerb() > 3000 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)){
func_312();
*uParam2=0;
return 1;
}
break;
}
return 0;
}


void func_312(){
CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_75, uLocal_87, 2000, 1, 1);
CAM::DESTROY_CAM(uLocal_87, 0);
}


void func_313(struct<3> Param0){
struct<3> Var0;
Var0={
-5.5606f, -0.0106f, -131.6781f 
};
uLocal_87=CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Param0, Var0, 65f, 0, 2);
CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_87, uLocal_75, 2000, 1, 1);
}


Vector3 func__314(int iParam0){
float fVar0;
struct<3> Var1;
if(iParam0==50){
Var1={
0f, -0.5f, 0f 
};
}else{
fVar0=func_317(iParam0);
Var1.f_1=-0.5f;
Var1.f_0=func_316(fVar0);
Var1.f_2=func_315(fVar0);
}
return Var1;
}


float func_315(float fParam0){
float fVar0;
float fVar1;
fVar0=0.218f;
fVar1=(cos(fParam0) * fVar0);
return fVar1;
}


float func_316(float fParam0){
float fVar0;
float fVar1;
fVar0=0.218f;
fVar1=(sin(fParam0) * fVar0);
return fVar1;
}


var func__317(int iParam0){
int iVar0;
int iVar1;
float fVar2;
var uVar3;
iVar1=(iParam0 / 2);
iVar0=0;
while (iVar0 < 21){
if(iVar1==iLocal_33[iVar0]){
uVar3=fVar2;
}
fVar2=(fVar2 + 18f);
iVar0++;
}
return uVar3;
}

int func_318(var uParam0){
switch (*uParam0){
case 0:
if(PAD::IS_CONTROL_PRESSED(2, 228)){
func_325(1);
*uParam0=1;
}else{
return 0;
}
break;
case 1:
if(PAD::IS_CONTROL_PRESSED(2, 228)){
if(!CAM::IS_CAM_INTERPOLATING(uLocal_84)){
func_323();
func_322(&uLocal_176, Local_207, Local_208, 30f, 10, 10, 3, 15f, 0, 0, -1f, 1);
*uParam0=2;
}}else{
*uParam0=3;
}
break;
case 2:
if(!PAD::IS_CONTROL_PRESSED(2, 228)){
*uParam0=3;
}else{
func_319(&uLocal_176, 1, 1, 0, 0, 1045220557, 0, 1065353216, 0);
}
break;
case 3:
func_325(0);
func_505();
if(CAM::DOES_CAM_EXIST(uLocal_176)){
if(CAM::IS_CAM_ACTIVE(uLocal_176)){
CAM::SET_CAM_ACTIVE(uLocal_176, 0);
}
CAM::DESTROY_CAM(uLocal_176, 0);
}
*uParam0=0;
return 0;
break;
}
return 1;
}


void func_319(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8){
int iVar0[4];
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
struct<3> Var6;
int iVar7;
int iVar8;
PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOU(2);
func_321(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
if(PAD::IS_LOOK_INVERTED()){
iVar0[3]=(iVar0[3] * -1);
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
fVar1=PAD::GET_CONTROL_UNBOUND_NORMAL(2, 239);
fVar2=PAD::GET_CONTROL_UNBOUND_NORMAL(2, 240);
fVar3=(fVar1 - uParam0->f_29);
fVar4=(fVar2 - uParam0->f_30);
uParam0->f_29=fVar1;
uParam0->f_30=fVar2;
if(bParam4){
iVar0[2]=-round(((fVar3 * fParam5) * 127f));
iVar0[3]=-round(((fVar4 * fParam5) * 127f));
}else{
iVar0[2]=round(((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 290) * fParam5) * 127f));
iVar0[3]=round(((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 291) * fParam5) * 127f));
}
iVar0[2]=func_320((iVar0[2] + uParam0->f_24), -127, 127);
iVar0[3]=func_320((iVar0[3] + uParam0->f_25), -127, 127);
}
if(uParam0->f_24==iVar0[2] && uParam0->f_25==iVar0[3]){
if(uParam0->f_27 < MISC::GET_GAME_TIMER()){
uParam0->f_24=0;
uParam0->f_25=0;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
iVar0[2]=0;
iVar0[3]=0;
uParam0->f_28=1;
}}}else{
uParam0->f_24=iVar0[2];
uParam0->f_25=iVar0[3];
uParam0->f_27=MISC::GET_GAME_TIMER() + 4000;
uParam0->f_28=0;
}
if(bParam2){
uParam0->f_8.f_2=(-(to_float(iVar0[2]) / 127f) * IntToFloat(uParam0->f_20));
uParam0->f_8.f_1=((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_22)) / IntToFloat(uParam0->f_20));
uParam0->f_8=(-(to_float(iVar0[3]) / 127f) * IntToFloat(uParam0->f_21));
}else{
uParam0->f_8={
0f, 0f, 0f 
};
uParam0->f_24=0;
uParam0->f_25=0;
}
fVar5=(30f * timestep());
Var6={
uParam0->f_8 + uParam0->f_11 
};
if((PAD::IS_USING_KEYBOARD_AND_MOUSE(2) && bParam2) && !uParam0->f_28){
uParam0->f_14=Var6.f_0;
uParam0->f_14.f_1=Var6.f_1;
uParam0->f_14.f_2=Var6.f_2;
}else{
uParam0->f_14=(uParam0->f_14 + func_14(((((Var6.f_0 - uParam0->f_14) * 0.05f) * fVar5) * fParam7), -3f, 3f));
uParam0->f_14.f_1=(uParam0->f_14.f_1 + func_14(((((Var6.f_1 - uParam0->f_14.f_1) * 0.05f) * fVar5) * fParam7), -3f, 3f));
uParam0->f_14.f_2=(uParam0->f_14.f_2 + func_14(((((Var6.f_2 - uParam0->f_14.f_2) * 0.05f) * fVar5) * fParam7), -3f, 3f));
}
if(uParam0->f_26){
uParam0->f_14=func_14(uParam0->f_14, to_float(-uParam0->f_21), to_float(uParam0->f_21));
uParam0->f_14.f_1=func_14(uParam0->f_14.f_1, to_float(-uParam0->f_22), to_float(uParam0->f_22));
uParam0->f_14.f_2=func_14(uParam0->f_14.f_2, to_float(-uParam0->f_20), to_float(uParam0->f_20));
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0) && bParam1){
if(uParam0->f_28){
uParam0->f_17=uParam0->f_7;
}}else{
uParam0->f_17=uParam0->f_7;
}
if(bParam1){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
iVar7=40;
iVar8=41;
if(bParam6){
iVar7=241;
iVar8=242;
}
if(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, iVar7)){
uParam0->f_17=(uParam0->f_17 - 5f);
uParam0->f_27=MISC::GET_GAME_TIMER() + 4000;
uParam0->f_28=0;
}elseif(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, iVar8)){
uParam0->f_17=(uParam0->f_17 + 5f);
uParam0->f_27=MISC::GET_GAME_TIMER() + 4000;
uParam0->f_28=0;
}
if(bParam3){
uParam0->f_17=func_14(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
}else{
uParam0->f_17=func_14(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
}}elseif(bParam8){
iVar0[1]=PAD::GET_CONTROL_VALUE(2, 207);
iVar0[3]=PAD::GET_CONTROL_VALUE(2, 208);
if(bParam3){
if(to_float(iVar0[3]) > 127f){
uParam0->f_17=(uParam0->f_17 - IntToFloat(round(((to_float(iVar0[3]) / 128f) * (uParam0->f_19 / 2f)))));
}}else{
uParam0->f_17=(uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
uParam0->f_17=(uParam0->f_17 - IntToFloat(round(((to_float(iVar0[3]) / 128f) * uParam0->f_19))));
}}elseif(bParam3){
if(to_float(iVar0[1]) < 0f){
uParam0->f_17=(uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
}}else{
uParam0->f_17=(uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
}}
uParam0->f_18=(uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0.06f) * fVar5));
CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
if(CAM::DOES_CAM_EXIST(*uParam0)){
if(CAM::IS_CAM_ACTIVE(*uParam0)){
if(CAM::IS_CAM_RENDERING(*uParam0)){
RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
}}}}

int func_320(int iParam0, int iParam1, int iParam2){
if(iParam0 > iParam2){
return iParam2;
}elseif(iParam0 < iParam1){
return iParam1;
}
return iParam0;
}


void func_321(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
*uParam0=floor((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
*uParam1=floor((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
*uParam2=floor((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
*uParam3=floor((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
if(bParam4){
if(!PAD::IS_CONTROL_ENABLED(2, 218)){
*uParam0=floor((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
}
if(!PAD::IS_CONTROL_ENABLED(2, 219)){
*uParam1=floor((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
}
if(!PAD::IS_CONTROL_ENABLED(2, 220)){
*uParam2=floor((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
}
if(!PAD::IS_CONTROL_ENABLED(2, 221)){
*uParam3=floor((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
}}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(bParam5){
if(PAD::IS_LOOK_INVERTED()){
*uParam3=(*uParam3 * -1);
}
if(PAD::IS_MOUSE_LOOK_INVERTED()){
*uParam3=(*uParam3 * -1);
}}}}


void func_322(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, float fParam10, bool bParam11){
uParam0->f_1={
Param1 
};
uParam0->f_4={
Param2 
};
uParam0->f_7=fParam3;
uParam0->f_20=iParam4;
uParam0->f_21=iParam5;
uParam0->f_22=iParam6;
uParam0->f_8={
0f, 0f, 0f 
};
uParam0->f_11={
0f, 0f, 0f 
};
uParam0->f_14={
0f, 0f, 0f 
};
uParam0->f_17=fParam3;
uParam0->f_18=fParam3;
uParam0->f_23=iParam8;
uParam0->f_19=fParam7;
*uParam0=CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
CAM::SET_CAM_ACTIVE(*uParam0, 1);
CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
if(!bParam11){
CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);
}
CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
if(fParam10 > 0f){
CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam10);
}
if(uParam0->f_23){
HUD::LOCK_MINIMAP_ANGLE(iParam9);
}
uParam0->f_24=0;
uParam0->f_25=0;
uParam0->f_29=0f;
uParam0->f_30=0f;
uParam0->f_26=0;
uParam0->f_28=0;
uParam0->f_27=0;
}


void func_323(){
if(iLocal_136){
return;
}
func_324();
PAD::INIT_PC_SCRIPTED_CONTROLS("Darts Zoom");
iLocal_136=1;
}


void func_324(){
if(iLocal_135 || iLocal_136){
PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
iLocal_135=0;
iLocal_136=0;
}}


void func_325(bool bParam0){
if(bParam0){
CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_84, uLocal_75, 1000, 1, 1);
}else{
CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_75, uLocal_84, 1000, 1, 1);
}}


void func_326(var uParam0){
if(uParam0->f_679){
if(uParam0->f_681==2){
uParam0->f_681=0;
}
uParam0->f_679=0;
}
switch (uParam0->f_681){
case 0:
func_247(&(uParam0->f_62), func_328(uParam0->f_682), "", 2000, 5, 1);
uParam0->f_681=1;
break;
case 1:
if(!func_242(&(uParam0->f_62), 0)){
func_327(&(uParam0->f_62));
uParam0->f_681=2;
}
break;
case 2:
break;
}}


void func_327(var uParam0){
uParam0->f_8=0;
func_427(&(uParam0->f_2));
func_427(&(uParam0->f_5));
}


char* func_328(int iParam0){
switch (iParam0){
case 0:
return "DARTS_180_SPLSH";
case 1:
return "DARTS_BE_SPLSH";
default:
}
return "DARTS_BE_SPLSH";
}


void func_329(var uParam0){
if(!iLocal_54){
if(!PAD::IS_CONTROL_PRESSED(2, 201)){
iLocal_54=1;
}}
if((iLocal_30==1 && iLocal_31 < 3) && *uParam0 !=5){
if((PAD::IS_CONTROL_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 223)) && iLocal_54){
*uParam0=6;
}}}


void func_330(var uParam0, int iParam1){
if(!HUD::IS_PAUSE_MENU_ACTIVE()){
if(iParam1==0){
if(!func_3(&(uParam0->f_666), 15) && !iLocal_48 > 0){
func_121(&(uParam0->f_509), 0, 0, 0, 1);
func_120(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
func_120(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
func_331(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
func_120(&(uParam0->f_509), "DARTS_FOCUS", 2, 229, 1, 1, 0);
func_120(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
func_120(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
func_117(&(uParam0->f_509), 1);
func_337(&(uParam0->f_666), 8, 0);
func_337(&(uParam0->f_666), 16, 0);
func_337(&(uParam0->f_666), 23, 0);
}elseif(iLocal_48 > 0 && !func_3(&(uParam0->f_666), 17)){
func_121(&(uParam0->f_509), 0, 0, 0, 1);
func_120(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
func_120(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
func_331(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
func_120(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
func_120(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
func_117(&(uParam0->f_509), 1);
func_337(&(uParam0->f_666), 8, 0);
func_337(&(uParam0->f_666), 16, 0);
func_337(&(uParam0->f_666), 23, 0);
}}elseif(!func_3(&(uParam0->f_666), 16)){
func_121(&(uParam0->f_509), 1, 0, 0, 1);
func_120(&(uParam0->f_509), "DARTS_SKIP", 2, 223, 1, 1, 0);
func_120(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
func_117(&(uParam0->f_509), 1);
func_337(&(uParam0->f_666), 16, 1);
func_337(&(uParam0->f_666), 8, 0);
func_337(&(uParam0->f_666), 15, 0);
func_337(&(uParam0->f_666), 17, 0);
func_337(&(uParam0->f_666), 23, 0);
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
func_205(func_116(func_3(&(uParam0->f_666), 16), 1, 2));
func_123(&(uParam0->f_509), 200f, 1, 0, 0, 1065353216);
}elseif((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23)){
func_337(&(uParam0->f_666), 15, 0);
func_337(&(uParam0->f_666), 16, 0);
func_337(&(uParam0->f_666), 23, 0);
}}

int func_331(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5){
int iVar0;
if(*uParam0==0){
return 0;
}
iVar0=uParam0->f_123;
if(iVar0 < 8){
uParam0->f_2[iVar0 /*15*/]=sParam1;
uParam0->f_2[iVar0 /*15*/].f_1=0;
uParam0->f_2[iVar0 /*15*/].f_2=iParam5;
uParam0->f_2[iVar0 /*15*/].f_12=0;
uParam0->f_2[iVar0 /*15*/].f_13=0;
uParam0->f_2[iVar0 /*15*/].f_14=0;
uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/]=iParam2;
uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/].f_1=iParam3;
MISC::SET_BIT(&(uParam0->f_2[iVar0 /*15*/].f_12), 0);
if(iParam4==1){
MISC::SET_BIT(&(uParam0->f_2[iVar0 /*15*/].f_13), 0);
}
uParam0->f_2[iVar0 /*15*/].f_14++;
uParam0->f_123++;
return 1;
}
return 0;
}


void func_332(var uParam0){
if(!HUD::IS_PAUSE_MENU_ACTIVE()){
if(!func_3(&(uParam0->f_666), 23)){
func_121(&(uParam0->f_509), 0, 0, 0, 1);
func_331(&(uParam0->f_509), "IB_MAPMOVE", 2, 21, 1, 0);
func_120(&(uParam0->f_509), "IB_ZOOM", 2, 39, 1, 1, 0);
func_117(&(uParam0->f_509), 1);
func_337(&(uParam0->f_666), 23, 1);
func_337(&(uParam0->f_666), 8, 0);
func_337(&(uParam0->f_666), 16, 0);
func_337(&(uParam0->f_666), 15, 0);
func_337(&(uParam0->f_666), 17, 0);
}
func_123(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
}elseif((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23)){
func_337(&(uParam0->f_666), 15, 0);
func_337(&(uParam0->f_666), 16, 0);
func_337(&(uParam0->f_666), 23, 0);
func_337(&(uParam0->f_666), 17, 0);
}}


void func_333(var uParam0){
bool bVar0;
bVar0=false;
if(!iLocal_54){
if(!PAD::IS_CONTROL_PRESSED(2, 201) && !PAD::IS_CONTROL_PRESSED(2, 202)){
iLocal_54=1;
}else{
iLocal_54=0;
}}
if(*uParam0 !=13){
if(bVar0){
if(iLocal_54 && iLocal_53==0){
iLocal_54=0;
bVar0=false;
bLocal_147=false;
HUD::CLEAR_HELP(1);
}}
if(PAD::IS_CONTROL_JUST_RELEASED(2, 235) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 235)){
if(!bLocal_147){
*uParam0=14;
bLocal_147=true;
HUD::CLEAR_HELP(1);
}}elseif(func_309("DARTS_QUIT")){
bVar0=true;
}else{
bVar0=false;
bLocal_147=false;
}}}


void func_334(int iParam0){
if(!PED::IS_PED_INJURED(uParam0)){
func_4(iParam0, "DARTS_BOAST", 0, 4);
}}


float func_335(int iParam0){
if(iParam0 < 10){
return 0.107f;
}
if(iParam0 < 25){
return 0.096f;
}
if(iParam0 < 50){
return 0.085f;
}
if(iParam0 < 70){
return 0.075f;
}
return 0.064f;
}


float func_336(int iParam0){
if(iParam0 < 10){
return 0.08f;
}
if(iParam0 < 25){
return 0.072f;
}
if(iParam0 < 50){
return 0.064f;
}
if(iParam0 < 70){
return 0.056f;
}
return 0.048f;
}


void func_337(var uParam0, bool bParam1, bool bParam2){
if(bParam2){
MISC::SET_BIT(uParam0, iParam1);
}else{
MISC::CLEAR_BIT(uParam0, iParam1);
}}

int func_338(int iParam0, var uParam1){
if(iParam0 >=10){
if(!MISC::IS_BIT_SET(Global_113648.f_18972.f_6, 12)){
*uParam1=12;
return 1;
}}
return 0;
}

int func_339(int iParam0, var uParam1, var uParam2){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 2){
iParam0->f_422[iVar0]=301;
iParam0->f_425[iVar0]=301;
iVar0++;
}
iParam0->f_454=0;
iVar0=0;
while (iVar0 < 2){
iVar1=0;
while (iVar1 < 3){
func_250(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
iVar1++;
}
func_249(uParam1, iVar0);
func_255(uParam1, iVar0, 301);
iVar0++;
}
iLocal_30=0;
iLocal_31=0;
iParam0->f_428=0;
iParam0->f_249.f_3=0;
iLocal_163=0;
iParam0->f_436=0;
iLocal_48=0;
iLocal_140=1;
iLocal_141=0;
iLocal_143=0;
iLocal_50=0;
iParam0->f_458=0;
iParam0->f_456=0;
iLocal_149=0;
func_337(&(uParam2->f_666), 6, 0);
func_345();
func_343(uParam2);
if(iParam0->f_457){
func_340(iParam0->f_457);
iParam0->f_457=0;
}
return 1;
}


void func_340(bool bParam0){
HUD::DISPLAY_RADAR(0);
if(CAM::IS_CAM_ACTIVE(uLocal_77)){
CAM::SET_CAM_ACTIVE(uLocal_77, 0);
}
if(CAM::IS_CAM_ACTIVE(uLocal_81)){
CAM::SET_CAM_ACTIVE(uLocal_81, 0);
}
if(CAM::IS_SCREEN_FADED_OUT()){
func_342();
CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
CAM::DO_SCREEN_FADE_IN(500);
}
func_341(bParam0);
}


void func_341(bool bParam0){
if(bParam0){
CAM::SET_CAM_ACTIVE(uLocal_75, 1);
}}


void func_342(){
CAM::SET_CAM_ACTIVE(uLocal_77, 1);
}


void func_343(var uParam0){
func_344();
uParam0->f_670=3;
func_337(&(uParam0->f_666), 15, 0);
func_337(&(uParam0->f_666), 16, 0);
func_337(&(uParam0->f_666), 17, 0);
}


void func_344(){
int iVar0;
Local_108.f_66=-1;
Local_108.f_67=10f;
iVar0=0;
while (iVar0 < 8){
Local_108.f_9[iVar0 /*7*/].f_3=-1f;
Local_108.f_9[iVar0 /*7*/].f_4=-1f;
Local_108.f_9[iVar0 /*7*/].f_5=0;
Local_108.f_9[iVar0 /*7*/].f_6=0;
iVar0++;
}
Local_108.f_5=0;
Local_108.f_5.f_1=-1f;
Local_108.f_5.f_2=0;
Local_108.f_0=0;
Local_108.f_1=0;
}


void func_345(){
settimera(0);
iLocal_54=0;
HUD::CLEAR_SMALL_PRINTS();
}


void func_346(bool bParam0, int iParam1){
int iVar0;
if(!func_348(&iVar0, 0, iParam1)){
return;
}
if(Global_23270.f_8892){
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_23270.f_8892=0;
}
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
if(Global_23270.f_6071[iVar0]){
HUD::CLEAR_ADDITIONAL_TEXT(9, 0);
Global_23270.f_6071[iVar0]=0;
}
if(Global_23270.f_6057[iVar0]){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
Global_23270.f_6057[iVar0]=0;
}
if(Global_23270.f_6064[iVar0]){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
Global_23270.f_6064[iVar0]=0;
}
if(bParam0){
func_347(&(Global_23270.f_6103[iVar0 /*10*/]));
Global_23270.f_6164[iVar0]=0;
}else{
Global_23270.f_6164[iVar0]=0;
}}


void func_347(var uParam0){
if(uParam0->f_9 !=0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
}
*uParam0=0;
uParam0->f_9=0;
}}

int func_348(var uParam0, bool bParam1, int iParam2){
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
if(Global_23270.f_6164[iVar2]==iVar1){
*uParam0=iVar2;
return 1;
}elseif(Global_23270.f_6164[iVar2]==0){
iVar3=iVar2;
}
iVar2++;
}
if(bParam1){
if(iVar3 !=-1){
Global_23270.f_6164[iVar3]=iVar1;
*uParam0=iVar3;
return 1;
}}
return 0;
}


void func_349(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_PLAYER_SETS_AND_LEGS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_350(var uParam0, var uParam1, var uParam2){
char* sVar0;
int iVar1;
int iVar2;
iVar1=0;
PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
if(!func_3(&(uParam0->f_666), 7)){
func_407(0, 0, 0, 1);
func_406(0, -1, 1);
if(func_405()){
if(Global_4541029==uParam0->f_660){
iVar1=1;
}else{
uParam0->f_660=Global_4541029;
func_404(uParam0->f_660, 1, 1);
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
switch (uParam0->f_660){
case 0:
sVar0="DARTS_LEGD";
break;
case 1:
sVar0="DARTS_SETD";
break;
case 2:
sVar0="";
break;
}
if(HUD::DOES_TEXT_LABEL_EXIST(sVar0)){
func_403(sVar0, 0, 0);
}}
Global_4541030=MISC::GET_GAME_TIMER() + 300;
}elseif(func_402() && MISC::GET_GAME_TIMER() > Global_4541030){
if(Global_4541029==uParam0->f_660){
iVar2=func_401(0);
if(iVar2==-1 || iVar2==1){
iVar1=1;
}}
Global_4541030=MISC::GET_GAME_TIMER() + 300;
}
if(func_400(&(uParam0->f_639))){
uParam0->f_660=(uParam0->f_660 - 1);
if(uParam0->f_660 < 0){
uParam0->f_660=(uParam0->f_661 - 1);
}
func_404(uParam0->f_660, 1, 1);
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
switch (uParam0->f_660){
case 0:
sVar0="DARTS_LEGD";
break;
case 1:
sVar0="DARTS_SETD";
break;
case 2:
sVar0="";
break;
}
if(HUD::DOES_TEXT_LABEL_EXIST(sVar0)){
func_403(sVar0, 0, 0);
}}
if(func_399(&(uParam0->f_642))){
uParam0->f_660++;
if(uParam0->f_660 > (uParam0->f_661 - 1)){
uParam0->f_660=0;
}
func_404(uParam0->f_660, 1, 1);
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
switch (uParam0->f_660){
case 0:
sVar0="DARTS_LEGD";
break;
case 1:
sVar0="DARTS_SETD";
break;
case 2:
sVar0="";
break;
}
if(HUD::DOES_TEXT_LABEL_EXIST(sVar0)){
func_403(sVar0, 0, 0);
}}
if(func_398(&(uParam0->f_633)) || func_397(&(uParam0->f_633), uParam0->f_660, iVar1)){
if(uParam0->f_660==0){
uParam0->f_662=(uParam0->f_662 - 1);
if(uParam0->f_662 < 0){
uParam0->f_662=(uParam0->f_663 - 1);
}}elseif(uParam0->f_660==1){
uParam0->f_664=(uParam0->f_664 - 1);
if(uParam0->f_664 < 0){
uParam0->f_664=(uParam0->f_665 - 1);
}}
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
func_383(uParam0);
}
if(func_382(&(uParam0->f_636)) || func_380(&(uParam0->f_636), uParam0->f_660, iVar1)){
if(uParam0->f_660==0){
uParam0->f_662++;
if(uParam0->f_662 > (uParam0->f_663 - 1)){
uParam0->f_662=0;
}}elseif(uParam0->f_660==1){
uParam0->f_664++;
if(uParam0->f_664 > (uParam0->f_665 - 1)){
uParam0->f_664=0;
}}
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
func_383(uParam0);
}
if((PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iVar1==1) && uParam0->f_660==2){
*uParam1=func_379(uParam0->f_662 + 1, 1);
*uParam2=func_379(uParam0->f_664 + 1, 0);
AUDIO::PLAY_SOUND_FRONTEND(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
return 1;
}
func_353(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
if(PAD::IS_CONTROL_JUST_RELEASED(2, 202) || func_352()){
func_351(0, 0);
func_337(&(uParam0->f_666), 8, 0);
func_337(&(uParam0->f_666), 7, 1);
}}else{
func_2(uParam0);
if(PAD::IS_CONTROL_JUST_RELEASED(2, 201)){
func_39(0);
*uParam1=-1;
return 1;
}elseif(PAD::IS_CONTROL_JUST_RELEASED(2, 202)){
func_383(uParam0);
func_337(&(uParam0->f_666), 7, 0);
}}
return 0;
}


void func_351(bool bParam0, bool bParam1){
int iVar0;
int iVar1;
float fVar2;
iVar0=0;
while (iVar0 < 256){
StringCopy(&(Global_23270.f_79[iVar0 /*6*/]), "", 24);
iVar1=0;
while (iVar1 < 4){
Global_23270.f_2387[iVar0 /*5*/][iVar1]=0;
iVar1++;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 40){
StringCopy(&(Global_2695072[iVar0 /*16*/]), "", 64);
iVar0++;
}
iVar0=0;
while (iVar0 < 256){
Global_23270.f_4309[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 128){
Global_23270.f_4566[iVar0]=0f;
iVar0++;
}
iVar0=0;
while (iVar0 < 256){
Global_23270.f_4824[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 128){
Global_23270.f_5532[iVar0]=0;
Global_23270.f_5670[iVar0]=0;
Global_23270.f_5799[iVar0]=0;
Global_23270.f_6322[iVar0]=0f;
Global_23270.f_5928[iVar0]=0;
Global_23270.f_6188[iVar0]=0f;
iVar0++;
}
iVar0=0;
while (iVar0 < 5){
Global_23270.f_5499[iVar0]=0;
Global_23270.f_5511[iVar0]=0f;
Global_23270.f_5505[iVar0]=-1f;
Global_23270.f_5518[iVar0]=0;
Global_23270.f_5526[iVar0]=1;
iVar0++;
}
iVar0=0;
while (iVar0 < 14){
StringCopy(&(Global_23270.f_5393[iVar0 /*4*/]), "", 16);
Global_23270.f_5450[iVar0]=-1;
Global_23270.f_5465[iVar0]=363;
Global_23270.f_5480[iVar0]=32;
iVar0++;
}
iVar0=0;
while (iVar0 < 64){
StringCopy(&(Global_23270.f_6463[iVar0 /*16*/]), "", 64);
StringCopy(&(Global_23270.f_7488[iVar0 /*16*/]), "", 64);
iVar0++;
}
if(bParam1){
iVar0=0;
while (iVar0 < 256){
Global_23270.f_1616[iVar0]=0;
iVar0++;
}}
StringCopy(&(Global_4540953.f_16), "", 16);
Global_4540953.f_20=-1;
Global_23270=0;
Global_23270.f_5661=0;
Global_23270.f_5662=0;
Global_23270.f_5663=0;
Global_23270.f_5665=0;
Global_23270.f_5666=0;
Global_23270.f_5667=0;
Global_23270.f_5664=0;
Global_23270.f_6317=0;
Global_23270.f_6457=0;
Global_23270.f_6182=0;
Global_23270.f_6181=0;
Global_23270.f_6183=0;
StringCopy(&(Global_23270.f_5081), "", 24);
Global_23270.f_5159=0;
Global_23270.f_5160=0;
Global_23270.f_5161=0;
Global_23270.f_5162=0;
Global_23270.f_5163=0;
Global_23270.f_5164=0;
iVar0=0;
while (iVar0 < 4){
Global_23270.f_5093[iVar0]=0;
iVar0++;
}
Global_23270.f_5165=0;
StringCopy(&(Global_4540953.f_21), "", 16);
Global_4540953.f_61=0;
Global_4540953.f_62=0;
Global_4540953.f_63=0;
Global_4540953.f_64=0;
Global_4540953.f_65=0;
Global_4540953.f_66=0;
iVar0=0;
while (iVar0 < 4){
Global_4540953.f_25[iVar0]=0;
iVar0++;
}
Global_4540953.f_67=0;
StringCopy(&(Global_23270.f_1), "", 16);
Global_23270.f_5517=0f;
Global_23270.f_74=0;
Global_23270.f_75=0;
Global_23270.f_76=0;
Global_23270.f_77=0;
Global_23270.f_78=0;
iVar0=0;
while (iVar0 < 4){
Global_23270.f_5[iVar0]=0;
iVar0++;
}
Global_23270.f_6187=0;
Global_23270.f_6186=0;
Global_23270.f_6184=0;
Global_23270.f_6185=0;
Global_23270.f_5166=0;
Global_23270.f_5167=0;
Global_23270.f_5668=10;
Global_23270.f_5669=0;
Global_23270.f_6319=0f;
Global_23270.f_6320=0f;
Global_23270.f_6171=0;
Global_23270.f_6172=0;
Global_23270.f_6173=0f;
Global_23270.f_6174=0;
Global_23270.f_6176=0;
Global_23270.f_6175=0;
Global_23270.f_6177=0;
Global_23270.f_6178=0;
Global_23270.f_6179=0;
Global_23270.f_6180=0;
Global_23270.f_8888=0;
iVar0=0;
while (iVar0 < 2){
Global_23270.f_6451[iVar0]=-1;
Global_23270.f_6454[iVar0]=-1;
iVar0++;
}
Global_23270.f_5524=0f;
Global_23270.f_5495=0;
Global_23270.f_5525=0;
iVar0=0;
while (iVar0 < Global_23270.f_6458){
Global_23270.f_6458[iVar0]=0;
iVar0++;
}
Global_23270.f_8867=0;
Global_23270.f_8862=0;
Global_23270.f_8872=0;
Global_23270.f_8877=0;
Global_23270.f_8882=0;
Global_23270.f_8884=0;
Global_23270.f_8890=0;
Global_23267=0.05f;
Global_23268=0.05f;
Global_23269=0.225f;
fVar2=GRAPHICS::GET_ASPECT_RATIO(0);
if(bParam0){
Global_23269=(0.225f * (1.777778f / fVar2));
}elseif(fVar2 < 1.77777f){
Global_23269=(0.225f * (1.777778f / fVar2));
}else{
Global_23269=0.225f;
}}

int func_352(){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 238)){
return 1;
}}
return 0;
}


void func_353(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8){
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
if(!func_348(&iVar0, 0, iParam1)){
return;
}
if(iVar0==-1){}
if(!func_376(0, bParam6)){
return;
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
fVar55=0f;
if(Global_23270){
if(func_19(29, 1, 1, &fVar36, &fVar37, bParam7)){
fVar56=(fVar37 / fVar36);
}else{
Global_23270=0;
}}
if(fParam5==-1f){
fParam5=Global_23269;
}
fVar55=(fParam5 * fVar56);
if(MISC::GET_HASH_KEY(&(Global_23270.f_1))==MISC::GET_HASH_KEY("HIDE")){
fVar57=Global_23268;
}else{
fVar57=(((Global_23268 + fVar55) + 0.034722f) + 0f);
}
fVar60=1f;
func_21(bParam7, &uVar58, &uVar59, &fVar60);
if(bParam3){
if(Global_23270.f_5661 <=1){
func_372(Global_23270.f_5661 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
Global_23270.f_6457=1;
}}
iVar5=0;
while (iVar5 < 2){
if(iVar5==1 && Global_23270.f_6171){
if(MISC::GET_HASH_KEY(&(Global_23270.f_1))==MISC::GET_HASH_KEY("HIDE")){
fVar49=Global_23268;
}else{
if(Global_23270){
StringCopy(&cVar61, func_26(29), 64);
StringCopy(&cVar62, func_23(29, 1), 64);
if(MISC::GET_HASH_KEY(&(Global_23270.f_7488[29 /*16*/]))==joaat("crew_logo")){
func_371(Global_23267, Global_23268, fParam5, fVar55, 0, 0, 0, 255);
GRAPHICS::DRAW_SPRITE(&cVar61, &cVar62, (Global_23267 + (fParam5 * 0.5f)), (Global_23268 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, 0, 0);
}else{
GRAPHICS::DRAW_SPRITE(&cVar61, &cVar62, (Global_23267 + (fParam5 * 0.5f)), (Global_23268 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, 0, 0);
}}
if(Global_23270.f_8862){
iVar1=Global_23270.f_8858;
iVar2=Global_23270.f_8859;
iVar3=Global_23270.f_8860;
iVar4=Global_23270.f_8861;
}else{
iVar1=0;
iVar2=0;
iVar3=0;
iVar4=255;
}
func_371(Global_23267, (Global_23268 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
fVar49=(((Global_23268 + fVar55) + 0.034722f) + 0f);
if(MISC::GET_HASH_KEY(&(Global_23270.f_1)) !=0){
func_370();
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_1));
iVar15=0;
iVar16=0;
iVar17=0;
iVar18=0;
iVar14=0;
while (iVar14 < Global_23270.f_74){
if(Global_23270.f_5[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_10[iVar15]);
iVar15++;
}
elseif(Global_23270.f_5[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_14[iVar16], Global_23270.f_18[iVar16]);
iVar16++;
}
elseif(Global_23270.f_5[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_22[iVar17 /*6*/]));
iVar17++;
}
elseif(Global_23270.f_5[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_22[iVar17 /*6*/]));
iVar17++;
}
elseif(Global_23270.f_5[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_41[iVar18 /*16*/]));
iVar18++;
}
elseif(Global_23270.f_5[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_41[iVar18 /*16*/]));
iVar18++;
}
elseif(Global_23270.f_5[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_41[iVar18 /*16*/]));
iVar18++;
}
elseif(Global_23270.f_5[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_41[iVar18 /*16*/]));
iVar18++;
}
iVar14++;
}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_23267 + 0.00390625f), ((Global_23268 + fVar55) + 0.00416664f), 0);
}
if(Global_23270.f_6178){
func_370();
func_368((((Global_23267 + fParam5) - 0.00390625f) - func_369("CM_ITEM_COUNT", Global_23270.f_6179, Global_23270.f_6180)), ((Global_23268 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23270.f_6179, Global_23270.f_6180);
}elseif(Global_23270.f_6174 > Global_23270.f_5668){
if(Global_23270.f_6177 !=0){
func_370();
func_368((((Global_23267 + fParam5) - 0.00390625f) - func_369("CM_ITEM_COUNT", Global_23270.f_6177, Global_23270.f_6176)), ((Global_23268 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23270.f_6177, Global_23270.f_6176);
}}}
iVar6=Global_23270.f_6181;
iVar9=0;
fVar63=fVar49;
if(Global_23270.f_8872){
iVar1=Global_23270.f_8868;
iVar2=Global_23270.f_8869;
iVar3=Global_23270.f_8870;
iVar4=Global_23270.f_8871;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
while (iVar9 < Global_23270.f_5668 && iVar6 <=Global_23270.f_5661){
if(iVar6 >=0){
if(Global_23270.f_5928[iVar6]){
if(Global_23270.f_5799[iVar6] && iVar6 !=Global_23270.f_6181){
fVar49=(fVar49 + 0.00277776f);
}
fVar54=0.034722f;
if(Global_23270.f_6188[iVar6] !=0f){
fVar54=Global_23270.f_6188[iVar6];
}
fVar49=(fVar49 + fVar54);
iVar9++;
}}
iVar6++;
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar63 + ((fVar49 - fVar63) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar63), 0f, 255, 255, 255, 255, 0, 0);
if(Global_23270.f_6174 > Global_23270.f_5668){
if(Global_23270.f_8877){
iVar1=Global_23270.f_8873;
iVar2=Global_23270.f_8874;
iVar3=Global_23270.f_8875;
iVar4=Global_23270.f_8876;
}else{
iVar1=0;
iVar2=0;
iVar3=0;
iVar4=204;
}
func_371(Global_23267, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
Var38={
GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") 
};
Var38.f_0=(Var38.f_0 * (0.5f / fVar60));
Var38.f_1=(Var38.f_1 * (0.5f / fVar60));
if(Global_23270.f_8890){
iVar1=0;
iVar2=0;
iVar3=0;
iVar4=255;
}else{
HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
fVar49=(fVar49 + (0f + 0.034722f));
}
if(MISC::GET_HASH_KEY(&(Global_23270.f_5081)) !=0 && Global_23270.f_5163 !=-1){
fVar49=(fVar49 + (0.00277776f * 2f));
fVar40=(Global_23267 + 0.0046875f);
if(Global_23270.f_5165 !=0){
func_19(Global_23270.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
fVar40=(((Global_23267 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
}
func_367(fVar40);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23270.f_5081));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_23270.f_5159){
if(Global_23270.f_5093[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_5098[iVar15]);
iVar15++;
}elseif(Global_23270.f_5093[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
iVar16++;
}elseif(Global_23270.f_5093[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}
iVar14++;
}
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_371(Global_23267, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_367(fVar40);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_5081));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_23270.f_5159){
if(Global_23270.f_5093[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_5098[iVar15]);
iVar15++;
}elseif(Global_23270.f_5093[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
iVar16++;
}elseif(Global_23270.f_5093[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}
iVar14++;
}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
if(Global_23270.f_5165 !=0){
func_19(Global_23270.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
func_366(Global_23270.f_5165, 1, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_26(Global_23270.f_5165), func_23(Global_23270.f_5165, 1), ((Global_23267 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
fVar49=(fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_5087))){
fVar49=(fVar49 + (0.00138888f * 6f));
func_367(fVar40);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23270.f_5087));
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_371(Global_23267, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_367(fVar40);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_5087));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
fVar49=(fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
}
if(Global_23270.f_5163 > 0){
if((MISC::GET_GAME_TIMER() - Global_23270.f_5164) > Global_23270.f_5163){
StringCopy(&(Global_23270.f_5081), "", 24);
Global_23270.f_5163=-1;
}}}elseif(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_5087))){
fVar49=(fVar49 + (0.00277776f * 2f));
fVar40=(Global_23267 + 0.0046875f);
func_367(fVar40);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23270.f_5087));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_23270.f_5159){
if(Global_23270.f_5093[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_5098[iVar15]);
iVar15++;
}elseif(Global_23270.f_5093[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
iVar16++;
}elseif(Global_23270.f_5093[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}
iVar14++;
}
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_371(Global_23267, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_367(fVar40);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_5087));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
}
if(MISC::GET_HASH_KEY(&(Global_4540953.f_21)) !=0 && Global_4540953.f_65 !=-1){
fVar49=(fVar49 + (0.00277776f * 2f));
fVar40=(Global_23267 + 0.0046875f);
if(Global_4540953.f_67 !=0){
func_19(Global_4540953.f_67, 1, 1, &fVar36, &fVar37, bParam7);
fVar40=(((Global_23267 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
}
func_367(fVar40);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4540953.f_21));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_4540953.f_61){
if(Global_4540953.f_25[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4540953.f_30[iVar15]);
iVar15++;
}elseif(Global_4540953.f_25[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4540953.f_34[iVar16], Global_4540953.f_38[iVar16]);
iVar16++;
}elseif(Global_4540953.f_25[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}
iVar14++;
}
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_371(Global_23267, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_367(fVar40);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4540953.f_21));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_4540953.f_61){
if(Global_4540953.f_25[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4540953.f_30[iVar15]);
iVar15++;
}elseif(Global_4540953.f_25[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4540953.f_34[iVar16], Global_4540953.f_38[iVar16]);
iVar16++;
}elseif(Global_4540953.f_25[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}
iVar14++;
}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
if(Global_4540953.f_67 !=0){
func_19(Global_4540953.f_67, 1, 1, &fVar36, &fVar37, bParam7);
func_366(Global_4540953.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_26(Global_4540953.f_67), func_23(Global_4540953.f_67, 1), ((Global_23267 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
fVar49=(fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
if(Global_4540953.f_65 > 0){
if((MISC::GET_GAME_TIMER() - Global_4540953.f_66) > Global_4540953.f_65){
StringCopy(&(Global_4540953.f_21), "", 16);
Global_4540953.f_65=-1;
}}}
func_361(uVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
}
if(iVar5==1 || !Global_23270.f_6171){
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
iVar64=Global_23270.f_5661;
if(Global_23270.f_6172){
iVar64=(Global_23270.f_6175 - 1);
}
fVar65=0f;
fVar66=0f;
iVar7=0;
while (iVar7 <=iVar64){
fVar54=0.034722f;
if(Global_23270.f_6188[iVar6] !=0f){
fVar54=Global_23270.f_6188[iVar6];
}
if(Global_23270.f_6172){
iVar6=Global_23270.f_8513[iVar7];
}else{
iVar6=iVar7;
}
iVar12=iVar13;
bVar33=false;
if(iVar6 >=Global_23270.f_6181 && iVar9 < Global_23270.f_5668){
bVar33=true;
if(Global_23270.f_6182==iVar6){
fVar66=fVar65;
}
if(Global_23270.f_5799[iVar6]){
iVar12++;
}
fVar35=(((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
}
Global_23270.f_6322[iVar6]=fVar35;
fVar34=(Global_23267 + 0.0046875f);
bVar39=false;
bVar32=Global_23270.f_6182==iVar6;
if((bVar32 && iVar5==1) && bVar33){
iVar68=255;
iVar69=255;
iVar70=255;
iVar71=255;
if(Global_23270.f_8884){
HUD::GET_HUD_COLOUR(Global_23270.f_8883, &iVar68, &iVar69, &iVar70, &iVar71);
}else{
HUD::GET_HUD_COLOUR(1, &iVar68, &iVar69, &iVar70, &iVar71);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_23267 + (fParam5 * 0.5f)), (((fVar57 + fVar66) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar68, iVar69, iVar70, iVar71, 0, 0);
Global_23270.f_6320=fVar35;
}
iVar8=0;
while (iVar8 < Global_23270.f_5669){
if(MISC::IS_BIT_SET(Global_23270.f_5532[iVar6], iVar8) || Global_23270.f_5499[iVar8]==5){
if(Global_23270.f_6172){
iVar19=Global_23270.f_8529[((iVar9 * Global_23270.f_5669) + iVar8)];
iVar20=Global_23270.f_8570[((iVar9 * Global_23270.f_5669) + iVar8)];
iVar21=Global_23270.f_8611[((iVar9 * Global_23270.f_5669) + iVar8)];
iVar22=Global_23270.f_8652[((iVar9 * Global_23270.f_5669) + iVar8)];
iVar23=Global_23270.f_8693[((iVar9 * Global_23270.f_5669) + iVar8)];
}
else{
Global_23270.f_8529[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar19;
Global_23270.f_8570[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar20;
Global_23270.f_8611[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar21;
Global_23270.f_8652[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar22;
Global_23270.f_8693[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar23;
}
iVar72=0;
bVar53=false;
if(Global_23270.f_6454[0] !=-1){
if((iVar6 * 5 + iVar8)==Global_23270.f_6451[0]){
bVar53=true;
iVar72=0;
}
}
if(Global_23270.f_6454[1] !=-1){
if((iVar6 * 5 + iVar8)==Global_23270.f_6451[1]){
bVar53=true;
iVar72=1;
}
}
if(Global_23270.f_5505[iVar8] !=-1f){
fVar34=((Global_23267 + 0.0046875f) + Global_23270.f_5505[iVar8]);
}
if((iVar8 < 4 && Global_23270.f_5505[iVar8 + 1] !=-1f) && fVar34 < Global_23270.f_5505[iVar8 + 1]){
fVar44=(Global_23270.f_5505[iVar8 + 1] - fVar34);
}
else{
fVar44=(((Global_23267 + Global_23269) - 0.0046875f) - fVar34);
}
if((Global_23270.f_5518[iVar8] && Global_23270.f_6317) && bVar32){
bVar52=true;
}
else{
bVar52=false;
}
switch (Global_23270.f_5499[iVar8]){
case 0:
break;
case 1:
iVar24=iVar19;
if(bVar33){
if(!Global_23270.f_6172){
fVar41=0f;
fVar42=0f;
iVar25=0;
iVar26=0;
iVar27=0;
iVar28=0;
iVar29=0;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
bVar50=false;
bVar51=false;
iVar14=0;
while (iVar14 < 4){
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5 || Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
bVar51=true;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
bVar50=true;
}
iVar14++;
}
if(Global_23270.f_2130[iVar24]){
bVar51=true;
}
func_359(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, iVar72, bVar51, bVar50);
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23270.f_79[iVar24 /*6*/]));
}
iVar14=0;
while (iVar14 < 4){
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==1){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
}}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
}}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==6){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==7){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==2){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_4309[(iVar20 + iVar26)]);
}
iVar26++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==3){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_4566[(iVar21 + iVar27)], Global_23270.f_4695[(iVar21 + iVar27)]);
}
iVar27++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==4){
iVar28++;
}
iVar14++;
}
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
fVar41=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}
if(iVar28 > 0){
iVar14=0;
while (iVar14 < iVar28){
if(func_19(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar42=(fVar42 + fVar36);
if(iVar14 > 0){
fVar42=(fVar42 - (0.00078125f * 4f));
}
if((Global_23270.f_4824[(iVar22 + iVar14)]==2 || Global_23270.f_4824[(iVar22 + iVar14)]==52) || Global_23270.f_4824[(iVar22 + iVar14)]==62){
fVar42=(fVar42 - (0.00078125f * 5f));
}}
iVar14++;
}
}
fVar40=0f;
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
}
elseif(Global_23270.f_5526[iVar8]==0){
fVar40=(fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
}
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar40;
Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar41;
Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar42;
if(Global_23270.f_5526[iVar8]==2){
iVar67=(iVar8 - 1);
while (iVar67 >=0){
if(Global_23270.f_5526[iVar67]==2){
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar67)]=(Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar67)] - Global_23270.f_5511[iVar8]);
}
iVar67=(iVar67 + -1);
}
}
}
else{
fVar40=Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar41=Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar42=Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)];
}
if(bVar52){
if(func_19(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_19(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_366(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_26(26), func_23(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_19(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_19(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_366(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_26(27), func_23(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
}
iVar25=0;
iVar26=0;
iVar27=0;
iVar28=0;
iVar29=0;
iVar31=0;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
bVar50=false;
bVar51=false;
iVar14=0;
while (iVar14 < 4){
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5 || Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
bVar51=true;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
bVar50=true;
}
iVar14++;
}
if(Global_23270.f_2130[iVar24]){
bVar51=true;
}
func_359(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
if(Global_23270.f_8888 && Global_23270.f_8889==iVar6){
func_358(bVar32);
}
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_79[iVar24 /*6*/]));
}
iVar14=0;
while (iVar14 < 4){
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==1){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
}
iVar31=1;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
}
iVar31=8;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=5;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==6){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=6;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==7){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=7;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=9;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==2){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_4309[(iVar20 + iVar26)]);
}
iVar26++;
iVar31=2;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==3){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_4566[(iVar21 + iVar27)], Global_23270.f_4695[(iVar21 + iVar27)]);
}
iVar27++;
iVar31=3;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==4){
if((Global_23270.f_4824[(iVar22 + iVar28)]==2 || Global_23270.f_4824[(iVar22 + iVar28)]==52) || Global_23270.f_4824[(iVar22 + iVar28)]==62){
if(func_19(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + (fVar36 * 0.5f));
if(func_19(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_366(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
if(Global_23270.f_5526[iVar8]==2){
GRAPHICS::DRAW_SPRITE(func_26(Global_23270.f_4824[(iVar22 + iVar28)]), func_23(Global_23270.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
else{
GRAPHICS::DRAW_SPRITE(func_26(Global_23270.f_4824[(iVar22 + iVar28)]), func_23(Global_23270.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
}
fVar40=(fVar40 + (0.00078125f * 3f));
}}}
iVar28++;
iVar31=4;
}
iVar14++;
}
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
if(iVar31==4 && Global_23270.f_5526[iVar8]==2){
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
}
else{
HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar40), fVar35, 0);
if(func_357() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0){
if(iVar8==0){
if(Global_23270.f_2130[iVar24]){
bVar51=true;
}
func_359(0, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
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
HUD::ADD_TEXT_COMPONENT_INTEGER((Global_23270.f_6181 + iVar30));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar78), (fVar35 + fVar77), 0);
iVar30++;
}}
}
}
if(iVar28 > 0){
fVar40=(fVar40 + (6f * 0.00078125f));
iVar14=0;
while (iVar14 < iVar28){
if((Global_23270.f_4824[(iVar22 + iVar14)] !=2 && Global_23270.f_4824[(iVar22 + iVar14)] !=52) && Global_23270.f_4824[(iVar22 + iVar14)] !=62){
if(func_19(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + (fVar36 * 0.5f));
if(iVar5==1){
if(func_19(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_366(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
if(Global_23270.f_4824[(iVar22 + iVar14)]==30){
GRAPHICS::DRAW_SPRITE(func_26(Global_23270.f_4824[(iVar22 + iVar14)]), func_23(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), (Global_23267 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
elseif(Global_23270.f_5526[iVar8]==2){
GRAPHICS::DRAW_SPRITE(func_26(Global_23270.f_4824[(iVar22 + iVar14)]), func_23(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
else{
GRAPHICS::DRAW_SPRITE(func_26(Global_23270.f_4824[(iVar22 + iVar14)]), func_23(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
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
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==1){
iVar19++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
iVar19++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==2){
iVar20++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==3){
iVar21++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==4){
iVar22++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5){
iVar23++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==6){
iVar23++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==7){
iVar23++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
iVar23++;
}
iVar14++;
}
break;
case 2:
if(bVar33){
if(!Global_23270.f_6172){
func_359(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, 0, 0);
if(Global_23270.f_8888 && Global_23270.f_8889==iVar6){
func_358(bVar32);
}
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_4309[iVar20]);
fVar41=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
fVar40=0f;
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
}
elseif(Global_23270.f_5526[iVar8]==0){
fVar40=(fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
}
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar40;
Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar41;
}
else{
fVar40=Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar41=Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
}
if(bVar52){
if(func_19(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_19(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_366(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_26(26), func_23(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_19(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_19(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_366(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_26(27), func_23(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
}
if(iVar5==1){
func_359(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, 0, 0);
func_356((fVar34 + fVar40), fVar35, "NUMBER", Global_23270.f_4309[iVar20], 0);
}}
bVar39=true;
iVar20++;
break;
case 3:
if(bVar33){
if(!Global_23270.f_6172){
func_359(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, 0, 0);
if(Global_23270.f_8888 && Global_23270.f_8889==iVar6){
func_358(bVar32);
}
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_4566[iVar21], Global_23270.f_4695[iVar21]);
fVar41=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
fVar40=0f;
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
}
elseif(Global_23270.f_5526[iVar8]==0){
fVar40=(fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
}
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar40;
Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar41;
}
else{
fVar40=Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar41=Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
}
if(bVar52){
if(func_19(26, 1, 0, &fVar36, &fVar37, 0)){
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_19(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_366(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_26(26), func_23(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_19(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_19(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_366(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_26(27), func_23(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
}
func_359(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, 0, 0);
func_355((fVar34 + fVar40), fVar35, "NUMBER", Global_23270.f_4566[iVar21], Global_23270.f_4695[iVar21]);
}
bVar39=true;
iVar21++;
break;
case 4:
if(bVar33){
if(func_19(Global_23270.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7)){
if(!Global_23270.f_6172){
fVar42=fVar36;
fVar40=0f;
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
}elseif(Global_23270.f_5526[iVar8]==0){
fVar40=(fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
}
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar40;
Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar42;
}
else{
fVar40=Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar42=Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)];
}
if(bVar52){
if(func_19(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_19(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_366(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_26(26), func_23(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}}
if(func_19(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_19(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_366(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_26(27), func_23(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}}
}
if(iVar5==1){
if(func_19(Global_23270.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_366(Global_23270.f_4824[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_26(Global_23270.f_4824[iVar22]), func_23(Global_23270.f_4824[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_354(Global_23270.f_4824[iVar22])), (fVar37 * func_354(Global_23270.f_4824[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
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
if(Global_23270.f_5499[iVar8]==5){
if(Global_23270.f_5511[iVar8] > 0.05f){
fVar34=(fVar34 + Global_23270.f_5511[iVar8]);
}else{
fVar34=(fVar34 + 0.05f);
}
}
else{
fVar34=(fVar34 + Global_23270.f_5511[iVar8]);
if(Global_23270.f_5518[iVar8]){
if(func_19(26, 1, 1, &fVar36, &fVar37, bParam7)){
fVar34=(fVar34 - fVar36);
}}
}}else{
fVar34=(fVar34 + Global_23270.f_5511[iVar8]);
}
iVar8++;
}
if(bVar39){
if(bVar33){
Global_23270.f_8513[iVar9]=iVar6;
Global_23270.f_6183=iVar6;
iVar9++;
if(Global_23270.f_5799[iVar6]){
iVar13++;
}
if(Global_23270.f_6188[iVar6] !=0f){
fVar65=(fVar65 + Global_23270.f_6188[iVar6]);
}
else{
fVar65=(fVar65 + 0.034722f);
}}
if(!Global_23270.f_6171){
Global_23270.f_5928[iVar6]=1;
if(Global_23270.f_5670[iVar6]){
if(bVar32){
Global_23270.f_6177=0;
}
}
else{
iVar11++;
if(bVar32){
Global_23270.f_6177=iVar11;
}
}
iVar10++;
}}
iVar7++;
}
if(!Global_23270.f_6171){
Global_23270.f_6173=((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12)));
Global_23270.f_6176=iVar11;
Global_23270.f_6174=iVar10;
Global_23270.f_6171=1;
}}
if(!Global_23270.f_6172){
Global_23270.f_6175=iVar9;
Global_23270.f_6172=1;
}
iVar5++;
}
Global_23270.f_6319=fVar49;
Global_23270.f_6321=MISC::GET_GAME_TIMER();
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23270.f_6319);
if(!Global_23270.f_8857){
func_41(0);
}
Global_23270.f_8857=0;
if(bParam2){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
if(bParam0){
func_205(1);
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


float func_354(int iParam0){
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


void func_355(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}


void func_356(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}


var func__357(){
return DLC::IS_DLC_PRESENT(-1762644250);
}


void func_358(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
if(bParam0){
HUD::GET_HUD_COLOUR(Global_23270.f_8885[0], &iVar0, &iVar1, &iVar2, &uVar3);
}else{
HUD::GET_HUD_COLOUR(Global_23270.f_8885[1], &iVar0, &iVar1, &iVar2, &uVar3);
}
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}


void func_359(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(bParam2){
if(bParam3){
func_360(Global_23270.f_6454[iParam4], &iVar0, &iVar1, &iVar2);
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


void func_360(int iParam0, var uParam1, var uParam2, var uParam3){
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


void func_361(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(!func_348(&iVar0, 0, iParam1)){
return;
}
uParam0=uParam0;
if(iParam3 && !func_376(bParam4, bParam8)){
return;
}
if(func_364()){
return;
}
if(NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return;
}
if(iParam7==0){
if(func_362(PLAYER::PLAYER_ID(), 0)){
return;
}}
if(MISC::IS_PC_VERSION()){
if(MISC::UPDATE_ONSCREEN_KEYBOARD()==0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return;
}}
if(Global_23270.f_5166 !=0){
if(PAD::HAVE_CONTROLS_CHANGED(2)){
iVar1=0;
while (iVar1 < Global_23270.f_5166){
if(Global_23270.f_5465[iVar1] !=363){
StringCopy(&(Global_23270.f_5168[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, Global_23270.f_5465[iVar1], 1), 64);
}elseif(Global_23270.f_5480[iVar1] !=32){
StringCopy(&(Global_23270.f_5168[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, Global_23270.f_5480[iVar1], 1), 64);
}
iVar1++;
}
Global_23270.f_5167=0;
}
if(!Global_23270.f_5167){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "CLEAR_ALL");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23270.f_5524 / 100f)));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iVar1=0;
while (iVar1 < Global_23270.f_5166){
if(MISC::GET_HASH_KEY(&(Global_23270.f_5393[iVar1 /*4*/])) !=MISC::GET_HASH_KEY("PREV")){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
func_13(&(Global_23270.f_5168[iVar1 /*16*/]));
iVar2=iVar1 + 1;
while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23270.f_5393[iVar2 /*4*/]))==MISC::GET_HASH_KEY("PREV")){
func_13(&(Global_23270.f_5168[iVar2 /*16*/]));
iVar2++;
}
if(Global_23270.f_5450[iVar1]==-1){
func_12(&(Global_23270.f_5393[iVar1 /*4*/]));
}else{
iVar3=Global_23270.f_5450[iVar1];
if(iParam2 >=0){
iVar3=iParam2;
}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23270.f_5393[iVar1 /*4*/]));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
}
else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
if(MISC::IS_PC_VERSION()){
if(Global_23270.f_5465[iVar1] !=363 && MISC::IS_BIT_SET(Global_23270.f_5495, iVar1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23270.f_5465[iVar1]);
}
else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
}}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iVar1++;
}
if(MISC::GET_HASH_KEY(&(Global_4540953.f_16)) !=MISC::GET_HASH_KEY("")){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23270.f_5166);
func_13(&Global_4540953);
if(Global_4540953.f_20==-1){
func_12(&(Global_4540953.f_16));
}else{
iVar4=Global_23270.f_5450[iVar1];
if(iParam2 >=0){
iVar4=iParam2;
}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540953.f_16));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
}else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
if(Global_23270.f_5525){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
Global_23270.f_5167=1;
}
iVar1=0;
while (iVar1 < Global_23270.f_5166){
if(Global_23270.f_5450[iVar1] !=-1){
if(iParam2 > 0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23270.f_5393[iVar1 /*4*/]));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
}else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
iVar1++;
}
if(Global_4540953.f_20 !=-1){
if(iParam2 > 0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540953.f_16));
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
if(!Global_23270.f_8892){
HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
Global_23270.f_8892=1;
}}elseif(Global_23270.f_8892){
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_23270.f_8892=0;
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
if(Global_23270.f_5498){
GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23270.f_6103[iVar0 /*10*/], Global_23270.f_5496, Global_23270.f_5497, 1f, 1f, 255, 255, 255, 255, 0);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}else{
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23270.f_6103[iVar0 /*10*/], 255, 255, 255, 255, 0);
}}}


bool func_362(int iParam0, int iParam1){
bool bVar0;
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_363(-1, 0)==8;
}else{
bVar0=Global_1853910[iParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_363(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_65();
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

int func_364(){
struct<3> Var0;
if(Global_20383.f_1 > 3){
return 1;
}
if(func_365()){
Var0={
0f, -500f, 0f 
};
MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
if(Global_20328==0){
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

int func_365(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0){
return 1;
}
return 0;
}


void func_366(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5){
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


void func_367(float fParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
HUD::SET_TEXT_FONT(0);
HUD::SET_TEXT_SCALE(0f, 0.35f);
HUD::SET_TEXT_LEADING(2);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
HUD::SET_TEXT_WRAP(fParam0, ((Global_23267 + Global_23269) - 0.0046875f));
HUD::SET_TEXT_CENTRE(0);
HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}


void func_368(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}


float func_369(char* sParam0, int iParam1, int iParam2){
if(!MISC::IS_STRING_NULL(sParam0)){
if(MISC::GET_HASH_KEY(sParam0)==0){
return 0f;
}}else{
return 0f;
}
func_370();
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}


void func_370(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
if(Global_23270.f_8867){
iVar0=Global_23270.f_8863;
iVar1=Global_23270.f_8864;
iVar2=Global_23270.f_8865;
iVar3=Global_23270.f_8866;
}
HUD::SET_TEXT_FONT(0);
HUD::SET_TEXT_SCALE(0f, 0.35f);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
HUD::SET_TEXT_WRAP((Global_23267 + 0.0046875f), ((Global_23267 + Global_23269) - 0.0046875f));
HUD::SET_TEXT_CENTRE(0);
HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}


void func_371(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7){
GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}


void func_372(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6){
int iVar0;
float fVar1;
float fVar2;
var uVar3;
float fVar4;
if(Global_23270.f_5661 > iParam0){
return;
}
if(Global_23270.f_5661 >=128){
return;
}
if(Global_23270.f_5663 >=256){
return;
}
if(Global_23270.f_6186 < Global_23270.f_6184){
return;
}
if(Global_23270.f_5661 !=iParam0){
Global_23270.f_5661=iParam0;
Global_23270.f_5662=0;
}
iVar0=Global_23270.f_5499[Global_23270.f_5662];
if(iVar0 !=1){
while (Global_23270.f_5662 < 4 && iVar0 !=1){
Global_23270.f_5662++;
iVar0=Global_23270.f_5499[Global_23270.f_5662];
}
if(iVar0 !=1){
return;
}}
StringCopy(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]), sParam1, 24);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1)){}
Global_23270.f_1616[Global_23270.f_5663]=bParam3;
Global_23270.f_1873[Global_23270.f_5663]=iParam4;
Global_23270.f_2130[Global_23270.f_5663]=iParam6;
Global_23270.f_5663++;
if(!bParam3){
func_375(Global_23270.f_5661, 1);
}else{
func_375(Global_23270.f_5661, 0);
}
if(iParam2==0){
fVar1=func_374(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]));
if(Global_23270.f_5518[Global_23270.f_5662]){
func_19(26, 1, 0, &fVar2, &uVar3, 0);
fVar1=(fVar1 + (fVar2 * 2f));
}
if(fVar1 > Global_23270.f_5511[Global_23270.f_5662]){
Global_23270.f_5511[Global_23270.f_5662]=fVar1;
}}
if(bParam5){
if(iParam2==0){
fVar4=func_373(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]));
if(fVar4 > Global_23270.f_6188[iParam0]){
Global_23270.f_6188[iParam0]=fVar4;
}}}
MISC::SET_BIT(&(Global_23270.f_5532[iParam0]), Global_23270.f_5662);
Global_23270.f_5662++;
Global_23270.f_6187=1;
Global_23270.f_6185=(Global_23270.f_5663 - 1);
Global_23270.f_6186=0;
Global_23270.f_6184=iParam2;
}


float func_373(char* sParam0){
if(!HUD::DOES_TEXT_LABEL_EXIST(sParam0)){}
return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}


float func_374(char* sParam0){
if(!MISC::IS_STRING_NULL(uParam0)){
if(MISC::GET_HASH_KEY(sParam0)==0){
return 0f;
}}else{
return 0f;
}
func_359(0, 1, 0, 0, 0, 0, 0);
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}


void func_375(int iParam0, bool bParam1){
int iVar0;
iVar0=floor((to_float(iParam0) / 32f));
if(bParam1){
MISC::SET_BIT(&(Global_23270.f_6458[iVar0]), (iParam0 - iVar0 * 32));
}else{
MISC::CLEAR_BIT(&(Global_23270.f_6458[iVar0]), (iParam0 - iVar0 * 32));
}}

int func_376(bool bParam0, bool bParam1){
if(Global_2672505.f_1685.f_701 !=0){
return 1;
}
if((((((((!CAM::IS_SCREEN_FADED_IN() || (func_378(8, -1) && func_377() !=65)) || (HUD::GET_PAUSE_MENU_STATE() !=0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_78819) || Global_23270.f_8891) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100733.f_1474){
return 0;
}
return 1;
}

int func_377(){
return Global_1574993;
}


var func__378(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}

int func_379(int iParam0, bool bParam1){
if(bParam1){
switch (iParam0){
case 1:
return 1;
case 2:
return 3;
case 3:
return 5;
default:}}else{
switch (iParam0){
case 1:
return 1;
case 2:
return 3;
case 3:
return 6;
case 4:
return 9;
case 5:
return 11;
case 6:
return 13;
case 7:
return 15;
}
default:
}
return 0;
}

int func_380(var uParam0, int iParam1, int iParam2){
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
return 0;
}
if(iParam2==0){
return 0;
}
if(func_401(0)==1 && Global_4541029==iParam1){
if(!func_426(uParam0)){
func_381(uParam0);
return 1;
}elseif(func_7(uParam0) > 0.25f){
func_441(uParam0);
return 1;
}}elseif(func_426(uParam0)){
func_427(uParam0);
}
return 0;
}


void func_381(var uParam0){
if(!func_426(uParam0)){
func_441(uParam0);
}}

int func_382(var uParam0){
float fVar0;
fVar0=0f;
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
fVar0=PAD::GET_CONTROL_NORMAL(2, 218);
}
if((fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2, 190)) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 190)){
if(!func_426(uParam0)){
func_381(uParam0);
return 1;
}elseif(func_7(uParam0) > 0.25f){
func_441(uParam0);
return 1;
}}elseif(func_426(uParam0)){
func_427(uParam0);
}
return 0;
}


void func_383(var uParam0){
var uVar0;
var uVar1;
var uVar2;
var uVar3;
func_351(0, 0);
HUD::GET_HUD_COLOUR(141, &uVar0, &uVar1, &uVar2, &uVar3);
func_396(uVar0, uVar1, uVar2, uVar3, 1);
func_395(1, 2, 0, 0, 0);
func_394(1, 2, 1, 1, 1);
func_393(0, 1, 0, 0, 0);
func_392("DARTS_TITLE");
func_390(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
func_372(0, "DARTS_LEGS", 0, 1, 0, 0, 0);
func_387(0, func_379(uParam0->f_662 + 1, 1), 0);
func_372(1, "DARTS_SETS", 0, 1, 0, 0, 0);
func_387(1, func_379(uParam0->f_664 + 1, 0), 0);
func_386(2, 141, 141, 1);
func_372(2, "DARTS_START", 0, 1, 0, 0, 0);
func_385(0);
func_404(uParam0->f_660, 1, 1);
if(uParam0->f_660 !=2){
func_403(func_115(uParam0->f_660==0, "DARTS_LEGD", "DARTS_SETD"), 0, 0);
}
func_384(201, "ITEM_SELECT", -1, 0);
func_384(202, "IB_QUIT", -1, 0);
}


void func_384(int iParam0, char* sParam1, int iParam2, bool bParam3){
char* sVar0;
sVar0=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, 1);
if(Global_23270.f_5166 >=14){
StringCopy(&Global_4540953, sVar0, 64);
StringCopy(&(Global_4540953.f_16), sParam1, 16);
Global_4540953.f_20=iParam2;
return;
return;
}
if(!bParam3){
MISC::SET_BIT(&(Global_23270.f_5495), Global_23270.f_5166);
}
StringCopy(&(Global_23270.f_5168[Global_23270.f_5166 /*16*/]), sVar0, 64);
StringCopy(&(Global_23270.f_5393[Global_23270.f_5166 /*4*/]), sParam1, 16);
Global_23270.f_5450[Global_23270.f_5166]=iParam2;
Global_23270.f_5465[Global_23270.f_5166]=iParam0;
Global_23270.f_5480[Global_23270.f_5166]=32;
Global_23270.f_5166++;
}


void func_385(int iParam0){
Global_23270.f_6181=iParam0;
}


void func_386(int iParam0, int iParam1, int iParam2, int iParam3){
Global_23270.f_8888=iParam3;
Global_23270.f_8885[0]=iParam1;
Global_23270.f_8885[1]=iParam2;
Global_23270.f_8889=iParam0;
}


void func_387(int iParam0, int iParam1, bool bParam2){
int iVar0;
float fVar1;
float fVar2;
var uVar3;
float fVar4;
if(Global_23270.f_5661 > iParam0){
return;
}
if(Global_23270.f_5661 >=128){
return;
}
if(Global_23270.f_5665 >=256){
return;
}
if(Global_23270.f_6186 < Global_23270.f_6184){
return;
}
if(Global_23270.f_5661 !=iParam0){
Global_23270.f_5661=iParam0;
Global_23270.f_5662=0;
}
iVar0=Global_23270.f_5499[Global_23270.f_5662];
if(iVar0 !=2){
while (Global_23270.f_5662 < 4 && iVar0 !=2){
Global_23270.f_5662++;
iVar0=Global_23270.f_5499[Global_23270.f_5662];
}
if(iVar0 !=2){
return;
}}
Global_23270.f_4309[Global_23270.f_5665]=iParam1;
Global_23270.f_5665++;
fVar1=func_389("NUMBER", iParam1);
if(Global_23270.f_5518[Global_23270.f_5662]){
func_19(26, 1, 0, &fVar2, &uVar3, 0);
fVar1=(fVar1 + (fVar2 * 2f));
}
if(fVar1 > Global_23270.f_5511[Global_23270.f_5662]){
Global_23270.f_5511[Global_23270.f_5662]=fVar1;
}
if(bParam2){
fVar4=func_388("NUMBER", iParam1);
if(fVar4 > Global_23270.f_6188[iParam0]){
Global_23270.f_6188[iParam0]=fVar4;
}}
MISC::SET_BIT(&(Global_23270.f_5532[iParam0]), Global_23270.f_5662);
Global_23270.f_5662++;
Global_23270.f_6187=2;
}


float func_388(char* sParam0, int iParam1){
if(!HUD::DOES_TEXT_LABEL_EXIST(sParam0)){}
if(iParam1==0){}
return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}


float func_389(char* sParam0, int iParam1){
if(!HUD::DOES_TEXT_LABEL_EXIST(sParam0)){
return 0f;
}
func_359(1, 1, 0, 0, 0, 0, 0);
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}


void func_390(int iParam0, char* sParam1, char* sParam2){
Global_23270=iParam0;
func_391(29, sParam1, sParam2);
}


void func_391(int iParam0, char* sParam1, char* sParam2){
StringCopy(&(Global_23270.f_6463[iParam0 /*16*/]), sParam1, 64);
StringCopy(&(Global_23270.f_7488[iParam0 /*16*/]), sParam2, 64);
}


void func_392(char* sParam0){
int iVar0;
StringCopy(&(Global_23270.f_1), sParam0, 16);
Global_23270.f_74=0;
Global_23270.f_75=0;
Global_23270.f_76=0;
Global_23270.f_77=0;
Global_23270.f_78=0;
iVar0=0;
while (iVar0 < 4){
Global_23270.f_5[iVar0]=0;
iVar0++;
}}


void func_393(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
Global_23270.f_5518[0]=iParam0;
Global_23270.f_5518[1]=iParam1;
Global_23270.f_5518[2]=iParam2;
Global_23270.f_5518[3]=iParam3;
Global_23270.f_5518[4]=iParam4;
}


void func_394(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
Global_23270.f_5526[0]=iParam0;
Global_23270.f_5526[1]=iParam1;
Global_23270.f_5526[2]=iParam2;
Global_23270.f_5526[3]=iParam3;
Global_23270.f_5526[4]=iParam4;
}


void func_395(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
Global_23270.f_5499[0]=iParam0;
Global_23270.f_5499[1]=iParam1;
Global_23270.f_5499[2]=iParam2;
Global_23270.f_5499[3]=iParam3;
Global_23270.f_5499[4]=iParam4;
Global_23270.f_5669=0;
if(iParam0 !=0){
Global_23270.f_5669++;
}
if(iParam1 !=0){
Global_23270.f_5669++;
}
if(iParam2 !=0){
Global_23270.f_5669++;
}
if(iParam3 !=0){
Global_23270.f_5669++;
}
if(iParam4 !=0){
Global_23270.f_5669++;
}}


void func_396(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4){
Global_23270.f_8862=iParam4;
Global_23270.f_8858=uParam0;
Global_23270.f_8859=uParam1;
Global_23270.f_8860=uParam2;
Global_23270.f_8861=uParam3;
}

int func_397(var uParam0, int iParam1, int iParam2){
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
return 0;
}
if(iParam2==0){
return 0;
}
if(func_401(0)==-1 && Global_4541029==iParam1){
if(!func_426(uParam0)){
func_381(uParam0);
return 1;
}elseif(func_7(uParam0) > 0.25f){
func_441(uParam0);
return 1;
}}elseif(func_426(uParam0)){
func_427(uParam0);
}
return 0;
}

int func_398(var uParam0){
float fVar0;
fVar0=0f;
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
fVar0=PAD::GET_CONTROL_NORMAL(2, 218);
}
if(fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2, 189)){
if(!func_426(uParam0)){
func_381(uParam0);
return 1;
}elseif(func_7(uParam0) > 0.25f){
func_441(uParam0);
return 1;
}}elseif(func_426(uParam0)){
func_427(uParam0);
}
return 0;
}

int func_399(var uParam0){
float fVar0;
fVar0=0f;
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
fVar0=PAD::GET_CONTROL_NORMAL(2, 219);
}
if(fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2, 187)){
if(!func_426(uParam0)){
func_381(uParam0);
return 1;
}elseif(func_7(uParam0) > 0.25f){
func_441(uParam0);
return 1;
}}elseif(func_426(uParam0)){
func_427(uParam0);
}
return 0;
}

int func_400(var uParam0){
float fVar0;
fVar0=0f;
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
fVar0=PAD::GET_CONTROL_NORMAL(2, 219);
}
if(fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2, 188)){
if(!func_426(uParam0)){
func_381(uParam0);
return 1;
}elseif(func_7(uParam0) > 0.25f){
func_441(uParam0);
return 1;
}}elseif(func_426(uParam0)){
func_427(uParam0);
}
return 0;
}

int func_401(float fParam0){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
fVar6=0.02f;
fVar0=0.05f;
fVar2=(fVar0 + Global_23269);
fVar1=(Global_23270.f_6173 - (IntToFloat(Global_23270.f_6175) * 0.034722f));
fVar5=(fVar0 + fParam0);
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar0, fVar1, &fVar0, &fVar1);
GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar2, fVar3, &fVar2, &fVar3);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
fVar4=(fVar2 - fVar6);
if(fParam0 > 0f){
if(Global_4541023 >=fVar0 && Global_4541023 < fVar5){
return -999;
}}
if(Global_4541023 >=fVar0 && Global_4541023 < fVar4){
return -1;
}
if(Global_4541023 >=fVar4 && Global_4541023 <=fVar2){
return 1;
}
return 0;
}

int func_402(){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
return PAD::IS_DISABLED_CONTROL_PRESSED(2, 237);
}
return 0;
}


void func_403(char* sParam0, int iParam1, int iParam2){
int iVar0;
StringCopy(&(Global_23270.f_5081), sParam0, 24);
Global_23270.f_5159=0;
Global_23270.f_5160=0;
Global_23270.f_5161=0;
Global_23270.f_5162=0;
Global_23270.f_5163=iParam1;
Global_23270.f_5164=MISC::GET_GAME_TIMER();
Global_23270.f_5165=iParam2;
iVar0=0;
while (iVar0 < 4){
Global_23270.f_5093[iVar0]=0;
iVar0++;
}}


void func_404(int iParam0, bool bParam1, int iParam2){
int iVar0;
int iVar1;
Global_23270.f_6182=iParam0;
Global_23270.f_6317=iParam2;
if(Global_23270.f_6182 < Global_23270.f_6181){
Global_23270.f_6181=Global_23270.f_6182;
}elseif((Global_23270.f_6172 && Global_23270.f_6182 > Global_23270.f_6183) || (!Global_23270.f_6172 && Global_23270.f_6182 >=(Global_23270.f_6181 + Global_23270.f_5668))){
iVar0=Global_23270.f_6181;
while (iVar0 <=Global_23270.f_6182){
if(iVar0 >=0 && iVar0 < 127){
if(Global_23270.f_5532[iVar0] !=0){
iVar1++;
}}
iVar0++;
}
while (iVar1 > Global_23270.f_5668 && Global_23270.f_6181 < 128){
Global_23270.f_6181++;
iVar1=0;
iVar0=Global_23270.f_6181;
while (iVar0 <=Global_23270.f_6182){
if(iVar0 >=0 && iVar0 < 127){
if(Global_23270.f_5532[iVar0] !=0){
iVar1++;
}}
iVar0++;
}}}
Global_23270.f_6171=0;
Global_23270.f_6172=0;
if(bParam1){
StringCopy(&(Global_23270.f_5081), "", 24);
StringCopy(&(Global_4540953.f_21), "", 16);
}}

int func_405(){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(Global_4541029 > -1){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 237)){
return 1;
}}}
return 0;
}

int func_406(int iParam0, int iParam1, bool bParam2){
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
return 0;
}
if(HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE()){
return 0;
}
if(bParam2){
HUD::SET_MOUSE_CURSOR_THIS_FRAME();
}
if(Global_4541029==-6){
HUD::SET_MOUSE_CURSOR_STYLE(4);
if(iParam0 && PAD::IS_CONTROL_PRESSED(2, 237)){
return 1;
}else{
Global_4541029=-1;
return 0;
}}
if(((Global_4541029 > -1 || Global_4541029==-3) || Global_4541029==-2) || HUD::IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS()){
HUD::SET_MOUSE_CURSOR_STYLE(1);
return 0;
}
if(Global_4541029==-1 && iParam0){
if(PAD::IS_CONTROL_PRESSED(2, 237)){
HUD::SET_MOUSE_CURSOR_STYLE(4);
Global_4541029=-6;
return 1;
}else{
HUD::SET_MOUSE_CURSOR_STYLE(3);
return 0;
}}
HUD::SET_MOUSE_CURSOR_STYLE(1);
return 0;
}


void func_407(bool bParam0, bool bParam1, bool bParam2, bool bParam3){
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
Global_4541029=-1;
return;
}
PAD::SET_USE_ADJUSTED_MOUSE_COORDS(1);
fVar0=Global_23267;
fVar2=(fVar0 + Global_23269);
fVar3=Global_23270.f_6173;
fVar1=(Global_23270.f_6173 - (IntToFloat(Global_23270.f_6175) * 0.034722f));
if(bParam2){
fVar3=(fVar3 + 0.034722f);
fVar1=(fVar1 + 0.034722f);
}
if(Global_23270.f_6175 < 1){
fVar1=(Global_23270.f_6173 - 0.034722f);
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
fVar4=fVar0;
fVar5=fVar1;
GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar0, fVar1, &fVar0, &fVar1);
GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar2, fVar3, &fVar2, &fVar3);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
func_409();
if(Global_4541029==-6){
return;
}
Global_4541029=-1;
fVar7=Global_4541023;
fVar8=Global_4541024;
if(Global_23270.f_6176 > Global_23270.f_6175){
if(((Global_4541023 >=fVar0 && Global_4541023 <=fVar2) && Global_4541024 >=fVar3) && Global_4541024 < (fVar3 + fVar6)){
Global_4541029=-2;
if(bParam3){
func_408(0);
}
return;
}
if(((Global_4541023 >=fVar0 && Global_4541023 <=fVar2) && Global_4541024 >=(fVar3 + fVar6)) && Global_4541024 < (fVar3 + 0.034722f)){
Global_4541029=-3;
if(bParam3){
func_408(0);
}
return;
}}
if(((fVar7 >=fVar0 && fVar7 <=fVar2) && fVar8 >=fVar1) && fVar8 <=fVar3){
fVar9=(fVar8 - fVar1);
iVar13=floor((fVar9 / 0.034722f));
if(Global_23270.f_6176==-1){
Global_4541029=0;
iVar13=0;
return;
}
iVar11=148;
iVar12=(iVar11 / Global_23270.f_6175);
iVar10=(32 + (iVar11 - (iVar12 * iVar13)));
if(bParam3){
if(!bParam1 || iVar13 !=0){
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
func_371(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_23269, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}}
Global_4541029=Global_23270.f_8513[iVar13];
return;
}
if(!bParam0){
if(fVar7 < fVar2){
Global_4541029=-4;
return;
}
if(fVar8 > 0.9f){
Global_4541029=-5;
return;
}}elseif(fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f)){
Global_4541029=-4;
return;
}
Global_4541029=-1;
}


void func_408(bool bParam0){
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
fVar0=Global_23267;
fVar1=Global_23270.f_6173;
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
if(Global_4541029==-2){
func_371(fVar0, fVar1, Global_23269, fVar2, 255, 255, 255, iVar3);
}elseif(Global_4541029==-3){
func_371(fVar0, (fVar1 + fVar2), Global_23269, fVar2, 255, 255, 255, iVar3);
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


void func_409(){
Global_4541025=Global_4541023;
Global_4541026=Global_4541024;
Global_4541023=PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
Global_4541024=PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
Global_4541027=(Global_4541023 - Global_4541025);
Global_4541028=(Global_4541024 - Global_4541026);
}


float func_410(float fParam0){
if(fParam0 < 1.3f){
return 35f;
}elseif(fParam0 < 1.35f){
return 33f;
}
return 30f;
}


void func_411(var uParam0){
var uVar0;
var uVar1;
var uVar2;
var uVar3;
uParam0->f_660=0;
uParam0->f_661=3;
uParam0->f_662=0;
uParam0->f_663=3;
uParam0->f_664=0;
uParam0->f_665=7;
func_351(0, 0);
HUD::GET_HUD_COLOUR(141, &uVar0, &uVar1, &uVar2, &uVar3);
func_396(uVar0, uVar1, uVar2, uVar3, 1);
func_395(1, 2, 0, 0, 0);
func_394(1, 2, 1, 1, 1);
func_393(0, 1, 0, 0, 0);
func_392("DARTS_TITLE");
func_390(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
func_372(0, "DARTS_LEGS", 0, 1, 0, 0, 0);
func_387(0, 1, 0);
func_372(1, "DARTS_SETS", 0, 1, 0, 0, 0);
func_387(1, 1, 0);
func_372(2, "DARTS_START", 0, 1, 0, 0, 0);
func_386(2, 141, 141, 1);
func_385(0);
func_404(0, 1, 1);
func_403("DARTS_LEGD", 0, 0);
func_412();
func_384(201, "ITEM_SELECT", -1, 0);
func_384(202, "IB_QUIT", -1, 0);
}


void func_412(){
if(MISC::IS_PC_VERSION()){
PAD::SET_CURSOR_POSITION(0.325f, 0.3f);
}}

int func_413(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5){
int iVar0;
int iVar1;
if((func_437() && MISC::GET_GAME_TIMER() >=iLocal_164 + 1000) && *iParam0 !=8){
if(!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT()){
CAM::DO_SCREEN_FADE_OUT(500);
}}
if(CAM::IS_SCREEN_FADED_OUT() && *iParam0 !=8){
*iParam0=8;
}
switch (*iParam0){
case 2:
switch (iLocal_31){
case 0:
if(*uParam3==2){
iLocal_164=MISC::GET_GAME_TIMER();
func_421(uParam1->f_1, uParam1->f_4, func_423(2), func_422(0), 0, 1);
*uParam2=20;
uParam2->f_1=2;
func_292(uParam4[0 /*26*/], uParam1, uParam3, uParam2, 1);
}
if(*uParam3==3){
if(func_279(uParam4[0 /*26*/], uParam1, 0, 0)){
AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
iLocal_31++;
func_441(uParam5);
*uParam3=2;
}}
break;
case 1:
if(func_429(uParam5) > 1f && !func_309("DARTS_DOUBLE_T")){
func_424("DARTS_DOUBLE_T", -1);
}
if(func_429(uParam5) > 5f){
func_441(uParam5);
HUD::CLEAR_HELP(1);
func_415(uParam1->f_1, uParam1->f_4, func_423(3), func_422(0), 1000);
iLocal_31=0;
*iParam0=3;
}
break;
}
break;
case 3:
switch (iLocal_31){
case 0:
if(!CAM::IS_CAM_INTERPOLATING(uLocal_83)){
if(*uParam3==2){
*uParam2=20;
uParam2->f_1=3;
func_292(uParam4[1 /*26*/], uParam1, uParam3, uParam2, 1);
}
if(*uParam3==3){
if(func_279(uParam4[1 /*26*/], uParam1, 0, 0)){
AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
iLocal_31++;
func_441(uParam5);
*uParam3=2;
}
}}
break;
case 1:
if(func_429(uParam5) > 1f && !func_309("DARTS_TRIPLE_T")){
func_424("DARTS_TRIPLE_T", -1);
}
if(func_429(uParam5) > 5f){
func_441(uParam5);
HUD::CLEAR_HELP(1);
func_421(uParam1->f_1, uParam1->f_4, func_423(4), func_422(0), 1000, 0);
iLocal_31=0;
*iParam0=4;
}
break;
}
break;
case 4:
switch (iLocal_31){
case 0:
if(!CAM::IS_CAM_INTERPOLATING(uLocal_82)){
if(*uParam3==2){
*uParam2=50;
uParam2->f_1=1;
func_292(uParam4[2 /*26*/], uParam1, uParam3, uParam2, 1);
}
if(*uParam3==3){
if(func_279(uParam4[2 /*26*/], uParam1, 0, 0)){
AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
iLocal_31++;
func_441(uParam5);
*uParam3=2;
}
}}
break;
case 1:
if(func_429(uParam5) > 1f && !func_309("DARTS_BULL_T")){
func_424("DARTS_BULL_T", -1);
}
if(func_429(uParam5) > 5f){
func_441(uParam5);
HUD::CLEAR_HELP(1);
AUDIO::PLAY_SOUND_FRONTEND(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
func_415(uParam1->f_1, uParam1->f_4, func_423(5), func_422(1), 1500);
iLocal_31=0;
*iParam0=5;
}
break;
}
break;
case 5:
if(!CAM::IS_CAM_INTERPOLATING(uLocal_83) && !func_309("DARTS_DBL_WIN")){
func_424("DARTS_DBL_WIN", -1);
}
if(func_429(uParam5) > 6f){
func_441(uParam5);
*iParam0=6;
}
break;
case 6:
AUDIO::PLAY_SOUND_FRONTEND(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_75, uLocal_83, 1500, 1, 1);
*iParam0=7;
break;
case 7:
if(!CAM::IS_CAM_INTERPOLATING(uLocal_75)){
iLocal_31=0;
HUD::CLEAR_HELP(1);
HUD::CLEAR_PRINTS();
iVar0=0;
while (iVar0 < 3){
func_414(uParam4[iVar0 /*26*/]);
iVar0++;
}
return 1;
}
break;
case 8:
if(CAM::IS_SCREEN_FADED_OUT()){
iLocal_31=0;
HUD::CLEAR_HELP(1);
HUD::CLEAR_PRINTS();
iVar1=0;
while (iVar1 < 3){
func_414(uParam4[iVar1 /*26*/]);
iVar1++;
}
CAM::SET_CAM_ACTIVE(uLocal_75, 1);
CAM::DO_SCREEN_FADE_IN(500);
return 1;
}
break;
}
return 0;
}


void func_414(var uParam0){
struct<3> Var0;
Var0={
-1668.044f, -1056.45f, 13.1063f 
};
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, 1, 0, 0, 1);
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0);
OBJECT::DELETE_OBJECT(uParam0);
}}


void func_415(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, int iParam4){
CAM::STOP_CAM_POINTING(uLocal_83);
CAM::SET_CAM_FOV(uLocal_83, 35f);
CAM::SET_CAM_COORD(uLocal_83, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam1, Param2));
CAM::SET_CAM_ROT(uLocal_83, Vector(fParam1, 0f, 0f) - Param3, 2);
CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_83, uLocal_82, iParam4, 1, 1);
}

int func_416(var uParam0, bool bParam1, bool bParam2){
if(!func_426(&(uParam0->f_2))){
func_441(&(uParam0->f_2));
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
if(!bParam2){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
}elseif(bParam2){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
}
if(bParam1){
if(PAD::IS_CONTROL_PRESSED(2, 201)){
return 0;
}}
if(uParam0->f_1==-1){
return 1;
}
if(func_7(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1){
func_427(&(uParam0->f_2));
return 0;
}
return 1;
}


void func_417(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7){
char* sVar0;
sVar0=func_418(iParam5);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "RESET_MOVIE");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, sVar0);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam2)){
func_12(sParam2);
}
if(bParam6){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(bParam6){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam7);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
func_441(&(uParam0->f_2));
uParam0->f_1=iParam3;
}


char* func_418(int iParam0){
switch (iParam0){
case 0:
return "SHOW_WASTED_MP_MESSAGE";
case 1:
return "SHOW_BUSTED_MP_MESSAGE";
case 2:
return "SHOW_CENTERED_MP_MESSAGE_LARGE";
case 3:
return "SHOW_CENTERED_TOP_MP_MESSAGE";
case 4:
return "SHOW_MIDSIZED_MESSAGE";
case 5:
return "SHOW_MISSION_END_MP_MESSAGE";
case 6:
return "SHOW_MISSION_PASSED_MESSAGE";
case 7:
return "SHOW_MISSION_FAILED_MP_MESSAGE";
default:
}
return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}


void func_419(){
CAM::SET_CAM_ACTIVE(uLocal_75, 1);
CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
if(CAM::IS_CAM_ACTIVE(uLocal_82)){
CAM::SET_CAM_ACTIVE(uLocal_82, 0);
}
if(CAM::IS_CAM_ACTIVE(uLocal_77)){
CAM::SET_CAM_ACTIVE(uLocal_77, 0);
}
if(CAM::IS_CAM_ACTIVE(uLocal_78)){
CAM::SET_CAM_ACTIVE(uLocal_78, 0);
}
if(CAM::IS_CAM_ACTIVE(uLocal_79)){
CAM::SET_CAM_ACTIVE(uLocal_79, 0);
}
if(CAM::IS_CAM_ACTIVE(uLocal_80)){
CAM::SET_CAM_ACTIVE(uLocal_80, 0);
}
if(CAM::IS_CAM_ACTIVE(uLocal_81)){
CAM::SET_CAM_ACTIVE(uLocal_81, 0);
}}


char* func_420(int iParam0){
if(iLocal_175==1){
switch (iParam0){
case 0:
return "DARTS_MEET_OPPONENT_BAR";
case 1:
return "DARTS_MENU_BAR";
case 2:
return "DARTS_START_MATCH_BAR";
case 3:
return "DARTS_MATCH_COMPLETE_BAR";
default:}}elseif(iLocal_175==2){
switch (iParam0){
case 0:
return "DARTS_MEET_OPPONENT_ROCK";
case 1:
return "DARTS_MENU_ROCK";
case 2:
return "DARTS_START_MATCH_ROCK";
case 3:
return "DARTS_MATCH_COMPLETE_ROCK";
}
default:
}
return "";
}


void func_421(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, int iParam4, bool bParam5){
CAM::STOP_CAM_POINTING(uLocal_82);
CAM::SET_CAM_FOV(uLocal_82, 35f);
CAM::SET_CAM_COORD(uLocal_82, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam1, Param2));
CAM::SET_CAM_ROT(uLocal_82, Vector(fParam1, 0f, 0f) - Param3, 2);
if(bParam5){
CAM::SET_CAM_ACTIVE(uLocal_82, 1);
}else{
CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_82, uLocal_83, iParam4, 1, 1);
}}


Vector3 func__422(bool bParam0){
if(bParam0){
return -4.7411f, 0f, -15.32f;
}
return 4.9918f, 0f, 4.3916f;
}


Vector3 func__423(int iParam0){
switch (iParam0){
case 0:
return -0.0588f, -1.6075f, 0.1336f;
case 2:
return -0.0944f, -1.2308f, 0.3468f;
case 3:
return -0.0948f, -1.243f, 0.2067f;
case 4:
return -0.0955f, -1.2524f, 0.1006f;
case 5:
return -0.0951f, -1.2526f, 0.0895f;
default:
}
return 0f, 0f, 0f;
}


void func_424(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_425(var uParam0){
if(!ENTITY::IS_ENTITY_DEAD(func_504(), 0)){
func_4(func_504(), "GENERIC_YES", 0, 6);
}else{
func_4(uParam0, "GENERIC_AGREE", 0, 6);
}
return 1;
}


bool func_426(var uParam0){
return MISC::IS_BIT_SET(*uParam0, 1);
}


void func_427(var uParam0){
uParam0->f_1=0f;
uParam0->f_2=0f;
*uParam0=0;
}


void func_428(var uParam0, char* sParam1, int iParam2){
AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0, sParam1, func_6(iParam2), 1);
}


float func_429(var uParam0){
if(func_426(uParam0)){
if(func_9(uParam0)){
return uParam0->f_2;
}else{
return (func_8(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
}}
return 0f;
}


void func_430(var uParam0){
if(!func_426(uParam0)){
func_381(uParam0);
}else{
func_441(uParam0);
}}


void func_431(){
Global_20591=0;
func_432();
}


void func_432(){
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


void func_433(int iParam0){
if(func_43()){
return;
}
if(Global_20584){
if(func_436()){
func_435(1, 1);
}else{
func_435(0, 0);
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
if(!func_434()){
Global_20383.f_1=3;
}}

int func_434(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_435(bool bParam0, bool bParam1){
if(bParam0){
if(func_42(0)){
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


bool func_436(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}

int func_437(){
if(HUD::IS_PAUSE_MENU_ACTIVE()){
return 0;
}
if(PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18)){
return 1;
}
return 0;
}

int func_438(var uParam0){
var uVar0;
uVar0=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(ENTITY::DOES_ENTITY_EXIST(uVar0)){
if(!func_439(iVar0)){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), Local_137, 0, 1, 0)){
VEHICLE::SET_LAST_DRIVEN_VEHICLE(iVar0);
ENTITY::SET_ENTITY_COLLISION(iVar0, 0, 0);
ENTITY::SET_ENTITY_VISIBLE(iVar0, 0, 0);
ENTITY::FREEZE_ENTITY_POSITION(iVar0, 1);
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
*uParam0=iVar0;
return 1;
}}}
return 0;
}

int func_439(int iParam0){
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


void func_440(var uParam0, int iParam1){
iParam1++;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_PLAYER_HIGHLIGHT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_441(var uParam0){
func_442(uParam0, 0f);
}


void func_442(var uParam0, float fParam1){
uParam0->f_1=(func_8(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
MISC::SET_BIT(uParam0, 1);
MISC::CLEAR_BIT(uParam0, 2);
uParam0->f_2=0f;
}


void func_443(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
if((uParam0[iParam1 /*10*/])->f_7==1){}
(*uParam0)[iParam1 /*10*/]=uParam2;
StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
(uParam0[iParam1 /*10*/])->f_7=1;
(uParam0[iParam1 /*10*/])->f_8=iParam4;
(uParam0[iParam1 /*10*/])->f_9=iParam5;
if(!Global_78558){
if(!PED::IS_PED_INJURED(uParam2)){
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


void func_444(var uParam0, var uParam1, char* sParam2){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DARTS_PLAYER_NAMES");
func_37(uParam1);
func_37(sParam2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_445(var uParam0, struct<4> Param1, var uParam2, var uParam3, var uParam4, var uParam5){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(func_504()) && !PED::IS_PED_INJURED(func_504())){
PED::REMOVE_PED_FROM_GROUP(func_504());
}else{
if(ENTITY::DOES_ENTITY_EXIST(uParam5->f_5) && !PED::IS_PED_INJURED(uParam5->f_5)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam5->f_5, 1, 1);
uLocal_138[1]=uParam5->f_5;
TASK::CLEAR_PED_TASKS(uLocal_138[1]);
}elseif(func_447(uParam4)){
TASK::CLEAR_PED_TASKS(uLocal_138[1]);
}else{
uLocal_138[1]=PED::CREATE_PED(26, iLocal_172, Param1.f_3, uParam0, 1, 1);
}
if(DECORATOR::DECOR_EXIST_ON(uLocal_138[1], "Darts_name")){
iVar0=DECORATOR::DECOR_GET_INT(uLocal_138[1], "Darts_name");
if(954610991==iVar0){
sLocal_220=func_451("RAYMOND");
iLocal_221=954610991;
}elseif(94453331==iVar0){
sLocal_220=func_451("JOHAN");
iLocal_221=94453331;
}elseif(1891555423==iVar0){
sLocal_220=func_451("STAN");
iLocal_221=1891555423;
}elseif(-1067630349==iVar0){
sLocal_220=func_451("VINCE");
iLocal_221=-1067630349;
}elseif(885327384==iVar0){
sLocal_220=func_451("KRISTY");
iLocal_221=885327384;
}elseif(-1791000994==iVar0){
sLocal_220=func_451("MARLENE");
iLocal_221=-1791000994;
}elseif(1954368234==iVar0){
sLocal_220=func_451("LORIE");
iLocal_221=1954368234;
}elseif(-863218904==iVar0){
sLocal_220=func_451("SHELLEY");
iLocal_221=-863218904;
}}
DECORATOR::DECOR_SET_INT(uLocal_138[1], "Darts_name", iLocal_221);
}
iVar1=ENTITY::GET_ENTITY_MODEL(uLocal_138[1]);
func_446(iVar1);
TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_138[1], uLocal_138[0], 0);
TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_138[0], uLocal_138[1], 0);
}


void func_446(int iParam0){
int iVar0;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
switch (iParam0){
case joaat("a_f_m_salton_01"):
switch (iVar0){
case 0:
sLocal_57="A_F_M_SALTON_01_WHITE_FULL_03";
break;
case 1:
sLocal_57="A_F_M_SALTON_01_WHITE_FULL_02";
break;
}
break;
case joaat("a_f_o_salton_01"):
sLocal_57="A_F_M_SALTON_01_WHITE_FULL_01";
break;
case joaat("a_m_y_vinewood_01"):
sLocal_57="G_M_Y_LOST_01_BLACK_FULL_01";
break;
case joaat("a_m_y_vinewood_03"):
sLocal_57="G_M_Y_LOST_02_LATINO_FULL_01";
break;
case joaat("a_m_y_vinewood_04"):
sLocal_57="G_M_Y_LOST_01_BLACK_FULL_02";
break;
case joaat("a_m_y_stlat_01"):
sLocal_57="G_M_Y_LOST_02_LATINO_FULL_02";
break;
case joaat("a_m_y_stwhi_02"):
sLocal_57="G_M_Y_LOST_01_WHITE_FULL_01";
break;
}}

int func_447(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), uParam0, -1)){
if(!PED::IS_PED_INJURED((*uParam0)[iVar0])){
if((((((ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0])==joaat("a_f_m_salton_01") || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0])==joaat("a_f_o_salton_01")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0])==joaat("a_m_y_vinewood_01")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0])==joaat("a_m_y_stlat_01")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0])==joaat("a_m_y_vinewood_04")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0])==joaat("a_m_y_stwhi_02")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0])==joaat("a_m_y_vinewood_03")){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam0)[iVar0], 1, 1);
uLocal_138[1]=(*uParam0)[iVar0];
return 1;
}}
iVar0++;
}
return 0;
}

int func_448(int iParam0){
int iVar0;
int iVar1;
int iVar2;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar2=(func_450() - 1);
iVar0=3;
while (iVar0 <=iVar2){
if(func_449(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_449(int iParam0){
if(!func_93(iParam0)){
return func_95(iParam0);
}elseif(iParam0 !=145){}
return 0;
}

int func_450(){
if(Global_32163==0 || Global_32163==2){
return 190;
}
return 161;
}


char* func_451(char* sParam0){
if(LOCALIZATION::GET_CURRENT_LANGUAGE()==7){
if(MISC::ARE_STRINGS_EQUAL(sParam0, "MICHAEL")){
return "??????????";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "FRANKLIN")){
return "????????????????";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "TREVOR")){
return "????????????";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "LAMAR")){
return "??????????";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "JIMMY")){
return "????????????";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "KRISTY")){
return "????????????";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "MARLENE")){
return "????????????";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "LORIE")){
return "????????";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "SHELLEY")){
return "??????????";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "RAYMOND")){
return "??????????????";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "JOHAN")){
return "??????????";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "STAN")){
return "????????";
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "VINCE")){
return "????????";
}}
return sParam0;
}


void func_452(var uParam0, var uParam1, var uParam2, bool bParam3){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
uParam0->f_4=ENTITY::GET_ENTITY_HEADING(*uParam0);
}
if(!bParam3){
func_454(uParam1, uParam0);
}
Local_41={
0f, (-2.3685f + fLocal_34), 0.1f 
};
Local_41={
Local_41 + Local_35 
};
Local_40={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_1, uParam0->f_4, Local_41) 
};
func_453(uParam2, uParam0);
}


void func_453(var uParam0, var uParam1){
uParam0->f_3={
0f, -0.15f, 0f 
};
uParam0->f_3={
uParam0->f_3 + Local_35 
};
*uParam0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) 
};
}


void func_454(var uParam0, var uParam1){
*uParam0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, -0.4f, (-2.4f + fLocal_34), -1.7272f) 
};
uParam0->f_3={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, 0.5f, (-2.4f + fLocal_34), -1.7272f) 
};
}

int func_455(var uParam0, var uParam1){
if(!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\DARTS", 0, -1)){
return 0;
}
if(!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FAMILY1_2", 0, -1)){
return 0;
}
if((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_28) || !STREAMING::HAS_MODEL_LOADED(iLocal_29)) || !STREAMING::HAS_MODEL_LOADED(iLocal_37)) || !STREAMING::HAS_MODEL_LOADED(iLocal_172)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_645)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_57)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_62)) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(3)) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Darts")) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_222)) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_223)) || !func_456(0, -1, 0)){
return 0;
}
return 1;
}


bool func_456(char* sParam0, int iParam1, bool bParam2){
int iVar0;
bool bVar1;
bool bVar2;
if(!func_348(&iVar0, 1, iParam1)){
return 0;
}
bVar1=true;
StringCopy(&(Global_23270.f_6078[iVar0 /*4*/]), sParam0, 16);
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_6078[iVar0 /*4*/]))){
HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23270.f_6078[iVar0 /*4*/]), 9);
Global_23270.f_6071[iVar0]=1;
if(!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23270.f_6078[iVar0 /*4*/]), 9)){
bVar1=false;
}}
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
Global_23270.f_6057[iVar0]=1;
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")){
bVar1=false;
}
if(bParam2){
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", 0);
Global_23270.f_6064[iVar0]=1;
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale")){
bVar1=false;
}}
bVar2=false;
StringCopy(&(Global_23270.f_6103[iVar0 /*10*/].f_1), "instructional_buttons", 24);
bVar2=func_457(&(Global_23270.f_6103[iVar0 /*10*/]));
if(!bVar1 || !bVar2){}
return (bVar1 && bVar2);
}


bool func_457(var uParam0){
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


void func_458(var uParam0, var uParam1){
STREAMING::REQUEST_MODEL(iLocal_28);
STREAMING::REQUEST_MODEL(iLocal_29);
STREAMING::REQUEST_MODEL(iLocal_37);
STREAMING::REQUEST_MODEL(iLocal_172);
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Darts", 0);
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("ShopUI_Title_Darts", 0);
STREAMING::REQUEST_ANIM_DICT(sLocal_222);
STREAMING::REQUEST_ANIM_DICT(sLocal_223);
*uParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE("darts_scoreboard");
uParam1->f_645=func_200();
uParam1->f_57=func_460();
uParam1->f_62=func_459();
HUD::REQUEST_ADDITIONAL_TEXT("DARTS", 3);
}


var func__459(){
return GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
}


var func__460(){
return GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
}


void func_461(var uParam0, int iParam1, struct<3> Param2, float fParam3){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 2){
iVar1=0;
while (iVar1 < 7){
uParam0->f_1[iVar0 /*8*/][iVar1]=1;
iVar1++;
}
iVar0++;
}
if(iParam1==0){
uParam0->f_18={
989.399f, -99.674f, 75.925f 
};
uParam0->f_21={
180f, 0f, 252.555f 
};
uParam0->f_24={
1.82f, 1.328f, 1f 
};
}else{
uParam0->f_18={
1992.223f, 3049.814f, 48.333f 
};
uParam0->f_21={
180f, 0f, 87.77f 
};
uParam0->f_24={
1.82f, 1.328f, 1f 
};
}
if(!func_462(Param2) && fParam3 !=0f){
uParam0->f_18={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param2, fParam3, -0.687645f, -0.350352f, 0.343273f) 
};
uParam0->f_21={
180f, 0f, (fParam3 - -29.98685f) 
};
}
uParam0->f_27=0.885f;
uParam0->f_28=0.244f;
uParam0->f_29=0.17f;
uParam0->f_30=0.415f;
}

int func_462(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


void func_463(int iParam0){
int iVar0;
iVar0=iParam0 + 1;
Local_38.f_0=0.5f;
Local_38.f_1=0.5f;
if(GRAPHICS::GET_IS_WIDESCREEN()){
Local_38.f_2=0.05f;
Local_38.f_3=0.095f;
}else{
Local_38.f_2=0.065f;
Local_38.f_3=0.09f;
}
Local_38.f_4=255;
Local_38.f_5=250;
Local_38.f_6=255;
Local_38.f_7=123;
if(iVar0==1){
Local_38.f_4=255;
Local_38.f_5=255;
Local_38.f_6=255;
}elseif(iVar0==2){
Local_38.f_4=255;
Local_38.f_5=255;
Local_38.f_6=255;
}
Local_38.f_8=0f;
Local_39.f_0=0f;
Local_39.f_1=0f;
Local_39.f_2=0.061f;
Local_39.f_3=0.105f;
Local_39.f_4=200;
Local_39.f_5=45;
Local_39.f_6=40;
Local_39.f_7=255;
Local_39.f_8=0f;
}


void func_464(var uParam0, int iParam1){
if(iParam1==0){
uParam0->f_1=iLocal_28;
}else{
uParam0->f_1=iLocal_29;
}
uParam0->f_24=0;
uParam0->f_23=0;
}


void func_465(){
int iVar0;
STATS::LEADERBOARDS_CLEAR_CACHE_DATA();
iVar0=0;
while (iVar0 < 5){
Global_2100721.f_81[iVar0]=0;
iVar0++;
}}


void func_466(struct<3> Param0, float fParam1){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
struct<3> Var5;
struct<3> Var6;
float fVar7;
struct<3> Var8;
float fVar9;
float fVar10;
struct<3> Var11;
float fVar12;
float fVar13;
struct<3> Var14;
struct<3> Var15;
struct<3> Var16;
fLocal_89=GRAPHICS::GET_ASPECT_RATIO(0);
fVar7=30f;
fVar7=func_410(fLocal_89);
Var8={
-0.192784f, -1.73287f, 0.0262985f 
};
fVar9=1.7939f;
fVar10=-1.3346f;
if(GRAPHICS::GET_IS_WIDESCREEN()){
Var11={
-0.0974819f, -1.65968f, 0.335098f 
};
fVar12=-1.3023f;
fVar13=-12.4139f;
}else{
Var11={
-0.112635f, -1.86963f, 0.45417f 
};
fVar12=-3.7542f;
fVar13=-14.4576f;
}
Var14={
0.261599f, -0.750354f, -0.392929f 
};
Var16={
0.281314f, -0.573735f, -0.39603f 
};
Var1={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam1, Var8) 
};
Var3={
fVar10, 0f, (fParam1 - fVar9) 
};
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam1, Var11) 
};
Var2={
fVar13, 0f, (fParam1 - fVar12) 
};
Var4={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam1, Var14) 
};
Var5={
0.8351f, -0.0048f, (fParam1 - 186.5073f) 
};
Var15={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam1, Var16) 
};
Var6={
0.8351f, -0.0048f, (fParam1 - 186.5073f) 
};
uLocal_75=CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var0, Var2, fVar7, 0, 2);
uLocal_76=CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var1, Var3, fVar7, 0, 2);
uLocal_77=CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var4, Var5, 65f, 0, 2);
uLocal_78=CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var15, Var6, 65f, 0, 2);
uLocal_79=CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
uLocal_80=CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
uLocal_82=CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
uLocal_83=CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
uLocal_81=CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1996.235f, 3048.456f, 48.0237f, -3.4831f, 0.0223f, 60.6925f, 38.1f, 0, 2);
CAM::SET_CAM_FOV(uLocal_77, 43.35f);
CAM::SET_CAM_FOV(uLocal_78, 42.35f);
CAM::SHAKE_CAM(uLocal_77, "HAND_SHAKE", 0.1f);
CAM::SHAKE_CAM(uLocal_78, "HAND_SHAKE", 0.1f);
}


void func_467(var uParam0, var uParam1){
uParam0->f_1={
*uParam1 
};
uParam0->f_4=uParam1->f_3;
if(ENTITY::DOES_ENTITY_EXIST(uParam1->f_4)){
*uParam0=uParam1->f_4;
}
iLocal_33[0]=20;
iLocal_33[10]=3;
iLocal_33[1]=1;
iLocal_33[11]=19;
iLocal_33[2]=18;
iLocal_33[12]=7;
iLocal_33[3]=4;
iLocal_33[13]=16;
iLocal_33[4]=13;
iLocal_33[14]=8;
iLocal_33[5]=6;
iLocal_33[15]=11;
iLocal_33[6]=10;
iLocal_33[16]=14;
iLocal_33[7]=15;
iLocal_33[17]=9;
iLocal_33[8]=2;
iLocal_33[18]=12;
iLocal_33[9]=17;
iLocal_33[19]=5;
iLocal_33[20]=20;
}


void func_468(){
Global_23131.f_6=1;
}


void func_469(bool bParam0, bool bParam1){
if(bParam1){
MISC::SET_BIT(&Global_32412, iParam0);
}else{
MISC::CLEAR_BIT(&Global_32412, iParam0);
}}


var func__470(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar1=func_471(iParam0, iParam1);
STATS::STAT_GET_INT(uVar1, &uVar0, -1);
return uVar0;
}


var func__471(int iParam0, int iParam1){
var uVar0;
var uVar1;
func_472(iParam0, iParam1, &uVar0, &uVar1);
return uVar0;
}


void func_472(int iParam0, int iParam1, var uParam2, var uParam3){
switch (iParam0){
case 0:
switch (iParam1){
case 0:
*uParam2=joaat("sp0_special_ability_unlocked");
break;
case 1:
*uParam2=joaat("sp0_stamina");
break;
case 3:
*uParam2=joaat("sp0_lung_capacity");
break;
case 2:
*uParam2=joaat("sp0_strength");
break;
case 4:
*uParam2=joaat("sp0_wheelie_ability");
break;
case 5:
*uParam2=joaat("sp0_flying_ability");
break;
case 6:
*uParam2=joaat("sp0_shooting_ability");
break;
case 7:
*uParam2=joaat("sp0_stealth_ability");
break;
}
break;
case 1:
switch (iParam1){
case 0:
*uParam2=joaat("sp1_special_ability_unlocked");
break;
case 1:
*uParam2=joaat("sp1_stamina");
break;
case 3:
*uParam2=joaat("sp1_lung_capacity");
break;
case 2:
*uParam2=joaat("sp1_strength");
break;
case 4:
*uParam2=joaat("sp1_wheelie_ability");
break;
case 5:
*uParam2=joaat("sp1_flying_ability");
break;
case 6:
*uParam2=joaat("sp1_shooting_ability");
break;
case 7:
*uParam2=joaat("sp1_stealth_ability");
break;
}
break;
case 2:
switch (iParam1){
case 0:
*uParam2=joaat("sp2_special_ability_unlocked");
break;
case 1:
*uParam2=joaat("sp2_stamina");
break;
case 3:
*uParam2=joaat("sp2_lung_capacity");
break;
case 2:
*uParam2=joaat("sp2_strength");
break;
case 4:
*uParam2=joaat("sp2_wheelie_ability");
break;
case 5:
*uParam2=joaat("sp2_flying_ability");
break;
case 6:
*uParam2=joaat("sp2_shooting_ability");
break;
case 7:
*uParam2=joaat("sp2_stealth_ability");
break;
}
break;
case 3:
switch (iParam1){
case 0:
*uParam3=64;
break;
case 1:
*uParam3=65;
break;
case 3:
*uParam3=67;
break;
case 2:
*uParam3=66;
break;
case 4:
*uParam3=68;
break;
case 5:
*uParam3=69;
break;
case 6:
*uParam3=70;
break;
case 7:
*uParam3=71;
break;
}
break;
}}


void func_473(bool bParam0){
if(bParam0){
func_474();
if(Global_20383.f_1==10 || Global_20383.f_1==9){
MISC::SET_BIT(&Global_8254, 16);
}
Global_20383.f_1=1;
if(func_42(0)){
func_433(0);
}}elseif(Global_20383.f_1==1){
if(!Global_20383.f_1==0){
Global_20383.f_1=3;
}}}


void func_474(){
if(Global_20383.f_1==9 || Global_20383.f_1==10){
Global_21778=0;
Global_21774=1;
}}


void func_475(int iParam0, var uParam1, var uParam2){
int iVar0;
int iVar1;
HUD::DISPLAY_AREA_NAME(1);
func_271(8);
func_324();
if(bLocal_146){
func_492(&uLocal_162);
}
iVar0=0;
while (iVar0 < 2){
iVar1=0;
while (iVar1 < 3){
func_414(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
iVar1++;
}
iVar0++;
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_28);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_29);
if(!PED::IS_PED_INJURED(uLocal_138[0]) && !PED::IS_PED_INJURED(uLocal_138[1])){
TASK::TASK_CLEAR_LOOK_AT(uLocal_138[0]);
TASK::TASK_CLEAR_LOOK_AT(uLocal_138[1]);
}
func_491();
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_37);
func_490();
func_489(uParam1->f_645);
func_488(&(uParam1->f_57));
if(!ENTITY::IS_ENTITY_DEAD(func_504(), 0)){
PED::SET_PED_AS_GROUP_MEMBER(func_504(), func_487());
func_486(iLocal_170, iLocal_171);
}else{
func_484(&(uLocal_138[1]));
}
func_473(0);
func_483(uParam2, 0);
func_39(0);
HUD::RESET_HUD_COMPONENT_VALUES(15);
if(PLAYER::IS_PLAYER_ONLINE()){
if(iParam0->f_460 && !iLocal_160){
func_482(190, 0);
}}
func_105();
func_465();
func_97(&(uParam1->f_72), 0);
wait(200);
if(iLocal_153){
func_479(130, 0, 0);
func_476();
}
func_469(23, 0);
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_476(){
func_477();
}

int func_477(){
if(func_478(0)){
return 0;
}
if(Global_100720.f_8){
if(Global_100720.f_10 > 0){
return 0;
}}elseif(Global_100720.f_10 > 1){
return 0;
}
Global_100720.f_10++;
return 1;
}

int func_478(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}


void func_479(int iParam0, int iParam1, int iParam2){
bool bVar0;
if(iParam0 < 0){}
if(iParam0==321 || iParam0 > 321){}else{
func_66((891 + iParam0), 1, -1);
}
bVar0=true;
if(Global_113648.f_10196[iParam0 /*12*/].f_5==1){
if(Global_113648.f_10196[iParam0 /*12*/].f_6==11 || Global_113648.f_10196[iParam0 /*12*/].f_6==12){
bVar0=false;
}}else{
Global_113648.f_10196[iParam0 /*12*/].f_5=1;
Global_113648.f_10196[iParam0 /*12*/].f_10=iParam1;
Global_113648.f_10196[iParam0 /*12*/].f_11=iParam2;
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
func_480();
}}


void func_480(){
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
Global_113384=0;
Global_113385=0;
Global_113386=0;
Global_113387=0;
Global_113388=0;
Global_113389=0;
Global_113390=0;
fVar1=0f;
fVar2=0f;
fVar3=0f;
fVar4=0f;
fVar5=0f;
fVar6=0f;
fVar7=0f;
fVar8=Global_113648.f_10196.f_3853;
Global_113648.f_10196.f_3853=0f;
while (iVar0 < 321){
if(Global_113648.f_10196[iVar0 /*12*/].f_5==1){
switch (Global_113648.f_10196[iVar0 /*12*/].f_6){
case 1:
Global_113384++;
fVar1=(fVar1 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
case 3:
Global_113385++;
fVar2=(fVar2 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
case 5:
Global_113386++;
fVar3=(fVar3 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
case 7:
Global_113387++;
fVar4=(fVar4 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
case 9:
Global_113388++;
fVar5=(fVar5 + (Global_113648.f_10196[iVar0 /*12*/].f_4 * 4f));
break;
case 11:
Global_113389++;
fVar6=(fVar6 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
case 13:
Global_113390++;
fVar7=(fVar7 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
default:
break;
}}
iVar0++;
}
if(Global_113367 > 0){
if(Global_113384==Global_113367){
fVar1=55f;
}}
if(Global_113368 > 0){
if(Global_113385==Global_113368){
fVar2=10f;
}}
if(Global_113369 > 0){
if(Global_113386==Global_113369){
fVar3=0f;
}}
if(Global_113370 > 0){
if(Global_113387==Global_113370){
fVar4=10f;
}}
if(Global_113371 > 0){
if(((Global_113388==Global_113371 || (Global_113371 * 10 / Global_113388) < 41) || Global_113388 > Global_113374) || Global_113388==Global_113374){
if(!MISC::IS_BIT_SET(Global_113648.f_10196.f_3856, 14)){
if(Global_113388==Global_113371){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_113371, 0);
MISC::SET_BIT(&(Global_113648.f_10196.f_3856), 14);
}}
fVar5=5f;
}}
if(Global_113372 > 0){
if(Global_113389==Global_113372){
fVar6=15f;
}}
if(Global_113373 > 0){
if(Global_113390==Global_113373){
fVar7=5f;
}}
Global_113648.f_10196.f_3853=((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
if(Global_113388 > Global_113374 || Global_113388==Global_113374){
iVar9=Global_113374;
}else{
iVar9=Global_113388;
}
STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_113384, 1);
STATS::STAT_SET_INT(joaat("num_missions_available"), Global_113367, 1);
STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_113385, 1);
STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_113368, 1);
STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_113386, 1);
STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_113369, 1);
STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_113387, 1);
STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_113370, 1);
STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_113374, 1);
STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_113390 + Global_113389), 1);
STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_113373 + Global_113372), 1);
Global_113391=(Global_113384 * 100 / Global_113367);
Global_113393=((Global_113386 + Global_113385) * 100 / (Global_113369 + Global_113368));
Global_113392=((Global_113387 + iVar9) * 100 / (Global_113370 + Global_113374));
Global_113394=((Global_113389 + Global_113390) * 100 / (Global_113372 + Global_113373));
STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_113648.f_10196.f_3853, 1);
STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_113391, 1);
STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_113392, 1);
STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_113393, 1);
if(fVar8 > 0f && floor(fVar8) < floor(Global_113648.f_10196.f_3853)){
func_86(13, floor(Global_113648.f_10196.f_3853));
}
if(!DATAFILE::DATAFILE_IS_SAVE_PENDING()){
if(!Global_78558){
if(func_481()==2==0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()){
Global_113382=0;
}
if(!Global_63362){
func_477();
}}}}}

int func_481(){
return Global_32163;
}


void func_482(int iParam0, bool bParam1){
struct<6> Var0[1];
struct<8> Var1[1];
if(!PLAYER::IS_PLAYER_ONLINE()){
return;
}
StringCopy(&(Var1[0 /*8*/]), "GameType", 32);
if(bParam1){
StringCopy(&(Var0[0 /*6*/]), "MP", 24);
}else{
StringCopy(&(Var0[0 /*6*/]), "SP", 24);
}
if(func_230(iParam0, &Var0, &Var1, 1, -1, 0, 0)){
STATS::LEADERBOARDS_WRITE_ADD_COLUMN(103, iLocal_106[1], 0f);
STATS::LEADERBOARDS_WRITE_ADD_COLUMN(99, iLocal_106[2], 0f);
STATS::LEADERBOARDS_WRITE_ADD_COLUMN(109, iLocal_106[3], 0f);
STATS::LEADERBOARDS_WRITE_ADD_COLUMN(106, iLocal_106[5], 0f);
STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, iLocal_106[10], 0f);
STATS::LEADERBOARDS_WRITE_ADD_COLUMN(107, iLocal_106[8], 0f);
STATS::LEADERBOARDS_WRITE_ADD_COLUMN(116, iLocal_106[6], 0f);
}}


void func_483(var uParam0, int iParam1){
if(uParam0->f_1 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
uParam0->f_1=0;
}
if((uParam0->f_566 || iParam1) && uParam0->f_4 !=0){
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
uParam0->f_4=0;
}
if(uParam0->f_568){
SCRIPT::SET_NO_LOADING_SCREEN(0);
uParam0->f_568=0;
}
if(!Global_78827){
if(!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX())){
if(!Global_78828){
if(CAM::IS_SCREEN_FADED_OUT() && !func_478(0)){
CAM::DO_SCREEN_FADE_IN(800);
}}}}
func_39(0);
}


void func_484(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0) && !PED::IS_PED_INJURED(*uParam0)){
TASK::CLEAR_SEQUENCE_TASK(&uLocal_173);
TASK::OPEN_SEQUENCE_TASK(&uLocal_173);
if(ENTITY::DOES_ENTITY_EXIST(uLocal_138[0])){
TASK::TASK_LOOK_AT_ENTITY(0, uLocal_138[0], 8000, 2049, 3);
}
TASK::TASK_STAND_STILL(0, 1000);
if(bLocal_151){
if(!MISC::IS_BIT_SET(Global_113609, 10)){
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_485(iLocal_175==2, Local_210, Local_212), 1f, 20000, 0.25f, 0, func_124(iLocal_175==2, fLocal_214, fLocal_216));
}else{
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_485(iLocal_175==2, Local_209, Local_211), 1f, 20000, 0.25f, 0, func_124(iLocal_175==2, fLocal_213, fLocal_215));
}
TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
}else{
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_485(iLocal_175==2, Local_209, Local_211), 1f, 20000, 0.25f, 0, func_124(iLocal_175==2, 172.6813f, 142.6717f));
TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
}
TASK::CLOSE_SEQUENCE_TASK(uLocal_173);
TASK::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_173);
PED::SET_PED_KEEP_TASK(*uParam0, 1);
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_172);
}


Vector3 func__485(bool bParam0, struct<3> Param1, struct<3> Param2){
if(bParam0){
return Param1;
}
return Param2;
}


void func_486(int iParam0, var uParam1){
if(Global_96507==iParam0){
Global_96508=Global_96507;
Global_96509=uParam1;
Global_96507=23;
}}


var func__487(){
return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}


void func_488(var uParam0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
*uParam0=0;
}}


void func_489(var uParam0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uParam0);
}


void func_490(){
HUD::CLEAR_HELP(1);
CAM::DESTROY_ALL_CAMS(0);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
HUD::DISPLAY_RADAR(1);
}


void func_491(){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_36)){
OBJECT::DELETE_OBJECT(&iLocal_36);
}}


void func_492(var uParam0){
var uVar0;
uVar0=*uParam0;
if(ENTITY::DOES_ENTITY_EXIST(uVar0)){
if(!func_439(iVar0)){
ENTITY::SET_ENTITY_COLLISION(iVar0, 1, 0);
ENTITY::SET_ENTITY_VISIBLE(iVar0, 1, 0);
ENTITY::FREEZE_ENTITY_POSITION(iVar0, 0);
}}}


void func_493(){
int iVar0;
if(SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse")){
start_new_script("buddyDeathResponse", 1424);
}
if(Global_113648.f_9087 || func_478(0)){
if(!func_501()){
iVar0=func_500();
if(iVar0 !=-1){
if(!func_495(iVar0)){
return;
}
MISC::SET_BIT(&(Global_91433[iVar0 /*5*/].f_1), 5);
return;
}}else{
func_494();
}}}


void func_494(){
Global_100716=1;
if(PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_78791)){
switch (func_91()){
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
switch (func_91()){
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

int func_495(int iParam0){
int iVar0;
int iVar1;
func_494();
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::START_FIRING_AMNESTY(5000);
}
iVar0=Global_91433[iParam0 /*5*/];
iVar1=Global_78828.f_109[iVar0 /*4*/];
func_499(iVar1, 1);
PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
func_496(&(Global_113648.f_2365.f_539), iVar1);
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


void func_496(var uParam0, int iParam1){
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
if(!func_498(Global_113648.f_18535[iVar0], &Var2, &fVar3)){
Global_113648.f_18535[iVar0]=318;
func_497(&(uParam0->f_2296[iVar0]));
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


void func_497(var uParam0){
*uParam0=-15;
}

int func_498(int iParam0, var uParam1, float fParam2){
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
return func_498(8, uParam1, fParam2);
break;
case 10:
return func_498(8, uParam1, fParam2);
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


void func_499(int iParam0, bool bParam1){
if(bParam1){
if((iParam0 !=88 && iParam0 !=89) && iParam0 !=92){
Global_94666[iParam0 /*2*/]=1;
}}else{
Global_94666[iParam0 /*2*/]=0;
}}

int func_500(){
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

int func_501(){
if(((Global_100681==13 || Global_100681==10) || Global_100681==11) || Global_100681==12){
return 0;
}
return 1;
}


void func_502(int iParam0, bool bParam1){
if(PED::IS_PED_INJURED(func_504())){
return;
}
if(bParam1){
if(!PED::IS_PED_GROUP_MEMBER(func_504(), func_487())){
return;
}
if(!PED::IS_PED_INJURED(func_503())){
if(!PED::IS_PED_GROUP_MEMBER(func_503(), func_487())){
return;
}}}
if(Global_96507==23){
Global_96509=10;
Global_96507=iParam0;
}}


var func__503(){
return Global_96514;
}

int func_504(){
return Global_96513;
}


void func_505(){
if(iLocal_135==1){
return;
}
func_324();
PAD::INIT_PC_SCRIPTED_CONTROLS("Darts");
iLocal_135=1;
}

int func_506(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_94(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}