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
var uLocal_19=0;
var uLocal_20=0;
float fLocal_21=0f;
float fLocal_22=0f;
float fLocal_23=0f;
var uLocal_24=0;
var uLocal_25=0;
float fLocal_26=0f;
var uLocal_27=0;
var uLocal_28=0;
var uLocal_29=0;
float fLocal_30=0f;
float fLocal_31=0f;
var uLocal_32=0;
#endregion

void __EntryFunction__(){
int iVar0;
int iVar1;
struct<3> Var2;
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
fLocal_21=80f;
fLocal_22=140f;
fLocal_23=180f;
fLocal_26=0f;
fLocal_30=-0.0375f;
fLocal_31=0.17f;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(98)){
func_15();
}
func_14();
iVar0=0;
while (true){
wait(500);
iVar1=0;
Var2={
0f, 0f, 0f 
};
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Var2={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
while (iVar1 !=2){
if(func_13(&(Global_32624[iVar0 /*7*/]))){
if(func_12(iVar0, Var2)){
func_11(&(Global_32624[iVar0 /*7*/]), 2);
if(Global_32624[iVar0 /*7*/].f_5 !=0){
if(SCRIPT::IS_THREAD_ACTIVE(Global_32624[iVar0 /*7*/].f_5)){
PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_32624[iVar0 /*7*/].f_5, 1);
}
Global_32624[iVar0 /*7*/].f_5=0;
}}}elseif(!func_10(Global_32624[iVar0 /*7*/], 4)){
if(func_5(&(Global_32624[iVar0 /*7*/]), Var2)){
func_1(iVar0);
}}
iVar1++;
iVar0++;
if(iVar0==5){
iVar0=0;
}}}}


void func_1(int iParam0){
char* sVar0;
int iVar1;
int iVar2;
bool bVar3;
iVar2=1424;
bVar3=true;
switch (iParam0){
case 0:
sVar0="re_ArmyBase";
iVar1=joaat("re_armybase");
break;
case 1:
iVar2=5050;
sVar0="golf_ai_foursome";
iVar1=joaat("golf_ai_foursome");
bVar3=false;
break;
case 3:
sVar0="re_Prison";
iVar1=joaat("re_prison");
break;
case 2:
iVar2=5050;
sVar0="golf_ai_foursome_putting";
iVar1=joaat("golf_ai_foursome_putting");
bVar3=false;
break;
case 4:
iVar2=2050;
sVar0="stripclub";
iVar1=joaat("stripclub");
bVar3=false;
break;
}
if(!bVar3 && func_3()){
return;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING(sVar0) !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(iVar1)==0){
SCRIPT::REQUEST_SCRIPT(sVar0);
while (!SCRIPT::HAS_SCRIPT_LOADED(sVar0)){
wait(0);
}
Global_32624[iParam0 /*7*/].f_5=start_new_script(sVar0, iVar2);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
if(Global_32624[iParam0 /*7*/].f_5 !=0){
func_2(&(Global_32624[iParam0 /*7*/]), 2);
}}}}


void func_2(var uParam0, int iParam1){
*uParam0=(*uParam0 || iParam1);
}

int func_3(){
if(func_4()==0){
return 1;
}
return 0;
}

int func_4(){
return Global_32283;
}

int func_5(var uParam0, struct<3> Param1){
if(!func_10(*uParam0, 1)){
if(func_9() && !func_6(6)){
return 0;
}}
if(vdist2(Param1, uParam0->f_2) > uParam0->f_1){
return 0;
}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2080.115f, 3292.193f, -11.667f, -2112.049f, 3224.331f, 11.667f, 115f, 1, 0, 0)){
return 0;
}}
return 1;
}

int func_6(int iParam0){
if(Global_43377==15){
return 0;
}
if(func_7(iParam0)){
return 0;
}
return 1;
}


bool func_7(int iParam0){
return func_8(iParam0, Global_43377);
}

int func_8(int iParam0, int iParam1){
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

int func_9(){
if(Global_43377==15){
return 0;
}
return 1;
}


bool func_10(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}


void func_11(var uParam0, int iParam1){
*uParam0=(*uParam0 - (*uParam0 && iParam1));
}

int func_12(int iParam0, struct<3> Param1){
Param1.f_2=0f;
if(!SCRIPT::IS_THREAD_ACTIVE(Global_32624[iParam0 /*7*/].f_5)){
return 1;
}
if(func_10(Global_32624[iParam0 /*7*/], 4)){
return 1;
}
if(func_9() && !func_6(6)){
if(!func_10(Global_32624[iParam0 /*7*/], 1)){
if(iParam0==1 || iParam0==2){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("golf"))==0){
return 1;
}}else{
return 1;
}}}
if(vdist2(Global_32624[iParam0 /*7*/].f_2, Param1) > (Global_32624[iParam0 /*7*/].f_1 + 400f)){
return 1;
}
return 0;
}


bool func_13(var uParam0){
return func_10(*uParam0, 2);
}


void func_14(){
int iVar0;
Global_32624[0 /*7*/].f_2={
-2189.545f, 3129.613f, 0f 
};
Global_32624[0 /*7*/].f_1=(1000f * 1000f);
Global_32624[0 /*7*/]=0;
Global_32624[0 /*7*/].f_5=0;
Global_32624[1 /*7*/].f_2={
-1172.822f, 66.5235f, 0f 
};
Global_32624[1 /*7*/].f_1=(300f * 300f);
Global_32624[1 /*7*/]=0;
Global_32624[1 /*7*/].f_5=0;
Global_32624[3 /*7*/].f_2={
1692.147f, 2562.313f, 0f 
};
Global_32624[3 /*7*/].f_1=(300f * 300f);
Global_32624[3 /*7*/]=0;
Global_32624[3 /*7*/].f_5=0;
Global_32624[2 /*7*/].f_2={
-1329.68f, 60.3478f, 0f 
};
Global_32624[2 /*7*/].f_1=(250f * 250f);
Global_32624[2 /*7*/]=0;
Global_32624[2 /*7*/].f_5=0;
Global_32624[4 /*7*/].f_2={
114.64f, -1290.34f, 0f 
};
Global_32624[4 /*7*/].f_1=(100f * 100f);
Global_32624[4 /*7*/]=1;
Global_32624[4 /*7*/].f_5=0;
iVar0=0;
while (iVar0 <=(5 - 1)){
Global_32624[iVar0 /*7*/].f_2.f_2=0f;
iVar0++;
}}


void func_15(){
SCRIPT::TERMINATE_THIS_THREAD();
}