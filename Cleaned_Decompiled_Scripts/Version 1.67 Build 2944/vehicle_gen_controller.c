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
var uLocal_27=0;
var uLocal_28=0;
float fLocal_29=0f;
float fLocal_30=0f;
float fLocal_31=0f;
var uLocal_32=0;
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
int iLocal_45=0;
var uLocal_46[68]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_47[68]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<3> Local_48[68];
int iLocal_49=0;
int iLocal_50=0;
var uLocal_51[6]={
0, 0, 0, 0, 0, 0 
};
int iLocal_52=0;
int iLocal_53=0;
struct<114> Local_54={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 
};
struct<5> Local_55={
0, 0, 0, 0, 0 
};
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
var uLocal_79=0;
var uLocal_80=0;
struct<74> Local_81={
4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3 
};
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
var uLocal_94=2;
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
bool bLocal_107=0;
int iLocal_108[4]={
0, 0, 0, 0 
};
bool bLocal_109=0;
int iLocal_110[1]={
0 
};
int iLocal_111=0;
int iLocal_112=0;
int iLocal_113=0;
int iLocal_114=0;
int iLocal_115=0;
int iLocal_116=0;
int iLocal_117=0;
int iLocal_118=0;
bool bLocal_119=0;
int iLocal_120=0;
int iLocal_121[2]={
0, 0 
};
int iLocal_122=0;
int iLocal_123=0;
int iLocal_124=0;
int iLocal_125=0;
int iLocal_126=0;
int iLocal_127=0;
bool bLocal_128=0;
struct<13> Local_129={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_130=0;
var uLocal_131=0;
var uLocal_132=0;
var uLocal_133=0;
var uLocal_134=0;
var uLocal_135=0;
var uLocal_136=0;
var uLocal_137=0;
struct<81> Local_138={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0 
};
struct<78> Local_139={
0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
bool bLocal_140=0;
int iLocal_141=0;
int iLocal_142=0;
var uLocal_143=0;
var uLocal_144[6]={
0, 0, 0, 0, 0, 0 
};
int iLocal_145=0;
int iLocal_146=0;
int iLocal_147[68]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_148[3]={
0, 0, 0 
};
int iLocal_149=0;
var uLocal_150[68]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_151=0;
var uLocal_152=0;
int iLocal_153=0;
int iLocal_154=0;
int iLocal_155=0;
bool bLocal_156=0;
int iLocal_157=0;
int iLocal_158=0;
bool bLocal_159=0;
char cLocal_160[16]="";
var uLocal_161=0;
var uLocal_162=0;
char cLocal_163[16]="";
var uLocal_164=0;
var uLocal_165=0;
int iLocal_166=0;
int iLocal_167=0;
int iLocal_168=0;
int iLocal_169=0;
int iLocal_170=0;
int iLocal_171=0;
int iLocal_172=0;
int iLocal_173=0;
char* sLocal_174=NULL;
int iLocal_175=0;
int iLocal_176=0;
float fLocal_177=0f;
int iLocal_178=0;
#endregion

void __EntryFunction__(){
int iVar0;
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
iLocal_26=3;
fLocal_29=80f;
fLocal_30=140f;
fLocal_31=180f;
iLocal_37=1;
iLocal_38=65;
iLocal_39=49;
iLocal_40=64;
iLocal_112=-1;
iLocal_113=-1;
iLocal_118=-1;
iLocal_123=-1;
iLocal_149=-1;
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
Local_54.f_5=-1;
Local_54.f_0=-1;
Local_54.f_1=99999.99f;
func_547(&uLocal_56);
iVar0=0;
while (iVar0 < 3){
Global_98192[iVar0 /*3*/][0]=-1;
Global_98192[iVar0 /*3*/][1]=-1;
iVar0++;
}
if(!Global_113810.f_32752.f_4802){
iVar0=0;
while (iVar0 < 312){
Global_113810.f_32752.f_1982[0 /*939*/].f_626[iVar0]=-15;
Global_113810.f_32752.f_1982[1 /*939*/].f_626[iVar0]=-15;
Global_113810.f_32752.f_1982[2 /*939*/].f_626[iVar0]=-15;
iVar0++;
}
iVar0=0;
while (iVar0 < 23){
Global_113810.f_32752.f_1934[iVar0]=-1f;
iVar0++;
}
Global_113810.f_32752.f_4801=-15;
Global_113810.f_32752.f_4802=1;
}
if(((!func_546() && !func_545()) && !func_544()) && !func_543()){
func_542(60, 0);
func_542(61, 0);
}
func_541();
iVar0=0;
while (iVar0 < 68){
func_540(iVar0);
iVar0++;
}
while (true){
if(!iLocal_53){
iLocal_53=1;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(98)){
if(PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP()==64){
if(!Global_78468){
iLocal_53=0;
}else{
func_539();
func_538();
}
Global_78468=0;
}else{
func_539();
func_538();
}}}
wait(0);
if(MISC::GET_INDEX_OF_CURRENT_LEVEL() !=5){
iLocal_127=func_536();
func_500();
func_498();
func_466(&uLocal_56);
func_425();
func_28();
func_20();
func_17(&uLocal_151);
}
func_1(&uLocal_56);
}}


void func_1(var uParam0){
bool bVar0;
float fVar1;
if(!MISC::IS_BIT_SET(Global_113810.f_10019.f_25, 7)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && func_14(func_16())){
bVar0=false;
if(MISC::IS_BIT_SET(*uParam0, 6) && MISC::IS_BIT_SET(*uParam0, 12)){
fVar1=vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uParam0->f_6);
if(fVar1 > 25f && fVar1 < 1600f){
bVar0=true;
if(uParam0->f_2==-1){
uParam0->f_2=(MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000));
}else{
if(func_13()){
uParam0->f_2=func_12(uParam0->f_2, (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000)));
}
if(!MISC::IS_BIT_SET(*uParam0, 23)){
func_11(uParam0, &(uParam0->f_9));
}
elseif(!MISC::IS_BIT_SET(*uParam0, 30)){
if(AUDIO::REQUEST_SCRIPT_AUDIO_BANK(&(uParam0->f_9), 0, -1)){
if(MISC::GET_GAME_TIMER() > uParam0->f_2){
if(func_9() !=7 && func_8(0, 0)){
func_4(uParam0, func_6(uParam0));
func_3(0);
MISC::SET_BIT(uParam0, 30);
}}}
}
elseif(AUDIO::HAS_SOUND_FINISHED(uParam0->f_1)){
MISC::CLEAR_BIT(uParam0, 30);
AUDIO::RELEASE_SOUND_ID(uParam0->f_1);
uParam0->f_1=-1;
uParam0->f_2=-1;
}}}}
if(!bVar0){
if(MISC::IS_BIT_SET(*uParam0, 23)){
func_2(uParam0);
}
MISC::CLEAR_BIT(uParam0, 30);
uParam0->f_2=-1;
}}}}


void func_2(var uParam0){
AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
MISC::CLEAR_BIT(uParam0, 23);
}


void func_3(bool bParam0){
if(bParam0){
MISC::SET_BIT(&(Global_113810.f_10019.f_25), 22);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_10019.f_25), 22);
}}


void func_4(var uParam0, struct<3> Param1){
struct<16> Var0;
struct<16> Var1;
Var0={
func_5("EAS", "B", "ALLS", "T_C") 
};
Var1={
func_5("ENTS_SA", "FM_EV", "CH_SOUNDS", "SQUAT") 
};
uParam0->f_1=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FROM_COORD(uParam0->f_1, &Var0, Param1, &Var1, 0, 0, 0);
}
struct<16> func_5(char* sParam0, char* sParam1, char* sParam2, char* sParam3){
struct<16> Var0;
StringCopy(&Var0, sParam1, 64);
StringConCat(&Var0, sParam0, 64);
StringConCat(&Var0, sParam3, 64);
StringConCat(&Var0, sParam2, 64);
return Var0;
}


Vector3 func__6(var uParam0){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
Var2={
func_7(uParam0->f_6 - Var1) * Vector(52.5f, 52.5f, 52.5f) 
};
Var0={
Var1 + Var2 
};
}
return Var0;
}


Vector3 func__7(struct<3> Param0){
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

int func_8(int iParam0, int iParam1){
int iVar0;
if(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 36)){
MISC::SET_BIT(&(Global_113810.f_10019.f_25), 22);
}
iVar0=MISC::IS_BIT_SET(Global_113810.f_10019.f_25, 22);
if(iParam0 && iVar0){
MISC::CLEAR_BIT(&(Global_113810.f_10019.f_25), 22);
}
iParam1=iParam1;
return iVar0;
}

int func_9(){
var uVar0;
uVar0=func_10(Global_113810.f_10019.f_25, 14336, 11);
return uVar0;
}

int func_10(var uParam0, int iParam1, int iParam2){
return shift_right((uParam0 && iParam1), iParam2);
}


void func_11(var uParam0, var uParam1){
AUDIO::REQUEST_SCRIPT_AUDIO_BANK(uParam1, 0, -1);
MISC::SET_BIT(uParam0, 23);
}

int func_12(int iParam0, int iParam1){
if(iParam0 > iParam1){
return iParam0;
}
return iParam1;
}


bool func_13(){
bool bVar0;
bVar0=MISC::IS_BIT_SET(Global_113810.f_10019.f_25, 22);
return (func_8(0, 0) && !bVar0);
}


bool func_14(int iParam0){
return iParam0==func_15();
}

int func_15(){
return joaat("ig_orleans");
}

int func_16(){
return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}


void func_17(var uParam0){
int iVar0;
int iVar1;
float fVar2;
if(!Global_1585990.f_21){
iVar1=func_19(*uParam0, uParam0->f_1);
if(iVar1==-1){
*uParam0++;
uParam0->f_1=0;
if(*uParam0 >=4){
Global_1585990.f_21=1;
}
return;
}else{
iVar0=iVar1;
fVar2=func_18(iVar0);
if(Global_1585990[*uParam0 /*5*/][0] < fVar2){
Global_1585990[*uParam0 /*5*/][0]=fVar2;
}
fVar2=VEHICLE::GET_VEHICLE_CLASS_MAX_ACCELERATION(iVar0);
if(Global_1585990[*uParam0 /*5*/][1] < fVar2){
Global_1585990[*uParam0 /*5*/][1]=fVar2;
}
if((iVar0==15 || iVar0==16) || iVar0==14){
fVar2=VEHICLE::GET_VEHICLE_CLASS_MAX_AGILITY(iVar0);
}else{
fVar2=VEHICLE::GET_VEHICLE_CLASS_MAX_TRACTION(iVar0);
}
if(Global_1585990[*uParam0 /*5*/][3] < fVar2){
Global_1585990[*uParam0 /*5*/][3]=fVar2;
}
fVar2=VEHICLE::GET_VEHICLE_CLASS_MAX_BRAKING(iVar0);
if(Global_1585990[*uParam0 /*5*/][2] < fVar2){
Global_1585990[*uParam0 /*5*/][2]=fVar2;
}
uParam0->f_1++;
}}}


float func_18(int iParam0){
if(iParam0==7){
return 51.77096f;
}
return VEHICLE::GET_VEHICLE_CLASS_ESTIMATED_MAX_SPEED(iParam0);
}

int func_19(int iParam0, int iParam1){
switch (iParam0){
case 0:
switch (iParam1){
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
case 11:
return 11;
case 12:
return 12;
case 13:
return 13;
case 14:
return 17;
case 15:
return 18;
case 16:
return 19;
case 17:
return 20;
case 18:
return 22;
default:
}
break;
case 3:
switch (iParam1){
case 0:
return 14;
default:
}
break;
case 1:
switch (iParam1){
case 0:
return 15;
default:
}
break;
case 2:
switch (iParam1){
case 0:
return 16;
default:
}
break;
}
return -1;
}


void func_20(){
bool bVar0;
bool bVar1;
int iVar2;
int iVar3;
if(HUD::DOES_BLIP_EXIST(Global_77479.f_583)){
bVar0=false;
if(iLocal_127 !=Global_77479.f_582){
bVar0=true;
}elseif(((((func_27(0) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(13)) || func_27(14)){
bVar0=true;
}elseif(Global_77479.f_590){
if(!func_26(Global_77479.f_584, HUD::GET_BLIP_COORDS(Global_77479.f_583), 1056964608, 0) || func_22(Global_77479.f_582, func_23(Global_77479.f_582, 1)) > 0){
bVar0=true;
}}elseif(Global_77479.f_591){
if(!func_26(Global_77479.f_587, HUD::GET_BLIP_COORDS(Global_77479.f_583), 1056964608, 0) || func_22(Global_77479.f_582, func_23(Global_77479.f_582, 1)) > 0){
bVar0=true;
}}elseif((!ENTITY::DOES_ENTITY_EXIST(Global_77479.f_581) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_581, 0)) || (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77479.f_581, 0))){
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_581) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_581, 0)){
Global_77479.f_587={
0f, 0f, 0f 
};
}
bVar0=true;
}elseif(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_581)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_581, 0)){
Global_77479.f_587={
ENTITY::GET_ENTITY_COORDS(Global_77479.f_581, 1) 
};
}else{
Global_77479.f_587={
0f, 0f, 0f 
};
}}
if(bVar0){
HUD::REMOVE_BLIP(&(Global_77479.f_583));
Global_77479.f_590=0;
Global_77479.f_591=0;
Global_77479.f_581=0;
}}else{
Global_77479.f_590=0;
Global_77479.f_591=0;
Global_77479.f_581=0;
}
if((((((!HUD::DOES_BLIP_EXIST(Global_77479.f_583) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(13)) && !func_27(14)){
bVar1=false;
iVar2=0;
while (iVar2 < 9){
if((((((Global_98154[iVar2] !=145 && Global_98164[iVar2] !=0) && ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar2])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98144[iVar2], 0)) && !HUD::DOES_BLIP_EXIST(HUD::GET_BLIP_FROM_ENTITY(Global_98144[iVar2]))) && Global_98154[iVar2]==iLocal_127) && VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Global_98144[iVar2]))){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_98144[iVar2], 0)){
Global_77479.f_581=Global_98144[iVar2];
Global_77479.f_582=iLocal_127;
Global_77479.f_590=0;
Global_77479.f_583=HUD::ADD_BLIP_FOR_ENTITY(Global_77479.f_581);
}
iVar2=10;
bVar1=true;
}
iVar2++;
}
if(!bVar1){
if(!HUD::DOES_BLIP_EXIST(Global_77479.f_583) && !func_21(Global_77479.f_584, 0f, 0f, 0f, 0)){
Global_77479.f_581=0;
Global_77479.f_582=iLocal_127;
Global_77479.f_590=1;
Global_77479.f_583=HUD::ADD_BLIP_FOR_COORD(Global_77479.f_584);
}
if(!HUD::DOES_BLIP_EXIST(Global_77479.f_583) && !func_21(Global_77479.f_587, 0f, 0f, 0f, 0)){
Global_77479.f_581=0;
Global_77479.f_582=iLocal_127;
Global_77479.f_591=1;
Global_77479.f_583=HUD::ADD_BLIP_FOR_COORD(Global_77479.f_587);
}}else{
Global_77479.f_590=0;
Global_77479.f_591=0;
}
if(HUD::DOES_BLIP_EXIST(Global_77479.f_583)){
HUD::SET_BLIP_SPRITE(Global_77479.f_583, 225);
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_77479.f_583, "PVEHICLE");
HUD::SET_BLIP_AS_SHORT_RANGE(Global_77479.f_583, false);
HUD::SET_BLIP_PRIORITY(Global_77479.f_583, 3);
if(iLocal_127==0){
iVar3=42;
}elseif(iLocal_127==1){
iVar3=43;
}elseif(iLocal_127==2){
iVar3=44;
}
HUD::SET_BLIP_COLOUR(Global_77479.f_583, iVar3);
}}}


bool func_21(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}

int func_22(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=0;
iVar1=0;
while (iVar1 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98144[iVar1], 0)){
if(Global_98154[iVar1]==iParam0){
if(iParam1==0 || iParam1==ENTITY::GET_ENTITY_MODEL(Global_98144[iVar1])){
iVar0++;
}}}
iVar1++;
}
return iVar0;
}

int func_23(int iParam0, int iParam1){
struct<82> Var0;
if(func_25(iParam0)){
Var0.f_11=12;
Var0.f_31=49;
Var0.f_81=2;
func_24(iParam0, &Var0, iParam1);
return Var0.f_0;
}elseif(iParam0 !=145){}
return 0;
}


void func_24(int iParam0, var uParam1, int iParam2){
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


bool func_25(int iParam0){
return iParam0 < 3;
}

int func_26(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3){
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


bool func_27(int iParam0){
return Global_43377==iParam0;
}


void func_28(){
func_365();
func_276();
func_71();
func_29();
}


void func_29(){
int iVar0;
int iVar1;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(((((Local_54.f_29.f_80 && !Local_54.f_29.f_69) && Local_54.f_0 !=-1) && func_70(Local_54.f_0, 0)) && func_70(Local_54.f_0, 5)) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael1"))==0){
if(!ENTITY::DOES_ENTITY_EXIST(Local_54.f_113)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iVar0);
if(func_67(iVar1)){
Local_54.f_113=iVar0;
}}}}elseif(VEHICLE::IS_VEHICLE_DRIVEABLE(Local_54.f_113, 0) && func_67(ENTITY::GET_ENTITY_MODEL(Local_54.f_113))){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_113, 0)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_54.f_113, Local_54.f_29.f_48, Local_54.f_29.f_51, Local_54.f_29.f_54, 0, 1, 0)){
if((!func_66(Local_54.f_113) && !func_65(Local_54.f_113)) && Local_54.f_113 !=Global_77479.f_484[Local_54.f_0]){
func_30(Local_54.f_0, Local_54.f_113, 1);
}
Local_54.f_113=0;
}}}else{
Local_54.f_113=0;
}}else{
Local_54.f_113=0;
}}}


void func_30(int iParam0, int iParam1, int iParam2){
int iVar0;
if(iParam0==-1){
return;
}
if(!func_64(&(Global_77479.f_555[0 /*21*/]), iParam0)){
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
Global_113810.f_32752.f_4801=func_53();
}
if(iParam1 !=Global_77479.f_139[iParam0]){
if(iParam0==24){
iVar0=func_52(iParam0);
if((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 !=iVar0){
func_31(iVar0, 145);
}}
Global_78385=iParam1;
Global_78386=iParam0;
Global_78387=iParam2;
}}}}


void func_31(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(!func_37(iParam0)){
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
func_32(iParam0, &(Global_113810.f_32752.f_5510));
}


void func_32(int iParam0, var uParam1){
int iVar0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_36(uParam1);
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
if(uParam1->f_65==-1 && !func_35(uParam1->f_66)){
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
func_34(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
iVar0=0;
while (iVar0 <=11){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1)){
MISC::SET_BIT(&(uParam1->f_77), func_33(iVar0 + 1));
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

int func_33(int iParam0){
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

int func_34(int iParam0, var uParam1, var uParam2){
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

int func_35(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}


void func_36(var uParam0){
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

int func_37(int iParam0){
if((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_50(iParam0, 0, 0)) || func_50(iParam0, 1, 0)) || func_50(iParam0, 2, 0)) || func_49(iParam0) !=145) || func_48(iParam0)) || func_66(iParam0)) || func_65(iParam0)) || func_47(iParam0)) || !func_38(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(func_66(iParam0)){
}
if(func_66(iParam0)){
}
if(func_50(iParam0, 0, 0)){
}
if(func_50(iParam0, 1, 0)){
}
if(func_50(iParam0, 2, 0)){
}
if(func_49(iParam0) !=145){
}
return 0;
}
return 1;
}

int func_38(int iParam0){
if(iParam0==0){
return 0;
}
if(!func_39(iParam0, 0, -1)){
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

int func_39(int iParam0, bool bParam1, int iParam2){
int iVar0;
struct<2> Var1;
if(iParam0==0){
return 0;
}
if(!STREAMING::IS_MODEL_A_VEHICLE(iParam0)){
return 0;
}
if(((((iParam0==joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0==joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0==joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0==joaat("blimp2")) || (iParam0==joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())){
if(!func_46()){
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
if((((!func_546() && !func_545()) && !func_544()) && !func_543()) && !func_46()){
return 0;
}}
if((iParam0==joaat("hotknife") || iParam0==joaat("carbonrs")) || iParam0==joaat("khamelion")){
if((func_45() || MISC::IS_PC_VERSION()) || func_44()){
}elseif(!func_544()){
return 0;
}}
if(bParam1){
if(!func_42(iParam0, iParam2)){
return 0;
}}
if(!func_40(iParam0)){
return 0;
}
return 1;
}

int func_40(int iParam0){
int iVar0;
var uVar1;
char cVar2[64];
if(!func_41()){
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

int func_41(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}

int func_42(int iParam0, int iParam1){
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
}}elseif(iParam0==func_43(1)){
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

int func_43(bool bParam0){
if(bParam0){
return -426933872;
}
return joaat("avenger");
}


bool func_44(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


var func__45(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_46(){
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

int func_47(int iParam0){
int iVar0;
var uVar1;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
uVar1=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
if(iVar0==joaat("speedo") && MISC::ARE_STRINGS_EQUAL(uVar1, "LAMAR G ")){
return 1;
}
if(!func_39(iVar0, 0, -1)){
return 1;
}
return 0;
}

int func_48(int iParam0){
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

int func_49(int iParam0){
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

int func_50(int iParam0, int iParam1, bool bParam2){
int iVar0;
char* sVar1;
int iVar2;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
iVar0=0;
while (func_51(iParam1, iVar0, &sVar1, &iVar2)){
if(!bParam2 || MISC::IS_BIT_SET(Global_113810.f_7232[iVar2], 0)){
if(VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_51(int iParam0, int iParam1, char* sParam2, var uParam3){
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

int func_52(int iParam0){
if(iParam0==-1){
return 0;
}
return Global_77479.f_139[iParam0];
}

int func_53(){
var uVar0;
func_63(&uVar0, CLOCK::GET_CLOCK_SECONDS());
func_62(&uVar0, CLOCK::GET_CLOCK_MINUTES());
func_61(&uVar0, CLOCK::GET_CLOCK_HOURS());
func_56(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_55(&uVar0, CLOCK::GET_CLOCK_MONTH());
func_54(&uVar0, CLOCK::GET_CLOCK_YEAR());
return uVar0;
}


void func_54(var uParam0, int iParam1){
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


void func_55(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 11){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15);
*uParam0=(*uParam0 || iParam1);
}


void func_56(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_60(*uParam0);
iVar1=func_58(*uParam0);
if(iParam1 < 1 || iParam1 > func_57(iVar0, iVar1)){
return;
}
*uParam0=(*uParam0 - *uParam0 & 496);
*uParam0=(*uParam0 || shift_left(iParam1, 4));
}

int func_57(int iParam0, int iParam1){
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


var func__58(int iParam0){
return (shift_right(iParam0, 26) & 31 * func_59(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_59(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}

int func_60(int iParam0){
return iParam0 & 15;
}


void func_61(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 24){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15872);
*uParam0=(*uParam0 || shift_left(iParam1, 9));
}


void func_62(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 1032192);
*uParam0=(*uParam0 || shift_left(iParam1, 14));
}


void func_63(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 66060288);
*uParam0=(*uParam0 || shift_left(iParam1, 20));
}

int func_64(var uParam0, int iParam1){
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
uParam0->f_4=func_23(0, 1);
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
uParam0->f_4=func_23(0, 1);
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
uParam0->f_4=func_23(1, 1);
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
uParam0->f_4=func_23(1, 2);
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
uParam0->f_4=func_23(1, 1);
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
uParam0->f_4=func_23(1, 2);
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
uParam0->f_4=func_23(2, 1);
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
uParam0->f_4=func_23(2, 1);
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
uParam0->f_4=func_23(2, 1);
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
if(func_46()){
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
if(func_46()){
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
if(!func_21(Global_113810.f_32752.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113810.f_32752.f_1864[uParam0->f_14 /*3*/] 
};
}
if(Global_113810.f_32752.f_1934[uParam0->f_14] !=-1f){
uParam0->f_3=Global_113810.f_32752.f_1934[uParam0->f_14];
}}
if(MISC::IS_BIT_SET(uParam0->f_9, 19)){
if(!func_21(Global_113810.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113810.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113810.f_2366.f_539.f_3609[1 /*4*/][uParam0->f_12];
}}elseif(MISC::IS_BIT_SET(uParam0->f_9, 20)){
if(!func_21(Global_113810.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113810.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113810.f_2366.f_539.f_3609[0 /*4*/][uParam0->f_12];
}}
return iVar0;
}

int func_65(int iParam0){
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

int func_66(int iParam0){
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

int func_67(int iParam0){
switch (Local_54.f_6){
case 0:
return func_69(iParam0);
break;
case 1:
if(((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_JETSKI(iParam0)) || iParam0==joaat("submersible2")) || iParam0==joaat("dodo")){
return 1;
}
break;
case 3:
return func_68(iParam0);
break;
case 2:
return (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) && iParam0 !=joaat("skylift"));
break;
}
return 0;
}

int func_68(int iParam0){
if((iParam0==joaat("marshall") || iParam0==joaat("barracks")) || iParam0==joaat("crusader")){
return 0;
}
if(iParam0==joaat("rhino")){
return 0;
}
if(((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)){
return 0;
}
return 1;
}

int func_69(int iParam0){
if(iParam0==joaat("jet")){
return 0;
}
if((((!VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0) && iParam0 !=joaat("marshall")) && iParam0 !=joaat("rhino")) && iParam0 !=joaat("barracks")) && iParam0 !=joaat("crusader")){
return 0;
}
return 1;
}

int func_70(int iParam0, int iParam1){
if(iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113810.f_32752[iParam0], iParam1);
}


void func_71(){
struct<101> Var0;
struct<78> Var1;
bool bVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
struct<4> Var8;
int iVar9;
int iVar10;
int iVar11;
int iVar12;
bool bVar13;
int iVar14;
int iVar15;
bool bVar16;
int iVar17;
bool bVar18;
bool bVar19;
int iVar20;
int iVar21;
int iVar22;
bool bVar23;
struct<2> Var24;
int iVar25;
bool bVar26;
int iVar27;
bool bVar28;
var uVar29;
Var0.f_9=49;
Var0.f_59=2;
Var0.f_78=-1;
Var0.f_79=-1;
Var0.f_96=-1;
Var0.f_97=1;
Var0.f_99=132;
Var0.f_100=-1;
Var1.f_9=49;
Var1.f_59=2;
bVar2=false;
iVar3=0;
if(iLocal_111 > 0 && iLocal_111 !=99){
if(((((((((((((((Local_54.f_0==-1 || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_54.f_29.f_7, Local_54.f_29.f_10, Local_54.f_29.f_13, 0, 1, 0)) || ((ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[Local_54.f_0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[Local_54.f_0], 0)) && (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77479.f_484[Local_54.f_0]) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77479.f_484[Local_54.f_0], 1)))) || ((ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[Local_54.f_0]) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && ((ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER::PLAYER_PED_ID()) - 1f) > 0.15f && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Global_77479.f_484[Local_54.f_0])))) || ((ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[Local_54.f_0]) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77479.f_484[Local_54.f_0], 1))) || (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || func_275(0) !=bLocal_159) || bLocal_140) || func_274(-1082130432)){
iLocal_111=99;
}}
switch (iLocal_111){
case 0:
if((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !Global_75816) && !bLocal_140) && !CAM::IS_SCREEN_FADED_OUT()){
if((((((((((Local_54.f_29.f_80 && Local_54.f_2==0) && (Global_77479.f_592[0] !=-1 || func_273() !=0)) && Local_54.f_0 !=-1) && !iLocal_157) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(14)) && !func_274(-1082130432)){
if(iLocal_113 !=-1){
}elseif(func_70(Local_54.f_0, 0) && func_70(Local_54.f_0, 5)){
if((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_54.f_29.f_7, Local_54.f_29.f_10, Local_54.f_29.f_13, 0, 1, 0) && !PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID())){
if((!ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[Local_54.f_0]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[Local_54.f_0], 0)) || (!PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77479.f_484[Local_54.f_0]) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77479.f_484[Local_54.f_0], 1))){
iVar6=func_273();
iVar7=0;
while (iVar7 < iVar6){
if(func_67(func_269(iVar7))){
iVar5++;
}
iVar7++;
}
iVar4=0;
while (iVar4 < Global_77479.f_592){
if(Global_77479.f_592[iVar4] !=-1){
if((func_268(Global_77479.f_592[iVar4], iLocal_127) && Global_113810.f_32752.f_1982[iLocal_127 /*939*/].f_626[Global_77479.f_592[iVar4]]==-15) && (Global_77479.f_592[iVar4] !=200 || !Global_113810.f_25076.f_7)){
iVar5++;
}
}
iVar4++;
}
if(iVar5 > 0){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
iLocal_142=1;
if(Local_54.f_6==3){
func_267(&iLocal_112, 3, "WEB_VEH_TRIG2", 0, 0, 0, 0);
}
else{
func_267(&iLocal_112, 3, "WEB_VEH_TRIG", 0, 0, 0, 0);
}
bLocal_159=func_275(0);
iLocal_111++;
}}elseif(!iLocal_142){
if(Local_54.f_6==0){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_266("HANGAR_NO")){
func_265("HANGAR_NO", -1);
StringCopy(&cLocal_160, "HANGAR_NO", 16);
}
bVar2=true;
}
elseif(Local_54.f_6==1){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_266("MARINA_NO")){
func_265("MARINA_NO", -1);
StringCopy(&cLocal_160, "MARINA_NO", 16);
}
bVar2=true;
}
elseif(Local_54.f_6==2){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_266("HELIPAD_NO")){
func_265("HELIPAD_NO", -1);
StringCopy(&cLocal_160, "HELIPAD_NO", 16);
}
bVar2=true;
}
elseif(Local_54.f_6==3){
StringCopy(&Var8, "CAR_GAR_NO", 16);
if(MISC::IS_PS3_VERSION() || func_44()){
StringConCat(&Var8, "_1", 16);
}
elseif(MISC::IS_XBOX360_VERSION() || func_45()){
StringConCat(&Var8, "_2", 16);
}
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_266(&Var8)){
func_265(&Var8, -1);
cLocal_160={
Var8 
};
}
bVar2=true;
}}}
}
else{
iLocal_142=0;
}}}}
break;
case 1:
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_263(0, -1, 0)){
if(iLocal_113 !=-1){
iLocal_111=0;
return;
}
if(func_262(iLocal_112, 1)){
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT())==4){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
}else{
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)){
AUDIO::SET_VEHICLE_RADIO_ENABLED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
}}
func_261();
iLocal_114=0;
iLocal_115=0;
iLocal_116=0;
bLocal_107=-1;
iLocal_111++;
return;
}}
break;
case 2:
if(!iLocal_114 || iLocal_115){
func_260(0, 0);
func_259(1, 4, 0, 0, 0);
func_258(1, 2, 1, 1, 1);
func_257("WEB_VEH_TITLE");
iVar9=0;
while (iVar9 < iLocal_108){
iLocal_108[iVar9]=0;
iVar9++;
}
iVar10=-1;
iVar11=0;
func_64(&(Local_54.f_8), Local_54.f_0);
bVar13=false;
iVar14=func_273();
iVar12=0;
while (iVar12 < iVar14){
if(func_67(func_269(iVar12))){
if(iVar10==-1){
iVar10=bVar13;
}
if(Local_54.f_8.f_4==func_269(iVar12)){
bLocal_107=bVar13;
iVar11=1;
}
bVar13++;
}
iVar12++;
}
iVar12=0;
while (iVar12 < Global_77479.f_592){
if(Global_77479.f_592[iVar12] !=-1){
if((func_268(Global_77479.f_592[iVar12], iLocal_127) && Global_113810.f_32752.f_1982[iLocal_127 /*939*/].f_626[Global_77479.f_592[iVar12]]==-15) && (Global_77479.f_592[iVar12] !=200 || !Global_113810.f_25076.f_7)){
func_144(Global_77479.f_592[iVar12], &Var0, 0, iLocal_127, -1, -1);
if(iVar10==-1){
iVar10=bVar13;
}
if(Local_54.f_8.f_4==Var0.f_66){
bLocal_107=bVar13;
iVar11=1;
}
bVar13++;
}}
iVar12++;
}
if(bLocal_107==-1){
bLocal_107=iVar10;
}
bVar13=false;
iVar14=func_273();
iVar12=0;
while (iVar12 < iVar14){
if(func_67(func_269(iVar12))){
MISC::SET_BIT(&(iLocal_108[(bVar13 / 32)]), (bVar13 % 32));
func_140(bVar13, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_269(iVar12)), 0, 1, 0, 0, 0);
if((bLocal_107==bVar13 && iVar11) && Local_54.f_6 !=3){
func_139(bVar13, 4, 0);
}
else{
func_139(bVar13, 0, 0);
}
bVar13++;
}
iVar12++;
}
iVar12=0;
while (iVar12 < Global_77479.f_592){
if(Global_77479.f_592[iVar12] !=-1){
if((func_268(Global_77479.f_592[iVar12], iLocal_127) && Global_113810.f_32752.f_1982[iLocal_127 /*939*/].f_626[Global_77479.f_592[iVar12]]==-15) && (Global_77479.f_592[iVar12] !=200 || !Global_113810.f_25076.f_7)){
MISC::SET_BIT(&(iLocal_108[(bVar13 / 32)]), (bVar13 % 32));
func_144(Global_77479.f_592[iVar12], &Var0, 0, iLocal_127, -1, -1);
if(Global_77479.f_592[iVar12] !=164){
func_140(bVar13, func_136(Global_77479.f_592[iVar12]), 0, 1, 0, 0, 0);
}elseif(Var0.f_67==0){
func_140(bVar13, "TWOSTRINGS", 2, 1, 0, 0, 0);
func_133(func_136(Global_77479.f_592[iVar12]), 0);
func_133("VNX_SWFTC", 0);
}elseif(Var0.f_67==1){
func_140(bVar13, "TWOSTRINGS", 2, 1, 0, 0, 0);
func_133(func_136(Global_77479.f_592[iVar12]), 0);
func_133("VNX_SWFTB", 0);
}else{
func_140(bVar13, func_136(Global_77479.f_592[iVar12]), 0, 1, 0, 0, 0);
}
if(bLocal_107==bVar13 && iVar11){
func_139(bVar13, 4, 0);
}else{
func_139(bVar13, 0, 0);
}
bVar13++;
}}
iVar12++;
}
func_132(bLocal_107, 1, 1);
iLocal_117=1;
iLocal_115=0;
iLocal_114=1;
}else{
iVar3=0;
if(MISC::IS_PC_VERSION()){
if(PAD::IS_USING_CURSOR(2)){
PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
PAD::ENABLE_CONTROL_ACTION(0, 241, 1);
PAD::ENABLE_CONTROL_ACTION(0, 242, 1);
func_129(0, 0, 0, 1);
func_128(0, -1, 1);
if(func_127()){
if(Global_4541034 !=bLocal_107){
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
bLocal_107=Global_4541034;
func_132(bLocal_107, 1, 1);
iLocal_117=1;
}else{
iVar3=1;
}
}}}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 188) || PAD::IS_CONTROL_JUST_PRESSED(2, 241)){
iLocal_117=1;
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
iVar15=(bLocal_107 - 1);
while (iVar15 >=0){
if(MISC::IS_BIT_SET(iLocal_108[(iVar15 / 32)], (iVar15 % 32))){
bLocal_107=iVar15;
bVar16=true;
iVar15=0;
}
iVar15=(iVar15 + -1);
}
if(!bVar16){
iVar15=(iLocal_108 * 32 - 1);
while (iVar15 >=bLocal_107 + 1){
if(MISC::IS_BIT_SET(iLocal_108[(iVar15 / 32)], (iVar15 % 32))){
bLocal_107=iVar15;
bVar16=true;
iVar15=0;
}
iVar15=(iVar15 + -1);
}}
if(bVar16){
func_132(bLocal_107, 1, 1);
}}elseif(PAD::IS_CONTROL_JUST_PRESSED(2, 187) || PAD::IS_CONTROL_JUST_PRESSED(2, 242)){
iLocal_117=1;
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
iVar17=bLocal_107 + 1;
while (iVar17 <=(iLocal_108 * 32 - 1)){
if(MISC::IS_BIT_SET(iLocal_108[(iVar17 / 32)], (iVar17 % 32))){
bLocal_107=iVar17;
bVar18=true;
iVar17=iLocal_108 * 32 + 1;
}
iVar17++;
}
if(!bVar18){
iVar17=0;
while (iVar17 <=(bLocal_107 - 1)){
if(MISC::IS_BIT_SET(iLocal_108[(iVar17 / 32)], (iVar17 % 32))){
bLocal_107=iVar17;
bVar18=true;
iVar17=iLocal_108 * 32 + 1;
}
iVar17++;
}}
if(bVar18){
func_132(bLocal_107, 1, 1);
}}elseif(PAD::IS_CONTROL_JUST_RELEASED(2, 201) || iVar3==1){
bVar19=false;
iVar3=0;
AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
iVar21=0;
iVar22=func_273();
iVar20=0;
while (iVar20 < iVar22){
if(func_67(func_269(iVar20))){
if(bLocal_107==iVar21 && (((((Local_54.f_8.f_4 !=func_269(iVar20) || !ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[Local_54.f_0])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[Local_54.f_0], 0)) || Local_54.f_0==21) || Local_54.f_0==22) || Local_54.f_0==23)){
bVar19=true;
if((((!iLocal_116 && Local_54.f_8.f_4 !=func_269(iVar20)) || (!iLocal_116 && Local_54.f_0==21)) || (!iLocal_116 && Local_54.f_0==22)) || (!iLocal_116 && Local_54.f_0==23)){
func_126("VEH_SELECT_CNFA", 0, 0);
func_125(-1);
func_124(201, "ITEM_YES", -1);
func_124(202, "ITEM_NO", -1);
iLocal_116=1;
iVar20=func_273() + 1;
}elseif(Local_54.f_6==3){
if(func_123(func_269(iVar20))){
iLocal_158=func_269(iVar20);
iLocal_114=0;
iLocal_115=0;
bLocal_109=false;
iLocal_111++;
}
else{
iLocal_157=1;
iLocal_158=func_269(iVar20);
iLocal_111=99;
}}elseif(Local_54.f_6==0 && func_123(func_269(iVar20))){
iLocal_158=func_269(iVar20);
iLocal_114=0;
iLocal_115=0;
bLocal_109=false;
iLocal_111++;
}else{
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[Local_54.f_0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77479.f_484[Local_54.f_0], 0, 1);
VEHICLE::DELETE_VEHICLE(&(Global_77479.f_484[Local_54.f_0]));
}
Var1.f_66=func_269(iVar20);
MISC::SET_BIT(&(Var1.f_77), 14);
func_120(Local_54.f_0, &Var1, 0f, 0f, 0f, -1f, 145);
func_119(Local_54.f_0);
func_64(&(Local_54.f_8), Local_54.f_0);
iVar20=func_273() + 1;
iLocal_115=1;
}}
iVar21++;
}
iVar20++;
}
if(!bVar19){
iVar20=0;
while (iVar20 < Global_77479.f_592){
if(Global_77479.f_592[iVar20] !=-1){
if((func_268(Global_77479.f_592[iVar20], iLocal_127) && Global_113810.f_32752.f_1982[iLocal_127 /*939*/].f_626[Global_77479.f_592[iVar20]]==-15) && (Global_77479.f_592[iVar20] !=200 || !Global_113810.f_25076.f_7)){
func_144(Global_77479.f_592[iVar20], &Var0, 0, iLocal_127, -1, -1);
if(bLocal_107==iVar21 && ((Local_54.f_8.f_4 !=Var0.f_66 || !ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[Local_54.f_0])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[Local_54.f_0], 0))){
bVar19=true;
if(!iLocal_116){
if(Local_54.f_6==3){
func_126("VEH_SELECT_CNF", 0, 0);
}else{
func_126("VEH_SELECT_CNFA", 0, 0);
}
func_125(-1);
func_124(201, "ITEM_YES", -1);
func_124(202, "ITEM_NO", -1);
iLocal_116=1;
iVar20=Global_77479.f_592 + 1;
}
elseif(Var0.f_66==joaat("marshall")){
iLocal_111=3;
iLocal_115=1;
iVar20=Global_77479.f_592 + 1;
}
else{
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[Local_54.f_0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77479.f_484[Local_54.f_0], 0, 1);
VEHICLE::DELETE_VEHICLE(&(Global_77479.f_484[Local_54.f_0]));
}
func_144(Global_77479.f_592[iVar20], &Var0, 0, iLocal_127, -1, -1);
MISC::SET_BIT(&(Var0.f_77), 14);
if(VEHICLE::IS_THIS_MODEL_A_PLANE(Var0.f_66)){
MISC::SET_BIT(&(Var0.f_77), 22);
}
func_120(Local_54.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
func_119(Local_54.f_0);
func_64(&(Local_54.f_8), Local_54.f_0);
iVar20=Global_77479.f_592 + 1;
iLocal_115=1;
}
}
iVar21++;
}}
iVar20++;
}}}elseif(PAD::IS_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 238)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
if(iLocal_116){
iLocal_117=1;
iLocal_116=0;
}else{
iLocal_111=99;
}}}
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
if(iLocal_117){
func_126("", 0, 0);
func_125(-1);
func_124(201, "ITEM_SELECT", -1);
func_124(202, "ITEM_EXIT", -1);
iLocal_116=0;
iLocal_117=0;
}
func_77(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
break;
case 3:
if(!iLocal_114 || iLocal_115){
func_260(0, 0);
func_259(1, 0, 0, 0, 0);
func_258(1, 1, 1, 1, 1);
bVar23=false;
while (bVar23 < iLocal_110){
iLocal_110[bVar23]=0;
bVar23++;
}
func_257("WEB_VEH_TITLE2");
bVar23=false;
while (bVar23 < 25){
StringCopy(&Var24, "WEB_VEH_FLAG_", 16);
StringIntConCat(&Var24, bVar23, 16);
func_140(bVar23, &Var24, 0, 1, 0, 0, 0);
MISC::SET_BIT(&(iLocal_110[(bVar23 / 32)]), (bVar23 % 32));
bVar23++;
}
if(Local_129.f_12==0){
bLocal_109=Global_113810.f_25185.f_313[200];
}elseif(Local_129.f_12==1){
bLocal_109=Global_113810.f_25185.f_626[200];
}else{
bLocal_109=Global_113810.f_25185.f_939[200];
}
func_132(bLocal_109, 1, 1);
iLocal_117=1;
iLocal_115=0;
iLocal_114=1;
}else{
iVar3=0;
if(MISC::IS_PC_VERSION()){
if(PAD::IS_USING_CURSOR(2)){
PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
PAD::ENABLE_CONTROL_ACTION(0, 241, 1);
PAD::ENABLE_CONTROL_ACTION(0, 242, 1);
func_129(0, 0, 0, 1);
func_128(0, -1, 1);
if(func_127()){
if(Global_4541034 !=bLocal_109){
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
bLocal_109=Global_4541034;
func_132(bLocal_109, 1, 1);
iLocal_117=1;
}else{
iVar3=1;
}
}}}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 188) || PAD::IS_CONTROL_JUST_PRESSED(2, 241)){
iLocal_117=1;
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
iVar25=(bLocal_109 - 1);
while (iVar25 >=0){
if(MISC::IS_BIT_SET(iLocal_110[(iVar25 / 32)], (iVar25 % 32))){
bLocal_109=iVar25;
bVar26=true;
iVar25=0;
}
iVar25=(iVar25 + -1);
}
if(!bVar26){
iVar25=31;
while (iVar25 >=bLocal_109 + 1){
if(MISC::IS_BIT_SET(iLocal_110[(iVar25 / 32)], (iVar25 % 32))){
bLocal_109=iVar25;
bVar26=true;
iVar25=bLocal_109;
}
iVar25=(iVar25 + -1);
}}
if(bVar26){
func_132(bLocal_109, 1, 1);
}}elseif(PAD::IS_CONTROL_JUST_PRESSED(2, 187) || PAD::IS_CONTROL_JUST_PRESSED(2, 242)){
iLocal_117=1;
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
iVar27=bLocal_109 + 1;
while (iVar27 <=31){
if(MISC::IS_BIT_SET(iLocal_110[(iVar27 / 32)], (iVar27 % 32))){
bLocal_109=iVar27;
bVar28=true;
iVar27=31;
}
iVar27++;
}
if(!bVar28){
iVar27=0;
while (iVar27 <=(bLocal_109 - 1)){
if(MISC::IS_BIT_SET(iLocal_110[(iVar27 / 32)], (iVar27 % 32))){
bLocal_109=iVar27;
bVar28=true;
iVar27=bLocal_109;
}
iVar27++;
}}
if(bVar28){
func_132(bLocal_109, 1, 1);
}}elseif(PAD::IS_CONTROL_JUST_RELEASED(2, 201) || iVar3==1){
iVar3=0;
AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[Local_54.f_0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77479.f_484[Local_54.f_0], 0, 1);
VEHICLE::DELETE_VEHICLE(&(Global_77479.f_484[Local_54.f_0]));
}
uVar29=bLocal_109 + 1;
if(iLocal_127==0){
Global_113810.f_25185.f_313[200]=uVar29;
}elseif(iLocal_127==1){
Global_113810.f_25185.f_626[200]=uVar29;
}elseif(iLocal_127==2){
Global_113810.f_25185.f_939[200]=uVar29;
}
func_144(200, &Var0, 0, iLocal_127, -1, -1);
MISC::SET_BIT(&(Var0.f_77), 14);
if(VEHICLE::IS_THIS_MODEL_A_PLANE(Var0.f_66)){
MISC::SET_BIT(&(Var0.f_77), 22);
}
func_120(Local_54.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
func_119(Local_54.f_0);
func_64(&(Local_54.f_8), Local_54.f_0);
iLocal_115=1;
iLocal_111=2;
}elseif(PAD::IS_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 238)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
iLocal_114=0;
iLocal_115=0;
iLocal_111=(iLocal_111 - 1);
}}
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
if(iLocal_117){
func_126("", 0, 0);
func_125(-1);
func_124(201, "ITEM_SELECT", -1);
func_124(202, "ITEM_EXIT", -1);
iLocal_116=0;
iLocal_117=0;
}
func_77(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
break;
case 70:
break;
case 99:
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)){
if(!AUDIO::IS_PLAYER_VEH_RADIO_ENABLE()){
AUDIO::SET_VEHICLE_RADIO_ENABLED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
}}}
func_74(1, -1);
iLocal_111=0;
func_72(&iLocal_112);
iLocal_112=-1;
break;
}
if(!bVar2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_160)){
if((((func_266("HANGAR_NO") || func_266("MARINA_NO")) || func_266("HELIPAD_NO")) || func_266("CAR_GAR_NO_1")) || func_266("CAR_GAR_NO_2")){
HUD::CLEAR_HELP(1);
}
StringCopy(&cLocal_160, "", 16);
}}}


void func_72(int iParam0){
int iVar0;
if(*iParam0==-1){
return;
}
iVar0=func_73(*iParam0);
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

int func_73(int iParam0){
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


void func_74(bool bParam0, int iParam1){
int iVar0;
if(!func_76(&iVar0, 0, iParam1)){
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
func_75(&(Global_23390.f_6103[iVar0 /*10*/]));
Global_23390.f_6164[iVar0]=0;
}else{
Global_23390.f_6164[iVar0]=0;
}}


void func_75(var uParam0){
if(uParam0->f_9 !=0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
}
*uParam0=0;
uParam0->f_9=0;
}}

int func_76(var uParam0, bool bParam1, int iParam2){
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


void func_77(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8){
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
if(!func_76(&iVar0, 0, iParam1)){
return;
}
if(iVar0==-1){}
if(!func_116(0, bParam6)){
return;
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
fVar55=0f;
if(Global_23390){
if(func_114(29, 1, 1, &fVar36, &fVar37, bParam7)){
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
func_112(bParam7, &uVar58, &uVar59, &fVar60);
if(bParam3){
if(Global_23390.f_5661 <=1){
func_140(Global_23390.f_5661 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
Global_23390.f_6457=1;
}}
iVar5=0;
while (iVar5 < 2){
if(iVar5==1 && Global_23390.f_6171){
if(MISC::GET_HASH_KEY(&(Global_23390.f_1))==MISC::GET_HASH_KEY("HIDE")){
fVar49=Global_23388;
}else{
if(Global_23390){
StringCopy(&cVar61, func_111(29), 64);
StringCopy(&cVar62, func_108(29, 1), 64);
if(MISC::GET_HASH_KEY(&(Global_23390.f_7488[29 /*16*/]))==joaat("crew_logo")){
func_107(Global_23387, Global_23388, fParam5, fVar55, 0, 0, 0, 255);
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
func_107(Global_23387, (Global_23388 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
fVar49=(((Global_23388 + fVar55) + 0.034722f) + 0f);
if(MISC::GET_HASH_KEY(&(Global_23390.f_1)) !=0){
func_106();
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
func_106();
func_104((((Global_23387 + fParam5) - 0.00390625f) - func_105("CM_ITEM_COUNT", Global_23390.f_6179, Global_23390.f_6180)), ((Global_23388 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23390.f_6179, Global_23390.f_6180);
}elseif(Global_23390.f_6174 > Global_23390.f_5668){
if(Global_23390.f_6177 !=0){
func_106();
func_104((((Global_23387 + fParam5) - 0.00390625f) - func_105("CM_ITEM_COUNT", Global_23390.f_6177, Global_23390.f_6176)), ((Global_23388 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23390.f_6177, Global_23390.f_6176);
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
func_107(Global_23387, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
func_114(Global_23390.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
fVar40=(((Global_23387 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
}
func_103(fVar40);
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
func_107(Global_23387, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23390.f_8882){
iVar1=Global_23390.f_8878;
iVar2=Global_23390.f_8879;
iVar3=Global_23390.f_8880;
iVar4=Global_23390.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_103(fVar40);
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
func_114(Global_23390.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
func_102(Global_23390.f_5165, 1, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_111(Global_23390.f_5165), func_108(Global_23390.f_5165, 1), ((Global_23387 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
fVar49=(fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_5087))){
fVar49=(fVar49 + (0.00138888f * 6f));
func_103(fVar40);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23390.f_5087));
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_107(Global_23387, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23390.f_8882){
iVar1=Global_23390.f_8878;
iVar2=Global_23390.f_8879;
iVar3=Global_23390.f_8880;
iVar4=Global_23390.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_103(fVar40);
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
func_103(fVar40);
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
func_107(Global_23387, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23390.f_8882){
iVar1=Global_23390.f_8878;
iVar2=Global_23390.f_8879;
iVar3=Global_23390.f_8880;
iVar4=Global_23390.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_103(fVar40);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_5087));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
}
if(MISC::GET_HASH_KEY(&(Global_4540958.f_21)) !=0 && Global_4540958.f_65 !=-1){
fVar49=(fVar49 + (0.00277776f * 2f));
fVar40=(Global_23387 + 0.0046875f);
if(Global_4540958.f_67 !=0){
func_114(Global_4540958.f_67, 1, 1, &fVar36, &fVar37, bParam7);
fVar40=(((Global_23387 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
}
func_103(fVar40);
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
func_107(Global_23387, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23390.f_8882){
iVar1=Global_23390.f_8878;
iVar2=Global_23390.f_8879;
iVar3=Global_23390.f_8880;
iVar4=Global_23390.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_103(fVar40);
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
func_114(Global_4540958.f_67, 1, 1, &fVar36, &fVar37, bParam7);
func_102(Global_4540958.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_111(Global_4540958.f_67), func_108(Global_4540958.f_67, 1), ((Global_23387 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
fVar49=(fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
if(Global_4540958.f_65 > 0){
if((MISC::GET_GAME_TIMER() - Global_4540958.f_66) > Global_4540958.f_65){
StringCopy(&(Global_4540958.f_21), "", 16);
Global_4540958.f_65=-1;
}}}
func_93(uVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
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
func_91(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, iVar72, bVar51, bVar50);
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
if(func_114(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7)){
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
if(func_114(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_114(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_102(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_111(26), func_108(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_114(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_114(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_102(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_111(27), func_108(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
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
func_91(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
if(Global_23390.f_8888 && Global_23390.f_8889==iVar6){
func_90(bVar32);
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
if(func_114(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + (fVar36 * 0.5f));
if(func_114(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_102(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
if(Global_23390.f_5526[iVar8]==2){
GRAPHICS::DRAW_SPRITE(func_111(Global_23390.f_4824[(iVar22 + iVar28)]), func_108(Global_23390.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
else{
GRAPHICS::DRAW_SPRITE(func_111(Global_23390.f_4824[(iVar22 + iVar28)]), func_108(Global_23390.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
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
if(func_89() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0){
if(iVar8==0){
if(Global_23390.f_2130[iVar24]){
bVar51=true;
}
func_91(0, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
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
if(func_114(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + (fVar36 * 0.5f));
if(iVar5==1){
if(func_114(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_102(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
if(Global_23390.f_4824[(iVar22 + iVar14)]==30){
GRAPHICS::DRAW_SPRITE(func_111(Global_23390.f_4824[(iVar22 + iVar14)]), func_108(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), (Global_23387 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
elseif(Global_23390.f_5526[iVar8]==2){
GRAPHICS::DRAW_SPRITE(func_111(Global_23390.f_4824[(iVar22 + iVar14)]), func_108(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
else{
GRAPHICS::DRAW_SPRITE(func_111(Global_23390.f_4824[(iVar22 + iVar14)]), func_108(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
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
func_91(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, 0, 0);
if(Global_23390.f_8888 && Global_23390.f_8889==iVar6){
func_90(bVar32);
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
if(func_114(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_114(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_102(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_111(26), func_108(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_114(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_114(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_102(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_111(27), func_108(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
}
if(iVar5==1){
func_91(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, 0, 0);
func_88((fVar34 + fVar40), fVar35, "NUMBER", Global_23390.f_4309[iVar20], 0);
}}
bVar39=true;
iVar20++;
break;
case 3:
if(bVar33){
if(!Global_23390.f_6172){
func_91(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, 0, 0);
if(Global_23390.f_8888 && Global_23390.f_8889==iVar6){
func_90(bVar32);
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
if(func_114(26, 1, 0, &fVar36, &fVar37, 0)){
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_114(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_102(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_111(26), func_108(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_114(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_114(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_102(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_111(27), func_108(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
}
func_91(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, 0, 0);
func_87((fVar34 + fVar40), fVar35, "NUMBER", Global_23390.f_4566[iVar21], Global_23390.f_4695[iVar21]);
}
bVar39=true;
iVar21++;
break;
case 4:
if(bVar33){
if(func_114(Global_23390.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7)){
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
if(func_114(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_114(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_102(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_111(26), func_108(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}}
if(func_114(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_114(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_102(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_111(27), func_108(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}}
}
if(iVar5==1){
if(func_114(Global_23390.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_102(Global_23390.f_4824[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_111(Global_23390.f_4824[iVar22]), func_108(Global_23390.f_4824[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_86(Global_23390.f_4824[iVar22])), (fVar37 * func_86(Global_23390.f_4824[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
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
if(func_114(26, 1, 1, &fVar36, &fVar37, bParam7)){
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
func_79(0);
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
func_78(1);
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


void func_78(int iParam0){
Global_1655612.f_1163=iParam0;
}


void func_79(int iParam0){
if(func_85()){
return;
}
if(!Global_20500.f_1==1){
if(func_84(0)){
func_80(iParam0);
}
MISC::SET_BIT(&Global_8371, 2);
}}


void func_80(int iParam0){
if(func_85()){
return;
}
if(Global_20704){
if(func_83()){
func_82(1, 1);
}else{
func_82(0, 0);
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
if(!func_81()){
Global_20500.f_1=3;
}}

int func_81(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}


void func_82(bool bParam0, bool bParam1){
if(bParam0){
if(func_84(0)){
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


bool func_83(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}

int func_84(int iParam0){
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


bool func_85(){
return MISC::IS_BIT_SET(Global_1963795, 19);
}


float func_86(int iParam0){
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


void func_87(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}


void func_88(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}


bool func_89(){
return DLC::IS_DLC_PRESENT(-1762644250);
}


void func_90(bool bParam0){
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


void func_91(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(bParam2){
if(bParam3){
func_92(Global_23390.f_6454[iParam4], &iVar0, &iVar1, &iVar2);
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


void func_92(int iParam0, var uParam1, var uParam2, var uParam3){
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


void func_93(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(!func_76(&iVar0, 0, iParam1)){
return;
}
uParam0=uParam0;
if(iParam3 && !func_116(bParam4, bParam8)){
return;
}
if(func_100()){
return;
}
if(NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return;
}
if(iParam7==0){
if(func_96(PLAYER::PLAYER_ID(), 0)){
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
func_95(&(Global_23390.f_5168[iVar1 /*16*/]));
iVar2=iVar1 + 1;
while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23390.f_5393[iVar2 /*4*/]))==MISC::GET_HASH_KEY("PREV")){
func_95(&(Global_23390.f_5168[iVar2 /*16*/]));
iVar2++;
}
if(Global_23390.f_5450[iVar1]==-1){
func_94(&(Global_23390.f_5393[iVar1 /*4*/]));
}else{
iVar3=Global_23390.f_5450[iVar1];
if(iParam2 >=0){
iVar3=iParam2;
}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23390.f_5393[iVar1 /*4*/]));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
}
else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
if(MISC::IS_PC_VERSION()){
if(Global_23390.f_5465[iVar1] !=363 && MISC::IS_BIT_SET(Global_23390.f_5495, iVar1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23390.f_5465[iVar1]);
}
else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
}}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iVar1++;
}
if(MISC::GET_HASH_KEY(&(Global_4540958.f_16)) !=MISC::GET_HASH_KEY("")){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23390.f_5166);
func_95(&Global_4540958);
if(Global_4540958.f_20==-1){
func_94(&(Global_4540958.f_16));
}else{
iVar4=Global_23390.f_5450[iVar1];
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
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
if(Global_23390.f_5525){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
Global_23390.f_5167=1;
}
iVar1=0;
while (iVar1 < Global_23390.f_5166){
if(Global_23390.f_5450[iVar1] !=-1){
if(iParam2 > 0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23390.f_5393[iVar1 /*4*/]));
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
if(Global_4540958.f_20 !=-1){
if(iParam2 > 0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
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


void func_94(char[4] cParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(cParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_95(var uParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}


bool func_96(int iParam0, int iParam1){
bool bVar0;
if(!func_99(iParam0)){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_97(-1, 0)==8;
}else{
bVar0=Global_1853988[iParam0 /*867*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_97(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_98();
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

int func_98(){
return Global_1574918;
}

int func_99(var uParam0){
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

int func_100(){
struct<3> Var0;
if(Global_20500.f_1 > 3){
return 1;
}
if(func_101()){
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

int func_101(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0){
return 1;
}
return 0;
}


void func_102(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5){
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


void func_103(float fParam0){
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


void func_104(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}


float func_105(char* sParam0, int iParam1, int iParam2){
if(!MISC::IS_STRING_NULL(sParam0)){
if(MISC::GET_HASH_KEY(sParam0)==0){
return 0f;
}}else{
return 0f;
}
func_106();
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}


void func_106(){
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


void func_107(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7){
GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}


var func__108(int iParam0, bool bParam1){
char* sVar0[2];
var uVar1;
struct<13> Var2;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_7488[iParam0 /*16*/]))){
if(MISC::GET_HASH_KEY(&(Global_23390.f_7488[iParam0 /*16*/]))==joaat("crew_logo")){
Var2={
func_110(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var2, &uVar1)){
return func_109(&uVar1);
}}else{
return func_109(&(Global_23390.f_7488[iParam0 /*16*/]));
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


var func__109(var uParam0){
return uParam0;
}
struct<13> func_110(int iParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
return Var0;
}


char* func_111(int iParam0){
var uVar0;
struct<13> Var1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_6463[iParam0 /*16*/]))){
if(MISC::GET_HASH_KEY(&(Global_23390.f_6463[iParam0 /*16*/]))==joaat("crew_logo")){
Var1={
func_110(PLAYER::PLAYER_ID()) 
};
NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var1, &uVar0);
return func_109(&uVar0);
}else{
return func_109(&(Global_23390.f_6463[iParam0 /*16*/]));
}}
if(iParam0==52){
return "MPShopSale";
}
return "CommonMenu";
}


void func_112(bool bParam0, var uParam1, var uParam2, float fParam3){
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
if(func_113(*uParam1, *uParam2)){
*fParam3=1f;
*uParam1=round((fVar1 * fVar2));
*uParam2=round(fVar1);
return;
}
*fParam3=((fVar0 / fVar1) / fVar2);
*uParam1=round((fVar0 / *fParam3));
*uParam2=round((fVar1 / *fParam3));
}


bool func_113(int iParam0, int iParam1){
return (to_float(iParam0) / to_float(iParam1)) > 3.5f;
}

int func_114(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5){
char cVar0[64];
char cVar1[64];
int iVar2;
int iVar3;
float fVar4;
struct<3> Var5;
float fVar6;
StringCopy(&cVar0, func_111(iParam0), 64);
StringCopy(&cVar1, func_108(iParam0, bParam1), 64);
if(MISC::GET_HASH_KEY(&cVar1) !=0){
fVar4=1f;
func_112(bParam5, &iVar2, &iVar3, &fVar4);
Var5={
GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar1) 
};
fVar6=(func_115(iParam0) / fVar4);
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


float func_115(int iParam0){
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

int func_116(bool bParam0, bool bParam1){
if(Global_2672524.f_1685.f_701 !=0){
return 1;
}
if((((((((!CAM::IS_SCREEN_FADED_IN() || (func_118(8, -1) && func_117() !=65)) || (HUD::GET_PAUSE_MENU_STATE() !=0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_78950) || Global_23390.f_8891) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100885.f_1482){
return 0;
}
return 1;
}

int func_117(){
return Global_1574996;
}


var func__118(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}


void func_119(int iParam0){
if(iParam0==-1){
return;
}
Global_77479[iParam0]=0;
Global_77479.f_69[iParam0]=0;
}


void func_120(int iParam0, var uParam1, struct<3> Param2, float fParam3, int iParam4){
if(func_64(&(Global_77479.f_555[0 /*21*/]), iParam0)){
if(MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 10)){
func_122(iParam0);
func_121(uParam1, &(Global_113810.f_32752.f_69[Global_77479.f_555[0 /*21*/].f_14 /*78*/]));
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
func_542(iParam0, 1);
}}}


void func_121(var uParam0, var uParam1){
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


void func_122(int iParam0){
if(iParam0==-1){
return;
}
if(func_64(&(Global_77479.f_555[0 /*21*/]), iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77479.f_139[iParam0], 1, 1);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iParam0]));
Global_77479.f_139[iParam0]=0;
}
if(MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 13)){
func_542(iParam0, 0);
}}}

int func_123(int iParam0){
switch (iParam0){
case joaat("marshall"):
return 1;
break;
}
return 0;
}


void func_124(int iParam0, char* sParam1, int iParam2){
char* sVar0;
sVar0=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, 1);
if(Global_23390.f_5166 >=14){
StringCopy(&Global_4540958, sVar0, 64);
StringCopy(&(Global_4540958.f_16), sParam1, 16);
Global_4540958.f_20=iParam2;
return;
return;
}
MISC::CLEAR_BIT(&(Global_23390.f_5495), Global_23390.f_5166);
StringCopy(&(Global_23390.f_5168[Global_23390.f_5166 /*16*/]), sVar0, 64);
StringCopy(&(Global_23390.f_5393[Global_23390.f_5166 /*4*/]), sParam1, 16);
Global_23390.f_5450[Global_23390.f_5166]=iParam2;
Global_23390.f_5465[Global_23390.f_5166]=iParam0;
Global_23390.f_5480[Global_23390.f_5166]=32;
Global_23390.f_5166++;
}


void func_125(int iParam0){
int iVar0;
int iVar1;
Global_23390.f_5166=0;
Global_23390.f_5167=0;
iVar0=0;
while (iVar0 < 14){
StringCopy(&(Global_23390.f_5393[iVar0 /*4*/]), "", 16);
Global_23390.f_5450[iVar0]=-1;
Global_23390.f_5465[iVar0]=363;
Global_23390.f_5480[iVar0]=32;
iVar0++;
}
Global_23390.f_5495=0;
StringCopy(&(Global_4540958.f_16), "", 16);
Global_4540958.f_20=-1;
if(MISC::IS_PC_VERSION()){
if(!func_76(&iVar1, 0, iParam0)){
return;
}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_23390.f_6103[iVar1 /*10*/])){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}


void func_126(char* sParam0, int iParam1, int iParam2){
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

int func_127(){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(Global_4541034 > -1){
if(PAD::IS_CONTROL_JUST_RELEASED(2, 237)){
return 1;
}}}
return 0;
}

int func_128(int iParam0, int iParam1, bool bParam2){
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


void func_129(bool bParam0, bool bParam1, bool bParam2, bool bParam3){
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
func_131();
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
func_130(0);
}
return;
}
if(((Global_4541028 >=fVar0 && Global_4541028 <=fVar2) && Global_4541029 >=(fVar3 + fVar6)) && Global_4541029 < (fVar3 + 0.034722f)){
Global_4541034=-3;
if(bParam3){
func_130(0);
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
func_107(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_23389, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
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


void func_130(bool bParam0){
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
func_107(fVar0, fVar1, Global_23389, fVar2, 255, 255, 255, iVar3);
}elseif(Global_4541034==-3){
func_107(fVar0, (fVar1 + fVar2), Global_23389, fVar2, 255, 255, 255, iVar3);
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


void func_131(){
Global_4541030=Global_4541028;
Global_4541031=Global_4541029;
Global_4541028=PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
Global_4541029=PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
Global_4541032=(Global_4541028 - Global_4541030);
Global_4541033=(Global_4541029 - Global_4541031);
}


void func_132(bool bParam0, bool bParam1, int iParam2){
int iVar0;
int iVar1;
Global_23390.f_6182=bParam0;
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


void func_133(char* sParam0, bool bParam1){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
if(Global_23390.f_5663 >=256){
return;
}
if(Global_23390.f_6186 >=4){
return;
}
if(Global_23390.f_6187 !=1){
return;
}
if(Global_23390.f_6186 >=Global_23390.f_6184){
return;
}
StringCopy(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]), sParam0, 24);
Global_23390.f_5663++;
Global_23390.f_2387[Global_23390.f_6185 /*5*/][Global_23390.f_6186]=1;
Global_23390.f_6186++;
if(Global_23390.f_6186 >=Global_23390.f_6184){
fVar0=func_135();
if(Global_23390.f_5518[Global_23390.f_5662] && Global_23390.f_6186==Global_23390.f_6184){
func_114(26, 1, 0, &fVar1, &fVar2, 0);
fVar0=(fVar0 + (fVar1 * 2f));
}
if(fVar0 > Global_23390.f_5511[(Global_23390.f_5662 - 1)]){
Global_23390.f_5511[(Global_23390.f_5662 - 1)]=fVar0;
}}
if(bParam1){
if(Global_23390.f_6186 >=Global_23390.f_6184){
fVar3=func_134();
if(fVar3 > Global_23390.f_6188[Global_23390.f_5661]){
Global_23390.f_6188[Global_23390.f_5661]=fVar3;
}}}}


float func_134(){
int iVar0;
int iVar1;
float fVar2;
var uVar3;
float fVar4;
iVar0=0;
while (iVar0 < Global_23390.f_6186){
if(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar0]==4){
iVar1++;
}
iVar0++;
}
iVar0=0;
while (iVar0 < iVar1){
if(Global_23390.f_4824[((Global_23390.f_5667 - iVar1) + iVar0)] !=0){
if(func_114(Global_23390.f_4824[((Global_23390.f_5667 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0)){
if(fVar4 > fVar2){
fVar2=fVar4;
}}}
iVar0++;
}
if(fVar2 > HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0)){
return fVar2;
}
return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}


float func_135(){
float fVar0;
float fVar1;
var uVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
iVar7=0;
while (iVar7 < Global_23390.f_6186){
if(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==1){
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==8){
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==2){
iVar3++;
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==3){
iVar4++;
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==4){
iVar5++;
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==5){
iVar6++;
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==6){
iVar6++;
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==7){
iVar6++;
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==9){
iVar6++;
}
iVar7++;
}
func_91(0, 1, 0, 0, 0, iVar6 > 0, 0);
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) !=0){
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23390.f_79[Global_23390.f_6185 /*6*/]));
}
iVar7=0;
while (iVar7 < Global_23390.f_6186){
if(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==1){
iVar8++;
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(Global_23390.f_6185 + iVar8) /*6*/]));
}}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==8){
iVar8++;
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(Global_23390.f_6185 + iVar8) /*6*/]));
}}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==2){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_4309[((Global_23390.f_5665 - iVar3) + iVar9)]);
}
iVar9++;
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==3){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_4566[((Global_23390.f_5666 - iVar4) + iVar10)], Global_23390.f_4695[((Global_23390.f_5666 - iVar4) + iVar10)]);
}
iVar10++;
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==5){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[((Global_23390.f_5664 - iVar6) + iVar11) /*16*/]));
}
iVar11++;
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==6){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695123[((Global_23390.f_5664 - iVar6) + iVar11) /*16*/]));
}
iVar11++;
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==7){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[((Global_23390.f_5664 - iVar6) + iVar11) /*16*/]));
}
iVar11++;
}elseif(Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7]==9){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[((Global_23390.f_5664 - iVar6) + iVar11) /*16*/]));
}
iVar11++;
}
iVar7++;
}
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) !=0){
fVar0=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}
iVar7=0;
while (iVar7 < iVar5){
if(Global_23390.f_4824[((Global_23390.f_5667 - iVar5) + iVar7)] !=0){
func_114(Global_23390.f_4824[((Global_23390.f_5667 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
fVar0=(fVar0 + fVar1);
}
iVar7++;
}
return fVar0;
}


char* func_136(int iParam0){
int iVar0;
if(iParam0==-1){
return "";
}
if(iParam0==8){
return "";
}
iVar0=func_137(iParam0, -1);
if(iVar0==0){
return "";
}
switch (iParam0){
case 31:
return "SUBMERSIBLE";
case 68:
return "SANCHEZ";
case 105:
return "REBEL";
case 107:
return "SANCHEZ2";
case 117:
return "COQUETTE_TLESS";
case 118:
return "BANSHEE_TLESS";
case 119:
return "STINGER_TLESS";
case 120:
return "VOLTIC_HTOP";
case 154:
return "BLAZER3";
case 155:
return "REBEL2";
case 158:
return "BUFFALO2";
case 159:
return "TAILGATER";
case 166:
return "COQUETTE2_TLESS";
case 170:
return "KALAHARI_TLESS";
case 171:
return "BOXVILLE4";
case 173:
return "DINGHY3";
case 183:
return "MULE3";
case 191:
return "LANDSTALKER";
case 192:
return "MESA3";
case 194:
return "ORACLE1";
case 196:
return "SCHAFTER2";
case 207:
return "DOMINATOR2";
case 245:
return "BIG_YACHT";
case 254:
return "CARGOBOB2";
case 323:
return "BIG_TRUCK";
case 324:
return "BALLISTIC";
case 357:
return "BIG_PLANE";
case 402:
return "HACKER_TRUCK";
case 510:
return "LANDSTLKR2";
case 583:
return "BRICKADE2";
default:
}
return VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iVar0);
}

int func_137(int iParam0, int iParam1){
switch (iParam0){
case 0:
return joaat("ztype");
case 1:
return joaat("stinger");
case 2:
return joaat("jb700");
case 3:
return joaat("cheetah");
case 4:
return joaat("entityxf");
case 5:
return joaat("adder");
case 6:
return joaat("monroe");
case 7:
return joaat("cogcabrio");
case 10:
return joaat("shamal");
case 11:
return joaat("stunt");
case 12:
return joaat("cuban800");
case 13:
return joaat("duster");
case 14:
return joaat("luxor");
case 15:
return joaat("frogger");
case 16:
return joaat("maverick");
case 17:
return joaat("rhino");
case 18:
return joaat("titan");
case 19:
return joaat("cargobob");
case 20:
return joaat("buzzard");
case 21:
return joaat("crusader");
case 22:
return joaat("barracks");
case 24:
return joaat("marquis");
case 25:
return joaat("jetmax");
case 27:
return joaat("squalo");
case 29:
return joaat("tropic");
case 30:
return joaat("seashark");
case 31:
return joaat("submersible");
case 32:
return joaat("suntrap");
case 258:
return joaat("tug");
case 33:
return joaat("bmx");
case 34:
return joaat("scorcher");
case 35:
return joaat("tribike");
case 36:
return joaat("tribike2");
case 37:
return joaat("tribike3");
case 38:
return joaat("cruiser");
case 39:
return joaat("schwarzer");
case 40:
return joaat("zion");
case 41:
return joaat("gauntlet");
case 42:
return joaat("vigero");
case 43:
return joaat("issi2");
case 44:
return joaat("infernus");
case 45:
return joaat("surano");
case 46:
return joaat("vacca");
case 47:
return joaat("ninef");
case 48:
return joaat("comet2");
case 49:
return joaat("banshee");
case 50:
return joaat("feltzer2");
case 51:
return joaat("bfinjection");
case 52:
return joaat("sandking");
case 53:
return joaat("fugitive");
case 54:
return joaat("dilettante");
case 55:
return joaat("superd");
case 56:
return joaat("exemplar");
case 57:
return joaat("baller2");
case 58:
return joaat("cavalcade");
case 59:
return joaat("rocoto");
case 60:
return joaat("felon");
case 61:
return joaat("oracle2");
case 62:
return joaat("bati");
case 63:
return joaat("akuma");
case 64:
return joaat("ruffian");
case 65:
return joaat("vader");
case 66:
return joaat("blazer");
case 67:
return joaat("pcj");
case 68:
return joaat("sanchez");
case 69:
return joaat("faggio2");
case 70:
return joaat("bullet");
case 71:
return joaat("carbonizzare");
case 72:
return joaat("coquette");
case 73:
return joaat("ninef2");
case 74:
return joaat("rapidgt");
case 75:
return joaat("rapidgt2");
case 76:
return joaat("stingergt");
case 77:
return joaat("voltic");
case 78:
return joaat("annihilator");
case 79:
return joaat("mammatus");
case 80:
return joaat("velum");
case 81:
return joaat("dump");
case 82:
return joaat("airbus");
case 83:
return joaat("bus");
case 84:
return joaat("coach");
case 85:
return joaat("journey");
case 86:
return joaat("mule");
case 87:
return joaat("rentalbus");
case 88:
return joaat("stretch");
case 89:
return joaat("bison");
case 90:
return joaat("double");
case 91:
return joaat("felon2");
case 92:
return joaat("hexer");
case 93:
return joaat("zion2");
case 94:
return joaat("bati2");
case 95:
return joaat("elegy2");
case 96:
return joaat("khamelion");
case 97:
return joaat("hotknife");
case 98:
return joaat("carbonrs");
default:
}
switch (iParam0){
case 99:
return joaat("bifta");
case 100:
return joaat("kalahari");
case 101:
return joaat("paradise");
case 102:
return joaat("speeder");
case 103:
return joaat("bodhi2");
case 104:
return joaat("dune");
case 105:
return joaat("rebel");
case 106:
return joaat("sadler");
case 107:
return joaat("sanchez2");
case 108:
return joaat("sandking2");
case 109:
return joaat("btype");
case 111:
return joaat("jester");
case 114:
return joaat("massacro");
case 112:
return joaat("turismor");
case 115:
return joaat("zentorno");
case 116:
return joaat("huntley");
case 110:
return joaat("alpha");
case 113:
return joaat("vestra");
case 117:
return joaat("coquette");
case 118:
return joaat("banshee");
case 119:
return joaat("stinger");
case 120:
return joaat("voltic");
case 121:
return joaat("thrust");
case 128:
return joaat("asea");
case 129:
return joaat("asterope");
case 130:
return joaat("bobcatxl");
case 131:
return joaat("cavalcade2");
case 132:
return joaat("granger");
case 133:
return joaat("ingot");
case 134:
return joaat("intruder");
case 135:
return joaat("minivan");
case 136:
return joaat("premier");
case 137:
return joaat("radi");
case 138:
return joaat("rancherxl");
case 139:
return joaat("ratloader");
case 140:
return joaat("stanier");
case 141:
return joaat("stratum");
case 142:
return joaat("washington");
case 122:
return joaat("dominator");
case 123:
return joaat("f620");
case 124:
return joaat("fusilade");
case 125:
return joaat("penumbra");
case 126:
return joaat("sentinel");
case 127:
return joaat("sentinel2");
default:
}
switch (iParam0){
case 143:
return joaat("blade");
case 144:
return joaat("warrener");
case 145:
return joaat("glendale");
case 146:
return joaat("rhapsody");
case 147:
return joaat("panto");
case 148:
return joaat("dubsta3");
case 149:
return joaat("pigalle");
case 150:
return joaat("picador");
case 151:
return joaat("regina");
case 152:
return joaat("surfer");
case 153:
return joaat("youga");
case 154:
return joaat("blazer3");
case 155:
return joaat("rebel2");
case 156:
return joaat("primo");
case 157:
return joaat("buffalo");
case 158:
return joaat("buffalo2");
case 159:
return joaat("tailgater");
case 160:
return joaat("monster");
case 161:
return joaat("sovereign");
case 162:
return joaat("miljet");
case 163:
return joaat("besra");
case 164:
return joaat("swift");
case 165:
return joaat("coquette2");
case 166:
return joaat("coquette2");
case 167:
return joaat("innovation");
case 168:
return joaat("hakuchou");
case 169:
return joaat("furoregt");
case 170:
return joaat("kalahari");
case 187:
return joaat("valkyrie");
case 177:
return joaat("hydra");
case 185:
return joaat("savage");
case 174:
return joaat("enduro");
case 171:
return joaat("boxville4");
case 172:
return joaat("casco");
case 173:
return joaat("dinghy3");
case 175:
return joaat("gburrito2");
case 176:
return joaat("guardian");
case 178:
return joaat("insurgent");
case 179:
return joaat("insurgent2");
case 183:
return joaat("mule3");
case 180:
return joaat("kuruma");
case 181:
return joaat("kuruma2");
case 182:
return joaat("lectro");
case 184:
return joaat("pbus");
case 186:
return joaat("technical");
case 188:
return joaat("velum2");
case 189:
return joaat("gresley");
case 190:
return joaat("jackal");
case 191:
return joaat("landstalker");
case 192:
return joaat("mesa3");
case 193:
return joaat("nemesis");
case 194:
return joaat("oracle");
case 195:
return joaat("rumpo");
case 196:
return joaat("schafter2");
case 197:
return joaat("seminole");
case 198:
return joaat("surge");
case 199:
return joaat("dodo");
case 200:
return joaat("marshall");
case 201:
return joaat("submersible2");
case 202:
return joaat("blista2");
case 203:
return joaat("stalion");
case 204:
return joaat("dukes");
case 205:
return joaat("dukes2");
case 206:
return joaat("stalion2");
case 207:
return joaat("dominator2");
case 208:
return joaat("gauntlet2");
case 209:
return joaat("buffalo3");
case 210:
return joaat("slamvan");
case 211:
return joaat("ratloader2");
case 212:
return joaat("jester2");
case 213:
return joaat("massacro2");
case 214:
return joaat("feltzer3");
case 215:
return joaat("luxor2");
case 216:
return joaat("osiris");
case 217:
return joaat("swift2");
case 218:
return joaat("virgo");
case 219:
return joaat("windsor");
case 220:
return joaat("brawler");
case 221:
return joaat("chino");
case 222:
return joaat("coquette3");
case 223:
return joaat("t20");
case 224:
return joaat("toro");
case 225:
return joaat("vindicator");
case 229:
return joaat("primo");
case 228:
return joaat("moonbeam");
case 227:
return joaat("faction");
case 226:
return joaat("buccaneer");
case 230:
return joaat("voodoo2");
case 263:
if(iParam1==0){
return joaat("xls");
}elseif(iParam1==1){
return joaat("xls2");
}else{
return joaat("xls");
}
break;
case 264:
return joaat("seven70");
case 259:
return joaat("windsor2");
case 260:
return joaat("prototipo");
case 261:
return joaat("fmj");
case 262:
return joaat("bestiagts");
case 265:
return joaat("pfister811");
case 266:
return joaat("reaper");
case 231:
return joaat("btype2");
case 232:
return joaat("lurcher");
case 233:
if(iParam1==0){
return joaat("baller3");
}elseif(iParam1==1){
return joaat("baller5");
}else{
return joaat("baller3");
}
break;
case 234:
if(iParam1==0){
return joaat("baller4");
}elseif(iParam1==1){
return joaat("baller6");
}else{
return joaat("baller4");
}
break;
case 235:
if(iParam1==0){
return joaat("cog55");
}elseif(iParam1==1){
return joaat("cog552");
}else{
return joaat("cog55");
}
break;
case 236:
if(iParam1==0){
return joaat("cognoscenti");
}elseif(iParam1==1){
return joaat("cognoscenti2");
}else{
return joaat("cognoscenti");
}
break;
case 237:
return joaat("limo2");
case 238:
return joaat("mamba");
case 239:
return joaat("nightshade");
case 240:
if(iParam1==0){
return joaat("schafter3");
}elseif(iParam1==1){
return joaat("schafter5");
}else{
return joaat("schafter3");
}
break;
case 241:
if(iParam1==0){
return joaat("schafter4");
}elseif(iParam1==1){
return joaat("schafter6");
}else{
return joaat("schafter4");
}
break;
case 242:
return joaat("verlierer2");
case 243:
return joaat("supervolito");
case 244:
return joaat("supervolito2");
case 245:
return Global_75777;
case 251:
return joaat("virgo3");
case 250:
return joaat("tornado");
case 249:
return joaat("sabregt");
case 252:
return joaat("faction");
case 246:
return joaat("tampa");
case 247:
return joaat("sultan");
case 49:
return joaat("banshee");
case 248:
return joaat("btype3");
case 253:
return joaat("volatus");
case 254:
return joaat("cargobob2");
case 255:
return joaat("rumpo3");
case 256:
return joaat("brickade");
case 257:
return joaat("nimbus");
case 267:
return joaat("le7b");
case 268:
return joaat("omnis");
case 269:
return joaat("tropos");
case 270:
return joaat("brioso");
case 271:
return joaat("trophytruck");
case 272:
return joaat("trophytruck2");
case 273:
return joaat("contender");
case 274:
return joaat("cliffhanger");
case 275:
return joaat("bf400");
case 279:
return joaat("tyrus");
case 280:
return joaat("lynx");
case 281:
return joaat("sheava");
case 276:
return joaat("rallytruck");
case 277:
return joaat("tampa2");
case 278:
return joaat("gargoyle");
case 282:
return joaat("bagger");
case 283:
return joaat("esskey");
case 284:
return joaat("nightblade");
case 285:
return joaat("defiler");
case 286:
return joaat("avarus");
case 287:
return joaat("zombiea");
case 288:
return joaat("zombieb");
case 289:
return joaat("chimera");
case 290:
return joaat("daemon2");
case 291:
return joaat("ratbike");
case 292:
return joaat("shotaro");
case 293:
return joaat("raptor");
case 294:
return joaat("hakuchou2");
case 296:
return joaat("blazer4");
case 297:
return joaat("sanctus");
case 295:
return joaat("vortex");
case 298:
return joaat("manchez");
case 299:
return joaat("tornado6");
case 300:
return joaat("youga2");
case 301:
return joaat("wolfsbane");
case 302:
return joaat("faggio3");
case 303:
return joaat("faggio");
case 304:
return joaat("dune5");
case 305:
return joaat("phantom2");
case 306:
return joaat("technical2");
case 307:
return joaat("blazer5");
case 308:
return joaat("boxville5");
case 309:
return joaat("wastelander");
case 310:
return joaat("ruiner2");
case 311:
return joaat("voltic2");
case 312:
return joaat("penetrator");
case 313:
return joaat("tempesta");
case 314:
return joaat("italigtb");
case 315:
return joaat("nero");
case 316:
return joaat("diablous");
case 317:
return joaat("fcr");
case 318:
return joaat("specter");
case 319:
return joaat("gp1");
case 320:
return joaat("infernus2");
case 321:
return joaat("ruston");
case 322:
return joaat("turismo2");
}
switch (iParam0){
case 323:
return Global_75778;
case 324:
return Global_75779;
case 325:
return joaat("cheetah2");
case 326:
return joaat("torero");
case 327:
return joaat("vagner");
case 328:
return joaat("xa21");
case 329:
return joaat("apc");
case 330:
return joaat("dune3");
case 331:
return joaat("halftrack");
case 332:
return joaat("oppressor");
case 333:
return joaat("tampa3");
case 334:
return joaat("trailersmall2");
case 335:
return joaat("ardent");
case 336:
return joaat("nightshark");
case 337:
return joaat("lazer");
case 338:
return joaat("microlight");
case 339:
return joaat("mogul");
case 340:
return joaat("rogue");
case 341:
return joaat("starling");
case 342:
return joaat("seabreeze");
case 343:
return joaat("tula");
case 344:
return joaat("pyro");
case 345:
return joaat("molotok");
case 346:
return joaat("nokota");
case 347:
return joaat("bombushka");
case 348:
return joaat("hunter");
case 349:
return joaat("havok");
case 350:
return joaat("howard");
case 351:
return joaat("alphaz1");
case 352:
return joaat("cyclone");
case 353:
return joaat("visione");
case 354:
return joaat("retinue");
case 355:
return joaat("rapidgt3");
case 356:
return joaat("vigilante");
case 357:
return Global_75780;
case 358:
return joaat("deluxo");
case 359:
return joaat("stromberg");
case 360:
return joaat("riot2");
case 361:
return joaat("chernobog");
case 362:
return joaat("khanjali");
case 363:
return joaat("akula");
case 364:
return joaat("thruster");
case 365:
return joaat("barrage");
case 366:
return joaat("volatol");
case 367:
return joaat("comet4");
case 368:
return joaat("neon");
case 369:
return joaat("streiter");
case 370:
return joaat("sentinel3");
case 371:
return joaat("yosemite");
case 372:
return joaat("sc1");
case 373:
return joaat("autarch");
case 374:
return joaat("gt500");
case 375:
return joaat("hustler");
case 376:
return joaat("revolter");
case 377:
return joaat("pariah");
case 378:
return joaat("raiden");
case 379:
return joaat("savestra");
case 380:
return joaat("riata");
case 381:
return joaat("hermes");
case 382:
return joaat("comet5");
case 383:
return joaat("z190");
case 384:
return joaat("viseris");
case 385:
return joaat("kamacho");
case 386:
return joaat("gb200");
case 387:
return joaat("fagaloa");
case 388:
return joaat("ellie");
case 389:
return joaat("issi3");
case 390:
return joaat("michelli");
case 391:
return joaat("flashgt");
case 392:
return joaat("hotring");
case 393:
return joaat("tezeract");
case 394:
return joaat("tyrant");
case 395:
return joaat("dominator3");
case 396:
return joaat("taipan");
case 397:
return joaat("entity2");
case 398:
return joaat("jester3");
case 399:
return joaat("cheburek");
case 400:
return joaat("caracara");
case 401:
return joaat("seasparrow");
case 402:
return Global_75781;
case 403:
return joaat("mule4");
case 404:
return joaat("pounder2");
case 405:
return joaat("swinger");
case 406:
return joaat("menacer");
case 407:
return joaat("scramjet");
case 408:
return joaat("strikeforce");
case 409:
return joaat("oppressor2");
case 410:
return joaat("patriot2");
case 411:
return joaat("stafford");
case 412:
return joaat("freecrawler");
case 415:
return joaat("futo");
case 416:
return joaat("ruiner");
case 417:
return joaat("romero");
case 418:
return joaat("prairie");
case 419:
return joaat("baller");
case 420:
return joaat("serrano");
case 421:
return joaat("bjxl");
case 422:
return joaat("habanero");
case 423:
return joaat("fq2");
case 424:
return joaat("patriot");
case 413:
return joaat("blimp3");
case 414:
return joaat("pbus2");
case 425:
return joaat("cerberus");
case 426:
return joaat("cerberus2");
case 427:
return joaat("cerberus3");
case 428:
return joaat("brutus");
case 429:
return joaat("brutus2");
case 430:
return joaat("brutus3");
case 431:
return joaat("scarab");
case 432:
return joaat("scarab2");
case 433:
return joaat("scarab3");
case 434:
return joaat("imperator");
case 435:
return joaat("imperator2");
case 436:
return joaat("imperator3");
case 437:
return joaat("zr380");
case 438:
return joaat("zr3802");
case 439:
return joaat("zr3803");
case 440:
return joaat("impaler");
case 450:
return joaat("taxi");
case 451:
return joaat("bulldozer");
case 452:
return joaat("speedo2");
case 453:
return joaat("trash2");
case 454:
return joaat("barracks2");
case 455:
return joaat("mixer");
case 456:
return joaat("dune2");
case 457:
return joaat("tractor");
case 458:
return joaat("blista3");
case 441:
return joaat("vamos");
case 442:
return joaat("tulip");
case 443:
return joaat("deveste");
case 444:
return joaat("schlagen");
case 445:
return joaat("toros");
case 446:
return joaat("deviant");
case 447:
return joaat("clique");
case 448:
return joaat("italigto");
case 449:
return joaat("rcbandito");
case 459:
return joaat("thrax");
case 460:
return joaat("drafter");
case 461:
return joaat("locust");
case 462:
return joaat("novak");
case 463:
return joaat("zorrusso");
case 464:
return joaat("gauntlet3");
case 465:
return joaat("issi7");
case 466:
return joaat("zion3");
case 467:
return joaat("nebula");
case 468:
return joaat("hellion");
case 469:
return joaat("dynasty");
case 470:
return joaat("rrocket");
case 471:
return joaat("peyote2");
case 472:
return joaat("gauntlet4");
case 473:
return joaat("caracara2");
case 474:
return joaat("jugular");
case 475:
return joaat("s80");
case 476:
return joaat("krieger");
case 477:
return joaat("emerus");
case 478:
return joaat("neo");
case 479:
return joaat("paragon");
case 480:
return joaat("firetruk");
case 481:
return joaat("burrito2");
case 482:
return joaat("boxville");
case 483:
return joaat("stockade");
case 484:
return joaat("lguard");
case 485:
return joaat("blazer2");
case 486:
return joaat("zhaba");
case 487:
return joaat("minitank");
case 488:
return joaat("jb7002");
case 489:
return joaat("stryder");
case 490:
return joaat("vstr");
case 491:
return joaat("formula");
case 492:
return joaat("imorgon");
case 493:
return joaat("formula2");
case 494:
return joaat("furia");
case 495:
return joaat("rebla");
case 496:
return joaat("vagrant");
case 497:
return joaat("retinue2");
case 498:
return joaat("yosemite2");
case 499:
return joaat("komoda");
case 500:
return joaat("sultan2");
case 501:
return joaat("sugoi");
case 502:
return joaat("everon");
case 503:
return joaat("asbo");
case 504:
return joaat("kanjo");
case 505:
return joaat("outlaw");
default:
}
switch (iParam0){
case 506:
return joaat("club");
case 507:
return joaat("dukes3");
case 508:
return joaat("yosemite3");
case 509:
return joaat("penumbra2");
case 510:
return joaat("landstalker2");
case 511:
return joaat("seminole2");
case 512:
return joaat("tigon");
case 513:
return joaat("openwheel1");
case 514:
return joaat("openwheel2");
case 515:
return joaat("coquette4");
case 516:
return joaat("manana");
case 517:
return joaat("peyote");
case 518:
return func_138();
case 519:
return joaat("italirsx");
case 520:
return joaat("slamtruck");
case 521:
return joaat("brioso2");
case 522:
return joaat("weevil");
case 523:
return joaat("alkonost");
case 524:
return joaat("annihilator2");
case 525:
return joaat("dinghy5");
case 526:
return joaat("manchez2");
case 527:
return joaat("patrolboat");
case 528:
return joaat("squaddie");
case 529:
return joaat("toreador");
case 530:
return joaat("verus");
case 531:
return joaat("vetir");
case 532:
return joaat("winky");
case 533:
return joaat("longfin");
case 534:
return joaat("veto");
case 535:
return joaat("veto2");
case 543:
return joaat("zr350");
case 537:
return joaat("comet6");
case 540:
return joaat("jester4");
case 542:
return joaat("vectre");
case 538:
return joaat("cypher");
case 548:
return joaat("tailgater2");
case 550:
return joaat("euros");
case 551:
return joaat("growler");
case 536:
return joaat("calico");
case 541:
return joaat("remus");
case 539:
return joaat("dominator7");
case 546:
return joaat("futo2");
case 545:
return joaat("rt3000");
case 544:
return joaat("warrener2");
case 547:
return joaat("sultan3");
case 549:
return joaat("dominator8");
case 552:
return joaat("previon");
case 554:
return joaat("comet7");
case 555:
return joaat("shinobi");
case 556:
return joaat("reever");
case 557:
return joaat("baller7");
case 558:
return joaat("cinquemila");
case 559:
return joaat("jubilee");
case 560:
return joaat("astron");
case 561:
return joaat("deity");
case 562:
return joaat("zeno");
case 563:
return joaat("champion");
case 564:
return joaat("ignus");
case 565:
return joaat("buffalo4");
case 566:
return joaat("granger2");
case 567:
return joaat("iwagen");
case 568:
return joaat("patriot3");
case 553:
return joaat("supervolito2");
case 569:
return joaat("tenf");
case 570:
return joaat("sm722");
case 571:
return joaat("torero2");
case 572:
return joaat("corsita");
case 573:
return joaat("lm87");
case 574:
return joaat("omnisegt");
case 575:
return joaat("rhinehart");
case 576:
return joaat("postlude");
case 577:
return joaat("kanjosj");
case 578:
return joaat("vigero2");
case 579:
return joaat("ruiner4");
case 580:
return joaat("draugur");
case 581:
return joaat("greenwood");
case 582:
return joaat("conada");
case 583:
return joaat("brickade2");
case 584:
return joaat("manchez3");
case 585:
return joaat("panthere");
case 586:
return joaat("tahoma");
case 587:
return joaat("tulip2");
case 588:
return joaat("everon2");
case 589:
return joaat("journey2");
case 590:
return joaat("surfer3");
case 591:
return joaat("virtue");
case 592:
return joaat("r300");
case 593:
return joaat("issi8");
case 594:
return joaat("entity3");
case 595:
return joaat("powersurge");
case 596:
return joaat("boor");
case 597:
return joaat("broadway");
case 598:
return joaat("eudora");
case 599:
return joaat("mesa");
case 600:
return -1763675285;
case 603:
return -654498607;
case 604:
return -979292575;
case 601:
return -536105557;
case 602:
return 802856453;
case 605:
return -897824023;
case 606:
return -1983622024;
case 607:
return 191916658;
case 608:
return -1659004814;
case 609:
return 239897677;
case 610:
return 1336514315;
case 611:
return 1447690049;
case 612:
return 165968051;
case 613:
return 610429990;
default:
}
return 0;
}

int func_138(){
return joaat("kosatka");
}


void func_139(bool bParam0, int iParam1, bool bParam2){
int iVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
if(Global_23390.f_5661 > bParam0){
return;
}
if(Global_23390.f_5661 >=128){
return;
}
if(Global_23390.f_5667 >=256){
return;
}
if(Global_23390.f_6186 < Global_23390.f_6184){
return;
}
if(Global_23390.f_5661 !=bParam0){
Global_23390.f_5661=bParam0;
Global_23390.f_5662=0;
}
iVar0=Global_23390.f_5499[Global_23390.f_5662];
if(iVar0 !=4){
while (Global_23390.f_5662 < 4 && iVar0 !=4){
Global_23390.f_5662++;
iVar0=Global_23390.f_5499[Global_23390.f_5662];
}
if(iVar0 !=4){
return;
}}
Global_23390.f_4824[Global_23390.f_5667]=iParam1;
Global_23390.f_5667++;
if(iParam1 !=0){
func_114(iParam1, 1, 0, &fVar1, &fVar2, 0);
if(Global_23390.f_5518[Global_23390.f_5662]){
func_114(26, 1, 0, &fVar3, &fVar4, 0);
fVar1=(fVar1 + (fVar3 * 2f));
}
if(fVar1 > Global_23390.f_5511[Global_23390.f_5662]){
Global_23390.f_5511[Global_23390.f_5662]=fVar1;
}
if(bParam2){
if(fVar2 > Global_23390.f_6188[bParam0]){
Global_23390.f_6188[bParam0]=fVar2;
}}}
MISC::SET_BIT(&(Global_23390.f_5532[bParam0]), Global_23390.f_5662);
Global_23390.f_5662++;
Global_23390.f_6187=4;
}


void func_140(bool bParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6){
int iVar0;
float fVar1;
float fVar2;
var uVar3;
float fVar4;
if(Global_23390.f_5661 > bParam0){
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
if(Global_23390.f_5661 !=bParam0){
Global_23390.f_5661=bParam0;
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
func_143(Global_23390.f_5661, 1);
}else{
func_143(Global_23390.f_5661, 0);
}
if(iParam2==0){
fVar1=func_142(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]));
if(Global_23390.f_5518[Global_23390.f_5662]){
func_114(26, 1, 0, &fVar2, &uVar3, 0);
fVar1=(fVar1 + (fVar2 * 2f));
}
if(fVar1 > Global_23390.f_5511[Global_23390.f_5662]){
Global_23390.f_5511[Global_23390.f_5662]=fVar1;
}}
if(bParam5){
if(iParam2==0){
fVar4=func_141(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]));
if(fVar4 > Global_23390.f_6188[bParam0]){
Global_23390.f_6188[bParam0]=fVar4;
}}}
MISC::SET_BIT(&(Global_23390.f_5532[bParam0]), Global_23390.f_5662);
Global_23390.f_5662++;
Global_23390.f_6187=1;
Global_23390.f_6185=(Global_23390.f_5663 - 1);
Global_23390.f_6186=0;
Global_23390.f_6184=iParam2;
}


float func_141(char* sParam0){
if(!HUD::DOES_TEXT_LABEL_EXIST(sParam0)){}
return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}


float func_142(char* sParam0){
if(!MISC::IS_STRING_NULL(sParam0)){
if(MISC::GET_HASH_KEY(sParam0)==0){
return 0f;
}}else{
return 0f;
}
func_91(0, 1, 0, 0, 0, 0, 0);
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}


void func_143(int iParam0, bool bParam1){
int iVar0;
iVar0=floor((to_float(iParam0) / 32f));
if(bParam1){
MISC::SET_BIT(&(Global_23390.f_6458[iVar0]), (iParam0 - iVar0 * 32));
}else{
MISC::CLEAR_BIT(&(Global_23390.f_6458[iVar0]), (iParam0 - iVar0 * 32));
}}


void func_144(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5){
float fVar0;
int iVar1;
var uVar2;
var uVar3;
var uVar4;
var uVar5;
var uVar6;
var uVar7;
var uVar8;
var uVar9;
var uVar10;
var uVar11;
var uVar12;
var uVar13;
int iVar14;
char* sVar15;
int iVar16;
var uVar17;
var uVar18;
int iVar19;
char* sVar20;
int iVar21;
var uVar22;
var uVar23;
uParam1->f_66=func_137(iParam0, iParam4);
if(uParam1->f_66==0){
if(bParam2){
}
return;
}
if(iParam3==2 && uParam1->f_66==joaat("frogger")){
uParam1->f_66=joaat("frogger2");
uParam1->f_5=0;
uParam1->f_6=0;
uParam1->f_7=0;
uParam1->f_8=0;
uParam1->f_67=1;
return;
}
uParam1->f_77=0;
func_256(iParam0, &(uParam1->f_77));
uParam1->f_9[16]=0;
if((iParam0==181 || iParam0==178) || iParam0==179){
uParam1->f_9[16]=4;
}elseif(func_255(iParam0)){
if(Global_77390){
uParam1->f_9[16]=4;
}}
uParam1->f_9[23]=0;
if(iParam0==218){
uParam1->f_9[23]=7;
}
*uParam1=0;
if(iParam0==360){
*uParam1=4;
}
uParam1->f_9[48]=0;
if(iParam0==447){
if(iParam4==-1){
uParam1->f_9[48]=-1;
}elseif(iParam4==1){
uParam1->f_9[48]=11;
}}elseif(func_254(uParam1->f_66)){
uParam1->f_9[48]=1;
}
uParam1->f_99=0;
if(iParam0==251){
uParam1->f_99=4;
}
uParam1->f_9[42]=0;
switch (uParam1->f_66){
case joaat("brutus"):
case joaat("brutus2"):
case joaat("brutus3"):
uParam1->f_9[42]=4;
break;
case joaat("scarab"):
case joaat("scarab2"):
case joaat("scarab3"):
uParam1->f_9[42]=4;
break;
case joaat("imperator"):
case joaat("imperator2"):
case joaat("imperator3"):
uParam1->f_9[42]=1;
break;
case joaat("zr380"):
case joaat("zr3802"):
case joaat("zr3803"):
uParam1->f_9[42]=1;
break;
case joaat("cerberus"):
case joaat("cerberus2"):
case joaat("cerberus3"):
uParam1->f_9[42]=4;
break;
default:
if(func_253(uParam1->f_66)){
uParam1->f_97=3;
uParam1->f_99=111;
}
break;
}
uParam1->f_9[41]=0;
if(iParam0==449){
uParam1->f_9[41]=1;
}
uParam1->f_65=0;
if(iParam0==263){
if(Global_77390){
uParam1->f_65=1;
}}
uParam1->f_9[0]=0;
if(((((iParam0==320 || iParam0==321) || iParam0==322) || iParam0==327) || iParam0==382) || iParam0==391){
uParam1->f_9[0]=1;
}
if(((((iParam0==329 || iParam0==330) || iParam0==331) || iParam0==334) || iParam0==332) || iParam0==333){
uParam1->f_9[10]=0;
}
if(func_252(uParam1->f_66, &fVar0) && uParam1->f_80 !=fVar0){
uParam1->f_80=fVar0;
}
if(bParam2){
iVar1=Global_77389;
}elseif(iParam3==0){
iVar1=Global_113810.f_25185.f_313[iParam0];
}elseif(iParam3==1){
iVar1=Global_113810.f_25185.f_626[iParam0];
}elseif(iParam3==2){
iVar1=Global_113810.f_25185.f_939[iParam0];
}
uParam1->f_5=0;
uParam1->f_6=0;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_67=-1;
if(iParam0==200){
switch (iVar1){
case 1:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 2:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 3:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 4:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 5:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 6:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 7:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 8:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 9:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 10:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 11:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 12:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 13:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 14:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 15:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 16:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 17:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 18:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 19:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 20:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 21:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 22:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 23:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 24:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
case 25:
func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
break;
default:
break;
}}elseif(iParam0==219){
switch (iVar1){
case 1:
uParam1->f_5=98;
uParam1->f_6=98;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_67=1;
break;
case 2:
uParam1->f_5=111;
uParam1->f_6=111;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_67=2;
break;
case 3:
uParam1->f_5=135;
uParam1->f_6=135;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_67=3;
break;
case 4:
uParam1->f_5=59;
uParam1->f_6=59;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_67=8;
break;
case 5:
uParam1->f_5=98;
uParam1->f_6=98;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_67=4;
break;
case 6:
uParam1->f_5=98;
uParam1->f_6=98;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_67=5;
break;
case 7:
uParam1->f_5=42;
uParam1->f_6=42;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_67=7;
break;
case 8:
uParam1->f_5=111;
uParam1->f_6=111;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_67=6;
break;
default:
break;
}}else{
switch (iVar1){
case 1:
if(func_154(iParam0)){
if(iParam0 !=164){
if(func_153(iParam0, iVar1, &uVar2)){
uParam1->f_9[48]=uVar2;
}
elseif(func_152(iParam0, iVar1, &uVar3, &uVar4, &uVar2)){
uParam1->f_5=uVar3;
uParam1->f_6=uVar4;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_97=1;
if((iParam0==268 || iParam0==267) || iParam0==279){
uParam1->f_99=134;
}else{
uParam1->f_99=0;
}
uParam1->f_9[48]=uVar2;
}
else{
uParam1->f_67=0;
}}else{
uParam1->f_67=func_155(func_169(iParam0, iVar1));
}}elseif(func_255(iParam0)){
if(!Global_77390){
uParam1->f_5=143;
uParam1->f_6=34;
uParam1->f_7=31;
uParam1->f_97=99;
uParam1->f_67=-1;
}else{
uParam1->f_5=40;
uParam1->f_6=40;
uParam1->f_97=93;
uParam1->f_67=-1;
}}elseif(func_151(iParam0)){
uParam1->f_5=27;
uParam1->f_6=118;
uParam1->f_67=-1;
}elseif(iParam0==292){
uParam1->f_5=27;
uParam1->f_6=36;
uParam1->f_67=-1;
}elseif(iParam0==327){
uParam1->f_5=27;
uParam1->f_6=8;
uParam1->f_7=0;
uParam1->f_8=0;
uParam1->f_97=8;
uParam1->f_99=89;
uParam1->f_67=-1;
}elseif(iParam0==355){
uParam1->f_5=27;
uParam1->f_6=27;
uParam1->f_67=-1;
}elseif(func_150(iParam0)){
uParam1->f_5=27;
uParam1->f_6=27;
uParam1->f_67=-1;
}else{
uParam1->f_5=27;
uParam1->f_6=36;
uParam1->f_67=-1;
}
break;
case 2:
if(func_154(iParam0)){
if(iParam0 !=164){
if(func_153(iParam0, iVar1, &uVar5)){
uParam1->f_9[48]=uVar5;
}
elseif(func_152(iParam0, iVar1, &uVar6, &uVar7, &uVar5)){
uParam1->f_5=uVar6;
uParam1->f_6=uVar7;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_97=1;
if((iParam0==268 || iParam0==267) || iParam0==279){
uParam1->f_99=134;
}else{
uParam1->f_99=0;
}
uParam1->f_9[48]=uVar5;
}
else{
uParam1->f_67=1;
}}else{
uParam1->f_5=0;
uParam1->f_6=10;
uParam1->f_7=4;
uParam1->f_8=156;
uParam1->f_67=func_155(func_169(iParam0, iVar1));
}}elseif(func_255(iParam0)){
if(!Global_77390){
uParam1->f_5=8;
uParam1->f_6=8;
uParam1->f_7=5;
uParam1->f_97=106;
uParam1->f_67=-1;
}else{
uParam1->f_5=14;
uParam1->f_6=14;
uParam1->f_97=108;
uParam1->f_67=-1;
}}elseif(func_151(iParam0)){
uParam1->f_5=135;
uParam1->f_6=118;
uParam1->f_67=-1;
}elseif(iParam0==292){
uParam1->f_5=135;
uParam1->f_6=135;
uParam1->f_67=-1;
}elseif(iParam0==327){
uParam1->f_5=135;
uParam1->f_6=8;
uParam1->f_7=0;
uParam1->f_8=0;
uParam1->f_97=8;
uParam1->f_99=67;
uParam1->f_67=-1;
}elseif(func_150(iParam0)){
uParam1->f_5=135;
uParam1->f_6=135;
uParam1->f_67=-1;
}else{
uParam1->f_5=135;
uParam1->f_6=135;
uParam1->f_67=-1;
}
break;
case 3:
if(func_154(iParam0)){
if(func_153(iParam0, iVar1, &uVar8)){
uParam1->f_9[48]=uVar8;
}elseif(func_152(iParam0, iVar1, &uVar9, &uVar10, &uVar8)){
uParam1->f_5=uVar9;
uParam1->f_6=uVar10;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_97=1;
if((iParam0==268 || iParam0==267) || iParam0==279){
uParam1->f_99=134;
}
else{
uParam1->f_99=0;
}
uParam1->f_9[48]=uVar8;
}else{
uParam1->f_67=2;
}}elseif(func_255(iParam0)){
if(!Global_77390){
uParam1->f_5=100;
uParam1->f_6=100;
uParam1->f_7=100;
uParam1->f_97=22;
uParam1->f_67=-1;
}else{
uParam1->f_5=152;
uParam1->f_6=152;
uParam1->f_97=22;
uParam1->f_67=-1;
}}elseif(func_151(iParam0)){
uParam1->f_5=88;
uParam1->f_6=118;
uParam1->f_67=-1;
}elseif(iParam0==292){
uParam1->f_5=88;
uParam1->f_6=88;
uParam1->f_67=-1;
}elseif(iParam0==327){
uParam1->f_5=88;
uParam1->f_6=8;
uParam1->f_7=0;
uParam1->f_8=0;
uParam1->f_97=8;
uParam1->f_99=28;
uParam1->f_67=-1;
}elseif(func_150(iParam0)){
uParam1->f_5=88;
uParam1->f_6=88;
uParam1->f_67=-1;
}else{
uParam1->f_5=88;
uParam1->f_6=88;
uParam1->f_67=-1;
}
break;
case 4:
if(func_154(iParam0)){
if(func_153(iParam0, iVar1, &uVar11)){
uParam1->f_9[48]=uVar11;
}elseif(func_152(iParam0, iVar1, &uVar12, &uVar13, &uVar11)){
uParam1->f_5=uVar12;
uParam1->f_6=uVar13;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_97=1;
if((iParam0==268 || iParam0==267) || iParam0==279){
uParam1->f_99=134;
}
else{
uParam1->f_99=0;
}
uParam1->f_9[48]=uVar11;
}else{
uParam1->f_67=3;
}}elseif(func_255(iParam0)){
if(!Global_77390){
uParam1->f_5=99;
uParam1->f_6=99;
uParam1->f_7=106;
uParam1->f_97=101;
uParam1->f_67=-1;
}else{
uParam1->f_5=99;
uParam1->f_6=99;
uParam1->f_97=48;
uParam1->f_67=-1;
}}elseif(func_151(iParam0)){
uParam1->f_5=38;
uParam1->f_6=118;
uParam1->f_67=-1;
}elseif(iParam0==292){
uParam1->f_5=38;
uParam1->f_6=38;
uParam1->f_67=-1;
}elseif(iParam0==327){
uParam1->f_5=38;
uParam1->f_6=8;
uParam1->f_7=0;
uParam1->f_8=0;
uParam1->f_97=8;
uParam1->f_99=81;
uParam1->f_67=-1;
}elseif(iParam0==355){
uParam1->f_5=38;
uParam1->f_6=38;
uParam1->f_67=-1;
}elseif(func_150(iParam0)){
uParam1->f_5=38;
uParam1->f_6=38;
uParam1->f_67=-1;
}else{
uParam1->f_5=38;
uParam1->f_6=27;
while (func_149(iVar14, &sVar15, &iVar16, &uVar17, &uVar18)){
if(MISC::ARE_STRINGS_EQUAL(&sVar15, "ORANGE") && iVar16==1){
uParam1->f_5=uVar17;
uParam1->f_6=uVar18;
iVar14=-99;
}
iVar14++;
}
uParam1->f_67=-1;
}
break;
case 5:
if(func_255(iParam0)){
if(!Global_77390){
uParam1->f_5=49;
uParam1->f_6=49;
uParam1->f_7=52;
uParam1->f_97=98;
uParam1->f_67=-1;
}else{
uParam1->f_5=128;
uParam1->f_6=128;
uParam1->f_97=99;
uParam1->f_67=-1;
}}elseif((iParam0==178 || iParam0==179) || iParam0==192){
uParam1->f_5=152;
uParam1->f_6=152;
uParam1->f_7=18;
uParam1->f_8=152;
}elseif(func_151(iParam0)){
uParam1->f_5=128;
uParam1->f_6=118;
uParam1->f_67=-1;
}elseif(iParam0==292){
uParam1->f_5=128;
uParam1->f_6=55;
uParam1->f_67=-1;
}elseif(iParam0==327){
uParam1->f_5=92;
uParam1->f_6=8;
uParam1->f_7=0;
uParam1->f_8=0;
uParam1->f_97=8;
uParam1->f_99=41;
uParam1->f_67=-1;
}elseif(iParam0==355){
uParam1->f_5=55;
uParam1->f_6=55;
uParam1->f_67=-1;
}elseif(func_150(iParam0)){
uParam1->f_5=128;
uParam1->f_6=128;
uParam1->f_67=-1;
}else{
uParam1->f_5=128;
uParam1->f_6=0;
while (func_149(iVar19, &sVar20, &iVar21, &uVar22, &uVar23)){
if(MISC::ARE_STRINGS_EQUAL(&sVar20, "LIME_GREEN") && iVar21==1){
uParam1->f_5=uVar22;
uParam1->f_6=uVar23;
iVar19=-99;
}
iVar19++;
}
uParam1->f_67=-1;
}
break;
case 6:
if(func_255(iParam0)){
if(!Global_77390){
uParam1->f_5=141;
uParam1->f_6=141;
uParam1->f_7=73;
uParam1->f_97=5;
uParam1->f_67=-1;
}else{
uParam1->f_5=84;
uParam1->f_6=84;
uParam1->f_97=24;
uParam1->f_67=-1;
}}elseif(func_151(iParam0)){
uParam1->f_5=64;
uParam1->f_6=118;
uParam1->f_67=-1;
}elseif(iParam0==292){
uParam1->f_5=64;
uParam1->f_6=63;
uParam1->f_67=-1;
}elseif(iParam0==327){
uParam1->f_5=64;
uParam1->f_6=8;
uParam1->f_7=0;
uParam1->f_8=0;
uParam1->f_97=8;
uParam1->f_99=111;
uParam1->f_67=-1;
}elseif(iParam0==355){
uParam1->f_5=64;
uParam1->f_6=64;
uParam1->f_67=-1;
}elseif(func_150(iParam0)){
uParam1->f_5=64;
uParam1->f_6=64;
uParam1->f_67=-1;
}else{
uParam1->f_5=64;
uParam1->f_6=68;
uParam1->f_67=-1;
}
break;
case 7:
if(uParam1->f_66==joaat("kuruma2")){
uParam1->f_5=12;
uParam1->f_6=12;
uParam1->f_7=13;
uParam1->f_8=156;
uParam1->f_67=-1;
}elseif(func_255(iParam0)){
if(!Global_77390){
uParam1->f_5=0;
uParam1->f_6=0;
uParam1->f_7=10;
uParam1->f_97=1;
uParam1->f_67=-1;
}else{
uParam1->f_5=12;
uParam1->f_6=12;
uParam1->f_97=0;
uParam1->f_67=-1;
}}elseif(func_151(iParam0)){
uParam1->f_5=0;
uParam1->f_6=118;
uParam1->f_67=-1;
}elseif(iParam0==292){
uParam1->f_5=0;
uParam1->f_6=5;
uParam1->f_67=-1;
}elseif(iParam0==327){
uParam1->f_5=0;
uParam1->f_6=8;
uParam1->f_7=0;
uParam1->f_8=0;
uParam1->f_97=8;
uParam1->f_99=81;
uParam1->f_67=-1;
}elseif(iParam0==333){
uParam1->f_5=154;
uParam1->f_6=3;
uParam1->f_97=0;
uParam1->f_67=-1;
}elseif(func_150(iParam0)){
uParam1->f_5=0;
uParam1->f_6=0;
uParam1->f_67=-1;
}else{
uParam1->f_5=0;
uParam1->f_6=10;
uParam1->f_67=-1;
}
break;
case 8:
if(func_255(iParam0)){
if(!Global_77390){
uParam1->f_5=112;
uParam1->f_6=112;
uParam1->f_7=0;
uParam1->f_97=7;
uParam1->f_67=-1;
}else{
uParam1->f_5=131;
uParam1->f_6=131;
uParam1->f_97=78;
uParam1->f_67=-1;
}}elseif(func_151(iParam0)){
uParam1->f_5=111;
uParam1->f_6=118;
uParam1->f_67=-1;
}elseif(iParam0==292){
uParam1->f_5=111;
uParam1->f_6=111;
uParam1->f_67=-1;
}elseif(iParam0==327){
uParam1->f_5=111;
uParam1->f_6=8;
uParam1->f_7=0;
uParam1->f_8=0;
uParam1->f_97=8;
uParam1->f_99=27;
uParam1->f_67=-1;
}elseif(iParam0==355){
uParam1->f_5=111;
uParam1->f_6=111;
uParam1->f_67=-1;
}elseif(func_150(iParam0)){
uParam1->f_5=111;
uParam1->f_6=111;
uParam1->f_67=-1;
}else{
uParam1->f_5=111;
uParam1->f_6=0;
uParam1->f_67=-1;
}
break;
default:
break;
}}
if(iVar1==0){
switch (iParam0){
case 32:
uParam1->f_5=111;
uParam1->f_6=65;
uParam1->f_7=111;
uParam1->f_8=156;
uParam1->f_67=-1;
break;
case 13:
uParam1->f_5=46;
uParam1->f_6=24;
uParam1->f_7=46;
uParam1->f_8=24;
uParam1->f_67=-1;
break;
case 33:
uParam1->f_5=7;
uParam1->f_6=0;
uParam1->f_7=111;
uParam1->f_8=156;
uParam1->f_67=-1;
break;
case 34:
uParam1->f_5=7;
uParam1->f_6=0;
uParam1->f_7=111;
uParam1->f_8=156;
uParam1->f_67=-1;
break;
case 35:
uParam1->f_5=7;
uParam1->f_6=0;
uParam1->f_7=111;
uParam1->f_8=156;
uParam1->f_67=-1;
break;
case 36:
uParam1->f_5=7;
uParam1->f_6=0;
uParam1->f_7=111;
uParam1->f_8=156;
uParam1->f_67=-1;
break;
case 37:
uParam1->f_5=7;
uParam1->f_6=0;
uParam1->f_7=111;
uParam1->f_8=156;
uParam1->f_67=-1;
break;
case 38:
uParam1->f_5=7;
uParam1->f_6=0;
uParam1->f_7=111;
uParam1->f_8=156;
uParam1->f_67=-1;
break;
case 206:
uParam1->f_5=2;
uParam1->f_6=134;
uParam1->f_7=134;
uParam1->f_8=29;
uParam1->f_67=-1;
break;
case 207:
uParam1->f_5=134;
uParam1->f_6=134;
uParam1->f_7=134;
uParam1->f_8=126;
uParam1->f_67=-1;
break;
case 208:
uParam1->f_5=134;
uParam1->f_6=134;
uParam1->f_7=134;
uParam1->f_8=29;
uParam1->f_67=-1;
break;
case 209:
uParam1->f_5=134;
uParam1->f_6=134;
uParam1->f_7=134;
uParam1->f_8=139;
uParam1->f_67=-1;
break;
case 210:
if(iParam5 !=29){
uParam1->f_5=28;
uParam1->f_6=0;
uParam1->f_7=14;
uParam1->f_8=156;
uParam1->f_67=-1;
}else{
uParam1->f_5=88;
uParam1->f_6=66;
uParam1->f_7=63;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
}
break;
case 213:
uParam1->f_5=38;
uParam1->f_6=38;
uParam1->f_7=42;
uParam1->f_8=156;
uParam1->f_67=-1;
break;
case 212:
uParam1->f_5=134;
uParam1->f_6=134;
uParam1->f_7=134;
uParam1->f_8=27;
uParam1->f_67=-1;
break;
case 17:
uParam1->f_5=30;
uParam1->f_6=0;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_67=-1;
break;
case 215:
uParam1->f_5=159;
uParam1->f_6=0;
uParam1->f_7=160;
uParam1->f_8=156;
uParam1->f_67=-1;
break;
case 217:
uParam1->f_5=159;
uParam1->f_6=0;
uParam1->f_7=160;
uParam1->f_8=156;
uParam1->f_67=-1;
break;
case 205:
uParam1->f_5=12;
uParam1->f_6=12;
uParam1->f_7=0;
uParam1->f_8=12;
uParam1->f_67=-1;
break;
case 227:
uParam1->f_5=0;
uParam1->f_6=0;
uParam1->f_7=0;
uParam1->f_8=0;
uParam1->f_67=-1;
break;
case 226:
uParam1->f_5=36;
uParam1->f_6=36;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_67=-1;
break;
case 230:
uParam1->f_5=41;
uParam1->f_6=41;
uParam1->f_7=156;
uParam1->f_8=0;
uParam1->f_67=-1;
break;
case 338:
uParam1->f_5=64;
uParam1->f_6=5;
uParam1->f_7=111;
uParam1->f_8=5;
uParam1->f_97=0;
uParam1->f_99=0;
uParam1->f_67=-1;
break;
case 339:
uParam1->f_5=14;
uParam1->f_6=14;
uParam1->f_7=14;
uParam1->f_8=156;
uParam1->f_97=111;
uParam1->f_99=0;
uParam1->f_67=-1;
break;
case 340:
uParam1->f_5=24;
uParam1->f_6=29;
uParam1->f_7=65;
uParam1->f_8=156;
uParam1->f_97=111;
uParam1->f_99=0;
uParam1->f_67=-1;
break;
case 341:
uParam1->f_5=3;
uParam1->f_6=4;
uParam1->f_7=7;
uParam1->f_8=111;
uParam1->f_97=111;
uParam1->f_99=0;
uParam1->f_67=-1;
break;
case 342:
uParam1->f_5=111;
uParam1->f_6=89;
uParam1->f_7=111;
uParam1->f_8=111;
uParam1->f_97=111;
uParam1->f_99=0;
uParam1->f_67=-1;
break;
case 343:
uParam1->f_5=14;
uParam1->f_6=121;
uParam1->f_7=121;
uParam1->f_8=111;
uParam1->f_97=111;
uParam1->f_99=0;
uParam1->f_67=-1;
break;
case 344:
uParam1->f_5=50;
uParam1->f_6=91;
uParam1->f_7=0;
uParam1->f_8=111;
uParam1->f_97=111;
uParam1->f_99=0;
uParam1->f_67=-1;
break;
case 345:
uParam1->f_5=117;
uParam1->f_6=35;
uParam1->f_7=134;
uParam1->f_8=119;
uParam1->f_97=111;
uParam1->f_99=0;
uParam1->f_67=-1;
break;
case 346:
uParam1->f_5=117;
uParam1->f_6=35;
uParam1->f_7=134;
uParam1->f_8=119;
uParam1->f_97=111;
uParam1->f_99=0;
uParam1->f_67=-1;
break;
case 347:
uParam1->f_5=14;
uParam1->f_6=5;
uParam1->f_67=-1;
break;
case 348:
uParam1->f_5=14;
uParam1->f_6=14;
uParam1->f_7=14;
uParam1->f_8=156;
uParam1->f_97=111;
uParam1->f_99=0;
uParam1->f_67=-1;
break;
case 349:
uParam1->f_5=27;
uParam1->f_6=111;
uParam1->f_7=7;
uParam1->f_8=111;
uParam1->f_97=111;
uParam1->f_99=0;
uParam1->f_67=-1;
break;
case 350:
uParam1->f_5=119;
uParam1->f_6=73;
uParam1->f_7=65;
uParam1->f_8=156;
uParam1->f_97=111;
uParam1->f_99=0;
uParam1->f_67=-1;
break;
case 351:
uParam1->f_5=67;
uParam1->f_6=1;
uParam1->f_7=5;
uParam1->f_8=111;
uParam1->f_97=111;
uParam1->f_99=0;
uParam1->f_67=-1;
break;
case 356:
uParam1->f_5=12;
uParam1->f_6=12;
uParam1->f_7=0;
uParam1->f_8=0;
uParam1->f_67=-1;
break;
case 363:
uParam1->f_5=12;
uParam1->f_6=12;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_67=-1;
break;
case 361:
uParam1->f_5=154;
uParam1->f_6=13;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_67=-1;
break;
case 358:
uParam1->f_5=117;
uParam1->f_6=118;
uParam1->f_7=18;
uParam1->f_8=0;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_67=-1;
break;
case 362:
uParam1->f_5=13;
uParam1->f_6=8;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_67=-1;
break;
case 360:
uParam1->f_5=9;
uParam1->f_6=9;
uParam1->f_7=7;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_67=-1;
break;
case 359:
uParam1->f_5=111;
uParam1->f_6=111;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_67=-1;
break;
case 364:
uParam1->f_5=8;
uParam1->f_6=14;
uParam1->f_7=5;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_67=-1;
break;
case 425:
uParam1->f_5=153;
uParam1->f_6=159;
uParam1->f_8=160;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 428:
uParam1->f_5=12;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 431:
uParam1->f_5=153;
uParam1->f_6=154;
uParam1->f_8=160;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 434:
uParam1->f_5=12;
uParam1->f_6=12;
uParam1->f_8=160;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 437:
uParam1->f_5=13;
uParam1->f_6=131;
uParam1->f_8=160;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 426:
uParam1->f_5=107;
uParam1->f_6=159;
uParam1->f_7=107;
uParam1->f_8=160;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 429:
uParam1->f_5=107;
uParam1->f_6=159;
uParam1->f_7=107;
uParam1->f_8=160;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 432:
uParam1->f_5=107;
uParam1->f_6=159;
uParam1->f_7=107;
uParam1->f_8=160;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 435:
uParam1->f_5=107;
uParam1->f_6=159;
uParam1->f_7=107;
uParam1->f_8=160;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 438:
uParam1->f_5=107;
uParam1->f_6=159;
uParam1->f_7=107;
uParam1->f_8=160;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 427:
uParam1->f_5=131;
uParam1->f_6=135;
uParam1->f_8=160;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 430:
uParam1->f_5=131;
uParam1->f_6=39;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 433:
uParam1->f_5=87;
uParam1->f_6=138;
uParam1->f_7=7;
uParam1->f_8=135;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 436:
uParam1->f_5=12;
uParam1->f_6=55;
uParam1->f_8=160;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 439:
uParam1->f_5=131;
uParam1->f_6=55;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 211:
uParam1->f_5=30;
uParam1->f_6=30;
uParam1->f_7=30;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 145:
uParam1->f_5=68;
uParam1->f_6=2;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 122:
uParam1->f_5=111;
uParam1->f_6=64;
uParam1->f_7=111;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 440:
uParam1->f_5=6;
uParam1->f_6=120;
uParam1->f_7=7;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 389:
uParam1->f_5=29;
uParam1->f_6=111;
uParam1->f_7=7;
uParam1->f_8=5;
uParam1->f_97=1;
uParam1->f_99=132;
break;
default:
break;
}}
if(iParam0==161){
uParam1->f_5=111;
uParam1->f_6=111;
uParam1->f_7=111;
uParam1->f_8=156;
uParam1->f_67=-1;
}
if(iParam0==231){
uParam1->f_5=142;
uParam1->f_6=0;
uParam1->f_7=145;
uParam1->f_8=90;
}
if(iParam0==290){
uParam1->f_6=0;
}
if(iParam0==291){
uParam1->f_5=131;
uParam1->f_6=131;
uParam1->f_67=-1;
}
if(iParam0==304){
uParam1->f_5=22;
uParam1->f_6=12;
uParam1->f_7=134;
uParam1->f_8=156;
uParam1->f_97=0;
uParam1->f_99=0;
uParam1->f_67=-1;
}
if(iParam0==305){
uParam1->f_5=0;
uParam1->f_6=0;
uParam1->f_7=18;
uParam1->f_8=156;
uParam1->f_97=0;
uParam1->f_99=0;
uParam1->f_67=-1;
}
if(iParam0==306){
uParam1->f_5=0;
uParam1->f_6=0;
uParam1->f_7=18;
uParam1->f_8=156;
uParam1->f_97=0;
uParam1->f_99=0;
uParam1->f_67=-1;
}
if(iParam0==307){
uParam1->f_5=0;
uParam1->f_6=0;
uParam1->f_7=18;
uParam1->f_8=156;
uParam1->f_97=0;
uParam1->f_99=0;
uParam1->f_67=-1;
}
if(iParam0==308){
uParam1->f_5=12;
uParam1->f_6=0;
uParam1->f_7=18;
uParam1->f_8=156;
uParam1->f_97=0;
uParam1->f_99=0;
uParam1->f_67=-1;
}
if(iParam0==309){
uParam1->f_5=151;
uParam1->f_6=129;
uParam1->f_7=18;
uParam1->f_8=156;
uParam1->f_97=0;
uParam1->f_99=0;
uParam1->f_67=-1;
}
if(iParam0==310){
uParam1->f_5=0;
uParam1->f_6=0;
uParam1->f_7=18;
uParam1->f_8=0;
uParam1->f_97=0;
uParam1->f_99=0;
uParam1->f_67=-1;
}
if(iParam0==311){
uParam1->f_5=0;
uParam1->f_6=6;
uParam1->f_7=18;
uParam1->f_8=156;
uParam1->f_97=0;
uParam1->f_99=0;
uParam1->f_67=-1;
}
if(iParam0==329){
uParam1->f_5=154;
uParam1->f_6=154;
uParam1->f_7=154;
uParam1->f_8=0;
uParam1->f_97=0;
uParam1->f_99=0;
uParam1->f_67=-1;
}
if(iParam0==330){
uParam1->f_5=154;
uParam1->f_6=154;
uParam1->f_7=154;
uParam1->f_8=0;
uParam1->f_97=0;
uParam1->f_99=0;
uParam1->f_67=-1;
}
if(iParam0==331){
uParam1->f_5=154;
uParam1->f_6=154;
uParam1->f_7=0;
uParam1->f_8=154;
uParam1->f_97=0;
uParam1->f_99=0;
uParam1->f_67=-1;
}
if(iParam0==332){
uParam1->f_5=0;
uParam1->f_6=120;
uParam1->f_7=35;
uParam1->f_8=156;
uParam1->f_97=0;
uParam1->f_99=0;
uParam1->f_67=-1;
}
if(iParam0==334){
uParam1->f_5=154;
uParam1->f_6=154;
uParam1->f_7=154;
uParam1->f_8=0;
uParam1->f_97=0;
uParam1->f_99=0;
uParam1->f_67=-1;
}
if(iParam0==323){
if(iParam4==0){
uParam1->f_66=joaat("phantom3");
uParam1->f_5=0;
uParam1->f_6=0;
uParam1->f_7=0;
uParam1->f_8=0;
uParam1->f_97=0;
uParam1->f_99=0;
uParam1->f_67=-1;
}elseif(iParam4==1){
uParam1->f_66=joaat("hauler2");
uParam1->f_5=0;
uParam1->f_6=0;
uParam1->f_7=0;
uParam1->f_8=0;
uParam1->f_97=0;
uParam1->f_99=0;
uParam1->f_67=-1;
}}
if(func_148(uParam1->f_66)){
uParam1->f_62=1;
uParam1->f_63=1;
uParam1->f_64=1;
}
if(iParam0==357){
uParam1->f_66=func_43(0);
uParam1->f_5=14;
uParam1->f_6=131;
uParam1->f_8=111;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_67=-1;
}
if(iParam0==365){
uParam1->f_5=128;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
if(iParam0==364){
uParam1->f_5=32;
uParam1->f_6=112;
uParam1->f_7=25;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
if(iParam0==366){
uParam1->f_5=65;
uParam1->f_6=65;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_62=1;
uParam1->f_63=1;
uParam1->f_64=1;
}
if(iParam0==387){
uParam1->f_6=120;
}
if(iParam0==400){
uParam1->f_5=64;
uParam1->f_6=2;
uParam1->f_7=68;
uParam1->f_8=111;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
}
if(iParam0==401){
uParam1->f_5=5;
uParam1->f_6=106;
uParam1->f_7=5;
uParam1->f_8=111;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_62=1;
uParam1->f_63=1;
uParam1->f_64=1;
}
if(iParam0==402){
uParam1->f_66=func_147();
uParam1->f_5=9;
uParam1->f_7=7;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
if(iParam0==409){
uParam1->f_5=141;
uParam1->f_7=73;
uParam1->f_8=112;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_69=6;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
}
if(iParam0==408){
uParam1->f_5=119;
uParam1->f_6=119;
uParam1->f_7=1;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_62=1;
uParam1->f_63=1;
uParam1->f_64=1;
}
if(iParam0==407){
uParam1->f_5=111;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
if(iParam0==406){
uParam1->f_5=154;
uParam1->f_6=12;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
if(iParam0==404){
uParam1->f_5=112;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
if(iParam0==403){
uParam1->f_5=8;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
if(iParam0==487){
uParam1->f_5=102;
uParam1->f_6=144;
uParam1->f_7=105;
uParam1->f_8=144;
uParam1->f_97=1;
uParam1->f_99=132;
}
if(iParam0==485){
uParam1->f_5=111;
uParam1->f_6=0;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
}
if(iParam0==486){
uParam1->f_5=102;
uParam1->f_6=102;
uParam1->f_7=105;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
}
switch (iParam0){
case 518:
uParam1->f_66=func_138();
uParam1->f_5=0;
uParam1->f_6=15;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
break;
case 529:
uParam1->f_5=27;
uParam1->f_6=27;
uParam1->f_7=0;
uParam1->f_8=0;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 532:
uParam1->f_5=155;
uParam1->f_6=0;
uParam1->f_7=0;
uParam1->f_8=155;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 531:
uParam1->f_5=155;
uParam1->f_6=13;
uParam1->f_7=6;
uParam1->f_8=0;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 528:
uParam1->f_5=154;
uParam1->f_6=154;
uParam1->f_7=0;
uParam1->f_8=154;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 526:
uParam1->f_5=151;
uParam1->f_6=154;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 530:
uParam1->f_5=154;
uParam1->f_6=0;
uParam1->f_7=0;
uParam1->f_8=154;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 527:
uParam1->f_5=152;
uParam1->f_6=46;
uParam1->f_7=52;
uParam1->f_8=0;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 525:
uParam1->f_5=152;
uParam1->f_6=46;
uParam1->f_7=52;
uParam1->f_8=0;
uParam1->f_97=1;
uParam1->f_99=132;
MISC::SET_BIT(&(uParam1->f_77), 3);
break;
case 523:
uParam1->f_5=131;
uParam1->f_6=0;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_9[9]=4;
break;
case 524:
uParam1->f_5=12;
uParam1->f_6=0;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 520:
uParam1->f_9[24]=3;
break;
case 583:
func_146(uParam1);
break;
case 584:
func_145(uParam1);
break;
case 608:
uParam1->f_5=153;
uParam1->f_6=13;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 609:
uParam1->f_5=131;
uParam1->f_6=131;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
break;
case 607:
uParam1->f_5=131;
uParam1->f_6=0;
uParam1->f_7=0;
uParam1->f_8=0;
uParam1->f_97=1;
uParam1->f_99=132;
break;
}
if(uParam1->f_67 >=0){}elseif(iParam0==195){
uParam1->f_67=1;
}}


void func_145(var uParam0){
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


void func_146(var uParam0){
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

int func_147(){
return joaat("terbyte");
}

int func_148(int iParam0){
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
case -1659004814:
case joaat("avenger"):
case -426933872:
case 191916658:
case 239897677:
return 1;
default:
}
return 0;
}


bool func_149(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4){
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

int func_150(int iParam0){
if((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0==398 || iParam0==386) || iParam0==391) || iParam0==394) || iParam0==393) || iParam0==397) || iParam0==396) || iParam0==390) || iParam0==395) || iParam0==389) || iParam0==388) || iParam0==392) || iParam0==399) || iParam0==410) || iParam0==411) || iParam0==412) || iParam0==405) || iParam0==415) || iParam0==417) || iParam0==418) || iParam0==424) || iParam0==420) || iParam0==421) || iParam0==423) || iParam0==422) || iParam0==449) || iParam0==442) || iParam0==441) || iParam0==444) || iParam0==446) || iParam0==448) || iParam0==447) || iParam0==445) || iParam0==443) || iParam0==459) || iParam0==460) || iParam0==461) || iParam0==462) || iParam0==463) || iParam0==464) || iParam0==465) || iParam0==466) || iParam0==467) || iParam0==468) || iParam0==469) || iParam0==470) || iParam0==471) || iParam0==472) || iParam0==473) || iParam0==474) || iParam0==475) || iParam0==476) || iParam0==477) || iParam0==478) || iParam0==479) || iParam0==489) || iParam0==490) || iParam0==491) || iParam0==492) || iParam0==493) || iParam0==494) || iParam0==495) || iParam0==496) || iParam0==497) || iParam0==498) || iParam0==500) || iParam0==501) || iParam0==502) || iParam0==503) || iParam0==504) || iParam0==505) || iParam0==519) || iParam0==520) || iParam0==521) || iParam0==522) || iParam0==534) || iParam0==535){
return 1;
}
return 0;
}

int func_151(int iParam0){
if(((((iParam0==286 || iParam0==289) || iParam0==290) || iParam0==301) || iParam0==287) || iParam0==288){
return 1;
}
return 0;
}

int func_152(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4){
if(iParam0==275){
switch (iParam1){
case 1:
*uParam2=0;
*uParam3=10;
*uParam4=1;
return 1;
break;
case 2:
*uParam2=111;
*uParam3=0;
*uParam4=2;
return 1;
break;
}
return 0;
}elseif(iParam0==270){
switch (iParam1){
case 1:
*uParam2=111;
*uParam3=0;
*uParam4=1;
return 1;
break;
case 2:
*uParam2=111;
*uParam3=0;
*uParam4=2;
return 1;
break;
}
return 0;
}elseif(iParam0==274){
switch (iParam1){
case 1:
*uParam2=111;
*uParam3=0;
*uParam4=1;
return 1;
break;
case 2:
*uParam2=64;
*uParam3=68;
*uParam4=2;
return 1;
break;
}
return 0;
}elseif(iParam0==278){
switch (iParam1){
case 1:
*uParam2=0;
*uParam3=10;
*uParam4=1;
return 1;
break;
case 2:
*uParam2=0;
*uParam3=10;
*uParam4=2;
return 1;
break;
}
return 0;
}elseif(iParam0==267){
switch (iParam1){
case 1:
*uParam2=27;
*uParam3=36;
*uParam4=1;
return 1;
break;
case 2:
*uParam2=111;
*uParam3=0;
*uParam4=2;
return 1;
break;
}
return 0;
}elseif(iParam0==280){
switch (iParam1){
case 1:
*uParam2=111;
*uParam3=111;
*uParam4=1;
return 1;
break;
case 2:
*uParam2=111;
*uParam3=111;
*uParam4=2;
return 1;
break;
}
return 0;
}elseif(iParam0==268){
switch (iParam1){
case 1:
*uParam2=27;
*uParam3=36;
*uParam4=1;
return 1;
break;
case 2:
*uParam2=111;
*uParam3=0;
*uParam4=2;
return 1;
break;
}
return 0;
}elseif(iParam0==276){
switch (iParam1){
case 1:
func_168(func_169(iParam0, iParam1), uParam2, uParam3);
*uParam4=1;
return 1;
break;
case 2:
func_168(func_169(iParam0, iParam1), uParam2, uParam3);
*uParam4=2;
return 1;
break;
}
return 0;
}elseif(iParam0==281){
switch (iParam1){
case 1:
*uParam2=111;
*uParam3=111;
*uParam4=1;
return 1;
break;
case 2:
*uParam2=111;
*uParam3=111;
*uParam4=2;
return 1;
break;
}
return 0;
}elseif(iParam0==277){
switch (iParam1){
case 1:
*uParam2=0;
*uParam3=10;
*uParam4=1;
return 1;
break;
case 2:
*uParam2=111;
*uParam3=0;
*uParam4=2;
return 1;
break;
}
return 0;
}elseif(iParam0==271){
switch (iParam1){
case 1:
*uParam2=27;
*uParam3=36;
*uParam4=1;
return 1;
break;
case 2:
*uParam2=0;
*uParam3=10;
*uParam4=2;
return 1;
break;
}
return 0;
}elseif(iParam0==272){
switch (iParam1){
case 1:
*uParam2=38;
*uParam3=0;
*uParam4=1;
return 1;
break;
case 2:
*uParam2=88;
*uParam3=88;
*uParam4=2;
return 1;
break;
}
return 0;
}elseif(iParam0==269){
switch (iParam1){
case 1:
*uParam2=111;
*uParam3=111;
*uParam4=1;
return 1;
break;
case 2:
*uParam2=111;
*uParam3=111;
*uParam4=2;
return 1;
break;
}
return 0;
}elseif(iParam0==279){
switch (iParam1){
case 1:
*uParam2=0;
*uParam3=10;
*uParam4=1;
return 1;
break;
case 2:
*uParam2=64;
*uParam3=68;
*uParam4=2;
return 1;
break;
}
return 0;
}
return 0;
}

int func_153(int iParam0, int iParam1, var uParam2){
if(iParam0==231){
switch (iParam1){
case 1:
*uParam2=4;
return 1;
break;
case 2:
*uParam2=1;
return 1;
break;
case 3:
*uParam2=2;
return 1;
break;
case 4:
*uParam2=3;
return 1;
break;
}
*uParam2=-1;
return 0;
}elseif(iParam0==232){
switch (iParam1){
case 1:
*uParam2=2;
return 1;
break;
case 2:
*uParam2=1;
return 1;
break;
}
*uParam2=-1;
return 0;
}elseif(iParam0==276){
switch (iParam1){
case 1:
*uParam2=1;
return 1;
break;
case 2:
*uParam2=2;
return 1;
break;
}
*uParam2=-1;
return 0;
}
*uParam2=-1;
return 0;
}

int func_154(int iParam0){
if(((((((((((((((((((((((iParam0==94 || iParam0==68) || iParam0==101) || iParam0==164) || iParam0==200) || iParam0==219) || iParam0==231) || iParam0==232) || iParam0==275) || iParam0==270) || iParam0==274) || iParam0==278) || iParam0==267) || iParam0==280) || iParam0==268) || iParam0==276) || iParam0==281) || iParam0==277) || iParam0==271) || iParam0==272) || iParam0==269) || iParam0==279) || iParam0==413) || iParam0==414){
return 1;
}
return 0;
}

int func_155(int iParam0){
switch (iParam0){
case 39:
return 0;
case 40:
return 1;
case 43:
return 0;
case 44:
return 1;
case 45:
return 2;
case 46:
return 3;
case 47:
return 4;
case 48:
return 5;
case 49:
return 6;
case 50:
return 7;
case 51:
return 8;
case 52:
return 9;
case 53:
return 10;
case 54:
return 11;
case 55:
return 12;
case 56:
return 13;
case 57:
return 14;
case 58:
return 15;
case 59:
return 16;
case 60:
return 17;
case 61:
return 18;
case 62:
return 19;
case 63:
return 20;
case 64:
return 21;
case 65:
return 22;
case 66:
return 23;
case 67:
return 24;
case 82:
return 0;
case 83:
return 1;
case 90:
return 0;
case 91:
return 1;
case 97:
return 0;
case 98:
return 1;
case 99:
return 2;
case 100:
return 3;
case 101:
return 4;
case 102:
return 5;
case 103:
return 6;
case 104:
if(func_167(PLAYER::PLAYER_ID(), 0)){
return 14;
}elseif(func_167(PLAYER::PLAYER_ID(), 1)){
return 13;
}elseif(func_167(PLAYER::PLAYER_ID(), 2)){
return 8;
}elseif(func_167(PLAYER::PLAYER_ID(), 3)){
return 12;
}elseif(func_167(PLAYER::PLAYER_ID(), 4)){
return 11;
}elseif(func_167(PLAYER::PLAYER_ID(), 5)){
return 10;
}elseif(func_167(PLAYER::PLAYER_ID(), 6)){
return 9;
}elseif(func_167(PLAYER::PLAYER_ID(), 7)){
return 7;
}elseif(func_167(PLAYER::PLAYER_ID(), 8)){
return 15;
}
if(func_156(PLAYER::PLAYER_ID())){
}
return -1;
break;
case 105:
return 0;
case 106:
return 1;
case 107:
return 2;
case 108:
return 3;
case 109:
return 4;
case 110:
return 5;
case 111:
return 6;
case 112:
return 7;
case 113:
return 8;
case 114:
return 9;
}
return -1;
}

int func_156(int iParam0){
if((((((((func_166(iParam0) || func_165(iParam0)) || func_164(iParam0)) || func_163(iParam0)) || func_162(iParam0)) || func_161(iParam0)) || func_160(iParam0)) || func_159(iParam0)) || func_157(iParam0)){
return 1;
}
return 0;
}

int func_157(int iParam0){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return Global_4718592.f_164785.f_2==8;
}
if(iParam0==func_158()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_354.f_2, 0);
}

int func_158(){
return -1;
}

int func_159(int iParam0){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return Global_4718592.f_164785.f_2==7;
}
if(iParam0==func_158()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_354.f_1, 31);
}

int func_160(int iParam0){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return Global_4718592.f_164785.f_2==6;
}
if(iParam0==func_158()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_354.f_1, 30);
}

int func_161(int iParam0){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return Global_4718592.f_164785.f_2==5;
}
if(iParam0==func_158()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_354.f_1, 29);
}

int func_162(int iParam0){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return Global_4718592.f_164785.f_2==4;
}
if(iParam0==func_158()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_354.f_1, 28);
}

int func_163(int iParam0){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return Global_4718592.f_164785.f_2==3;
}
if(iParam0==func_158()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_354.f_1, 27);
}

int func_164(int iParam0){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return Global_4718592.f_164785.f_2==2;
}
if(iParam0==func_158()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_354.f_1, 26);
}

int func_165(int iParam0){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return Global_4718592.f_164785.f_2==1;
}
if(iParam0==func_158()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_354.f_1, 25);
}

int func_166(int iParam0){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return Global_4718592.f_164785.f_2==0;
}
if(iParam0==func_158()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_354.f_1, 24);
}

int func_167(int iParam0, int iParam1){
switch (iParam1){
case 4:
return func_166(iParam0);
case 3:
return func_165(iParam0);
case 6:
return func_164(iParam0);
case 1:
return func_163(iParam0);
case 0:
return func_162(iParam0);
case 7:
return func_161(iParam0);
case 2:
return func_160(iParam0);
case 5:
return func_159(iParam0);
case 8:
return func_157(iParam0);
default:
}
return 0;
}

int func_168(int iParam0, var uParam1, var uParam2){
*uParam1=-1;
*uParam2=-1;
switch (iParam0){
case 39:
*uParam1=0;
*uParam2=11;
return 1;
case 43:
*uParam1=28;
*uParam2=64;
return 1;
case 44:
*uParam1=64;
*uParam2=111;
return 1;
case 45:
*uParam1=53;
*uParam2=89;
return 1;
case 46:
*uParam1=28;
*uParam2=89;
return 1;
case 47:
*uParam1=28;
*uParam2=111;
return 1;
case 48:
*uParam1=64;
*uParam2=28;
return 1;
case 49:
*uParam1=1;
*uParam2=89;
return 1;
case 50:
*uParam1=111;
*uParam2=28;
return 1;
case 51:
*uParam1=70;
*uParam2=111;
return 1;
case 52:
*uParam1=64;
*uParam2=111;
return 1;
case 53:
*uParam1=53;
*uParam2=111;
return 1;
case 54:
*uParam1=28;
*uParam2=111;
return 1;
case 55:
*uParam1=1;
*uParam2=53;
return 1;
case 56:
*uParam1=88;
*uParam2=64;
return 1;
case 57:
*uParam1=28;
*uParam2=64;
return 1;
case 58:
*uParam1=70;
*uParam2=88;
return 1;
case 59:
*uParam1=1;
*uParam2=88;
return 1;
case 60:
*uParam1=53;
*uParam2=28;
return 1;
case 61:
*uParam1=28;
*uParam2=111;
return 1;
case 62:
*uParam1=64;
*uParam2=28;
return 1;
case 63:
*uParam1=70;
*uParam2=111;
return 1;
case 64:
*uParam1=28;
*uParam2=111;
return 1;
case 65:
*uParam1=53;
*uParam2=38;
return 1;
case 66:
*uParam1=53;
*uParam2=28;
return 1;
case 67:
*uParam1=111;
*uParam2=28;
return 1;
case 90:
*uParam1=27;
*uParam2=27;
return 1;
case 91:
*uParam1=111;
*uParam2=0;
return 1;
case 115:
*uParam1=40;
*uParam2=12;
return 1;
case 116:
*uParam1=58;
*uParam2=1;
return 1;
case 118:
*uParam1=111;
return 1;
case 119:
*uParam1=120;
return 1;
case 120:
*uParam1=1;
*uParam2=1;
return 1;
default:
}
return 0;
}

int func_169(int iParam0, int iParam1){
if(iParam0==-1){
return -1;
}
switch (iParam0){
case 17:
return 0;
case 9:
return 1;
case 10:
return 2;
case 11:
return 3;
case 12:
return 4;
case 13:
return 5;
case 14:
return 6;
case 15:
return 7;
case 16:
return 8;
case 19:
return 9;
case 22:
return 10;
case 23:
return 11;
case 24:
return 12;
case 25:
return 13;
case 27:
return 14;
case 28:
return 15;
case 29:
return 16;
case 30:
return 17;
case 31:
return 18;
case 20:
return 19;
case 32:
return 20;
case 21:
return 21;
case 78:
return 22;
case 79:
return 23;
case 80:
return 24;
case 18:
return 25;
case 81:
return 26;
case 82:
return 27;
case 83:
return 28;
case 84:
return 29;
case 85:
return 30;
case 86:
return 31;
case 87:
return 32;
case 88:
return 33;
case 102:
return 34;
case 113:
return 35;
case 160:
return 36;
case 163:
return 37;
case 162:
return 38;
case 164:
if(func_170(iParam0, 11, iParam1)){
return 40;
}
return 39;
case 199:
return 41;
case 201:
return 42;
case 200:
switch (iParam1){
case 1:
return 43;
case 2:
return 44;
case 3:
return 45;
case 4:
return 46;
case 5:
return 47;
case 6:
return 48;
case 7:
return 49;
case 8:
return 50;
case 9:
return 51;
case 10:
return 52;
case 11:
return 53;
case 12:
return 54;
case 13:
return 55;
case 14:
return 56;
case 15:
return 57;
case 16:
return 58;
case 17:
return 59;
case 18:
return 60;
case 19:
return 61;
case 20:
return 62;
case 21:
return 63;
case 22:
return 64;
case 23:
return 65;
case 24:
return 66;
case 25:
return 67;
default:
}
return 43;
case 171:
return 68;
case 187:
return 69;
case 177:
return 70;
case 183:
return 71;
case 185:
return 72;
case 184:
return 73;
case 188:
return 74;
case 173:
return 75;
case 178:
return 76;
case 186:
return 77;
case 215:
return 78;
case 217:
return 79;
case 224:
return 80;
case 237:
return 81;
case 243:
return 82;
case 244:
return 83;
case 245:
return 84;
case 253:
return 85;
case 254:
return 86;
case 256:
return 87;
case 257:
return 88;
case 258:
return 89;
case 276:
if(func_170(iParam0, 16, iParam1)){
return 91;
}
return 90;
case 323:
return 92;
case 324:
return 93;
case 337:
return 94;
case 357:
return 95;
case 402:
return 96;
case 413:
switch (iParam1){
case 1:
return 97;
case 2:
return 98;
case 3:
return 99;
case 4:
return 100;
case 5:
return 101;
case 6:
return 102;
case 7:
return 103;
case 8:
return 104;
default:
}
return 97;
case 414:
switch (iParam1){
case 1:
return 105;
case 2:
return 106;
case 3:
return 107;
case 4:
return 108;
case 5:
return 109;
case 6:
return 110;
case 7:
return 111;
case 8:
return 112;
case 9:
return 113;
case 10:
return 114;
default:
}
return 105;
case 450:
if(iParam1==2){
return 132;
}
return 115;
case 451:
return 116;
case 452:
return 117;
case 453:
return 118;
case 454:
return 119;
case 455:
return 120;
case 456:
return 121;
case 457:
return 122;
case 480:
return 123;
case 482:
return 124;
case 483:
return 125;
case 518:
return 126;
break;
case 531:
return 127;
break;
case 533:
return 128;
break;
case 527:
return 129;
break;
case 525:
return 130;
case 583:
return 131;
}
return -1;
}

int func_170(int iParam0, int iParam1, int iParam2){
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
iVar0=func_137(iParam0, -1);
if(iParam0==164){
if(iParam2==2){
return 1;
}
return 0;
}
if(iParam0==276){
if(iParam2==2){
return 1;
}
return 0;
}
if(iParam0==95){
if(NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()){
return 1;
}
return 0;
}elseif((iParam0==96 || iParam0==97) || iParam0==98){
if(func_46() && func_251()){
return 1;
}
return 0;
}
if((((iParam0==206 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0==207 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0==208 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0==209 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())){
if(func_46()){
return 1;
}
return 0;
}
if((((iParam0==170 || iParam0==120) || iParam0==119) || iParam0==117) || iParam0==166){
return 1;
}
if(iParam0==221 || iParam0==135){
if(iParam1==26){
return 1;
}
return 0;
}
if(func_255(iParam0)){
if(Global_77390){
return 1;
}
return 0;
}
iVar1=func_250(iVar0);
if(iVar1 !=-1){
if(func_248(func_249(iVar0))){
return 1;
}
return 0;
}
if(func_247(iParam0)){
if(func_46()){
if((iParam0==205 && Global_262145.f_20403) || (iParam0 !=205 && Global_262145.f_20402)){
return 1;
}
return 0;
}
return 0;
}
if(func_246(iParam0)){
if(func_237(iParam0)){
return 0;
}
return 1;
}
iVar2=func_236(iVar0);
if(iVar2 !=-1){
if(func_234(func_235(iVar0))){
return 1;
}
return 0;
}
iVar3=func_233(iVar0);
if(iVar3 > 0){
if(func_231(iVar0)){
return 1;
}
return 0;
}
iVar4=func_230(iVar0);
if(iVar4 !=-1){
if(func_228(iVar0)){
return 1;
}
return 0;
}
iVar5=func_227(iVar0);
if(iVar5 !=-1){
if(func_224(iVar0)){
return 1;
}
return 0;
}
iVar6=func_223(iVar0);
if(iVar6 !=-1){
if(func_219(iVar0)){
return 1;
}
return 0;
}
if((iVar0==joaat("firetruk") || iVar0==joaat("boxville")) || iVar0==joaat("stockade")){
if(func_218(iVar0)){
return 0;
}
return 1;
}
iVar7=func_217(iVar0);
if(iVar7 !=-1){
if(func_218(iVar0)){
return 1;
}
return 0;
}
iVar8=func_216(iVar0);
if(iVar8 !=-1){
if(func_206(iVar0)){
return 1;
}
return 0;
}
iVar9=func_205(iVar0);
if(iVar9 !=-1){
if(func_202(iVar0)){
return 1;
}
return 0;
}
iVar10=func_201(iVar0);
if(iVar10 !=-1){
if(func_193(iVar0)){
return 1;
}
return 0;
}
iVar11=func_192(iVar0);
if(iVar11 !=-1){
if(func_189(iVar0)){
return 1;
}
return 0;
}
iVar12=func_188(iVar0);
if(iVar12 !=-1 || iVar0==joaat("brickade2")){
if(func_180(iVar0)){
return 1;
}
return 0;
}
iVar13=func_179(iVar0);
if(iVar13 !=-1){
if(func_171(iVar0)){
return 1;
}
return 0;
}
return 0;
}

int func_171(int iParam0){
if(!Global_78689){
return 0;
}
switch (iParam0){
case 239897677:
return func_173(2, 1, 1);
case joaat("squaddie"):
return func_172(41656, -1);
case joaat("manchez2"):
return func_172(41671, -1);
default:
}
return 0;
}


var func__172(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_98();
}
return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_173(int iParam0, bool bParam1, bool bParam2){
if(bParam2){
return MISC::IS_BIT_SET(func_176(11948, -1), func_175(iParam0, bParam1));
}
return func_174(PLAYER::PLAYER_ID(), iParam0, bParam1);
}

int func_174(int iParam0, int iParam1, bool bParam2){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1982321[iParam0 /*71*/].f_60.f_1, func_175(iParam1, bParam2));
}
return 0;
}

int func_175(int iParam0, bool bParam1){
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
default:}}else{
switch (iParam0){
case 0:
return 6;
case 1:
return 7;
case 2:
return 8;
case 3:
return 9;
case 4:
return 10;
case 5:
return 11;
}
default:
}
return -1;
}

int func_176(int iParam0, int iParam1){
int iVar0;
var uVar1;
if(iParam0 !=14385){
iVar0=func_177(iParam0, iParam1);
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


var func__177(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_178(uParam1));
}

int func_178(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
if(iVar0==-1){
iVar1=func_98();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}

int func_179(int iParam0){
switch (iParam0){
case 239897677:
return 0;
case joaat("squaddie"):
return 1;
case joaat("manchez2"):
return 2;
default:
}
return -1;
}

int func_180(int iParam0){
if(!Global_78689){
return 0;
}
switch (iParam0){
case joaat("journey2"):
return func_185(0, 0);
case joaat("surfer3"):
return func_185(4, 0);
case joaat("virtue"):
return func_185(10, 0);
case joaat("hotring"):
return func_176(11843, -1) >=10;
case joaat("everon2"):
return func_176(11843, -1) >=20;
case joaat("taxi"):
return func_183(158, -1);
case joaat("brickade2"):
return func_181(0);
default:
}
return 0;
}

int func_181(bool bParam0){
if(bParam0){
return MISC::IS_BIT_SET(func_176(10870, -1), 0);
}
return func_182(PLAYER::PLAYER_ID());
}

int func_182(int iParam0){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1982321[iParam0 /*71*/].f_57.f_2, 0);
}
return 0;
}

int func_183(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=func_184(iParam0, iParam1);
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


var func__184(int iParam0, int iParam1){
return unk_0xD69CE161FE614531(10, uParam0, func_178(iParam1));
}

int func_185(int iParam0, bool bParam1){
if(bParam1){
return MISC::IS_BIT_SET(func_176(10871, -1), func_187(iParam0, 1));
}
return func_186(PLAYER::PLAYER_ID(), iParam0);
}

int func_186(int iParam0, int iParam1){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1982321[iParam0 /*71*/].f_57, func_187(iParam1, 1));
}
return 0;
}

int func_187(int iParam0, bool bParam1){
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

int func_188(int iParam0){
switch (iParam0){
case joaat("journey2"):
return 0;
case joaat("surfer3"):
return 1;
case joaat("virtue"):
return 2;
case joaat("hotring"):
return 3;
case joaat("everon2"):
return 4;
case joaat("taxi"):
return 5;
case joaat("brickade2"):
return 6;
default:
}
return -1;
}

int func_189(int iParam0){
if(!Global_78689){
return 0;
}
switch (iParam0){
case joaat("kanjosj"):
return func_172(34373, -1);
case joaat("postlude"):
return func_172(34374, -1);
case joaat("greenwood"):
return func_190(0);
case joaat("draugur"):
return (func_172(32366, -1) || func_173(0, 1, 1));
case joaat("conada"):
return func_190(5);
default:
}
return 0;
}


var func__190(int iParam0){
return MISC::IS_BIT_SET(func_176(10393, -1), func_191(iParam0, 1));
}

int func_191(int iParam0, bool bParam1){
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
default:}}else{
switch (iParam0){
case 0:
return 7;
case 1:
return 8;
case 2:
return 9;
case 3:
return 10;
case 4:
return 11;
case 5:
return 12;
}
default:
}
return -1;
}

int func_192(int iParam0){
switch (iParam0){
case joaat("kanjosj"):
return 0;
case joaat("postlude"):
return 1;
case joaat("greenwood"):
return 2;
case joaat("draugur"):
return 3;
case joaat("conada"):
return 4;
default:
}
return -1;
}

int func_193(int iParam0){
if(!Global_78689){
return 0;
}
switch (iParam0){
case joaat("buffalo4"):
return func_200();
case joaat("granger2"):
return func_198(1) >=5;
case joaat("deity"):
return func_198(1) >=10;
case joaat("patriot3"):
return func_198(1) >=15;
case joaat("jubilee"):
return func_198(1) >=20;
case joaat("champion"):
return (func_196(11, 1) || func_194(1));
case joaat("baller7"):
return func_194(1);
default:
}
return 0;
}

int func_194(bool bParam0){
if(bParam0){
return MISC::IS_BIT_SET(func_176(9905, -1), 2);
}
return func_195(PLAYER::PLAYER_ID());
}

int func_195(int iParam0){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1982321[iParam0 /*71*/].f_27, 2);
}
return 0;
}

int func_196(int iParam0, bool bParam1){
if(bParam1){
return MISC::IS_BIT_SET(func_176(9907, -1), iParam0);
}
return func_197(PLAYER::PLAYER_ID(), iParam0);
}

int func_197(int iParam0, var uParam1){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1982321[iParam0 /*71*/].f_27.f_3, uParam1);
}
return 0;
}

int func_198(bool bParam0){
if(bParam0){
return func_176(9910, -1);
}
return func_199(PLAYER::PLAYER_ID());
}

int func_199(int iParam0){
if(iParam0 !=-1){
return Global_1982321[iParam0 /*71*/].f_27.f_8;
}
return 0;
}


bool func_200(){
return func_176(9903, func_178(-1)) !=0;
}

int func_201(int iParam0){
switch (iParam0){
case joaat("baller7"):
return 0;
case joaat("buffalo4"):
return 1;
case joaat("champion"):
return 2;
case joaat("deity"):
return 3;
case joaat("granger2"):
return 4;
case joaat("jubilee"):
return 5;
case joaat("mule5"):
return 6;
case joaat("patriot3"):
return 7;
case joaat("youga4"):
return 8;
default:
}
return -1;
}

int func_202(int iParam0){
if(!Global_78689){
return 0;
}
switch (iParam0){
case joaat("euros"):
return func_204(PLAYER::PLAYER_ID());
case joaat("tailgater2"):
return func_203(PLAYER::PLAYER_ID());
case joaat("zr350"):
return func_172(31810, -1);
case joaat("comet6"):
return func_172(31811, -1);
case joaat("jester4"):
return func_172(31812, -1);
case joaat("vectre"):
return func_172(31813, -1);
case joaat("cypher"):
return func_172(31814, -1);
case joaat("growler"):
return func_172(31815, -1);
case joaat("calico"):
return func_172(31816, -1);
case joaat("remus"):
return func_172(31817, -1);
case joaat("dominator7"):
return func_172(31818, -1);
case joaat("futo2"):
return func_172(31819, -1);
case joaat("rt3000"):
return func_172(31820, -1);
case joaat("warrener2"):
return func_172(31821, -1);
case joaat("sultan3"):
return func_172(31822, -1);
case joaat("dominator8"):
return func_172(31823, -1);
case joaat("previon"):
return func_172(31824, -1);
case joaat("kanjosj"):
return func_172(34373, -1);
case joaat("postlude"):
return func_172(34374, -1);
default:
}
return 0;
}

int func_203(int iParam0){
if(iParam0==PLAYER::PLAYER_ID()){
return MISC::IS_BIT_SET(func_176(9618, -1), 0);
}
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1982321[iParam0 /*71*/].f_1, 0);
}
return 0;
}

int func_204(int iParam0){
if(iParam0 !=func_158()){
if(MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_486.f_2, 17)){
return 1;
}
if(iParam0==PLAYER::PLAYER_ID()){
return func_176(9631, -1) !=0;
}}
return 0;
}

int func_205(int iParam0){
switch (iParam0){
case joaat("zr350"):
return 0;
case joaat("comet6"):
return 1;
case joaat("jester4"):
return 2;
case joaat("vectre"):
return 3;
case joaat("cypher"):
return 4;
case joaat("tailgater2"):
return 5;
case joaat("euros"):
return 6;
case joaat("growler"):
return 7;
case joaat("calico"):
return 8;
case joaat("remus"):
return 9;
case joaat("dominator7"):
return 10;
case joaat("futo2"):
return 11;
case joaat("rt3000"):
return 12;
case joaat("warrener2"):
return 13;
case joaat("sultan3"):
return 14;
case joaat("dominator8"):
return 15;
case joaat("previon"):
return 16;
default:
}
return -1;
}

int func_206(int iParam0){
if(!Global_78689){
return 0;
}
switch (iParam0){
case joaat("winky"):
if(func_213(PLAYER::PLAYER_ID(), 0) || func_212(0)){
return 1;
}
break;
case joaat("brioso2"):
if(func_211(PLAYER::PLAYER_ID())){
return 1;
}
break;
case joaat("vetir"):
if(func_209(281, -1)){
return 1;
}
break;
case joaat("longfin"):
if(func_209(282, -1)){
return 1;
}
break;
case joaat("annihilator2"):
if(func_209(283, -1)){
return 1;
}
break;
case joaat("alkonost"):
if(func_209(284, -1)){
return 1;
}
break;
case joaat("patrolboat"):
if(func_209(285, -1)){
return 1;
}
break;
case joaat("weevil"):
if((func_207(0, 1) && func_207(1, 1)) && func_207(2, 1)){
return 1;
}
break;
case joaat("italirsx"):
if(func_207(3, 1)){
return 1;
}
break;
}
return 0;
}


bool func_207(int iParam0, bool bParam1){
if(bParam1){
return MISC::IS_BIT_SET(func_176(9586, -1), iParam0);
}
return func_208(PLAYER::PLAYER_ID(), iParam0);
}

int func_208(int iParam0, var uParam1){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1980400[iParam0 /*53*/].f_3, uParam1);
}
return 0;
}

int func_209(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=func_210(iParam0, iParam1);
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


var func__210(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(2, uParam0, func_178(uParam1));
}

int func_211(int iParam0){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1980400[iParam0 /*53*/].f_1, 1);
}
return 0;
}

int func_212(bool bParam0){
if(bParam0){
return MISC::IS_BIT_SET(func_176(9511, -1), 1);
}
return func_211(PLAYER::PLAYER_ID());
}

int func_213(int iParam0, int iParam1){
if(iParam0 !=-1){
return func_214(iParam0, func_215(iParam1));
}
return 0;
}

int func_214(int iParam0, var uParam1){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1980400[iParam0 /*53*/].f_2, uParam1);
}
return 0;
}

int func_215(int iParam0){
switch (iParam0){
case 0:
return 0;
case 7:
return 1;
case 1:
return 2;
case 5:
return 3;
case 2:
return 4;
case 3:
return 5;
case 4:
return 6;
case 6:
return 7;
case 8:
return 8;
case 9:
return 9;
case 10:
return 10;
case 11:
return 10;
case 12:
return 11;
case 13:
return 12;
case 14:
return 13;
case 15:
return 14;
case 16:
return 15;
default:
}
return -1;
}

int func_216(int iParam0){
switch (iParam0){
case joaat("vetir"):
return 0;
break;
case joaat("winky"):
return 1;
break;
case joaat("longfin"):
return 2;
break;
case joaat("annihilator2"):
return 3;
break;
case joaat("alkonost"):
return 4;
break;
case joaat("patrolboat"):
return 5;
break;
case joaat("brioso2"):
return 6;
break;
case joaat("weevil"):
return 7;
break;
case joaat("italirsx"):
return 8;
break;
}
return -1;
}

int func_217(int iParam0){
switch (iParam0){
case joaat("firetruk"):
return 0;
break;
case joaat("burrito2"):
return 1;
break;
case joaat("boxville"):
return 2;
break;
case joaat("stockade"):
return 3;
break;
case joaat("asbo"):
return 4;
break;
case joaat("kanjo"):
return 5;
break;
case joaat("everon"):
return 6;
break;
case joaat("retinue2"):
return 7;
break;
case joaat("yosemite2"):
return 8;
break;
case joaat("sugoi"):
return 9;
break;
case joaat("sultan2"):
return 10;
break;
case joaat("outlaw"):
return 11;
break;
case joaat("vagrant"):
return 12;
break;
case joaat("komoda"):
return 13;
break;
case joaat("stryder"):
return 14;
break;
case joaat("furia"):
return 15;
break;
case joaat("zhaba"):
return 16;
break;
case joaat("jugular"):
return 17;
break;
case joaat("sentinel3"):
return 18;
break;
case joaat("gauntlet3"):
return 19;
break;
case joaat("ellie"):
return 20;
break;
case joaat("defiler"):
return 21;
break;
case joaat("manchez"):
return 22;
break;
}
return -1;
}

int func_218(int iParam0){
int iVar0;
if(!Global_78689){
return 0;
}
iVar0=func_176(8837, -1);
switch (iParam0){
case joaat("firetruk"):
if(MISC::IS_BIT_SET(iVar0, 0) || Global_262145.f_28795){
return 1;
}else{
return 0;
}
break;
case joaat("burrito2"):
if(MISC::IS_BIT_SET(iVar0, 1) || Global_262145.f_28796){
return 1;
}else{
return 0;
}
break;
case joaat("boxville"):
if(MISC::IS_BIT_SET(iVar0, 2) || Global_262145.f_28797){
return 1;
}else{
return 0;
}
break;
case joaat("stockade"):
if(MISC::IS_BIT_SET(iVar0, 3) || Global_262145.f_28798){
return 1;
}else{
return 0;
}
break;
case joaat("asbo"):
if(MISC::IS_BIT_SET(iVar0, 4) || Global_262145.f_28799){
return 1;
}else{
return 0;
}
break;
case joaat("kanjo"):
if(MISC::IS_BIT_SET(iVar0, 5) || Global_262145.f_28800){
return 1;
}else{
return 0;
}
break;
case joaat("everon"):
if(MISC::IS_BIT_SET(iVar0, 6) || Global_262145.f_28801){
return 1;
}else{
return 0;
}
break;
case joaat("retinue2"):
if(MISC::IS_BIT_SET(iVar0, 7) || Global_262145.f_28802){
return 1;
}else{
return 0;
}
break;
case joaat("yosemite2"):
if(MISC::IS_BIT_SET(iVar0, 8) || Global_262145.f_28803){
return 1;
}else{
return 0;
}
break;
case joaat("sugoi"):
if(MISC::IS_BIT_SET(iVar0, 9) || Global_262145.f_28804){
return 1;
}else{
return 0;
}
break;
case joaat("sultan2"):
if(MISC::IS_BIT_SET(iVar0, 10) || Global_262145.f_28805){
return 1;
}else{
return 0;
}
break;
case joaat("outlaw"):
if(MISC::IS_BIT_SET(iVar0, 11) || Global_262145.f_28806){
return 1;
}else{
return 0;
}
break;
case joaat("vagrant"):
if(MISC::IS_BIT_SET(iVar0, 12) || Global_262145.f_28807){
return 1;
}else{
return 0;
}
break;
case joaat("komoda"):
if(MISC::IS_BIT_SET(iVar0, 13) || Global_262145.f_28808){
return 1;
}else{
return 0;
}
break;
case joaat("stryder"):
if(MISC::IS_BIT_SET(iVar0, 14) || Global_262145.f_28809){
return 1;
}else{
return 0;
}
break;
case joaat("furia"):
if(MISC::IS_BIT_SET(iVar0, 15) || Global_262145.f_28810){
return 1;
}else{
return 0;
}
break;
case joaat("zhaba"):
if(MISC::IS_BIT_SET(iVar0, 16) || Global_262145.f_28811){
return 1;
}else{
return 0;
}
break;
case joaat("jugular"):
if(MISC::IS_BIT_SET(iVar0, 17) || Global_262145.f_28812){
return 1;
}else{
return 0;
}
break;
case joaat("sentinel3"):
if(MISC::IS_BIT_SET(iVar0, 18) || Global_262145.f_28813){
return 1;
}else{
return 0;
}
break;
case joaat("gauntlet3"):
if(MISC::IS_BIT_SET(iVar0, 19) || Global_262145.f_28814){
return 1;
}else{
return 0;
}
break;
case joaat("ellie"):
if(MISC::IS_BIT_SET(iVar0, 20) || Global_262145.f_28815){
return 1;
}else{
return 0;
}
break;
case joaat("defiler"):
if(MISC::IS_BIT_SET(iVar0, 21) || Global_262145.f_28816){
return 1;
}else{
return 0;
}
break;
case joaat("manchez"):
if(MISC::IS_BIT_SET(iVar0, 22) || Global_262145.f_28817){
return 1;
}else{
return 0;
}
break;
}
return 0;
}

int func_219(int iParam0){
if(!Global_78689){
return 0;
}
if(iParam0==joaat("cognoscenti") || iParam0==joaat("cognoscenti2")){
return 0;
}
if(func_223(iParam0) !=-1){
if(func_220(func_222(iParam0))){
return 1;
}else{
return 0;
}}
return 0;
}


bool func_220(int iParam0){
return func_172(func_221(iParam0), -1);
}

int func_221(int iParam0){
switch (iParam0){
case 8:
return 24963;
break;
case 9:
return 24964;
break;
case 10:
return 24966;
break;
case 11:
return 24965;
break;
case 12:
return 24968;
break;
case 13:
return 25101;
break;
case 14:
return 24967;
break;
case 15:
return 25105;
break;
case 16:
return 25106;
break;
case 20:
return 25102;
break;
case 21:
return 25103;
break;
case 22:
return 25104;
break;
case 102:
return 24969;
break;
case 17:
return 25107;
break;
case 18:
return 25108;
break;
case 19:
return 25109;
break;
case 103:
return 24972;
break;
case 104:
return 24973;
break;
case 105:
return 24974;
break;
case 106:
return 24975;
break;
case 107:
return 24976;
break;
case 108:
return 24978;
break;
case 109:
return 24980;
break;
case 110:
return 24981;
break;
case 111:
return 24982;
break;
case 112:
return 24983;
break;
case 113:
return 24984;
break;
case 114:
return 24985;
break;
case 115:
return 24986;
break;
case 116:
return 24987;
break;
case 117:
return 24988;
break;
case 118:
return 24989;
break;
case 119:
return 24990;
break;
case 120:
return 24991;
break;
case 0:
return 24992;
break;
case 1:
return 24993;
break;
case 2:
return 24994;
break;
case 3:
return 24995;
break;
case 4:
return 24996;
break;
case 5:
return 24997;
break;
case 6:
return 24998;
break;
case 7:
return 24999;
break;
case 127:
return 25117;
break;
case 128:
return 25118;
break;
case 23:
return 25119;
break;
case 139:
return 25125;
break;
case 140:
return 25127;
break;
case 141:
return 25128;
break;
case 27:
return 25129;
break;
case 160:
return 25136;
break;
case 161:
return 25139;
break;
case 162:
return 25140;
break;
case 31:
return 25141;
break;
case 181:
return 25148;
break;
case 182:
return 25151;
break;
case 183:
return 25152;
break;
case 35:
return 25153;
break;
case 193:
return 25160;
break;
case 194:
return 25161;
break;
case 39:
return 25162;
break;
case 206:
return 25168;
break;
case 207:
return 25169;
break;
case 208:
return 25170;
break;
case 209:
return 25173;
break;
case 210:
return 25174;
break;
case 43:
return 25175;
break;
case 234:
return 25179;
break;
case 235:
return 25183;
break;
case 236:
return 25184;
break;
case 47:
return 25185;
break;
case 248:
return 25188;
break;
case 249:
return 25191;
break;
case 250:
return 25192;
break;
case 51:
return 25193;
break;
case 259:
return 25198;
break;
case 260:
return 25202;
break;
case 261:
return 25203;
break;
case 55:
return 25204;
break;
case 274:
return 25209;
break;
case 275:
return 25212;
break;
case 276:
return 25213;
break;
case 59:
return 25214;
break;
case 284:
return 25217;
break;
case 285:
return 25221;
break;
case 286:
return 25222;
break;
case 63:
return 25223;
break;
case 307:
return 25228;
break;
case 308:
return 24979;
break;
case 309:
return 25229;
break;
case 310:
return 25111;
break;
case 67:
return 25230;
break;
case 68:
return 25112;
break;
case 72:
return 25231;
break;
case 73:
return 25233;
break;
case 74:
return 25234;
break;
case 75:
return 25235;
break;
case 76:
return 25236;
break;
case 77:
return 25394;
break;
case 121:
return 25395;
break;
case 122:
return 25396;
break;
case 123:
return 25397;
break;
case 124:
return 25398;
break;
case 125:
return 25399;
break;
case 126:
return 25400;
break;
}
switch (iParam0){
case 78:
return 25244;
break;
case 79:
return 25245;
break;
case 80:
return 25246;
break;
case 81:
return 25247;
break;
case 82:
return 25248;
break;
case 83:
return 25249;
break;
case 84:
return 25250;
break;
case 85:
return 25000;
break;
case 86:
return 25251;
break;
case 87:
return 25252;
break;
case 88:
return 25253;
break;
case 89:
return 25254;
break;
case 90:
return 25255;
break;
case 91:
return 25256;
break;
case 92:
return 25257;
break;
case 93:
return 25258;
break;
case 94:
return 25259;
break;
case 95:
return 25260;
break;
case 96:
return 25261;
break;
case 97:
return 25262;
break;
case 98:
return 25263;
break;
case 99:
return 25264;
break;
case 100:
return 25225;
break;
case 101:
return 25178;
break;
case 311:
return 25265;
break;
case 312:
return 25266;
break;
case 313:
return 25267;
break;
case 314:
return 25268;
break;
case 315:
return 24977;
break;
case 316:
return 25269;
break;
case 317:
return 25270;
break;
case 318:
return 25271;
break;
case 319:
return 25272;
break;
case 320:
return 25273;
break;
case 321:
return 25274;
break;
case 322:
return 25275;
break;
case 323:
return 25276;
break;
case 324:
return 25277;
break;
case 325:
return 25278;
break;
case 326:
return 25279;
break;
case 327:
return 25280;
break;
case 328:
return 25281;
break;
case 329:
return 25282;
break;
case 330:
return 25283;
break;
case 331:
return 25284;
break;
case 332:
return 25285;
break;
case 333:
return 25286;
break;
case 334:
return 25287;
break;
case 335:
return 25288;
break;
case 336:
return 25289;
break;
case 337:
return 25290;
break;
case 338:
return 25291;
break;
case 339:
return 25292;
break;
case 340:
return 25293;
break;
case 341:
return 25294;
break;
case 342:
return 25295;
break;
case 343:
return 25296;
break;
case 344:
return 25297;
break;
case 345:
return 25298;
break;
case 346:
return 25299;
break;
case 347:
return 25300;
break;
case 348:
return 25301;
break;
case 349:
return 25302;
break;
case 350:
return 25303;
break;
case 351:
return 25304;
break;
case 352:
return 25305;
break;
case 353:
return 25306;
break;
case 354:
return 25307;
break;
case 355:
return 25308;
break;
case 356:
return 25309;
break;
case 357:
return 25310;
break;
case 358:
return 25311;
break;
case 359:
return 25312;
break;
case 360:
return 25313;
break;
case 361:
return 25314;
break;
case 362:
return 25315;
break;
case 363:
return 25316;
break;
case 364:
return 25317;
break;
case 365:
return 25318;
break;
case 366:
return 25319;
break;
case 367:
return 25320;
break;
case 368:
return 25321;
break;
case 369:
return 25322;
break;
case 370:
return 25323;
break;
case 371:
return 25324;
break;
case 372:
return 25325;
break;
case 373:
return 25326;
break;
case 374:
return 25327;
break;
case 375:
return 25328;
break;
case 376:
return 25329;
break;
case 377:
return 25330;
break;
case 378:
return 25331;
break;
case 379:
return 25332;
break;
case 380:
return 25333;
break;
case 381:
return 25334;
break;
case 382:
return 25335;
break;
case 383:
return 25336;
break;
case 384:
return 25337;
break;
case 385:
return 25338;
break;
case 386:
return 25339;
break;
case 387:
return 25340;
break;
case 388:
return 25341;
break;
case 389:
return 25342;
break;
case 390:
return 25343;
break;
case 391:
return 25344;
break;
case 392:
return 25345;
break;
case 393:
return 25346;
break;
case 394:
return 25347;
break;
case 395:
return 24970;
break;
case 396:
return 25348;
break;
case 397:
return 25349;
break;
case 398:
return 25350;
break;
case 399:
return 25351;
break;
case 400:
return 25352;
break;
case 401:
return 25353;
break;
case 402:
return 25354;
break;
case 403:
return 25355;
break;
case 404:
return 25356;
break;
case 405:
return 25357;
break;
case 406:
return 25358;
break;
case 407:
return 25359;
break;
case 408:
return 25360;
break;
case 409:
return 25361;
break;
case 410:
return 25362;
break;
case 411:
return 25363;
break;
case 412:
return 25364;
break;
case 413:
return 25365;
break;
case 414:
return 25366;
break;
case 415:
return 25367;
break;
case 416:
return 25368;
break;
case 417:
return 25369;
break;
case 418:
return 25370;
break;
case 419:
return 25371;
break;
case 420:
return 25373;
break;
case 421:
return 25374;
break;
case 422:
return 25375;
break;
case 423:
return 25377;
break;
case 424:
return 25378;
break;
case 425:
return 25379;
break;
case 426:
return 25382;
break;
case 427:
return 25383;
break;
case 428:
return 25386;
break;
case 429:
return 25390;
break;
case 430:
return 25391;
break;
case 431:
return 25392;
break;
case 432:
return 25393;
break;
}
switch (iParam0){
case 24:
return 24971;
break;
case 25:
return 25113;
break;
case 26:
return 25114;
break;
case 28:
return 25115;
break;
case 29:
return 25116;
break;
case 30:
return 25120;
break;
case 32:
return 25121;
break;
case 33:
return 25122;
break;
case 34:
return 25123;
break;
case 36:
return 25124;
break;
case 37:
return 25126;
break;
case 38:
return 25130;
break;
case 40:
return 25131;
break;
case 41:
return 25132;
break;
case 42:
return 25133;
break;
case 44:
return 25134;
break;
case 45:
return 25137;
break;
case 46:
return 25138;
break;
case 48:
return 25142;
break;
case 49:
return 25143;
break;
case 50:
return 25144;
break;
case 52:
return 25145;
break;
case 53:
return 25146;
break;
case 54:
return 25147;
break;
case 56:
return 25149;
break;
case 57:
return 25150;
break;
case 58:
return 25154;
break;
case 60:
return 25155;
break;
case 61:
return 25156;
break;
case 62:
return 25157;
break;
case 64:
return 25158;
break;
case 65:
return 25159;
break;
case 66:
return 25163;
break;
case 69:
return 25164;
break;
case 70:
return 25165;
break;
case 71:
return 25166;
break;
case 129:
return 25167;
break;
case 130:
return 25171;
break;
case 131:
return 25172;
break;
case 132:
return 25176;
break;
case 133:
return 25177;
break;
case 134:
return 25181;
break;
case 135:
return 25182;
break;
case 136:
return 25186;
break;
case 137:
return 25187;
break;
case 138:
return 25189;
break;
case 142:
return 25190;
break;
case 143:
return 25194;
break;
case 144:
return 25195;
break;
case 145:
return 25196;
break;
case 146:
return 25197;
break;
case 147:
return 25199;
break;
case 148:
return 25200;
break;
case 149:
return 25201;
break;
case 150:
return 25205;
break;
case 151:
return 25206;
break;
case 152:
return 25207;
break;
case 153:
return 25208;
break;
case 154:
return 25210;
break;
case 155:
return 25211;
break;
case 156:
return 25215;
break;
case 157:
return 25216;
break;
case 158:
return 25218;
break;
case 159:
return 25219;
break;
case 163:
return 25220;
break;
case 164:
return 25224;
break;
case 165:
return 25226;
break;
case 166:
return 25227;
break;
case 167:
return 25232;
break;
case 168:
return 25372;
break;
case 169:
return 25376;
break;
case 170:
return 25380;
break;
case 171:
return 25381;
break;
case 172:
return 25384;
break;
case 173:
return 25385;
break;
case 174:
return 25387;
break;
case 175:
return 25388;
break;
case 176:
return 25389;
break;
case 177:
return 25407;
break;
case 178:
return 25408;
break;
case 179:
return 25409;
break;
case 180:
return 25410;
break;
case 184:
return 25411;
break;
case 185:
return 25412;
break;
case 186:
return 25413;
break;
case 187:
return 25414;
break;
case 188:
return 25415;
break;
case 189:
return 25416;
break;
case 190:
return 25417;
break;
case 191:
return 25418;
break;
case 192:
return 25419;
break;
case 195:
return 25420;
break;
case 196:
return 25421;
break;
case 197:
return 25422;
break;
case 198:
return 25423;
break;
case 199:
return 25424;
break;
case 200:
return 25425;
break;
case 201:
return 25426;
break;
case 202:
return 25427;
break;
case 203:
return 25428;
break;
case 204:
return 25429;
break;
case 205:
return 25430;
break;
case 211:
return 25431;
break;
case 212:
return 25432;
break;
case 213:
return 25433;
break;
case 214:
return 25434;
break;
case 215:
return 25435;
break;
case 216:
return 25436;
break;
case 217:
return 25437;
break;
case 218:
return 25438;
break;
case 219:
return 25439;
break;
case 220:
return 25440;
break;
case 221:
return 25441;
break;
case 222:
return 25442;
break;
case 223:
return 25443;
break;
case 224:
return 25444;
break;
case 225:
return 25445;
break;
case 226:
return 25446;
break;
case 227:
return 25447;
break;
case 228:
return 25448;
break;
case 229:
return 25449;
break;
case 230:
return 25450;
break;
case 231:
return 25451;
break;
case 232:
return 25452;
break;
case 233:
return 25453;
break;
case 237:
return 25454;
break;
case 238:
return 25455;
break;
case 239:
return 25456;
break;
case 240:
return 25457;
break;
case 241:
return 25458;
break;
case 242:
return 25459;
break;
case 243:
return 25460;
break;
case 244:
return 25461;
break;
case 245:
return 25462;
break;
case 246:
return 25463;
break;
case 247:
return 25464;
break;
case 251:
return 25465;
break;
case 252:
return 25466;
break;
case 253:
return 25467;
break;
case 254:
return 25468;
break;
case 255:
return 25469;
break;
case 256:
return 25470;
break;
case 257:
return 25471;
break;
case 258:
return 25472;
break;
case 262:
return 25473;
break;
case 263:
return 25474;
break;
case 264:
return 25475;
break;
case 265:
return 25476;
break;
case 266:
return 25477;
break;
case 267:
return 25478;
break;
case 268:
return 25479;
break;
case 269:
return 25480;
break;
case 270:
return 25481;
break;
case 271:
return 25482;
break;
case 272:
return 25483;
break;
case 273:
return 25484;
break;
case 277:
return 25485;
break;
case 278:
return 25486;
break;
case 279:
return 25487;
break;
case 280:
return 25488;
break;
case 281:
return 25489;
break;
case 282:
return 25490;
break;
case 283:
return 25491;
break;
case 287:
return 25492;
break;
case 288:
return 25493;
break;
case 289:
return 25494;
break;
case 290:
return 25495;
break;
case 291:
return 25496;
break;
case 292:
return 25497;
break;
case 293:
return 25498;
break;
case 294:
return 25499;
break;
case 295:
return 25500;
break;
case 296:
return 25501;
break;
case 297:
return 25502;
break;
case 298:
return 25503;
break;
case 299:
return 25504;
break;
case 300:
return 25505;
break;
case 301:
return 25506;
break;
case 302:
return 25507;
break;
case 303:
return 25508;
break;
case 304:
return 25509;
break;
case 305:
return 25510;
break;
case 306:
return 25511;
break;
}
return 0;
}

int func_222(int iParam0){
switch (iParam0){
case joaat("cerberus"):
return 8;
break;
case joaat("cerberus2"):
return 9;
break;
case joaat("cerberus3"):
return 10;
break;
case joaat("brutus"):
return 11;
break;
case joaat("brutus2"):
return 12;
break;
case joaat("brutus3"):
return 13;
break;
case joaat("zr380"):
return 14;
break;
case joaat("zr3802"):
return 15;
break;
case joaat("zr3803"):
return 16;
break;
case joaat("scarab"):
return 20;
break;
case joaat("scarab2"):
return 21;
break;
case joaat("scarab3"):
return 22;
break;
case joaat("imperator"):
return 17;
break;
case joaat("imperator2"):
return 18;
break;
case joaat("imperator3"):
return 19;
break;
case joaat("impaler"):
return 102;
break;
case joaat("ratloader2"):
return 103;
break;
case joaat("glendale"):
return 104;
break;
case joaat("slamvan"):
return 105;
break;
case joaat("dominator"):
return 106;
break;
case joaat("issi3"):
return 107;
break;
case joaat("gargoyle"):
return 108;
break;
}
return -1;
}

int func_223(int iParam0){
switch (iParam0){
case joaat("cerberus"):
return 0;
case joaat("cerberus2"):
return 1;
case joaat("cerberus3"):
return 2;
case joaat("brutus"):
return 3;
case joaat("brutus2"):
return 4;
case joaat("brutus3"):
return 5;
case joaat("scarab"):
return 6;
case joaat("scarab2"):
return 7;
case joaat("scarab3"):
return 8;
case joaat("imperator"):
return 9;
case joaat("imperator2"):
return 10;
case joaat("imperator3"):
return 11;
case joaat("zr380"):
return 12;
case joaat("zr3802"):
return 13;
case joaat("zr3803"):
return 14;
case joaat("ratloader2"):
return 15;
case joaat("glendale"):
return 16;
case joaat("slamvan"):
return 17;
case joaat("dominator"):
return 18;
case joaat("impaler"):
return 19;
case joaat("issi3"):
return 20;
case joaat("gargoyle"):
return 21;
default:
}
return -1;
}

int func_224(int iParam0){
switch (iParam0){
case joaat("mule4"):
if(func_176(7233, -1) >=func_226(iParam0) || Global_262145.f_24865){
return 1;
}else{
return 0;
}
break;
case joaat("pounder2"):
if(func_176(7233, -1) >=func_226(iParam0) || Global_262145.f_24866){
return 1;
}else{
return 0;
}
break;
case joaat("oppressor2"):
if(func_225(22050, -1) >=func_226(iParam0) || Global_262145.f_24867){
return 1;
}else{
return 0;
}
break;
case joaat("pbus2"):
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_311.f_7, 1) || Global_262145.f_24869){
return 1;
}else{
return 0;
}
break;
case joaat("patriot2"):
if(func_176(7231, -1) >=func_226(iParam0) || Global_262145.f_24870){
return 1;
}else{
return 0;
}
break;
case joaat("blimp3"):
if(func_176(7231, -1) >=func_226(iParam0) || Global_262145.f_24871){
return 1;
}else{
return 0;
}
break;
}
return 0;
}

int func_225(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_98();
}
return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

int func_226(int iParam0){
switch (iParam0){
case joaat("mule4"):
return Global_262145.f_24872;
break;
case joaat("pounder2"):
return Global_262145.f_24873;
break;
case joaat("oppressor2"):
return Global_262145.f_24874;
break;
case joaat("patriot2"):
return Global_262145.f_24875;
break;
case joaat("blimp3"):
return Global_262145.f_24876;
break;
}
return 0;
}

int func_227(int iParam0){
switch (iParam0){
case joaat("mule4"):
return 0;
break;
case joaat("pounder2"):
return 1;
break;
case joaat("oppressor2"):
return 2;
break;
case joaat("pbus2"):
return 3;
break;
case joaat("patriot2"):
return 4;
break;
case joaat("blimp3"):
return 5;
break;
}
return -1;
}

int func_228(int iParam0){
var uVar0;
if(!Global_78689){
return 0;
}
uVar0=func_176(5664, -1);
switch (iParam0){
case joaat("deluxo"):
return MISC::IS_BIT_SET(uVar0, func_229(1));
case joaat("akula"):
return MISC::IS_BIT_SET(uVar0, func_229(2));
case joaat("riot2"):
return MISC::IS_BIT_SET(uVar0, func_229(6));
case joaat("stromberg"):
return MISC::IS_BIT_SET(uVar0, func_229(7));
case joaat("chernobog"):
return MISC::IS_BIT_SET(uVar0, func_229(10));
case joaat("barrage"):
return MISC::IS_BIT_SET(uVar0, func_229(11));
case joaat("khanjali"):
return MISC::IS_BIT_SET(uVar0, func_229(12));
case joaat("volatol"):
return MISC::IS_BIT_SET(uVar0, func_229(13));
case joaat("thruster"):
return MISC::IS_BIT_SET(uVar0, func_229(15));
default:
}
return 0;
}

int func_229(int iParam0){
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
case 11:
return 11;
case 12:
return 12;
case 13:
return 13;
case 14:
return 14;
case 15:
return 15;
default:
}
return -1;
}

int func_230(int iParam0){
switch (iParam0){
case joaat("deluxo"):
return 0;
break;
case joaat("akula"):
return 1;
break;
case joaat("riot2"):
return 2;
break;
case joaat("stromberg"):
return 3;
break;
case joaat("chernobog"):
return 4;
break;
case joaat("barrage"):
return 5;
break;
case joaat("khanjali"):
return 6;
break;
case joaat("volatol"):
return 7;
break;
case joaat("thruster"):
return 8;
break;
}
return -1;
}

int func_231(int iParam0){
int iVar0;
int iVar1;
if(!Global_78689){
return 0;
}
iVar0=func_233(iParam0);
iVar1=func_232();
if(iVar1 >=iVar0){
return 1;
}
return 0;
}

int func_232(){
return func_176(6116, -1);
}

int func_233(int iParam0){
switch (iParam0){
case joaat("microlight"):
return Global_262145.f_22892;
case joaat("rogue"):
return Global_262145.f_22893;
case joaat("alphaz1"):
return Global_262145.f_22894;
case joaat("havok"):
return Global_262145.f_22895;
case joaat("starling"):
return Global_262145.f_22896;
case joaat("molotok"):
return Global_262145.f_22897;
case joaat("tula"):
return Global_262145.f_22898;
case joaat("bombushka"):
return Global_262145.f_22899;
case joaat("howard"):
return Global_262145.f_22900;
case joaat("mogul"):
return Global_262145.f_22901;
case joaat("pyro"):
return Global_262145.f_22902;
case joaat("seabreeze"):
return Global_262145.f_22903;
case joaat("nokota"):
return Global_262145.f_22904;
case joaat("hunter"):
return Global_262145.f_22905;
default:
}
return 0;
}

int func_234(var uParam0){
if(!Global_78689){
return 0;
}
return MISC::IS_BIT_SET(func_176(5466, -1), uParam0);
}

int func_235(int iParam0){
switch (iParam0){
case joaat("dune3"):
return 0;
case joaat("halftrack"):
return 1;
case joaat("trailersmall2"):
return 2;
case joaat("apc"):
return 3;
case joaat("tampa3"):
return 5;
case joaat("oppressor"):
return 7;
default:
}
return 3;
}

int func_236(int iParam0){
switch (iParam0){
case joaat("dune3"):
return 0;
break;
case joaat("halftrack"):
return 1;
break;
case joaat("trailersmall2"):
return 2;
break;
case joaat("apc"):
return 3;
break;
case joaat("tampa3"):
return 4;
break;
case joaat("oppressor"):
return 5;
break;
}
return -1;
}

int func_237(int iParam0){
int iVar0;
if(!Global_78689){
return 0;
}
iVar0=0;
switch (iParam0){
case 187:
iVar0=16;
break;
case 177:
iVar0=12;
break;
case 185:
iVar0=14;
break;
case 174:
iVar0=9;
break;
case 171:
iVar0=20;
break;
case 172:
iVar0=7;
break;
case 173:
iVar0=8;
break;
case 175:
iVar0=10;
break;
case 176:
iVar0=11;
break;
case 178:
iVar0=5;
break;
case 179:
iVar0=6;
break;
case 183:
iVar0=21;
break;
case 180:
iVar0=18;
break;
case 181:
iVar0=22;
break;
case 182:
iVar0=19;
break;
case 184:
iVar0=13;
break;
case 186:
iVar0=15;
break;
case 188:
iVar0=17;
break;
}
return func_238(iVar0);
}

int func_238(int iParam0){
var uVar0;
int iVar1;
if(func_245()){
return 0;
}
uVar0=func_240(iParam0);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_239(iVar1));
}

int func_239(int iParam0){
return (iParam0 % 32);
}


var func__240(var uParam0){
var uVar0;
uVar0=func_176(func_241(uParam0), -1);
return uVar0;
}

int func_241(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_244(iVar0);
if((func_243()==0 || func_242()==0) || (func_243()==999 && func_242()==999)){
switch (iVar1){
case 0:
return 739;
break;
case 1:
return 740;
break;
}}
return 14385;
}

int func_242(){
return Global_32284;
}

int func_243(){
return Global_32283;
}

int func_244(int iParam0){
return (iParam0 / 32);
}


bool func_245(){
return Global_1575042;
}

int func_246(int iParam0){
if(((((((((((((((iParam0==171 || iParam0==172) || iParam0==173) || iParam0==175) || iParam0==177) || iParam0==178) || iParam0==179) || iParam0==180) || iParam0==181) || iParam0==182) || iParam0==183) || iParam0==184) || iParam0==185) || iParam0==186) || iParam0==187) || iParam0==188){
return 1;
}
return 0;
}

int func_247(int iParam0){
if((((((iParam0==199 || iParam0==200) || iParam0==201) || iParam0==202) || iParam0==203) || iParam0==204) || iParam0==205){
return 1;
}
return 0;
}

int func_248(var uParam0){
if(!Global_78689){
return 0;
}
return MISC::IS_BIT_SET(func_176(5329, -1), uParam0);
}

int func_249(int iParam0){
switch (iParam0){
case joaat("dune4"):
return 0;
case joaat("dune5"):
return 0;
case joaat("wastelander"):
return 1;
case joaat("blazer5"):
return 2;
case joaat("phantom2"):
return 3;
case joaat("voltic2"):
return 4;
case joaat("technical2"):
return 5;
case joaat("boxville5"):
return 6;
case joaat("ruiner2"):
return 7;
default:
}
return 0;
}

int func_250(var uParam0){
int iVar0;
iVar0=uParam0;
switch (iVar0){
case joaat("technical2"):
return 0;
break;
case joaat("boxville5"):
return 1;
break;
case joaat("wastelander"):
return 2;
break;
case joaat("phantom2"):
return 3;
break;
case joaat("voltic2"):
return 4;
break;
case joaat("dune4"):
return 5;
break;
case joaat("dune5"):
return 5;
break;
case joaat("ruiner2"):
return 6;
break;
case joaat("blazer5"):
return 7;
break;
}
return -1;
}

int func_251(){
var uVar0;
var uVar1;
int iVar2;
var uVar3;
int iVar4;
if(MISC::IS_BIT_SET(Global_25, 5)){
if(MISC::IS_BIT_SET(Global_25, 1) || MISC::IS_BIT_SET(Global_25, 3)){
return 1;
}else{
return 0;
}}
if(STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1)){
if(MISC::IS_BIT_SET(uVar0, 5)){
if(MISC::IS_BIT_SET(uVar0, 1) || MISC::IS_BIT_SET(uVar0, 3)){
return 1;
}else{
return 0;
}}}
if(STATS::STAT_SLOT_IS_LOADED(0)){
if(Global_152688.f_3){
iVar2=joaat("mpply_plat_up_lb_check");
if(STATS::STAT_GET_INT(iVar2, &uVar1, -1)){
if(MISC::IS_BIT_SET(uVar1, 5)){
return 1;
}}}}
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
uVar3=MISC::GET_PROFILE_SETTING(866);
if(MISC::IS_BIT_SET(uVar3, 1) || MISC::IS_BIT_SET(uVar3, 3)){
return 1;
}}
if(NETWORK::NETWORK_IS_SIGNED_IN()){
if(NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
if(NETWORK::NETWORK_HAS_ROS_PRIVILEGE_SPECIAL_EDITION_CONTENT()){
STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar4, -1);
MISC::SET_BIT(&iVar4, true);
MISC::SET_BIT(&iVar4, 3);
MISC::SET_BIT(&iVar4, 5);
MISC::SET_BIT(&Global_25, true);
MISC::SET_BIT(&Global_25, 3);
MISC::SET_BIT(&Global_25, 5);
STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar4, 1);
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
iVar4=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&iVar4, true);
MISC::SET_BIT(&iVar4, 3);
STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar4);
}
return 1;
}}}
return 0;
}


bool func_252(int iParam0, var uParam1){
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

int func_253(int iParam0){
switch (iParam0){
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
return 1;
default:
}
return 0;
}

int func_254(int iParam0){
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

int func_255(int iParam0){
if((((((iParam0==233 || iParam0==234) || iParam0==235) || iParam0==236) || iParam0==240) || iParam0==241) || iParam0==263){
return 1;
}
return 0;
}


void func_256(int iParam0, var uParam1){
switch (iParam0){
case 64:
MISC::SET_BIT(uParam1, 4);
break;
case 67:
MISC::SET_BIT(uParam1, 4);
break;
case 72:
MISC::SET_BIT(uParam1, true);
break;
case 117:
MISC::CLEAR_BIT(uParam1, true);
break;
case 49:
MISC::CLEAR_BIT(uParam1, false);
MISC::SET_BIT(uParam1, true);
break;
case 118:
MISC::SET_BIT(uParam1, false);
MISC::CLEAR_BIT(uParam1, true);
break;
case 1:
MISC::SET_BIT(uParam1, true);
break;
case 119:
MISC::CLEAR_BIT(uParam1, true);
break;
case 77:
MISC::SET_BIT(uParam1, false);
MISC::CLEAR_BIT(uParam1, true);
MISC::CLEAR_BIT(uParam1, 2);
break;
case 120:
MISC::CLEAR_BIT(uParam1, false);
MISC::SET_BIT(uParam1, true);
MISC::CLEAR_BIT(uParam1, 2);
break;
case 130:
MISC::SET_BIT(uParam1, false);
break;
case 132:
MISC::SET_BIT(uParam1, false);
break;
case 135:
MISC::CLEAR_BIT(uParam1, false);
MISC::SET_BIT(uParam1, true);
break;
case 137:
MISC::SET_BIT(uParam1, false);
break;
case 141:
MISC::SET_BIT(uParam1, true);
MISC::CLEAR_BIT(uParam1, 6);
break;
case 147:
MISC::SET_BIT(uParam1, false);
MISC::SET_BIT(uParam1, true);
MISC::SET_BIT(uParam1, 2);
MISC::SET_BIT(uParam1, 3);
MISC::SET_BIT(uParam1, 4);
MISC::SET_BIT(uParam1, 5);
MISC::SET_BIT(uParam1, 6);
MISC::SET_BIT(uParam1, 7);
MISC::SET_BIT(uParam1, 8);
break;
case 203:
MISC::SET_BIT(uParam1, false);
MISC::CLEAR_BIT(uParam1, true);
MISC::CLEAR_BIT(uParam1, 2);
break;
case 100:
MISC::SET_BIT(uParam1, false);
MISC::SET_BIT(uParam1, true);
MISC::SET_BIT(uParam1, 2);
break;
case 170:
MISC::CLEAR_BIT(uParam1, false);
MISC::CLEAR_BIT(uParam1, true);
MISC::CLEAR_BIT(uParam1, 2);
break;
case 160:
MISC::SET_BIT(uParam1, 15);
break;
case 161:
MISC::SET_BIT(uParam1, 15);
break;
case 192:
MISC::SET_BIT(uParam1, false);
MISC::SET_BIT(uParam1, true);
MISC::CLEAR_BIT(uParam1, 2);
break;
case 221:
MISC::CLEAR_BIT(uParam1, false);
MISC::SET_BIT(uParam1, true);
MISC::CLEAR_BIT(uParam1, 2);
break;
case 222:
MISC::SET_BIT(uParam1, true);
break;
case 172:
MISC::SET_BIT(uParam1, true);
break;
case 165:
MISC::CLEAR_BIT(uParam1, false);
MISC::SET_BIT(uParam1, true);
break;
case 166:
MISC::SET_BIT(uParam1, false);
MISC::CLEAR_BIT(uParam1, true);
break;
case 139:
MISC::SET_BIT(uParam1, false);
MISC::SET_BIT(uParam1, 24);
break;
case 104:
MISC::SET_BIT(uParam1, true);
break;
case 109:
MISC::SET_BIT(uParam1, false);
MISC::SET_BIT(uParam1, true);
MISC::SET_BIT(uParam1, 2);
break;
case 227:
case 252:
MISC::SET_BIT(uParam1, true);
MISC::CLEAR_BIT(uParam1, 2);
MISC::CLEAR_BIT(uParam1, 4);
break;
case 97:
MISC::SET_BIT(uParam1, false);
MISC::SET_BIT(uParam1, true);
break;
case 52:
MISC::SET_BIT(uParam1, true);
break;
case 108:
MISC::SET_BIT(uParam1, true);
break;
case 237:
MISC::SET_BIT(uParam1, 9);
break;
case 238:
MISC::CLEAR_BIT(uParam1, false);
MISC::SET_BIT(uParam1, true);
MISC::SET_BIT(uParam1, 2);
break;
case 233:
case 234:
case 235:
case 236:
case 240:
case 241:
case 263:
if(Global_77390){
MISC::SET_BIT(uParam1, 9);
}
break;
case 271:
MISC::SET_BIT(uParam1, false);
MISC::SET_BIT(uParam1, true);
MISC::SET_BIT(uParam1, 2);
MISC::SET_BIT(uParam1, 3);
MISC::SET_BIT(uParam1, 4);
break;
case 272:
MISC::SET_BIT(uParam1, 3);
MISC::SET_BIT(uParam1, 4);
break;
case 273:
MISC::SET_BIT(uParam1, false);
break;
case 281:
MISC::SET_BIT(uParam1, false);
break;
case 267:
MISC::SET_BIT(uParam1, false);
break;
case 268:
MISC::SET_BIT(uParam1, false);
break;
case 292:
MISC::SET_BIT(uParam1, 9);
break;
case 309:
MISC::SET_BIT(uParam1, 9);
break;
case 329:
MISC::SET_BIT(uParam1, 9);
break;
case 364:
MISC::SET_BIT(uParam1, false);
MISC::SET_BIT(uParam1, true);
MISC::SET_BIT(uParam1, 9);
break;
case 360:
MISC::SET_BIT(uParam1, 9);
break;
case 401:
MISC::SET_BIT(uParam1, false);
MISC::SET_BIT(uParam1, true);
MISC::SET_BIT(uParam1, 6);
MISC::SET_BIT(uParam1, 9);
break;
case 406:
MISC::SET_BIT(uParam1, 9);
break;
case 404:
MISC::SET_BIT(uParam1, 9);
break;
case 425:
case 426:
case 427:
MISC::SET_BIT(uParam1, 9);
break;
case 431:
case 432:
case 433:
MISC::SET_BIT(uParam1, 9);
break;
case 471:
MISC::SET_BIT(uParam1, 3);
MISC::SET_BIT(uParam1, 7);
break;
case 493:
case 491:
MISC::SET_BIT(uParam1, false);
MISC::SET_BIT(uParam1, true);
MISC::SET_BIT(uParam1, 2);
MISC::SET_BIT(uParam1, 3);
MISC::SET_BIT(uParam1, 4);
MISC::SET_BIT(uParam1, 5);
MISC::SET_BIT(uParam1, 6);
MISC::SET_BIT(uParam1, 7);
break;
case 498:
MISC::SET_BIT(uParam1, false);
break;
case 590:
MISC::SET_BIT(uParam1, false);
MISC::SET_BIT(uParam1, true);
break;
case 525:
MISC::SET_BIT(uParam1, 3);
break;
case 485:
case 105:
case 597:
MISC::SET_BIT(uParam1, false);
MISC::SET_BIT(uParam1, true);
break;
case 475:
case 477:
case 492:
case 504:
case 599:
case 394:
case 604:
case 613:
case 385:
MISC::SET_BIT(uParam1, false);
break;
case 151:
MISC::SET_BIT(uParam1, 2);
MISC::SET_BIT(uParam1, 3);
break;
case 155:
MISC::SET_BIT(uParam1, false);
MISC::SET_BIT(uParam1, 2);
break;
case 95:
MISC::SET_BIT(uParam1, false);
MISC::SET_BIT(uParam1, 24);
break;
case 474:
MISC::SET_BIT(uParam1, false);
break;
case 602:
MISC::SET_BIT(uParam1, false);
MISC::SET_BIT(uParam1, true);
MISC::SET_BIT(uParam1, 2);
break;
default:
return;
break;
}}


void func_257(char* sParam0){
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


void func_258(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
Global_23390.f_5526[0]=iParam0;
Global_23390.f_5526[1]=iParam1;
Global_23390.f_5526[2]=iParam2;
Global_23390.f_5526[3]=iParam3;
Global_23390.f_5526[4]=iParam4;
}


void func_259(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
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


void func_260(bool bParam0, bool bParam1){
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


void func_261(){
if(MISC::IS_PC_VERSION()){
PAD::SET_CURSOR_POSITION(0.325f, 0.3f);
}}

int func_262(int iParam0, bool bParam1){
int iVar0;
iVar0=func_73(iParam0);
if(iVar0==-1){
return 0;
}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())){
return 0;
}
if(func_84(0)){
return 0;
}
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
return 0;
}
if(iVar0 > -1 && iVar0 < 6){
if(Global_44123[iVar0 /*32*/]==1 && Global_44123[iVar0 /*32*/].f_4==1){
if(bParam1){
if(Global_44123[iVar0 /*32*/].f_29){
return 0;
}}
Global_44123[iVar0 /*32*/].f_5=1;
Global_44123[iVar0 /*32*/].f_29=1;
return 1;
}else{
if(Global_44123[iVar0 /*32*/]==0){
}
if(Global_44123[iVar0 /*32*/].f_7){
}}}
return 0;
}


bool func_263(char* sParam0, int iParam1, bool bParam2){
int iVar0;
bool bVar1;
bool bVar2;
if(!func_76(&iVar0, 1, iParam1)){
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
bVar2=func_264(&(Global_23390.f_6103[iVar0 /*10*/]));
if(!bVar1 || !bVar2){}
return (bVar1 && bVar2);
}


bool func_264(var uParam0){
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


void func_265(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}


var func__266(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_267(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6){
int iVar0;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1){}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!*iParam0==-1){
func_72(iParam0);
}
return;
}
if(!*iParam0==-1){
return;
}
iVar0=0;
iVar0=0;
while (iVar0 < 6){
if(!Global_44123[iVar0 /*32*/]){
Global_44123[iVar0 /*32*/]=1;
Global_44123[iVar0 /*32*/].f_1=Global_44324;
Global_44324++;
Global_44123[iVar0 /*32*/].f_4=0;
Global_44123[iVar0 /*32*/].f_29=0;
Global_44123[iVar0 /*32*/].f_5=0;
Global_44123[iVar0 /*32*/].f_2=iParam1;
StringCopy(&(Global_44123[iVar0 /*32*/].f_8), sParam2, 16);
Global_44123[iVar0 /*32*/].f_6=iParam3;
Global_44123[iVar0 /*32*/].f_31=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_44123[iVar0 /*32*/].f_7=0;
Global_44123[iVar0 /*32*/].f_3=iParam5;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
Global_44123[iVar0 /*32*/].f_12=1;
StringCopy(&(Global_44123[iVar0 /*32*/].f_13), sParam4, 64);
Global_44123[iVar0 /*32*/].f_30=iParam6;
}else{
Global_44123[iVar0 /*32*/].f_12=0;
Global_44123[iVar0 /*32*/].f_30=0;
}
*iParam0=Global_44123[iVar0 /*32*/].f_1;
return;
}
iVar0++;
}}

int func_268(int iParam0, int iParam1){
int iVar0;
if(iParam0 >=312){
return 0;
}
iVar0=iParam1;
if(iVar0 < 0 || iVar0 > 2){
return 0;
}
return MISC::IS_BIT_SET(Global_113810.f_25185[iParam0], iVar0);
}

int func_269(int iParam0){
int iVar0;
int iVar1[128];
if(func_272(1, 1)){
if(iVar0 < (iVar1 - 1)){
iVar1[iVar0]=joaat("elegy2");
iVar0++;
}}
if(MISC::IS_BIT_SET(Global_113810.f_18577[45 /*6*/], 3)){
if(iVar0 < (iVar1 - 1)){
iVar1[iVar0]=joaat("dune2");
iVar0++;
}}
if(func_46() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_271(33, 0) && !func_270(1751306471)){
iVar1[iVar0]=joaat("blista3");
iVar0++;
}
if(Global_113810.f_25076.f_3){
iVar1[iVar0]=joaat("stalion2");
iVar0++;
}
if(Global_113810.f_25076.f_4){
iVar1[iVar0]=joaat("gauntlet2");
iVar0++;
}
if(Global_113810.f_25076.f_5){
iVar1[iVar0]=joaat("dominator2");
iVar0++;
}
if(Global_113810.f_25076.f_6){
iVar1[iVar0]=joaat("buffalo3");
iVar0++;
}
if(Global_113810.f_25076.f_7){
iVar1[iVar0]=joaat("marshall");
iVar0++;
}}
if(iParam0 >=0 && iParam0 < iVar0){
return iVar1[iParam0];
}
return 0;
}

int func_270(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < Global_113810.f_7691.f_764){
if(Global_113810.f_7691.f_651[iVar0 /*14*/]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_271(int iParam0, bool bParam1){
if(MISC::IS_BIT_SET(Global_113810.f_24998.f_8[iParam0], bParam1)){
return 1;
}
return 0;
}

int func_272(bool bParam0, bool bParam1){
if(bParam0){
if(MISC::IS_BIT_SET(Global_113810.f_668.f_1320, 2)){
return 1;
}}
if(NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()){
if(!bParam1 || NETWORK::NETWORK_IS_SIGNED_ONLINE()){
if(!MISC::IS_PS3_VERSION() && !func_44()){
return 1;
}}}
if(bParam1){
if(NETWORK::NETWORK_HAS_AGE_RESTRICTIONS()){
return 0;
}}
if(NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()){
return 1;
}
return 0;
}

int func_273(){
int iVar0;
iVar0=0;
if(func_272(1, 1)){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar0++;
}}
if(MISC::IS_BIT_SET(Global_113810.f_18577[45 /*6*/], 3)){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar0++;
}}
if(func_46() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_271(33, 0) && !func_270(1751306471)){
iVar0++;
}
if(Global_113810.f_25076.f_3){
iVar0++;
}
if(Global_113810.f_25076.f_4){
iVar0++;
}
if(Global_113810.f_25076.f_5){
iVar0++;
}
if(Global_113810.f_25076.f_6){
iVar0++;
}
if(Global_113810.f_25076.f_7){
iVar0++;
}}
return iVar0;
}

int func_274(float fParam0){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(fParam0 <=0f){
return PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(PLAYER::PLAYER_PED_ID()) > 0;
}else{
return PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), fParam0) > 0;
}}
return 0;
}

int func_275(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78938, 0);
}


void func_276(){
var uVar0[10];
bool bVar1;
int iVar2;
float fVar3;
char* sVar4;
struct<3> Var5;
struct<3> Var6;
struct<3> Var7;
int iVar8;
bool bVar9;
int iVar10;
int iVar11;
int iVar12;
int iVar13;
struct<3> Var14;
bool bVar15;
float fVar16;
int iVar17;
struct<3> Var18;
struct<3> Var19;
int iVar20;
struct<3> Var21;
bool bVar22;
float fVar23;
int iVar24;
bool bVar25;
struct<4> Var26;
bool bVar27;
int iVar28;
struct<4> Var29;
struct<60> Var30;
int iVar31;
int iVar32;
int iVar33;
bool bVar34;
float fVar35;
int iVar36;
struct<60> Var37;
int iVar38;
bool bVar39;
int iVar40;
int iVar41;
int iVar42;
int iVar43;
bool bVar44;
bool bVar45;
bVar1=false;
if((((((((((((((((Local_54.f_29.f_80 && Local_54.f_29.f_69) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && Local_54.f_2==0) && Local_54.f_0 !=-1) && func_70(Local_54.f_0, 0)) && func_70(Local_54.f_0, 5)) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(5)) && !func_27(14)) && !Global_75816) && !func_275(1)) && !func_364()) || (((Local_54.f_3 > 1 && !func_275(0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !func_364())){
func_363(Local_54.f_0, &Local_81);
fVar3=0f;
sVar4="ANIM@APT_TRANS@GARAGE";
Var5={
198.3659f, -1020.273f, -100f 
};
Var6={
Var5 
};
Var7={
198.9538f, -1026.13f, -100f 
};
iVar8=func_362(Local_54.f_0);
switch (Local_54.f_3){
case 0:
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
Local_54.f_3=10;
return;
}
if((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_54.f_29, Local_54.f_29.f_3, Local_54.f_29.f_6, 0, 1, 0) && (func_361(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), Local_54.f_29.f_68, 90f) || PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2)) && (iVar8==iLocal_127 || iVar8==145)){
if(func_360()){
bVar9=true;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
if(ENTITY::DOES_ENTITY_EXIST(iVar2)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0)){
iVar10=ENTITY::GET_ENTITY_MODEL(iVar2);
if(((((((((!func_67(iVar10) || func_66(iVar2)) || func_65(iVar2)) || !func_39(iVar10, 0, -1)) || VEHICLE::IS_BIG_VEHICLE(iVar2)) || ((!VEHICLE::IS_THIS_MODEL_A_CAR(iVar10) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar10)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar10))) || iVar10==joaat("monster")) || FIRE::IS_ENTITY_ON_FIRE(iVar2)) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2)) || (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("taxi_procedural")) > 0)){
bVar9=false;
}}else{
bVar9=false;
}}
}
elseif(STREAMING::DOES_ANIM_DICT_EXIST(sVar4)){
STREAMING::REQUEST_ANIM_DICT(sVar4);
if(!STREAMING::HAS_ANIM_DICT_LOADED(sVar4)){
bVar9=false;
}
}
if(bVar9){
func_267(&iLocal_113, 3, "WEB_VEH_ENTER", 0, 0, 0, 0);
iLocal_173=0;
Local_54.f_3=1;
}
elseif(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_266("WEB_VEH_INV")){
func_265("WEB_VEH_INV", -1);
StringCopy(&cLocal_163, "WEB_VEH_INV", 16);
bVar1=true;
}
}}elseif(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_266("WEB_VEH_FULL")){
func_265("WEB_VEH_FULL", -1);
StringCopy(&cLocal_163, "WEB_VEH_FULL", 16);
bVar1=true;
}}
break;
case 1:
if(!iLocal_171){
if(!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
iLocal_171=0;
STREAMING::REQUEST_ANIM_DICT(sVar4);
if(STREAMING::HAS_ANIM_DICT_LOADED(sVar4)){
iLocal_171=1;
}}else{
STREAMING::REMOVE_ANIM_DICT(sVar4);
iLocal_171=1;
}}
iVar11=1;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
if(ENTITY::DOES_ENTITY_EXIST(iVar2)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0)){
iVar12=ENTITY::GET_ENTITY_MODEL(iVar2);
if((((((((!func_67(iVar12) || func_66(iVar2)) || func_65(iVar2)) || VEHICLE::IS_BIG_VEHICLE(iVar2)) || ((!VEHICLE::IS_THIS_MODEL_A_CAR(iVar12) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar12)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar12))) || iVar12==joaat("monster")) || FIRE::IS_ENTITY_ON_FIRE(iVar2)) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2)) || (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("taxi_procedural")) > 0)){
iVar11=0;
}
}
else{
iVar11=0;
}}}
if(((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_54.f_29, Local_54.f_29.f_3, Local_54.f_29.f_6, 0, 1, 0) && (func_361(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), Local_54.f_29.f_68, 90f) || PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && func_360()) && !PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2)) && !func_364()) && (iVar8==iLocal_127 || iVar8==145)) && iVar11){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) || (STREAMING::HAS_ANIM_DICT_LOADED(sVar4) || !STREAMING::DOES_ANIM_DICT_EXIST(sVar4))){
if(func_262(iLocal_113, 1)){
func_72(&iLocal_113);
iLocal_171=0;
Local_54.f_3=2;
}
func_358(47, 0);
func_353(47, 0);
Local_54.f_112=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var5, "v_garagem_sp");
if(INTERIOR::IS_VALID_INTERIOR(Local_54.f_112)){
if(!INTERIOR::IS_INTERIOR_READY(Local_54.f_112)){
if((MISC::GET_FRAME_COUNT() % 10)==0){
INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_54.f_112);
}}
StringCopy(&Global_39672, "v_garagem_sp", 32);
}
if(!iLocal_170 && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
iVar13=func_351(Local_54.f_0);
func_64(&Var14, iVar13);
Var6={
Var14 
};
STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var6, 20f, 0);
}else{
STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var7 + Vector(1f, 0f, 0f), 20f, 0);
}
iLocal_170=1;
}}}else{
if(iLocal_170 && STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
STREAMING::NEW_LOAD_SCENE_STOP();
iLocal_170=0;
}
iLocal_171=0;
func_72(&iLocal_113);
STREAMING::REMOVE_ANIM_DICT(sVar4);
Local_54.f_3=0;
}
break;
case 2:
func_358(47, 0);
func_353(47, 0);
PLAYER::FORCE_CLEANUP(8);
Global_77479.f_577=1;
Global_77479.f_578={
Local_54.f_29.f_55 
};
iLocal_153=PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
HUD::DISPLAY_HUD(0);
HUD::DISPLAY_RADAR(0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0)){
if(func_361(ENTITY::GET_ENTITY_HEADING(iVar2), Local_54.f_29.f_68, 90f)){
iLocal_173=0;
}
else{
iLocal_173=1;
}
ENTITY::SET_ENTITY_PROOFS(iVar2, 1, 1, 1, 1, 1, 1, 0, 0);
MISC::CLEAR_AREA_OF_OBJECTS(Local_81.f_86[0 /*6*/], 20f, 0);
MISC::CLEAR_AREA_OF_PROJECTILES(Local_81.f_86[0 /*6*/], 20f, 0);
GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_81.f_86[0 /*6*/], 7f);
ENTITY::SET_ENTITY_COORDS(iVar2, Local_81.f_86[0 /*6*/], 1, 0, 0, 1);
if(iLocal_173 && !PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID())){
ENTITY::SET_ENTITY_HEADING(iVar2, (Local_81.f_86[0 /*6*/].f_3.f_2 + 180f));
}
else{
ENTITY::SET_ENTITY_HEADING(iVar2, Local_81.f_86[0 /*6*/].f_3.f_2);
}
if(PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID())){
PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0, 0, -1);
PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
}
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 1084227584);
}
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
func_345(1, 1, 1, 0, 0, 0, 0);
func_344(&(Local_81[1 /*15*/]), &(Local_54.f_110), &(Local_54.f_111));
Local_54.f_3=3;
}else{
if(ENTITY::DOES_ENTITY_EXIST(iLocal_166) && !ENTITY::IS_ENTITY_DEAD(iLocal_166, 0)){
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_166) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_166, 1)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_166);
}}
iLocal_166=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if((((ENTITY::DOES_ENTITY_EXIST(iLocal_166) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166, 0)) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_166))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_166))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_166))){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_166)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_166, 0, 0);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_166) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166, 0)){
if(!bVar15){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_166, Local_54.f_29, Local_54.f_29.f_3, Local_54.f_29.f_6, 0, 1, 0)){
bVar15=true;
}}
if(!bVar15){
fVar16=vdist2(ENTITY::GET_ENTITY_COORDS(iLocal_166, 1), Local_81[0 /*15*/]);
if(fVar16 < (5f * 5f)){
bVar15=true;
}}
if(bVar15){
iVar17=func_52(24);
if(func_343(&Local_139, 24)){
func_338(&Local_139, func_536());
if(ENTITY::DOES_ENTITY_EXIST(iVar17)){
VEHICLE::DELETE_VEHICLE(&iVar17);
}}
if(Local_54.f_0==21){
MISC::CLEAR_AREA(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
func_336(iLocal_166, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
}elseif(Local_54.f_0==22){
MISC::CLEAR_AREA(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
func_336(iLocal_166, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
}elseif(Local_54.f_0==23){
MISC::CLEAR_AREA(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
func_336(iLocal_166, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
}
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_166, 1084227584);
}
}}else{
iLocal_166=0;
}
Var18={
Local_54.f_29 * Vector(2f, 2f, 2f) + Local_54.f_29.f_3 * Vector(1f, 1f, 1f) / Vector(3f, 3f, 3f) 
};
Var19={
Local_54.f_29 * Vector(1f, 1f, 1f) + Local_54.f_29.f_3 * Vector(2f, 2f, 2f) / Vector(3f, 3f, 3f) 
};
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_54.f_29, Var18.f_0, Var18.f_1, Local_54.f_29.f_3.f_2, Local_54.f_29.f_6, 0, 1, 0)){
sLocal_174="";
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2)){
case 0:
sLocal_174="gar_open_1_left";
break;
case 1:
sLocal_174="gar_open_2_left";
break;
}}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var18.f_0, Var18.f_1, Local_54.f_29.f_2, Var19.f_0, Var19.f_1, Local_54.f_29.f_3.f_2, Local_54.f_29.f_6, 0, 1, 0)){
sLocal_174="";
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2)){
case 0:
sLocal_174="gar_open_1_left";
break;
case 1:
sLocal_174="gar_open_1_right";
break;
}}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var19.f_0, Var19.f_1, Local_54.f_29.f_2, Local_54.f_29.f_3, Local_54.f_29.f_6, 0, 1, 0)){
sLocal_174="";
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2)){
case 0:
sLocal_174="gar_open_1_right";
break;
case 1:
sLocal_174="gar_open_2_right";
break;
}}else{
sLocal_174="";
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6)){
case 0:
sLocal_174="gar_open_1_left";
break;
case 1:
sLocal_174="gar_open_1_right";
break;
case 2:
sLocal_174="gar_open_2_left";
break;
case 3:
sLocal_174="gar_open_2_right";
break;
case 4:
sLocal_174="gar_open_3_left";
break;
case 5:
sLocal_174="gar_open_3_right";
break;
}}
MISC::CLEAR_AREA_OF_OBJECTS(Local_81.f_73[0 /*4*/], 20f, 0);
MISC::CLEAR_AREA_OF_PROJECTILES(Local_81.f_86[0 /*6*/], 20f, 0);
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_81.f_73[0 /*4*/], 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_81.f_73[0 /*4*/].f_3);
iLocal_118=PED::CREATE_SYNCHRONIZED_SCENE(Local_81.f_73[0 /*4*/], 0f, 0f, Local_81.f_73[0 /*4*/].f_3, 2);
TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_118, sVar4, sLocal_174, 8f, -8f, 0, 0, 1148846080, 0);
func_345(1, 1, 1, 0, 0, 0, 0);
func_344(&(Local_81[0 /*15*/]), &(Local_54.f_110), &(Local_54.f_111));
Local_54.f_3=4;
}
Local_54.f_112=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var5, "v_garagem_sp");
if(INTERIOR::IS_VALID_INTERIOR(Local_54.f_112)){
if(!INTERIOR::IS_INTERIOR_READY(Local_54.f_112)){
INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_54.f_112);
}
StringCopy(&Global_39672, "v_garagem_sp", 32);
}
if(!iLocal_170){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
iVar20=func_351(Local_54.f_0);
func_64(&Var21, iVar20);
Var6={
Var21 
};
STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var6, 20f, 0);
}else{
STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var7, 20f, 0);
}}
MISC::SET_BIT(&(Local_129.f_9), 25);
func_332(198.0043f, -999.7775f, -100f, 50f, 0);
func_119(Local_54.f_0);
func_119(26);
func_119(29);
func_119(32);
func_119(28);
func_119(31);
func_119(34);
func_119(27);
func_119(30);
func_119(33);
settimera(0);
iLocal_172=0;
break;
case 4:
bVar22=true;
if(!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
}elseif(STREAMING::IS_NEW_LOAD_SCENE_LOADED()){
}else{
bVar22=false;
}
if(INTERIOR::IS_VALID_INTERIOR(Local_54.f_112)){
if(!INTERIOR::IS_INTERIOR_READY(Local_54.f_112)){
INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_54.f_112);
}
StringCopy(&Global_39672, "v_garagem_sp", 32);
}else{
Local_54.f_112=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var5, "v_garagem_sp");
}
if(func_331()){
}else{
bVar22=false;
}
if(CAM::DOES_CAM_EXIST(Local_54.f_110) && CAM::IS_CAM_RENDERING(Local_54.f_110)){
if(CAM::IS_CAM_INTERPOLATING(Local_54.f_110)){
bVar22=false;
}
if(IntToFloat(timera()) <=(Local_81[0 /*15*/].f_14 * 1000f)){
bVar22=false;
}}elseif(CAM::DOES_CAM_EXIST(Local_54.f_111) && CAM::IS_CAM_RENDERING(Local_54.f_111)){
if(CAM::IS_CAM_INTERPOLATING(Local_54.f_111)){
bVar22=false;
}
if(IntToFloat(timera()) <=(Local_81[0 /*15*/].f_14 * 1000f)){
bVar22=false;
}}else{
bVar22=false;
}
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_118)){
fVar23=PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_118);
if(fVar23 < 0.4f){
bVar22=false;
}}
if(bVar22){
CAM::DO_SCREEN_FADE_OUT(800);
Local_54.f_3=5;
}
break;
case 5:
if(CAM::IS_SCREEN_FADED_OUT()){
iVar24=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(iVar24, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
AUDIO::SET_VARIABLE_ON_SOUND(iVar24, "hold", (2250f / 1000f));
func_345(0, 1, 1, 0, 0, 0, 0);
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
if(CAM::DOES_CAM_EXIST(Local_54.f_110)){
CAM::SET_CAM_ACTIVE(Local_54.f_110, 0);
CAM::DESTROY_CAM(Local_54.f_110, 0);
}
if(CAM::DOES_CAM_EXIST(Local_54.f_111)){
CAM::SET_CAM_ACTIVE(Local_54.f_111, 0);
CAM::DESTROY_CAM(Local_54.f_111, 0);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_176)){
ENTITY::SET_ENTITY_COLLISION(iLocal_176, 1, 0);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_176, 0);
iLocal_176=0;
}
PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
PLAYER::FORCE_CLEANUP(8);
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_118)){
PED::DETACH_SYNCHRONIZED_SCENE(iLocal_118);
}
iLocal_118=-1;
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 194.5394f, -1026.32f, -100f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 334.1665f);
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
settimera(0);
Local_54.f_3=6;
}
break;
case 6:
func_330(Local_54.f_0);
if(CAM::IS_SCREEN_FADED_OUT() && timera() > 2250){
STREAMING::REMOVE_ANIM_DICT(sVar4);
func_329();
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
STREAMING::NEW_LOAD_SCENE_STOP();
}
CAM::DO_SCREEN_FADE_IN(800);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
settimera(0);
iLocal_154=0;
iLocal_170=0;
Local_54.f_3=10;
}
break;
case 3:
func_330(Local_54.f_0);
bVar25=true;
if(!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
}elseif(STREAMING::IS_NEW_LOAD_SCENE_LOADED()){
}else{
bVar25=false;
}
if(INTERIOR::IS_VALID_INTERIOR(Local_54.f_112)){
if(!INTERIOR::IS_INTERIOR_READY(Local_54.f_112)){
INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_54.f_112);
}
StringCopy(&Global_39672, "v_garagem_sp", 32);
}else{
Local_54.f_112=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var5, "v_garagem_sp");
}
if(func_331()){
}else{
bVar25=false;
}
if(CAM::DOES_CAM_EXIST(Local_54.f_110) && CAM::IS_CAM_RENDERING(Local_54.f_110)){
if(CAM::IS_CAM_INTERPOLATING(Local_54.f_110)){
bVar25=false;
}
if(IntToFloat(timera()) <=(Local_81[1 /*15*/].f_14 * 1000f)){
bVar25=false;
}}elseif(CAM::DOES_CAM_EXIST(Local_54.f_111) && CAM::IS_CAM_RENDERING(Local_54.f_111)){
if(CAM::IS_CAM_INTERPOLATING(Local_54.f_111)){
bVar25=false;
}
if(IntToFloat(timera()) <=(Local_81[1 /*15*/].f_14 * 1000f)){
bVar25=false;
}}else{
bVar25=false;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
Var26={
0f, 0f, 0f 
};
Var26.f_3=0f;
func_321(PLAYER::PLAYER_PED_ID(), Local_81.f_86[0 /*6*/], Local_81.f_66[0 /*3*/], ((Local_81[1 /*15*/].f_14 * 1000f) - 500f), Var26, 2, &fVar3);
}
if(bVar25){
func_329();
settimera(0);
CAM::DO_SCREEN_FADE_OUT(800);
Local_54.f_3=35;
}
break;
case 35:
bVar27=true;
func_330(Local_54.f_0);
if(IntToFloat(timera()) <=(Local_81.f_61[1] * 1000f)){
bVar27=false;
}
if(bVar27){
func_329();
func_345(0, 1, 1, 0, 0, 0, 0);
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
if(CAM::DOES_CAM_EXIST(Local_54.f_110)){
CAM::SET_CAM_ACTIVE(Local_54.f_110, 0);
CAM::DESTROY_CAM(Local_54.f_110, 0);
}
if(CAM::DOES_CAM_EXIST(Local_54.f_111)){
CAM::SET_CAM_ACTIVE(Local_54.f_111, 0);
CAM::DESTROY_CAM(Local_54.f_111, 0);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_176)){
ENTITY::SET_ENTITY_COLLISION(iLocal_176, 1, 0);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_176, 0);
iLocal_176=0;
}
PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
PLAYER::FORCE_CLEANUP(8);
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
STREAMING::NEW_LOAD_SCENE_STOP();
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0)){
iVar28=func_351(Local_54.f_0);
func_64(&Var29, iVar28);
ENTITY::SET_ENTITY_COORDS(iVar2, Var29, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iVar2, Var29.f_3);
VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar2, 1);
VEHICLE::SET_VEHICLE_ENGINE_ON(iVar2, 0, 1, 0);
VEHICLE::SET_VEHICLE_LIGHTS(iVar2, 4);
VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iVar2, 1, 0);
VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iVar2, 0, 0);
AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar2, 0);
ENTITY::SET_ENTITY_PROOFS(iVar2, 0, 0, 0, 0, 0, 0, 0, 0);
TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar2, 0);
ENTITY::FREEZE_ENTITY_POSITION(iVar2, 0);
Var30.f_9=49;
Var30.f_59=2;
func_32(iVar2, &Var30);
func_120(iVar28, &Var30, 0f, 0f, 0f, -1f, 145);
func_30(iVar28, iVar2, 1);
func_320(iVar2);
}
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
}
iVar31=PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
iVar32=0;
while (iVar32 < iVar31){
if((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar32]) && !PED::IS_PED_INJURED(uVar0[iVar32])) && PED::IS_PED_GROUP_MEMBER(uVar0[iVar32], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()))){
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uVar0[iVar32], 206.802f, -1018.011f, -100f, 0, 0, 1);
}
iVar32++;
}
settimera(0);
iLocal_154=0;
iLocal_170=0;
CAM::DO_SCREEN_FADE_IN(800);
Local_54.f_3=10;
}
break;
case 10:
if(timera() < 7000 || !Global_113810.f_32752.f_4800){
if(!Global_113810.f_32752.f_4800){
if(iLocal_154==0){
func_265("CAR_GAR_05", -1);
StringCopy(&cLocal_163, "CAR_GAR_05", 16);
bVar1=true;
if(timera() >=7000){
settimera(0);
iLocal_154++;
}
}
elseif(iLocal_154==1){
func_265("CAR_GAR_06", -1);
StringCopy(&cLocal_163, "CAR_GAR_06", 16);
bVar1=true;
if(timera() >=7000){
settimera(0);
Global_113810.f_32752.f_4800=1;
}
}}else{
func_265("CAR_GAR_EXIT", -1);
StringCopy(&cLocal_163, "CAR_GAR_EXIT", 16);
bVar1=true;
}}else{
Global_113810.f_32752.f_4800=1;
}
iVar33=0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(iLocal_113 !=-1){
func_72(&iLocal_113);
}
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0)){
if(VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar2) || PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID())){
if(!(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))){
if((((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 71) !=0f || PAD::IS_CONTROL_JUST_PRESSED(0, 71)) || PAD::IS_CONTROL_PRESSED(0, 71)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 71)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 71)){
iVar33=1;
}
if((((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 72) !=0f || PAD::IS_CONTROL_JUST_PRESSED(0, 72)) || PAD::IS_CONTROL_PRESSED(0, 72)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 72)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 72)){
iVar33=1;
}}
}}}else{
STREAMING::REQUEST_ANIM_DICT(sVar4);
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 191.0491f, -1026.318f, -105f, 198.0297f, -1026.322f, -96.81246f, 2.0625f, 0, 1, 0) && func_361(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 180f, 90f)){
if(iLocal_112 !=-1){
func_72(&iLocal_112);
}
if(iLocal_113==-1){
func_267(&iLocal_113, 3, "WEB_VEH_EXIT", 0, 0, 0, 0);
}
if(!iLocal_112 !=-1 && !iLocal_113==-1){
if(func_262(iLocal_113, 1)){
func_72(&iLocal_113);
iVar33=1;
}
}}elseif(iLocal_113 !=-1){
func_72(&iLocal_113);
}}
if(iLocal_157){
iVar33=1;
}
if(iVar33 && !func_319()){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || iLocal_157){
settimera(0);
STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_81.f_73[2 /*4*/], 20f, 0);
if(iLocal_113 !=-1){
func_72(&iLocal_113);
}
Local_54.f_3=12;
}elseif(STREAMING::HAS_ANIM_DICT_LOADED(sVar4)){
sLocal_174="";
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6)){
case 0:
sLocal_174="gar_open_1_left";
break;
case 1:
sLocal_174="gar_open_1_right";
break;
case 2:
sLocal_174="gar_open_2_left";
break;
case 3:
sLocal_174="gar_open_2_right";
break;
case 4:
sLocal_174="gar_open_3_left";
break;
case 5:
sLocal_174="gar_open_3_right";
break;
}
iLocal_118=PED::CREATE_SYNCHRONIZED_SCENE(Local_81.f_73[1 /*4*/], 0f, 0f, Local_81.f_73[1 /*4*/].f_3, 2);
TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_118, sVar4, sLocal_174, 8f, -8f, 0, 0, 1148846080, 0);
func_345(1, 1, 1, 0, 0, 0, 0);
func_344(&(Local_81[2 /*15*/]), &(Local_54.f_110), &(Local_54.f_111));
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_81.f_73[2 /*4*/], 20f, 0);
settimera(0);
if(iLocal_113 !=-1){
func_72(&iLocal_113);
}
Local_54.f_3=11;
}elseif(!STREAMING::DOES_ANIM_DICT_EXIST(sVar4)){
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_81.f_73[1 /*4*/], 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_81.f_73[1 /*4*/].f_3);
func_345(1, 1, 1, 0, 0, 0, 0);
func_344(&(Local_81[2 /*15*/]), &(Local_54.f_110), &(Local_54.f_111));
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_81.f_73[2 /*4*/], 20f, 0);
settimera(0);
if(iLocal_113 !=-1){
func_72(&iLocal_113);
}
Local_54.f_3=11;
}}
break;
case 11:
bVar34=true;
if(!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
}elseif(STREAMING::IS_NEW_LOAD_SCENE_LOADED()){
}else{
bVar34=false;
}
if(func_331()){
}else{
bVar34=false;
}
if(CAM::DOES_CAM_EXIST(Local_54.f_110) && CAM::IS_CAM_RENDERING(Local_54.f_110)){
if(CAM::IS_CAM_INTERPOLATING(Local_54.f_110)){
bVar34=false;
}
if(IntToFloat(timera()) <=(Local_81[2 /*15*/].f_14 * 1000f)){
bVar34=false;
}}elseif(CAM::DOES_CAM_EXIST(Local_54.f_111) && CAM::IS_CAM_RENDERING(Local_54.f_111)){
if(CAM::IS_CAM_INTERPOLATING(Local_54.f_111)){
bVar34=false;
}
if(IntToFloat(timera()) <=(Local_81[2 /*15*/].f_14 * 1000f)){
bVar34=false;
}}else{
bVar34=false;
}
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_118)){
fVar35=PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_118);
if(fVar35 < 0.4f){
bVar34=false;
}}
if(bVar34){
iLocal_154=0;
iLocal_170=0;
CAM::DO_SCREEN_FADE_OUT(800);
settimera(0);
Local_54.f_3=13;
}
break;
case 12:
PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
if(timera() > 500){
iVar36=func_318();
if((iVar36==21 || iVar36==22) || iVar36==23){
Var37.f_9=49;
Var37.f_59=2;
func_120(iVar36, &Var37, 0f, 0f, 0f, -1f, 145);
func_122(iVar36);
}elseif(iVar36 !=-1){
if(!iLocal_157){
func_542(iVar36, 0);
func_122(iVar36);
}}
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
STREAMING::REMOVE_ANIM_DICT(sVar4);
CAM::DO_SCREEN_FADE_OUT(800);
Local_54.f_3=13;
}
break;
case 13:
if(CAM::IS_SCREEN_FADED_OUT()){
iVar38=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(iVar38, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
AUDIO::SET_VARIABLE_ON_SOUND(iVar38, "hold", (2250f / 1000f));
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
if(CAM::DOES_CAM_EXIST(Local_54.f_110)){
CAM::SET_CAM_ACTIVE(Local_54.f_110, 0);
CAM::DESTROY_CAM(Local_54.f_110, 0);
}
if(CAM::DOES_CAM_EXIST(Local_54.f_111)){
CAM::SET_CAM_ACTIVE(Local_54.f_111, 0);
CAM::DESTROY_CAM(Local_54.f_111, 0);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_176)){
ENTITY::SET_ENTITY_COLLISION(iLocal_176, 1, 0);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_176, 0);
iLocal_176=0;
}
PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
PLAYER::FORCE_CLEANUP(8);
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!iLocal_157){
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0)){
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
ENTITY::SET_ENTITY_COORDS(iVar2, Local_54.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iVar2, Local_54.f_29.f_77[1]);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 1084227584);
}
}}else{
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_118)){
PED::DETACH_SYNCHRONIZED_SCENE(iLocal_118);
}
iLocal_118=-1;
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_54.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_54.f_29.f_77[1]);
}
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
settimera(0);
Local_54.f_3=14;
}
break;
case 14:
if(CAM::IS_SCREEN_FADED_OUT() && timera() > 2250){
bVar39=true;
if(iLocal_157){
STREAMING::REQUEST_MODEL(iLocal_158);
if(STREAMING::HAS_MODEL_LOADED(iLocal_158)){
iVar40=VEHICLE::CREATE_VEHICLE(iLocal_158, Local_54.f_29.f_70[0 /*3*/], Local_54.f_29.f_77[0], 1, 1, 0);
if(iLocal_158==joaat("windsor")){
VEHICLE::SET_VEHICLE_LIVERY(iVar40, 0);
}
if(ENTITY::DOES_ENTITY_EXIST(iVar40) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar40, 0)){
PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar40, -1);
VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar40, 0f);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_158);
if(func_123(iLocal_158)){
switch (iLocal_158){
case joaat("marshall"):
VEHICLE::SET_VEHICLE_LIVERY(iVar40, bLocal_109);
break;
}}
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar40);
}
iLocal_157=0;
}
else{
bVar39=false;
}}
if(!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
}elseif(STREAMING::IS_NEW_LOAD_SCENE_LOADED()){
}else{
bVar39=false;
}
if(bVar39){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_166) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166, 0)){
iVar41=func_52(24);
if(func_343(&Local_139, 24)){
func_338(&Local_139, func_536());
if(ENTITY::DOES_ENTITY_EXIST(iVar41)){
VEHICLE::DELETE_VEHICLE(&iVar41);
}}
if(Local_54.f_0==21){
MISC::CLEAR_AREA(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
ENTITY::SET_ENTITY_COORDS(iLocal_166, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iLocal_166, 154.4846f);
func_336(iLocal_166, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
}elseif(Local_54.f_0==22){
MISC::CLEAR_AREA(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
ENTITY::SET_ENTITY_COORDS(iLocal_166, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iLocal_166, 319.6985f);
func_336(iLocal_166, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
}elseif(Local_54.f_0==23){
MISC::CLEAR_AREA(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
ENTITY::SET_ENTITY_COORDS(iLocal_166, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iLocal_166, 270.8741f);
func_336(iLocal_166, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
}
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_166, 1084227584);
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0)){
ENTITY::SET_ENTITY_COORDS(iVar2, Local_81.f_66[1 /*3*/], 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iVar2, Local_54.f_29.f_77[0]);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 1084227584);
if((iLocal_158==joaat("monster") || iLocal_158==joaat("marshall")) || iLocal_158==joaat("rhino")){
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar2, 0);
}else{
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar2, 1);
}
if(PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID())){
PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0, 0, -1);
PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
}
AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar2, 1);
func_282(func_536(), &iVar2, 3, 1);
}
CAM::DO_SCREEN_FADE_IN(800);
func_345(1, 1, 1, 0, 0, 0, 0);
func_344(&(Local_81[3 /*15*/]), &(Local_54.f_110), &(Local_54.f_111));
iLocal_173=0;
iLocal_175=-1;
Local_54.f_3=15;
}
else{
STREAMING::REMOVE_ANIM_DICT(sVar4);
func_329();
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
if(CAM::DOES_CAM_EXIST(Local_54.f_110)){
CAM::SET_CAM_ACTIVE(Local_54.f_110, 0);
CAM::DESTROY_CAM(Local_54.f_110, 0);
}
if(CAM::DOES_CAM_EXIST(Local_54.f_111)){
CAM::SET_CAM_ACTIVE(Local_54.f_111, 0);
CAM::DESTROY_CAM(Local_54.f_111, 0);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_176)){
ENTITY::SET_ENTITY_COLLISION(iLocal_176, 1, 0);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_176, 0);
iLocal_176=0;
}
PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
PLAYER::FORCE_CLEANUP(8);
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_54.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_54.f_29.f_77[1]);
CAM::DO_SCREEN_FADE_IN(800);
settimera(0);
func_332(198.0043f, -999.7775f, -100f, 50f, 0);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
Local_54.f_3=16;
}
if(Local_54.f_3 !=16){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
}
HUD::DISPLAY_HUD(0);
HUD::DISPLAY_RADAR(0);
settimera(0);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
iVar42=PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
iVar43=0;
while (iVar43 < iVar42){
if((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar43]) && !PED::IS_PED_INJURED(uVar0[iVar43])) && PED::IS_PED_GROUP_MEMBER(uVar0[iVar43], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()))){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if((ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0)) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar2) > iVar43){
PED::SET_PED_INTO_VEHICLE(uVar0[iVar43], iVar2, iVar43);
}}else{
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uVar0[iVar43], Local_54.f_29.f_70[1 /*3*/], 0, 0, 1);
}}
iVar43++;
}
PLAYER::FORCE_CLEANUP(8);
iLocal_172=0;
}}
break;
case 15:
bVar44=true;
if(!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
}elseif(STREAMING::IS_NEW_LOAD_SCENE_LOADED()){
}else{
bVar44=false;
}
if(func_331()){
}else{
bVar44=false;
}
if(CAM::DOES_CAM_EXIST(Local_54.f_110) && CAM::IS_CAM_RENDERING(Local_54.f_110)){
if(CAM::IS_CAM_INTERPOLATING(Local_54.f_110)){
bVar44=false;
}
if(IntToFloat(timera()) <=(Local_81[3 /*15*/].f_14 * 1000f)){
bVar44=false;
}}elseif(CAM::DOES_CAM_EXIST(Local_54.f_111) && CAM::IS_CAM_RENDERING(Local_54.f_111)){
if(CAM::IS_CAM_INTERPOLATING(Local_54.f_111)){
bVar44=false;
}
if(IntToFloat(timera()) <=(Local_81[3 /*15*/].f_14 * 1000f)){
bVar44=false;
}}else{
bVar44=false;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
func_321(PLAYER::PLAYER_PED_ID(), Local_81.f_86[1 /*6*/], Local_81.f_66[1 /*3*/], ((Local_81[3 /*15*/].f_14 * 1000f) - 500f), Local_81.f_73[2 /*4*/], 3, &fVar3);
}
if(iLocal_175 < 1 && func_281(PLAYER::PLAYER_PED_ID(), 198.0043f, -999.7775f, -100f, 1) > 55f){
if(iLocal_175==0){
func_332(198.0043f, -999.7775f, -100f, 50f, 0);
}
iLocal_175++;
}
if(bVar44){
settimera(0);
Local_54.f_3=16;
}else{
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
}
break;
case 16:
bVar45=true;
if(IntToFloat(timera()) <=(Local_81.f_61[3] * 1000f)){
bVar45=false;
}
if(bVar45){
Local_54.f_3=17;
}
break;
case 17:
if(INTERIOR::IS_VALID_INTERIOR(Local_54.f_112)){
INTERIOR::UNPIN_INTERIOR(Local_54.f_112);
}
StringCopy(&Global_39672, "", 32);
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
STREAMING::NEW_LOAD_SCENE_STOP();
}
func_280(47, 1);
func_278(47, 1);
Global_77479.f_577=0;
if(CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()){
CAM::DO_SCREEN_FADE_IN(250);
}
settimera(0);
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
if(CAM::DOES_CAM_EXIST(Local_54.f_110)){
CAM::SET_CAM_ACTIVE(Local_54.f_110, 0);
CAM::DESTROY_CAM(Local_54.f_110, 0);
}
if(CAM::DOES_CAM_EXIST(Local_54.f_111)){
CAM::SET_CAM_ACTIVE(Local_54.f_111, 0);
CAM::DESTROY_CAM(Local_54.f_111, 0);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_176)){
ENTITY::SET_ENTITY_COLLISION(iLocal_176, 1, 0);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_176, 0);
iLocal_176=0;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0)){
ENTITY::SET_ENTITY_COORDS(iVar2, Local_81.f_73[2 /*4*/], 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iVar2, Local_81.f_73[2 /*4*/].f_3);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 1084227584);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
}}
HUD::DISPLAY_HUD(1);
HUD::DISPLAY_RADAR(1);
func_345(0, 1, 1, 0, 0, 0, 0);
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
if(iLocal_153 > 0){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iLocal_153, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
}
if(((ENTITY::DOES_ENTITY_EXIST(iLocal_166) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_166)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_166, 0)) && iLocal_166 !=func_52(24)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_166);
}
MISC::CLEAR_BIT(&(Local_129.f_9), 25);
iLocal_170=0;
Local_54.f_3=18;
break;
case 18:
if(CAM::IS_SCREEN_FADED_IN()){
Local_54.f_3=0;
}
break;
}}else{
if(Global_77479.f_577){
func_280(47, 1);
func_278(47, 1);
Global_77479.f_577=0;
}
Local_54.f_3=0;
if(iLocal_113 !=-1){
func_72(&iLocal_113);
}}
if(Global_77479.f_577){
HUD::HIDE_MINIMAP_EXTERIOR_MAP_THIS_FRAME();
func_277();
func_79(0);
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
PAD::SET_INPUT_EXCLUSIVE(2, 202);
PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
PAD::DISABLE_CONTROL_ACTION(0, 157, 1);
PAD::DISABLE_CONTROL_ACTION(0, 158, 1);
PAD::DISABLE_CONTROL_ACTION(0, 159, 1);
PAD::DISABLE_CONTROL_ACTION(0, 160, 1);
PAD::DISABLE_CONTROL_ACTION(0, 161, 1);
PAD::DISABLE_CONTROL_ACTION(0, 162, 1);
PAD::DISABLE_CONTROL_ACTION(0, 163, 1);
PAD::DISABLE_CONTROL_ACTION(0, 164, 1);
PAD::DISABLE_CONTROL_ACTION(0, 165, 1);
PAD::DISABLE_CONTROL_ACTION(0, 14, 1);
PAD::DISABLE_CONTROL_ACTION(0, 15, 1);
PAD::DISABLE_CONTROL_ACTION(0, 53, 1);
PAD::DISABLE_CONTROL_ACTION(0, 54, 1);
PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
PAD::DISABLE_CONTROL_ACTION(0, 38, 1);
PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
PAD::DISABLE_CONTROL_ACTION(0, 102, 1);
PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
PAD::DISABLE_CONTROL_ACTION(0, 46, 1);
PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
}
if(!bVar1 && Local_54.f_2==0){
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_163)){
if((((func_266("WEB_VEH_INV") || func_266("WEB_VEH_FULL")) || func_266("CAR_GAR_05")) || func_266("CAR_GAR_06")) || func_266("CAR_GAR_EXIT")){
HUD::CLEAR_HELP(1);
}
StringCopy(&cLocal_163, "", 16);
}}}}


void func_277(){
Global_23251.f_6=1;
}


void func_278(int iParam0, bool bParam1){
struct<2> Var0;
Var0={
func_279(iParam0) 
};
if(Var0.f_1==-1){
return;
}
if(bParam1){
MISC::SET_BIT(&(Global_38726[Var0.f_1]), Var0.f_0);
}else{
MISC::CLEAR_BIT(&(Global_38726[Var0.f_1]), Var0.f_0);
}}


struct<2> func_279(int iParam0){
struct<2> Var0;
Var0.f_0=(iParam0 % 32);
Var0.f_1=(iParam0 / 32);
if(Var0.f_1 >=8){
Var0.f_0=-1;
Var0.f_1=-1;
}
return Var0;
}


void func_280(int iParam0, bool bParam1){
struct<2> Var0;
Var0={
func_279(iParam0) 
};
if(Var0.f_1==-1){
return;
}
if(bParam1){
MISC::SET_BIT(&(Global_38717[Var0.f_1]), Var0.f_0);
}else{
MISC::CLEAR_BIT(&(Global_38717[Var0.f_1]), Var0.f_0);
}}


float func_281(int iParam0, struct<3> Param1, int iParam2){
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


void func_282(int iParam0, int iParam1, int iParam2, bool bParam3){
var uVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
var uVar5;
var uVar6;
if((func_25(iParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0)){
if(iParam2 > Global_113810.f_2366.f_539.f_2407){
return;
}
if(iParam2==0){
}elseif(iParam2==1){
}elseif(iParam2==2){
}elseif(iParam2==3){
func_31(*iParam1, iParam0);
}
if(VEHICLE::GET_NUM_MOD_KITS(*iParam1) !=0){
VEHICLE::SET_VEHICLE_MOD_KIT(*iParam1, 0);
}
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/]=ENTITY::GET_ENTITY_MODEL(*iParam1);
if(VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*iParam1, &iVar1)){
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1=ENTITY::GET_ENTITY_MODEL(iVar1);
}
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2=VEHICLE::GET_VEHICLE_DIRT_LEVEL(*iParam1);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3=ENTITY::GET_ENTITY_HEALTH(*iParam1);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 1);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 2);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 3);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 4);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 5);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 6);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 7);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 8);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 9);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 10);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 11);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 12);
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam1, 0)){
iVar2=VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*iParam1);
if(iVar2==0 || iVar2==5){
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24=1;
}else{
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24=0;
}}else{
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24=0;
}
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25=AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
StringCopy(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam1), 16);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam1);
VEHICLE::GET_VEHICLE_COLOURS(*iParam1, &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*iParam1, &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*iParam1, &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88=VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*iParam1);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87=VEHICLE::GET_VEHICLE_WINDOW_TINT(*iParam1);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89=VEHICLE::GET_VEHICLE_LIVERY(*iParam1);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90=VEHICLE::GET_VEHICLE_WHEEL_TYPE(*iParam1);
VEHICLE::GET_VEHICLE_NEON_COLOUR(*iParam1, &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 2)){
MISC::SET_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 3)){
MISC::SET_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 0)){
MISC::SET_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 1)){
MISC::SET_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
}
Global_113810.f_2366.f_539.f_4317[iParam0]=10;
if(VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) >=0 && func_285(*iParam1, 0, &uVar0)){
func_34(iParam1, &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
if(bParam3){
Global_113810.f_20121[iParam0 /*43*/].f_40=1;
Global_113810.f_20121[iParam0 /*43*/]=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
Global_113810.f_20121[iParam0 /*43*/].f_3=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
Global_113810.f_20121[iParam0 /*43*/].f_4=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
Global_113810.f_20121[iParam0 /*43*/].f_5=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
Global_113810.f_20121[iParam0 /*43*/].f_6=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
Global_113810.f_20121[iParam0 /*43*/].f_10=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
Global_113810.f_20121[iParam0 /*43*/].f_16=!Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
Global_113810.f_20121[iParam0 /*43*/].f_19={
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 
};
Global_113810.f_20121[iParam0 /*43*/].f_23=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
Global_113810.f_20121[iParam0 /*43*/].f_7=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
Global_113810.f_20121[iParam0 /*43*/].f_8=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
Global_113810.f_20121[iParam0 /*43*/].f_9=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
Global_113810.f_20121[iParam0 /*43*/].f_11=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
Global_113810.f_20121[iParam0 /*43*/].f_12=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
Global_113810.f_20121[iParam0 /*43*/].f_13=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
Global_113810.f_20121[iParam0 /*43*/].f_14=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
Global_113810.f_20121[iParam0 /*43*/].f_15=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
Global_113810.f_20121[iParam0 /*43*/].f_18=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
Global_113810.f_20121[iParam0 /*43*/].f_17=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
Global_113810.f_20121[iParam0 /*43*/].f_24=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 11) + 1;
Global_113810.f_20121[iParam0 /*43*/].f_25=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 12) + 1;
Global_113810.f_20121[iParam0 /*43*/].f_26=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 4) + 1;
Global_113810.f_20121[iParam0 /*43*/].f_27=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 23) + 1;
Global_113810.f_20121[iParam0 /*43*/].f_28=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 14) + 1;
Global_113810.f_20121[iParam0 /*43*/].f_29=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 16) + 1;
Global_113810.f_20121[iParam0 /*43*/].f_30=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 15) + 1;
Global_113810.f_20121[iParam0 /*43*/].f_32=VEHICLE::GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(*iParam1);
Global_113810.f_20121[iParam0 /*43*/].f_33[0]=AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1);
Global_113810.f_20121[iParam0 /*43*/].f_33[1]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 0);
Global_113810.f_20121[iParam0 /*43*/].f_33[2]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 1);
Global_113810.f_20121[iParam0 /*43*/].f_33[3]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 2);
Global_113810.f_20121[iParam0 /*43*/].f_33[4]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 3);
Global_113810.f_20121[iParam0 /*43*/].f_39=VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(*iParam1);
Global_113810.f_20121[iParam0 /*43*/].f_31=func_284(*iParam1);
Global_113810.f_20121[iParam0 /*43*/].f_33[0]=AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(*iParam1);
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
func_283(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_113810.f_20121[iParam0 /*43*/].f_1));
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
func_283(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_113810.f_20121[iParam0 /*43*/].f_2));
}}}}

int func_283(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4){
int iVar0;
int iVar1;
char* sVar2;
int iVar3;
int iVar4;
iVar0=0;
while (func_149(iVar0, &sVar2, &iVar1, &iVar3, &iVar4)){
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


float func_284(int iParam0){
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

int func_285(int iParam0, bool bParam1, var uParam2){
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
if((!func_316(iVar0, bParam1, uParam2) && !func_315(PLAYER::PLAYER_ID())) && !func_296(iParam0)){
return 0;
}
if(func_315(PLAYER::PLAYER_ID())){
if(func_294(iVar0)){
return 1;
}else{
return 0;
}}
bVar1=false;
if(func_293(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))){
bVar1=true;
}
if(((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_290(iParam0)) && !bVar1) && !(func_289(ENTITY::GET_ENTITY_MODEL(iParam0)) && func_286(PLAYER::PLAYER_ID()))){
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
if((func_65(iParam0) && ENTITY::GET_ENTITY_MODEL(iParam0) !=joaat("sentinel2")) && ENTITY::GET_ENTITY_MODEL(iParam0) !=joaat("issi2")){
*uParam2=2;
return 0;
}}
return 1;
}

int func_286(int iParam0){
if(iParam0 !=func_158()){
if(func_288(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_287(Global_2657704[iParam0 /*463*/].f_321.f_7)==11;
}}}
return 0;
}

int func_287(int iParam0){
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

int func_288(int iParam0, bool bParam1, bool bParam2){
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

int func_289(int iParam0){
if(((iParam0==joaat("mule4") || iParam0==joaat("pounder2")) || iParam0==joaat("speedo4")) || iParam0==joaat("terbyte")){
return 1;
}
return 0;
}

int func_290(int iParam0){
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
if(func_292(PLAYER::PLAYER_ID())){
return 1;
}
break;
case joaat("minitank"):
case joaat("burrito2"):
return 1;
case joaat("brickade2"):
if(func_291(PLAYER::PLAYER_ID())){
return 1;
}
break;
case joaat("journey2"):
return 1;
break;
}
return 0;
}

int func_291(int iParam0){
if(iParam0 !=func_158()){
if(func_288(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_287(Global_2657704[iParam0 /*463*/].f_321.f_7)==26;
}}}
return 0;
}

int func_292(int iParam0){
if(iParam0 !=func_158()){
if(func_288(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_287(Global_2657704[iParam0 /*463*/].f_321.f_7)==13;
}}}
return 0;
}

int func_293(int iParam0){
if(iParam0 !=func_158()){
if(func_288(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_287(Global_2657704[iParam0 /*463*/].f_321.f_7)==7;
}}}
return 0;
}

int func_294(int iParam0){
bool bVar0;
if(iParam0==joaat("oppressor2")){
return 0;
}
bVar0=false;
if((iParam0==joaat("riot2") || iParam0==joaat("chernobog")) || iParam0==joaat("khanjali")){
if(!Global_262145.f_34153){
bVar0=true;
}}
if((((!func_295(PLAYER::PLAYER_ID()) && iParam0 !=joaat("thruster")) && iParam0 !=joaat("avenger")) && iParam0 !=func_43(1)) && !bVar0){
return 0;
}
return 1;
}

int func_295(int iParam0){
if(iParam0 !=func_158()){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_307, 2);
}
return 0;
}

int func_296(int iParam0){
if(func_314(PLAYER::PLAYER_ID()) || func_313(PLAYER::PLAYER_ID())){
if(func_297(iParam0)){
return 1;
}}
return 0;
}

int func_297(int iParam0){
if((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 0;
}
if(VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0))){
return 0;
}
if(func_301(iParam0, 0)){
return 1;
}
if(func_300(PLAYER::PLAYER_ID()) && ((((!func_294(ENTITY::GET_ENTITY_MODEL(iParam0)) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("openwheel1"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("openwheel2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("formula"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("formula2")))){
return 0;
}
if(VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("oppressor2"))){
return 0;
}
if(VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("thruster"))){
return 1;
}
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle")){
if(DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle")==NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID())){
if(!func_298(iParam0)){
return 1;
}}}
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Thruster")){
if(DECORATOR::DECOR_GET_INT(iParam0, "Player_Thruster")==NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID())){
if(!func_298(iParam0)){
return 1;
}}}
return 0;
}

int func_298(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_290(iParam0)) || func_299(iVar0)){
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

int func_299(int iParam0){
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

int func_300(int iParam0){
if(iParam0==func_158()){
return 0;
}
if(func_315(iParam0) && Global_2657704[iParam0 /*463*/].f_321.f_10==iParam0){
return 1;
}
return 0;
}

int func_301(int iParam0, bool bParam1){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("technical"):
case joaat("insurgent"):
if(func_303(ENTITY::GET_ENTITY_MODEL(iParam0), 0)){
if(Global_2794162.f_304==iParam0){
return 1;
}elseif(func_302(iParam0) !=-1 && !bParam1){
return 1;
}}
break;
}
return 0;
}

int func_302(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar0=0;
while (iVar0 < 32){
if(Global_2672524.f_221[iVar0]==iParam0){
return iVar0;
}
iVar0++;
}}
return -1;
}

int func_303(int iParam0, int iParam1){
if(iParam1==0){
if(func_312(iParam0, 0)){
return 1;
}}
switch (iParam0){
case joaat("faction"):
case joaat("buccaneer"):
case joaat("chino"):
case joaat("moonbeam"):
case joaat("primo"):
case joaat("voodoo2"):
return func_311();
break;
case joaat("sabregt"):
if(Global_262145.f_14909){
return func_310();
}
break;
case joaat("tornado"):
case joaat("tornado2"):
case joaat("tornado3"):
if(Global_262145.f_14910){
return func_310();
}
break;
case joaat("virgo3"):
if(Global_262145.f_14908){
return func_310();
}
break;
case joaat("minivan"):
if(Global_262145.f_14911){
return func_310();
}
break;
case joaat("slamvan"):
if(Global_262145.f_14913){
return func_310();
}
break;
case joaat("sultan"):
case joaat("banshee"):
return func_309();
break;
case joaat("comet2"):
if(Global_262145.f_19321){
return func_308();
}
break;
case joaat("diablous"):
if(Global_262145.f_19323){
return func_308();
}
break;
case joaat("fcr"):
if(Global_262145.f_19327){
return func_308();
}
break;
case joaat("elegy2"):
if(Global_262145.f_19324){
return func_308();
}
break;
case joaat("nero"):
if(Global_262145.f_19331){
return func_308();
}
break;
case joaat("italigtb"):
if(Global_262145.f_19329){
return func_308();
}
break;
case joaat("specter"):
if(Global_262145.f_19334){
return func_308();
}
break;
case joaat("technical"):
if(Global_262145.f_21280){
return func_307();
}
break;
case joaat("insurgent"):
if(Global_262145.f_21281){
return func_307();
}
break;
case joaat("ratloader"):
case joaat("ratloader2"):
return func_306();
break;
case joaat("glendale"):
if(func_306() || func_305()){
return 1;
}
break;
case joaat("impaler"):
return func_306();
break;
case joaat("issi3"):
return func_306();
break;
case joaat("gargoyle"):
return func_306();
break;
case joaat("dominator"):
return func_306();
break;
case joaat("dominator2"):
return func_306();
break;
case joaat("imperator"):
return func_306();
break;
case joaat("imperator2"):
return func_306();
break;
case joaat("imperator3"):
return func_306();
break;
case joaat("deathbike"):
return func_306();
break;
case joaat("deathbike2"):
return func_306();
break;
case joaat("deathbike3"):
return func_306();
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
return func_306();
break;
case joaat("youga2"):
if(Global_262145.f_29539){
return func_305();
}
break;
case joaat("gauntlet3"):
if(Global_262145.f_29889){
return func_305();
}
break;
case joaat("manana"):
if(Global_262145.f_29538){
return func_305();
}
break;
case joaat("peyote"):
if(Global_262145.f_29888){
return func_305();
}
break;
case joaat("yosemite"):
if(Global_262145.f_29887){
return func_305();
}
break;
}
switch (iParam0){
case joaat("tenf"):
if(Global_262145.f_33358){
return func_304();
}
break;
case joaat("weevil"):
if(Global_262145.f_33357){
return func_304();
}
break;
case joaat("brioso2"):
if(Global_262145.f_33350){
return func_304();
}
break;
case joaat("sentinel3"):
if(Global_262145.f_33359){
return func_304();
}
break;
}
return 0;
}


bool func_304(){
return DLC::IS_DLC_PRESENT(1199590110);
}


bool func_305(){
return DLC::IS_DLC_PRESENT(joaat("mpsum"));
}


bool func_306(){
return DLC::IS_DLC_PRESENT(joaat("mpchristmas2018"));
}


bool func_307(){
return DLC::IS_DLC_PRESENT(joaat("mpgunrunning"));
}


bool func_308(){
return DLC::IS_DLC_PRESENT(joaat("mpimportexport"));
}


bool func_309(){
return DLC::IS_DLC_PRESENT(joaat("mpjanuary2016"));
}


bool func_310(){
return DLC::IS_DLC_PRESENT(joaat("mplowrider2"));
}


bool func_311(){
return DLC::IS_DLC_PRESENT(joaat("mplowrider"));
}

int func_312(int iParam0, int iParam1){
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

int func_313(int iParam0){
if(iParam0 !=func_158()){
if(func_288(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1 && Global_2657704[iParam0 /*463*/].f_321.f_10 !=func_158()){
return func_287(Global_2657704[iParam0 /*463*/].f_321.f_7)==5;
}}}
return 0;
}

int func_314(int iParam0){
if(iParam0 !=func_158()){
if(func_288(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1 && Global_2657704[iParam0 /*463*/].f_321.f_10 !=func_158()){
return func_287(Global_2657704[iParam0 /*463*/].f_321.f_7)==8;
}}}
return 0;
}

int func_315(int iParam0){
if(iParam0 !=func_158()){
if(func_288(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_287(Global_2657704[iParam0 /*463*/].f_321.f_7)==9;
}}}
return 0;
}

int func_316(int iParam0, bool bParam1, var uParam2){
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
if(((((((((((((((((((((iParam0==joaat("caddy") || iParam0==joaat("forklift")) || iParam0==joaat("caddy2")) || iParam0==joaat("crusader")) || iParam0==joaat("tribike")) || iParam0==joaat("tribike2")) || iParam0==joaat("tribike3")) || iParam0==joaat("tractor")) || iParam0==joaat("tractor2")) || iParam0==joaat("mower")) || iParam0==joaat("tornado4")) || iParam0==joaat("docktug")) || iParam0==joaat("stretch")) || iParam0==joaat("bison2")) || iParam0==joaat("bison3")) || iParam0==joaat("benson")) || iParam0==joaat("pounder")) || iParam0==joaat("submersible")) || iParam0==joaat("emperor3")) || iParam0==joaat("dune2")) || iParam0==-897824023) || iParam0==-1983622024){
*uParam2=2;
return 0;
}
bVar0=false;
if(func_293(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))){
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
if(func_317(iParam0)){
*uParam2=2;
return 0;
}}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam0==joaat("insurgent") || iParam0==joaat("insurgent2")){
*uParam2=2;
}}
return 1;
}

int func_317(int iParam0){
switch (iParam0){
case joaat("towtruck"):
case joaat("towtruck2"):
case joaat("forklift"):
return 1;
break;
}
return 0;
}

int func_318(){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(iVar0==Global_77479.f_484[21]){
return 21;
}
if(iVar0==Global_77479.f_484[26]){
return 26;
}
if(iVar0==Global_77479.f_484[29]){
return 29;
}
if(iVar0==Global_77479.f_484[32]){
return 32;
}
if(iVar0==Global_77479.f_484[22]){
return 22;
}
if(iVar0==Global_77479.f_484[27]){
return 27;
}
if(iVar0==Global_77479.f_484[30]){
return 30;
}
if(iVar0==Global_77479.f_484[33]){
return 33;
}
if(iVar0==Global_77479.f_484[23]){
return 23;
}
if(iVar0==Global_77479.f_484[28]){
return 28;
}
if(iVar0==Global_77479.f_484[31]){
return 31;
}
if(iVar0==Global_77479.f_484[34]){
return 34;
}}}
return -1;
}


bool func_319(){
return MISC::GET_GAME_TIMER() <=Global_23390.f_6321 + 100;
}


void func_320(int iParam0){
if((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && iParam0==Global_78384){
Global_113810.f_32752.f_5588=0;
Global_78384=0;
}}

int func_321(int iParam0, struct<4> Param1, var uParam2, var uParam3, struct<3> Param4, float fParam5, struct<4> Param6, int iParam7, float fParam8){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
int iVar4;
struct<3> Var5;
float fVar6;
float fVar7;
float fVar8;
Var0={
Param1 
};
Var1={
Param1.f_3 
};
Var2={
Param4 
};
Var3={
Param1.f_3 
};
if(iLocal_172==0){
iVar4=PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
iLocal_176=iVar4;
VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_176, 1);
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_176, 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_176, 1084227584);
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_176, 1, 1, 0);
if(PED::IS_PED_ON_ANY_BIKE(iParam0)){
PED::GIVE_PED_HELMET(iParam0, 0, 0, -1);
PED::SET_PED_HELMET(iParam0, 1);
}
Var5={
ENTITY::GET_ENTITY_COORDS(iLocal_176, 1) 
};
fLocal_177=(Var5.f_2 - Var0.f_2);
ENTITY::SET_ENTITY_COORDS(iLocal_176, Var0 + Vector(-10f, 0f, 0f), 1, 0, 0, 1);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, 0)){
VEHICLE::SET_VEHICLE_LIGHTS(iLocal_176, 3);
}
iLocal_178=MISC::GET_GAME_TIMER();
iLocal_172=1;
}
if(iLocal_172==1){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_176) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, 0)){
fVar6=to_float(iLocal_178);
fVar7=(fVar6 + fParam5);
fVar8=func_328(to_float(MISC::GET_GAME_TIMER()), fVar6, fVar7);
fVar8=(fVar8 - fVar6);
fVar8=(fVar8 / fParam5);
if(iParam7==1){
fVar8=func_327(fVar8);
}elseif(iParam7==2){
fVar8=func_326(fVar8);
}elseif(iParam7==3){
fVar8=func_324(fVar8);
}
fVar8=(fVar8 * fParam5);
fVar8=(fVar8 + fVar6);
PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_176, func_322(Var0 + Vector(fLocal_177, 0f, 0f), Var2 + Vector(fLocal_177, 0f, 0f), fVar6, fVar7, fVar8), 0, 0, 1);
if(iLocal_173 && !PED::IS_PED_ON_ANY_BIKE(iParam0)){
ENTITY::SET_ENTITY_ROTATION(iLocal_176, func_322((0f - Var1.f_0), (0f - Var1.f_1), (Var1.f_2 + 180f), (0f - Var3.f_0), (0f - Var3.f_1), (Var3.f_2 + 180f), fVar6, fVar7, fVar8), 2, 1);
}else{
if(!PED::IS_PED_INJURED(iParam0)){
if(PED::IS_PED_ON_ANY_BIKE(iParam0)){
PED::SET_PED_RESET_FLAG(iParam0, 236, 1);
PED::SET_PED_RESET_FLAG(iParam0, 309, 1);
}}
ENTITY::SET_ENTITY_ROTATION(iLocal_176, func_322(Var1, Var3, fVar6, fVar7, fVar8), 2, 1);
}
ENTITY::SET_ENTITY_COLLISION(iLocal_176, 0, 0);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_176, 1);
}else{
iLocal_172=2;
return 0;
}
if(to_float(MISC::GET_GAME_TIMER()) > (to_float(iLocal_178) + fParam5) && to_float(MISC::GET_GAME_TIMER()) > ((to_float(iLocal_178) + fParam5) + 2600f)){
iLocal_172=2;
return 0;
}}
if(iLocal_172==2){
PED::SET_PED_RESET_FLAG(iParam0, 236, 0);
PED::SET_PED_RESET_FLAG(iParam0, 309, 0);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_176)){
if(!func_21(Param6, 0f, 0f, 0f, 0)){
ENTITY::SET_ENTITY_COORDS(iLocal_176, Param6, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iLocal_176, Param6.f_3);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_176, 1084227584);
}
ENTITY::SET_ENTITY_COLLISION(iLocal_176, 1, 0);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_176, 0);
iLocal_176=0;
}
if(PED::IS_PED_ON_ANY_BIKE(iParam0)){
PED::REMOVE_PED_HELMET(iParam0, 0);
}
return 1;
}
return 0;
}


Vector3 func__322(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3, float fParam4){
return func_323(Param0.f_0, Param1.f_0, fParam2, fParam3, fParam4), func_323(Param0.f_1, Param1.f_1, fParam2, fParam3, fParam4), func_323(Param0.f_2, Param1.f_2, fParam2, fParam3, fParam4);
}


float func_323(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4){
return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}


float func_324(float fParam0){
float fVar0;
if(fParam0 > 0f){
if(fParam0 < 1f){
fVar0=sin(func_325(((fParam0 * 3.141593f) * 0.5f)));
}else{
fVar0=1f;
}}else{
fVar0=0f;
}
return fVar0;
}


float func_325(float fParam0){
return (fParam0 * 57.29578f);
}


float func_326(float fParam0){
float fVar0;
if(fParam0 > 0f){
if(fParam0 < 1f){
fVar0=(1f - cos(func_325(((fParam0 * 3.141593f) * 0.5f))));
}else{
fVar0=1f;
}}else{
fVar0=0f;
}
return fVar0;
}


float func_327(float fParam0){
float fVar0;
if(fParam0 > 0f){
if(fParam0 < 1f){
fVar0=(0.5f * (1f - cos(func_325((fParam0 * 3.141593f)))));
}else{
fVar0=1f;
}}else{
fVar0=0f;
}
return fVar0;
}


float func_328(float fParam0, float fParam1, float fParam2){
if(fParam0 > fParam2){
return fParam2;
}elseif(fParam0 < fParam1){
return fParam1;
}
return fParam0;
}


void func_329(){
Global_77479.f_553=1;
Global_77479.f_554=0;
}


void func_330(var uParam0){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 < 4){
iVar2=uParam0;
iVar1=(9 + (iVar2 - 21));
if(iVar0 > 0){
iVar2=(iVar2 + 2 + iVar0 * 3);
iVar1=((9 + (iVar2 - 21)) - 2);
}
iLocal_47[iVar2]=Global_113810.f_32752.f_69[iVar1 /*78*/].f_66;
if(iLocal_47[iVar2] !=0){
if(!MISC::IS_BIT_SET(uLocal_46[iVar2], 2)){
STREAMING::REQUEST_MODEL(iLocal_47[iVar2]);
MISC::SET_BIT(&(uLocal_46[iVar2]), 2);
func_540(iVar2);
}}
iVar0++;
}}


bool func_331(){
return !Global_77479.f_553;
}


void func_332(struct<3> Param0, float fParam1, int iParam2){
int iVar0;
iVar0=0;
while (iVar0 < 68){
if(func_64(&(Global_77479.f_555[0 /*21*/]), iVar0)){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_77479.f_555[0 /*21*/], iParam2) <=fParam1){
func_333(iVar0);
}}
iVar0++;
}}


void func_333(int iParam0){
bool bVar0;
if(iParam0==-1){
return;
}
if(func_64(&(Global_77479.f_555[0 /*21*/]), iParam0)){
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
if(((((iParam0==24 && func_70(iParam0, 0)) && Global_78388.f_66==0) && Global_113810.f_32752.f_1958[Global_77479.f_555[0 /*21*/].f_14] !=0) && Global_113810.f_32752.f_1958[Global_77479.f_555[0 /*21*/].f_14] > 3) && (!func_334(0, Global_77479.f_555[0 /*21*/].f_12) || !func_334(1, Global_77479.f_555[0 /*21*/].f_12))){
func_121(&(Global_113810.f_32752.f_69[Global_77479.f_555[0 /*21*/].f_14 /*78*/]), &Global_78388);
Global_78466=Global_113810.f_32752.f_5591;
}
func_542(iParam0, 0);
}}}

int func_334(int iParam0, int iParam1){
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
if(iParam0 < 0 || iParam0 >=func_335(&(Global_113810.f_32752.f_5038[iVar0 /*157*/]))){
return 0;
}
return func_39(Global_113810.f_32752.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0, -1);
}

int func_335(var uParam0){
return *uParam0;
}


void func_336(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4){
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
func_337(iParam3);
Var0.f_9=49;
Var0.f_59=2;
func_32(iParam0, &Var0);
if(func_21(Param1, 0f, 0f, 0f, 0)){
Param1={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
fParam2=ENTITY::GET_ENTITY_HEADING(iParam0);
}
if(iParam3==24){
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) !=joaat("vehicle_gen_controller")){
Global_78467=MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
}}
func_120(iParam3, &Var0, Param1, fParam2, func_49(iParam0));
func_30(iParam3, iParam0, 0);
}}


void func_337(int iParam0){
if(iParam0 !=24 && iParam0 !=25){}
func_122(iParam0);
func_542(iParam0, 0);
}

int func_338(var uParam0, int iParam1){
int iVar0;
if(!func_38(uParam0->f_66)){
return 0;
}
if(ENTITY::DOES_ENTITY_EXIST(Global_78385)){
return 0;
}
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
default:
return 0;
break;
}
if(!func_334(0, iParam1)){
Global_113810.f_32752.f_5592[iVar0]=0;
}elseif(!func_334(1, iParam1)){
Global_113810.f_32752.f_5592[iVar0]=1;
}
func_339(iParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(uParam0->f_66));
func_121(uParam0, &(Global_113810.f_32752.f_5038[iVar0 /*157*/][Global_113810.f_32752.f_5592[iVar0] /*78*/]));
Global_113810.f_32752.f_5592[iVar0]++;
if(Global_113810.f_32752.f_5592[iVar0] >=func_335(&(Global_113810.f_32752.f_5038[iVar0 /*157*/]))){
Global_113810.f_32752.f_5592[iVar0]=0;
}
iVar0=0;
while (iVar0 < 3){
if(Global_100237[iVar0 /*98*/]==uParam0->f_66 && MISC::ARE_STRINGS_EQUAL(&(Global_100237[iVar0 /*98*/].f_27), &(uParam0->f_1))){
Global_100237[iVar0 /*98*/]=0;
}
iVar0++;
}
return 1;
}


void func_339(int iParam0, char* sParam1){
if(!func_25(iParam0)){
return;
}
if(!Global_113810.f_32752.f_5596[iParam0]){
switch (iParam0){
case 0:
func_340("IMPOUND_HELPM", sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), -1, 10000, 1, 0, 0, 0);
break;
case 1:
func_340("IMPOUND_HELPF", sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), -1, 10000, 2, 0, 0, 0);
break;
case 2:
func_340("IMPOUND_HELPT", sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), -1, 10000, 4, 0, 0, 0);
break;
}
Global_113810.f_32752.f_5596[iParam0]=1;
}}


void func_340(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9){
func_341(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}


void func_341(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9){
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
func_342();
}}


void func_342(){
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

int func_343(var uParam0, int iParam1){
if(iParam1==-1){
return 0;
}
if(!func_64(&(Global_77479.f_555[0 /*21*/]), iParam1)){
return 0;
}else{
func_121(&(Global_113810.f_32752.f_69[Global_77479.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
}
return 1;
}

int func_344(var uParam0, var uParam1, var uParam2){
if(CAM::DOES_CAM_EXIST(*uParam1)){
CAM::DESTROY_CAM(*uParam1, 0);
}
if(CAM::DOES_CAM_EXIST(*uParam2)){
CAM::DESTROY_CAM(*uParam2, 0);
}
*uParam1=CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
*uParam2=CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
if(CAM::DOES_CAM_EXIST(*uParam1) && CAM::DOES_CAM_EXIST(*uParam2)){
CAM::SET_CAM_COORD(*uParam1, *uParam0);
CAM::SET_CAM_ROT(*uParam1, uParam0->f_3, 2);
CAM::SET_CAM_FOV(*uParam1, uParam0->f_12);
CAM::SET_CAM_COORD(*uParam2, uParam0->f_6);
CAM::SET_CAM_ROT(*uParam2, uParam0->f_6.f_3, 2);
CAM::SET_CAM_FOV(*uParam2, uParam0->f_12);
CAM::SHAKE_CAM(*uParam1, "HAND_SHAKE", uParam0->f_13);
CAM::SHAKE_CAM(*uParam2, "HAND_SHAKE", uParam0->f_13);
if(uParam0->f_14 > 0.1f){
CAM::SET_CAM_ACTIVE_WITH_INTERP(*uParam2, *uParam1, round((uParam0->f_14 * 1000f)), 1, 1);
}else{
CAM::SET_CAM_ACTIVE(*uParam1, 1);
}
CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
return 1;
}
return 0;
}


void func_345(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
if(bParam0){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
func_350(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20500.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
if(!func_81()){
Global_20500.f_1=3;
}
Global_21845=5;
}
func_349(1, iParam3, iParam2, 0);
Global_63491=1;
Global_75819=1;
Global_78687=1;
}else{
func_350(0);
HUD::THEFEED_RESUME();
Global_63491=0;
if(bParam1){
GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
func_349(0, iParam3, iParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_347(PLAYER::PLAYER_ID())) && !func_96(PLAYER::PLAYER_ID(), 0)) && !func_346()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}}elseif(((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_347(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}
Global_78687=0;
}}


bool func_346(){
return MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

int func_347(int iParam0){
if(func_96(iParam0, 0)){
return 1;
}
if(func_348()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_348(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_349(int iParam0, var uParam1, var uParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && uParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, uParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}


void func_350(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8370, 13);
}else{
MISC::CLEAR_BIT(&Global_8370, 13);
}}

int func_351(int iParam0){
func_64(&(Global_77479.f_555[0 /*21*/]), iParam0);
switch (iParam0){
case 21:
if(Global_77479.f_555[0 /*21*/].f_4==0){
return iParam0;
}
if(!func_352(26)){
return 26;
}
if(!func_352(29)){
return 29;
}
if(!func_352(32)){
return 32;
}
break;
case 22:
if(Global_77479.f_555[0 /*21*/].f_4==0){
return iParam0;
}
if(!func_352(27)){
return 27;
}
if(!func_352(30)){
return 30;
}
if(!func_352(33)){
return 33;
}
break;
case 23:
if(Global_77479.f_555[0 /*21*/].f_4==0){
return iParam0;
}
if(!func_352(28)){
return 28;
}
if(!func_352(31)){
return 31;
}
if(!func_352(34)){
return 34;
}
break;
}
return -1;
}


bool func_352(int iParam0){
return func_70(iParam0, 0);
}


void func_353(int iParam0, bool bParam1){
char* sVar0;
int iVar1;
int iVar2;
sVar0="NULL";
iVar1=0;
sVar0=func_355(iParam0, &iVar1);
if(!MISC::ARE_STRINGS_EQUAL("NONE", sVar0) && iVar1 !=0){
if(bParam1){
if(INTERIOR::IS_INTERIOR_DISABLED(iVar1)){
return;
}
if(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==iVar1){
func_278(iParam0, 1);
return;
}
iVar2=INTERIOR::GET_INTERIOR_FROM_PRIMARY_VIEW();
if(iVar2 !=0 && iVar2==iVar1){
func_278(iParam0, 1);
return;
}}else{
if(!INTERIOR::IS_INTERIOR_DISABLED(iVar1)){
return;
}
if(func_354(iParam0)){
func_278(iParam0, 0);
}}
INTERIOR::DISABLE_INTERIOR(iVar1, bParam1);
if(bParam1){
}}}

int func_354(int iParam0){
struct<2> Var0;
Var0={
func_279(iParam0) 
};
if(Var0.f_1 !=-1 && MISC::IS_BIT_SET(Global_38726[Var0.f_1], Var0.f_0)){
return 1;
}
return 0;
}


var func__355(int iParam0, int iParam1){
struct<5> Var0;
Var0={
func_356(iParam0) 
};
*iParam1=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
return Var0.f_4;
}


struct<5> func_356(int iParam0){
struct<5> Var0;
struct<3> Var1;
switch (iParam0){
case 0:
Var0={
-447.4833f, 280.3197f, 77.5215f 
};
Var0.f_3="v_comedy";
Var0.f_4=Var0.f_3;
break;
case 1:
Var0={
-1906.786f, -573.7576f, 19.0773f 
};
Var0.f_3="v_psycheoffice";
Var0.f_4=Var0.f_3;
break;
case 2:
Var0={
1399.973f, 1148.756f, 113.3336f 
};
Var0.f_3="v_ranch";
Var0.f_4=Var0.f_3;
break;
case 3:
Var0={
-598.6379f, -1608.399f, 26.0108f 
};
Var0.f_3="v_recycle";
Var0.f_4=Var0.f_3;
break;
case 4:
Var0={
-556.5089f, 286.3181f, 81.1763f 
};
Var0.f_3="v_rockclub";
Var0.f_4=Var0.f_3;
break;
case 5:
Var0={
-111.7116f, -11.912f, 69.5196f 
};
Var0.f_3="v_janitor";
Var0.f_4=Var0.f_3;
break;
case 6:
Var0={
1274.934f, -1714.726f, 53.7715f 
};
Var0.f_3="v_lesters";
Var0.f_4=Var0.f_3;
break;
case 7:
Var0={
147.433f, -2201.37f, 3.688f 
};
Var0.f_3="v_torture";
Var0.f_4=Var0.f_3;
break;
case 8:
Var0={
320.9934f, 265.2515f, 82.1221f 
};
Var0.f_3="v_cinema";
Var0.f_4="v_cinema (Vinewood)";
break;
case 9:
Var0={
-1425.564f, -244.3f, 15.8053f 
};
Var0.f_3="v_cinema";
Var0.f_4="v_cinema (Morningwood)";
break;
case 10:
Var0={
377.153f, -717.567f, 10.0536f 
};
Var0.f_3="v_cinema";
Var0.f_4="v_cinema (Downtown)";
break;
case 11:
Var0={
245.1564f, 370.211f, 104.7382f 
};
Var0.f_3="v_epsilonism";
Var0.f_4=Var0.f_3;
break;
case 12:
Var0={
173.1176f, -1003.279f, -99.9999f 
};
Var0.f_3="v_garages";
Var0.f_4=Var0.f_3;
break;
case 13:
Var0={
199.9715f, -999.6678f, -100f 
};
Var0.f_3="v_garagem";
Var0.f_4=Var0.f_3;
break;
case 14:
Var0={
228.6058f, -992.0537f, -99.9999f 
};
Var0.f_3="v_garagel";
Var0.f_3="hei_dlc_garage_high_new";
Var0.f_4=Var0.f_3;
break;
case 15:
Var0={
1854.254f, 3686.739f, 33.2671f 
};
Var0.f_3="v_sheriff";
Var0.f_4=Var0.f_3;
break;
case 16:
Var0={
-444.8907f, 6013.587f, 30.7164f 
};
Var0.f_3="v_sheriff2";
Var0.f_4=Var0.f_3;
break;
case 17:
Var0={
3522.845f, 3707.965f, 19.9918f 
};
Var0.f_3="v_lab";
Var0.f_4=Var0.f_3;
break;
case 18:
Var0={
717.2994f, -974.4271f, 23.9142f 
};
Var0.f_3="v_sweat";
Var0.f_4=Var0.f_3;
break;
case 19:
Var0={
717.299f, -974.4271f, 23.9142f 
};
Var0.f_3="v_sweatempty";
Var0.f_4=Var0.f_3;
break;
case 20:
Var0={
2449.785f, 4983.825f, 45.8106f 
};
Var0.f_3="v_farmhouse";
Var0.f_4=Var0.f_3;
break;
case 22:
Var0={
1087.195f, -1988.445f, 28.649f 
};
Var0.f_3="v_foundry";
Var0.f_4=Var0.f_3;
break;
case 23:
Var0={
982.233f, -2160.382f, 28.4761f 
};
Var0.f_3="v_abattoir";
Var0.f_4=Var0.f_3;
break;
case 21:
Var0={
479.0568f, -1316.825f, 28.2038f 
};
Var0.f_3="v_chopshop";
Var0.f_4=Var0.f_3;
break;
case 24:
Var0={
-1005.663f, -478.3461f, 49.0265f 
};
Var0.f_3="v_58_sol_office";
Var0.f_4=Var0.f_3;
break;
case 25:
Var1={
func_357(1, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (1)";
break;
case 26:
Var1={
func_357(2, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (2)";
break;
case 27:
Var1={
func_357(3, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (3)";
break;
case 28:
Var1={
func_357(4, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (4)";
break;
case 29:
Var1={
func_357(5, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (5)";
break;
case 30:
Var1={
func_357(6, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (6)";
break;
case 31:
Var1={
func_357(7, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (7)";
break;
case 32:
Var0={
Global_1312228[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (8)";
break;
case 33:
Var1={
func_357(35, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (9)";
break;
case 34:
Var1={
func_357(36, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (10)";
break;
case 35:
Var1={
func_357(37, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (11)";
break;
case 36:
Var1={
func_357(38, 0) 
};
Var0={
-20.1f, -580.8f, 91.3f 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (12)";
break;
case 37:
Var1={
func_357(39, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (13)";
break;
case 38:
Var1={
func_357(40, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (14)";
break;
case 39:
Var1={
func_357(41, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (15)";
break;
case 40:
Var1={
func_357(42, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (16)";
break;
case 41:
Var1={
func_357(43, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (17)";
break;
case 42:
Var0={
-470.3754f, -698.5207f, 51.5276f 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (18)";
break;
case 43:
Var0={
-460.6133f, -691.5562f, 69.9067f 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (19)";
break;
case 44:
Var0={
300.633f, -997.4288f, -99.9727f 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (20)";
break;
case 49:
Var0={
-171.3969f, 494.2671f, 134.4935f 
};
Var0.f_3="apa_v_mp_stilts_b";
Var0.f_4="apa_v_mp_stilts_b (1)";
break;
case 50:
Var0={
339.4982f, 434.0887f, 146.2206f 
};
Var0.f_3="apa_v_mp_stilts_b";
Var0.f_4="apa_v_mp_stilts_b (2)";
break;
case 51:
Var0={
-761.3884f, 615.7333f, 140.9805f 
};
Var0.f_3="apa_v_mp_stilts_b";
Var0.f_4="apa_v_mp_stilts_b (3)";
break;
case 52:
Var0={
-678.1752f, 591.0076f, 142.2196f 
};
Var0.f_3="apa_v_mp_stilts_b";
Var0.f_4="apa_v_mp_stilts_b (4)";
break;
case 53:
Var0={
120.0541f, 553.793f, 181.0943f 
};
Var0.f_3="apa_v_mp_stilts_a";
Var0.f_4="apa_v_mp_stilts_a (5)";
break;
case 54:
Var0={
-571.4039f, 655.2008f, 142.6293f 
};
Var0.f_3="apa_v_mp_stilts_a";
Var0.f_4="apa_v_mp_stilts_a (7)";
break;
case 55:
Var0={
-742.2565f, 587.6547f, 143.0577f 
};
Var0.f_3="apa_v_mp_stilts_a";
Var0.f_4="apa_v_mp_stilts_a (8)";
break;
case 56:
Var0={
-857.2222f, 685.051f, 149.6502f 
};
Var0.f_3="apa_v_mp_stilts_a";
Var0.f_4="apa_v_mp_stilts_a (10)";
break;
case 57:
Var0={
-1287.65f, 443.2707f, 94.6919f 
};
Var0.f_3="apa_v_mp_stilts_a";
Var0.f_4="apa_v_mp_stilts_a (12)";
break;
case 58:
Var0={
374.2012f, 416.9688f, 142.5991f 
};
Var0.f_3="apa_v_mp_stilts_a";
Var0.f_4="apa_v_mp_stilts_a (13)";
break;
case 45:
Var0={
-16.29585f, -684.0385f, 33.50832f 
};
Var0.f_3="dt1_03_carpark";
Var0.f_4="dt1_03_carpark";
break;
case 46:
Var0={
341.1f, -1000f, -99.2f 
};
Var0.f_3="v_apart_midspaz";
Var0.f_4="v_apart_midspaz";
break;
case 47:
Var0={
199.9716f, -1018.954f, -100f 
};
Var0.f_3="v_garagem_sp";
Var0.f_4=Var0.f_3;
break;
case 48:
Var0={
-1388.001f, -618.4197f, 30.8196f 
};
Var0.f_3="v_bahama";
Var0.f_4=Var0.f_3;
break;
}
switch (iParam0){
case 59:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_01";
Var0.f_4=Var0.f_3;
break;
case 60:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_02";
Var0.f_4=Var0.f_3;
break;
case 61:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_03";
Var0.f_4=Var0.f_3;
break;
case 62:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_04";
Var0.f_4=Var0.f_3;
break;
case 63:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_05";
Var0.f_4=Var0.f_3;
break;
case 64:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_06";
Var0.f_4=Var0.f_3;
break;
case 65:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_07";
Var0.f_4=Var0.f_3;
break;
case 66:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_08";
Var0.f_4=Var0.f_3;
break;
case 67:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_01";
Var0.f_4=Var0.f_3;
break;
case 68:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_02";
Var0.f_4=Var0.f_3;
break;
case 69:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_03";
Var0.f_4=Var0.f_3;
break;
case 70:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_04";
Var0.f_4=Var0.f_3;
break;
case 71:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_05";
Var0.f_4=Var0.f_3;
break;
case 72:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_06";
Var0.f_4=Var0.f_3;
break;
case 73:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_07";
Var0.f_4=Var0.f_3;
break;
case 74:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_08";
Var0.f_4=Var0.f_3;
break;
case 75:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_01";
Var0.f_4=Var0.f_3;
break;
case 76:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_02";
Var0.f_4=Var0.f_3;
break;
case 77:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_03";
Var0.f_4=Var0.f_3;
break;
case 78:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_04";
Var0.f_4=Var0.f_3;
break;
case 79:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_05";
Var0.f_4=Var0.f_3;
break;
case 80:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_06";
Var0.f_4=Var0.f_3;
break;
case 81:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_07";
Var0.f_4=Var0.f_3;
break;
case 82:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_08";
Var0.f_4=Var0.f_3;
break;
case 83:
Var1={
func_357(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01a_dlc";
Var0.f_4=Var0.f_3;
break;
case 84:
Var1={
func_357(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01b_dlc";
Var0.f_4=Var0.f_3;
break;
case 85:
Var1={
func_357(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01c_dlc";
Var0.f_4=Var0.f_3;
break;
case 86:
Var1={
func_357(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02a_dlc";
Var0.f_4=Var0.f_3;
break;
case 87:
Var1={
func_357(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02b_dlc";
Var0.f_4=Var0.f_3;
break;
case 88:
Var1={
func_357(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02c_dlc";
Var0.f_4=Var0.f_3;
break;
case 89:
Var1={
func_357(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03a_dlc";
Var0.f_4=Var0.f_3;
break;
case 90:
Var1={
func_357(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03b_dlc";
Var0.f_4=Var0.f_3;
break;
case 91:
Var1={
func_357(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03c_dlc";
Var0.f_4=Var0.f_3;
break;
case 92:
Var1={
func_357(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01a_dlc";
Var0.f_4=Var0.f_3;
break;
case 93:
Var1={
func_357(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01b_dlc";
Var0.f_4=Var0.f_3;
break;
case 94:
Var1={
func_357(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01c_dlc";
Var0.f_4=Var0.f_3;
break;
case 95:
Var1={
func_357(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02a_dlc";
Var0.f_4=Var0.f_3;
break;
case 96:
Var1={
func_357(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02b_dlc";
Var0.f_4=Var0.f_3;
break;
case 97:
Var1={
func_357(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02c_dlc";
Var0.f_4=Var0.f_3;
break;
case 98:
Var1={
func_357(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03a_dlc";
Var0.f_4=Var0.f_3;
break;
case 99:
Var1={
func_357(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03b_dlc";
Var0.f_4=Var0.f_3;
break;
case 100:
Var1={
func_357(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03c_dlc";
Var0.f_4=Var0.f_3;
break;
case 101:
Var1={
func_357(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01a_dlc";
Var0.f_4=Var0.f_3;
break;
case 102:
Var1={
func_357(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01b_dlc";
Var0.f_4=Var0.f_3;
break;
case 103:
Var1={
func_357(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01c_dlc";
Var0.f_4=Var0.f_3;
break;
case 104:
Var1={
func_357(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02a_dlc";
Var0.f_4=Var0.f_3;
break;
case 105:
Var1={
func_357(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02b_dlc";
Var0.f_4=Var0.f_3;
break;
case 106:
Var1={
func_357(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02c_dlc";
Var0.f_4=Var0.f_3;
break;
case 107:
Var1={
func_357(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03a_dlc";
Var0.f_4=Var0.f_3;
break;
case 108:
Var1={
func_357(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03b_dlc";
Var0.f_4=Var0.f_3;
break;
case 109:
Var1={
func_357(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03c_dlc";
Var0.f_4=Var0.f_3;
break;
case 110:
Var1={
func_357(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01a_dlc";
Var0.f_4=Var0.f_3;
break;
case 111:
Var1={
func_357(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01b_dlc";
Var0.f_4=Var0.f_3;
break;
case 112:
Var1={
func_357(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01c_dlc";
Var0.f_4=Var0.f_3;
break;
case 113:
Var1={
func_357(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02a_dlc";
Var0.f_4=Var0.f_3;
break;
case 114:
Var1={
func_357(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02b_dlc";
Var0.f_4=Var0.f_3;
break;
case 115:
Var1={
func_357(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02c_dlc";
Var0.f_4=Var0.f_3;
break;
case 116:
Var1={
func_357(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03a_dlc";
Var0.f_4=Var0.f_3;
break;
case 117:
Var1={
func_357(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03b_dlc";
Var0.f_4=Var0.f_3;
break;
case 118:
Var1={
func_357(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03c_dlc";
Var0.f_4=Var0.f_3;
break;
case 119:
Var1={
func_357(91, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="bkr_biker_dlc_int_01";
Var0.f_4=Var0.f_3;
break;
case 120:
Var1={
func_357(97, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="bkr_biker_dlc_int_02";
Var0.f_4=Var0.f_3;
break;
case 121:
Var1={
func_357(103, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 122:
Var1={
func_357(104, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 123:
Var1={
func_357(105, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 124:
Var1={
func_357(106, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 125:
Var1={
func_357(107, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 126:
Var1={
func_357(108, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 127:
Var1={
func_357(109, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 128:
Var1={
func_357(110, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 129:
Var1={
func_357(111, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 130:
Var1={
func_357(112, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 131:
Var1={
func_357(113, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 132:
Var1={
func_357(114, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 133:
Var1={
func_357(103, 1) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_imptexp_mod_int_01";
Var0.f_4=Var0.f_3;
break;
case 134:
Var1={
func_357(106, 1) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_imptexp_mod_int_01";
Var0.f_4=Var0.f_3;
break;
case 135:
Var1={
func_357(109, 1) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_imptexp_mod_int_01";
Var0.f_4=Var0.f_3;
break;
case 136:
Var1={
func_357(112, 1) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_imptexp_mod_int_01";
Var0.f_4=Var0.f_3;
break;
case 137:
Var0={
938.3077f, -3196.112f, -100f 
};
Var0.f_3="gr_grdlc_int_02";
Var0.f_4=Var0.f_3;
break;
case 138:
Var0={
512.5f, 4852f, -62.6f 
};
Var0.f_3="xm_x17dlc_int_sub";
Var0.f_4=Var0.f_3;
break;
case 139:
Var0={
2047f, 2942f, -61.9f 
};
Var0.f_3="xm_x17dlc_int_facility";
Var0.f_4=Var0.f_3;
break;
case 140:
Var0={
-1047.6f, -232.3503f, 38.0135f 
};
Var0.f_3="v_faceoffice";
Var0.f_4=Var0.f_3;
break;
case 22:
Var0={
1100f, -2004f, 37f 
};
Var0.f_3="v_foundry";
Var0.f_4=Var0.f_3;
break;
case 141:
Var0={
361f, 6306f, -159f 
};
Var0.f_3="xm_x17dlc_int_silo_01";
Var0.f_4=Var0.f_3;
break;
case 142:
Var0={
305f, 6298f, -160f 
};
Var0.f_3="xm_x17dlc_int_silo_02";
Var0.f_4=Var0.f_3;
break;
case 143:
Var0={
244f, 6163f, -159f 
};
Var0.f_3="xm_x17dlc_int_lab";
Var0.f_4=Var0.f_3;
break;
case 144:
Var0={
2168f, 2920f, -84f 
};
Var0.f_3="xm_x17dlc_int_facility2";
Var0.f_4=Var0.f_3;
break;
case 145:
Var0={
446f, 5922f, -158f 
};
Var0.f_3="xm_x17dlc_int_bse_tun";
Var0.f_4=Var0.f_3;
break;
case 146:
Var0={
252f, 5972f, -156f 
};
Var0.f_3="xm_x17dlc_int_base_loop";
Var0.f_4=Var0.f_3;
break;
case 147:
Var0={
682f, 5959f, -152f 
};
Var0.f_3="xm_x17dlc_int_base_ent";
Var0.f_4=Var0.f_3;
break;
case 148:
Var0={
551f, 5939f, -158f 
};
Var0.f_3="xm_x17dlc_int_base";
Var0.f_4=Var0.f_3;
break;
case 149:
Var0={
520.0001f, 4750f, -70f 
};
Var0.f_3="xm_x17dlc_int_01";
Var0.f_4=Var0.f_3;
break;
case 150:
Var0={
-1266.802f, -3014.849f, -49.4903f 
};
Var0.f_3="sm_smugdlc_int_01";
Var0.f_4=Var0.f_3;
break;
case 151:
Var0={
974.9203f, -3000.065f, -40.647f 
};
Var0.f_3="imp_impexp_intwaremed";
Var0.f_4=Var0.f_3;
break;
case 152:
Var0={
969.5376f, -3000.411f, -48.647f 
};
Var0.f_3="imp_impexp_int_02";
Var0.f_4=Var0.f_3;
break;
case 153:
Var0={
1094.997f, -3100.012f, -39.9999f 
};
Var0.f_3="ex_int_warehouse_s_dlc";
Var0.f_4=Var0.f_3;
break;
case 154:
Var0={
1059.995f, -3100f, -39.9999f 
};
Var0.f_3="ex_int_warehouse_m_dlc";
Var0.f_4=Var0.f_3;
break;
case 155:
Var0={
1010.008f, -3100f, -39.9999f 
};
Var0.f_3="ex_int_warehouse_l_dlc";
Var0.f_4=Var0.f_3;
break;
case 156:
Var0={
372.6707f, 405.5235f, 144.5326f 
};
Var0.f_3="apa_v_mp_stilts_a";
Var0.f_4=Var0.f_3;
break;
case 157:
Var0={
-282.0588f, -955.17f, 85.3036f 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4=Var0.f_3;
break;
case 158:
Var0={
342.7946f, -997.4225f, -99.7444f 
};
Var0.f_3="v_apart_midspaz";
Var0.f_4=Var0.f_3;
break;
case 159:
Var0={
260.3268f, -997.4298f, -100.0086f 
};
Var0.f_3="v_studio_lo";
Var0.f_4=Var0.f_3;
break;
case 160:
Var0={
108.2369f, -753.5364f, 233.1523f 
};
Var0.f_3="v_fib01";
Var0.f_4=Var0.f_3;
break;
case 161:
Var0={
135.3226f, -746.3677f, 253.1523f 
};
Var0.f_3="v_fib03";
Var0.f_4=Var0.f_3;
break;
case 162:
Var0={
108.2572f, -753.5342f, 44.7548f 
};
Var0.f_3="v_office_lobby";
Var0.f_4=Var0.f_3;
break;
case 163:
Var0={
228.6161f, -992.053f, -99.9999f 
};
Var0.f_3="heist_dlc_garage_high_new";
Var0.f_4=Var0.f_3;
break;
case 164:
Var0={
575f, 4750f, -60f 
};
Var0.f_3="xm_v_apart_midspaz";
Var0.f_4=Var0.f_3;
break;
case 165:
Var0={
600f, 4750f, -60f 
};
Var0.f_3="xm_v_studio_lo";
Var0.f_4=Var0.f_3;
break;
case 166:
Var0={
630f, 4750f, -60f 
};
Var0.f_3="xm_v_garagem";
Var0.f_4=Var0.f_3;
break;
case 167:
Var0={
1257f, 4796.7f, -39.1f 
};
Var0.f_3="xm_x17dlc_int_tun_entry";
Var0.f_4=Var0.f_3;
break;
case 168:
Var0={
694.4f, 5898.9f, -152.3f 
};
Var0.f_3="xm_x17dlc_int_tun_straight";
Var0.f_4=Var0.f_3;
break;
case 169:
Var0={
1121.8f, 5516.3f, -101.3f 
};
Var0.f_3="xm_x17dlc_int_tun_straight";
Var0.f_4=Var0.f_3;
break;
case 170:
Var0={
1279.6f, 5233.2f, -80.3f 
};
Var0.f_3="xm_x17dlc_int_tun_straight";
Var0.f_4=Var0.f_3;
break;
case 171:
Var0={
1158.6f, 5467.1f, -101.3f 
};
Var0.f_3="xm_x17dlc_int_tun_slope_flat";
Var0.f_4=Var0.f_3;
break;
case 172:
Var0={
705.9f, 5838.5f, -152.3f 
};
Var0.f_3="xm_x17dlc_int_tun_slope_flat";
Var0.f_4=Var0.f_3;
break;
case 173:
Var0={
1316.5f, 5184f, -80.3f 
};
Var0.f_3="xm_x17dlc_int_tun_slope_flat";
Var0.f_4=Var0.f_3;
break;
case 174:
Var0={
1248f, 5276.1f, -80.3f 
};
Var0.f_3="xm_x17dlc_int_tun_flat_slope";
Var0.f_4=Var0.f_3;
break;
case 175:
Var0={
1090.2f, 5559.2f, -101.3f 
};
Var0.f_3="xm_x17dlc_int_tun_flat_slope";
Var0.f_4=Var0.f_3;
break;
case 176:
Var0={
1261f, 4808.6f, -39.3f 
};
Var0.f_3="xm_x17dlc_int_tun_flat_slope";
Var0.f_4=Var0.f_3;
break;
case 177:
Var0={
721.8f, 5781.4f, -146.7f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_r";
Var0.f_4=Var0.f_3;
break;
case 178:
Var0={
780.8f, 5703.4f, -136.7f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_r";
Var0.f_4=Var0.f_3;
break;
case 179:
Var0={
868.1f, 5659.2f, -126.7f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_r";
Var0.f_4=Var0.f_3;
break;
case 180:
Var0={
1218.2f, 5321.2f, -85.7f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_r";
Var0.f_4=Var0.f_3;
break;
case 181:
Var0={
1278.5f, 4859.7f, -44.7f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_r";
Var0.f_4=Var0.f_3;
break;
case 182:
Var0={
1187.2f, 5419.8f, -96.4f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_l";
Var0.f_4=Var0.f_3;
break;
case 183:
Var0={
1344.7f, 5136.4f, -75.4f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_l";
Var0.f_4=Var0.f_3;
break;
case 184:
Var0={
1363.4f, 5039.5f, -65.4f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_l";
Var0.f_4=Var0.f_3;
break;
case 185:
Var0={
1049.3f, 5602.1f, -107.4f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_l";
Var0.f_4=Var0.f_3;
break;
case 186:
Var0={
1337.8f, 4944.3f, -55.4f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_l";
Var0.f_4=Var0.f_3;
break;
case 187:
Var0={
961.5f, 5646.9f, -117.4f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_l";
Var0.f_4=Var0.f_3;
break;
case 188:
Var0={
345.0041f, 4842.001f, -59.9997f 
};
Var0.f_3="xm_x17dlc_int_02";
Var0.f_4=Var0.f_3;
break;
case 189:
Var0={
279.9322f, -1337.49f, 23.7419f 
};
Var0.f_3="v_coroner";
Var0.f_4=Var0.f_3;
break;
case 190:
Var0={
-1604.664f, -3012.583f, -79.9999f 
};
Var0.f_3="ba_dlc_int_01_ba";
Var0.f_4=Var0.f_3;
break;
case 191:
case 212:
Var0={
-1505.783f, -3012.587f, -79.9999f 
};
Var0.f_3="ba_dlc_int_02_ba";
Var0.f_4=Var0.f_3;
break;
case 192:
Var0={
-630.4205f, -236.7843f, 37.057f 
};
Var0.f_3="V_JEWEL2";
Var0.f_4=Var0.f_3;
break;
case 193:
Var0={
2800f, -3800f, 100f 
};
Var0.f_3="xs_x18_int_01";
Var0.f_4=Var0.f_3;
break;
case 194:
Var0={
2800f, -3942f, 182.5f 
};
Var0.f_3="xs_arena_vip";
Var0.f_4=Var0.f_3;
break;
break;
case 195:
Var0={
1049.6f, -3196.6f, -38.5f 
};
Var0.f_3="bkr_biker_dlc_int_ware02";
Var0.f_4=Var0.f_3;
break;
case 223:
Var0={
2920f, 4470f, -100f 
};
Var0.f_3="sf_dlc_warehouse_sec";
Var0.f_4=Var0.f_3;
break;
case 196:
Var0={
1093.6f, -3196.6f, -38.5f 
};
Var0.f_3="bkr_biker_dlc_int_ware03";
Var0.f_4=Var0.f_3;
break;
case 197:
Var0={
1009.5f, -3196.6f, -38.5f 
};
Var0.f_3="bkr_biker_dlc_int_ware01";
Var0.f_4=Var0.f_3;
break;
case 198:
Var0={
1100f, 245f, -49f 
};
Var0.f_3="vw_dlc_casino_main";
Var0.f_4=Var0.f_3;
break;
case 199:
Var0={
1380f, 200f, -50f 
};
Var0.f_3="vw_dlc_casino_carpark";
Var0.f_4=Var0.f_3;
break;
case 200:
Var0={
976.6364f, 70.29476f, 115.1641f 
};
Var0.f_3="vw_dlc_casino_apart";
Var0.f_4=Var0.f_3;
break;
case 201:
Var0={
1295f, 230f, -50f 
};
Var0.f_3="vw_dlc_casino_garage";
Var0.f_4=Var0.f_3;
break;
case 202:
Var0={
2479.3f, -273.9f, -58f 
};
Var0.f_3="ch_DLC_Casino_Heist";
Var0.f_4=Var0.f_3;
break;
case 203:
Var0={
2730f, -380f, -49f 
};
Var0.f_3="ch_DLC_Arcade";
Var0.f_4=Var0.f_3;
break;
case 204:
Var0={
2800f, -380f, -48.5f 
};
Var0.f_3="ch_DLC_Plan";
Var0.f_4=Var0.f_3;
break;
case 205:
Var0={
2497.7f, -312.8f, -69.9f 
};
Var0.f_3="ch_DLC_Tunnel";
Var0.f_4=Var0.f_3;
break;
case 206:
Var0={
2523.4f, -270f, -58.7f 
};
Var0.f_3="ch_DLC_Casino_Back";
Var0.f_4=Var0.f_3;
break;
case 207:
Var0={
2504.4f, -257.2f, -39.1f 
};
Var0.f_3="ch_DLC_Casino_Hotel";
Var0.f_4=Var0.f_3;
break;
case 208:
Var0={
2554f, -281.4f, -64.7f 
};
Var0.f_3="ch_DLC_Casino_Loading";
Var0.f_4=Var0.f_3;
break;
case 209:
Var0={
2488.3f, -267.4f, -70.6f 
};
Var0.f_3="ch_DLC_Casino_Vault";
Var0.f_4=Var0.f_3;
break;
case 210:
Var0={
2519.9f, -255.3f, -24.1f 
};
Var0.f_3="ch_DLC_Casino_Utility";
Var0.f_4=Var0.f_3;
break;
case 211:
Var0={
2572.9f, -253.4f, -64.7f 
};
Var0.f_3="ch_dlc_casino_shaft";
Var0.f_4=Var0.f_3;
break;
case 213:
Var0={
1103.562f, -3000f, -40f 
};
Var0.f_3="gr_grdlc_int_01";
Var0.f_4=Var0.f_3;
break;
case 214:
Var0={
1210f, 1857f, -50f 
};
Var0.f_3="tr_Tuner_MethLab_1";
Var0.f_4=Var0.f_3;
break;
case 215:
Var0={
1569f, -2130f, -50f 
};
Var0.f_3="tr_Tuner_MethLab_1";
Var0.f_4=Var0.f_3;
break;
case 216:
Var0={
839f, 2176f, -50f 
};
Var0.f_3="tr_Tuner_MethLab_1";
Var0.f_4=Var0.f_3;
break;
case 217:
Var0={
982f, -143f, -50f 
};
Var0.f_3="tr_Tuner_MethLab_1";
Var0.f_4=Var0.f_3;
break;
case 218:
Var0={
-2000f, 1113.4f, 25.7f 
};
Var0.f_3="tr_tuner_car_meet";
Var0.f_4=Var0.f_3;
break;
case 219:
Var0={
-1350f, 160f, -99.2f 
};
Var0.f_3="tr_tuner_mod_garage";
Var0.f_4=Var0.f_3;
break;
case 220:
Var0={
1.1f, -705.6f, 16.1f 
};
Var0.f_3="finbank";
Var0.f_4=Var0.f_3;
break;
case 221:
Var0={
-1010f, -70f, -99.4f 
};
Var0.f_3="sf_dlc_studio_sec";
Var0.f_4=Var0.f_3;
break;
case 222:
Var0={
1550f, 250f, -50f 
};
Var0.f_3="h4_dlc_int_02_h4";
Var0.f_4=Var0.f_3;
break;
case 224:
Var0={
-935.7f, -2992.2f, 13.9f 
};
Var0.f_3="v_hanger";
Var0.f_4=Var0.f_3;
break;
case 225:
Var0={
730f, -2990f, -39f 
};
Var0.f_3="imp_imptexp_mod_int_01";
Var0.f_4=Var0.f_3;
break;
case 226:
Var0={
152.3f, -1004.4f, -97.8f 
};
Var0.f_3="v_motel_mp";
Var0.f_4=Var0.f_3;
break;
case 227:
Var0={
170f, 5190f, 10f 
};
Var0.f_3="xs_x18_int_mod2";
Var0.f_4=Var0.f_3;
break;
case 228:
Var0={
850f, -3000f, -50f 
};
Var0.f_3="reh_dlc_int_04_sum2";
Var0.f_4=Var0.f_3;
break;
case 229:
Var0={
495f, -2560f, -50f 
};
Var0.f_3="xm3_DLC_INT_04_xm3";
Var0.f_4=Var0.f_3;
break;
case 230:
Var0={
570f, -415.1f, -69.6f 
};
Var0.f_3="xm3_DLC_INT_03_xm3";
Var0.f_4=Var0.f_3;
break;
case 231:
Var0={
984.4f, -95.4f, 76.8f 
};
Var0.f_3="bkr_biker_dlc_int_03";
Var0.f_4=Var0.f_3;
break;
case 232:
Var0={
-880f, -2770f, -49f 
};
Var0.f_3="M23_1_dlc_int_01_M23_1";
Var0.f_4=Var0.f_3;
break;
case 233:
Var0={
800f, -3000f, -69f 
};
Var0.f_3="reh_dlc_int_03_sum2";
Var0.f_4=Var0.f_3;
break;
return Var0;
}}


struct<6> func_357(int iParam0, bool bParam1){
struct<6> Var0;
switch (iParam0){
case -1:
Var0={
-794.9184f, 339.6266f, 200.4135f 
};
Var0.f_3={
0f, 0f, 180f 
};
break;
case 1:
Var0={
-794.9184f, 339.6266f, 200.4135f 
};
Var0.f_3={
0f, 0f, 180f 
};
break;
case 2:
Var0={
-761.0982f, 317.6259f, 169.5963f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 3:
Var0={
-761.1888f, 317.6295f, 216.0503f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 4:
Var0={
-795.3856f, 340.0188f, 152.7941f 
};
Var0.f_3={
0f, 0f, 180f 
};
break;
case 61:
Var0={
-778.5056f, 332.3779f, 212.1968f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 5:
Var0={
-258.1807f, -950.6853f, 70.0239f 
};
Var0.f_3={
0f, 0f, 70f 
};
break;
case 6:
Var0={
-285.0051f, -957.6552f, 85.3035f 
};
Var0.f_3={
0f, 0f, -110f 
};
break;
case 7:
Var0={
-1471.882f, -530.7484f, 62.34918f 
};
Var0.f_3={
0f, 0f, -145f 
};
break;
case 34:
Var0={
-1471.882f, -530.7484f, 49.72156f 
};
Var0.f_3={
0f, 0f, -145f 
};
break;
case 62:
Var0={
-1463.15f, -540.2369f, 74.2439f 
};
Var0.f_3={
0f, 0f, -145f 
};
break;
case 35:
Var0={
-885.3702f, -451.4775f, 119.327f 
};
Var0.f_3={
0f, 0f, 27.55617f 
};
break;
case 36:
Var0={
-913.0385f, -438.4284f, 114.3997f 
};
Var0.f_3={
0f, 0f, -153.3093f 
};
break;
case 37:
Var0={
-892.5499f, -430.4789f, 88.25368f 
};
Var0.f_3={
0f, 0f, 116.9193f 
};
break;
case 38:
Var0={
-35.0462f, -576.317f, 82.90739f 
};
Var0.f_3={
0f, 0f, 160f 
};
break;
case 39:
Var0={
-10.3788f, -590.7431f, 93.02542f 
};
Var0.f_3={
0f, 0f, 70f 
};
break;
case 65:
Var0={
-22.2487f, -589.1461f, 80.2305f 
};
Var0.f_3={
0f, 0f, 69.88f 
};
break;
case 40:
Var0={
-900.6311f, -376.7462f, 78.27306f 
};
Var0.f_3={
0f, 0f, 26.92611f 
};
break;
case 41:
Var0={
-929.483f, -374.5104f, 102.2329f 
};
Var0.f_3={
0f, 0f, -152.5531f 
};
break;
case 63:
Var0={
-914.4202f, -375.8189f, 114.4743f 
};
Var0.f_3={
0f, 0f, -63f 
};
break;
case 42:
Var0={
-617.1647f, 64.6042f, 100.8196f 
};
Var0.f_3={
0f, 0f, 180f 
};
break;
case 43:
Var0={
-584.2015f, 42.7133f, 86.4187f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 64:
Var0={
-609.5665f, 50.2203f, 98.3998f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 73:
Var0={
-171.3969f, 494.2671f, 134.4935f 
};
Var0.f_3={
0f, 0f, 11f 
};
break;
case 74:
Var0={
339.4982f, 434.0887f, 146.2206f 
};
Var0.f_3={
0f, 0f, -63.5f 
};
break;
case 75:
Var0={
-761.3884f, 615.7333f, 140.9805f 
};
Var0.f_3={
0f, 0f, -71.5f 
};
break;
case 76:
Var0={
-678.1752f, 591.0076f, 142.2196f 
};
Var0.f_3={
0f, 0f, 40.5f 
};
break;
case 77:
Var0={
120.0541f, 553.793f, 181.0943f 
};
Var0.f_3={
0f, 0f, 6f 
};
break;
case 78:
Var0={
-571.4039f, 655.2008f, 142.6293f 
};
Var0.f_3={
0f, 0f, -14.5f 
};
break;
case 79:
Var0={
-742.2565f, 587.6547f, 143.0577f 
};
Var0.f_3={
0f, 0f, -29f 
};
break;
case 80:
Var0={
-857.2222f, 685.051f, 149.6502f 
};
Var0.f_3={
0f, 0f, 4.5f 
};
break;
case 81:
Var0={
-1287.65f, 443.2707f, 94.6919f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 82:
Var0={
374.2012f, 416.9688f, 142.6977f 
};
Var0.f_3={
0f, 0f, -14f 
};
break;
case 83:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 84:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 85:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 86:
Var0={
-1573.098f, -4085.806f, 9.7851f 
};
Var0.f_3={
0f, 0f, 162f 
};
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
Var0={
342.8157f, -997.4288f, -100f 
};
Var0.f_3={
0f, 0f, 0f 
};
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
Var0={
260.3297f, -997.4288f, -100f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 87:
Var0={
-1572.187f, -570.8315f, 109.9879f 
};
Var0.f_3={
0f, 0f, -54f 
};
break;
case 88:
Var0={
-1383.954f, -476.7112f, 73.507f 
};
Var0.f_3={
0f, 0f, 8f 
};
break;
case 89:
Var0={
-138.0029f, -629.739f, 170.2854f 
};
Var0.f_3={
0f, 0f, -84f 
};
break;
case 90:
Var0={
-74.8895f, -817.6883f, 244.8508f 
};
Var0.f_3={
0f, 0f, 70f 
};
break;
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
Var0={
1100.764f, -3159.384f, -34.9342f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
Var0={
1005.806f, -3157.67f, -36.0897f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 103:
if(!bParam1){
Var0={
-1576.571f, -569.7595f, 85.5f 
};
Var0.f_3={
0f, 0f, 36.1f 
};
}else{
Var0={
-1578.022f, -576.4251f, 104.2f 
};
Var0.f_3={
0f, 0f, -144.04f 
};
}
break;
case 104:
if(!bParam1){
Var0={
-1571.254f, -566.5865f, 85.5f 
};
Var0.f_3={
0f, 0f, -53.9f 
};
}else{
Var0={
-1578.022f, -576.4251f, 104.2f 
};
Var0.f_3={
0f, 0f, -144.04f 
};
}
break;
case 105:
if(!bParam1){
Var0={
-1568.098f, -571.9171f, 85.5f 
};
Var0.f_3={
0f, 0f, -143.9f 
};
}else{
Var0={
-1578.022f, -576.4251f, 104.2f 
};
Var0.f_3={
0f, 0f, -144.04f 
};
}
break;
case 106:
if(!bParam1){
Var0={
-1384.518f, -475.8657f, 56.1f 
};
Var0.f_3={
0f, 0f, 98.7f 
};
}else{
Var0={
-1391.245f, -473.9638f, 77.2f 
};
Var0.f_3={
0f, 0f, 98.86f 
};
}
break;
case 107:
if(!bParam1){
Var0={
-1384.538f, -475.8829f, 48.1f 
};
Var0.f_3={
0f, 0f, 98.7f 
};
}else{
Var0={
-1391.245f, -473.9638f, 77.2f 
};
Var0.f_3={
0f, 0f, 98.86f 
};
}
break;
case 108:
if(!bParam1){
Var0={
-1378.994f, -477.2481f, 56.1f 
};
Var0.f_3={
0f, 0f, -81.1f 
};
}else{
Var0={
-1391.245f, -473.9638f, 77.2f 
};
Var0.f_3={
0f, 0f, 98.86f 
};
}
break;
case 109:
if(!bParam1){
Var0={
-186.5683f, -576.4624f, 135f 
};
Var0.f_3={
0f, 0f, 96.16f 
};
}else{
Var0={
-146.6167f, -596.6301f, 166f 
};
Var0.f_3={
0f, 0f, -140f 
};
}
break;
case 110:
if(!bParam1){
Var0={
-113.886f, -564.3862f, 135f 
};
Var0.f_3={
0f, 0f, 110.96f 
};
}else{
Var0={
-146.6167f, -596.6301f, 166f 
};
Var0.f_3={
0f, 0f, -140f 
};
}
break;
case 111:
if(!bParam1){
Var0={
-134.6568f, -635.1774f, 135f 
};
Var0.f_3={
0f, 0f, -9.04f 
};
}else{
Var0={
-146.6167f, -596.6301f, 166f 
};
Var0.f_3={
0f, 0f, -140f 
};
}
break;
case 112:
if(!bParam1){
Var0={
-79.0479f, -822.6393f, 221f 
};
Var0.f_3={
0f, 0f, 70f 
};
}else{
Var0={
-73.904f, -821.6204f, 284f 
};
Var0.f_3={
0f, 0f, -110f 
};
}
break;
case 113:
if(!bParam1){
Var0={
-70.3086f, -819.5784f, 221f 
};
Var0.f_3={
0f, 0f, 160f 
};
}else{
Var0={
-73.904f, -821.6204f, 284f 
};
Var0.f_3={
0f, 0f, -110f 
};
}
break;
case 114:
if(!bParam1){
Var0={
-79.9861f, -818.425f, 221f 
};
Var0.f_3={
0f, 0f, -20f 
};
}else{
Var0={
-73.904f, -821.6204f, 284f 
};
Var0.f_3={
0f, 0f, -110f 
};
}
break;
}
return Var0;
}


void func_358(int iParam0, bool bParam1){
char* sVar0;
int iVar1;
int iVar2;
sVar0="NULL";
iVar1=0;
sVar0=func_355(iParam0, &iVar1);
if(!MISC::ARE_STRINGS_EQUAL("NONE", sVar0) && iVar1 !=0){
if(bParam1 && !INTERIOR::IS_INTERIOR_CAPPED(iVar1)){
if(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==iVar1){
func_280(iParam0, 1);
return;
}
iVar2=INTERIOR::GET_INTERIOR_FROM_PRIMARY_VIEW();
if(iVar2 !=0 && iVar2==iVar1){
func_280(iParam0, 1);
return;
}
INTERIOR::CAP_INTERIOR(iVar1, 1);
}elseif(!bParam1 && INTERIOR::IS_INTERIOR_CAPPED(iVar1)){
if(func_359(iParam0)){
func_280(iParam0, 0);
}
INTERIOR::CAP_INTERIOR(iVar1, 0);
}elseif(!bParam1){
if(func_359(iParam0)){
func_280(iParam0, 0);
}}}}

int func_359(int iParam0){
struct<2> Var0;
Var0={
func_279(iParam0) 
};
if(Var0.f_1 !=-1 && MISC::IS_BIT_SET(Global_38717[Var0.f_1], Var0.f_0)){
return 1;
}
return 0;
}

int func_360(){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || func_351(Local_54.f_0) !=-1){
return 1;
}
return 0;
}

int func_361(float fParam0, float fParam1, float fParam2){
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

int func_362(int iParam0){
switch (iParam0){
case 21:
case 26:
case 29:
case 32:
return 0;
break;
case 23:
case 28:
case 31:
case 34:
return 2;
break;
case 22:
case 27:
case 30:
case 33:
return 1;
break;
}
return 145;
}

int func_363(int iParam0, var uParam1){
uParam1->f_73[1 /*4*/]={
194.674f, -1026.984f, -100f 
};
uParam1->f_73[1 /*4*/].f_3=285f;
*(uParam1[2 /*15*/])={
198.9908f, -1025.956f, -98.8981f 
};
(uParam1[2 /*15*/])->f_3={
-4.5679f, -0.0266f, 110.7275f 
};
(uParam1[2 /*15*/])->f_6={
198.6016f, -1026.103f, -98.9313f 
};
(uParam1[2 /*15*/])->f_6.f_3={
-5.3499f, -0.0266f, 110.7275f 
};
(uParam1[2 /*15*/])->f_12=25.2218f;
(uParam1[2 /*15*/])->f_13=0.2f;
(uParam1[2 /*15*/])->f_14=3.5f;
uParam1->f_61[2]=0f;
switch (iParam0){
case 21:
*(uParam1[0 /*15*/])={
-84.4891f, 95.2463f, 72.7397f 
};
(uParam1[0 /*15*/])->f_3={
-1.0236f, 0.0007f, -126.7439f 
};
(uParam1[0 /*15*/])->f_6={
-84.1568f, 94.9229f, 72.7318f 
};
(uParam1[0 /*15*/])->f_6.f_3={
-1.0236f, 0.0007f, -127.1499f 
};
(uParam1[0 /*15*/])->f_12=25.1687f;
(uParam1[0 /*15*/])->f_13=0.2f;
(uParam1[0 /*15*/])->f_14=3.5f;
uParam1->f_61[0]=0f;
uParam1->f_73[0 /*4*/]={
-62.5434f, 80.2917f, 70.5644f 
};
uParam1->f_73[0 /*4*/].f_3=345f;
*(uParam1[1 /*15*/])={
-61.075f, 81.2555f, 84.5867f 
};
(uParam1[1 /*15*/])->f_3={
-69.9271f, 0f, 103.892f 
};
(uParam1[1 /*15*/])->f_6={
-60.6284f, 81.2036f, 84.5867f 
};
(uParam1[1 /*15*/])->f_6.f_3={
-73.4239f, 0f, 108.7693f 
};
(uParam1[1 /*15*/])->f_12=29.9579f;
(uParam1[1 /*15*/])->f_13=0.2f;
(uParam1[1 /*15*/])->f_14=3f;
uParam1->f_61[1]=1f;
uParam1->f_66[0 /*3*/]={
-60.3859f, 78.4352f, 70.5249f 
};
uParam1->f_86[0 /*6*/]={
-67.0129f, 81.9471f, 70.5249f 
};
uParam1->f_86[0 /*6*/].f_3={
0f, 0f, -117.9206f 
};
*(uParam1[3 /*15*/])={
-61.8119f, 77.3506f, 80.3259f 
};
(uParam1[3 /*15*/])->f_3={
-57.747f, 0f, 34.1968f 
};
(uParam1[3 /*15*/])->f_6={
-61.8119f, 77.3506f, 80.3259f 
};
(uParam1[3 /*15*/])->f_6.f_3={
-48.0008f, 0f, 49.6137f 
};
(uParam1[3 /*15*/])->f_12=30.0324f;
(uParam1[3 /*15*/])->f_13=0.2f;
(uParam1[3 /*15*/])->f_14=3f;
uParam1->f_61[3]=1f;
uParam1->f_86[1 /*6*/]={
-62.6272f, 79.7534f, 70.6161f 
};
uParam1->f_86[1 /*6*/].f_3={
0f, 0f, 65f 
};
uParam1->f_66[1 /*3*/]={
-79.1059f, 87.1091f, 70.5157f 
};
uParam1->f_73[2 /*4*/]={
-88.4f, 70.8f, 72f 
};
uParam1->f_73[2 /*4*/].f_3=150f;
return 1;
break;
case 22:
*(uParam1[0 /*15*/])={
-66.6121f, -1842.122f, 26.6941f 
};
(uParam1[0 /*15*/])->f_3={
3.4131f, -0.0009f, 17.9566f 
};
(uParam1[0 /*15*/])->f_6={
-66.5137f, -1841.616f, 26.7211f 
};
(uParam1[0 /*15*/])->f_6.f_3={
3.1669f, -0.0009f, 18.0384f 
};
(uParam1[0 /*15*/])->f_12=25.1856f;
(uParam1[0 /*15*/])->f_13=0.2f;
(uParam1[0 /*15*/])->f_14=3.5f;
uParam1->f_61[0]=0f;
uParam1->f_73[0 /*4*/]={
-72.5431f, -1820.447f, 25.9424f 
};
uParam1->f_73[0 /*4*/].f_3=140f;
*(uParam1[1 /*15*/])={
-72.7256f, -1823.283f, 41.0951f 
};
(uParam1[1 /*15*/])->f_3={
-81.9335f, 0f, -58.1415f 
};
(uParam1[1 /*15*/])->f_6={
-72.9027f, -1822.998f, 41.0951f 
};
(uParam1[1 /*15*/])->f_6.f_3={
-80.6657f, 0f, -29.6554f 
};
(uParam1[1 /*15*/])->f_12=29.9864f;
(uParam1[1 /*15*/])->f_13=0.2f;
(uParam1[1 /*15*/])->f_14=3f;
uParam1->f_61[1]=1f;
uParam1->f_66[0 /*3*/]={
-76.7939f, -1816.77f, 26.6473f 
};
uParam1->f_86[0 /*6*/]={
-69.2183f, -1823.258f, 25.9421f 
};
uParam1->f_86[0 /*6*/].f_3={
0f, 0f, 49.4214f 
};
*(uParam1[3 /*15*/])={
-70.9492f, -1820.936f, 45.3628f 
};
(uParam1[3 /*15*/])->f_3={
-85.5171f, 0f, 68.3257f 
};
(uParam1[3 /*15*/])->f_6={
-70.9836f, -1821.023f, 45.3628f 
};
(uParam1[3 /*15*/])->f_6.f_3={
-89.4995f, 0f, 68.3257f 
};
(uParam1[3 /*15*/])->f_12=28.4803f;
(uParam1[3 /*15*/])->f_13=0.2f;
(uParam1[3 /*15*/])->f_14=4f;
uParam1->f_61[3]=1f;
uParam1->f_86[1 /*6*/]={
-75.3386f, -1818.249f, 26.0241f 
};
uParam1->f_86[1 /*6*/].f_3={
0f, 0f, -132.7699f 
};
uParam1->f_66[1 /*3*/]={
-63.988f, -1829.39f, 26.423f 
};
uParam1->f_73[2 /*4*/]={
-49.738f, -1830.147f, 25.5591f 
};
uParam1->f_73[2 /*4*/].f_3=317.3589f;
return 1;
break;
case 23:
*(uParam1[0 /*15*/])={
-237.074f, -1170.391f, 23.479f 
};
(uParam1[0 /*15*/])->f_3={
7.619f, 0f, -69.7398f 
};
(uParam1[0 /*15*/])->f_6={
-237.2166f, -1169.672f, 23.4931f 
};
(uParam1[0 /*15*/])->f_6.f_3={
7.619f, 0f, -71.3391f 
};
(uParam1[0 /*15*/])->f_12=40.0015f;
(uParam1[0 /*15*/])->f_13=0.2f;
(uParam1[0 /*15*/])->f_14=3.5f;
uParam1->f_61[0]=0f;
uParam1->f_73[0 /*4*/]={
-218.0289f, -1162.392f, 22.0242f 
};
uParam1->f_73[0 /*4*/].f_3=15f;
*(uParam1[1 /*15*/])={
-219.5507f, -1159.951f, 36.8399f 
};
(uParam1[1 /*15*/])->f_3={
-81.7188f, 0f, 170.4291f 
};
(uParam1[1 /*15*/])->f_6={
-219.1442f, -1160.019f, 36.8399f 
};
(uParam1[1 /*15*/])->f_6.f_3={
-80.5726f, 0f, -168.992f 
};
(uParam1[1 /*15*/])->f_12=30.0319f;
(uParam1[1 /*15*/])->f_13=0.2f;
(uParam1[1 /*15*/])->f_14=4f;
uParam1->f_61[1]=1f;
uParam1->f_66[0 /*3*/]={
-211.6438f, -1162.407f, 22.0234f 
};
uParam1->f_86[0 /*6*/]={
-221.6438f, -1162.407f, 22.0234f 
};
uParam1->f_86[0 /*6*/].f_3={
0f, 0f, -90f 
};
*(uParam1[3 /*15*/])={
-218.5983f, -1159.061f, 31.4452f 
};
(uParam1[3 /*15*/])->f_3={
-62.4689f, 0f, -142.2907f 
};
(uParam1[3 /*15*/])->f_6={
-218.6533f, -1159.067f, 31.4471f 
};
(uParam1[3 /*15*/])->f_6.f_3={
-62.4689f, 0f, -172.3491f 
};
(uParam1[3 /*15*/])->f_12=30f;
(uParam1[3 /*15*/])->f_13=0.2f;
(uParam1[3 /*15*/])->f_14=3f;
uParam1->f_61[3]=1f;
uParam1->f_86[1 /*6*/]={
-214.5676f, -1162.658f, 21.9591f 
};
uParam1->f_86[1 /*6*/].f_3={
0f, 0f, 90f 
};
uParam1->f_66[1 /*3*/]={
-227.7619f, -1162.848f, 22.0085f 
};
uParam1->f_73[2 /*4*/]={
-221.6f, -1156.3f, 22.6f 
};
uParam1->f_73[2 /*4*/].f_3=0f;
return 1;
break;
}
return 0;
}

int func_364(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return Global_98291.f_44==1;
}
return 0;
}


void func_365(){
int iVar0;
struct<5> Var1;
int iVar2;
int iVar3;
int iVar4;
bool bVar5;
char cVar6[16];
float fVar7;
int iVar8;
struct<3> Var9;
bool bVar10;
int iVar11;
int iVar12;
int iVar13;
int iVar14;
if((((((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || !func_25(iLocal_127)){
return;
}
if(!Global_75816){
if(Global_113810.f_32752.f_1982[iLocal_127 /*939*/].f_626[iLocal_141] !=-15){
if(!Global_77479[Global_113810.f_32752.f_1982[iLocal_127 /*939*/].f_313[iLocal_141]]){
if(func_419(func_53(), Global_113810.f_32752.f_1982[iLocal_127 /*939*/].f_626[iLocal_141])){
iVar0=Global_113810.f_32752.f_1982[iLocal_127 /*939*/][iLocal_141];
func_417(iVar0, iLocal_141, iLocal_127);
func_64(&Var1, Global_113810.f_32752.f_1982[iLocal_127 /*939*/].f_313[iLocal_141]);
if(Var1.f_4==0){
}else{
func_542(Global_113810.f_32752.f_1982[iLocal_127 /*939*/].f_313[iLocal_141], 1);
}
Global_113810.f_32752.f_1982[iLocal_127 /*939*/].f_626[iLocal_141]=-15;
}}}
iLocal_141++;
if(iLocal_141 >=312){
iLocal_141=0;
}}
if(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) !=Local_54.f_7 || Local_54.f_2==99){
if(Local_54.f_5 !=-1){
func_72(&(Local_54.f_5));
}
if(Local_54.f_2 > 0){
HUD::CLEAR_HELP(1);
}
Local_54.f_7=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
Local_54.f_5=-1;
Local_54.f_2=0;
Local_54.f_4=0;
if(bLocal_140){
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
HUD::CLEAR_HELP(1);
}
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
if(CAM::DOES_CAM_EXIST(Local_54.f_110)){
CAM::SET_CAM_ACTIVE(Local_54.f_110, 0);
CAM::DESTROY_CAM(Local_54.f_110, 0);
}
if(CAM::DOES_CAM_EXIST(Local_54.f_111)){
CAM::SET_CAM_ACTIVE(Local_54.f_111, 0);
CAM::DESTROY_CAM(Local_54.f_111, 0);
}
ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 0);
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
}
iVar2=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0)){
ENTITY::SET_ENTITY_VISIBLE(iVar2, 1, 0);
ENTITY::FREEZE_ENTITY_POSITION(iVar2, 0);
if(ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar2, 1)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
}}
iVar3=5000;
iVar4=MISC::GET_GAME_TIMER();
while (!CAM::IS_GAMEPLAY_CAM_RENDERING() && (MISC::GET_GAME_TIMER() - iVar4) < iVar3){
wait(0);
}
if(INTERIOR::IS_VALID_INTERIOR(Local_54.f_112)){
INTERIOR::UNPIN_INTERIOR(Local_54.f_112);
}
StringCopy(&Global_39672, "", 32);
if((Local_54.f_0==21 || Local_54.f_0==22) || Local_54.f_0==23){
func_358(47, 1);
func_353(47, 1);
}
STREAMING::NEW_LOAD_SCENE_STOP();
STREAMING::CLEAR_FOCUS();
HUD::DISPLAY_HUD(1);
HUD::DISPLAY_RADAR(1);
func_345(0, 1, 1, 0, 0, 0, 0);
bLocal_140=false;
Global_32541=0;
}}
bVar5=false;
if((((((((((((!bLocal_140 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_54.f_29, Local_54.f_29.f_3, Local_54.f_29.f_6, 0, 1, 0)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && !Local_54.f_29.f_69)) || (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))) || (!bLocal_140 && func_70(Local_54.f_0, 5))) || (!bLocal_140 && PAD::IS_CONTROL_JUST_PRESSED(2, 199))) || (!bLocal_140 && HUD::IS_PAUSE_MENU_ACTIVE())) || !func_415(0)) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID())) || Global_32435) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()))){
if(Local_54.f_2 > 0 && Local_54.f_2 !=90){
iLocal_155=1;
Local_54.f_2=99;
}
bVar5=true;
}
fVar7=20f;
iVar8=3;
switch (Local_54.f_2){
case 0:
if((((Local_54.f_0 !=-1 && func_70(Local_54.f_0, 0)) && !func_70(Local_54.f_0, 5)) && !bLocal_156) && !bVar5){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_54.f_29, Local_54.f_29.f_3, Local_54.f_29.f_6, 0, 1, 0) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
cVar6={
Local_54.f_29.f_63 
};
StringConCat(&cVar6, "_01", 16);
func_267(&(Local_54.f_5), 3, &cVar6, 0, 0, 0, 0);
Local_54.f_2=1;
}}
break;
case 1:
if(func_262(Local_54.f_5, 1)){
if(func_414(iLocal_127) < Local_54.f_29.f_67){
Local_54.f_4=MISC::GET_GAME_TIMER();
func_72(&(Local_54.f_5));
iLocal_124=0;
Local_54.f_2=90;
}else{
iLocal_124=0;
Local_54.f_4=MISC::GET_GAME_TIMER();
func_72(&(Local_54.f_5));
Local_54.f_2=2;
}}
break;
case 2:
iLocal_124++;
if(iLocal_124 >=3){
cVar6={
Local_54.f_29.f_63 
};
StringConCat(&cVar6, "_02", 16);
func_267(&(Local_54.f_5), 3, &cVar6, 0, 0, 0, 0);
Local_54.f_2=3;
}
break;
case 3:
if(func_262(Local_54.f_5, 1)){
if(func_414(iLocal_127) < Local_54.f_29.f_67){
Local_54.f_4=MISC::GET_GAME_TIMER();
Local_54.f_2=90;
}else{
AUDIO::PLAY_SOUND_FRONTEND(-1, "PROPERTY_PURCHASE_MEDIUM", "HUD_PROPERTY_SOUNDSET", 1);
bLocal_140=false;
if((Local_54.f_0==15 || Local_54.f_0==17) || Local_54.f_0==16){
Local_55.f_4=114;
bLocal_140=true;
}elseif(Local_54.f_0==18 || Local_54.f_0==19){
Local_55.f_4=116;
bLocal_140=true;
}elseif(Local_54.f_0==12 || Local_54.f_0==13){
Local_55.f_4=115;
bLocal_140=true;
}elseif((Local_54.f_0==21 || Local_54.f_0==22) || Local_54.f_0==23){
Local_55.f_4=117;
bLocal_140=true;
}
Local_55.f_0=GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
Local_55.f_1=0;
Local_55.f_3=0;
Local_55.f_2=0;
iLocal_142=1;
Global_32541=1;
if(bLocal_140){
if((Local_54.f_0==21 || Local_54.f_0==22) || Local_54.f_0==23){
func_358(47, 0);
func_353(47, 0);
Local_54.f_112=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(198.3659f, -1020.273f, -100f, "v_garagem_sp");
if(INTERIOR::IS_VALID_INTERIOR(Local_54.f_112)){
if(!INTERIOR::IS_INTERIOR_READY(Local_54.f_112)){
INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_54.f_112);
}
StringCopy(&Global_39672, "v_garagem_sp", 32);
}
}
PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
STREAMING::NEW_LOAD_SCENE_STOP();
Local_54.f_4=MISC::GET_GAME_TIMER();
Local_54.f_2=4;
}else{
Local_54.f_2=8;
}
func_72(&(Local_54.f_5));
}}
break;
case 4:
bVar10=true;
if((Local_54.f_0==21 || Local_54.f_0==22) || Local_54.f_0==23){
Local_54.f_112=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(198.3659f, -1020.273f, -100f, "v_garagem_sp");
if((!INTERIOR::IS_VALID_INTERIOR(Local_54.f_112) || INTERIOR::IS_INTERIOR_CAPPED(Local_54.f_112)) || INTERIOR::IS_INTERIOR_DISABLED(Local_54.f_112)){
func_358(47, 0);
func_353(47, 0);
bVar10=false;
}}
if(bVar10){
if(Local_54.f_0==12){
fVar7=95f;
iVar8=2;
}elseif(Local_54.f_0==13){
fVar7=150f;
iVar8=2;
}elseif((Local_54.f_0==21 || Local_54.f_0==22) || Local_54.f_0==23){
fVar7=150f;
iVar8=2;
}
Var9={
cos((Local_54.f_29.f_14.f_3.f_2 + 90f)), sin((Local_54.f_29.f_14.f_3.f_2 + 90f)), 0f 
};
if((Local_54.f_0==21 || Local_54.f_0==22) || Local_54.f_0==23){
if(STREAMING::NEW_LOAD_SCENE_START_SPHERE(200.4651f, -1020.631f, -100f, 50f, 0) || (MISC::GET_GAME_TIMER() - Local_54.f_4) > 3500){
Local_54.f_4=MISC::GET_GAME_TIMER();
Local_54.f_2=5;
}}elseif(STREAMING::NEW_LOAD_SCENE_START(Local_54.f_29.f_14, Var9, fVar7, iVar8) || (MISC::GET_GAME_TIMER() - Local_54.f_4) > 3500){
Local_54.f_4=MISC::GET_GAME_TIMER();
Local_54.f_2=5;
}}
break;
case 5:
if(((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && STREAMING::IS_NEW_LOAD_SCENE_LOADED()) && (!INTERIOR::IS_VALID_INTERIOR(Local_54.f_112) || INTERIOR::IS_INTERIOR_READY(Local_54.f_112))) || (MISC::GET_GAME_TIMER() - Local_54.f_4) > 10000){
Local_54.f_4=MISC::GET_GAME_TIMER();
Local_54.f_2=6;
}
break;
case 6:
if((MISC::GET_GAME_TIMER() - Local_54.f_4) > 1000){
if((ENTITY::DOES_ENTITY_EXIST(iLocal_166) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_166)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_166, 1)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_166);
}
iLocal_166=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if((((ENTITY::DOES_ENTITY_EXIST(iLocal_166) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166, 0)) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_166))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_166))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_166))){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_166)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_166, 0, 0);
}}else{
iLocal_166=0;
}
ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0, 0);
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 16);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 32);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 128);
PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
}
func_345(1, 1, 1, 0, 0, 0, 0);
HUD::CLEAR_PRINTS();
HUD::CLEAR_HELP(1);
Var9={
cos((Local_54.f_29.f_14.f_3.f_2 + 90f)), sin((Local_54.f_29.f_14.f_3.f_2 + 90f)), 0f 
};
if(!Local_54.f_29.f_69){
STREAMING::SET_FOCUS_POS_AND_VEL(Local_54.f_29.f_14, Var9);
}
if(!CAM::DOES_CAM_EXIST(Local_54.f_110)){
Local_54.f_110=CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
}
if(CAM::DOES_CAM_EXIST(Local_54.f_110)){
if(Local_54.f_29.f_69){
INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME("GtaMloRoom001");
}
func_345(1, 1, 1, 0, 0, 0, 0);
func_344(&(Local_54.f_29.f_14), &(Local_54.f_110), &(Local_54.f_111));
}
CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
HUD::DISPLAY_HUD(0);
HUD::DISPLAY_RADAR(0);
STREAMING::NEW_LOAD_SCENE_STOP();
Local_54.f_2=7;
Local_54.f_4=MISC::GET_GAME_TIMER();
func_72(&(Local_54.f_5));
}
break;
case 7:
if((MISC::GET_GAME_TIMER() - Local_54.f_4) < 7000 && !func_412(1000)){
cVar6={
Local_54.f_29.f_63 
};
StringConCat(&cVar6, "_05", 16);
func_265(&cVar6, -1);
if(!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
if(Local_54.f_0==12 || Local_54.f_0==13){
fVar7=85f;
iVar8=2;
}
Var9={
cos((Local_54.f_29.f_29.f_2 + 90f)), sin((Local_54.f_29.f_29.f_2 + 90f)), 0f 
};
STREAMING::NEW_LOAD_SCENE_START(Local_54.f_29.f_29, Var9, fVar7, iVar8);
}}else{
if(CAM::DOES_CAM_EXIST(Local_54.f_110)){
if(Local_54.f_29.f_69){
INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME("GtaMloRoom001");
}
func_345(1, 1, 1, 0, 0, 0, 0);
func_344(&(Local_54.f_29.f_29), &(Local_54.f_110), &(Local_54.f_111));
}
STREAMING::CLEAR_FOCUS();
HUD::CLEAR_HELP(1);
Local_54.f_4=MISC::GET_GAME_TIMER();
Local_54.f_2=8;
}
break;
case 8:
if((MISC::GET_GAME_TIMER() - Local_54.f_4) < 7000 && !func_412(1000)){
cVar6={
Local_54.f_29.f_63 
};
StringConCat(&cVar6, "_06", 16);
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_265(&cVar6, 7000);
}}else{
HUD::CLEAR_HELP(1);
Local_54.f_4=MISC::GET_GAME_TIMER();
Local_54.f_2=9;
}
break;
case 9:
if((MISC::GET_GAME_TIMER() - Local_54.f_4) < 3500 && !func_412(1000)){
cVar6={
Local_54.f_29.f_63 
};
StringConCat(&cVar6, "_03", 16);
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_55.f_0)){
if(Local_55.f_1){
if(!Local_55.f_3){
AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", 1);
Local_55.f_3=1;
}
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_55.f_0, 255, 255, 255, 255, 0);
}else{
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_55.f_0, "SHOW_SHARD_MIDSIZED_MESSAGE");
func_94(&cVar6);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
Local_55.f_1=1;
}}}elseif((MISC::GET_GAME_TIMER() - Local_54.f_4) < 4000 && !func_412(1000)){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_55.f_0)){
if(Local_55.f_2){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_55.f_0, 255, 255, 255, 255, 0);
}else{
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_55.f_0, "SHARD_ANIM_OUT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
Local_55.f_2=1;
}}}else{
if(bLocal_140){
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
if(CAM::DOES_CAM_EXIST(Local_54.f_110)){
CAM::SET_CAM_ACTIVE(Local_54.f_110, 0);
CAM::DESTROY_CAM(Local_54.f_110, 0);
}
if(CAM::DOES_CAM_EXIST(Local_54.f_111)){
CAM::SET_CAM_ACTIVE(Local_54.f_111, 0);
CAM::DESTROY_CAM(Local_54.f_111, 0);
}
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 0);
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
iVar11=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
if((ENTITY::DOES_ENTITY_EXIST(iVar11) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar11, 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar11, 0)){
ENTITY::SET_ENTITY_COORDS(iVar11, Local_54.f_29.f_44, 1, 1, 0, 1);
ENTITY::SET_ENTITY_HEADING(iVar11, Local_54.f_29.f_47);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar11, 1084227584);
}
else{
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_54.f_29.f_44, 1, 1, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_54.f_29.f_47);
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_166) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166, 0)){
iVar12=func_52(24);
if(func_343(&Local_139, 24)){
func_338(&Local_139, func_536());
if(ENTITY::DOES_ENTITY_EXIST(iVar12)){
VEHICLE::DELETE_VEHICLE(&iVar12);
}
}
if(Local_54.f_0==21){
MISC::CLEAR_AREA(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
ENTITY::SET_ENTITY_COORDS(iLocal_166, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iLocal_166, 154.4846f);
func_336(iLocal_166, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
}
elseif(Local_54.f_0==22){
MISC::CLEAR_AREA(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
ENTITY::SET_ENTITY_COORDS(iLocal_166, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iLocal_166, 319.6985f);
func_336(iLocal_166, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
}
elseif(Local_54.f_0==23){
MISC::CLEAR_AREA(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
ENTITY::SET_ENTITY_COORDS(iLocal_166, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iLocal_166, 270.8741f);
func_336(iLocal_166, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
}
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_166, 1084227584);
}
if(ENTITY::DOES_ENTITY_EXIST(iVar11) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar11, 0)){
ENTITY::SET_ENTITY_VISIBLE(iVar11, 1, 0);
ENTITY::FREEZE_ENTITY_POSITION(iVar11, 0);
if(ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar11, 1)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar11);
}}
iVar13=5000;
iVar14=MISC::GET_GAME_TIMER();
while (!CAM::IS_GAMEPLAY_CAM_RENDERING() && (MISC::GET_GAME_TIMER() - iVar14) < iVar13){
wait(0);
}
if(INTERIOR::IS_VALID_INTERIOR(Local_54.f_112)){
INTERIOR::UNPIN_INTERIOR(Local_54.f_112);
}
StringCopy(&Global_39672, "", 32);
if((Local_54.f_0==21 || Local_54.f_0==22) || Local_54.f_0==23){
func_358(47, 1);
func_353(47, 1);
Global_113810.f_32752.f_4800=1;
}
STREAMING::NEW_LOAD_SCENE_STOP();
STREAMING::CLEAR_FOCUS();
HUD::DISPLAY_HUD(1);
HUD::DISPLAY_RADAR(1);
func_345(0, 1, 1, 0, 0, 0, 0);
bLocal_140=false;
Global_32541=0;
}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_55.f_0)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Local_55);
}
func_382(iLocal_127, Local_55.f_4, Local_54.f_29.f_67);
func_381(Local_54.f_0, 5, 1);
func_368(Local_54.f_0);
if(HUD::DOES_BLIP_EXIST(Global_77479.f_208[Local_54.f_0])){
HUD::REMOVE_BLIP(&(Global_77479.f_208[Local_54.f_0]));
}
iLocal_149=Local_54.f_0;
func_367();
Local_54.f_2=99;
}
break;
case 90:
iLocal_124++;
if(iLocal_124 >=3){
if((MISC::GET_GAME_TIMER() - Local_54.f_4) < 4000){
cVar6={
Local_54.f_29.f_63 
};
StringConCat(&cVar6, "_04", 16);
func_366(&cVar6);
}else{
Local_54.f_2=99;
}}
break;
}}


void func_366(char[4] cParam0){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_367(){
if(func_275(0)){
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


void func_368(int iParam0){
int iVar0;
int iVar1;
int iVar2;
switch (iParam0){
case 21:
iVar0=20;
iVar1=155;
break;
case 22:
iVar0=21;
iVar1=156;
break;
case 23:
iVar0=22;
iVar1=157;
break;
case 12:
iVar0=13;
iVar1=57;
break;
case 13:
iVar0=16;
iVar1=62;
break;
case 14:
iVar0=19;
iVar1=63;
break;
case 15:
iVar0=12;
iVar1=56;
break;
case 16:
iVar0=15;
iVar1=60;
break;
case 17:
iVar0=18;
iVar1=61;
break;
case 18:
iVar0=11;
iVar1=55;
break;
case 19:
iVar0=14;
iVar1=58;
break;
}
func_380(iVar0, 0);
iVar2=func_379(iVar0, iVar1, 1);
if(iVar2 !=0){}else{
func_378(iVar0);
if(func_376(iVar0, iVar1, 1)){
func_369(iVar0);
func_378(iVar0);
}}}


void func_369(int iParam0){
int iVar0;
int iVar1;
int iVar2;
struct<4> Var3;
int iVar4;
char* sVar5;
iVar0=func_375(iParam0);
if(iVar0==-1){
return;
}
if(Global_53888[iVar0 /*203*/].f_9==0){
return;
}
iVar1=Global_53888[iVar0 /*203*/].f_10[(Global_53888[iVar0 /*203*/].f_9 - 1) /*48*/];
iVar2=(Global_53888[iVar0 /*203*/].f_9 - 1);
if(!Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1){
iVar4=Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/];
MemCopy(&Var3,{
func_374(Global_44588[iVar4 /*12*/].f_1)
}
, 4);
}else{
Var3={
Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 
};
}
if(iParam0==28){
switch (iVar1){
case 249:
sVar5="PW_FEED_EM_1";
break;
case 269:
sVar5="PW_FEED_EM_3";
break;
default:
sVar5="PW_FEED_EM_2";
break;
}
func_370(1, Global_44588[iVar1 /*12*/].f_2, iVar1, sVar5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}else{
switch (Global_44588[iVar1 /*12*/].f_3){
case 0:
func_370(0, Global_44588[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
break;
case 1:
func_370(1, Global_44588[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
break;
case 2:
func_370(2, Global_44588[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
break;
}}}


void func_370(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13){
int iVar0;
bool bVar1;
char cVar2[64];
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
return;
}
iVar0=func_536();
bVar1=false;
StringCopy(&cVar2, func_373(iParam1, &bVar1), 64);
if(iVar0==iParam0){
switch (iParam2){
case 72:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL1");
break;
case 73:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL3");
break;
case 74:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL2");
break;
default:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam3);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam4);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam5);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam6)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam7)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam10)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam10);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam11)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam11);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam12)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam12);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam13)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam13);
}
break;
}
if(bVar1){
func_371(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar2, &cVar2, 0, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_372(iParam1)), 0));
}else{
func_371(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_372(iParam1)), 0));
}
switch (Global_20500){
case 0:
StringCopy(&Global_20489, "Phone_SoundSet_Michael", 24);
Global_44580++;
if(Global_44580 > 16){
Global_44580=16;
}
break;
case 2:
StringCopy(&Global_20489, "Phone_SoundSet_Trevor", 24);
Global_44582++;
if(Global_44582 > 16){
Global_44582=16;
}
break;
case 1:
StringCopy(&Global_20489, "Phone_SoundSet_Franklin", 24);
Global_44581++;
if(Global_44581 > 16){
Global_44581=16;
}
break;
default:
StringCopy(&Global_20489, "Phone_SoundSet_Default", 24);
break;
}
AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_20489, 1);
}}


void func_371(var uParam0){
Global_44583[Global_44587]=uParam0;
Global_22903=1;
Global_22902=uParam0;
Global_44587++;
if(Global_44587==3){
Global_44587=0;
}}


char* func_372(int iParam0){
switch (iParam0){
case 0:
return "EMSTR_0";
case 3:
return "EMSTR_3";
case 1:
return "EMSTR_6";
case 2:
return "EMSTR_9";
case 4:
return "EMSTR_12";
case 5:
return "EMSTR_29";
case 6:
return "EMSTR_36";
case 7:
return "EMSTR_39";
case 8:
return "EMSTR_52";
case 9:
return "EMSTR_55";
case 10:
return "EMSTR_58";
case 11:
return "EMSTR_78";
case 12:
return "EMSTR_81";
case 13:
return "EMSTR_84";
case 14:
return "EMSTR_87";
case 15:
return "EMSTR_106";
case 16:
return "EMSTR_114";
case 17:
return "EMSTR_142";
case 18:
return "EMSTR_145";
case 19:
return "EMSTR_152";
case 20:
return "EMSTR_157";
case 21:
return "EMSTR_163";
case 22:
return "EMSTR_182";
case 23:
return "EMSTR_187";
case 24:
return "EMSTR_190";
case 25:
return "EMSTR_206";
case 26:
return "EMSTR_219";
case 27:
return "EMSTR_226";
case 28:
return "EMSTR_233";
case 29:
return "EMSTR_242";
case 30:
return "EMSTR_249";
case 31:
return "EMSTR_262";
case 32:
return "EMSTR_269";
case 33:
return "EMSTR_319";
case 34:
return "EMSTR_340";
case 35:
return "EMSTR_348";
case 36:
return "EMSTR_182";
case 37:
return "EMSTR_357";
case 38:
return "EMSTR_360";
case 39:
return "EMSTR_369";
case 40:
return "EMSTR_376";
case 41:
return "EMSTR_379";
case 42:
return "EMSTR_382";
case 43:
return "EMSTR_384";
case 44:
return "EMSTR_387";
case 45:
return "EMSTR_390";
case 46:
return "EMSTR_393";
case 47:
return "EMSTR_396";
case 48:
return "EMSTR_399";
case 49:
return "EMSTR_402";
case 50:
return "EMSTR_405";
case 51:
return "EMSTR_408";
case 52:
return "EMSTR_411";
case 53:
return "EMSTR_414";
case 54:
return "EMSTR_465";
case 55:
return "EMSTR_468";
case 56:
return "EMSTR_489";
case 57:
return "EMSTR_492";
case 58:
return "EMSTR_495";
case 59:
return "EMSTR_498";
case 60:
return "EMSTR_501";
case 61:
return "EMSTR_504";
case 62:
return "EMSTR_507";
case 63:
return "EMSTR_640";
case 64:
return "EMSTR_643";
case 65:
return "EMSTR_652";
default:
}
return "NULL";
}


char* func_373(int iParam0, int iParam1){
*iParam1=1;
switch (iParam0){
case 0:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[0 /*29*/].f_7));
case 1:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[1 /*29*/].f_7));
case 2:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[2 /*29*/].f_7));
case 7:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[12 /*29*/].f_7));
case 4:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[60 /*29*/].f_7));
case 6:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[62 /*29*/].f_7));
case 3:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[14 /*29*/].f_7));
case 16:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[97 /*29*/].f_7));
case 19:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[99 /*29*/].f_7));
case 15:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[96 /*29*/].f_7));
case 63:
return "CHAR_CARSITE2";
case 64:
return "CHAR_BOATSITE";
case 8:
return "CHAR_BANK_MAZE";
case 9:
return "CHAR_BANK_FLEECA";
case 10:
return "CHAR_BANK_BOL";
case 21:
return "CHAR_MINOTAUR";
case 25:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[15 /*29*/].f_7));
case 26:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[30 /*29*/].f_7));
case 27:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[17 /*29*/].f_7));
case 29:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[20 /*29*/].f_7));
case 30:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[43 /*29*/].f_7));
case 31:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[44 /*29*/].f_7));
case 32:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[19 /*29*/].f_7));
case 34:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[40 /*29*/].f_7));
case 36:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_E_381");
case 38:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[64 /*29*/].f_7));
case 5:
return "CHAR_EPSILON";
case 13:
return "CHAR_MILSITE";
case 11:
return "CHAR_CARSITE";
case 14:
return "CHAR_BOATSITE";
case 12:
return "CHAR_PLANESITE";
case 24:
return "CHAR_DR_FRIEDLANDER";
case 55:
return "CHAR_CARSITE2";
case 54:
return "CHAR_BIKESITE";
case 39:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[122 /*29*/].f_7));
case 40:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[125 /*29*/].f_7));
case 41:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[113 /*29*/].f_7));
case 42:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[126 /*29*/].f_7));
case 43:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[127 /*29*/].f_7));
case 44:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[124 /*29*/].f_7));
case 45:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[114 /*29*/].f_7));
case 46:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[115 /*29*/].f_7));
case 47:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[116 /*29*/].f_7));
case 48:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[123 /*29*/].f_7));
case 49:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[117 /*29*/].f_7));
case 50:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[118 /*29*/].f_7));
case 51:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[119 /*29*/].f_7));
case 52:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[120 /*29*/].f_7));
case 53:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[121 /*29*/].f_7));
default:
}
*iParam1=0;
return "ERROR!";
}
struct<16> func_374(int iParam0){
struct<16> Var0;
struct<16> Var1;
if(iParam0 > -1){
StringCopy(&Var0, "EMSTR_", 64);
StringIntConCat(&Var0, iParam0, 64);
return Var0;
}
StringCopy(&Var1, "FAIL", 64);
return Var1;
}

int func_375(int iParam0){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
iVar1=-1;
iVar2=-1;
iVar0=0;
while (iVar0 < 7){
if(Global_53888[iVar0 /*203*/].f_2==iParam0){
if(Global_53888[iVar0 /*203*/].f_1 > iVar2){
iVar2=Global_53888[iVar0 /*203*/].f_1;
iVar1=iVar0;
}}
iVar0++;
}
if(iVar1 !=-1 && iVar2 !=-1){
return iVar1;
}
return -1;
}

int func_376(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=func_380(iParam0, 1);
if(iVar0==-1){
return 0;
}
if(Global_53888[iVar0 /*203*/].f_9==4){
return 0;
}
Global_53888[iVar0 /*203*/].f_2=iParam0;
Global_53888[iVar0 /*203*/].f_10[Global_53888[iVar0 /*203*/].f_9 /*48*/]=iParam1;
Global_53888[iVar0 /*203*/].f_10[Global_53888[iVar0 /*203*/].f_9 /*48*/].f_1=0;
Global_53888[iVar0 /*203*/].f_10[Global_53888[iVar0 /*203*/].f_9 /*48*/].f_6=0;
Global_53888[iVar0 /*203*/].f_9++;
iVar1=0;
iVar2=-1;
iVar1=0;
while (iVar1 < Global_53888[iVar0 /*203*/].f_3){
if(iVar2==-1){
if(Global_53888[iVar0 /*203*/].f_4[iVar1]==Global_44588[iParam1 /*12*/].f_3){
iVar2=iVar1;
}}
iVar1++;
}
if(iVar2==-1){
if(Global_53888[iVar0 /*203*/].f_3==4){
return 0;
}else{
Global_53888[iVar0 /*203*/].f_4[Global_53888[iVar0 /*203*/].f_3]=Global_44588[iParam1 /*12*/].f_3;
Global_53888[iVar0 /*203*/].f_3++;
}}
iVar1=0;
iVar2=-1;
iVar1=0;
while (iVar1 < Global_53888[iVar0 /*203*/].f_3){
if(iVar2==-1){
if(Global_53888[iVar0 /*203*/].f_4[iVar1]==Global_44588[iParam1 /*12*/].f_2){
iVar2=iVar1;
}}
iVar1++;
}
if(iVar2==-1){
if(Global_53888[iVar0 /*203*/].f_3==4){
return 0;
}else{
Global_53888[iVar0 /*203*/].f_4[Global_53888[iVar0 /*203*/].f_3]=Global_44588[iParam1 /*12*/].f_2;
Global_53888[iVar0 /*203*/].f_3++;
}}
iVar1=0;
iVar1=0;
while (iVar1 < Global_53888[iVar0 /*203*/].f_3){
iVar3=Global_53888[iVar0 /*203*/].f_4[iVar1];
if(iVar3 < 3){
func_377(Global_53888[iVar0 /*203*/].f_4[iVar1], Global_53888[iVar0 /*203*/].f_1, 1, bParam2, 0);
}
iVar1++;
}
return 1;
}


void func_377(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
int iVar1;
int iVar2;
struct<16> Var3;
int iVar4;
int iVar5;
bool bVar6;
bool bVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
if(!iParam0 < 3){
return;
}
iVar0=-1;
StringCopy(&Var3, "UNSET", 64);
if(!bParam2){
iVar4=(Global_47913[iParam1 /*46*/].f_42 - 1);
if(iVar4 < 0){
return;
}
iVar5=Global_47913[iParam1 /*46*/].f_32[iVar4];
iVar2=iVar5;
Var3={
func_374(Global_44588[iVar5 /*12*/].f_1) 
};
if(Global_44588[iVar5 /*12*/].f_2==iParam0 && !Global_44588[iVar5 /*12*/].f_3==iParam0){
return;
}
iVar1=Global_44588[iVar5 /*12*/].f_2;
iVar0=Global_53526[iParam0 /*120*/];
bVar6=false;
while (iVar0 >=16){
iVar0=(iVar0 - 16);
bVar6=true;
}
if(bVar6){
if(!Global_53526[iParam0 /*120*/].f_69[iVar0]){
switch (iParam0){
case 0:
Global_44580=(Global_44580 - 1);
if(Global_44580 < 0){
Global_44580=0;
}
break;
case 1:
Global_44581=(Global_44581 - 1);
if(Global_44581 < 0){
Global_44581=0;
}
break;
case 2:
Global_44582=(Global_44582 - 1);
if(Global_44582 < 0){
Global_44582=0;
}
break;
}}}
Global_53526[iParam0 /*120*/].f_18[iVar0]=iParam1;
Global_53526[iParam0 /*120*/].f_1[iVar0]=iVar4;
Global_53526[iParam0 /*120*/].f_35[iVar0]=0;
Global_53526[iParam0 /*120*/].f_86[iVar0]=0;
Global_53526[iParam0 /*120*/].f_69[iVar0]=0;
Global_53526[iParam0 /*120*/]++;
}else{
iVar0=Global_53526[iParam0 /*120*/];
bVar7=false;
while (iVar0 >=16){
iVar0=(iVar0 - 16);
bVar7=true;
}
if(bVar7){
if(!Global_53526[iParam0 /*120*/].f_69[iVar0]){
switch (iParam0){
case 0:
Global_44580=(Global_44580 - 1);
if(Global_44580 < 0){
Global_44580=0;
}
break;
case 1:
Global_44581=(Global_44581 - 1);
if(Global_44581 < 0){
Global_44581=0;
}
break;
case 2:
Global_44582=(Global_44582 - 1);
if(Global_44582 < 0){
Global_44582=0;
}
break;
}}}
iVar8=-1;
iVar9=0;
iVar9=0;
while (iVar9 < 7){
if(Global_53888[iVar9 /*203*/].f_1==iParam1 && Global_53888[iVar9 /*203*/].f_9 > 0){
iVar8=iVar9;
}
iVar9++;
}
if(iVar8==-1){
return;
}
Global_53526[iParam0 /*120*/].f_18[iVar0]=Global_53888[iVar8 /*203*/].f_1;
Global_53526[iParam0 /*120*/].f_1[iVar0]=(Global_53888[iVar8 /*203*/].f_9 - 1);
Global_53526[iParam0 /*120*/].f_35[iVar0]=0;
Global_53526[iParam0 /*120*/].f_86[iVar0]=1;
Global_53526[iParam0 /*120*/].f_69[iVar0]=0;
Global_53526[iParam0 /*120*/]++;
iVar10=Global_53526[iParam0 /*120*/].f_1[iVar0];
iVar11=Global_53888[iVar8 /*203*/].f_10[iVar10 /*48*/];
iVar2=iVar11;
iVar1=Global_44588[iVar11 /*12*/].f_2;
if(Global_53888[iVar8 /*203*/].f_10[(Global_53888[iVar8 /*203*/].f_9 - 1) /*48*/].f_1){
MemCopy(&Var3,{
Global_53888[iVar8 /*203*/].f_10[(Global_53888[iVar8 /*203*/].f_9 - 1) /*48*/].f_2
}
, 16);
}else{
Var3={
func_374(Global_44588[iVar11 /*12*/].f_1) 
};
}}
if(!bParam4){
if(!Global_53526[iParam0 /*120*/].f_69[iVar0] && !bParam3){
switch (iParam0){
case 0:
func_370(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
break;
case 1:
if(iVar2==249){
func_370(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}else{
func_370(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
break;
case 2:
func_370(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
break;
}}}}


void func_378(int iParam0){
int iVar0;
if(iParam0==26){
if(!MISC::IS_BIT_SET(Global_113810.f_24989, (4 - 1))){
return;
}}
iVar0=func_375(iParam0);
if(iVar0==-1){
return;
}
Global_53888[iVar0 /*203*/]=0;
}

int func_379(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
if(iParam2 < 1){
return 0;
}
if(Global_55310==8){
return 0;
}
iVar0=0;
iVar1=0;
iVar1=0;
while (iVar1 < 7){
if(Global_53888[iVar1 /*203*/].f_2==iParam0){
if(Global_53888[iVar1 /*203*/].f_1 > 0){
iVar0=Global_53888[iVar1 /*203*/].f_1;
}}
iVar1++;
}
if(iVar0==0){
return 0;
}
iVar1=0;
while (iVar1 < 8){
if(Global_55311[iVar1 /*53*/].f_52==0){
Global_55311[iVar1 /*53*/].f_52=iVar0;
Global_55311[iVar1 /*53*/]=iParam0;
Global_55311[iVar1 /*53*/].f_1=iParam1;
Global_55311[iVar1 /*53*/].f_2=iParam2;
Global_113810.f_21040.f_310++;
if(Global_113810.f_21040.f_310==0){
Global_113810.f_21040.f_310=1;
}
Global_55311[iVar1 /*53*/].f_10=0;
Global_55311[iVar1 /*53*/].f_3=Global_113810.f_21040.f_310;
Global_55311[iVar1 /*53*/].f_4=1;
Global_55310++;
return Global_55311[iVar1 /*53*/].f_3;
}
iVar1++;
}
return 0;
}

int func_380(int iParam0, bool bParam1){
int iVar0;
int iVar1;
bool bVar2;
bool bVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
iVar0=func_375(iParam0);
if(iVar0 > -1){
if(Global_53888[iVar0 /*203*/].f_9 < 4){
return iVar0;
}}
iVar1=0;
bVar2=false;
iVar1=0;
while (iVar1 < 7){
if(Global_53888[iVar1 /*203*/]==0){
bVar2=true;
}
iVar1++;
}
if(!bVar2){
return -1;
}
bVar3=true;
iVar1=0;
iVar4=-1;
iVar5=-1;
iVar1=0;
while (iVar1 < 7){
if(Global_53888[iVar1 /*203*/]==0){
if(bVar3){
iVar4=iVar1;
iVar5=Global_53888[iVar1 /*203*/].f_1;
bVar3=false;
}elseif(iVar5 > Global_53888[iVar1 /*203*/].f_1){
iVar4=iVar1;
iVar5=Global_53888[iVar1 /*203*/].f_1;
}}
iVar1++;
}
if(Global_53888[iVar4 /*203*/].f_9 > 0){
iVar1=0;
iVar1=0;
while (iVar1 < Global_53888[iVar4 /*203*/].f_9){
iVar6=0;
iVar6=0;
while (iVar6 < 3){
iVar7=Global_53526[iVar6 /*120*/];
if(iVar7 > 16){
iVar7=16;
}
iVar8=0;
iVar8=0;
while (iVar8 < iVar7){
if(Global_53526[iVar6 /*120*/].f_86[iVar8]){
if(!Global_53526[iVar6 /*120*/].f_69[iVar8]){
if(Global_53526[iVar6 /*120*/].f_18[iVar8]==Global_53888[iVar4 /*203*/].f_1){
if(Global_53526[iVar6 /*120*/].f_1[iVar8]==iVar1){
switch (iVar6){
case 0:
Global_44580=(Global_44580 - 1);
break;
case 1:
Global_44581=(Global_44581 - 1);
break;
case 2:
Global_44582=(Global_44582 - 1);
break;
}
}}}}
iVar8++;
}
iVar6++;
}
iVar1++;
}}
Global_53888[iVar4 /*203*/].f_2=iParam0;
Global_53888[iVar4 /*203*/].f_3=0;
if(!bParam1){
Global_53888[iVar4 /*203*/]=1;
}
Global_113810.f_21040.f_310++;
if(Global_113810.f_21040.f_310==0){
Global_113810.f_21040.f_310=1;
}
Global_53888[iVar4 /*203*/].f_1=Global_113810.f_21040.f_310;
Global_53888[iVar4 /*203*/].f_9=0;
return iVar4;
}


void func_381(int iParam0, bool bParam1, bool bParam2){
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113810.f_32752[iParam0]), iParam1);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_32752[iParam0]), bParam1);
}}

int func_382(int iParam0, int iParam1, int iParam2){
if(func_411(iParam0)==3){
return 0;
}
if(func_411(iParam0)==4){
return 0;
}
return func_383(func_411(iParam0), 0, iParam1, iParam2, 0);
}

int func_383(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
float fVar0;
bool bVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
func_410();
if(iParam3 < 1){
return 0;
}
fVar0=1f;
switch (iParam1){
case 0:
switch (iParam0){
case 0:
func_409(99, 1);
func_408(joaat("sp0_money_total_spent"), iParam3);
break;
case 1:
func_408(joaat("sp1_money_total_spent"), iParam3);
break;
case 2:
func_408(joaat("sp2_money_total_spent"), iParam3);
break;
}
func_393(0);
switch (iParam2){
case 127:
case 129:
case 125:
case 126:
case 128:
if(func_392(5)){
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
func_408(joaat("sp0_money_spent_on_tattoos"), iParam3);
break;
case 1:
func_408(joaat("sp1_money_spent_on_tattoos"), iParam3);
break;
case 2:
func_408(joaat("sp2_money_spent_on_tattoos"), iParam3);
break;
}
if(func_392(1)){
fVar0=0f;
bVar1=true;
}
break;
case 21:
switch (iParam0){
case 0:
func_408(joaat("sp0_money_spent_on_taxis"), iParam3);
break;
case 1:
func_408(joaat("sp1_money_spent_on_taxis"), iParam3);
break;
case 2:
func_408(joaat("sp2_money_spent_on_taxis"), iParam3);
break;
}
break;
case 25:
switch (iParam0){
case 0:
func_408(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
break;
case 1:
func_408(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
break;
case 2:
func_408(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
func_408(joaat("sp0_money_spent_property"), iParam3);
break;
case 1:
func_408(joaat("sp1_money_spent_property"), iParam3);
break;
case 2:
func_408(joaat("sp2_money_spent_property"), iParam3);
break;
}
break;
default:
switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()){
case joaat("clothes_shop_sp"):
switch (iParam0){
case 0:
func_408(joaat("sp0_money_spent_in_clothes"), iParam3);
break;
case 1:
func_408(joaat("sp1_money_spent_in_clothes"), iParam3);
break;
case 2:
func_408(joaat("sp2_money_spent_in_clothes"), iParam3);
break;
}
break;
case joaat("hairdo_shop_sp"):
switch (iParam0){
case 0:
func_408(joaat("sp0_money_spent_on_hairdos"), iParam3);
break;
case 1:
func_408(joaat("sp1_money_spent_on_hairdos"), iParam3);
break;
case 2:
func_408(joaat("sp2_money_spent_on_hairdos"), iParam3);
break;
}
if(func_392(0)){
fVar0=0f;
bVar1=false;
}
break;
case joaat("gunclub_shop"):
switch (iParam0){
case 0:
func_408(joaat("sp0_money_spent_in_buying_guns"), iParam3);
break;
case 1:
func_408(joaat("sp1_money_spent_in_buying_guns"), iParam3);
break;
case 2:
func_408(joaat("sp2_money_spent_in_buying_guns"), iParam3);
break;
}
break;
case joaat("carmod_shop"):
switch (iParam0){
case 0:
func_408(joaat("sp0_money_spent_car_mods"), iParam3);
break;
case 1:
func_408(joaat("sp1_money_spent_car_mods"), iParam3);
break;
case 2:
func_408(joaat("sp2_money_spent_car_mods"), iParam3);
break;
}
func_391(iParam3);
break;
}
break;
}
break;
case 1:
switch (iParam0){
case 0:
func_409(95, iParam3);
break;
case 1:
func_409(97, iParam3);
break;
case 2:
func_409(96, iParam3);
break;
}
func_409(98, iParam3);
break;
}
iVar2=iParam0;
iParam3=floor((fVar0 * to_float(iParam3)));
iVar3=0;
iVar4=iParam3;
if(fVar0==0f){
func_386(bVar1);
return 1;
}elseif(fVar0 !=1f){
func_386(bVar1);
}
iVar5=(Global_60659[iVar2] + iParam3);
switch (iParam1){
case 1:
if(Global_60659[iVar2] >=0 && iParam3 > 0){
if(iVar5 <=0){
Global_60659[iVar2]=2147483647;
}else{
Global_60659[iVar2]=(Global_60659[iVar2] + iParam3);
}}
switch (iParam0){
case 0:
func_408(joaat("sp0_total_cash_earned"), iParam3);
break;
case 1:
func_408(joaat("sp1_total_cash_earned"), iParam3);
break;
case 2:
func_408(joaat("sp2_total_cash_earned"), iParam3);
break;
}
break;
case 0:
if(!bParam4){
if((Global_60659[iVar2] - iParam3) < 0){
return 0;
}}
iVar3=Global_60659[iVar2];
Global_60659[iVar2]=(Global_60659[iVar2] - iParam3);
if(bParam4){
iVar4=iVar3;
}
break;
}
if(iParam2==1){
if(iVar4 > 20){
}}else{
Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/]=iParam1;
Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_1=iParam2;
Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_2=iParam3;
Global_113810.f_20567.f_233[iVar2 /*69*/]++;
Global_113810.f_20567.f_233[iVar2 /*69*/].f_1++;
if(Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 > 10){
Global_113810.f_20567.f_233[iVar2 /*69*/].f_1=0;
}}
func_385(iParam0);
if(Global_43377==15){
func_384(0);
}
return 1;
}


void func_384(bool bParam0){
int iVar0;
int iVar1;
iVar0=0;
iVar1=0;
iVar0=0;
while (iVar0 < 3){
iVar1=0;
while (iVar1 < 11){
Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3=Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4=Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5=Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
iVar1++;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 10){
Global_60667[iVar0 /*3*/][0]=Global_113810.f_20567[iVar0];
Global_60667.f_31[iVar0 /*3*/][0]=Global_113810.f_20567.f_11[iVar0];
Global_60667.f_62[iVar0 /*3*/][0]=Global_113810.f_20567.f_22[iVar0];
Global_60667.f_93[iVar0 /*3*/][0]=Global_113810.f_20567.f_33[iVar0];
Global_60667.f_124[iVar0 /*3*/][0]=Global_113810.f_20567.f_44[iVar0];
Global_60667.f_155[iVar0 /*3*/][0]=Global_113810.f_20567.f_55[iVar0];
Global_60667.f_186[iVar0 /*3*/][0]=Global_113810.f_20567.f_66[iVar0];
Global_60667.f_217[iVar0 /*3*/][0]=Global_113810.f_20567.f_77[iVar0];
Global_60667.f_248[iVar0 /*3*/][0]=Global_113810.f_20567.f_88[iVar0];
if(!bParam0){
Global_60667[iVar0 /*3*/][1]=Global_113810.f_20567[iVar0];
Global_60667.f_31[iVar0 /*3*/][1]=Global_113810.f_20567.f_11[iVar0];
Global_60667.f_62[iVar0 /*3*/][1]=Global_113810.f_20567.f_22[iVar0];
Global_60667.f_93[iVar0 /*3*/][1]=Global_113810.f_20567.f_33[iVar0];
Global_60667.f_124[iVar0 /*3*/][1]=Global_113810.f_20567.f_44[iVar0];
Global_60667.f_155[iVar0 /*3*/][1]=Global_113810.f_20567.f_55[iVar0];
Global_60667.f_186[iVar0 /*3*/][1]=Global_113810.f_20567.f_66[iVar0];
Global_60667.f_217[iVar0 /*3*/][1]=Global_113810.f_20567.f_77[iVar0];
Global_60667.f_248[iVar0 /*3*/][1]=Global_113810.f_20567.f_88[iVar0];
}
iVar0++;
}}


void func_385(int iParam0){
int iVar0;
iVar0=Global_60659[iParam0];
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


void func_386(bool bParam0){
bool bVar0;
char cVar1[64];
if(bParam0==8){
func_390(129, 0, -1);
return;
}
if(bParam0==9){
func_390(135, 0, -1);
return;
}
if(bParam0==10){
func_390(136, 0, -1);
return;
}
if(bParam0==11){
func_390(137, 0, -1);
return;
}
if(bParam0==12){
func_389(8272, 0, -1, 1);
return;
}
if(bParam0==13){
func_389(8273, 0, -1, 1);
return;
}
if(bParam0==14){
func_389(8274, 0, -1, 1);
return;
}
if(bParam0==15){
func_389(8275, 0, -1, 1);
return;
}
if(bParam0==16){
func_389(8276, 0, -1, 1);
return;
}
if(bParam0==17){
func_389(8277, 0, -1, 1);
return;
}
bVar0=false;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(MISC::IS_BIT_SET(Global_113810.f_20567.f_471, bParam0)){
bVar0=true;
MISC::CLEAR_BIT(&(Global_113810.f_20567.f_471), bParam0);
}}elseif(MISC::IS_BIT_SET(Global_113810.f_20567.f_471, bParam0) || MISC::IS_BIT_SET(Global_2359296[func_388() /*5568*/].f_681.f_10, bParam0)){
bVar0=true;
MISC::CLEAR_BIT(&(Global_113810.f_20567.f_471), bParam0);
MISC::CLEAR_BIT(&(Global_2359296[func_388() /*5568*/].f_681.f_10), bParam0);
}
if(bVar0){
StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_387(bParam0));
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
}}


char* func_387(bool bParam0){
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

int func_388(){
int iVar0;
iVar0=0;
return iVar0;
}


void func_389(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_177(iParam0, iParam2);
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}


void func_390(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_98();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}


void func_391(int iParam0){
func_409(93, iParam0);
func_409(29, iParam0);
func_409(30, iParam0);
}

int func_392(int iParam0){
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
return func_172(129, -1);
}
if(iParam0==9){
return func_172(135, -1);
}
if(iParam0==10){
return func_172(136, -1);
}
if(iParam0==11){
return func_172(137, -1);
}
if(iParam0==12){
iVar0=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar1=func_176(8272, -1);
if(iVar1==0 || iVar0 >=iVar1){
return 0;
}
return 1;
}
if(iParam0==13){
iVar2=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar3=func_176(8273, -1);
if(iVar3==0 || iVar2 >=iVar3){
return 0;
}
return 1;
}
if(iParam0==14){
iVar4=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar5=func_176(8274, -1);
if(iVar5==0 || iVar4 >=iVar5){
return 0;
}
return 1;
}
if(iParam0==15){
iVar6=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar7=func_176(8275, -1);
if(iVar7==0 || iVar6 >=iVar7){
return 0;
}
return 1;
}
if(iParam0==16){
iVar8=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar9=func_176(8276, -1);
if(iVar9==0 || iVar8 >=iVar9){
return 0;
}
return 1;
}
if(iParam0==17){
iVar10=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar11=func_176(8277, -1);
if(iVar11==0 || iVar10 >=iVar11){
return 0;
}
return 1;
}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return MISC::IS_BIT_SET(Global_113810.f_20567.f_471, iParam0);
}
return MISC::IS_BIT_SET(Global_2359296[func_388() /*5568*/].f_681.f_10, iParam0);
}

int func_393(bool bParam0){
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
func_407(27, iVar1);
}
if(iVar1 < 200000000){
return 0;
}
func_394(27, 1);
return 1;
}

int func_394(int iParam0, int iParam1){
if(iParam0 >=78){
return 0;
}
return func_395(iParam0, iParam1);
}

int func_395(int iParam0, int iParam1){
if(func_27(14) && !func_406(iParam0)){
return 0;
}
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1==1){
return 0;
}
if(Global_32534 !=0 && !Global_78689){
return 0;
}
if(func_405(&Global_4542602)){
if(func_403(&Global_4542602, iParam0)){
return 0;
}
if(func_396(&Global_4542602, iParam0)){
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

int func_396(var uParam0, int iParam1){
int iVar0;
var uVar1[78];
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)){
return 0;
}
if(func_27(14) && !func_406(iParam1)){
return 0;
}
if(func_403(uParam0, iParam1)){
return 0;
}
if(func_402(uParam0) < 0f){
func_401(uParam0, 0);
}
func_399(&uVar1);
iVar0=0;
iVar0=0;
while (iVar0 < (*uParam0 - 1)){
uVar1[iVar0 + 1]=(*uParam0)[iVar0];
iVar0++;
}
func_397(&uVar1, iParam1);
iVar0=0;
iVar0=0;
while (iVar0 < *uParam0){
(*uParam0)[iVar0]=uVar1[iVar0];
iVar0++;
}
return 1;
}

int func_397(var uParam0, int iParam1){
int iVar0;
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)){
return 0;
}
if(func_27(14) && !func_406(iParam1)){
return 0;
}
if(func_403(uParam0, iParam1)){
return 0;
}
if(func_402(uParam0) < 0f){
func_401(uParam0, 0);
}
iVar0=0;
while (iVar0 < *uParam0){
if(func_398(uParam0, iVar0)){
(*uParam0)[iVar0]=iParam1;
return 1;
}
iVar0++;
}
return 0;
}


bool func_398(var uParam0, int iParam1){
return (*uParam0)[iParam1]==78;
}


void func_399(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < *uParam0){
func_400(uParam0, iVar0);
iVar0++;
}
func_401(uParam0, (Global_4542601 - 0.5f));
}


void func_400(var uParam0, int iParam1){
(*uParam0)[iParam1]=78;
}


void func_401(var uParam0, float fParam1){
if(fParam1==0f){
uParam0->f_80=0f;
}else{
uParam0->f_80=fParam1;
}}


float func_402(var uParam0){
return uParam0->f_80;
}


bool func_403(var uParam0, int iParam1){
return func_404(uParam0, iParam1) !=-1;
}

int func_404(var uParam0, int iParam1){
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


bool func_405(var uParam0){
return uParam0->f_79==1;
}

int func_406(int iParam0){
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

int func_407(int iParam0, int iParam1){
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


void func_408(int iParam0, int iParam1){
int iVar0;
STATS::STAT_GET_INT(iParam0, &iVar0, -1);
iVar0=(iVar0 + iParam1);
STATS::STAT_SET_INT(iParam0, iVar0, 1);
}


void func_409(int iParam0, int iParam1){
int iVar0;
if(iParam1 < 1){
return;
}
if(Global_59227[iParam0 /*7*/].f_2){
return;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return;
}
if(Global_59227[iParam0 /*7*/]){
STATS::STAT_GET_INT(Global_59227[iParam0 /*7*/].f_1, &iVar0, -1);
iVar0=(iVar0 + iParam1);
STATS::STAT_SET_INT(Global_59227[iParam0 /*7*/].f_1, iVar0, 1);
}}


void func_410(){
int iVar0;
if(NETWORK::NETWORK_IS_SIGNED_IN()){
STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
if(!Global_60659[0]==iVar0){
Global_60659[0]=iVar0;
}
STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
if(!Global_60659[1]==iVar0){
Global_60659[1]=iVar0;
}
STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
if(!Global_60659[2]==iVar0){
Global_60659[2]=iVar0;
}}}

int func_411(int iParam0){
return Global_2058[iParam0 /*29*/].f_17;
}

int func_412(int iParam0){
if(CAM::IS_SCREEN_FADED_IN()){
if((MISC::GET_GAME_TIMER() - Global_28) > iParam0){
Global_27=MISC::GET_GAME_TIMER();
}
Global_28=MISC::GET_GAME_TIMER();
if((MISC::GET_GAME_TIMER() - Global_27) > iParam0){
if(func_413()){
Global_27=MISC::GET_GAME_TIMER();
return 1;
}}}
return 0;
}

int func_413(){
if(HUD::IS_PAUSE_MENU_ACTIVE()){
return 0;
}
if(PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18)){
return 1;
}
return 0;
}

int func_414(int iParam0){
var uVar0;
switch (iParam0){
case 0:
STATS::STAT_GET_INT(joaat("sp0_total_cash"), &uVar0, -1);
return uVar0;
case 1:
STATS::STAT_GET_INT(joaat("sp1_total_cash"), &uVar0, -1);
return uVar0;
case 2:
STATS::STAT_GET_INT(joaat("sp2_total_cash"), &uVar0, -1);
return uVar0;
default:
}
return 0;
}


bool func_415(int iParam0){
return func_416(iParam0, Global_43377);
}

int func_416(int iParam0, int iParam1){
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


void func_417(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
char* sVar3;
iVar2=func_536();
if(iParam2 !=145){
iVar2=iParam2;
}
sVar3=func_136(iParam1);
switch (iParam0){
case 10:
iVar0=5;
switch (iVar2){
case 0:
iVar1=32;
break;
case 2:
iVar1=33;
break;
case 1:
iVar1=31;
break;
}
break;
case 11:
iVar0=7;
if(((iParam1==15 || iParam1==16) || iParam1==164) || iParam1==217){
switch (iVar2){
case 0:
iVar1=191;
break;
case 2:
iVar1=193;
break;
case 1:
iVar1=192;
break;
}}else{
switch (iVar2){
case 0:
iVar1=40;
break;
case 2:
iVar1=42;
break;
case 1:
iVar1=41;
break;
}}
break;
case 12:
iVar0=6;
switch (iVar2){
case 0:
iVar1=34;
break;
case 2:
iVar1=36;
break;
case 1:
iVar1=35;
break;
}
break;
case 13:
iVar0=8;
switch (iVar2){
case 0:
iVar1=37;
break;
case 2:
iVar1=39;
break;
case 1:
iVar1=38;
break;
}
break;
case 15:
iVar0=9;
switch (iVar2){
case 0:
iVar1=186;
break;
case 2:
iVar1=188;
break;
case 1:
iVar1=185;
break;
}
break;
case 16:
iVar0=10;
switch (iVar2){
case 0:
iVar1=189;
break;
case 2:
iVar1=190;
break;
case 1:
iVar1=187;
break;
}
break;
default:
return;
break;
}
if(func_376(iVar0, iVar1, 1)){
func_418(iVar0, sVar3);
func_369(iVar0);
func_378(iVar0);
}}


void func_418(int iParam0, char* sParam1){
int iVar0;
int iVar1;
iVar0=func_375(iParam0);
if(iVar0==-1){
return;
}
if(Global_53888[iVar0 /*203*/].f_9==0){
return;
}
if(Global_53888[iVar0 /*203*/].f_10[(Global_53888[iVar0 /*203*/].f_9 - 1) /*48*/].f_6==10){
return;
}
iVar1=Global_53888[iVar0 /*203*/].f_10[(Global_53888[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
Global_53888[iVar0 /*203*/].f_10[(Global_53888[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
StringCopy(&(Global_53888[iVar0 /*203*/].f_10[(Global_53888[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

int func_419(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(!func_424(iParam1) || !func_424(iParam0)){
return 1;
}
iVar0=func_58(iParam0);
iVar1=func_58(iParam1);
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
iVar0=func_423(iParam0);
iVar1=func_423(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_422(iParam0);
iVar1=func_422(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_421(iParam0);
iVar1=func_421(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_420(iParam0);
iVar1=func_420(iParam1);
if(iVar0 > iVar1){
return 1;
}
return 0;
}

int func_420(int iParam0){
return shift_right(iParam0, 20) & 63;
}

int func_421(int iParam0){
return shift_right(iParam0, 14) & 63;
}

int func_422(int iParam0){
return shift_right(iParam0, 9) & 31;
}

int func_423(int iParam0){
return shift_right(iParam0, 4) & 31;
}

int func_424(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(iParam0==-15){
return 0;
}
iVar0=func_420(iParam0);
if(iVar0 < 0 || iVar0 >=60){
return 0;
}
iVar1=func_421(iParam0);
if(iVar1 < 0 || iVar1 >=60){
return 0;
}
iVar2=func_422(iParam0);
if(iVar2 < 0 || iVar2 > 23){
return 0;
}
iVar3=func_58(iParam0);
if((iVar3 <=0 || iVar3 > 2043) || iVar3 < 1979){
return 0;
}
iVar4=func_60(iParam0);
if(iVar4 < 0 || iVar4 > 11){
return 0;
}
iVar5=func_423(iParam0);
if(iVar5 < 1 || iVar5 > func_57(iVar4, iVar3)){
return 0;
}
return 1;
}


void func_425(){
int iVar0;
var uVar1;
char* sVar2;
struct<3> Var3;
struct<3> Var4;
float fVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
struct<3> Var11;
int iVar12;
int iVar13;
int iVar14;
bool bVar15;
bool bVar16;
bool bVar17;
bool bVar18;
bool bVar19;
struct<3> Var20;
int iVar21;
iVar0=0;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning"))==0){
if(Global_113810.f_32752.f_5588){
if(!ENTITY::DOES_ENTITY_EXIST(Global_78384)){
func_338(&(Global_113810.f_32752.f_5510), Global_113810.f_32752.f_5590);
Global_113810.f_32752.f_5588=0;
}elseif(!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78384, 0) || func_50(Global_78384, Global_113810.f_32752.f_5590, 1)){
Global_113810.f_32752.f_5588=0;
}else{
if((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)==Global_78384) && func_463(PLAYER::PLAYER_PED_ID()) !=Global_113810.f_32752.f_5590){
Global_113810.f_32752.f_5590=func_463(PLAYER::PLAYER_PED_ID());
}
if(Global_78384 !=iLocal_126){
sVar2=ENTITY::GET_ENTITY_SCRIPT(Global_78384, &uVar1);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sVar2)){
if(MISC::GET_HASH_KEY(sVar2)==MISC::GET_HASH_KEY("vehicle_gen_controller")){
Global_113810.f_32752.f_5588=0;
iLocal_167=Global_78384;
if(Global_77479.f_139[24]==Global_78384 || (Global_78385==Global_78384 && Global_78386==24)){
func_462(458, 24, -1);
}else{
func_462(458, 0, -1);
}
Global_78384=0;
}}}
if(((Global_113810.f_32752.f_5590 !=func_536() && Global_100237[Global_113810.f_32752.f_5590 /*98*/]==Global_113810.f_32752.f_5510.f_66) && MISC::ARE_STRINGS_EQUAL(&(Global_100237[Global_113810.f_32752.f_5590 /*98*/].f_27), &(Global_113810.f_32752.f_5510.f_1))) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
func_121(&(Global_113810.f_32752.f_5510), &(Global_113810.f_32752.f_5600[Global_113810.f_32752.f_5590 /*78*/]));
Global_113810.f_32752.f_5588=0;
iLocal_167=0;
func_462(458, 0, -1);
Global_78384=0;
}}}elseif((ENTITY::DOES_ENTITY_EXIST(Global_78384) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78384, 0)) && !func_50(Global_78384, Global_113810.f_32752.f_5590, 1)){
Global_113810.f_32752.f_5588=1;
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_167) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_167, 0)){
if(((!Global_113810.f_32752.f_5588 && iLocal_167 !=Global_78384) && iLocal_167 !=iLocal_168) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_167, 1)){
func_31(iLocal_167, 145);
iLocal_167=0;
func_462(458, 0, -1);
}}elseif(iLocal_167 !=0){
iLocal_167=0;
func_462(458, 0, -1);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_168) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_168, 0)){
}elseif(iLocal_168 !=0){
iLocal_168=0;
}}
if(Global_78388.f_66 !=0 && Global_78385==0){
func_338(&Global_78388, Global_78466);
Global_78388.f_66=0;
}
Var3={
433.6721f, -1006.538f, 25.96351f 
};
Var4={
433.6578f, -1017.5f, 32.09895f 
};
fVar5=11.25f;
if(iLocal_122 > 0 && iLocal_122 < 99){
if(iLocal_122 !=3){
if(((((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var3, Var4, fVar5, 0, 1, 0)) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(14)){
iLocal_122=99;
}}}
if(func_461(iLocal_127)){
if(!HUD::DOES_BLIP_EXIST(uLocal_143)){
if(((func_27(15) || func_27(12)) && iLocal_122 !=3) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
uLocal_143=func_459(428.37f, -1013.5f, 27.93f, 0);
HUD::SET_BLIP_SPRITE(uLocal_143, 225);
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_143, "IMPOUND_BLIPNAME");
HUD::SET_BLIP_AS_SHORT_RANGE(uLocal_143, true);
}}elseif((!(func_27(15) || func_27(12)) || iLocal_122==3) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
HUD::REMOVE_BLIP(&uLocal_143);
}}elseif(HUD::DOES_BLIP_EXIST(uLocal_143)){
HUD::REMOVE_BLIP(&uLocal_143);
}
switch (iLocal_122){
case 0:
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if((Local_54.f_2==0 && (func_27(15) || func_27(12))) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
if(func_461(iLocal_127)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var3, Var4, fVar5, 0, 1, 0)){
if(func_414(iLocal_127) >=250){
iVar6=0;
iVar7=0;
while (iVar7 < 2){
if(func_334(iVar7, iLocal_127)){
iVar6++;
}
iVar7++;
}
if(iVar6 > 1){
func_267(&iLocal_123, 3, "IMPOUND_TRIG2", 0, 0, 0, 0);
}else{
func_267(&iLocal_123, 3, "IMPOUND_TRIG1", 0, 0, 0, 0);
}
iLocal_122=1;
}else{
func_265("SCLUB_NO_MONEY", -1);
}
}}}}
break;
case 1:
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_263(0, -1, 0)){
if(func_262(iLocal_123, 1)){
func_72(&iLocal_123);
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
func_458();
iVar8=0;
iVar9=0;
while (iVar9 < 2){
if(func_334(iVar9, iLocal_127)){
iVar8++;
}
iVar9++;
}
if(iVar8 > 1){
iLocal_114=0;
iLocal_115=0;
iLocal_116=0;
bLocal_119=-1;
iLocal_122++;
}else{
iVar10=0;
while (iVar10 < 2){
if(func_334(iVar10, iLocal_127)){
if(iVar10==0){
Var11={
431.4f, -997.33f, 24.76f 
};
}else{
Var11={
436.39f, -997.25f, 24.76f 
};
}
while (!func_431(&iLocal_126, iVar10, Var11, 179.24f, 1)){
wait(0);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_126)){
if(iVar10==0){
func_430(18, 1, 0);
}
else{
func_430(19, 1, 0);
}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
}
func_382(iLocal_127, 119, 250);
func_429(iVar10);
func_31(iLocal_126, func_536());
func_74(1, -1);
iLocal_122=3;
func_72(&iLocal_123);
iLocal_123=-1;
iLocal_116=0;
}}
iVar10++;
}}}}
break;
case 2:
switch (func_536()){
case 0:
iVar12=0;
break;
case 1:
iVar12=1;
break;
case 2:
iVar12=2;
break;
}
func_458();
if(!iLocal_114 || iLocal_115){
func_260(0, 0);
func_259(1, 1, 0, 0, 0);
func_258(1, 2, 1, 1, 1);
func_257("IMPOUND_TITLE");
iLocal_120=0;
iVar13=-1;
bVar15=false;
iVar14=0;
while (iVar14 < 2){
if(func_334(iVar14, iLocal_127)){
func_140(bVar15, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_113810.f_32752.f_5038[iVar12 /*157*/][iVar14 /*78*/].f_66), 0, 1, 0, 0, 0);
if(iVar13==-1){
iVar13=bVar15;
bLocal_119=bVar15;
}
MISC::SET_BIT(&iLocal_120, bVar15);
iLocal_121[bVar15]=iVar14;
func_140(bVar15, "IMPOUND_COST", 1, 1, 0, 0, 0);
func_428(250, 0);
bVar15++;
}
iVar14++;
}
bVar15=false;
func_132(bLocal_119, 1, 1);
iLocal_117=1;
iLocal_115=0;
iLocal_114=1;
}else{
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(PAD::IS_USING_CURSOR(2)){
PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
PAD::ENABLE_CONTROL_ACTION(0, 241, 1);
PAD::ENABLE_CONTROL_ACTION(0, 242, 1);
func_129(0, 0, 0, 1);
func_128(0, -1, 1);
if(func_127()){
if(Global_4541034 !=bLocal_119){
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
bLocal_119=Global_4541034;
func_132(bLocal_119, 1, 1);
iLocal_117=1;
}else{
iVar0=1;
}
}}}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 188) || PAD::IS_CONTROL_JUST_PRESSED(2, 241)){
if(!iLocal_116){
iLocal_117=1;
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
bVar16=(bLocal_119 - 1);
while (bVar16 >=0){
if(MISC::IS_BIT_SET(iLocal_120, bVar16)){
bLocal_119=bVar16;
bVar17=true;
bVar16=false;
}
bVar16=(bVar16 + -1);
}
if(!bVar17){
bVar16=31;
while (bVar16 >=bLocal_119 + 1){
if(MISC::IS_BIT_SET(iLocal_120, bVar16)){
bLocal_119=bVar16;
bVar17=true;
bVar16=bLocal_119;
}
bVar16=(bVar16 + -1);
}
}
if(bVar17){
func_132(bLocal_119, 1, 1);
}}}elseif(PAD::IS_CONTROL_JUST_PRESSED(2, 187) || PAD::IS_CONTROL_JUST_PRESSED(2, 242)){
if(!iLocal_116){
iLocal_117=1;
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
bVar18=bLocal_119 + 1;
while (bVar18 <=31){
if(MISC::IS_BIT_SET(iLocal_120, bVar18)){
bLocal_119=bVar18;
bVar19=true;
bVar18=31;
}
bVar18++;
}
if(!bVar19){
bVar18=false;
while (bVar18 <=(bLocal_119 - 1)){
if(MISC::IS_BIT_SET(iLocal_120, bVar18)){
bLocal_119=bVar18;
bVar19=true;
bVar18=bLocal_119;
}
bVar18++;
}
}
if(bVar19){
func_132(bLocal_119, 1, 1);
}}}elseif(PAD::IS_CONTROL_JUST_RELEASED(2, 201) || iVar0==1){
iVar0=0;
AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
if(!iLocal_116){
func_126("IMPOUND_CNF", 0, 0);
func_125(-1);
func_124(201, "ITEM_YES", -1);
func_124(202, "ITEM_NO", -1);
iLocal_116=1;
}else{
if(bLocal_119==0){
Var20={
431.4f, -997.33f, 24.76f 
};
}
else{
Var20={
436.39f, -997.25f, 24.76f 
};
}
if(func_334(iLocal_121[bLocal_119], iLocal_127)){
while (!func_431(&iLocal_126, iLocal_121[bLocal_119], Var20, 179.24f, 1)){
wait(0);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_126)){
if(bLocal_119==0){
func_430(18, 1, 0);
}else{
func_430(19, 1, 0);
}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
}
func_382(iLocal_127, 119, 250);
func_429(iLocal_121[bLocal_119]);
func_31(iLocal_126, func_536());
func_74(1, -1);
iLocal_122++;
func_72(&iLocal_123);
iLocal_123=-1;
iLocal_116=0;
}
}
iLocal_115=1;
}}elseif(PAD::IS_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 238)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
if(iLocal_116){
iLocal_117=1;
iLocal_116=0;
}else{
iLocal_122=99;
}}}
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
if(iLocal_117){
func_126("", 0, 0);
func_125(-1);
func_124(201, "ITEM_SELECT", -1);
func_124(202, "ITEM_EXIT", -1);
iLocal_116=0;
iLocal_117=0;
}
if(func_263(0, -1, 0)){
func_77(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
}
break;
case 3:
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 431.4f, -997.33f, 24.76f, 1) > 20f && !func_427()){
func_31(iLocal_126, func_536());
iLocal_122=99;
}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 431.4f, -997.33f, 24.76f, 1) > 100f){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_126)){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_126, 0)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_126, 0) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_126, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) > 100f){
if(!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_126)){
func_426(iLocal_126, 1, 145);
VEHICLE::DELETE_VEHICLE(&iLocal_126);
MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0, 0, 0);
iLocal_122=99;
}
}
elseif(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_126, 0)){
MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0, 0, 0);
func_31(iLocal_126, func_536());
iLocal_122=99;
}}else{
MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0, 0, 0);
iLocal_122=99;
}}else{
MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0, 0, 0);
iLocal_122=99;
}}
break;
case 99:
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
}
func_72(&iLocal_123);
iVar21=0;
while (iVar21 < 2){
iLocal_121[iVar21]=-1;
iVar21++;
}
func_430(18, 0, 0);
func_430(19, 0, 0);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_126)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_126);
}
iLocal_122=0;
break;
}
if(iLocal_122==0){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 428.2928f, -996.6834f, 24.48864f, 439.5438f, -996.7114f, 28.10333f, 8.6875f, 0, 1, 0)){
if(!iLocal_125){
func_430(18, 1, 0);
iLocal_125=1;
}}elseif(iLocal_125 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 431.2715f, -1004.059f, 23.98198f, 431.0394f, -993.621f, 27.61868f, 6.8125f, 0, 1, 0)){
func_430(18, 0, 0);
iLocal_125=0;
}}}

int func_426(int iParam0, int iParam1, int iParam2){
var uVar0;
char* sVar1;
if(iParam1==0){
sVar1=ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sVar1)){
if(MISC::GET_HASH_KEY(sVar1)==MISC::GET_HASH_KEY("vehicle_gen_controller")){
return 0;
}}}
func_31(iParam0, iParam2);
return 1;
}

int func_427(){
if(MISC::IS_POSITION_OCCUPIED(431.4424f, -997.7308f, 24.76161f, 4.75f, 0, 1, 1, 0, 0, 0, 0)){
return 1;
}elseif(MISC::IS_POSITION_OCCUPIED(436.6913f, -997.5869f, 24.75582f, 4.75f, 0, 1, 1, 0, 0, 0, 0)){
return 1;
}elseif(MISC::IS_POSITION_OCCUPIED(431.07f, -1005.57f, 26.2f, 4.75f, 0, 1, 1, 0, 0, 0, 0)){
return 1;
}elseif(MISC::IS_POSITION_OCCUPIED(436.52f, -1005.47f, 26.17f, 4.75f, 0, 1, 1, 0, 0, 0, 0)){
return 1;
}
return 0;
}


void func_428(int iParam0, bool bParam1){
float fVar0;
float fVar1;
var uVar2;
float fVar3;
if(Global_23390.f_5665 >=256){
return;
}
if(Global_23390.f_6186 >=4){
return;
}
if(Global_23390.f_6187 !=1){
return;
}
if(Global_23390.f_6186 >=Global_23390.f_6184){
return;
}
Global_23390.f_4309[Global_23390.f_5665]=iParam0;
Global_23390.f_5665++;
Global_23390.f_2387[Global_23390.f_6185 /*5*/][Global_23390.f_6186]=2;
Global_23390.f_6186++;
if(Global_23390.f_6186 >=Global_23390.f_6184){
fVar0=func_135();
if(Global_23390.f_5518[Global_23390.f_5662] && Global_23390.f_6186==Global_23390.f_6184){
func_114(26, 1, 0, &fVar1, &uVar2, 0);
fVar0=(fVar0 + (fVar1 * 2f));
}
if(fVar0 > Global_23390.f_5511[(Global_23390.f_5662 - 1)]){
Global_23390.f_5511[(Global_23390.f_5662 - 1)]=fVar0;
}}
if(bParam1){
if(Global_23390.f_6186 >=Global_23390.f_6184){
fVar3=func_134();
if(fVar3 > Global_23390.f_6188[Global_23390.f_5661]){
Global_23390.f_6188[Global_23390.f_5661]=fVar3;
}}}}


void func_429(int iParam0){
int iVar0;
switch (func_536()){
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
if(iParam0 < 0 || iParam0 >=func_335(&(Global_113810.f_32752.f_5038[iVar0 /*157*/]))){
return;
}
Global_113810.f_32752.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66=0;
}


void func_430(int iParam0, bool bParam1, bool bParam2){
if(bParam1){
MISC::SET_BIT(&(Global_42073[iParam0 /*31*/].f_1), 5);
if(bParam2){
if(MISC::IS_BIT_SET(Global_42073[iParam0 /*31*/].f_1, 1)){
Global_42073[iParam0 /*31*/].f_22=-1f;
}else{
Global_42073[iParam0 /*31*/].f_22=1f;
}
OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_42073[iParam0 /*31*/], Global_42073[iParam0 /*31*/].f_22, 0, 0);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_42073[iParam0 /*31*/], 1, 0, 1);
}}else{
MISC::CLEAR_BIT(&(Global_42073[iParam0 /*31*/].f_1), 5);
if(bParam2){
Global_42073[iParam0 /*31*/].f_22=0f;
OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_42073[iParam0 /*31*/], Global_42073[iParam0 /*31*/].f_22, 0, 0);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_42073[iParam0 /*31*/], 1, 0, 1);
}}}

int func_431(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4){
int iVar0;
if(!func_334(iParam1, func_536()) || ENTITY::DOES_ENTITY_EXIST(*iParam0)){
return 0;
}
switch (func_536()){
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
STREAMING::REQUEST_MODEL(Global_113810.f_32752.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
if(STREAMING::HAS_MODEL_LOADED(Global_113810.f_32752.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66)){
*iParam0=VEHICLE::CREATE_VEHICLE(Global_113810.f_32752.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66, Param2, fParam3, 0, 0, 0);
func_432(*iParam0, &(Global_113810.f_32752.f_5038[iVar0 /*157*/][iParam1 /*78*/]), 0, 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, 0);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
if(bParam4){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113810.f_32752.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
}
return 1;
}
return 0;
}


void func_432(int iParam0, var uParam1, bool bParam2, bool bParam3){
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
if(!func_451(iParam0)){
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
if(MISC::IS_BIT_SET(uParam1->f_77, func_33(iVar0 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_33(iVar0 + 1));
}}elseif(uParam1->f_66==joaat("sandking") || uParam1->f_66==joaat("sandking2")){
iVar1=1;
if(MISC::IS_BIT_SET(uParam1->f_77, func_33(iVar1 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_33(iVar1 + 1));
}}elseif(uParam1->f_66==joaat("formula") || uParam1->f_66==joaat("formula2")){
iVar2=1;
while (iVar2 <=9){
if(MISC::IS_BIT_SET(uParam1->f_77, func_33(iVar2))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_33(iVar2));
}
iVar2++;
}}elseif(uParam1->f_66==joaat("openwheel1")){
iVar3=1;
while (iVar3 <=6){
if(MISC::IS_BIT_SET(uParam1->f_77, func_33(iVar3))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_33(iVar3));
}
iVar3++;
}}elseif(uParam1->f_66==joaat("openwheel2")){
iVar4=1;
while (iVar4 <=11){
if(iVar4 !=9 && iVar4 !=10){
if(MISC::IS_BIT_SET(uParam1->f_77, func_33(iVar4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_33(iVar4));
}}
iVar4++;
}}elseif(uParam1->f_66==joaat("surfer3")){
iVar5=1;
while (iVar5 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_33(iVar5))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_33(iVar5));
}
iVar5++;
}}elseif(uParam1->f_66==joaat("dinghy5")){
if(MISC::IS_BIT_SET(uParam1->f_77, func_33(4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_33(4));
}}elseif(uParam1->f_66==joaat("coquette4")){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 10) !=0){
MISC::SET_BIT(&(uParam1->f_77), false);
}}elseif(uParam1->f_66==joaat("yosemite2")){
MISC::SET_BIT(&(uParam1->f_77), func_33(1));
}elseif(uParam1->f_66==joaat("hotknife")){
iVar6=1;
while (iVar6 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_33(iVar6))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_33(iVar6));
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
if(func_449(uParam1->f_5) || func_449(uParam1->f_6)){
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
if(((MISC::IS_BIT_SET(uParam1->f_77, 15) || func_448(iParam0)) || (((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0) && uParam1->f_9[20] > 0)) && func_447()){
uParam1->f_62=0;
uParam1->f_63=0;
uParam1->f_64=0;
}elseif((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0){
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
if(uParam1->f_65==-1 && !func_35(uParam1->f_66)){
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
func_446(iParam0, uParam1->f_69);
}}else{
func_446(iParam0, uParam1->f_69);
}}}
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0)){
if((uParam1->f_68==0 || uParam1->f_68==3) || uParam1->f_68==5){
VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
}else{
VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
}}
if(bParam3){
func_439(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
}
if(!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66)){
iVar7=0;
while (iVar7 <=11){
if(MISC::IS_BIT_SET(uParam1->f_77, func_33(iVar7 + 1))){
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
if((((func_433() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, func_43(1))){
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

int func_433(){
if((((Global_4718592.f_108230==6 || Global_4718592.f_108230==7) || Global_4718592.f_108230==18) || Global_4718592.f_108230==19) && Global_4718592.f_2==20){
return 0;
}
if(func_437(7)){
if(func_435(Global_2672524.f_4.f_16) || func_434(Global_2672524.f_4.f_16)){
return 0;
}}
return 1;
}

int func_434(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return Global_1890739[iVar0 /*138*/].f_77.f_60 !=0;
}
return 0;
}

int func_435(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_436(iParam0, 9);
}
return 0;
}


var func__436(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}


bool func_437(int iParam0){
return func_438(&(Global_2672524.f_184), iParam0);
}


var func__438(var uParam0, var uParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=uParam1;
iVar1=(iVar0 / 32);
iVar2=(iVar0 % 32);
return MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2);
}

int func_439(int iParam0, var uParam1, var uParam2){
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
}elseif(func_444(*iParam0, iVar1, ((*uParam1)[iVar0] - 1))){
}else{
VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
}}}
iVar0++;
}
if(func_312(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) !=func_442(*iParam0, ((*uParam1)[38] - 1))){
VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_442(*iParam0, ((*uParam1)[38] - 1)), false);
}
func_441(iParam0);
if(func_440(*iParam0)){
VEHICLE::SET_VEHICLE_STRONG(*iParam0, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
}
return 1;
}

int func_440(int iParam0){
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


void func_441(var uParam0){
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

int func_442(int iParam0, int iParam1){
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
iVar0=func_443(iParam0, 38) + 1;
iVar1=func_443(iParam0, 24) + 1;
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

int func_443(int iParam0, int iParam1){
int iVar0;
if((STREAMING::IS_MODEL_VALID(Global_152698) && VEHICLE::IS_VEHICLE_MODEL(iParam0, Global_152698)) && Global_152699==iParam1){
return Global_152700;
}
iVar0=(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
while (iVar0 >=0 && func_444(iParam0, iParam1, iVar0)){
iVar0=(iVar0 - 1);
}
return iVar0;
}

int func_444(var uParam0, int iParam1, int iParam2){
if(!func_445() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(uParam0, iParam1, iParam2)){
return 1;
}
return 0;
}

int func_445(){
return 0;
}


void func_446(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0){
VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
iVar0=VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
iVar1=VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, iParam1);
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("tornado6") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("peyote2")){
return;
}
if(iVar0==-1){
VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 24);
}else{
VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, iVar1==1);
}}}


bool func_447(){
return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_448(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
}
return MISC::IS_BIT_SET(iVar0, 4);
}}}
return 0;
}

int func_449(int iParam0){
if(!func_445() && func_450(iParam0)){
return 1;
}
return 0;
}

int func_450(int iParam0){
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

int func_451(int iParam0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!func_457(PLAYER::PLAYER_ID(), -1)){
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
if(func_453(PLAYER::PLAYER_ID())==3){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(func_452(iParam0) !=-1){
return 1;
}}}
return 0;
}

int func_452(int iParam0){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID")){
return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
}}
return -1;
}

int func_453(int iParam0){
if(func_456(iParam0)==233){
return func_454(iParam0);
}
return -1;
}

int func_454(int iParam0){
if(func_455(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_182;
}
return -1;
}

int func_455(int iParam0, int iParam1){
if(func_99(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10.f_33 !=-1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 !=-1)){
return 1;
}}
return 0;
}

int func_456(int iParam0){
if(func_99(iParam0)){
if(func_455(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_33;
}}
return -1;
}

int func_457(int iParam0, int iParam1){
int iVar0;
if(func_288(iParam0, 1, 1)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(PLAYER::PLAYER_PED_ID()==VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, 0)){
return 1;
}}}}
return 0;
}


void func_458(){
PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
PAD::ENABLE_CONTROL_ACTION(0, 188, 1);
PAD::ENABLE_CONTROL_ACTION(0, 187, 1);
PAD::ENABLE_CONTROL_ACTION(0, 201, 1);
PAD::ENABLE_CONTROL_ACTION(0, 202, 1);
PAD::ENABLE_CONTROL_ACTION(0, 1, 1);
PAD::ENABLE_CONTROL_ACTION(0, 2, 1);
PAD::ENABLE_CONTROL_ACTION(0, 239, 1);
PAD::ENABLE_CONTROL_ACTION(0, 240, 1);
}


var func__459(struct<3> Param0, int iParam1){
var uVar0;
uVar0=HUD::ADD_BLIP_FOR_COORD(Param0);
HUD::SET_BLIP_SCALE(uVar0, func_460(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
HUD::SET_BLIP_ROUTE(uVar0, iParam1);
return uVar0;
}


float func_460(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}

int func_461(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 2){
if(func_334(iVar0, iParam0)){
return 1;
}
iVar0++;
}
return 0;
}


void func_462(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_98();
}
if(iParam1 < 0){
iParam1=255;
}
STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}

int func_463(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_464(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_464(int iParam0){
if(func_25(iParam0)){
return func_465(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__465(int iParam0){
return Global_2058[iParam0 /*29*/];
}


void func_466(var uParam0){
int iVar0;
struct<8> Var1;
if(!MISC::IS_BIT_SET(Global_113810.f_10019.f_25, 7)){
if(!MISC::IS_BIT_SET(*uParam0, 6)){
if(func_27(13) && func_14(func_16())){
MISC::SET_BIT(uParam0, 6);
iVar0=func_9();
uParam0->f_6={
func_497(iVar0) 
};
if(Global_32560==iVar0 || Global_32560==0){
func_3(1);
Var1={
func_496("til_P_", "Exec_U", "xer_Scene", "B_Mi") 
};
AUDIO::START_AUDIO_SCENE(&Var1);
iVar0=(Global_32560 + 1 % 8);
func_494(uParam0, iVar0);
uParam0->f_2=(MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
MISC::SET_BIT(uParam0, 12);
if(iVar0==7){
MISC::SET_BIT(&(Global_113810.f_10019.f_25), 7);
func_493(255, 0);
}}else{
func_494(uParam0, 0);
MISC::CLEAR_BIT(&(Global_113810.f_10019.f_25), 12);
}}}else{
func_492();
if(!MISC::IS_BIT_SET(*uParam0, 31)){
if(!MISC::IS_BIT_SET(*uParam0, 25)){
func_491(uParam0);
}elseif(func_490()){
func_474(uParam0);
uParam0->f_3=MISC::GET_GAME_TIMER() + 2000;
}
if(!func_473(0)){
func_493(255, 0);
}}elseif(func_473(0)){
if(MISC::GET_GAME_TIMER() > uParam0->f_3){
func_493(0, 800);
}}
if(!func_27(13) || !func_14(func_16())){
func_467(uParam0);
}}}}


void func_467(var uParam0){
struct<8> Var0;
if(MISC::IS_BIT_SET(*uParam0, 31)){
func_472(uParam0);
}
if(MISC::IS_BIT_SET(*uParam0, 25)){
func_468(uParam0);
}
Var0={
func_496("til_P_", "Exec_U", "xer_Scene", "B_Mi") 
};
if(AUDIO::IS_AUDIO_SCENE_ACTIVE(&Var0)){
AUDIO::STOP_AUDIO_SCENE(&Var0);
}
MISC::CLEAR_BIT(uParam0, 6);
MISC::CLEAR_BIT(uParam0, 30);
MISC::CLEAR_BIT(uParam0, 8);
}


void func_468(var uParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=func_9();
iVar1=func_471(iVar0);
iVar2=func_470(iVar1);
iVar3=func_469(iVar1);
if(iVar2 !=0){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
}
if(iVar3 !=0){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
}
MISC::CLEAR_BIT(uParam0, 25);
}

int func_469(int iParam0){
switch (iParam0){
case 17:
return joaat("u_m_y_cyclist_01");
case 49:
return joaat("dune");
default:
}
return 0;
}

int func_470(int iParam0){
switch (iParam0){
case 12:
return joaat("a_c_rabbit_01");
case 109:
return joaat("a_c_boar");
case 43:
return joaat("a_c_deer");
case 35:
return joaat("emperor2");
case 17:
return joaat("scorcher");
case 28:
return joaat("a_c_mtlion");
case 49:
return joaat("cs_hunter");
case 25:
return joaat("a_m_y_hiker_01");
case 14:
return joaat("a_f_y_hippie_01");
case 86:
return joaat("a_m_m_hillbilly_01");
default:
}
return 0;
}

int func_471(int iParam0){
switch (iParam0){
case 1:
return 12;
case 2:
return 43;
case 3:
return 35;
case 4:
return 109;
case 5:
return 28;
case 6:
return 17;
default:
}
return -1;
}


void func_472(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_4)){
GRAPHICS::REMOVE_DECALS_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, 0), 10f);
VEHICLE::DELETE_VEHICLE(&(uParam0->f_4));
}
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_5)){
GRAPHICS::REMOVE_DECALS_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uParam0->f_5, 0), 10f);
PED::DELETE_PED(&(uParam0->f_5));
}
MISC::CLEAR_BIT(uParam0, 31);
}


bool func_473(bool bParam0){
if(bParam0){
return Global_110557.f_2 > 0.5f;
}
return Global_110557.f_2 >=255f;
}


void func_474(var uParam0){
int iVar0;
int iVar1;
iVar0=func_9();
iVar1=func_471(iVar0);
func_475(iVar1, &(uParam0->f_5), &(uParam0->f_4), func_489(iVar0), func_488(iVar0), 1);
MISC::SET_BIT(uParam0, 31);
}


void func_475(int iParam0, var uParam1, var uParam2, struct<3> Param3, var uParam4, bool bParam5){
switch (iParam0){
case 12:
func_487(uParam1, Param3, uParam4, bParam5);
break;
case 109:
func_486(uParam1, Param3, uParam4, bParam5);
break;
case 43:
func_485(uParam1, Param3, uParam4, bParam5);
break;
case 35:
func_484(uParam2, Param3, uParam4, bParam5);
break;
case 28:
func_483(uParam1, Param3, uParam4, bParam5);
break;
case 17:
func_482(uParam1, uParam2, Param3, uParam4, bParam5);
break;
case 49:
func_480(uParam1, uParam2, Param3, uParam4);
break;
case 25:
func_479(uParam1, Param3, uParam4);
break;
case 14:
func_478(uParam1, Param3, uParam4);
break;
case 86:
func_476(uParam1, Param3, uParam4);
break;
}}


void func_476(var uParam0, struct<3> Param1, var uParam2){
int iVar0;
iVar0=func_470(86);
if(STREAMING::HAS_MODEL_LOADED(iVar0)){
*uParam0=PED::CREATE_PED(5, iVar0, Param1, uParam2, 1, 1);
AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, 1);
PED::SET_PED_CONFIG_FLAG(*uParam0, 227, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
PHYSICS::ACTIVATE_PHYSICS(*uParam0);
GRAPHICS::ADD_DECAL(1110, (Param1.f_0 + 0.1f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
GRAPHICS::ADD_DECAL(1110, (Param1.f_0 - 0.03f), (Param1.f_1 + 0.3f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
GRAPHICS::ADD_DECAL(1110, (Param1.f_0 - 0.2f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
GRAPHICS::ADD_DECAL(1110, (Param1.f_0 - 0.5f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
GRAPHICS::ADD_DECAL(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.4f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
GRAPHICS::ADD_DECAL(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
GRAPHICS::ADD_DECAL(1110, (Param1.f_0 - 0.6f), (Param1.f_1 - 0.35f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
func_477(*uParam0);
return;
}}


void func_477(var uParam0){
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 1, 0.431f, 0.667f, 179.593f, 0.889f, 2, 0f, "BasicSlash");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 1, 0.556f, 0.292f, 161.805f, 1f, 1, 0f, "ShotgunLargeMonolithic");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 1, 0.708f, 0.688f, 167.897f, 0f, 1, 0f, "ShotgunLargeMonolithic");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 2, 0.472f, 0.347f, 146.133f, 1f, 1, 0f, "ShotgunLargeMonolithic");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 2, 0.799f, 0.451f, 158.294f, 1f, 1, 0f, "ShotgunLargeMonolithic");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 0, 0.681f, 0.507f, 158.707f, 1f, 1, 0f, "ShotgunLargeMonolithic");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 0, 0.819f, 0.813f, 174.811f, 0.056f, 1, 0f, "ShotgunLargeMonolithic");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 0, 0.174f, 0.438f, 211.521f, 1f, 1, 0f, "ShotgunLargeMonolithic");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 0, 0.174f, 0.486f, 213.237f, 1f, 1, 0f, "ShotgunLargeMonolithic");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 0, 0.174f, 0.542f, 215.168f, 1f, 0, 0f, "ShotgunLargeMonolithic");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 0, 0.236f, 0.542f, 213.752f, 1f, 0, 0f, "ShotgunLargeMonolithic");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 0, 0.278f, 0.542f, 212.851f, 1f, 0, 0f, "ShotgunLargeMonolithic");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 0, 0.313f, 0.542f, 212.127f, 1f, 0, 0f, "ShotgunLargeMonolithic");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 5, 0.639f, 0.313f, 149.248f, 1f, 1, 0f, "stab");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "stab");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "BasicSlash");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 3, 0.618f, 0.451f, 204.207f, 1f, 1, 0f, "ShotgunLargeMonolithic");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 3, 0.785f, 0.597f, 206.103f, 1f, 1, 0f, "ShotgunLargeMonolithic");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 4, 0.688f, 0.438f, 202.91f, 1f, 1, 0f, "BasicSlash");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 4, 0.688f, 0.424f, 202.492f, 1f, 1, 0f, "BasicSlash");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 4, 0.688f, 0.347f, 200.181f, 1f, 1, 0f, "BasicSlash");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 4, 0.688f, 0.278f, 198.043f, 1f, 1, 0f, "BasicSlash");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 4, 0.688f, 0.222f, 196.275f, 1f, 1, 0f, "BasicSlash");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 4, 0.653f, 0.222f, 196.609f, 1f, 3, 0f, "BasicSlash");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 4, 0.75f, 0.222f, 195.716f, 1f, 2, 0f, "BasicSlash");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 4, 1f, 0.326f, 196.621f, 1f, 0, 0f, "ShotgunLargeMonolithic");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 4, 0.93f, 0.451f, 200.584f, 1f, 1, 0f, "ShotgunLargeMonolithic");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam0, 4, 0.618f, 0.451f, 204.207f, 1f, 0, 0f, "ShotgunLargeMonolithic");
}


void func_478(var uParam0, struct<3> Param1, var uParam2){
int iVar0;
iVar0=func_470(14);
if(STREAMING::HAS_MODEL_LOADED(iVar0)){
*uParam0=PED::CREATE_PED(5, iVar0, Param1, uParam2, 1, 1);
AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, 1);
PED::SET_PED_CONFIG_FLAG(*uParam0, 227, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
PHYSICS::ACTIVATE_PHYSICS(*uParam0);
GRAPHICS::ADD_DECAL(1110, (Param1.f_0 + 0.1f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
GRAPHICS::ADD_DECAL(1110, (Param1.f_0 - 0.03f), (Param1.f_1 + 0.3f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
GRAPHICS::ADD_DECAL(1110, (Param1.f_0 - 0.2f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
GRAPHICS::ADD_DECAL(1110, (Param1.f_0 - 0.5f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
GRAPHICS::ADD_DECAL(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.4f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
GRAPHICS::ADD_DECAL(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
GRAPHICS::ADD_DECAL(1110, (Param1.f_0 - 0.6f), (Param1.f_1 - 0.35f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
func_477(*uParam0);
return;
}}


void func_479(var uParam0, struct<3> Param1, var uParam2){
int iVar0;
iVar0=func_470(25);
if(STREAMING::HAS_MODEL_LOADED(iVar0)){
*uParam0=PED::CREATE_PED(4, iVar0, Param1, uParam2, 1, 1);
AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, 1);
PED::SET_PED_CONFIG_FLAG(*uParam0, 227, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
PHYSICS::ACTIVATE_PHYSICS(*uParam0);
GRAPHICS::ADD_DECAL(1110, (Param1.f_0 + 0.02f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
GRAPHICS::ADD_DECAL(1110, (Param1.f_0 - 0.23f), (Param1.f_1 + 0.04f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
GRAPHICS::ADD_DECAL(1110, (Param1.f_0 - 0.05f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
GRAPHICS::ADD_DECAL(1110, (Param1.f_0 - 0.05f), (Param1.f_1 - 0.11f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
GRAPHICS::ADD_DECAL(1110, (Param1.f_0 + 0.09f), (Param1.f_1 - 0.06f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
func_477(*uParam0);
return;
}}


void func_480(var uParam0, var uParam1, struct<3> Param2, float fParam3){
int iVar0;
int iVar1;
struct<3> Var2;
iVar0=func_470(49);
iVar1=func_469(49);
if(STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1)){
*uParam0=PED::CREATE_PED(4, iVar0, Param2, uParam3, 1, 1);
AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, 1);
PED::SET_PED_CONFIG_FLAG(*uParam0, 227, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
PHYSICS::ACTIVATE_PHYSICS(*uParam0);
GRAPHICS::ADD_DECAL(1110, ((Param2.f_0 + 0.12f) - 0.3f), ((Param2.f_1 - 0.01f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
GRAPHICS::ADD_DECAL(1110, ((Param2.f_0 - 0.03f) - 0.3f), ((Param2.f_1 + 0.04f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
GRAPHICS::ADD_DECAL(1110, ((Param2.f_0 - 0.2f) - 0.3f), ((Param2.f_1 - 0.01f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
GRAPHICS::ADD_DECAL(1110, ((Param2.f_0 - 0.05f) - 0.3f), ((Param2.f_1 - 0.15f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
GRAPHICS::ADD_DECAL(1110, ((Param2.f_0 + 0.01f) - 0.3f), ((Param2.f_1 - 0.06f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
func_477(*uParam0);
Var2={
9.9929f, 4.6946f, -7.1469f 
};
*uParam1=VEHICLE::CREATE_VEHICLE(iVar1, Param2 + Var2, uParam3, 1, 1, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam1, 2f);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam1, 1084227584);
VEHICLE::SET_VEHICLE_BODY_HEALTH(*uParam1, 2f);
VEHICLE::SET_VEHICLE_BRAKE(*uParam1, 1f);
VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 0, func_481());
VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 1, func_481());
VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 2, func_481());
VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 3, func_481());
VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 4, func_481());
VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 5, func_481());
VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam1, 15f);
VEHICLE::SET_VEHICLE_HEADLIGHT_SHADOWS(*uParam1, 3);
VEHICLE::SET_VEHICLE_LIGHTS(*uParam1, 2);
VEHICLE::SET_VEHICLE_UNDRIVEABLE(*uParam1, 1);
PHYSICS::ACTIVATE_PHYSICS(*uParam1);
return;
}}

int func_481(){
if(MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0)){
return 1;
}
return 0;
}


void func_482(var uParam0, var uParam1, struct<3> Param2, float fParam3, bool bParam4){
int iVar0;
int iVar1;
struct<3> Var2;
iVar0=func_470(17);
iVar1=func_469(17);
if(STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1)){
*uParam0=PED::CREATE_PED(4, iVar1, Param2, uParam3, 1, 1);
AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, 1);
PED::SET_PED_CONFIG_FLAG(*uParam0, 227, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
PHYSICS::ACTIVATE_PHYSICS(*uParam0);
Var2={
0.02f, -0.01f, 0f 
};
GRAPHICS::ADD_DECAL(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var2={
0.23f, 0.04f, 0f 
};
GRAPHICS::ADD_DECAL(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var2={
-0.05f, -0.01f, 0f 
};
GRAPHICS::ADD_DECAL(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var2={
-0.05f, -0.11f, 0f 
};
GRAPHICS::ADD_DECAL(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var2={
0.09f, -0.06f, 0f 
};
GRAPHICS::ADD_DECAL(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
if(bParam4){
Var2={
0.5783f, 0.1357f, -0.0683f 
};
GRAPHICS::ADD_DECAL(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var2={
1.0477f, 0.1103f, -0.1388f 
};
GRAPHICS::ADD_DECAL(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var2={
1.5048f, 0.4595f, -0.1953f 
};
GRAPHICS::ADD_DECAL(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
}
func_477(*uParam0);
*uParam1=VEHICLE::CREATE_VEHICLE(iVar0, (Param2.f_0 - 0.4f), (Param2.f_1 - 0.5f), Param2.f_2, uParam3, 1, 1, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
ENTITY::SET_ENTITY_ROTATION(*uParam1, 0f, 85f, 0f, 2, 1);
VEHICLE::SET_VEHICLE_BODY_HEALTH(*uParam1, 20.5f);
VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam1, 15f);
PHYSICS::ACTIVATE_PHYSICS(*uParam1);
return;
}}


void func_483(var uParam0, struct<3> Param1, var uParam2, bool bParam3){
int iVar0;
struct<3> Var1;
iVar0=func_470(28);
if(STREAMING::HAS_MODEL_LOADED(iVar0)){
*uParam0=PED::CREATE_PED(28, iVar0, Param1, uParam2, 1, 1);
AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, 1);
PED::SET_PED_CONFIG_FLAG(*uParam0, 227, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
PHYSICS::ACTIVATE_PHYSICS(*uParam0);
Var1={
0.02f, -0.01f, 0f 
};
GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.6f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var1={
-0.03f, 0.04f, 0f 
};
GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var1={
-0.05f, -0.01f, 0f 
};
GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var1={
0.01f, -0.06f, 0f 
};
GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
if(bParam3){
Var1={
0.5206f, 0f, 0.003f 
};
GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0.309f, -0.9511f, 0f, 0.19f, 0.33f, 0.113f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var1={
1.1258f, 0.0362f, -0.0837f 
};
GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var1={
1.6107f, 0.4678f, -0.0815f 
};
GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 0.8f, -1f, 1, 0, 0);
}
return;
}}


void func_484(var uParam0, struct<3> Param1, float fParam2, bool bParam3){
int iVar0;
struct<3> Var1;
iVar0=func_470(35);
if(STREAMING::HAS_MODEL_LOADED(iVar0)){
*uParam0=VEHICLE::CREATE_VEHICLE(iVar0, Param1, uParam2, 1, 1, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
ENTITY::SET_ENTITY_ROTATION(*uParam0, 0f, 170f, 0f, 2, 1);
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1f);
VEHICLE::SET_VEHICLE_BODY_HEALTH(*uParam0, 1f);
VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, 15f);
VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 0, func_481());
VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 1, func_481());
VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 2, func_481());
VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 3, func_481());
VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 4, func_481());
VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 5, func_481());
VEHICLE::SET_VEHICLE_HEADLIGHT_SHADOWS(*uParam0, 3);
VEHICLE::SET_VEHICLE_LIGHTS(*uParam0, 2);
VEHICLE::SET_VEHICLE_UNDRIVEABLE(*uParam0, 1);
PHYSICS::ACTIVATE_PHYSICS(*uParam0);
if(bParam3){
Var1={
0.4947f, 2.3632f, 0.1294f 
};
GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.7f, -1f, 1, 0, 0);
Var1={
0.9243f, 2.6606f, 0.1951f 
};
GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.66f, -1f, 1, 0, 0);
Var1={
1.5467f, 2.5044f, 0.2418f 
};
GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.58f, -1f, 1, 0, 0);
Var1={
1.357f, 3.8779f, 0.3259f 
};
GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.48f, -1f, 1, 0, 0);
}
return;
}}


void func_485(var uParam0, struct<3> Param1, var uParam2, bool bParam3){
int iVar0;
struct<3> Var1;
iVar0=func_470(43);
if(STREAMING::HAS_MODEL_LOADED(iVar0)){
*uParam0=PED::CREATE_PED(28, iVar0, Param1, uParam2, 1, 1);
AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, 1);
PED::SET_PED_CONFIG_FLAG(*uParam0, 227, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
PHYSICS::ACTIVATE_PHYSICS(*uParam0);
Var1={
0.12f, -0.01f, 0f 
};
GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var1={
-0.03f, 0.04f, 0f 
};
GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var1={
-0.2f, -0.01f, 0f 
};
GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var1={
-0.05f, -0.15f, 0f 
};
GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
if(bParam3){
Var1={
0.4125f, -0.5815f, -0.2056f 
};
GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, -0.5358f, -0.8443f, 0f, 0.19f, 0.33f, 0.234f, 0f, 0f, 0.9f, -1f, 1, 0, 0);
Var1={
0.6332f, -1.1758f, -0.7106f 
};
GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, -0.7026f, -0.7115f, 0f, 0.19f, 0.33f, 0.26f, 0f, 0f, 0.75f, -1f, 1, 0, 0);
}
return;
}}


void func_486(var uParam0, struct<3> Param1, var uParam2, bool bParam3){
int iVar0;
struct<3> Var1;
iVar0=func_470(109);
if(STREAMING::HAS_MODEL_LOADED(iVar0)){
*uParam0=PED::CREATE_PED(28, iVar0, Param1, uParam2, 1, 1);
AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
PHYSICS::ACTIVATE_PHYSICS(*uParam0);
Var1={
0.12f, -0.01f, 0f 
};
GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var1={
-0.03f, 0.04f, 0f 
};
GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var1={
-0.2f, -0.01f, 0f 
};
GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var1={
-0.05f, -0.15f, 0f 
};
GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var1={
0.01f, -0.06f, 0f 
};
GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
if(bParam3){
Var1={
0.4936f, -0.1763f, -0.0522f 
};
GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var1={
1.0645f, 0.0483f, -0.0698f 
};
GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var1={
1.6011f, -0.1704f, -0.1473f 
};
GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 0.808f, -1f, 1, 0, 0);
}
func_477(*uParam0);
return;
}}


void func_487(var uParam0, struct<3> Param1, var uParam2, bool bParam3){
int iVar0;
struct<3> Var1;
iVar0=func_470(12);
if(STREAMING::HAS_MODEL_LOADED(iVar0)){
*uParam0=PED::CREATE_PED(28, iVar0, Param1, uParam2, 1, 1);
AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
PHYSICS::ACTIVATE_PHYSICS(*uParam0);
Var1={
0.04f, 0.02f, 0f 
};
GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var1={
-0.01f, 0.05f, 0f 
};
GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var1={
-0.03f, -0.01f, 0f 
};
GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
if(bParam3){
Var1={
0.2417f, -0.3975f, -0.2282f 
};
GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var1={
0.0747f, -0.8188f, -0.2576f 
};
GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
Var1={
0.4322f, -1.1548f, -0.4902f 
};
GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 0.802f, -1f, 1, 0, 0);
}
func_477(*uParam0);
return;
}}


float func_488(int iParam0){
switch (iParam0){
case 1:
return 190.1056f;
case 2:
return 132.9326f;
case 3:
return 355.7119f;
case 4:
return 209.0264f;
case 5:
return 122.6722f;
case 6:
return 174.841f;
default:
}
return 0f;
}


Vector3 func__489(int iParam0){
switch (iParam0){
case 1:
return Global_110534[0 /*3*/];
case 2:
return Global_110534[1 /*3*/];
case 3:
return Global_110534[2 /*3*/];
case 4:
return Global_110534[3 /*3*/];
case 5:
return Global_110534[4 /*3*/];
case 6:
return Global_110534[5 /*3*/];
default:
}
return 0f, 0f, 0f;
}

int func_490(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=func_9();
iVar1=func_471(iVar0);
iVar2=func_470(iVar1);
iVar3=func_469(iVar1);
if(iVar2 !=0){
if(!STREAMING::HAS_MODEL_LOADED(iVar2)){
return 0;
}}
if(iVar3 !=0){
if(!STREAMING::HAS_MODEL_LOADED(iVar3)){
return 0;
}}
return 1;
}


void func_491(var uParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=func_9();
iVar1=func_471(iVar0);
iVar2=func_470(iVar1);
iVar3=func_469(iVar1);
if(iVar2 !=0){
STREAMING::REQUEST_MODEL(iVar2);
}
if(iVar3 !=0){
STREAMING::REQUEST_MODEL(iVar3);
}
MISC::SET_BIT(uParam0, 25);
}


void func_492(){
if(Global_110557.f_3==MISC::GET_FRAME_COUNT()){
return;
}
Global_110557.f_3=MISC::GET_FRAME_COUNT();
if(Global_110557.f_2==0f && Global_110557.f_1==0f){
return;
}
if(Global_110557.f_2 !=Global_110557.f_1){
Global_110557.f_2=(Global_110557.f_2 + Global_110557);
if(Global_110557 <=0f){
if(Global_110557.f_2 < Global_110557.f_1){
Global_110557.f_2=Global_110557.f_1;
}}elseif(Global_110557.f_2 > Global_110557.f_1){
Global_110557.f_2=Global_110557.f_1;
}}
GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 255, 255, 255, round(Global_110557.f_2), 0);
}


void func_493(int iParam0, int iParam1){
float fVar0;
float fVar1;
float fVar2;
fVar0=to_float(iParam0);
if(iParam1 <=0){
Global_110557=0f;
Global_110557.f_1=fVar0;
Global_110557.f_2=fVar0;
}else{
fVar1=(fVar0 - Global_110557.f_2);
fVar2=(to_float(iParam1) / (MISC::GET_FRAME_TIME() * 1000f));
Global_110557=(fVar1 / fVar2);
Global_110557.f_1=fVar0;
}}


void func_494(var uParam0, int iParam1){
func_495(&(Global_113810.f_10019.f_25), iParam1, 14336, 11);
}


void func_495(var uParam0, int iParam1, int iParam2, int iParam3){
*uParam0=(*uParam0 - (*uParam0 && iParam2));
*uParam0=(*uParam0 || shift_left(iParam1, iParam3));
}


struct<8> func_496(char* sParam0, char* sParam1, char* sParam2, char* sParam3){
struct<8> Var0;
StringCopy(&Var0, sParam1, 32);
StringConCat(&Var0, sParam0, 32);
StringConCat(&Var0, sParam3, 32);
StringConCat(&Var0, sParam2, 32);
return Var0;
}


Vector3 func__497(int iParam0){
if(iParam0 >=0 && iParam0 < 7){
return Global_110512[iParam0 /*3*/];
}
return 0f, 0f, 0f;
}


void func_498(){
float fVar0;
var uVar1;
int iVar2;
fVar0=-1308.545f;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 475.192f, -1313.48f, 28.2074f) < 1000f){
if(!iLocal_50){
STREAMING::REQUEST_MODEL(joaat("v_ilev_uvline"));
iLocal_49=1;
if(STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_uvline"))){
if(func_499(8)){
uLocal_51[4]=OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.33f, 1, 1, 0);
ENTITY::SET_ENTITY_COORDS(uLocal_51[4], 471.48f, fVar0, 30.33f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_ROTATION(uLocal_51[4], 0f, 0f, 116.9f, 2, 1);
uLocal_51[1]=OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.15f, 1, 1, 0);
ENTITY::SET_ENTITY_COORDS(uLocal_51[1], 471.48f, fVar0, 30.15f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_ROTATION(uLocal_51[1], 0f, 0f, 116.9f, 2, 1);
}
if(func_499(9)){
uLocal_51[5]=OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.98f, 1, 1, 0);
ENTITY::SET_ENTITY_COORDS(uLocal_51[5], 471.48f, fVar0, 29.98f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_ROTATION(uLocal_51[5], 0f, 0f, 116.9f, 2, 1);
}
if(func_499(10)){
uLocal_51[3]=OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.82f, 1, 1, 0);
ENTITY::SET_ENTITY_COORDS(uLocal_51[3], 471.48f, fVar0, 29.82f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_ROTATION(uLocal_51[3], 0f, 0f, 116.9f, 2, 1);
}
uVar1=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(475.192f, -1313.48f, 28.2074f, "v_chopshop");
iVar2=0;
while (iVar2 < 6){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_51[iVar2])){
ENTITY::SET_ENTITY_VISIBLE(uLocal_51[iVar2], 1, 0);
ENTITY::SET_ENTITY_ALWAYS_PRERENDER(uLocal_51[iVar2], 1);
INTERIOR::RETAIN_ENTITY_IN_INTERIOR(uLocal_51[iVar2], uVar1);
}
iVar2++;
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_uvline"));
iLocal_50=1;
}}}else{
if(iLocal_49){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_uvline"));
iLocal_49=0;
}
if(iLocal_50){
func_539();
iLocal_50=0;
}}}}

int func_499(int iParam0){
if(iParam0==94 || iParam0==-1){
return 0;
}
return Global_113810.f_9088.f_330[iParam0 /*6*/];
}


void func_500(){
int iVar0;
int iVar1;
int iVar2;
if(Global_77479.f_553){
if(!iLocal_52){
Global_77479.f_554=0;
iLocal_52=1;
}elseif(Global_77479.f_554 >=68){
Global_77479.f_553=0;
iLocal_52=0;
}}else{
iLocal_52=0;
}
iVar0=0;
while (iVar0 < iLocal_146){
iVar1=iLocal_147[iVar0];
if(func_64(&Local_129, iVar1)){
func_535(&Local_138, iVar1);
if((Local_138.f_69 && Local_54.f_3==0) || iVar1==14){
uLocal_150[iVar1]=MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_138.f_55, 0);
}else{
uLocal_150[iVar1]=MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_129, 0);
}
if(func_534()){
func_533(iVar1);
func_531(iVar1);
func_530(iVar1);
func_529(iVar1);
func_527(iVar1);
func_526(iVar1);
func_525(iVar1);
func_502(iVar1);
if(MISC::IS_BIT_SET(uLocal_46[iVar1], 2)){
if(Global_77479.f_553){
iLocal_52=0;
}
func_540(iVar1);
}}else{
func_501(iVar1);
}}
iVar0++;
}
iVar2=iLocal_146;
iLocal_146=0;
iVar0=0;
while (iVar0 < iLocal_148){
iLocal_148[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < iVar2){
if(MISC::IS_BIT_SET(uLocal_46[iLocal_147[iVar0]], 2)){
func_540(iLocal_147[iVar0]);
}
iVar0++;
}
if(iLocal_149 !=-1){
func_540(iLocal_149);
iLocal_149=-1;
}
iLocal_45++;
if(iLocal_45 >=68){
iLocal_45=0;
}
func_540(iLocal_45);
if(iLocal_155){
func_540(21);
func_540(22);
func_540(23);
iLocal_155=0;
bLocal_156=true;
}elseif(bLocal_156){
bLocal_156=false;
}
if(Global_77479.f_553){
Global_77479.f_554++;
}}


void func_501(int iParam0){
if(iLocal_47[iParam0] !=0){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_47[iParam0]);
iLocal_47[iParam0]=0;
}}


void func_502(int iParam0){
float fVar0;
float fVar1;
float fVar2;
var uVar3;
int iVar4;
float fVar5;
int iVar6;
int iVar7;
struct<3> Var8;
struct<60> Var9;
int iVar10;
bool bVar11;
int iVar12;
int iVar13;
int iVar14;
struct<3> Var15;
struct<3> Var16;
int iVar17;
fVar0=210f;
fVar1=200f;
if(!MISC::IS_BIT_SET(uLocal_46[iParam0], 2)){
func_501(iParam0);
}
MISC::CLEAR_BIT(&(uLocal_46[iParam0]), 2);
if(MISC::IS_BIT_SET(uLocal_46[iParam0], 1)){
fVar2=MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_48[iParam0 /*3*/], 1);
}else{
fVar2=99999.99f;
}
if(MISC::IS_BIT_SET(Local_129.f_9, 23)){
if(Local_129.f_4==joaat("blimp")){
fVar0=1010f;
fVar1=1000f;
}else{
fVar0=410f;
fVar1=400f;
}}elseif(MISC::IS_BIT_SET(Local_129.f_9, 24)){
fVar0=50f;
fVar1=50f;
}elseif(((MISC::IS_BIT_SET(Local_129.f_9, 19) || MISC::IS_BIT_SET(Local_129.f_9, 20)) || iParam0==24) || iParam0==25){
fVar0=310f;
fVar1=300f;
}elseif(MISC::IS_BIT_SET(Local_129.f_9, 25) && (((iLocal_127==0 && Local_54.f_0==21) || (iLocal_127==0 && Local_54.f_0==22)) || (iLocal_127==0 && Local_54.f_0==23))){
fVar0=5010f;
fVar1=5000f;
}
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_139[iParam0], 0)){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(iParam0==24){
uVar3=VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_77479.f_139[iParam0], -1, 0);
if(!ENTITY::DOES_ENTITY_EXIST(uVar3)){
iVar3=VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(Global_77479.f_139[iParam0], -1);
}
iVar4=func_463(iVar3);
if(iVar4 !=Global_113810.f_32752.f_5591){
if(func_25(iVar4)){
func_524("Updating last character to use vehicle gen", iVar4);
Global_113810.f_32752.f_5591=iVar4;
}}}
if(!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_77479.f_139[iParam0], 1)){
func_523("No longer needed:
Vehicle owned by other script");
if(((iParam0==24 && !func_66(Global_77479.f_139[iParam0])) && !func_65(Global_77479.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77479.f_139[iParam0]) !=joaat("monster")){
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77479.f_139[iParam0], 1);
}
Global_77479.f_139[iParam0]=0;
Global_77479[iParam0]=1;
func_522(iParam0);
return;
}
if(((MISC::IS_BIT_SET(uLocal_46[iParam0], 0) && !MISC::IS_BIT_SET(Local_129.f_9, 27)) && iParam0 !=24) && iParam0 !=25){
func_523("No longer needed:
Player used vehicle");
if(((iParam0==24 && !func_66(Global_77479.f_139[iParam0])) && !func_65(Global_77479.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77479.f_139[iParam0]) !=joaat("monster")){
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77479.f_139[iParam0], 1);
}
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iParam0]));
Global_77479.f_139[iParam0]=0;
Global_77479[iParam0]=1;
func_522(iParam0);
return;
}
if((!MISC::IS_BIT_SET(uLocal_46[iParam0], 1) && iParam0 !=24) && iParam0 !=25){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_77479.f_139[iParam0], PLAYER::PLAYER_PED_ID(), 1)){
func_523("No longer needed:
Player damaged vehicle");
if(((iParam0==24 && !func_66(Global_77479.f_139[iParam0])) && !func_65(Global_77479.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77479.f_139[iParam0]) !=joaat("monster")){
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77479.f_139[iParam0], 1);
}
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iParam0]));
Global_77479.f_139[iParam0]=0;
Global_77479[iParam0]=1;
func_522(iParam0);
return;
}}
fVar5=8f;
if(((((((((((((iParam0==24 || iParam0==25) || iParam0==21) || iParam0==22) || iParam0==23) || iParam0==26) || iParam0==29) || iParam0==32) || iParam0==27) || iParam0==30) || iParam0==33) || iParam0==28) || iParam0==31) || iParam0==34){
fVar5=20f;
}
if((MISC::IS_BIT_SET(uLocal_46[iParam0], 1) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_77479.f_139[iParam0], 1), Local_48[iParam0 /*3*/], 1) > fVar5) || (!MISC::IS_BIT_SET(uLocal_46[iParam0], 1) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_77479.f_139[iParam0], 1), Local_129, 1) > fVar5)){
func_523("No longer needed:
Vehicle has been moved");
if(((iParam0==24 && !func_66(Global_77479.f_139[iParam0])) && !func_65(Global_77479.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77479.f_139[iParam0]) !=joaat("monster")){
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77479.f_139[iParam0], 1);
}
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iParam0]));
Global_77479.f_139[iParam0]=0;
Global_77479[iParam0]=1;
func_522(iParam0);
return;
}
if(!func_70(iParam0, 0)){
func_523("No longer needed:
Vehicle gen no longer available");
if(((iParam0==24 && !func_66(Global_77479.f_139[iParam0])) && !func_65(Global_77479.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77479.f_139[iParam0]) !=joaat("monster")){
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77479.f_139[iParam0], 1);
}
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iParam0]));
Global_77479.f_139[iParam0]=0;
Global_77479[iParam0]=1;
func_522(iParam0);
return;
}
if(iParam0==24){
if((func_50(Global_77479.f_139[iParam0], iLocal_127, 1) && !func_66(Global_77479.f_139[iParam0])) && !func_65(Global_77479.f_139[iParam0])){
func_523("No longer needed:
Mission vehicle gen moved to players garage");
if(ENTITY::GET_ENTITY_MODEL(Global_77479.f_139[iParam0]) !=joaat("monster")){
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77479.f_139[iParam0], 1);
}
Global_77479.f_139[iParam0]=0;
Global_77479[iParam0]=1;
func_522(iParam0);
return;
}}
if(uLocal_150[iParam0] > fVar0 && (!MISC::IS_BIT_SET(uLocal_46[iParam0], 1) || fVar2 > fVar0)){
if(iParam0==24){
iVar6=func_53();
iVar7=Global_113810.f_32752.f_4801;
func_520(&iVar7, 0, 0, 17, 0, 0, 0);
if(func_419(iVar6, iVar7)){
if((!func_66(Global_77479.f_139[iParam0]) && !func_65(Global_77479.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77479.f_139[iParam0]) !=joaat("monster")){
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77479.f_139[iParam0], 1);
}
func_31(Global_77479.f_139[iParam0], Global_113810.f_32752.f_5591);
Global_77479[iParam0]=1;
func_522(iParam0);
}
elseif(func_37(Global_77479.f_139[iParam0])){
func_32(Global_77479.f_139[iParam0], &Global_2696187);
Global_2696186=Global_113810.f_32752.f_5591;
iLocal_168=Global_77479.f_139[iParam0];
}}
func_523("No longer needed:
Player out for range");
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iParam0]));
MISC::CLEAR_AREA(Local_129, 3f, 0, 0, 0, 0);
MISC::CLEAR_AREA_OF_VEHICLES(Local_129, 3f, 0, 0, 0, 0, 0, 0, 0);
Global_77479.f_139[iParam0]=0;
if(((iParam0==0 && iLocal_127==0) || (iParam0==6 && iLocal_127==2)) || (iParam0==2 && iLocal_127==1)){
Global_77479.f_584={
Local_129 
};
Global_77479.f_587={
0f, 0f, 0f 
};
}
return;
}
if(MISC::IS_BIT_SET(Local_129.f_9, 30)){
if(!MISC::IS_BIT_SET(Local_129.f_9, 31)){
if(!ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Global_77479.f_139[iParam0]) && !ENTITY::IS_ENTITY_ATTACHED(Global_77479.f_139[iParam0])){
Var8={
ENTITY::GET_ENTITY_COORDS(Global_77479.f_139[iParam0], 1) 
};
if(Var8.f_2 >=func_519(iParam0)){
VEHICLE::SET_BOAT_ANCHOR(Global_77479.f_139[iParam0], 1);
MISC::SET_BIT(&(Local_129.f_9), 31);
}
}}}}
return;
}}else{
Global_77479.f_139[iParam0]=0;
}
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0])){
func_523("No longer needed:
Vehicle not driveable");
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iParam0]));
Global_77479.f_139[iParam0]=0;
Global_77479[iParam0]=1;
func_522(iParam0);
return;
}
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
return;
}
if(Global_78386==iParam0){
func_523("Processing a vehgen vehicle handover request.");
if(ENTITY::DOES_ENTITY_EXIST(Global_78385) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78385, 0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_139[iParam0], 0)){
if(Global_77479.f_139[iParam0]==Global_78385){
func_523("Vehicle to be handed over is the same vehicle.");
Global_78386=-1;
Global_78385=0;
return;
}else{
func_523("No longer needed:
Ready to accept handover vehicle.");
if(((iParam0==24 && !func_66(Global_77479.f_139[iParam0])) && !func_65(Global_77479.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77479.f_139[iParam0]) !=joaat("monster")){
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77479.f_139[iParam0], 1);
}
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iParam0]));
Global_77479.f_139[iParam0]=0;
}}
Global_77479.f_139[iParam0]=Global_78385;
Global_77479[iParam0]=1;
MISC::CLEAR_BIT(&(uLocal_46[iParam0]), false);
MISC::SET_BIT(&(uLocal_46[iParam0]), true);
MISC::CLEAR_BIT(&(uLocal_46[iParam0]), 3);
Local_48[iParam0 /*3*/]={
ENTITY::GET_ENTITY_COORDS(Global_78385, 1) 
};
Global_78386=-1;
if(MISC::IS_BIT_SET(Local_129.f_9, 10)){
Var9.f_9=49;
Var9.f_59=2;
func_32(Global_78385, &Var9);
if(Global_78387){
func_120(iParam0, &Var9, ENTITY::GET_ENTITY_COORDS(Global_78385, 1), ENTITY::GET_ENTITY_HEADING(Global_78385), func_49(Global_78385));
}else{
func_120(iParam0, &Var9, Global_113810.f_32752.f_1864[Local_129.f_14 /*3*/], Global_113810.f_32752.f_1934[Local_129.f_14], func_49(Global_78385));
}
Global_77479.f_139[iParam0]=Global_78385;
Global_77479.f_484[iParam0]=Global_77479.f_139[iParam0];
}
if(iParam0==25){
iVar10=func_536();
if(func_25(iVar10)){
func_523("Players stored switch vehicle cleared for prep getaway.");
Global_100536[iVar10]=0;
}}
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77479.f_139[iParam0], 1, 1);
if(iParam0==24){
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77479.f_139[iParam0], 0);
}
Global_78385=0;
if(Global_2696187.f_66 !=0){
func_338(&Global_2696187, Global_2696186);
Global_2696187.f_66=0;
}
return;
}
if(Global_2696187.f_66 !=0){
func_338(&Global_2696187, Global_2696186);
Global_2696187.f_66=0;
}
func_523("Vehicle to be handed over doesn't exist.");
Global_78386=-1;
Global_78385=0;
}
if(Global_77479[iParam0]){
if(uLocal_150[iParam0] >=fVar0){
Global_77479[iParam0]=0;
func_523("Leave area flag cleared");
}
if(((iParam0==0 && iLocal_127==0) || (iParam0==6 && iLocal_127==2)) || (iParam0==2 && iLocal_127==1)){
Global_77479.f_584={
0f, 0f, 0f 
};
Global_77479.f_587={
0f, 0f, 0f 
};
}
return;
}
bVar11=false;
if(uLocal_150[iParam0] > fVar1){
if(((((iParam0==24 && Global_113810.f_32752.f_1958[Local_129.f_14] !=0) && Global_113810.f_32752.f_1958[Local_129.f_14] > 3) && Local_129.f_4 !=0) && func_70(iParam0, 0)) && func_39(Local_129.f_4, 0, -1)){
iVar12=func_53();
iVar13=Global_113810.f_32752.f_4801;
func_520(&iVar13, 0, 0, 17, 0, 0, 0);
if(func_419(iVar12, iVar13)){
func_338(&(Global_113810.f_32752.f_69[Local_129.f_14 /*78*/]), Global_113810.f_32752.f_5591);
func_522(iParam0);
Global_77479[iParam0]=1;
func_523("Cannot be created:
Vehicle ready for impound");
Global_2696187.f_66=0;
return;
}}
if(((iParam0==0 && iLocal_127==0) || (iParam0==6 && iLocal_127==2)) || (iParam0==2 && iLocal_127==1)){
bVar11=true;
}else{
return;
}}
if(((iParam0==0 && iLocal_127==0) || (iParam0==6 && iLocal_127==2)) || (iParam0==2 && iLocal_127==1)){
Global_77479.f_584={
0f, 0f, 0f 
};
Global_77479.f_587={
0f, 0f, 0f 
};
}
if(Local_129.f_4==0){
Global_77479[iParam0]=1;
func_523("Cannot be created:
Dummy model");
return;
}
if(!func_39(Local_129.f_4, 0, -1)){
Global_77479[iParam0]=1;
func_523("Cannot be created:
Vehicle gen model is no longer installed");
return;
}
if(!func_70(iParam0, 0)){
Global_77479[iParam0]=1;
func_523("Cannot be created:
Vehicle gen not available");
return;
}
if(MISC::IS_BIT_SET(Local_129.f_9, 14) && !func_70(iParam0, 5)){
Global_77479[iParam0]=1;
func_523("Cannot be created:
Vehicle gen not purchased");
return;
}
if((((func_518() && func_517(0)) && iParam0 !=24) && iParam0 !=25) && iParam0 !=35){
Global_77479[iParam0]=1;
func_523("Cannot be created:
Vehicle gens blocked on mission");
return;
}
if(!bLocal_128){
Global_77479[iParam0]=1;
func_523("Cannot be created:
Player character not valid");
return;
}
if(MISC::IS_BIT_SET(Local_129.f_9, 10)){
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[iParam0])){
Global_77479[iParam0]=1;
func_523("Cannot be created:
Previous dyanmic vehicle still exists");
return;
}else{
Global_77479.f_484[iParam0]=0;
}}
if(MISC::IS_BIT_SET(Local_129.f_9, 6)){
if(func_516(Local_129.f_4, -1)){
Global_77479[iParam0]=1;
func_523("Cannot be created:
Same vehicle model found nearby player");
return;
}
if(func_515(Local_129.f_4, -1)){
Global_77479[iParam0]=1;
func_523("Cannot be created:
Same vehicle model found nearby gen location");
return;
}}
if(MISC::IS_BIT_SET(Local_129.f_9, 29)){
if(Local_54.f_3==0){
return;
}}
if(func_514(iParam0)){
Global_77479[iParam0]=1;
func_523("Cannot be created:
Vehgen+model specific checks failed");
return;
}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE()==3){
if((iParam0==12 || iParam0==13) || iParam0==14){
Global_77479[iParam0]=1;
func_523("Cannot be created:
Short range switch in progress");
return;
}}
iVar14=0;
if(MISC::IS_BIT_SET(Local_129.f_9, 19)){
iVar14=2;
}elseif(MISC::IS_BIT_SET(Local_129.f_9, 20)){
iVar14=1;
}
if((iParam0==24 && Global_113810.f_32752.f_1958[Local_129.f_14] > 0) && Global_113810.f_32752.f_1958[Local_129.f_14] <=3){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(Local_129.f_4)){
iVar14=2;
Local_129.f_12=(Global_113810.f_32752.f_1958[Local_129.f_14] - 1);
}elseif(VEHICLE::IS_THIS_MODEL_A_CAR(Local_129.f_4)){
iVar14=1;
Local_129.f_12=(Global_113810.f_32752.f_1958[Local_129.f_14] - 1);
}}
if(iVar14 !=0){
if(func_513(Local_129.f_12, iVar14, Local_129, -1f)){
Global_77479[iParam0]=1;
func_523("Cannot be created:
Same player vehicle found nearby gen location");
if(iParam0==24){
func_542(iParam0, 0);
}
return;
}
if(MISC::IS_BIT_SET(Local_129.f_9, 19) || MISC::IS_BIT_SET(Local_129.f_9, 20)){
if(iVar14==2){
if(Global_98192[Local_129.f_12 /*3*/][1] !=-1 && (MISC::GET_GAME_TIMER() - Global_98192[Local_129.f_12 /*3*/][1]) < CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180){
Global_77479[iParam0]=1;
func_523("Cannot be created:
Same player vehicle cleaned up within the last 3 hours");
StringCopy(&Var15, "...", 24);
StringIntConCat(&Var15, ((CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180 - (MISC::GET_GAME_TIMER() - Global_98192[Local_129.f_12 /*3*/][1])) / 1000), 24);
StringConCat(&Var15, " seconds", 24);
func_523(&Var15);
return;
}}elseif(iVar14==1){
if(Global_98192[Local_129.f_12 /*3*/][0] !=-1 && (MISC::GET_GAME_TIMER() - Global_98192[Local_129.f_12 /*3*/][0]) < CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180){
Global_77479[iParam0]=1;
func_523("Cannot be created:
Same player vehicle cleaned up within the last 3 hours");
StringCopy(&Var16, "...", 24);
StringIntConCat(&Var16, ((CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180 - (MISC::GET_GAME_TIMER() - Global_98192[Local_129.f_12 /*3*/][1])) / 1000), 24);
StringConCat(&Var16, " seconds", 24);
func_523(&Var16);
return;
}}}}
if(((iParam0==0 && iLocal_127==0) || (iParam0==6 && iLocal_127==2)) || (iParam0==2 && iLocal_127==1)){
Global_77479.f_584={
Local_129 
};
}
if(bVar11){
return;
}
if(iVar14 !=0){
iLocal_47[iParam0]=func_23(Local_129.f_12, iVar14);
STREAMING::REQUEST_MODEL(iLocal_47[iParam0]);
MISC::SET_BIT(&(uLocal_46[iParam0]), 2);
if(!STREAMING::HAS_MODEL_LOADED(iLocal_47[iParam0])){
func_523("Cannot be created:
Waiting for player vehicle model to load");
return;
}
if(func_512(iLocal_47[iParam0], Local_129, 1)){
func_523("Cannot be created:
Player is too close to spawn position (default vehicle type)");
return;
}
MISC::CLEAR_AREA(Local_129, 3f, 0, 0, 0, 0);
MISC::CLEAR_AREA_OF_VEHICLES(Local_129, 3f, 0, 0, 0, 0, 0, 0, 0);
if(iVar14==2){
func_507(&(Global_77479.f_139[iParam0]), Local_129.f_12, Local_129, Local_129.f_3, 0, 2);
}elseif(iVar14==1){
func_507(&(Global_77479.f_139[iParam0]), Local_129.f_12, Local_129, Local_129.f_3, 0, 1);
}else{
Global_77479[iParam0]=1;
func_523("Cannot be created:
Invalid player vehicle type specified");
return;
}}else{
STREAMING::REQUEST_MODEL(Local_129.f_4);
iLocal_47[iParam0]=Local_129.f_4;
MISC::SET_BIT(&(uLocal_46[iParam0]), 2);
if(!STREAMING::HAS_MODEL_LOADED(Local_129.f_4)){
func_523("Cannot be created:
Waiting for model to load");
return;
}
if(func_512(Local_129.f_4, Local_129, 1)){
func_523("Cannot be created:
Player is too close to spawn position (specific vehicle type)");
return;
}
MISC::CLEAR_AREA(Local_129, 3f, 0, 0, 0, 0);
MISC::CLEAR_AREA_OF_VEHICLES(Local_129, 3f, 0, 0, 0, 0, 0, 0, 0);
if(MISC::IS_BIT_SET(Local_129.f_9, 23)){
STREAMING::REQUEST_COLLISION_AT_COORD(Local_129);
}
if((iParam0==15 || iParam0==16) || iParam0==17){
if(Local_129.f_4==joaat("submersible2")){
Local_129.f_2=-3f;
}}
Global_77479.f_139[iParam0]=VEHICLE::CREATE_VEHICLE(Local_129.f_4, Local_129, Local_129.f_3, 1, 1, 0);
if(MISC::IS_BIT_SET(Local_129.f_9, 10)){
if(VEHICLE::IS_THIS_MODEL_A_PLANE(Local_129.f_4)){
MISC::SET_BIT(&(Global_113810.f_32752.f_69[Local_129.f_14 /*78*/].f_77), 22);
}
if(MISC::IS_BIT_SET(Global_113810.f_32752.f_69[Local_129.f_14 /*78*/].f_77, 14)){
func_32(Global_77479.f_139[iParam0], &Local_139);
func_506(Local_139.f_77, &(Global_113810.f_32752.f_69[Local_129.f_14 /*78*/].f_77), Local_129.f_4);
MISC::CLEAR_BIT(&(Global_113810.f_32752.f_69[Local_129.f_14 /*78*/].f_77), 14);
}
func_432(Global_77479.f_139[iParam0], &(Global_113810.f_32752.f_69[Local_129.f_14 /*78*/]), 0, 1);
Global_77479.f_484[iParam0]=Global_77479.f_139[iParam0];
}else{
if(MISC::IS_BIT_SET(Local_129.f_9, 9)){
VEHICLE::SET_VEHICLE_COLOURS(Global_77479.f_139[iParam0], Local_129.f_10, Local_129.f_11);
}
if(MISC::IS_BIT_SET(Local_129.f_9, 8)){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_77479.f_139[iParam0], 2);
VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Global_77479.f_139[iParam0], 0);
VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(Global_77479.f_139[iParam0], 0);
VEHICLE::SET_VEHICLE_CAN_BREAK(Global_77479.f_139[iParam0], 0);
VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Global_77479.f_139[iParam0], 0);
VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Global_77479.f_139[iParam0], 0);
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Global_77479.f_139[iParam0], 0);
ENTITY::SET_ENTITY_INVINCIBLE(Global_77479.f_139[iParam0], 1);
ENTITY::FREEZE_ENTITY_POSITION(Global_77479.f_139[iParam0], 1);
}}}
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0])){
func_505("Created - Coords:
", Local_129);
func_504("Created - Dist From Player:", uLocal_150[iParam0]);
if(((iParam0==0 && iLocal_127==0) || (iParam0==6 && iLocal_127==2)) || (iParam0==2 && iLocal_127==1)){
Global_77479.f_584={
0f, 0f, 0f 
};
}
switch (Local_129.f_4){
case joaat("miljet"):
VEHICLE::SET_VEHICLE_COLOURS(Global_77479.f_139[iParam0], 121, 21);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_77479.f_139[iParam0], 8, 156);
break;
case joaat("besra"):
VEHICLE::SET_VEHICLE_COLOURS(Global_77479.f_139[iParam0], 122, 89);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_77479.f_139[iParam0], 25, 121);
break;
case joaat("buzzard"):
case joaat("buzzard2"):
VEHICLE::SET_VEHICLE_COLOURS(Global_77479.f_139[iParam0], 0, 0);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_77479.f_139[iParam0], 5, 156);
break;
case joaat("dukes2"):
break;
case joaat("rhino"):
VEHICLE::SET_VEHICLE_COLOURS(Global_77479.f_139[iParam0], 131, 132);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_77479.f_139[iParam0], 132, 156);
break;
case joaat("luxor2"):
case joaat("swift2"):
VEHICLE::SET_VEHICLE_COLOURS(Global_77479.f_139[iParam0], 159, 0);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_77479.f_139[iParam0], 160, 156);
break;
}
if(MISC::IS_BIT_SET(Local_129.f_9, 22)){
VEHICLE::SET_BOAT_ANCHOR(Global_77479.f_139[iParam0], 1);
}
if(MISC::IS_BIT_SET(Local_129.f_9, 30)){
MISC::CLEAR_BIT(&(Local_129.f_9), 31);
}
if(MISC::IS_BIT_SET(Local_129.f_9, 26)){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_77479.f_139[iParam0], 7);
VEHICLE::SET_VEHICLE_ALARM(Global_77479.f_139[iParam0], 1);
}
func_503(Global_77479.f_139[iParam0], iParam0);
if(!MISC::IS_BIT_SET(Local_129.f_9, 29) && !MISC::IS_BIT_SET(Local_129.f_9, 30)){
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_77479.f_139[iParam0], 1084227584);
}
VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_77479.f_139[iParam0], 0f);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Global_77479.f_139[iParam0], 1);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77479.f_139[iParam0], MISC::IS_BIT_SET(Local_129.f_9, 5));
}
MISC::CLEAR_BIT(&(uLocal_46[iParam0]), false);
MISC::CLEAR_BIT(&(uLocal_46[iParam0]), true);
Global_77479[iParam0]=1;
if(iVar14 !=0){
Global_77479.f_69[iParam0]=1;
}
iVar17=func_225(458, -1);
if(iVar17 !=0 && iVar17==iParam0){
iLocal_167=Global_77479.f_139[iParam0];
}
if(iParam0==24){
Global_2696187.f_66=0;
}}


void func_503(int iParam0, int iParam1){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
switch (iParam1){
case 36:
VEHICLE::SET_VEHICLE_DAMAGE(iParam0, -0.84f, 2.21f, 0.22f, 100f, 400f, 1);
VEHICLE::SET_VEHICLE_DAMAGE(iParam0, 0.67f, 2.12f, -0.06f, 100f, 400f, 1);
VEHICLE::SET_VEHICLE_DAMAGE(iParam0, 0.05f, 1.97f, 0.2f, 100f, 400f, 1);
break;
case 35:
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 6, false);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
break;
}}}


void func_504(char* sParam0, float fParam1){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
if(fParam1 !=0f){
}}}


void func_505(char* sParam0, float fParam1, var uParam2, var uParam3){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
if(fParam1 !=0f){
}}}


void func_506(var uParam0, var uParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=2147483647;
switch (iParam2){
case joaat("coquette2"):
MISC::CLEAR_BIT(&iVar0, false);
MISC::CLEAR_BIT(&iVar0, true);
break;
case joaat("kalahari"):
MISC::CLEAR_BIT(&iVar0, false);
MISC::CLEAR_BIT(&iVar0, true);
MISC::CLEAR_BIT(&iVar0, 2);
break;
case joaat("voltic"):
MISC::CLEAR_BIT(&iVar0, false);
MISC::CLEAR_BIT(&iVar0, true);
MISC::CLEAR_BIT(&iVar0, 2);
break;
case joaat("banshee"):
MISC::CLEAR_BIT(&iVar0, false);
break;
case joaat("stalion"):
MISC::CLEAR_BIT(&iVar0, false);
MISC::CLEAR_BIT(&iVar0, true);
MISC::CLEAR_BIT(&iVar0, 2);
break;
case joaat("chino"):
MISC::CLEAR_BIT(&iVar0, false);
MISC::CLEAR_BIT(&iVar0, true);
MISC::CLEAR_BIT(&iVar0, 2);
break;
}
iVar1=(2147483647 - iVar0);
iVar0=(iVar0 && uParam0);
iVar1=(*uParam1 && iVar1);
*uParam1=(iVar0 || iVar1);
}

int func_507(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5){
var uVar0;
var uVar1;
struct<97> Var2;
int iVar3;
int iVar4;
bool bVar5;
char cVar6[16];
int iVar7;
if(func_25(iParam1)){
Var2.f_11=12;
Var2.f_31=49;
Var2.f_81=2;
func_24(iParam1, &Var2, iParam5);
if(Var2.f_0==0){
return 1;
}
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
if(ENTITY::GET_ENTITY_MODEL(*iParam0) !=Var2.f_0){
}
return 1;
}
if((iParam1==0 && !Global_113810.f_2366.f_539.f_4316) && Global_113810.f_9088.f_99.f_58[131]){
Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/]=0;
}
if(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/]==Var2.f_0){
STREAMING::REQUEST_MODEL(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
if(STREAMING::HAS_MODEL_LOADED(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/])){
*iParam0=VEHICLE::CREATE_VEHICLE(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/], Param2, uParam3, 0, 0, 0);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, 0);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
Var2.f_3=1250;
VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_5, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_6);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_7, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_8);
VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
iVar3=0;
while (iVar3 < 12){
VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar3 + 1, !Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_11[iVar3]);
iVar3++;
}
if(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24){
VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24);
}
if(func_511(&uVar1, &uVar0)){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
}else{
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_27));
if(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 >=0 && Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26);
}}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_84, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_85, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_86);
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_88);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_87);
VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_93, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_94, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_95);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 28));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 29));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 30));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 31));
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89 >=0){
VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89);
}
if(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 > -1){
if(!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90==6){
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
}
}
else{
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
}}}
func_439(iParam0, &(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
if(iParam1==2){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bodhi2")){
func_509(iParam0);
}}
if(bParam4){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
}
func_508(*iParam0, iParam1);
return 1;
}}elseif(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/]==Var2.f_0){
STREAMING::REQUEST_MODEL(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
if(STREAMING::HAS_MODEL_LOADED(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/])){
*iParam0=VEHICLE::CREATE_VEHICLE(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/], Param2, fParam3, 0, 0, 0);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, 0);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
Var2.f_3=1250;
VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_5, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_6);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_7, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_8);
VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
iVar4=0;
while (iVar4 < 12){
VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar4 + 1, !Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_11[iVar4]);
iVar4++;
}
if(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24){
VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24);
}
if(func_511(&uVar1, &uVar0)){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
}else{
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_27));
if(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 >=0 && Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26);
}}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_84, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_85, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_86);
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_88);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_87);
VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_93, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_94, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_95);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 28));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 29));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 30));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 31));
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89 >=0){
VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89);
}
if(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 > -1){
if(!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90==6){
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
}
}
else{
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
}}}
func_439(iParam0, &(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
if(iParam1==2){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bodhi2")){
func_509(iParam0);
}}
if(bParam4){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
}
func_508(*iParam0, iParam1);
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
if(func_511(&uVar1, &uVar0)){
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
func_439(iParam0, &(Var2.f_31), &(Var2.f_81));
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
if(iParam1==1){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bagger") && !Global_113810.f_9088.f_99.f_58[118]){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar6);
bVar5=false;
}}elseif(iParam1==2){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bodhi2")){
func_509(iParam0);
}}elseif(((iParam1==0 && !Global_113810.f_2366.f_539.f_4316) && Global_113810.f_9088.f_99.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("tailgater")){
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
Global_113810.f_2366.f_539.f_4316=1;
func_282(iParam1, iParam0, 0, 1);
}
if(bParam4){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var2.f_0);
}
if(bVar5){
func_508(*iParam0, iParam1);
}
return 1;
}}}
return 0;
}


void func_508(int iParam0, int iParam1){
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


void func_509(var uParam0){
if(!func_510(*uParam0)){
VEHICLE::SET_VEHICLE_EXTRA(*uParam0, 5, !Global_113810.f_9088.f_99.f_58[119]);
}}


bool func_510(int iParam0){
return VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 5);
}

int func_511(var uParam0, var uParam1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){}elseif(Global_113810.f_20121.f_261){
*uParam0={
Global_113810.f_20121.f_267 
};
*uParam1=Global_113810.f_20121.f_271;
return 1;
}
return 0;
}

int func_512(var uParam0, struct<3> Param1, int iParam2){
struct<3> Var0;
struct<3> Var1;
float fVar2;
if((iParam2 && CAM::IS_SCREEN_FADED_OUT()) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning")) > 0){
func_523("player is in vehicle bounds - \"startup_positioning\" is running.");
return 0;
}
MISC::GET_MODEL_DIMENSIONS(uParam0, &Var0, &Var1);
fVar2=MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Var0, 1);
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param1, 1) < (fVar2 * 0.5f)){
func_504("player is in vehicle bounds - fLength:
", fVar2);
func_504("player is in vehicle bounds - fDistance:
", MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param1, 1));
return 1;
}
return 0;
}

int func_513(int iParam0, int iParam1, struct<3> Param2, float fParam3){
int iVar0;
struct<82> Var1;
int iVar2;
if(!func_25(iParam0)){
return 0;
}
Var1.f_11=12;
Var1.f_31=49;
Var1.f_81=2;
iVar2=0;
func_24(iParam0, &Var1, iParam1);
iVar2=Var1.f_0;
if(iVar2 !=0){
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98144[iVar0], 0)){
if(ENTITY::GET_ENTITY_MODEL(Global_98144[iVar0])==iVar2 && Global_98154[iVar0]==iParam0){
if(fParam3==-1f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_98144[iVar0], 0), Param2, 1) <=fParam3){
return 1;
}}}
iVar0++;
}}
return 0;
}

int func_514(int iParam0){
int iVar0;
int iVar1;
if(iParam0==20){
if(Local_129.f_4==joaat("frogger2")){
if(((func_516(Local_129.f_4, -1) || func_515(Local_129.f_4, -1)) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("exile2")) > 0) || !func_499(30)){
return 1;
}}}
if(iParam0==24){
if((ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[20]) && !ENTITY::IS_ENTITY_DEAD(Global_77479.f_484[20], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[20], 0)){
if(Local_129.f_4==ENTITY::GET_ENTITY_MODEL(Global_77479.f_484[20])){
VEHICLE::GET_VEHICLE_COLOURS(Global_77479.f_484[20], &iVar0, &iVar1);
if(iVar0==Local_129.f_10 && iVar1==Local_129.f_11){
func_333(20);
}}}}
return 0;
}

int func_515(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=2174;
iVar1=VEHICLE::GET_CLOSEST_VEHICLE(Local_129, 200f, iParam0, iVar0);
if((ENTITY::DOES_ENTITY_EXIST(iVar1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0)) && ENTITY::GET_ENTITY_MODEL(iVar1)==iParam0){
if(iParam1==-1 || VEHICLE::GET_VEHICLE_LIVERY(iVar1)==iParam1){
return 1;
}}
return 0;
}

int func_516(int iParam0, int iParam1){
var uVar0[50];
int iVar1;
int iVar2;
iVar2=PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar0);
iVar1=0;
while (iVar1 < iVar2){
if((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0[iVar1], 0)) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar1])==iParam0){
if(iParam1==-1 || VEHICLE::GET_VEHICLE_LIVERY(uVar0[iVar1])==iParam1){
return 1;
}}
iVar1++;
}
return 0;
}

int func_517(int iParam0){
if(Global_43377==15){
return 0;
}
if(func_415(iParam0)){
return 0;
}
return 1;
}


var func__518(){
return Global_77479.f_138;
}


float func_519(int iParam0){
switch (iParam0){
case 57:
return -0.7f;
break;
case 63:
return -0.8f;
break;
}
return 0f;
}


void func_520(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
iVar0=func_58(*uParam0);
iVar1=func_60(*uParam0);
iVar2=func_423(*uParam0);
iVar3=func_422(*uParam0);
iVar4=func_421(*uParam0);
iVar5=func_420(*uParam0);
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
iVar6=func_57(iVar1, iVar0);
while (iVar2 > iVar6){
iVar1++;
iVar2=(iVar2 - iVar6);
if(iVar1 > 11){
iVar0++;
iVar1=(iVar1 - 12);
}
iVar6=func_57(iVar1, iVar0);
}
iVar1=(iVar1 + iParam5);
while (iVar1 > 11){
iParam6++;
iVar1=(iVar1 - 12);
}
iVar0=(iVar0 + iParam6);
func_521(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}


void func_521(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_63(uParam0, iParam1);
func_62(uParam0, iParam2);
func_61(uParam0, iParam3);
func_55(uParam0, iParam5);
func_56(uParam0, iParam4);
func_54(uParam0, iParam6);
}


void func_522(int iParam0){
if(MISC::IS_BIT_SET(Local_129.f_9, 13)){
func_542(iParam0, 0);
}}


void func_523(char* sParam0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){}}


void func_524(char* sParam0, int iParam1){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
if(iParam1 !=0){
}}}


void func_525(int iParam0){
bool bVar0;
struct<3> Var1;
float fVar2;
int iVar3;
int iVar4;
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
return;
}
bVar0=false;
iVar3=-1;
iVar4=joaat("prop_forsale_dyn_01");
switch (iParam0){
case 12:
case 13:
bVar0=!func_70(iParam0, 5);
Var1={
-961.42f, -2794.47f, 12.96f 
};
fVar2=-209.22f;
iVar3=0;
iVar4=joaat("prop_airport_sale_sign");
break;
case 15:
case 16:
case 17:
bVar0=!func_70(iParam0, 5);
Var1={
-827.93f, -1368.14f, 3.9982f 
};
fVar2=-68.75f;
iVar3=1;
break;
case 18:
case 19:
bVar0=!func_70(iParam0, 5);
bVar0=true;
Var1={
-710.07f, -1414.31f, 4f 
};
fVar2=-41.25f;
iVar3=2;
break;
case 21:
bVar0=!func_70(iParam0, 5);
Var1={
-66.21f, 77.76f, 70.51f 
};
fVar2=-27f;
iVar3=3;
break;
case 22:
bVar0=!func_70(iParam0, 5);
Var1={
-76.02f, -1825.61f, 25.88f 
};
fVar2=-129.67f;
iVar3=4;
break;
case 23:
bVar0=!func_70(iParam0, 5);
Var1={
-218.68f, -1165.76f, 21.99f 
};
fVar2=89.95f;
iVar3=5;
break;
}
if(bVar0 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var1, 1) < 250f){
if(!ENTITY::DOES_ENTITY_EXIST(uLocal_144[iVar3])){
STREAMING::REQUEST_MODEL(iVar4);
iLocal_145=1;
if(STREAMING::HAS_MODEL_LOADED(iVar4)){
if(iLocal_145){
uLocal_144[iVar3]=OBJECT::CREATE_OBJECT_NO_OFFSET(iVar4, Var1, 0, 1, 0);
ENTITY::SET_ENTITY_ROTATION(uLocal_144[iVar3], 0f, 0f, fVar2, 2, 1);
ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_144[iVar3], 0);
ENTITY::FREEZE_ENTITY_POSITION(uLocal_144[iVar3], 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar4);
iLocal_145=0;
}}}}elseif(iVar3 !=-1){
if((ENTITY::DOES_ENTITY_EXIST(uLocal_144[iVar3]) && !ENTITY::IS_ENTITY_ON_SCREEN(uLocal_144[iVar3])) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var1, 1) > 255f){
OBJECT::DELETE_OBJECT(&(uLocal_144[iVar3]));
if(iLocal_145){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar4);
iLocal_145=0;
}}}}


void func_526(int iParam0){
bool bVar0;
bVar0=false;
if(func_70(iParam0, 0) && (!MISC::IS_BIT_SET(Local_129.f_9, 14) || func_70(iParam0, 5))){
bVar0=true;
}
if(Global_77479.f_346[iParam0] !=bVar0){
if(!func_21(Local_129.f_15, 0f, 0f, 0f, 0)){
if(!bVar0){
if(Global_77479.f_346[iParam0]){
PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_77479.f_415[iParam0], 0);
}}elseif(!Global_77479.f_346[iParam0]){
Global_77479.f_415[iParam0]=PED::ADD_SCENARIO_BLOCKING_AREA(Local_129.f_15, Local_129.f_18, 0, 1, 1, 1);
}}
Global_77479.f_346[iParam0]=bVar0;
}}


void func_527(int iParam0){
int iVar0;
if(MISC::IS_BIT_SET(Local_129.f_9, 15)){
if(func_70(iParam0, 0) && !func_70(iParam0, 5)){
iVar0=145;
if(MISC::IS_BIT_SET(Local_129.f_9, 16)){
iVar0=func_528(9);
}elseif(MISC::IS_BIT_SET(Local_129.f_9, 18)){
iVar0=func_528(4);
}
if(iVar0==Local_129.f_12){
func_381(iParam0, 5, 1);
}}}}

int func_528(int iParam0){
return Global_113810.f_24907[iParam0 /*4*/];
}


void func_529(int iParam0){
if(func_70(iParam0, 0) && !func_70(iParam0, 3)){
if(MISC::IS_BIT_SET(Local_129.f_9, 4)){
func_381(iParam0, 3, 1);
}else{
func_381(iParam0, 3, 1);
}}}


void func_530(int iParam0){
bool bVar0;
int iVar1;
int iVar2;
bVar0=true;
if(func_70(iParam0, 0) && bLocal_128){
if(MISC::IS_BIT_SET(Local_129.f_9, 0) || (MISC::IS_BIT_SET(Local_129.f_9, 2) && !func_70(iParam0, 2))){
if((!MISC::IS_BIT_SET(Local_129.f_9, 21) || (((((((!func_27(0) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(9)) && !func_27(10)) && !func_27(13)) && !func_27(14))) && ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0 || func_70(iParam0, 5)) || !MISC::IS_BIT_SET(Local_129.f_9, 28))){
bVar0=false;
if(!HUD::DOES_BLIP_EXIST(Global_77479.f_208[iParam0])){
if(func_499(0)){
if(MISC::IS_BIT_SET(Local_129.f_9, 14) && !func_70(iParam0, 5)){
Global_77479.f_208[iParam0]=HUD::ADD_BLIP_FOR_COORD(Local_138.f_55);
if(Local_138.f_58 !=-1){
HUD::SET_BLIP_SPRITE(Global_77479.f_208[iParam0], Local_138.f_58);
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_138.f_59))){
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_77479.f_208[iParam0], &(Local_138.f_59));
}}
}
elseif(func_70(iParam0, 5) && (((iParam0==21 || iParam0==22) || iParam0==23) || iParam0==14)){
Global_77479.f_208[iParam0]=HUD::ADD_BLIP_FOR_COORD(Local_138.f_55);
if(Local_129.f_13 !=-1){
HUD::SET_BLIP_SPRITE(Global_77479.f_208[iParam0], Local_129.f_13);
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_138.f_59))){
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_77479.f_208[iParam0], &(Local_138.f_59));
}
if(Local_129.f_12==0){
iVar1=42;
}elseif(Local_129.f_12==1){
iVar1=43;
}elseif(Local_129.f_12==2){
iVar1=44;
}
HUD::SET_BLIP_COLOUR(Global_77479.f_208[iParam0], iVar1);
}
}
else{
Global_77479.f_208[iParam0]=HUD::ADD_BLIP_FOR_COORD(Local_129);
if(Local_129.f_13 !=-1){
HUD::SET_BLIP_SPRITE(Global_77479.f_208[iParam0], Local_129.f_13);
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_138.f_59))){
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_77479.f_208[iParam0], &(Local_138.f_59));
}
if((((((((iParam0==12 || iParam0==13) || iParam0==14) || iParam0==15) || iParam0==16) || iParam0==17) || iParam0==18) || iParam0==19) || iParam0==20){
if(Local_129.f_12==0){
iVar2=42;
}
elseif(Local_129.f_12==1){
iVar2=43;
}
elseif(Local_129.f_12==2){
iVar2=44;
}
HUD::SET_BLIP_COLOUR(Global_77479.f_208[iParam0], iVar2);
}}
}
HUD::SET_BLIP_AS_SHORT_RANGE(Global_77479.f_208[iParam0], !MISC::IS_BIT_SET(Local_129.f_9, 1));
HUD::SET_BLIP_FLASHES(Global_77479.f_208[iParam0], 0);
HUD::SET_BLIP_PRIORITY(Global_77479.f_208[iParam0], 3);
}}}}}
if(bVar0){
if(HUD::DOES_BLIP_EXIST(Global_77479.f_208[iParam0])){
HUD::REMOVE_BLIP(&(Global_77479.f_208[iParam0]));
}}}


void func_531(int iParam0){
if(func_70(iParam0, 0) && !func_70(iParam0, 1)){
if(func_70(iParam0, 4)){
if(MISC::IS_BIT_SET(Local_129.f_9, 3)){
func_532(&(Local_129.f_5), 0, 0, -1, 10000, 7, 0, 0, 0);
func_381(iParam0, 1, 1);
}else{
func_381(iParam0, 1, 1);
}}}}


void func_532(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
func_341(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}


void func_533(int iParam0){
int iVar0;
int iVar1;
int iVar2;
if(!MISC::IS_BIT_SET(Local_129.f_9, 7) || Local_129.f_12==iLocal_127){
bLocal_128=true;
}else{
bLocal_128=false;
}
if(func_27(14)){
bLocal_128=false;
}
if((bLocal_128 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && MISC::IS_BIT_SET(Local_129.f_9, 14)){
if(Local_54.f_2==0 && Local_54.f_3==0){
if(uLocal_150[iParam0] < Local_54.f_1 || Local_54.f_0==iParam0){
if(Local_54.f_0 !=iParam0){
Local_54.f_8={
Local_129 
};
Local_54.f_29={
Local_138 
};
Local_54.f_0=iParam0;
iVar0=0;
while (iVar0 < Global_77479.f_592){
Global_77479.f_592[iVar0]=-1;
iVar0++;
}
Local_54.f_6=-1;
if((Local_54.f_0==12 || Local_54.f_0==13) || Local_54.f_0==14){
Local_54.f_6=0;
}elseif((Local_54.f_0==15 || Local_54.f_0==16) || Local_54.f_0==17){
Local_54.f_6=1;
}elseif((Local_54.f_0==18 || Local_54.f_0==19) || Local_54.f_0==20){
Local_54.f_6=2;
}elseif((Local_54.f_0==21 || Local_54.f_0==22) || Local_54.f_0==23){
Local_54.f_6=3;
}
iVar0=0;
while (iVar0 < 312){
iVar2=func_137(iVar0, -1);
if(iVar2 !=0){
if(iVar1 < Global_77479.f_592){
switch (Local_54.f_6){
case 3:
if(func_68(iVar2)){
Global_77479.f_592[iVar1]=iVar0;
iVar1++;
}
break;
case 2:
if(VEHICLE::IS_THIS_MODEL_A_HELI(iVar2)){
Global_77479.f_592[iVar1]=iVar0;
iVar1++;
}
break;
case 1:
if((VEHICLE::IS_THIS_MODEL_A_BOAT(iVar2) || VEHICLE::IS_THIS_MODEL_A_JETSKI(iVar2)) || iVar2==joaat("submersible2")){
Global_77479.f_592[iVar1]=iVar0;
iVar1++;
}
break;
case 0:
if(func_69(iVar2)){
Global_77479.f_592[iVar1]=iVar0;
iVar1++;
}
break;
}}
}
iVar0++;
}}
Local_54.f_1=uLocal_150[iParam0];
}}}elseif(Local_54.f_0==iParam0){
Local_54.f_0=-1;
Local_54.f_1=99999.99f;
}
if(!MISC::IS_BIT_SET(uLocal_46[iParam0], 0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_139[iParam0], 0)){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77479.f_139[iParam0], 0)){
if(!MISC::IS_BIT_SET(uLocal_46[iParam0], 1) || MISC::IS_BIT_SET(uLocal_46[iParam0], 3)){
MISC::SET_BIT(&(uLocal_46[iParam0]), false);
func_381(iParam0, 4, 1);
func_381(iParam0, 2, 1);
}}else{
MISC::SET_BIT(&(uLocal_46[iParam0]), 3);
}}}}}
if(iParam0==14){
if((ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[iParam0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[iParam0], 0)) && ENTITY::GET_ENTITY_MODEL(Global_77479.f_484[iParam0])==joaat("hydra")){
if(!iLocal_169){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_77479.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, 1, 0)){
VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(Global_77479.f_484[iParam0], 0f);
iLocal_169=1;
}}elseif(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_77479.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, 1, 0)){
VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(Global_77479.f_484[iParam0], 1f);
iLocal_169=0;
}}else{
iLocal_169=0;
}}}

int func_534(){
return 1;
}


var func__535(var uParam0, int iParam1){
uParam0->f_80=0;
uParam0->f_69=0;
StringCopy(&(uParam0->f_59), "", 16);
switch (iParam1){
case 12:
*uParam0={
-952.8823f, -2795.896f, 12.13233f 
};
uParam0->f_3={
-966.7308f, -2787.975f, 16.13232f 
};
uParam0->f_6=17.5625f;
uParam0->f_44={
-966.1285f, -2794.789f, 12.9648f 
};
uParam0->f_47=146.6324f;
uParam0->f_14={
-1652.454f, -3059.149f, 24.932f 
};
uParam0->f_14.f_3={
-2.5815f, 0f, -176.2374f 
};
uParam0->f_14.f_12=38.2303f;
uParam0->f_14.f_6={
-1651.547f, -3060.478f, 23.8077f 
};
uParam0->f_14.f_6.f_3={
-2.5815f, 0f, -176.2374f 
};
uParam0->f_14.f_13=0.2f;
uParam0->f_14.f_14=7f;
uParam0->f_29={
-1650.431f, -3177.229f, 16.9898f 
};
uParam0->f_29.f_3={
-4.9147f, 0f, -11.6415f 
};
uParam0->f_29.f_12=38.2303f;
uParam0->f_29.f_6={
-1647.495f, -3173.728f, 16.6439f 
};
uParam0->f_29.f_6.f_3={
-4.9147f, 0f, -11.6415f 
};
uParam0->f_29.f_13=0.2f;
uParam0->f_14.f_14=11f;
uParam0->f_7={
-1625.911f, -3167.556f, 11.11455f 
};
uParam0->f_10={
-1688.58f, -3130.741f, 20.13538f 
};
uParam0->f_13=60.1875f;
uParam0->f_48={
-1625.911f, -3167.556f, 11.11455f 
};
uParam0->f_51={
-1688.58f, -3130.741f, 20.13538f 
};
uParam0->f_54=60.1875f;
uParam0->f_55={
-966.084f, -2793.613f, 12.9648f 
};
uParam0->f_58=372;
StringCopy(&(uParam0->f_59), "HANGAR_NAME", 16);
uParam0->f_67=1378600;
StringCopy(&(uParam0->f_63), "HANGAR", 16);
uParam0->f_80=1;
break;
case 13:
*uParam0={
-952.8823f, -2795.896f, 12.13233f 
};
uParam0->f_3={
-966.7308f, -2787.975f, 16.13232f 
};
uParam0->f_6=17.5625f;
uParam0->f_44={
-966.1285f, -2794.789f, 12.9648f 
};
uParam0->f_47=146.6324f;
uParam0->f_14={
-1184.2f, -3345f, 17.5f 
};
uParam0->f_14.f_3={
3.5f, 0f, 109f 
};
uParam0->f_14.f_12=30.3f;
uParam0->f_14.f_6={
-1184.3f, -3345f, 16.6f 
};
uParam0->f_14.f_6.f_3={
3.5f, 0f, 109f 
};
uParam0->f_14.f_13=0.2f;
uParam0->f_14.f_14=7f;
uParam0->f_29={
-1272.6f, -3414.7f, 15.6f 
};
uParam0->f_29.f_3={
-2.1f, 0f, -9.9f 
};
uParam0->f_29.f_12=37.8f;
uParam0->f_29.f_6={
-1274f, -3414.4f, 15.6f 
};
uParam0->f_29.f_6.f_3={
-2.1f, 0f, -9.9f 
};
uParam0->f_29.f_13=0.2f;
uParam0->f_14.f_14=11f;
uParam0->f_7={
-1247.688f, -3408.546f, 20.50418f 
};
uParam0->f_10={
-1309.774f, -3372.294f, 11.36878f 
};
uParam0->f_13=66.1875f;
uParam0->f_48={
-1247.688f, -3408.546f, 20.50418f 
};
uParam0->f_51={
-1309.774f, -3372.294f, 11.36878f 
};
uParam0->f_54=66.1875f;
uParam0->f_55={
-966.084f, -2793.613f, 12.9648f 
};
uParam0->f_58=372;
StringCopy(&(uParam0->f_59), "HANGAR_NAME", 16);
uParam0->f_67=1378600;
StringCopy(&(uParam0->f_63), "HANGAR", 16);
uParam0->f_80=1;
break;
case 14:
*uParam0={
1727.302f, 3291.453f, 39.61911f 
};
uParam0->f_3={
1744.108f, 3296.215f, 44.17199f 
};
uParam0->f_6=4.6875f;
uParam0->f_44={
1737.53f, 3289.239f, 40.1448f 
};
uParam0->f_47=14.8763f;
uParam0->f_14={
1739.749f, 3280.445f, 45.8124f 
};
uParam0->f_14.f_3={
-12.3854f, 0f, 14.8379f 
};
uParam0->f_14.f_12=50f;
uParam0->f_14.f_6={
1739.749f, 3280.445f, 45.8124f 
};
uParam0->f_14.f_6.f_3={
-12.3854f, 0f, 14.8379f 
};
uParam0->f_14.f_13=0.2f;
uParam0->f_14.f_14=7f;
uParam0->f_29={
1739.749f, 3280.445f, 45.8124f 
};
uParam0->f_29.f_3={
-12.3854f, 0f, 14.8379f 
};
uParam0->f_29.f_12=50f;
uParam0->f_29.f_6={
1739.749f, 3280.445f, 45.8124f 
};
uParam0->f_29.f_6.f_3={
-12.3854f, 0f, 14.8379f 
};
uParam0->f_29.f_13=0.2f;
uParam0->f_14.f_14=11f;
uParam0->f_7={
1718.056f, 3305.019f, 45.70922f 
};
uParam0->f_10={
1745.706f, 3313.101f, 39.758f 
};
uParam0->f_13=28.125f;
uParam0->f_48={
1718.056f, 3305.019f, 45.70922f 
};
uParam0->f_51={
1745.706f, 3313.101f, 39.758f 
};
uParam0->f_54=28.125f;
uParam0->f_55={
1735.586f, 3294.531f, 40.1651f 
};
uParam0->f_58=372;
StringCopy(&(uParam0->f_59), "HANGAR_NAME2", 16);
uParam0->f_67=1378600;
StringCopy(&(uParam0->f_63), "HANGAR", 16);
uParam0->f_80=1;
break;
case 18:
*uParam0={
-709.095f, -1414.229f, 3.188014f 
};
uParam0->f_3={
-712.123f, -1411.655f, 6.938014f 
};
uParam0->f_6=3.25f;
uParam0->f_7={
-739.1531f, -1439.509f, 3.188024f 
};
uParam0->f_10={
-753.7792f, -1426.756f, 7.188024f 
};
uParam0->f_13=17.5625f;
uParam0->f_44={
-700.9434f, -1418.169f, 4.0005f 
};
uParam0->f_47=142.6382f;
uParam0->f_14={
-738f, -1440f, 6.3f 
};
uParam0->f_14.f_3={
-2.5f, 0f, 48.3f 
};
uParam0->f_14.f_12=45f;
uParam0->f_14.f_6={
-738f, -1440f, 6f 
};
uParam0->f_14.f_6.f_3={
-2.5f, 0f, 48.3f 
};
uParam0->f_14.f_13=0.2f;
uParam0->f_14.f_14=7f;
uParam0->f_29={
-749.3f, -1425.7f, 5.9f 
};
uParam0->f_29.f_3={
-9.9f, 0.2f, -152.8f 
};
uParam0->f_29.f_12=40f;
uParam0->f_29.f_6={
-749.9f, -1426f, 5.9f 
};
uParam0->f_29.f_6.f_3={
-9.9f, 0.2f, -152.8f 
};
uParam0->f_29.f_13=0.2f;
uParam0->f_14.f_14=11f;
uParam0->f_48={
-738.7791f, -1439.377f, 9.125515f 
};
uParam0->f_51={
-755.9111f, -1425.006f, 1.688014f 
};
uParam0->f_54=18.0625f;
uParam0->f_55={
-708.48f, -1414.66f, 4f 
};
uParam0->f_58=370;
StringCopy(&(uParam0->f_59), "HELIPAD_NAME", 16);
uParam0->f_67=419850;
StringCopy(&(uParam0->f_63), "HELIPAD", 16);
uParam0->f_80=1;
break;
case 19:
*uParam0={
-709.095f, -1414.229f, 3.188014f 
};
uParam0->f_3={
-712.123f, -1411.655f, 6.938014f 
};
uParam0->f_6=3.25f;
uParam0->f_7={
-755.6812f, -1459.234f, 3.188023f 
};
uParam0->f_10={
-770.7671f, -1446.867f, 7.188024f 
};
uParam0->f_13=17.5625f;
uParam0->f_44={
-700.9434f, -1418.169f, 4.0005f 
};
uParam0->f_47=142.6382f;
uParam0->f_14={
-754.6f, -1460.5f, 6.4f 
};
uParam0->f_14.f_3={
-4.8f, 0f, 48.5f 
};
uParam0->f_14.f_12=45f;
uParam0->f_14.f_6={
-754.6f, -1460.6f, 6.1f 
};
uParam0->f_14.f_6.f_3={
-2.2f, 0f, 48.5f 
};
uParam0->f_14.f_13=0.2f;
uParam0->f_14.f_14=7f;
uParam0->f_29={
-771.8f, -1452.6f, 5.7f 
};
uParam0->f_29.f_3={
-4.1f, 0f, -98.6f 
};
uParam0->f_29.f_12=40f;
uParam0->f_29.f_6={
-771.8f, -1452.1f, 5.7f 
};
uParam0->f_29.f_6.f_3={
-4.1f, 0f, -98.6f 
};
uParam0->f_29.f_13=0.2f;
uParam0->f_14.f_14=11f;
uParam0->f_48={
-755.5715f, -1459.453f, 9.125514f 
};
uParam0->f_51={
-771.4204f, -1446.235f, 1.688017f 
};
uParam0->f_54=18.0625f;
uParam0->f_55={
-708.48f, -1414.66f, 4f 
};
uParam0->f_58=370;
StringCopy(&(uParam0->f_59), "HELIPAD_NAME", 16);
uParam0->f_67=419850;
StringCopy(&(uParam0->f_63), "HELIPAD", 16);
uParam0->f_80=1;
break;
case 20:
*uParam0={
1763.424f, 3238.282f, 40.32022f 
};
uParam0->f_3={
1786.589f, 3239.016f, 47.18534f 
};
uParam0->f_6=17.75f;
uParam0->f_7={
1763.424f, 3238.282f, 40.32022f 
};
uParam0->f_10={
1786.589f, 3239.016f, 47.18534f 
};
uParam0->f_13=17.75f;
uParam0->f_44={
1761.122f, 3250.125f, 40.733f 
};
uParam0->f_47=236.5858f;
uParam0->f_14={
1779.245f, 3222.477f, 48.5795f 
};
uParam0->f_14.f_3={
-31.2473f, 0f, 7.2108f 
};
uParam0->f_14.f_12=40f;
uParam0->f_14.f_6={
1779.245f, 3222.477f, 48.5795f 
};
uParam0->f_14.f_6.f_3={
-31.2473f, 0f, 7.2108f 
};
uParam0->f_14.f_13=0.2f;
uParam0->f_14.f_14=7f;
uParam0->f_29={
1779.245f, 3222.477f, 48.5795f 
};
uParam0->f_29.f_3={
-31.2473f, 0f, 7.2108f 
};
uParam0->f_29.f_12=40f;
uParam0->f_29.f_6={
1779.245f, 3222.477f, 48.5795f 
};
uParam0->f_29.f_6.f_3={
-31.2473f, 0f, 7.2108f 
};
uParam0->f_29.f_13=0.2f;
uParam0->f_14.f_14=11f;
uParam0->f_48={
1802.327f, 3245.165f, 46.95544f 
};
uParam0->f_51={
1755.04f, 3237.17f, 38.6937f 
};
uParam0->f_54=28.125f;
uParam0->f_55={
1769.3f, 3244f, 41.1f 
};
uParam0->f_58=370;
StringCopy(&(uParam0->f_59), "HELIPAD_NAME2", 16);
uParam0->f_67=0;
StringCopy(&(uParam0->f_63), "HELIPAD", 16);
uParam0->f_80=1;
break;
case 15:
*uParam0={
-826.5759f, -1368.475f, 3.750513f 
};
uParam0->f_3={
-827.868f, -1364.867f, 6.750514f 
};
uParam0->f_6=3.3125f;
uParam0->f_7={
-845.2216f, -1356.04f, -0.212093f 
};
uParam0->f_10={
-841.6451f, -1365.777f, 3.787907f 
};
uParam0->f_13=17.5625f;
uParam0->f_44={
-835.86f, -1358.347f, 0.6102f 
};
uParam0->f_47=112.3787f;
uParam0->f_14={
-859.6f, -1374f, 4.3f 
};
uParam0->f_14.f_3={
-3f, 0f, -48.3f 
};
uParam0->f_14.f_12=32.9f;
uParam0->f_14.f_6={
-859.7f, -1374f, 3f 
};
uParam0->f_14.f_6.f_3={
-3f, 0f, -48.3f 
};
uParam0->f_14.f_13=0.2f;
uParam0->f_14.f_14=7f;
uParam0->f_29={
-837.2f, -1350.3f, 2.4f 
};
uParam0->f_29.f_3={
-7f, 0f, 156.1f 
};
uParam0->f_29.f_12=47.5f;
uParam0->f_29.f_6={
-837.4f, -1350.8f, 2.3f 
};
uParam0->f_29.f_6.f_3={
-7f, 0f, 156.1f 
};
uParam0->f_29.f_13=0.2f;
uParam0->f_14.f_14=11f;
uParam0->f_48={
-860.0693f, -1314.887f, -3.331177f 
};
uParam0->f_51={
-826.6461f, -1410.447f, 4.787533f 
};
uParam0->f_54=19.625f;
uParam0->f_55={
-827.912f, -1366.736f, 4.0005f 
};
uParam0->f_58=371;
StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
uParam0->f_67=75000;
StringCopy(&(uParam0->f_63), "MARINA", 16);
uParam0->f_80=1;
break;
case 16:
*uParam0={
-826.5759f, -1368.475f, 3.750513f 
};
uParam0->f_3={
-827.868f, -1364.867f, 6.750514f 
};
uParam0->f_6=3.3125f;
uParam0->f_7={
-848.8177f, -1347.786f, -0.212093f 
};
uParam0->f_10={
-845.2482f, -1357.936f, 3.787908f 
};
uParam0->f_13=17.5625f;
uParam0->f_44={
-839.2461f, -1349.525f, 0.6102f 
};
uParam0->f_47=110.6762f;
uParam0->f_14={
-866.1f, -1365.6f, 4.3f 
};
uParam0->f_14.f_3={
-3.6f, 0f, -54.6f 
};
uParam0->f_14.f_12=30f;
uParam0->f_14.f_6={
-866.1f, -1365.6f, 3f 
};
uParam0->f_14.f_6.f_3={
-3.6f, 0f, -54.6f 
};
uParam0->f_14.f_13=0.2f;
uParam0->f_14.f_14=7f;
uParam0->f_29={
-838.7f, -1343.3f, 2.9f 
};
uParam0->f_29.f_3={
-7.5f, 0f, 142.6f 
};
uParam0->f_29.f_12=47.5f;
uParam0->f_29.f_6={
-838.8f, -1343.2f, 2.9f 
};
uParam0->f_29.f_6.f_3={
-7.5f, 0f, 142.6f 
};
uParam0->f_29.f_13=0.2f;
uParam0->f_14.f_14=11f;
uParam0->f_48={
-860.0693f, -1314.887f, -3.331177f 
};
uParam0->f_51={
-826.6461f, -1410.447f, 4.787533f 
};
uParam0->f_54=19.625f;
uParam0->f_55={
-827.912f, -1366.736f, 4.0005f 
};
uParam0->f_58=371;
StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
uParam0->f_67=75000;
StringCopy(&(uParam0->f_63), "MARINA", 16);
uParam0->f_80=1;
break;
case 17:
*uParam0={
-826.5759f, -1368.475f, 3.750513f 
};
uParam0->f_3={
-827.868f, -1364.867f, 6.750514f 
};
uParam0->f_6=3.3125f;
uParam0->f_7={
-851.6987f, -1339.128f, -0.212129f 
};
uParam0->f_10={
-848.128f, -1349.168f, 3.787905f 
};
uParam0->f_13=17.5625f;
uParam0->f_44={
-842.0763f, -1341.401f, 0.6102f 
};
uParam0->f_47=109.8916f;
uParam0->f_14={
-866.3f, -1357.9f, 4.3f 
};
uParam0->f_14.f_3={
-4.4f, 0f, -46.6f 
};
uParam0->f_14.f_12=31.2f;
uParam0->f_14.f_6={
-866.3f, -1357.9f, 3f 
};
uParam0->f_14.f_6.f_3={
-4.4f, 0f, -46.6f 
};
uParam0->f_14.f_13=0.2f;
uParam0->f_14.f_14=7f;
uParam0->f_29={
-841.6f, -1336.3f, 2.5f 
};
uParam0->f_29.f_3={
-3.6f, 0f, 137.7f 
};
uParam0->f_29.f_12=47.5f;
uParam0->f_29.f_6={
-841.8f, -1336.1f, 2.5f 
};
uParam0->f_29.f_6.f_3={
-3.6f, 0f, 137.7f 
};
uParam0->f_29.f_13=0.2f;
uParam0->f_14.f_14=11f;
uParam0->f_48={
-860.0693f, -1314.887f, -3.331177f 
};
uParam0->f_51={
-826.6461f, -1410.447f, 4.787533f 
};
uParam0->f_54=19.625f;
uParam0->f_55={
-827.912f, -1366.736f, 4.0005f 
};
uParam0->f_58=371;
StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
uParam0->f_67=75000;
StringCopy(&(uParam0->f_63), "MARINA", 16);
uParam0->f_80=1;
break;
case 21:
*uParam0={
-63.38147f, 84.0594f, 70.52139f 
};
uParam0->f_3={
-66.17774f, 77.95913f, 74.05372f 
};
uParam0->f_6=5.9375f;
uParam0->f_44={
-65.2041f, 81.0524f, 70.5666f 
};
uParam0->f_47=243.8699f;
uParam0->f_7={
189.7074f, -1017.569f, -105f 
};
uParam0->f_10={
207.8325f, -1017.774f, -96.63576f 
};
uParam0->f_13=23f;
uParam0->f_14={
191f, -1026.9f, -98.3f 
};
uParam0->f_14.f_3={
-2.4f, 0f, -77f 
};
uParam0->f_14.f_6={
190f, -1026.9f, -98.3f 
};
uParam0->f_14.f_6.f_3={
-4.3f, 0f, -57.6f 
};
uParam0->f_14.f_12=37f;
uParam0->f_14.f_13=0.2f;
uParam0->f_14.f_14=7.5f;
uParam0->f_29={
207.3f, -1013f, -98.2f 
};
uParam0->f_29.f_3={
-2.4f, 0f, 112.3f 
};
uParam0->f_29.f_6={
207.3f, -1013f, -98.2f 
};
uParam0->f_29.f_6.f_3={
-2.4f, 0f, 141f 
};
uParam0->f_29.f_12=37f;
uParam0->f_29.f_13=0.2f;
uParam0->f_29.f_14=11.5f;
uParam0->f_48={
221.9979f, -981.6635f, -100.1874f 
};
uParam0->f_51={
234.201f, -981.7582f, -97.62492f 
};
uParam0->f_54=6.25f;
uParam0->f_55={
-62.62f, 80.03f, 70.62f 
};
uParam0->f_58=369;
StringCopy(&(uParam0->f_59), "GARAGE_NAME1", 16);
uParam0->f_67=30000;
StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
uParam0->f_68=243.8699f;
uParam0->f_69=1;
uParam0->f_70[0 /*3*/]={
-67.9068f, 82.2664f, 70.5153f 
};
uParam0->f_77[0]=66.202f;
uParam0->f_70[1 /*3*/]={
-65.1234f, 81.2517f, 70.5644f 
};
uParam0->f_77[1]=71.6237f;
uParam0->f_80=1;
break;
case 22:
*uParam0={
-72.41166f, -1824.142f, 25.81704f 
};
uParam0->f_3={
-68.70254f, -1819.642f, 29.37954f 
};
uParam0->f_6=5.9375f;
uParam0->f_44={
-70.1992f, -1823.225f, 25.942f 
};
uParam0->f_47=46.1535f;
uParam0->f_7={
189.7074f, -1017.569f, -105f 
};
uParam0->f_10={
207.8325f, -1017.774f, -96.63576f 
};
uParam0->f_13=23f;
uParam0->f_14={
191f, -1026.9f, -98.3f 
};
uParam0->f_14.f_3={
-2.4f, 0f, -77f 
};
uParam0->f_14.f_6={
190f, -1026.9f, -98.3f 
};
uParam0->f_14.f_6.f_3={
-4.3f, 0f, -57.6f 
};
uParam0->f_14.f_12=37f;
uParam0->f_14.f_13=0.2f;
uParam0->f_14.f_14=7.5f;
uParam0->f_29={
207.3f, -1013f, -98.2f 
};
uParam0->f_29.f_3={
-2.4f, 0f, 112.3f 
};
uParam0->f_29.f_6={
207.3f, -1013f, -98.2f 
};
uParam0->f_29.f_6.f_3={
-2.4f, 0f, 141f 
};
uParam0->f_29.f_12=37f;
uParam0->f_29.f_13=0.2f;
uParam0->f_29.f_14=11.5f;
uParam0->f_48={
221.9979f, -981.6635f, -100.1874f 
};
uParam0->f_51={
234.201f, -981.7582f, -97.62492f 
};
uParam0->f_54=6.25f;
uParam0->f_55={
-71.29f, -1821.68f, 25.94f 
};
uParam0->f_58=369;
StringCopy(&(uParam0->f_59), "GARAGE_NAME2", 16);
uParam0->f_67=30000;
StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
uParam0->f_68=53.0985f;
uParam0->f_69=1;
uParam0->f_70[0 /*3*/]={
-64.2268f, -1832.598f, 25.8666f 
};
uParam0->f_77[0]=274.6339f;
uParam0->f_70[1 /*3*/]={
-68.5531f, -1824.377f, 25.9424f 
};
uParam0->f_77[1]=215.8295f;
uParam0->f_80=1;
break;
case 23:
*uParam0={
-220.7794f, -1159.28f, 21.90302f 
};
uParam0->f_3={
-220.7273f, -1165.265f, 25.45053f 
};
uParam0->f_6=5.9375f;
uParam0->f_44={
-220.7592f, -1162.277f, 22.0242f 
};
uParam0->f_47=271.2097f;
uParam0->f_7={
189.7074f, -1017.569f, -105f 
};
uParam0->f_10={
207.8325f, -1017.774f, -96.63576f 
};
uParam0->f_13=23f;
uParam0->f_14={
191f, -1026.9f, -98.3f 
};
uParam0->f_14.f_3={
-2.4f, 0f, -77f 
};
uParam0->f_14.f_6={
190f, -1026.9f, -98.3f 
};
uParam0->f_14.f_6.f_3={
-4.3f, 0f, -57.6f 
};
uParam0->f_14.f_12=37f;
uParam0->f_14.f_13=0.2f;
uParam0->f_14.f_14=7.5f;
uParam0->f_29={
207.3f, -1013f, -98.2f 
};
uParam0->f_29.f_3={
-2.4f, 0f, 112.3f 
};
uParam0->f_29.f_6={
207.3f, -1013f, -98.2f 
};
uParam0->f_29.f_6.f_3={
-2.4f, 0f, 141f 
};
uParam0->f_29.f_12=37f;
uParam0->f_29.f_13=0.2f;
uParam0->f_29.f_14=11.5f;
uParam0->f_48={
221.9979f, -981.6635f, -100.1874f 
};
uParam0->f_51={
234.201f, -981.7582f, -97.62492f 
};
uParam0->f_54=6.25f;
uParam0->f_55={
-218.35f, -1162.18f, 22.02f 
};
uParam0->f_58=369;
StringCopy(&(uParam0->f_59), "GARAGE_NAME3", 16);
uParam0->f_67=30000;
StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
uParam0->f_68=271.2097f;
uParam0->f_69=1;
uParam0->f_70[0 /*3*/]={
-222.1935f, -1162.113f, 22.0204f 
};
uParam0->f_77[0]=358.5703f;
uParam0->f_70[1 /*3*/]={
-220.8189f, -1162.302f, 22.0242f 
};
uParam0->f_77[1]=70.2711f;
uParam0->f_80=1;
break;
}
return uParam0->f_80;
}

int func_536(){
func_537();
return Global_113810.f_2366.f_539.f_4321;
}


void func_537(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_464(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_463(PLAYER::PLAYER_PED_ID());
if(func_25(iVar0) && (!func_27(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_25(Global_113810.f_2366.f_539.f_4321)){
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


void func_538(){
int iVar0;
iVar0=0;
while (iVar0 < 68){
if(HUD::DOES_BLIP_EXIST(Global_77479.f_208[iVar0])){
HUD::REMOVE_BLIP(&(Global_77479.f_208[iVar0]));
}
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iVar0])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_139[iVar0], 0)){
if(ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_77479.f_139[iVar0], 1)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iVar0]));
Global_77479.f_139[iVar0]=0;
}}}
iVar0++;
}
if(CAM::DOES_CAM_EXIST(Local_54.f_110)){
CAM::SET_CAM_ACTIVE(Local_54.f_110, 0);
CAM::DESTROY_CAM(Local_54.f_110, 0);
}
if(CAM::DOES_CAM_EXIST(Local_54.f_111)){
CAM::SET_CAM_ACTIVE(Local_54.f_111, 0);
CAM::DESTROY_CAM(Local_54.f_111, 0);
}
if(Local_54.f_3 !=0){
func_329();
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
}
if(HUD::DOES_BLIP_EXIST(Global_77479.f_583)){
HUD::REMOVE_BLIP(&(Global_77479.f_583));
}
if(iLocal_113 !=-1){
func_72(&iLocal_113);
}
if(iLocal_112 !=-1){
func_72(&iLocal_112);
}
if(Local_54.f_5 !=-1){
func_72(&(Local_54.f_5));
}
if(iLocal_123 !=-1){
func_72(&iLocal_123);
}
if(Local_54.f_3 > 0){
if(Global_77479.f_577){
func_280(47, 1);
func_278(47, 1);
Global_77479.f_577=0;
Local_54.f_3=0;
}}
Global_77479.f_553=0;
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_539(){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_51[iVar0])){
OBJECT::DELETE_OBJECT(&(uLocal_51[iVar0]));
}
iVar0++;
}}


void func_540(int iParam0){
int iVar0;
bool bVar1;
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
if(!MISC::IS_BIT_SET(iLocal_148[iVar0], bVar1)){
MISC::SET_BIT(&(iLocal_148[iVar0]), bVar1);
iLocal_147[iLocal_146]=iParam0;
iLocal_146++;
}}


void func_541(){
int iVar0;
if(func_352(25)){
if(Global_113810.f_32752.f_69[22 /*78*/].f_66 !=0 && !func_39(Global_113810.f_32752.f_69[22 /*78*/].f_66, 0, -1)){
Global_113810.f_32752.f_69[22 /*78*/].f_66=joaat("fugitive");
Global_113810.f_32752.f_69[22 /*78*/].f_77=0;
Global_113810.f_32752.f_69[22 /*78*/].f_65=0;
Global_113810.f_32752.f_69[22 /*78*/].f_62=255;
Global_113810.f_32752.f_69[22 /*78*/].f_63=255;
Global_113810.f_32752.f_69[22 /*78*/].f_64=255;
Global_113810.f_32752.f_69[22 /*78*/].f_5=0;
Global_113810.f_32752.f_69[22 /*78*/].f_6=0;
Global_113810.f_32752.f_69[22 /*78*/].f_7=0;
Global_113810.f_32752.f_69[22 /*78*/].f_8=156;
iVar0=0;
while (iVar0 < 49){
Global_113810.f_32752.f_69[22 /*78*/].f_9[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 2){
Global_113810.f_32752.f_69[22 /*78*/].f_59[iVar0]=0;
iVar0++;
}}}
if((func_352(21) && Global_113810.f_32752.f_69[9 /*78*/].f_66 !=0) && !func_39(Global_113810.f_32752.f_69[9 /*78*/].f_66, 0, -1)){
Global_113810.f_32752.f_69[9 /*78*/].f_66=0;
}
if((func_352(22) && Global_113810.f_32752.f_69[10 /*78*/].f_66 !=0) && !func_39(Global_113810.f_32752.f_69[10 /*78*/].f_66, 0, -1)){
Global_113810.f_32752.f_69[10 /*78*/].f_66=0;
}
if((func_352(23) && Global_113810.f_32752.f_69[11 /*78*/].f_66 !=0) && !func_39(Global_113810.f_32752.f_69[11 /*78*/].f_66, 0, -1)){
Global_113810.f_32752.f_69[11 /*78*/].f_66=0;
}
if(func_352(26) && !func_39(Global_113810.f_32752.f_69[12 /*78*/].f_66, 0, -1)){
func_542(26, 0);
}
if(func_352(27) && !func_39(Global_113810.f_32752.f_69[13 /*78*/].f_66, 0, -1)){
func_542(27, 0);
}
if(func_352(28) && !func_39(Global_113810.f_32752.f_69[14 /*78*/].f_66, 0, -1)){
func_542(28, 0);
}
if(func_352(29) && !func_39(Global_113810.f_32752.f_69[15 /*78*/].f_66, 0, -1)){
func_542(29, 0);
}
if(func_352(30) && !func_39(Global_113810.f_32752.f_69[16 /*78*/].f_66, 0, -1)){
func_542(30, 0);
}
if(func_352(31) && !func_39(Global_113810.f_32752.f_69[17 /*78*/].f_66, 0, -1)){
func_542(31, 0);
}
if(func_352(32) && !func_39(Global_113810.f_32752.f_69[18 /*78*/].f_66, 0, -1)){
func_542(32, 0);
}
if(func_352(33) && !func_39(Global_113810.f_32752.f_69[19 /*78*/].f_66, 0, -1)){
func_542(33, 0);
}
if(func_352(34) && !func_39(Global_113810.f_32752.f_69[20 /*78*/].f_66, 0, -1)){
func_542(34, 0);
}}


void func_542(int iParam0, bool bParam1){
if(iParam0==-1){
return;
}
if(bParam1){
if(!func_70(iParam0, 0)){
func_381(iParam0, 1, 0);
func_381(iParam0, 2, 0);
func_381(iParam0, 3, 0);
func_381(iParam0, 4, 0);
func_381(iParam0, 0, 1);
Global_77479[iParam0]=1;
}}else{
func_381(iParam0, 0, 0);
}}

int func_543(){
return 0;
}

int func_544(){
return 1;
}

int func_545(){
return 1;
}

int func_546(){
if(DLC::IS_DLC_PRESENT(-1226939934)){
return 1;
}
return 0;
}


void func_547(var uParam0){
*uParam0=0;
uParam0->f_1=-1;
uParam0->f_2=-1;
uParam0->f_9={
func_5("C_SF", "DL", "AST", "X1/BE") 
};
func_551();
func_550();
func_548();
}


void func_548(){
Global_112187=2405.849f;
Global_112190=2408.22f;
Global_112193=2386.096f;
Global_112196=69.1875f;
Global_112199[0 /*3*/]=2417.105f;
Global_112199[1 /*3*/]=2407.058f;
Global_112199[2 /*3*/]=2371.92f;
Global_112199[3 /*3*/]=2399.583f;
Global_112199[4 /*3*/]=2416.519f;
Global_112199[5 /*3*/]=2430.345f;
Global_112199[6 /*3*/]=2385.819f;
Global_112221[0]=157.8636f;
Global_112221[1]=174.7226f;
Global_112221[2]=270.7562f;
Global_112221[3]=190.7495f;
Global_112221[4]=27.6506f;
Global_112221[5]=358.1218f;
Global_112221[6]=339.4363f;
Global_112229=2399.82f;
Global_112232=2414.7f;
func_549(&Global_110556, 64);
}


void func_549(var uParam0, int iParam1){
*uParam0=(*uParam0 || iParam1);
}


void func_550(){
Global_110561[0 /*3*/].f_1=5141.01f;
Global_110561[1 /*3*/].f_1=6048.71f;
Global_110561[2 /*3*/].f_1=6185.32f;
Global_110561[3 /*3*/].f_1=5180.99f;
Global_110561[4 /*3*/].f_1=4582.72f;
Global_110561[5 /*3*/].f_1=4831.82f;
Global_110561[6 /*3*/].f_1=4322.66f;
Global_110561[7 /*3*/].f_1=3503.92f;
Global_110561[8 /*3*/].f_1=3777.54f;
Global_110561[9 /*3*/].f_1=3810.8f;
Global_110561[10 /*3*/].f_1=3095.88f;
Global_110595[0 /*13*/][0 /*3*/].f_1=5222.39f;
Global_110595[0 /*13*/][1 /*3*/].f_1=5333.68f;
Global_110595[0 /*13*/][2 /*3*/].f_1=5534.22f;
Global_110595[0 /*13*/][3 /*3*/].f_1=5843.98f;
Global_110595[1 /*13*/][0 /*3*/].f_1=5178.94f;
Global_110595[1 /*13*/][1 /*3*/].f_1=4956.4f;
Global_110595[1 /*13*/][2 /*3*/].f_1=5063.24f;
Global_110595[2 /*13*/][0 /*3*/].f_1=5027.97f;
Global_110595[2 /*13*/][1 /*3*/].f_1=4854.23f;
Global_110595[2 /*13*/][2 /*3*/].f_1=4770.31f;
Global_110595[3 /*13*/][0 /*3*/].f_1=6052.6f;
Global_110595[3 /*13*/][1 /*3*/].f_1=6086.12f;
Global_110595[3 /*13*/][2 /*3*/].f_1=6165.88f;
Global_110595[4 /*13*/][0 /*3*/].f_1=5880.13f;
Global_110595[4 /*13*/][1 /*3*/].f_1=5515.67f;
Global_110595[4 /*13*/][2 /*3*/].f_1=5195.4f;
Global_110595[5 /*13*/][0 /*3*/].f_1=6380.15f;
Global_110595[5 /*13*/][1 /*3*/].f_1=6193.92f;
Global_110595[5 /*13*/][2 /*3*/].f_1=5909.13f;
Global_110595[6 /*13*/][0 /*3*/].f_1=5072.56f;
Global_110595[6 /*13*/][1 /*3*/].f_1=5062.55f;
Global_110595[6 /*13*/][2 /*3*/].f_1=4964.13f;
Global_110595[7 /*13*/][0 /*3*/].f_1=4956.69f;
Global_110595[7 /*13*/][1 /*3*/].f_1=4767.8f;
Global_110595[7 /*13*/][2 /*3*/].f_1=4588.79f;
Global_110595[8 /*13*/][0 /*3*/].f_1=4783.28f;
Global_110595[8 /*13*/][1 /*3*/].f_1=4613.93f;
Global_110595[8 /*13*/][2 /*3*/].f_1=4737.46f;
Global_110595[9 /*13*/][0 /*3*/].f_1=4624.7f;
Global_110595[9 /*13*/][1 /*3*/].f_1=4286.39f;
Global_110595[9 /*13*/][2 /*3*/].f_1=4500.57f;
Global_110595[10 /*13*/][0 /*3*/].f_1=4618.13f;
Global_110595[10 /*13*/][1 /*3*/].f_1=4534.44f;
Global_110595[10 /*13*/][2 /*3*/].f_1=4493.64f;
Global_110595[11 /*13*/][0 /*3*/].f_1=4282.7f;
Global_110595[11 /*13*/][1 /*3*/].f_1=4111.71f;
Global_110595[11 /*13*/][2 /*3*/].f_1=3914.81f;
Global_110595[11 /*13*/][3 /*3*/].f_1=3894.7f;
Global_110595[12 /*13*/][0 /*3*/].f_1=4038.96f;
Global_110595[12 /*13*/][1 /*3*/].f_1=3849.33f;
Global_110595[12 /*13*/][2 /*3*/].f_1=3699.37f;
Global_110595[13 /*13*/][0 /*3*/].f_1=3970.96f;
Global_110595[13 /*13*/][1 /*3*/].f_1=3926.75f;
Global_110595[13 /*13*/][2 /*3*/].f_1=3874.89f;
Global_110595[14 /*13*/][0 /*3*/].f_1=3291.26f;
Global_110595[14 /*13*/][1 /*3*/].f_1=3436.6f;
Global_110595[14 /*13*/][2 /*3*/].f_1=3592.12f;
Global_110595[15 /*13*/][0 /*3*/].f_1=3710.49f;
Global_110595[15 /*13*/][1 /*3*/].f_1=3945.38f;
Global_110595[15 /*13*/][2 /*3*/].f_1=3854.2f;
Global_110595[15 /*13*/][3 /*3*/].f_1=3757.3f;
Global_110595[16 /*13*/][0 /*3*/].f_1=3528.6f;
Global_110595[16 /*13*/][1 /*3*/].f_1=3328.93f;
Global_110595[16 /*13*/][2 /*3*/].f_1=3157.76f;
Global_110595[17 /*13*/][0 /*3*/].f_1=3809.12f;
Global_110595[17 /*13*/][1 /*3*/].f_1=3826.24f;
Global_110595[17 /*13*/][2 /*3*/].f_1=3727.81f;
Global_110595[18 /*13*/][0 /*3*/].f_1=3610.22f;
Global_110595[18 /*13*/][1 /*3*/].f_1=3314.26f;
Global_110595[18 /*13*/][2 /*3*/].f_1=3034.58f;
Global_110595[19 /*13*/][0 /*3*/].f_1=3572.72f;
Global_110595[19 /*13*/][1 /*3*/].f_1=3261.69f;
Global_110595[19 /*13*/][2 /*3*/].f_1=3184.28f;
func_549(&Global_110556, 16);
}


void func_551(){
Global_110512[0 /*3*/]=-1567.382f;
Global_110512[1 /*3*/]=-1436.305f;
Global_110512[2 /*3*/]=31.2408f;
Global_110512[3 /*3*/]=278.1924f;
Global_110512[4 /*3*/]=1116.002f;
Global_110512[5 /*3*/]=1676.193f;
Global_110534[0 /*3*/]=-1592.642f;
Global_110534[1 /*3*/]=-1573.501f;
Global_110534[2 /*3*/]=-1459.359f;
Global_110534[3 /*3*/]=21.1005f;
Global_110534[4 /*3*/]=262.9409f;
Global_110534[5 /*3*/]=1091.07f;
func_549(&Global_110556, 1);
}