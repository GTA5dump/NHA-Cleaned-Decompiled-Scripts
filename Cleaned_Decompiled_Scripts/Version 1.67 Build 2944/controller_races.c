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
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82)){
func_31();
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("controller_races")) > 1){
SCRIPT::TERMINATE_THIS_THREAD();
}
while (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("initial")) > 0){
wait(0);
}
func_30();
while (true){
if(func_27(9) || Global_97733){
func_31();
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(func_25()){
func_23();
func_19();
if(func_12()==1){
switch (iLocal_26){
case 1:
break;
case 2:
func_1();
break;
}}}}
wait(1000);
}}


void func_1(){
bool bVar0;
int iVar1;
float fVar2;
if(func_11(8)){
bVar0=false;
while (bVar0 <=(5 - 1)){
iVar1=func_10(bVar0);
if(MISC::IS_BIT_SET(Global_113810.f_24982.f_1, bVar0)){
if(MISC::IS_BIT_SET(Global_113810.f_24982.f_3, bVar0)){
fVar2=vdist2(func_9(PLAYER::PLAYER_ID()), func_8(iVar1, 0));
if(fVar2 > 43681f){
if(!func_7(iVar1)){
if(!Global_113784[bVar0]){
func_3(iVar1);
func_2(iVar1, 1, 1);
MISC::CLEAR_BIT(&(Global_113810.f_24982.f_3), bVar0);
}elseif((MISC::GET_GAME_TIMER() - Global_113790[bVar0]) > 60000){
Global_113784[bVar0]=0;
Global_113790[bVar0]=MISC::GET_GAME_TIMER();
func_3(iVar1);
func_2(iVar1, 1, 1);
MISC::CLEAR_BIT(&(Global_113810.f_24982.f_3), bVar0);
}
}
else{
MISC::CLEAR_BIT(&(Global_113810.f_24982.f_3), bVar0);
}}elseif(func_7(iVar1)){
func_2(iVar1, 0, 1);
}}elseif(!func_7(iVar1)){
if(!Global_113784[bVar0]){
func_3(iVar1);
func_2(iVar1, 1, 1);
}elseif((MISC::GET_GAME_TIMER() - Global_113790[bVar0]) > 60000){
Global_113784[bVar0]=0;
Global_113790[bVar0]=MISC::GET_GAME_TIMER();
func_3(iVar1);
func_2(iVar1, 1, 1);
}}}
bVar0++;
}}}


void func_2(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(!bParam2){
iVar1=MISC::IS_BIT_SET(Global_32663[iVar0 /*23*/].f_11, 15);
if(iVar1==bParam1){
return;
}}
if(bParam1 !=MISC::IS_BIT_SET(Global_32663[iVar0 /*23*/].f_11, 0)){
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 18);
if(Global_32660==1){
Global_32661=1;
}
Global_32660=1;
}
if(bParam1){
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 0);
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 15);
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 3);
}else{
MISC::CLEAR_BIT(&(Global_32663[iVar0 /*23*/].f_11), false);
MISC::CLEAR_BIT(&(Global_32663[iVar0 /*23*/].f_11), 15);
}
if(!MISC::IS_BIT_SET(Global_32663[iVar0 /*23*/].f_11, 0)){
if(HUD::DOES_BLIP_EXIST(Global_32663[iVar0 /*23*/].f_19)){
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
HUD::REMOVE_BLIP(&(Global_32663[iVar0 /*23*/].f_19));
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
}}}


void func_3(int iParam0){
func_6(iParam0, 0, 0);
func_5(iParam0, 1);
func_4(iParam0, 1);
}


void func_4(int iParam0, bool bParam1){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(bParam1==MISC::IS_BIT_SET(Global_32663[iVar0 /*23*/].f_11, 4)){
return;
}
if(bParam1){
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 4);
}else{
MISC::CLEAR_BIT(&(Global_32663[iVar0 /*23*/].f_11), 4);
}
if(Global_32660==1){
Global_32661=1;
}
Global_32660=1;
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 18);
}


void func_5(int iParam0, bool bParam1){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(bParam1==MISC::IS_BIT_SET(Global_32663[iVar0 /*23*/].f_11, 5)){
return;
}
if(bParam1){
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 5);
}else{
MISC::CLEAR_BIT(&(Global_32663[iVar0 /*23*/].f_11), 5);
}
if(Global_32660==1){
Global_32661=1;
}
Global_32660=1;
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 18);
}


void func_6(int iParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(bParam1==MISC::IS_BIT_SET(Global_32663[iVar0 /*23*/].f_11, 6)){
return;
}
if(bParam1){
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 6);
}else{
MISC::CLEAR_BIT(&(Global_32663[iVar0 /*23*/].f_11), 6);
}
if(bParam2){
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 11);
}else{
MISC::CLEAR_BIT(&(Global_32663[iVar0 /*23*/].f_11), 11);
}
if(Global_32660==1){
Global_32661=1;
}
Global_32660=1;
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 18);
}


bool func_7(int iParam0){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return 0;
}
return HUD::DOES_BLIP_EXIST(Global_32663[iVar0 /*23*/].f_19);
}


Vector3 func__8(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return 0f, 0f, 0f;
}
return Global_32663[iVar0 /*23*/][iParam1 /*3*/];
}


Vector3 func__9(var uParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

int func_10(int iParam0){
switch (iParam0){
case 0:
return 86;
break;
case 1:
return 87;
break;
case 2:
return 88;
break;
case 3:
return 89;
break;
case 4:
return 90;
break;
}
return 86;
}


bool func_11(int iParam0){
return MISC::IS_BIT_SET(Global_113810.f_9088.f_99.f_219[0], iParam0);
}

int func_12(){
func_13();
return Global_113810.f_2366.f_539.f_4321;
}


void func_13(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_17(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_16(PLAYER::PLAYER_PED_ID());
if(func_15(iVar0) && (!func_14(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_15(Global_113810.f_2366.f_539.f_4321)){
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


bool func_14(int iParam0){
return Global_43377==iParam0;
}


bool func_15(int iParam0){
return iParam0 < 3;
}

int func_16(var uParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(uParam0);
iVar0=0;
while (iVar0 <=2){
if(func_17(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_17(int iParam0){
if(func_15(iParam0)){
return func_18(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__18(int iParam0){
return Global_2058[iParam0 /*29*/];
}


void func_19(){
bool bVar0;
int iVar1;
float fVar2;
if(func_11(7)){
bVar0=false;
while (bVar0 <=(4 - 1)){
iVar1=func_22(bVar0);
if(MISC::IS_BIT_SET(Global_113810.f_24979.f_2, bVar0)){
fVar2=vdist2(func_9(PLAYER::PLAYER_ID()), func_8(iVar1, 0));
if(fVar2 > 43681f){
if(!func_7(iVar1)){
if(!Global_113774[bVar0]){
func_3(iVar1);
func_2(iVar1, 1, 1);
MISC::CLEAR_BIT(&(Global_113810.f_24979.f_2), bVar0);
}
elseif((MISC::GET_GAME_TIMER() - Global_113779[bVar0]) > 60000){
Global_113774[bVar0]=0;
Global_113779[bVar0]=MISC::GET_GAME_TIMER();
func_3(iVar1);
func_2(iVar1, 1, 1);
MISC::CLEAR_BIT(&(Global_113810.f_24979.f_2), bVar0);
}}}elseif(func_7(iVar1)){
func_2(iVar1, 0, 1);
}}elseif(!func_7(iVar1)){
if(!Global_113774[bVar0]){
func_3(iVar1);
func_2(iVar1, 1, 1);
}elseif((MISC::GET_GAME_TIMER() - Global_113779[bVar0]) > 60000){
Global_113774[bVar0]=0;
Global_113779[bVar0]=MISC::GET_GAME_TIMER();
func_3(iVar1);
func_2(iVar1, 1, 1);
}}elseif(!Global_113810.f_24979){
if(iVar1==82){
func_21(82);
func_20(65, 1000);
Global_113810.f_24979=1;
}}
bVar0++;
}}}


void func_20(int iParam0, int iParam1){
if(iParam0==235 || iParam0==0){
return;
}
Global_113810.f_8616[iParam0]=1;
Global_113810.f_8616.f_236[iParam0]=(MISC::GET_GAME_TIMER() + iParam1);
}


void func_21(int iParam0){
func_6(iParam0, 1, 0);
func_5(iParam0, 1);
func_4(iParam0, 1);
}

int func_22(int iParam0){
switch (iParam0){
case 0:
return 82;
break;
case 1:
return 83;
break;
case 2:
return 84;
break;
case 3:
return 85;
break;
}
return 82;
}


void func_23(){
switch (iLocal_26){
case 0:
if(CLOCK::GET_CLOCK_HOURS() < 20 && CLOCK::GET_CLOCK_HOURS() >=5){
func_24();
iLocal_26=1;
}else{
iLocal_26=2;
}
break;
case 1:
if(CLOCK::GET_CLOCK_HOURS() >=20 || CLOCK::GET_CLOCK_HOURS() < 5){
iLocal_26=2;
}
break;
case 2:
if(CLOCK::GET_CLOCK_HOURS() < 20 && CLOCK::GET_CLOCK_HOURS() >=5){
func_24();
iLocal_26=1;
}
break;
}}


void func_24(){
int iVar0;
iVar0=0;
while (iVar0 <=(5 - 1)){
func_2(func_10(iVar0), 0, 0);
iVar0++;
}}

int func_25(){
if(func_27(9)){
return 0;
}
if(func_26()){
return 0;
}
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0){
return 0;
}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
return 0;
}
return 1;
}

int func_26(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0){
return 1;
}
return 0;
}

int func_27(int iParam0){
if(Global_43377==15){
return 0;
}
if(func_28(iParam0)){
return 0;
}
return 1;
}


bool func_28(int iParam0){
return func_29(iParam0, Global_43377);
}

int func_29(int iParam0, int iParam1){
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


void func_30(){
int iVar0;
iVar0=0;
while (iVar0 <=(4 - 1)){
Global_113774[iVar0]=0;
Global_113779[iVar0]=MISC::GET_GAME_TIMER();
iVar0++;
}
iVar0=0;
while (iVar0 <=(5 - 1)){
Global_113784[iVar0]=0;
iVar0++;
}}


void func_31(){
SCRIPT::TERMINATE_THIS_THREAD();
}