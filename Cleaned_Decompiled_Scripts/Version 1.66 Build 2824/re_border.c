//Cleaned With dr NHA's C Script Cleaner V2.8
#region Local Var
var uLocal_0=0;
var uLocal_1=0;
var uLocal_2=0;
int iLocal_3=0;
int iLocal_4=0;
int iLocal_5=0;
int iLocal_6=0;
int iLocal_7=0;
int iLocal_8=0;
int iLocal_9=0;
int iLocal_10=0;
int iLocal_11=0;
int iLocal_12=0;
var uLocal_13=0;
var uLocal_14=0;
float fLocal_15=0f;
var uLocal_16=0;
var uLocal_17=0;
int iLocal_18=0;
char* sLocal_19=NULL;
var uLocal_20=0;
var uLocal_21=0;
float fLocal_22=0f;
var uLocal_23=0;
var uLocal_24=0;
var uLocal_25=0;
float fLocal_26=0f;
float fLocal_27=0f;
var uLocal_28=0;
int iLocal_29=0;
var uLocal_30=0;
var uLocal_31=0;
float fLocal_32=0f;
float fLocal_33=0f;
float fLocal_34=0f;
var uLocal_35=0;
var uLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
var uLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
int iLocal_42=0;
int iLocal_43=0;
struct<3> Local_44={
0, 0, 0 
};
int iLocal_45=0;
struct<3> Local_46={
0, 0, 0 
};
struct<3> Local_47={
0, 0, 0 
};
struct<3> Local_48={
0, 0, 0 
};
struct<3> Local_49={
0, 0, 0 
};
bool bLocal_50=0;
int iLocal_51=0;
int iLocal_52=0;
int iLocal_53=0;
int iLocal_54=0;
int iLocal_55=0;
int iLocal_56=0;
int iLocal_57[3]={
0, 0, 0 
};
int iLocal_58[3]={
0, 0, 0 
};
int iLocal_59[3]={
0, 0, 0 
};
int iLocal_60[3]={
0, 0, 0 
};
int iLocal_61=0;
int iLocal_62=0;
var uLocal_63[3]={
0, 0, 0 
};
var uLocal_64[3]={
0, 0, 0 
};
var uLocal_65[3]={
0, 0, 0 
};
var uLocal_66=0;
char* sLocal_67=NULL;
var uLocal_68=16;
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
struct<2> Local_233={
0, 5 
};
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
var uLocal_249=5;
var uLocal_250=0;
var uLocal_251=0;
var uLocal_252=0;
var uLocal_253=0;
var uLocal_254=0;
#endregion

void __EntryFunction__(){
struct<3> Var0;
iLocal_3=1;
iLocal_4=134;
iLocal_5=134;
iLocal_6=1;
iLocal_7=1;
iLocal_8=1;
iLocal_9=134;
iLocal_10=1;
iLocal_11=12;
iLocal_12=12;
fLocal_15=0.001f;
iLocal_18=-1;
sLocal_19="NULL";
fLocal_22=0f;
fLocal_26=-0.0375f;
fLocal_27=0.17f;
iLocal_29=3;
fLocal_32=80f;
fLocal_33=140f;
fLocal_34=180f;
iLocal_40=1;
iLocal_41=65;
iLocal_42=49;
iLocal_43=64;
Local_47={
928.0903f, 1733.12f, 165.1067f 
};
Local_48={
2374.21f, 316.6781f, 180.4001f 
};
Local_49={
-804.8174f, 4051.37f, 159.6384f 
};
Local_46={
ScriptParam_233.f_1[0 /*3*/] 
};
func_146();
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11)){
func_134();
}
if(func_133()){
SCRIPT::TERMINATE_THIS_THREAD();
}
if(func_91(Local_46, 29, bLocal_50, 0, 0)){
func_88(29);
}else{
SCRIPT::TERMINATE_THIS_THREAD();
}
while (true){
wait(0);
func_87();
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
Var0={
func_86(PLAYER::PLAYER_ID()) 
};
PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Var0.f_0 - 2000f), (Var0.f_1 - 2000f), (Var0.f_0 + 2000f), (Var0.f_1 + 2000f));
PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
}
if(!func_85()){
if(BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()){
if(!func_85()){
if(func_73()){
func_134();
}}
RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_BP", 0);
switch (iLocal_45){
case 0:
if(func_72()){
settimera(15000);
iLocal_51=1;
iLocal_45=1;
}
break;
case 1:
if(!func_85()){
func_62(1);
}
break;
}}else{
func_134();
}}else{
func_58();
func_57();
if(func_56()){
func_34();
if(func_33()){
func_2();
}}elseif(iLocal_62 < 3){
func_2();
}else{
func_1();
}}}}


void func_1(){
func_134();
}


void func_2(){
func_32();
func_31();
func_3(29, bLocal_50);
func_134();
}


void func_3(int iParam0, bool bParam1){
if(iParam0==-1){
iParam0=func_29();
}
if(iParam0==-1){
return;
}
if(bParam1 <=func_28(iParam0)){
func_27(iParam0, bParam1);
if(!func_26(51)){
func_16("RE_REWARD", 1, 0, 4000, 10000, func_19(), 0, 138, 0);
func_15(51);
}
if(func_14(iParam0)){
Global_113648.f_24997.f_2=3;
}
if(func_13(iParam0, bParam1) !=322){
func_5(func_13(iParam0, bParam1), Local_44.f_0, Local_44.f_1);
}
Global_113636=bParam1;
if(Global_113634==0){
if(((Global_113637==1 || Global_113637==5) || Global_113637==11) || Global_113637==25){
func_4(2);
}elseif((Global_113637==26 || Global_113637==8) || Global_113637==17){
func_4(7);
}else{
func_4(1);
}}}}


void func_4(int iParam0){
Global_113634=iParam0;
}


void func_5(int iParam0, var uParam1, var uParam2){
bool bVar0;
if(iParam0 < 0){}
if(iParam0==321 || iParam0 > 321){}else{
func_11((891 + iParam0), 1, -1);
}
bVar0=true;
if(Global_113648.f_10196[iParam0 /*12*/].f_5==1){
if(Global_113648.f_10196[iParam0 /*12*/].f_6==11 || Global_113648.f_10196[iParam0 /*12*/].f_6==12){
bVar0=false;
}}else{
Global_113648.f_10196[iParam0 /*12*/].f_5=1;
Global_113648.f_10196[iParam0 /*12*/].f_10=uParam1;
Global_113648.f_10196[iParam0 /*12*/].f_11=uParam2;
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
func_6();
}}


void func_6(){
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
func_10(13, floor(Global_113648.f_10196.f_3853));
}
if(!DATAFILE::DATAFILE_IS_SAVE_PENDING()){
if(!Global_78558){
if(func_9()==2==0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()){
Global_113382=0;
}
if(!Global_63362){
func_7();
}}}}}

int func_7(){
if(func_8(0)){
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

int func_8(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}

int func_9(){
return Global_32163;
}

int func_10(int iParam0, int iParam1){
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


void func_11(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_12();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}

int func_12(){
return Global_1574918;
}

int func_13(int iParam0, int iParam1){
switch (iParam0){
case 0:
return 250;
break;
case 1:
return 226;
break;
case 2:
return 243;
break;
case 3:
return 256;
break;
case 4:
return 259;
break;
case 5:
if(iParam1==1){
return 281;
}
if(iParam1==2){
return 282;
}
break;
case 6:
return 265;
break;
case 7:
return 218;
break;
case 9:
if(iParam1==1){
return 271;
}
if(iParam1==2){
return 272;
}
if(iParam1==3){
return 273;
}
if(iParam1==4){
return 274;
}
if(iParam1==5){
return 275;
}
if(iParam1==6){
return 276;
}
if(iParam1==7){
return 277;
}
if(iParam1==8){
return 278;
}
if(iParam1==9){
return 279;
}
if(iParam1==10){
return 280;
}
break;
case 10:
return 219;
break;
case 11:
if(iParam1==1){
return 246;
}
if(iParam1==2){
return 247;
}
if(iParam1==3){
return 248;
}
if(iParam1==4){
return 249;
}
break;
case 12:
return 254;
break;
case 13:
if(iParam1==1){
return 260;
}
if(iParam1==2){
return 261;
}
if(iParam1==3){
return 262;
}
if(iParam1==4){
return 264;
}
break;
case 14:
return 283;
break;
case 15:
if(iParam1==1){
return 224;
}
if(iParam1==2){
return 225;
}
break;
case 16:
return 252;
break;
case 17:
if(iParam1==1){
return 244;
}
if(iParam1==2){
return 245;
}
break;
case 18:
return 253;
break;
case 19:
return 215;
break;
case 20:
return 216;
break;
case 21:
return 251;
break;
case 22:
if(iParam1==1){
return 221;
}
if(iParam1==2){
return 222;
}
break;
case 23:
if(iParam1==1){
return 213;
}
if(iParam1==2){
return 214;
}
break;
case 24:
return 242;
break;
case 25:
if(iParam1==1){
return 267;
}
if(iParam1==2){
return 268;
}
if(iParam1==3){
return 269;
}
break;
case 8:
return 255;
break;
case 26:
if(iParam1==1){
return 227;
}
if(iParam1==2){
return 228;
}
break;
case 27:
if(iParam1==1){
return 257;
}
if(iParam1==2){
return 258;
}
break;
case 28:
return 217;
break;
case 29:
if(iParam1==1){
return 229;
}
if(iParam1==2){
return 230;
}
if(iParam1==3){
return 231;
}
break;
case 30:
return 285;
break;
case 31:
return 318;
break;
case 32:
return 319;
break;
case 33:
return 320;
break;
}
return 322;
}

int func_14(int iParam0){
switch (iParam0){
case 29:
case 30:
case 2:
case 18:
return 0;
break;
}
return 1;
}


void func_15(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
iVar1=0;
while (iVar0 > 31){
iVar0=(iVar0 - 32);
iVar1++;
}
if(iVar1 < 3){
MISC::SET_BIT(&(Global_113648.f_20412.f_150[iVar1]), iVar0);
}}


void func_16(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
func_17(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}


void func_17(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9){
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
while (iVar0 < Global_113648.f_20412.f_145){
if(MISC::ARE_STRINGS_EQUAL(&(Global_113648.f_20412[iVar0 /*16*/]), sParam0)){
return;
}
iVar0++;
}
if(Global_113648.f_20412.f_145 < 9){
StringCopy(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/]), sParam0, 16);
StringCopy(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_4), sParam1, 16);
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_8=(MISC::GET_GAME_TIMER() + iParam3);
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_9=iParam5;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_11=iParam6;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12=uParam2;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13=iParam7;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14=iParam8;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15=uParam9;
if(iParam4 !=-1){
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10=((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
}else{
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10=-1;
}
Global_113648.f_20412.f_145++;
func_18();
}}


void func_18(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
Global_113648.f_20412.f_146[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113648.f_20412.f_145){
if(MISC::IS_BIT_SET(Global_113648.f_20412[iVar0 /*16*/].f_11, 0)){
if(Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[0]){
Global_113648.f_20412.f_146[0]=Global_113648.f_20412[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113648.f_20412[iVar0 /*16*/].f_11, 1)){
if(Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[1]){
Global_113648.f_20412.f_146[1]=Global_113648.f_20412[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113648.f_20412[iVar0 /*16*/].f_11, 2)){
if(Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[2]){
Global_113648.f_20412.f_146[2]=Global_113648.f_20412[iVar0 /*16*/].f_12;
}}
iVar0++;
}}

int func_19(){
func_20();
switch (Global_113648.f_2365.f_539.f_4321){
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


void func_20(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_24(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_23(PLAYER::PLAYER_PED_ID());
if(func_22(iVar0) && (!func_21(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_22(Global_113648.f_2365.f_539.f_4321)){
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


bool func_21(int iParam0){
return Global_43257==iParam0;
}


bool func_22(int iParam0){
return iParam0 < 3;
}

int func_23(var uParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(uParam0);
iVar0=0;
while (iVar0 <=2){
if(func_24(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_24(int iParam0){
if(func_22(iParam0)){
return func_25(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__25(int iParam0){
return Global_2028[iParam0 /*29*/];
}

int func_26(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
iVar1=0;
while (iVar0 > 31){
iVar0=(iVar0 - 32);
iVar1++;
}
if(iVar1 < 3){
return MISC::IS_BIT_SET(Global_113648.f_20412.f_150[iVar1], iVar0);
}
return 0;
}


void func_27(int iParam0, int iParam1){
MISC::SET_BIT(&(Global_113648.f_24997.f_8[iParam0]), iParam1);
}

int func_28(int iParam0){
int iVar0;
iVar0=1;
switch (iParam0){
case 1:
iVar0=5;
break;
case 5:
iVar0=2;
break;
case 9:
iVar0=10;
break;
case 11:
iVar0=4;
break;
case 13:
iVar0=4;
break;
case 15:
iVar0=2;
break;
case 17:
iVar0=2;
break;
case 22:
iVar0=2;
break;
case 23:
iVar0=2;
break;
case 25:
iVar0=3;
break;
case 26:
iVar0=2;
break;
case 27:
iVar0=2;
break;
case 29:
iVar0=3;
break;
}
return iVar0;
}

int func_29(){
struct<16> Var0;
var uVar1;
StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
uVar1=func_30(Var0);
return uVar1;
}

int func_30(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15){
switch (MISC::GET_HASH_KEY(&cParam0)){
case joaat("re_abandonedcar"):
return 23;
break;
case joaat("re_accident"):
return 0;
break;
case joaat("re_arrests"):
return 15;
break;
case joaat("re_atmrobbery"):
return 1;
break;
case joaat("re_bikethief"):
return 26;
break;
case joaat("re_border"):
return 29;
break;
case joaat("re_burials"):
return 24;
break;
case joaat("re_bus_tours"):
return 2;
break;
case joaat("re_cartheft"):
return 17;
break;
case joaat("re_chasethieves"):
return 11;
break;
case joaat("re_crashrescue"):
return 16;
break;
case joaat("re_cultshootout"):
return 18;
break;
case joaat("re_dealgonewrong"):
return 12;
break;
case joaat("re_domestic"):
return 3;
break;
case joaat("re_drunkdriver"):
return 27;
break;
case joaat("re_gang_intimidation"):
return 20;
break;
case joaat("re_gangfight"):
return 19;
break;
case joaat("re_getaway_driver"):
return 4;
break;
case joaat("re_hitch_lift"):
return 13;
break;
case joaat("re_homeland_security"):
return 28;
break;
case joaat("re_lured"):
return 7;
break;
case joaat("re_muggings"):
return 25;
break;
case joaat("re_paparazzi"):
return 10;
break;
case joaat("re_prisonerlift"):
return 22;
break;
case joaat("re_prisonvanbreak"):
return 21;
break;
case joaat("re_securityvan"):
return 9;
break;
case joaat("re_shoprobbery"):
return 5;
break;
case joaat("re_snatched"):
return 6;
break;
case joaat("re_stag_do"):
return 14;
break;
case joaat("re_yetarian"):
return 30;
break;
case joaat("re_duel"):
return 31;
break;
case joaat("re_seaplane"):
return 32;
break;
case joaat("re_monkey"):
return 33;
break;
}
return -1;
}


void func_31(){
func_7();
}

int func_32(){
return 1;
}

int func_33(){
int iVar0;
int iVar1;
iVar1=1;
iVar0=0;
while (iVar0 < 3){
if(!PED::IS_PED_INJURED(uLocal_63[iVar0])){
iVar1=0;
}
iVar0++;
}
return iVar1;
}

int func_34(){
int iVar0;
if(!func_55()){
iVar0=0;
while (iVar0 < 3){
if(!PED::IS_PED_INJURED(uLocal_63[iVar0])){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(uLocal_63[iVar0], 0)) < 400f){
if(!iLocal_52){
if(iLocal_61==2){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 2f){
iLocal_52=1;
iLocal_61=3;
}elseif(PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 1f){
iLocal_52=1;
iLocal_61=3;
}
}
if(((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_63[iVar0])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_63[iVar0])){
iLocal_52=1;
iLocal_55=1;
iLocal_54=1;
iLocal_61=3;
}}
if(!iLocal_52 || iLocal_61 < 3){
if(timera() > 5000){
if(!TASK::IS_PED_IN_WRITHE(uLocal_63[iVar0])){
func_54(&uLocal_68, 1);
func_53(&uLocal_68, 1, uLocal_63[iVar0], "BorderPatrol", 0, 1);
if(iLocal_61==0){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(func_52()){
func_36(&uLocal_68, "REBORAU", "REBOR_INS1", 4, 0, 0, 0);
}
else{
func_36(&uLocal_68, "REBORAU", "REBOR_INS2", 4, 0, 0, 0);
}
iLocal_61++;
}
else{
func_36(&uLocal_68, "REBORAU", "REBOR_INS2", 4, 0, 0, 0);
}}elseif(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
func_36(&uLocal_68, "REBORAU", "REBOR_STOP", 4, 0, 0, 0);
iLocal_61++;
}else{
func_36(&uLocal_68, "REBORAU", "REBOR_PULL", 4, 0, 0, 0);
}
iLocal_53=1;
iLocal_61++;
if(iLocal_61 >=3){
iLocal_52=1;
}
settimera(0);
}
}}elseif(!iLocal_54){
if(!func_55() && !TASK::IS_PED_IN_WRITHE(uLocal_63[iVar0])){
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_66, joaat("player"));
PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_63[iVar0], 2, 1);
func_54(&uLocal_68, 1);
func_53(&uLocal_68, 1, uLocal_63[iVar0], "BorderPatrol", 0, 1);
if(func_35()==0){
func_36(&uLocal_68, "REBORAU", "REBOR_ATTM", 4, 0, 0, 0);
}elseif(func_35()==1){
func_36(&uLocal_68, "REBORAU", "REBOR_ATTF", 4, 0, 0, 0);
}elseif(func_35()==2){
func_36(&uLocal_68, "REBORAU", "REBOR_ATTT", 4, 0, 0, 0);
}
iLocal_54=1;
iLocal_52=1;
settimera(0);
}}elseif(!func_55()){
if(!iLocal_56){
if(func_35()==0){
func_36(&uLocal_68, "REBORAU", "REBOR_REACTM", 4, 0, 0, 0);
}elseif(func_35()==1){
func_36(&uLocal_68, "REBORAU", "REBOR_REACTF", 4, 0, 0, 0);
}elseif(func_35()==2){
func_36(&uLocal_68, "REBORAU", "REBOR_REACTT", 4, 0, 0, 0);
}
iLocal_56=1;
}
if(timera() > 5000 && !TASK::IS_PED_IN_WRITHE(uLocal_63[iVar0])){
func_54(&uLocal_68, 1);
func_53(&uLocal_68, 1, uLocal_63[iVar0], "BorderPatrol", 0, 1);
if(func_35()==0){
func_36(&uLocal_68, "REBORAU", "REBOR_CONM", 4, 0, 0, 0);
}elseif(func_35()==1){
func_36(&uLocal_68, "REBORAU", "REBOR_CONF", 4, 0, 0, 0);
}elseif(func_35()==2){
func_36(&uLocal_68, "REBORAU", "REBOR_COTT", 4, 0, 0, 0);
}
settimera(0);
}}
return 1;
}}
iVar0++;
}}
return 0;
}

int func_35(){
func_20();
return Global_113648.f_2365.f_539.f_4321;
}

int func_36(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_51(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
return func_37(sParam2, iParam3, 0);
}

int func_37(char* sParam0, int iParam1, bool bParam2){
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
func_50();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_49(8, -1)){
return 0;
}
Global_21801={
Global_21795 
};
func_48();
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
MISC::CLEAR_BIT(&Global_8255, 0);
if(bParam2){
func_47();
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
if(func_46()){
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
if(func_45()){
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
func_44();
Global_21735=bParam2;
}
Global_21727=iParam1;
StringCopy(&Global_21344, sParam0, 24);
Global_20591=0;
func_43();
func_38();
return 1;
}
if(Global_21725==5){
return 0;
}
if(iParam1 < Global_21727 || iParam1==Global_21727){
return 0;
}
if(iParam1==2){}else{
func_50();
}
return 0;
}


void func_38(){
if(!func_39()){
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

int func_39(){
if(!Global_262145.f_28878){
return 0;
}
if(!Global_78558){
return 0;
}
if(PLAYER::PLAYER_ID()==func_42()){
return 0;
}
if(func_40(PLAYER::PLAYER_ID())){
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


bool func_40(int iParam0){
return func_41(iParam0, 20);
}


var func__41(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_42(){
return -1;
}


void func_43(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21725=1;
}


void func_44(){
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

int func_45(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}

int func_46(){
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


void func_47(){
if(func_21(14)){
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
Global_20383=func_35();
if(Global_20383==145){
Global_20383=3;
}
if(Global_78558){
Global_20383=3;
}
if(Global_20383 > 3){
Global_20383=3;
}}}


void func_48(){
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


bool func_49(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


void func_50(){
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


void func_51(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5){
Global_21179={
*uParam0 
};
Global_7569=iParam1;
StringCopy(&Global_21795, sParam2, 24);
Global_22714=uParam5;
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

int func_52(){
if(MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0)){
return 1;
}
return 0;
}


void func_53(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5){
if((uParam0[iParam1 /*10*/])->f_7==1){}
(*uParam0)[iParam1 /*10*/]=uParam2;
StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
(uParam0[iParam1 /*10*/])->f_7=1;
(uParam0[iParam1 /*10*/])->f_8=iParam4;
(uParam0[iParam1 /*10*/])->f_9=iParam5;
if(!Global_78558){
if(!PED::IS_PED_INJURED(uParam2)){
if((uParam0[iParam1 /*10*/])->f_8==0){
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 0);
}else{
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 1);
}}
if(!PED::IS_PED_INJURED(uParam2)){
if((uParam0[iParam1 /*10*/])->f_9==0){
PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 0);
}else{
PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 1);
}}}}


void func_54(var uParam0, int iParam1){
if((uParam0[iParam1 /*10*/])->f_7==1){
(uParam0[iParam1 /*10*/])->f_7=0;
}}

int func_55(){
if(Global_21725 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}

int func_56(){
int iVar0;
iLocal_62=0;
iVar0=0;
while (iVar0 < 3){
if(!PED::IS_PED_INJURED(uLocal_63[iVar0])){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(uLocal_63[iVar0], 0)) < 62500f){
return 1;
}else{
iLocal_62++;
}}
iVar0++;
}
return 0;
}


void func_57(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(!PED::IS_PED_INJURED(uLocal_63[iVar0])){
if(!iLocal_55){
if(((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_63[iVar0])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_63[iVar0])){
iLocal_52=1;
iLocal_55=1;
iLocal_54=1;
iLocal_61=3;
}}
if(iLocal_54 || iLocal_55){
if(PED::IS_PED_IN_ANY_VEHICLE(uLocal_63[iVar0], 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !iLocal_57[iVar0]){
if(!ENTITY::IS_ENTITY_DEAD(uLocal_64[iVar0], 0)){
TASK::TASK_VEHICLE_MISSION(uLocal_63[iVar0], uLocal_64[iVar0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iVar0 + 10, 30f, 786469, 10f, 5f, 1);
}
if(!iLocal_55){
wait(MISC::GET_RANDOM_INT_IN_RANGE(400, 800));
}
else{
wait(0);
}
if(!PED::IS_PED_INJURED(uLocal_63[iVar0])){
if(PED::IS_PED_IN_ANY_VEHICLE(uLocal_63[iVar0], 0)){
TASK::TASK_DRIVE_BY(uLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 1000f, 60, 1, -753768974);
PED::SET_PED_KEEP_TASK(uLocal_63[iVar0], 1);
}
}
iLocal_58[iVar0]=0;
iLocal_57[iVar0]=1;
}elseif(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !iLocal_58[iVar0]){
if(!PED::IS_PED_INJURED(uLocal_63[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_64[iVar0], 0)){
TASK::TASK_VEHICLE_MISSION_PED_TARGET(uLocal_63[iVar0], uLocal_64[iVar0], PLAYER::PLAYER_PED_ID(), iVar0 + 10, 30f, 786469, 10f, 5f, 1);
if(!iLocal_55){
wait(MISC::GET_RANDOM_INT_IN_RANGE(400, 800));
}else{
wait(0);
}
if(!PED::IS_PED_INJURED(uLocal_63[iVar0])){
if(PED::IS_PED_IN_ANY_VEHICLE(uLocal_63[iVar0], 0)){
TASK::TASK_DRIVE_BY(uLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 1000f, 60, 1, -753768974);
PED::SET_PED_KEEP_TASK(uLocal_63[iVar0], 1);
}}
iLocal_57[iVar0]=0;
iLocal_58[iVar0]=1;
}}}elseif(!PED::IS_PED_IN_ANY_VEHICLE(uLocal_63[iVar0], 0)){
TASK::TASK_COMBAT_PED(uLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
PED::SET_PED_KEEP_TASK(uLocal_63[iVar0], 1);
}}elseif(PED::IS_PED_IN_ANY_VEHICLE(uLocal_63[iVar0], 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !iLocal_59[iVar0]){
if(TASK::GET_SCRIPT_TASK_STATUS(uLocal_63[iVar0], joaat("script_task_vehicle_chase")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_63[iVar0], joaat("script_task_vehicle_chase")) !=0){
TASK::CLEAR_PED_TASKS(uLocal_63[iVar0]);
if(!ENTITY::IS_ENTITY_DEAD(uLocal_64[iVar0], 0)){
TASK::TASK_VEHICLE_MISSION(uLocal_63[iVar0], uLocal_64[iVar0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iVar0 + 10, 30f, 786469, 10f, 5f, 1);
TASK::TASK_LOOK_AT_ENTITY(uLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
}
iLocal_60[iVar0]=0;
iLocal_59[iVar0]=1;
}}elseif(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !iLocal_60[iVar0]){
if((!PED::IS_PED_INJURED(uLocal_63[iVar0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_DEAD(uLocal_64[iVar0], 0)){
TASK::CLEAR_PED_TASKS(uLocal_63[iVar0]);
TASK::TASK_VEHICLE_MISSION_PED_TARGET(uLocal_63[iVar0], uLocal_64[iVar0], PLAYER::PLAYER_PED_ID(), iVar0 + 10, 30f, 786469, 10f, 5f, 1);
TASK::TASK_LOOK_AT_ENTITY(uLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
iLocal_59[iVar0]=0;
iLocal_60[iVar0]=1;
}}}elseif(!PED::IS_PED_IN_ANY_VEHICLE(uLocal_63[iVar0], 0)){
TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), 1f, 0f, 0f, 2f, -1, 1036831949, 1);
}
if(!PED::IS_PED_INJURED(uLocal_63[iVar0])){
if(ENTITY::IS_ENTITY_IN_WATER(uLocal_63[iVar0])){
if(PED::IS_PED_IN_ANY_VEHICLE(uLocal_63[iVar0], 0)){
TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_63[iVar0], 0, 0);
}
if(!PED::IS_PED_IN_COMBAT(uLocal_63[iVar0], 0)){
TASK::TASK_COMBAT_PED(uLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
}}}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_ANY_VEHICLE(uLocal_63[iVar0], 0)){
if(ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 13f){
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), PED::GET_VEHICLE_PED_IS_IN(uLocal_63[iVar0], 0))){
PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_63[iVar0], 3);
}else{
PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_63[iVar0], 1);
}}else{
PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_63[iVar0], 1);
}}
if(func_133()){
TASK::TASK_SMART_FLEE_PED(uLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
}}elseif(ENTITY::DOES_ENTITY_EXIST(uLocal_63[iVar0])){
iLocal_55=1;
iLocal_54=1;
}
iVar0++;
}}


void func_58(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(!PED::IS_PED_INJURED(uLocal_63[iVar0])){
if(iLocal_53 || iLocal_52){
if(!HUD::DOES_BLIP_EXIST(uLocal_65[iVar0])){
uLocal_65[iVar0]=func_59(uLocal_63[iVar0], 1, 145);
}}}elseif(HUD::DOES_BLIP_EXIST(uLocal_65[iVar0])){
HUD::REMOVE_BLIP(&(uLocal_65[iVar0]));
}
iVar0++;
}}


var func__59(var uParam0, bool bParam1, int iParam2){
var uVar0;
uVar0=func_60(uParam0, !bParam1, 0);
if((iParam2 !=145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2028[iParam2 /*29*/].f_3))){
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_2028[iParam2 /*29*/].f_3));
}
return uVar0;
}

int func_60(var uParam0, bool bParam1, bool bParam2){
var uVar0;
if(!ENTITY::DOES_ENTITY_EXIST(uParam0)){
return 0;
}
uVar0=HUD::ADD_BLIP_FOR_ENTITY(uParam0);
if(ENTITY::IS_ENTITY_A_VEHICLE(uParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_61(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
if(!bParam2){
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}else{
HUD::SET_BLIP_COLOUR(uVar0, 2);
}}elseif(ENTITY::IS_ENTITY_A_PED(uParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_61(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}elseif(ENTITY::IS_ENTITY_AN_OBJECT(uParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_61(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
}
return uVar0;
}


float func_61(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}

int func_62(int iParam0){
if(func_66()){
Global_113638=1;
Global_113635=MISC::GET_GAME_TIMER();
if(func_14(Global_113637)){
func_63(0);
}
HUD::SET_MISSION_NAME(1, "RE_TITLE");
if(iParam0 && func_14(Global_113637)){
HUD::FLASH_MINIMAP_DISPLAY();
}
return 1;
}
return 0;
}


void func_63(int iParam0){
switch (iParam0){
case 0:
if(Global_113648.f_24997.f_2 < 3){
if(!HUD::IS_HELP_MESSAGE_ON_SCREEN()){
func_64(func_65(iParam0), -1);
Global_113648.f_24997.f_2++;
MISC::SET_BIT(&Global_113644, 0);
}}
break;
case 1:
if(!MISC::IS_BIT_SET(Global_113644, 1)){
if(!HUD::IS_HELP_MESSAGE_ON_SCREEN()){
func_64(func_65(iParam0), -1);
Global_113648.f_24997.f_3++;
MISC::SET_BIT(&Global_113644, 1);
}}
break;
case 2:
if(!MISC::IS_BIT_SET(Global_113644, 2)){
if(!HUD::IS_HELP_MESSAGE_ON_SCREEN()){
func_64(func_65(iParam0), -1);
Global_113648.f_24997.f_4++;
MISC::SET_BIT(&Global_113644, 2);
}}
break;
}}


void func_64(var uParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}


char* func_65(int iParam0){
char* sVar0;
sVar0="";
switch (iParam0){
case 0:
sVar0="AM_H_REFS";
break;
case 1:
sVar0="RE_FLASHBLIP";
break;
case 2:
sVar0="RE_HANDOVER";
break;
}
return sVar0;
}

int func_66(){
switch (func_67(&Global_32223, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD())){
case 1:
return 1;
break;
case 0:
return 1;
break;
}
return 0;
}

int func_67(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
if(iParam1==7){
return 0;
}
if(!bParam3){
if(Global_98159.f_44==1){
return 2;
}}
if(iParam1==0){
if(func_71(0)){
return 0;
}
Global_43221++;
*uParam0=Global_43221;
PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
Global_23131.f_5=0;
if(iParam2 !=5){
PLAYER::FORCE_CLEANUP(8);
}
Global_43257=iParam2;
Global_43219=*uParam0;
Global_43220=iParam4;
Global_43218=0;
return 1;
}
if(*uParam0 !=-1){
if(Global_43218 > 0){
iVar0=0;
iVar0=0;
while (iVar0 < Global_43218){
if(Global_43224[iVar0 /*4*/]==*uParam0){
return 2;
}
iVar0++;
}}elseif(Global_43219==*uParam0){
return 1;
}
*uParam0=-1;
}
if(*uParam0==-1){
if(!func_69(iParam2)){
return 0;
}
if(Global_43218==8){
return 0;
}
Global_43221++;
*uParam0=Global_43221;
Global_43224[Global_43218 /*4*/]=Global_43221;
Global_43224[Global_43218 /*4*/].f_1=iParam1;
Global_43224[Global_43218 /*4*/].f_2=iParam2;
Global_43224[Global_43218 /*4*/].f_3=0;
Global_43218++;
if(iParam4 !=0){
func_68(uParam0, iParam4);
}}
return 2;
}


void func_68(var uParam0, int iParam1){
int iVar0;
if(Global_43218==0){
return;
}
if(*uParam0==-1){
return;
}
iVar0=0;
iVar0=0;
while (iVar0 < Global_43218){
if(Global_43224[iVar0 /*4*/]==*uParam0){
Global_43224[iVar0 /*4*/].f_3=iParam1;
}
iVar0++;
}
*uParam0=-1;
}


bool func_69(int iParam0){
return func_70(iParam0, Global_43257);
}

int func_70(int iParam0, int iParam1){
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

int func_71(int iParam0){
if(Global_43257==15){
return 0;
}
if(func_69(iParam0)){
return 0;
}
return 1;
}

int func_72(){
struct<3> Var0;
var uVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
iVar4=joaat("sanchez");
iVar5=joaat("blazer");
iVar6=joaat("a_m_m_hillbilly_02");
STREAMING::REQUEST_MODEL(iVar6);
STREAMING::REQUEST_MODEL(iVar4);
STREAMING::REQUEST_MODEL(iVar5);
if((STREAMING::HAS_MODEL_LOADED(iVar6) && STREAMING::HAS_MODEL_LOADED(iVar4)) && STREAMING::HAS_MODEL_LOADED(iVar5)){
if((VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_64[0], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_64[1], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_64[2], 0)){
return 1;
}else{
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, -25f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1, &Var0, &uVar1, 1, 1077936128, 0);
if(!CAM::IS_SPHERE_VISIBLE(Var0, 5f)){
PED::ADD_RELATIONSHIP_GROUP("re_border badGuys", &uLocal_66);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, uLocal_66, joaat("player"));
iVar2=0;
while (iVar2 < 3){
Var0.f_0=(Var0.f_0 + to_float(iVar2));
Var0.f_1=(Var0.f_1 + to_float(iVar2));
iVar3=MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
if(iVar3 > 1){
uLocal_64[iVar2]=VEHICLE::CREATE_VEHICLE(iVar4, Var0, uVar1, 1, 1, 0);
}
else{
uLocal_64[iVar2]=VEHICLE::CREATE_VEHICLE(iVar5, Var0, uVar1, 1, 1, 0);
}
uLocal_63[iVar2]=PED::CREATE_PED_INSIDE_VEHICLE(uLocal_64[iVar2], 22, iVar6, -1, 1, 1);
TASK::TASK_LOOK_AT_ENTITY(uLocal_63[iVar2], PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
PED::SET_PED_KEEP_TASK(uLocal_63[iVar2], 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_63[iVar2], 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_63[iVar2], uLocal_66);
WEAPON::GIVE_WEAPON_TO_PED(uLocal_63[iVar2], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
VEHICLE::SET_VEHICLE_FORWARD_SPEED(uLocal_64[iVar2], ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()));
PED::SET_PED_COMBAT_MOVEMENT(uLocal_63[iVar2], 2);
PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_63[iVar2], 50, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_63[iVar2], 2, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_63[iVar2], 1, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_63[iVar2], 52, 1);
PED::SET_PED_ACCURACY(uLocal_63[iVar2], 5);
PED::SET_PED_FIRING_PATTERN(uLocal_63[iVar2], 1566631136);
PED::SET_PED_SHOOT_RATE(uLocal_63[iVar2], MISC::GET_RANDOM_INT_IN_RANGE(50, 100));
PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_63[iVar2], 1);
PED::SET_PED_CONFIG_FLAG(uLocal_63[iVar2], 42, 1);
PED::SET_PED_HELMET(uLocal_63[iVar2], 0);
PED::SET_PED_MONEY(uLocal_63[iVar2], 233);
AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_63[iVar2], "A_M_M_HILLBILLY_02_WHITE_MINI_04");
AUDIO::STOP_PED_SPEAKING(uLocal_63[iVar2], 1);
iVar2++;
}
VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uLocal_64[0], 0);
VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uLocal_64[1], 1);
VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uLocal_64[2], 2);
}}
switch (func_35()){
case 0:
sLocal_67="MICHAEL";
break;
case 1:
sLocal_67="FRANKLIN";
break;
case 2:
sLocal_67="TREVOR";
break;
}
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
func_53(&uLocal_68, 0, PLAYER::PLAYER_PED_ID(), sLocal_67, 0, 1);
func_53(&uLocal_68, 1, uLocal_63[0], "BorderPatrol", 0, 1);
}}
return 0;
}

int func_73(){
if(!func_69(5)){
return 1;
}
if(func_81()){
return 1;
}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_80()){
return 0;
}}
if(func_74(100f, 1) !=-1){
return 1;
}
return 0;
}

int func_74(float fParam0, bool bParam1){
struct<27> Var0;
int iVar1;
int iVar2;
float fVar3;
float fVar4;
int iVar5;
int iVar6;
bool bVar7;
iVar2=-1;
fVar3=fParam0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(func_22(func_35())){
iVar5=func_19();
iVar6=0;
iVar6=0;
while (iVar6 < 63){
iVar1=iVar6;
if(MISC::IS_BIT_SET(Global_113648.f_18576[iVar1 /*6*/], 2) && !MISC::IS_BIT_SET(Global_113648.f_18576[iVar1 /*6*/], 3)){
func_75(iVar1, &Var0);
fVar4=MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
if(fVar4 < fVar3){
bVar7=true;
if(bParam1){
if(iVar5 !=Var0.f_26){
bVar7=false;
}
}
if(bVar7){
iVar2=iVar1;
fVar3=fVar4;
}}}
iVar6++;
}}}
return iVar2;
}


void func_75(int iParam0, var uParam1){
switch (iParam0){
case 0:
func_76(uParam1, "Abigail1", func_78(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_77(iParam0), 1, 0);
break;
case 1:
func_76(uParam1, "Abigail2", func_78(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_77(iParam0), 1, 0);
break;
case 2:
func_76(uParam1, "Barry1", func_78(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_77(iParam0), 1, 0);
break;
case 3:
func_76(uParam1, "Barry2", func_78(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_77(iParam0), 1, 1);
break;
case 4:
func_76(uParam1, "Barry3", func_78(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_77(iParam0), 0, 0);
break;
case 5:
func_76(uParam1, "Barry3A", func_78(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_77(iParam0), 0, 1);
break;
case 6:
func_76(uParam1, "Barry3C", func_78(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_77(iParam0), 0, 1);
break;
case 7:
func_76(uParam1, "Barry4", func_78(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_77(iParam0), 0, 0);
break;
case 8:
func_76(uParam1, "Dreyfuss1", func_78(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_77(iParam0), 0, 0);
break;
case 9:
func_76(uParam1, "Epsilon1", func_78(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_77(iParam0), 0, 0);
break;
case 10:
func_76(uParam1, "Epsilon2", func_78(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_77(iParam0), 1, 0);
break;
case 11:
func_76(uParam1, "Epsilon3", func_78(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_77(iParam0), 0, 0);
break;
case 12:
func_76(uParam1, "Epsilon4", func_78(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_77(iParam0), 0, 0);
break;
case 13:
func_76(uParam1, "Epsilon5", func_78(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_77(iParam0), 1, 0);
break;
case 14:
func_76(uParam1, "Epsilon6", func_78(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_77(iParam0), 0, 1);
break;
case 15:
func_76(uParam1, "Epsilon7", func_78(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_77(iParam0), 0, 0);
break;
case 16:
func_76(uParam1, "Epsilon8", func_78(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_77(iParam0), 1, 0);
break;
case 17:
func_76(uParam1, "Extreme1", func_78(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_77(iParam0), 0, 1);
break;
case 18:
func_76(uParam1, "Extreme2", func_78(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_77(iParam0), 0, 1);
break;
case 19:
func_76(uParam1, "Extreme3", func_78(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_77(iParam0), 0, 1);
break;
case 20:
func_76(uParam1, "Extreme4", func_78(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_77(iParam0), 0, 0);
break;
case 21:
func_76(uParam1, "Fanatic1", func_78(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_77(iParam0), 1, 0);
break;
case 22:
func_76(uParam1, "Fanatic2", func_78(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_77(iParam0), 1, 0);
break;
case 23:
func_76(uParam1, "Fanatic3", func_78(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_77(iParam0), 0, 1);
break;
case 24:
func_76(uParam1, "Hao1", func_78(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_77(iParam0), 0, 1);
break;
case 25:
func_76(uParam1, "Hunting1", func_78(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_77(iParam0), 0, 1);
break;
case 26:
func_76(uParam1, "Hunting2", func_78(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_77(iParam0), 0, 1);
break;
case 27:
func_76(uParam1, "Josh1", func_78(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_77(iParam0), 1, 0);
break;
case 28:
func_76(uParam1, "Josh2", func_78(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_77(iParam0), 1, 1);
break;
case 29:
func_76(uParam1, "Josh3", func_78(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_77(iParam0), 1, 1);
break;
case 30:
func_76(uParam1, "Josh4", func_78(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_77(iParam0), 1, 0);
break;
case 31:
func_76(uParam1, "Maude1", func_78(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_77(iParam0), 0, 1);
break;
case 32:
func_76(uParam1, "Minute1", func_78(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_77(iParam0), 0, 1);
break;
case 33:
func_76(uParam1, "Minute2", func_78(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_77(iParam0), 0, 1);
break;
case 34:
func_76(uParam1, "Minute3", func_78(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_77(iParam0), 0, 1);
break;
case 35:
func_76(uParam1, "MrsPhilips1", func_78(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_77(iParam0), 0, 0);
break;
case 36:
func_76(uParam1, "MrsPhilips2", func_78(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_77(iParam0), 0, 0);
break;
case 37:
func_76(uParam1, "Nigel1", func_78(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_77(iParam0), 1, 0);
break;
case 38:
func_76(uParam1, "Nigel1A", func_78(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_77(iParam0), 1, 1);
break;
case 39:
func_76(uParam1, "Nigel1B", func_78(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_77(iParam0), 1, 1);
break;
case 40:
func_76(uParam1, "Nigel1C", func_78(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_77(iParam0), 1, 1);
break;
case 41:
func_76(uParam1, "Nigel1D", func_78(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_77(iParam0), 1, 1);
break;
case 42:
func_76(uParam1, "Nigel2", func_78(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_77(iParam0), 1, 1);
break;
case 43:
func_76(uParam1, "Nigel3", func_78(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_77(iParam0), 1, 1);
break;
case 44:
func_76(uParam1, "Omega1", func_78(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_77(iParam0), 0, 0);
break;
case 45:
func_76(uParam1, "Omega2", func_78(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_77(iParam0), 0, 0);
break;
case 46:
func_76(uParam1, "Paparazzo1", func_78(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_77(iParam0), 0, 1);
break;
case 47:
func_76(uParam1, "Paparazzo2", func_78(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_77(iParam0), 0, 1);
break;
case 48:
func_76(uParam1, "Paparazzo3", func_78(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_77(iParam0), 0, 0);
break;
case 49:
func_76(uParam1, "Paparazzo3A", func_78(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_77(iParam0), 0, 1);
break;
case 50:
func_76(uParam1, "Paparazzo3B", func_78(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_77(iParam0), 0, 1);
break;
case 51:
func_76(uParam1, "Paparazzo4", func_78(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_77(iParam0), 0, 0);
break;
case 52:
func_76(uParam1, "Rampage1", func_78(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_77(iParam0), 0, 0);
break;
case 54:
func_76(uParam1, "Rampage3", func_78(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_77(iParam0), 1, 0);
break;
case 55:
func_76(uParam1, "Rampage4", func_78(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_77(iParam0), 1, 0);
break;
case 56:
func_76(uParam1, "Rampage5", func_78(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_77(iParam0), 0, 0);
break;
case 53:
func_76(uParam1, "Rampage2", func_78(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_77(iParam0), 1, 0);
break;
case 57:
func_76(uParam1, "TheLastOne", func_78(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_77(iParam0), 0, 1);
break;
case 58:
func_76(uParam1, "Tonya1", func_78(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_77(iParam0), 0, 1);
break;
case 59:
func_76(uParam1, "Tonya2", func_78(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_77(iParam0), 0, 1);
break;
case 60:
func_76(uParam1, "Tonya3", func_78(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_77(iParam0), 0, 1);
break;
case 61:
func_76(uParam1, "Tonya4", func_78(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_77(iParam0), 0, 1);
break;
case 62:
func_76(uParam1, "Tonya5", func_78(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_77(iParam0), 0, 1);
break;
default:
break;
}}


void func_76(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21){
uParam0->f_4=iParam4;
*uParam0=sParam1;
uParam0->f_1={
Param2 
};
uParam0->f_3=iParam3;
uParam0->f_5=iParam5;
uParam0->f_6={
Param6 
};
uParam0->f_9=iParam7;
StringCopy(&(uParam0->f_10), sParam8, 16);
uParam0->f_14=iParam9;
uParam0->f_15=iParam10;
StringCopy(&(uParam0->f_16), sParam11, 24);
uParam0->f_22=iParam12;
uParam0->f_23=iParam13;
uParam0->f_24=iParam14;
uParam0->f_25=iParam15;
uParam0->f_26=iParam16;
uParam0->f_27=iParam17;
uParam0->f_28=iParam18;
uParam0->f_29=uParam19;
uParam0->f_30=iParam20;
uParam0->f_31=iParam21;
}

int func_77(int iParam0){
switch (iParam0){
case 0:
return 0;
break;
case 1:
return 0;
break;
case 2:
return 1;
break;
case 3:
return 1;
break;
case 4:
return 0;
break;
case 5:
return 1;
break;
case 6:
return 1;
break;
case 7:
return 0;
break;
case 8:
return 1;
break;
case 9:
return 0;
break;
case 10:
return 0;
break;
case 11:
return 0;
break;
case 12:
return 1;
break;
case 13:
return 0;
break;
case 14:
return 1;
break;
case 15:
return 0;
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
return 1;
break;
case 23:
return 1;
break;
case 24:
return 1;
break;
case 25:
return 1;
break;
case 26:
return 1;
break;
case 27:
return 0;
break;
case 28:
return 1;
break;
case 29:
return 1;
break;
case 30:
return 1;
break;
case 31:
return 0;
break;
case 32:
return 1;
break;
case 33:
return 1;
break;
case 34:
return 1;
break;
case 35:
return 0;
break;
case 36:
return 0;
break;
case 37:
return 0;
break;
case 38:
return 1;
break;
case 39:
return 1;
break;
case 40:
return 1;
break;
case 41:
return 1;
break;
case 42:
return 1;
break;
case 43:
return 1;
break;
case 44:
return 0;
break;
case 45:
return 0;
break;
case 46:
return 1;
break;
case 47:
return 1;
break;
case 48:
return 0;
break;
case 49:
return 1;
break;
case 50:
return 1;
break;
case 51:
return 1;
break;
case 52:
return 1;
break;
case 54:
return 1;
break;
case 55:
return 1;
break;
case 56:
return 1;
break;
case 53:
return 1;
break;
case 57:
return 1;
break;
case 58:
return 1;
break;
case 59:
return 1;
break;
case 60:
return 1;
break;
case 61:
return 1;
break;
case 62:
return 1;
break;
default:
break;
}
return 0;
}


struct<2> func_78(int iParam0){
struct<2> Var0;
char[] cVar1[8];
StringCopy(&Var0, "", 8);
cVar1={
func_79(iParam0) 
};
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1)){}else{
StringCopy(&Var0, "RC_", 8);
StringConCat(&Var0, &cVar1, 8);
}
return Var0;
}


struct<2> func_79(int iParam0){
struct<2> Var0;
StringCopy(&Var0, "", 8);
switch (iParam0){
case 0:
StringCopy(&Var0, "ABI1", 8);
break;
case 1:
StringCopy(&Var0, "ABI2", 8);
break;
case 2:
StringCopy(&Var0, "BA1", 8);
break;
case 3:
StringCopy(&Var0, "BA2", 8);
break;
case 4:
StringCopy(&Var0, "BA3", 8);
break;
case 5:
StringCopy(&Var0, "BA3A", 8);
break;
case 6:
StringCopy(&Var0, "BA3C", 8);
break;
case 7:
StringCopy(&Var0, "BA4", 8);
break;
case 8:
StringCopy(&Var0, "DRE1", 8);
break;
case 9:
StringCopy(&Var0, "EPS1", 8);
break;
case 10:
StringCopy(&Var0, "EPS2", 8);
break;
case 11:
StringCopy(&Var0, "EPS3", 8);
break;
case 12:
StringCopy(&Var0, "EPS4", 8);
break;
case 13:
StringCopy(&Var0, "EPS5", 8);
break;
case 14:
StringCopy(&Var0, "EPS6", 8);
break;
case 15:
StringCopy(&Var0, "EPS7", 8);
break;
case 16:
StringCopy(&Var0, "EPS8", 8);
break;
case 17:
StringCopy(&Var0, "EXT1", 8);
break;
case 18:
StringCopy(&Var0, "EXT2", 8);
break;
case 19:
StringCopy(&Var0, "EXT3", 8);
break;
case 20:
StringCopy(&Var0, "EXT4", 8);
break;
case 21:
StringCopy(&Var0, "FAN1", 8);
break;
case 22:
StringCopy(&Var0, "FAN2", 8);
break;
case 23:
StringCopy(&Var0, "FAN3", 8);
break;
case 24:
StringCopy(&Var0, "HAO1", 8);
break;
case 25:
StringCopy(&Var0, "HUN1", 8);
break;
case 26:
StringCopy(&Var0, "HUN2", 8);
break;
case 27:
StringCopy(&Var0, "JOS1", 8);
break;
case 28:
StringCopy(&Var0, "JOS2", 8);
break;
case 29:
StringCopy(&Var0, "JOS3", 8);
break;
case 30:
StringCopy(&Var0, "JOS4", 8);
break;
case 31:
StringCopy(&Var0, "MAU1", 8);
break;
case 32:
StringCopy(&Var0, "MIN1", 8);
break;
case 33:
StringCopy(&Var0, "MIN2", 8);
break;
case 34:
StringCopy(&Var0, "MIN3", 8);
break;
case 35:
StringCopy(&Var0, "MRS1", 8);
break;
case 36:
StringCopy(&Var0, "MRS2", 8);
break;
case 37:
StringCopy(&Var0, "NI1", 8);
break;
case 38:
StringCopy(&Var0, "NI1A", 8);
break;
case 39:
StringCopy(&Var0, "NI1B", 8);
break;
case 40:
StringCopy(&Var0, "NI1C", 8);
break;
case 41:
StringCopy(&Var0, "NI1D", 8);
break;
case 42:
StringCopy(&Var0, "NI2", 8);
break;
case 43:
StringCopy(&Var0, "NI3", 8);
break;
case 44:
StringCopy(&Var0, "OME1", 8);
break;
case 45:
StringCopy(&Var0, "OME2", 8);
break;
case 46:
StringCopy(&Var0, "PA1", 8);
break;
case 47:
StringCopy(&Var0, "PA2", 8);
break;
case 48:
StringCopy(&Var0, "PA3", 8);
break;
case 49:
StringCopy(&Var0, "PA3A", 8);
break;
case 50:
StringCopy(&Var0, "PA3B", 8);
break;
case 51:
StringCopy(&Var0, "PA4", 8);
break;
case 52:
StringCopy(&Var0, "RAM1", 8);
break;
case 53:
StringCopy(&Var0, "RAM2", 8);
break;
case 54:
StringCopy(&Var0, "RAM3", 8);
break;
case 55:
StringCopy(&Var0, "RAM4", 8);
break;
case 56:
StringCopy(&Var0, "RAM5", 8);
break;
case 57:
StringCopy(&Var0, "SAS1", 8);
break;
case 58:
StringCopy(&Var0, "TON1", 8);
break;
case 59:
StringCopy(&Var0, "TON2", 8);
break;
case 60:
StringCopy(&Var0, "TON3", 8);
break;
case 61:
StringCopy(&Var0, "TON4", 8);
break;
case 62:
StringCopy(&Var0, "TON5", 8);
break;
default:
break;
}
return Var0;
}

int func_80(){
if(MISC::IS_PC_VERSION()){
if(MISC::GET_CITY_DENSITY()==1f){
return 1;
}}
return 0;
}

int func_81(){
if(func_84() && !func_80()){
return 1;
}
if(func_83() && func_82()){
return 1;
}
return 0;
}


bool func_82(){
return Global_113366 > 0;
}

int func_83(){
if(Global_97603 !=-1){
return 1;
}
return 0;
}

int func_84(){
if(Global_97603 !=-1){
return MISC::IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 20);
}
return 0;
}

int func_85(){
if((Global_113637==func_29() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113638){
return 1;
}
return 0;
}


Vector3 func__86(var uParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}


void func_87(){
}


void func_88(int iParam0){
if(iParam0==-1){
iParam0=func_29();
}
if(iParam0==-1){
return;
}
func_90(iParam0);
MISC::SET_SCRIPT_HIGH_PRIO(0);
MISC::SET_RANDOM_EVENT_FLAG(1);
Global_113634=0;
func_89();
}


void func_89(){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), 1);
}
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
}}


void func_90(int iParam0){
Global_113637=iParam0;
}

int func_91(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
bool bVar0;
struct<3> Var1;
int iVar2;
struct<3> Var3;
int iVar4;
if(!Global_152234){
return 0;
}
if(iParam1==-1){
iParam1=func_29();
}
if(iParam1==-1){
return 0;
}
if(iParam1==31 || iParam1==32){
if(!func_132()){
return 0;
}}
Local_44={
Param0 
};
bVar0=false;
if(!bVar0){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
if(vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_80()){
return 0;
}}
if(!Global_113648.f_9087){
return 0;
}
if(func_8(0)){
return 0;
}
if(func_81()){
return 0;
}
if(func_131()){
return 0;
}
if(Global_113637 !=-1){
return 0;
}
if(func_22(func_35())){
if(func_74(100f, 1) !=-1){
return 0;
}}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4){
if((Var1.f_2 - Local_44.f_2) > 50f){
return 0;
}}
if(!func_130(iParam1)){
return 0;
}
if(func_22(func_35())){
if(func_129(func_35())==4 || func_129(func_35())==5){
return 0;
}}
if(func_22(func_35())){
if(!func_128(iParam1, bParam2, 145)){
return 0;
}}
if(!func_127(Global_113648.f_24997.f_43[iParam1])){
return 0;
}
if((MISC::GET_GAME_TIMER() - Global_113639) < 150000){
if(iParam1 !=30){
return 0;
}}
if(func_126()){
return 0;
}
if(MISC::GET_MISSION_FLAG()){
return 0;
}
if(MISC::GET_RANDOM_EVENT_FLAG()){
return 0;
}
if(!func_117(4)){
return 0;
}
if(!func_69(5)){
return 0;
}
if(func_116(iParam1, bParam2) && !bParam3){
return 0;
}
if(Global_3 && iParam1 !=10){
return 0;
}
if(INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))){
if((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f)){
return 0;
}}
if((iParam1==9 && (bParam2==2 || bParam2==5)) && !func_116(0, 0)){
return 0;
}
if(Global_32310){
return 0;
}
if(func_130(30) && !func_116(30, 0)){
if(iParam1 !=30){
if(vdist2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f){
return 0;
}}}
if(func_22(func_35())){
iVar2=0;
while (iVar2 < 3){
Var3={
Global_113648.f_2365.f_539.f_2300[iVar2 /*3*/] 
};
iVar4=Global_113648.f_2365.f_539.f_2296[iVar2];
if(func_115(iVar4)){
if(func_93(iVar2)){
if(!func_92(Var3, 0f, 0f, 0f, 0)){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var3) < (210f * 210f)){
if(func_35() !=iVar2){
return 0;
}}
}}}
iVar2++;
}}}
return 1;
}


bool func_92(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}


bool func_93(int iParam0){
int iVar0;
iVar0=Global_113648.f_2365.f_539.f_2296[iParam0];
return func_94(iVar0);
}

int func_94(int iParam0){
return func_95(iParam0, 1);
}

int func_95(int iParam0, int iParam1){
var uVar0;
var uVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(!func_115(iParam0)){
return 0;
}
func_96(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
if(((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >=iParam1){
return 1;
}
return 0;
}


void func_96(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6){
func_97(func_108(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}


void func_97(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
if(func_107(iParam0, iParam1)){
iVar0=func_106(iParam1);
iVar1=func_104(iParam0);
iVar2=(func_104(iParam0) - func_104(iParam1));
iVar3=(func_106(iParam0) - func_106(iParam1));
iVar4=(func_103(iParam0) - func_103(iParam1));
iVar5=(func_102(iParam0) - func_102(iParam1));
iVar6=(func_101(iParam0) - func_101(iParam1));
iVar7=(func_100(iParam0) - func_100(iParam1));
}else{
iVar0=func_106(iParam0);
iVar1=func_104(iParam1);
iVar2=(func_104(iParam1) - func_104(iParam0));
iVar3=(func_106(iParam1) - func_106(iParam0));
iVar4=(func_103(iParam1) - func_103(iParam0));
iVar5=(func_102(iParam1) - func_102(iParam0));
iVar6=(func_101(iParam1) - func_101(iParam0));
iVar7=(func_100(iParam1) - func_100(iParam0));
}
while (iVar7 < 0){
iVar7 +=60;
iVar6=(iVar6 - 1);
}
while (iVar7 > 59){
iVar7=(iVar7 - 60);
iVar6++;
}
while (iVar6 < 0){
iVar6 +=60;
iVar5=(iVar5 - 1);
}
while (iVar6 > 59){
iVar6=(iVar6 - 60);
iVar5++;
}
while (iVar5 < 0){
iVar5 +=24;
iVar4=(iVar4 - 1);
}
while (iVar5 > 23){
iVar5=(iVar5 - 24);
iVar4++;
}
while (iVar4 < 0){
while (iVar3 < 0){
iVar3 +=12;
iVar2=(iVar2 - 1);
}
iVar4=(iVar4 + func_99(iVar0, iVar1));
iVar3=(iVar3 - 1);
iVar0=round(func_98(to_float(iVar0 + 1), 0f, 12f));
}
while (iVar3 < 0){
iVar3 +=12;
iVar2=(iVar2 - 1);
}
while (iVar3 > 12){
iVar3=(iVar3 - 12);
iVar2++;
}
*uParam2=iVar7;
*uParam3=iVar6;
*uParam4=iVar5;
*uParam5=iVar4;
*uParam6=iVar3;
*uParam7=iVar2;
}


float func_98(float fParam0, float fParam1, float fParam2){
float fVar0;
if(fParam1==fParam2){
return fParam1;
}
fVar0=(fParam2 - fParam1);
fParam0=(fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
if(fParam0 < fParam1){
fParam0=(fParam0 + fVar0);
}
return fParam0;
}

int func_99(int iParam0, int iParam1){
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

int func_100(int iParam0){
return shift_right(iParam0, 20) & 63;
}

int func_101(int iParam0){
return shift_right(iParam0, 14) & 63;
}

int func_102(int iParam0){
return shift_right(iParam0, 9) & 31;
}

int func_103(int iParam0){
return shift_right(iParam0, 4) & 31;
}

int func_104(int iParam0){
return (shift_right(iParam0, 26) & 31 * func_105(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_105(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}

int func_106(int iParam0){
return iParam0 & 15;
}

int func_107(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(!func_115(iParam1) || !func_115(iParam0)){
return 1;
}
iVar0=func_104(iParam0);
iVar1=func_104(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_106(iParam0);
iVar1=func_106(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_103(iParam0);
iVar1=func_103(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_102(iParam0);
iVar1=func_102(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_101(iParam0);
iVar1=func_101(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_100(iParam0);
iVar1=func_100(iParam1);
if(iVar0 > iVar1){
return 1;
}
return 0;
}

int func_108(){
var uVar0;
func_114(&uVar0, CLOCK::GET_CLOCK_SECONDS());
func_113(&uVar0, CLOCK::GET_CLOCK_MINUTES());
func_112(&uVar0, CLOCK::GET_CLOCK_HOURS());
func_111(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_110(&uVar0, CLOCK::GET_CLOCK_MONTH());
func_109(&uVar0, CLOCK::GET_CLOCK_YEAR());
return uVar0;
}


void func_109(var uParam0, int iParam1){
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


void func_110(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 11){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15);
*uParam0=(*uParam0 || iParam1);
}


void func_111(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_106(*uParam0);
iVar1=func_104(*uParam0);
if(iParam1 < 1 || iParam1 > func_99(iVar0, iVar1)){
return;
}
*uParam0=(*uParam0 - *uParam0 & 496);
*uParam0=(*uParam0 || shift_left(iParam1, 4));
}


void func_112(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 24){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15872);
*uParam0=(*uParam0 || shift_left(iParam1, 9));
}


void func_113(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 1032192);
*uParam0=(*uParam0 || shift_left(iParam1, 14));
}


void func_114(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 66060288);
*uParam0=(*uParam0 || shift_left(iParam1, 20));
}

int func_115(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(iParam0==-15){
return 0;
}
iVar0=func_100(iParam0);
if(iVar0 < 0 || iVar0 >=60){
return 0;
}
iVar1=func_101(iParam0);
if(iVar1 < 0 || iVar1 >=60){
return 0;
}
iVar2=func_102(iParam0);
if(iVar2 < 0 || iVar2 > 23){
return 0;
}
iVar3=func_104(iParam0);
if((iVar3 <=0 || iVar3 > 2043) || iVar3 < 1979){
return 0;
}
iVar4=func_106(iParam0);
if(iVar4 < 0 || iVar4 > 11){
return 0;
}
iVar5=func_103(iParam0);
if(iVar5 < 1 || iVar5 > func_99(iVar4, iVar3)){
return 0;
}
return 1;
}

int func_116(int iParam0, bool bParam1){
if(MISC::IS_BIT_SET(Global_113648.f_24997.f_8[iParam0], bParam1)){
return 1;
}
return 0;
}

int func_117(int iParam0){
int iVar0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar0=func_35();
if(!func_22(iVar0)){
return 0;
}
switch (iParam0){
case 9:
case 0:
if(((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_125()) || Global_112695) || Global_32166) || func_124()) || func_49(8, -1)) || func_123()) || func_122()) || func_121()) || func_120()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 1:
if(((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_125()) || Global_32166) || func_124()) || func_49(8, -1)) || func_121()) || func_123()) || func_122()) || func_120()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 2:
if((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_125()) || Global_112695) || Global_32166) || func_124()) || func_49(8, -1)) || func_121()) || func_123()) || func_122()) || func_120()) || Global_113648.f_7690.f_919[iVar0]==5) || Global_43804 !=-1){
return 0;
}
break;
case 3:
if((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_125()) || Global_112695) || Global_32166) || func_124()) || func_49(8, -1)) || func_123()) || func_122()) || func_120()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 4:
if(((((func_125() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_49(8, -1)) || func_120()) || func_119()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 5:
if((((func_49(8, -1) || func_123()) || func_122()) || func_119()) || func_118()){
return 0;
}
if((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() !=3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8){
return 0;
}
break;
case 6:
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_125()) || Global_32166) || func_124()) || func_49(8, -1)) || func_122()) || func_121()) || func_120()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
}
break;
case 7:
if((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_125()) || func_122()) || Global_112695) || Global_32166) || func_124()) || Global_44446) || func_49(8, -1)) || func_121()) || func_119()) || func_120()) || Global_113648.f_7690.f_919[iVar0]==5){
return 0;
}
break;
case 8:
if(((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_125()) || Global_112695) || Global_32166) || func_124()) || func_49(8, -1)) || func_121()) || func_119()) || func_123()) || func_122()) || func_120()){
return 0;
}
break;
}}else{
return 0;
}}else{
return 0;
}}else{
return 0;
}
return 1;
}


var func__118(){
return Global_100720.f_1;
}

int func_119(){
if(Global_97603 !=-1){
return MISC::IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);
}
return 0;
}

int func_120(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0){
return 1;
}
return 0;
}

int func_121(){
if(Global_78819){
return 1;
}elseif(Global_63356 && !Global_63362){
return 1;
}
return 0;
}


bool func_122(){
return Global_100733.f_388 > 0;
}


bool func_123(){
return Global_100733.f_387 > 0;
}


var func__124(){
return Global_1575060;
}

int func_125(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return Global_98159.f_44==1;
}
return 0;
}

int func_126(){
func_47();
if(Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259==2){
return 1;
}
return 0;
}


bool func_127(int iParam0){
return func_107(func_108(), iParam0);
}

int func_128(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=0;
iVar1=func_35();
if(iParam2 !=145 && ((iParam2==0 || iParam2==1) || iParam2==2)){
iVar1=iParam2;
}
switch (iParam0){
case 18:
if(iVar1==2){
iVar0=1;
}
break;
case 19:
if(iVar1 !=2){
iVar0=1;
}
break;
case 20:
if(iVar1 !=1){
iVar0=1;
}
break;
case 28:
if(iVar1 !=2){
iVar0=1;
}
break;
case 13:
if(iVar1==0){
if(iParam1==2){
iVar0=0;
}else{
iVar0=1;
}}else{
iVar0=1;
}
break;
case 22:
if(iParam1==2 || iVar1 !=2){
iVar0=1;
}
break;
case 30:
if(iVar1 !=2){
iVar0=1;
}
break;
default:
iVar0=1;
break;
}
return iVar0;
}

int func_129(int iParam0){
if(!func_22(iParam0)){
return 7;
}
return Global_113648.f_7690.f_919[iParam0];
}

int func_130(int iParam0){
int iVar0;
int iVar1;
if(iParam0==31 || iParam0==32){
if(!func_132()){
return 0;
}}
iVar0=iParam0;
if(iVar0 < 31){
iVar1=MISC::IS_BIT_SET(Global_113648.f_24997, iVar0);
}else{
iVar0=(iVar0 - 31);
iVar1=MISC::IS_BIT_SET(Global_113648.f_24997.f_1, iVar0);
}
return iVar1;
}

int func_131(){
var uVar0;
if(Global_32315){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0)){
if(!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, 0, 0))){
return 1;
}}}}
return 0;
}

int func_132(){
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
iVar0=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&iVar0, 0);
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

int func_133(){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)){
if(((((PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("ambulance"))) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("firetruk"))) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())) || Global_112695==1){
return 1;
}}}}
return 0;
}


void func_134(){
int iVar0;
if(iLocal_51){
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
iVar0=0;
while (iVar0 < 3){
if(!PED::IS_PED_INJURED(uLocal_63[iVar0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
TASK::TASK_SMART_FLEE_PED(uLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
PED::SET_PED_KEEP_TASK(uLocal_63[iVar0], 1);
}
iVar0++;
}}
if(MISC::GET_RANDOM_EVENT_FLAG()){
if(func_85()){
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
}}
func_135(-1);
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_135(int iParam0){
char cVar0[64];
if(iParam0==-1){
iParam0=func_29();
}
if(iParam0==-1){
return;
}
if(func_85()){
func_139(iParam0);
HUD::SET_MISSION_NAME(0, 0);
Global_113639=MISC::GET_GAME_TIMER();
func_138(30000);
StringCopy(&cVar0, func_137(Global_113637, 1), 64);
if(func_28(Global_113637) > 0){
StringConCat(&cVar0, " Variation ", 64);
StringIntConCat(&cVar0, Global_113636, 64);
}
STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_113634, (MISC::GET_GAME_TIMER() - Global_113635), 0);
}elseif(MISC::IS_BIT_SET(Global_113644, 0) && Global_113648.f_24997.f_2 < 3){
MISC::CLEAR_BIT(&Global_113644, 0);
}
func_136(&Global_32223);
Global_113638=0;
func_90(-1);
}


void func_136(var uParam0){
if(*uParam0==-1){
return;
}
if(!*uParam0==Global_43219){
*uParam0=-1;
return;
}
*uParam0=-1;
Global_43218=0;
Global_43220=0;
Global_43257=15;
Global_63359=0;
Global_63360=0;
}


char* func_137(int iParam0, bool bParam1){
switch (iParam0){
case 0:
return "RE_ACCIDENT";
break;
case 1:
return "RE_ATMROBBERY";
break;
case 2:
return "RE_BUSTOUR";
break;
case 3:
return "RE_DOMESTIC";
break;
case 4:
return "RE_GETAWAYDRIVER";
break;
case 5:
return "RE_SHOPROBBERY";
break;
case 6:
return "RE_SNATCHED";
break;
case 7:
return "RE_LURED";
break;
case 8:
return "RE_BIKETHIEFSTAMP";
break;
case 9:
return "RE_SECURITYVAN";
break;
case 10:
return "RE_PAPARAZZI";
break;
case 11:
return "RE_CHASETHIEVES";
break;
case 12:
return "RE_DEALGONEWRONG";
break;
case 13:
return "RE_HITCHLIFT";
break;
case 14:
return "RE_STAG";
break;
case 15:
return "RE_ARREST";
break;
case 16:
return "RE_CRASHRESCUE";
break;
case 17:
return "RE_CARTHEFT";
break;
case 18:
return "RE_CULTSHOOTOUT";
break;
case 19:
return "RE_GANGFIGHT";
break;
case 20:
return "RE_GANGINTIMIDATION";
break;
case 21:
return "RE_PRISONVANBREAK";
break;
case 22:
return "RE_PRISONERLIFT";
break;
case 23:
return "RE_ABANDONEDCAR";
break;
case 24:
return "RE_BURIAL";
break;
case 25:
return "RE_MUGGING";
break;
case 26:
return "RE_BIKETHIEF";
break;
case 27:
return "RE_DRUNKDRIVER";
break;
case 28:
return "RE_HOMELANDSECURITY";
break;
case 29:
return "RE_BORDERPATROL";
break;
case 30:
return "RE_SIMEONYETARIAN";
break;
case 31:
return "RE_DUEL";
break;
case 32:
return "RE_SEAPLANE";
break;
case 33:
return "RE_MONKEYPHOTO";
break;
case -1:
return "RE_NONE";
break;
}
if(!bParam1){}
return "UNKNOWN";
}


void func_138(int iParam0){
Global_43808=(MISC::GET_GAME_TIMER() + iParam0);
}


void func_139(int iParam0){
func_140(iParam0, 0, func_145(iParam0));
}


void func_140(int iParam0, int iParam1, int iParam2){
var uVar0;
struct<16> Var1;
uVar0=func_108();
func_143(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
func_142(iParam0, &uVar0);
Var1={
func_141(&uVar0) 
};
}
struct<16> func_141(var uParam0){
struct<16> Var0;
int iVar1;
StringCopy(&Var0, "", 64);
iVar1=func_102(*uParam0);
if(iVar1 < 10){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1, 64);
StringConCat(&Var0, ":", 64);
iVar1=func_101(*uParam0);
if(iVar1 < 10){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1, 64);
StringConCat(&Var0, ":", 64);
iVar1=func_100(*uParam0);
if(iVar1 < 10){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1, 64);
StringConCat(&Var0, " ", 64);
iVar1=func_103(*uParam0);
if(iVar1 < 10){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1, 64);
StringConCat(&Var0, "/", 64);
iVar1=func_106(*uParam0);
if(iVar1 < 9){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1 + 1, 64);
StringConCat(&Var0, "/", 64);
StringIntConCat(&Var0, func_104(*uParam0), 64);
return Var0;
}


void func_142(int iParam0, var uParam1){
Global_113648.f_24997.f_43[iParam0]=*uParam1;
}


void func_143(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
iVar0=func_104(*uParam0);
iVar1=func_106(*uParam0);
iVar2=func_103(*uParam0);
iVar3=func_102(*uParam0);
iVar4=func_101(*uParam0);
iVar5=func_100(*uParam0);
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
iVar6=func_99(iVar1, iVar0);
while (iVar2 > iVar6){
iVar1++;
iVar2=(iVar2 - iVar6);
if(iVar1 > 11){
iVar0++;
iVar1=(iVar1 - 12);
}
iVar6=func_99(iVar1, iVar0);
}
iVar1=(iVar1 + iParam5);
while (iVar1 > 11){
iParam6++;
iVar1=(iVar1 - 12);
}
iVar0=(iVar0 + iParam6);
func_144(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}


void func_144(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_114(uParam0, iParam1);
func_113(uParam0, iParam2);
func_112(uParam0, iParam3);
func_110(uParam0, iParam5);
func_111(uParam0, iParam4);
func_109(uParam0, iParam6);
}

int func_145(int iParam0){
int iVar0;
switch (iParam0){
case 23:
iVar0=30;
break;
case 0:
iVar0=30;
break;
case 15:
iVar0=30;
break;
case 1:
iVar0=200;
break;
case 26:
iVar0=30;
break;
case 8:
iVar0=30;
break;
case 29:
iVar0=30;
break;
case 24:
iVar0=30;
break;
case 2:
iVar0=0;
break;
case 17:
iVar0=30;
break;
case 11:
iVar0=30;
break;
case 16:
iVar0=30;
break;
case 18:
iVar0=30;
break;
case 12:
iVar0=120;
break;
case 3:
iVar0=60;
break;
case 27:
iVar0=60;
break;
case 19:
iVar0=30;
break;
case 20:
iVar0=30;
break;
case 4:
iVar0=60;
break;
case 28:
iVar0=30;
break;
case 13:
iVar0=35;
break;
case 7:
iVar0=30;
break;
case 25:
iVar0=40;
break;
case 10:
iVar0=30;
break;
case 22:
iVar0=30;
break;
case 21:
iVar0=30;
break;
case 5:
iVar0=30;
break;
case 30:
iVar0=60;
break;
case 9:
iVar0=60;
break;
case 6:
iVar0=40;
break;
case 14:
iVar0=40;
break;
}
return iVar0;
}


Vector3 func__146(){
float fVar0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
fVar0=MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_47, 1);
bLocal_50=true;
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_48, 1) < fVar0){
fVar0=MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_48, 1);
bLocal_50=2;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_49, 1) < fVar0){
fVar0=MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_49, 1);
bLocal_50=3;
}
if(bLocal_50==1){
return Local_47;
}elseif(bLocal_50==2){
return Local_48;
}elseif(bLocal_50==3){
return Local_49;
}}
return 0f, 0f, 0f;
}