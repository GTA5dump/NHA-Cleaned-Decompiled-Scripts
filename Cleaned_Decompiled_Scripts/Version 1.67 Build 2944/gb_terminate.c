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
var uLocal_26=0;
var uLocal_27=0;
float fLocal_28=0f;
float fLocal_29=0f;
float fLocal_30=0f;
var uLocal_31=0;
var uLocal_32=0;
var uLocal_33=0;
int iLocal_34=0;
var uLocal_35=0;
var uLocal_36=0;
var uLocal_37=0;
int iLocal_38=0;
int iLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
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
var uLocal_59=0;
var uLocal_60=0;
float fLocal_61=0f;
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
struct<11> Local_96={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<4> Local_97[32];
struct<21> Local_98={
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
sLocal_18="NULL";
fLocal_19=0f;
fLocal_23=-0.0375f;
fLocal_24=0.17f;
fLocal_28=80f;
fLocal_29=140f;
fLocal_30=180f;
iLocal_34=3;
iLocal_38=1;
iLocal_39=65;
iLocal_40=49;
iLocal_41=64;
fLocal_61=((0.05f + 0.275f) - 0.01f);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_749(ScriptParam_98)){
func_685();
}}
while (true){
func_684();
if(func_679()){
func_685();
}
switch (func_678(NETWORK::PARTICIPANT_ID_TO_INT())){
case 0:
if(func_677()==1){
if(func_676()){
func_675(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
}}
break;
case 1:
if(func_677()==1){
if(!func_673()){
func_111();
}
if(func_54(1)){
func_675(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
}}elseif(func_677()==3){
func_675(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
}
break;
case 3:
func_685();
break;
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(func_53()){
func_52(3);
}
switch (func_677()){
case 0:
if(func_44()){
func_52(1);
}
break;
case 1:
if(func_43()==3){
func_52(3);
}else{
func_1();
}
break;
case 3:
func_685();
break;
}}}}


void func_1(){
switch (Local_96.f_8){
case 0:
if(func_42()){
func_41(1);
}
func_39();
break;
case 1:
func_39();
func_2();
break;
case 2:
if(MISC::IS_BIT_SET(Local_96.f_1, 5)){
func_41(3);
}
func_39();
break;
case 3:
break;
}}


void func_2(){
if(!func_14(func_38())){
func_13(1);
func_41(2);
MISC::SET_BIT(&(Local_96.f_1), 2);
}
if(func_12()==func_11() || !func_10(func_12(), 0, 1)){
func_13(3);
func_41(2);
MISC::SET_BIT(&(Local_96.f_1), 3);
}
if(MISC::IS_BIT_SET(Local_96.f_1, 0)){
if(func_3(&(Local_96.f_4), func_5(), 0)){
MISC::SET_BIT(&(Local_96.f_1), 4);
}}
if(MISC::IS_BIT_SET(Local_96.f_1, 4)){
func_13(2);
func_41(2);
}
if(MISC::IS_BIT_SET(Local_96.f_1, 1) || MISC::IS_BIT_SET(Local_96.f_1, 7)){
func_13(0);
func_41(2);
}}

int func_3(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_4(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_4(var uParam0, bool bParam1, bool bParam2){
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

int func_5(){
if(func_6(PLAYER::PLAYER_ID(), 1)){
return 120000;
}
return 300000;
}


bool func_6(bool bParam0, bool bParam1){
return func_7(bParam0, bParam1, 1);
}

int func_7(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(!func_9(iParam0)){
return 0;
}
if(!bParam1){
if(func_8(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1895156[iParam0 /*609*/].f_10;
if(iVar0 !=func_11() && Global_1895156[iVar0 /*609*/].f_10.f_429==iParam2){
return 1;
}
return 0;
}

int func_8(bool bParam0, int iParam1){
if(func_9(bParam0)){
if(Global_1895156[bParam0 /*609*/].f_10 !=func_11()){
if(Global_1895156[bParam0 /*609*/].f_10==bParam0 && Global_1895156[bParam0 /*609*/].f_10.f_429==iParam1){
return 1;
}}}
return 0;
}

int func_9(var uParam0){
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

int func_10(bool bParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=bParam0;
if(iVar0 !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0)){
if(bParam1){
if(!PLAYER::IS_PLAYER_PLAYING(bParam0)){
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

int func_11(){
return -1;
}


bool func_12(){
return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
}


void func_13(int iParam0){
Local_96.f_9=iParam0;
}

int func_14(bool bParam0){
if(func_35(bParam0) && ((func_33(bParam0)==142 || func_33(bParam0)==164) || func_33(bParam0)==148)){
return 0;
}
if(bParam0==func_11()){
return 0;
}
if(!func_10(bParam0, 0, 1)){
return 0;
}
if(func_32(bParam0, 1, 0)){
return 0;
}
if(func_31(bParam0)){
return 0;
}
if(func_29(bParam0, 1) && func_28(bParam0)==func_12()){
return 0;
}
if(func_24(bParam0)){
return 0;
}
if(func_23(bParam0, 7)){
return 0;
}
if(func_18(bParam0)){
return 0;
}
if(func_15(bParam0, 6)){
return 0;
}
return 1;
}

int func_15(bool bParam0, int iParam1){
bool bVar0;
if(func_17() !=0){
return 0;
}
if(!func_16(bParam0)){
return 0;
}
bVar0=bParam0;
if(Global_1853988[bVar0 /*867*/]==iParam1){
return 1;
}
return 0;
}

int func_16(bool bParam0){
if(!func_9(bParam0)){
return 0;
}
return MISC::IS_BIT_SET(Global_2672524.f_1, bParam0);
}

int func_17(){
return Global_32283;
}

int func_18(bool bParam0){
if(func_20(bParam0, 0)){
return 1;
}
if(func_19()){
if(bParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657704[bParam0 /*463*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_19(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}


bool func_20(bool bParam0, int iParam1){
bool bVar0;
if(!func_9(bParam0)){
return 0;
}
if(bParam0==PLAYER::PLAYER_ID()){
bVar0=func_21(-1, 0)==8;
}else{
bVar0=Global_1853988[bParam0 /*867*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(bParam0)==8;
}}
return bVar0;
}

int func_21(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_22();
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

int func_22(){
return Global_1574918;
}


bool func_23(bool bParam0, int iParam1){
return MISC::IS_BIT_SET(Global_2657704[bParam0 /*463*/].f_218, iParam1);
}


bool func_24(bool bParam0){
if(bParam0==PLAYER::PLAYER_ID()){
return func_27();
}
return MISC::IS_BIT_SET(Global_1654054.f_241.f_136[func_26(10) /*33*/][bParam0], func_25(10));
}

int func_25(int iParam0){
return (iParam0 % 32);
}

int func_26(int iParam0){
return (iParam0 / 32);
}


bool func_27(){
return Global_1574582;
}

int func_28(bool bParam0){
if(func_9(bParam0)){
return Global_1895156[bParam0 /*609*/].f_10;
}
return func_11();
}


bool func_29(bool bParam0, bool bParam1){
if(!func_9(bParam0)){
return 0;
}
if(!bParam1){
if(func_30(bParam0)){
return 0;
}}
return Global_1895156[bParam0 /*609*/].f_10 !=func_11();
}

int func_30(bool bParam0){
if(func_9(bParam0)){
if(Global_1895156[bParam0 /*609*/].f_10 !=func_11()){
return Global_1895156[bParam0 /*609*/].f_10==bParam0;
}}
return 0;
}


bool func_31(bool bParam0){
return Global_1853988[bParam0 /*867*/].f_192 !=0;
}

int func_32(bool bParam0, bool bParam1, bool bParam2){
if(bParam0==func_11()){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[bParam0 /*867*/].f_267.f_31, 0)){
return 1;
}
if(bParam1){
if(MISC::IS_BIT_SET(Global_1853988[bParam0 /*867*/].f_267.f_31, 1)){
return 1;
}}
if(bParam2){
if(Global_2657704[bParam0 /*463*/].f_321.f_7 !=-1){
return 1;
}}
return 0;
}

int func_33(bool bParam0){
if(func_9(bParam0)){
if(func_34(bParam0, 0)){
return Global_1895156[bParam0 /*609*/].f_10.f_33;
}}
return -1;
}

int func_34(bool bParam0, int iParam1){
if(func_9(bParam0)){
if(Global_1895156[bParam0 /*609*/].f_10.f_33 !=-1 || (iParam1 && Global_1895156[bParam0 /*609*/].f_10.f_32 !=-1)){
return 1;
}}
return 0;
}

int func_35(int iParam0){
if(func_30(iParam0)){
if(func_36(iParam0)){
return 1;
}}
return 0;
}

int func_36(bool bParam0){
int iVar0;
iVar0=bParam0;
if(iVar0 !=-1){
return func_37(bParam0, 9);
}
return 0;
}


bool func_37(bool bParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[bParam0 /*609*/].f_10.f_4, iParam1);
}


bool func_38(){
return Local_96.f_2;
}


void func_39(){
int iVar0;
int iVar1;
int iVar2;
iVar1=NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS();
iVar2=0;
while (iVar2 < iVar1){
if(func_43() < 2){
if(MISC::IS_BIT_SET(Local_97[iVar2 /*4*/].f_1, 1)){
func_40(PLAYER::INT_TO_PLAYERINDEX(iVar2));
MISC::SET_BIT(&(Local_96.f_1), true);
}
if(MISC::IS_BIT_SET(Local_97[iVar2 /*4*/].f_1, 4)){
func_40(func_12());
MISC::SET_BIT(&(Local_96.f_1), 7);
}
if(MISC::IS_BIT_SET(Local_97[iVar2 /*4*/].f_1, 0)){
MISC::SET_BIT(&(Local_96.f_1), false);
}
if(MISC::IS_BIT_SET(Local_97[iVar2 /*4*/].f_1, 2)){
MISC::SET_BIT(&(Local_96.f_1), 4);
}}elseif(func_43()==2){
if(MISC::IS_BIT_SET(Local_97[iVar2 /*4*/].f_1, 3)){
iVar0++;
}}
iVar2++;
}
if(func_43()==2){
if(iVar0==NETWORK::NETWORK_GET_NUM_PARTICIPANTS()){
MISC::SET_BIT(&(Local_96.f_1), 5);
}elseif(func_3(&(Local_96.f_6), 10000, 0)){
MISC::SET_BIT(&(Local_96.f_1), 5);
}}}


void func_40(bool bParam0){
Local_96.f_3=bParam0;
}


void func_41(int iParam0){
Local_96.f_8=iParam0;
}

int func_42(){
return 1;
}

int func_43(){
return Local_96.f_8;
}

int func_44(){
if(func_45()){
return 1;
}
return 0;
}

int func_45(){
if(MISC::IS_BIT_SET(Local_96.f_1, 6)){
return 1;
}
func_51(func_11());
if(Global_2794162.f_5231.f_4 !=func_11()){}else{
func_52(3);
}
if(func_10(Global_2794162.f_5231.f_4, 0, 1)){
if(!func_49(Global_2794162.f_5231.f_4, PLAYER::PLAYER_ID(), 1)){
func_51(Global_2794162.f_5231.f_4);
}}
if(func_38() !=func_11()){
if(func_6(PLAYER::PLAYER_ID(), 1)){
if(func_48(func_38(), 4)){
Local_96.f_10=1;
}}
func_46(func_47(func_38()), 1);
Global_2794162.f_5231.f_4=func_11();
MISC::SET_BIT(&(Local_96.f_1), 6);
return 1;
}elseif(func_38()==func_11()){}
return 0;
}


void func_46(int iParam0, int iParam1){
struct<3> Var0;
Var0.f_0=949664396;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam1;
if(!iParam0==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 3, iParam0);
}}

int func_47(bool bParam0){
var uVar0;
if(func_9(bParam0)){
MISC::SET_BIT(&uVar0, bParam0);
}
return uVar0;
}


bool func_48(bool bParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[bParam0 /*609*/].f_10.f_5, iParam1);
}

int func_49(bool bParam0, bool bParam1, bool bParam2){
if(func_9(bParam1)){
if(!bParam2){
if(func_50(bParam0, bParam1)){
return 0;
}}
if(Global_1895156[bParam0 /*609*/].f_10 !=func_11()){
return bParam1==Global_1895156[bParam0 /*609*/].f_10;
}}
return 0;
}

int func_50(int iParam0, int iParam1){
if(iParam1 !=func_11()){
if(iParam0 !=func_11()){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_11()){
if(Global_1895156[iParam0 /*609*/].f_10==iParam0){
return iParam1==iParam0;
}}}}
return 0;
}


void func_51(bool bParam0){
Local_96.f_2=bParam0;
if(bParam0==func_11()){}}


void func_52(int iParam0){
Local_96.f_0=iParam0;
}

int func_53(){
if(Global_2794162.f_5231.f_43){
Global_2794162.f_5231.f_43=0;
return 1;
}
return 0;
}

int func_54(bool bParam0){
if(!func_110(PLAYER::PLAYER_ID(), 3) && func_65(1)){
return 1;
}
if(Global_2794162.f_5231.f_44){
Global_2794162.f_5231.f_44=0;
return 1;
}
if(bParam0){
if(func_64()==func_11() || !func_10(func_64(), 0, 1)){
return 1;
}}
if(func_110(PLAYER::PLAYER_ID(), 1) && !func_62(PLAYER::PLAYER_ID())){
if(func_55()){
return 1;
}}
return 0;
}

int func_55(){
if(func_61(PLAYER::PLAYER_ID()) && func_58()){
return 1;
}
if(func_56()){
return 1;
}
return 0;
}


bool func_56(){
return func_57()==1;
}

int func_57(){
return Global_1978359;
}

int func_58(){
switch (func_59(func_60(PLAYER::PLAYER_ID()))){
case 11:
case 14:
case 24:
return 1;
default:
}
return 0;
}

int func_59(int iParam0){
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

int func_60(bool bParam0){
if(bParam0 !=func_11() && func_10(bParam0, 1, 1)){
return Global_2657704[bParam0 /*463*/].f_321.f_17;
}
return -1;
}

int func_61(bool bParam0){
if(bParam0 !=func_11() && func_10(bParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657704[bParam0 /*463*/].f_321, 4);
}
return 0;
}

int func_62(bool bParam0){
if(func_63(bParam0) !=func_11()){
return func_63(bParam0)==func_28(bParam0);
}
return 0;
}

int func_63(int iParam0){
return Global_1895156[iParam0 /*609*/].f_10.f_35;
}


bool func_64(){
return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_35;
}

int func_65(bool bParam0){
bool bVar0;
if(!func_109(1) && func_64() !=PLAYER::PLAYER_ID()){
bVar0=false;
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_57 !=func_11()){
if(func_10(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_57, 0, 1)){
if((Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_24==4 || Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_24==8) || Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_24==6){
bVar0=true;
}}}elseif(func_108(func_33(PLAYER::PLAYER_ID()))==0 || func_108(func_33(PLAYER::PLAYER_ID()))==3){
bVar0=true;
}
if(bVar0){
if(bParam0){
func_107(31);
if(func_106(func_33(PLAYER::PLAYER_ID()))){
func_107(81);
}
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_57 !=func_11() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_57)){
Global_1890083=func_67(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_57, -2, 0, 0, 0);
if(!func_66(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_57)){
func_107(88);
}}else{
Global_1890083=1;
}
Global_1890067={
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_105 
};
}
return 1;
}}
return 0;
}


bool func_66(int iParam0){
return func_8(iParam0, 1);
}

int func_67(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
var uVar1;
if(!func_9(bParam0)){
return 1;
}
if(func_18(bParam0) && !bParam4){
if(bParam2){
return 0;
}else{
return 1;
}}
if(iParam1==-2){
iVar0=PLAYER::GET_PLAYER_TEAM(bParam0);
if(iVar0 > -1 && iVar0 < 4){
if(Global_4718592.f_112316[iVar0] !=-1){
iParam1=iVar0;
}}}
if(((func_18(PLAYER::PLAYER_ID()) || (func_105() && func_104())) && !MISC::IS_BIT_SET(Global_2794162.f_4697, 31)) && !bParam4){
uVar1=func_103();
if(ENTITY::DOES_ENTITY_EXIST(uVar1)){
if(PED::IS_PED_A_PLAYER(uVar1)){
if(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1) !=-1){
if(func_10(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1), 0, 1)){
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_112316[iParam1] !=-1){
return func_101(iParam1, bParam0, 0);
}else{
return func_82(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1), iParam1, bParam2, bParam3);
}
}
else{
return func_82(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1), iParam1, bParam2, bParam3);
}}}}elseif((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_112316[iParam1] !=-1){
return func_101(iParam1, bParam0, 0);
}else{
return func_68(0, -1, 0);
}}else{
return func_68(0, -1, 0);
}}}
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_112316[iParam1] !=-1){
return func_101(iParam1, bParam0, 0);
}else{
return func_82(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}}
return func_82(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_68(bool bParam0, int iParam1, bool bParam2){
return func_69(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_69(bool bParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
if(!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
return 3;
}
iVar0=PLAYER::GET_PLAYER_TEAM(bParam0);
if((func_81() || (func_80() && func_78())) && Global_1665516.f_1){
if(bParam1){
return func_77(iParam2, iVar0);
}else{
return func_77(iVar0, iVar0);
}}
if(bParam1){
if(iParam2 > -1){
if(func_74(iVar0, iParam2, 0, -1) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)){
if(iVar0==iParam2){
return func_73(1);
}else{
return func_73(0);
}}elseif(bParam3){
return 28;
}elseif(MISC::IS_BIT_SET(Global_4718592.f_4, 20)){
return func_70(iVar0, iParam2, 1, 4);
}else{
return func_70(iVar0, iParam2, 0, 4);
}}
return 28;
}
if(iVar0==iParam2 || iParam2==-1){
return func_73(1);
}
return func_73(0);
}

int func_70(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
iVar0=func_72(iParam0, iParam1, iParam3);
if(func_71(Global_4718592.f_117591, 1)){
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

int func_71(int iParam0, bool bParam1){
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

int func_72(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < iParam2){
if(iVar0==iParam1){
return iVar1;
}elseif(!iParam0==iVar0){
if(!func_74(iParam0, iVar0, 0, -1)){
iVar1++;
}}
iVar0++;
}
return -1;
}

int func_73(bool bParam0){
if(bParam0){
return 118;
}
return 116;
}

int func_74(int iParam0, int iParam1, int iParam2, int iParam3){
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
if(!func_75(iParam0, bVar0, iParam1, bVar1) || !func_75(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (0 + iParam1));
}
break;
case 1:
if(!func_75(iParam0, bVar0, iParam1, bVar1) || !func_75(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (4 + iParam1));
}
break;
case 2:
if(!func_75(iParam0, bVar0, iParam1, bVar1) || !func_75(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (8 + iParam1));
}
break;
case 3:
if(!func_75(iParam0, bVar0, iParam1, bVar1) || !func_75(iParam1, bVar1, iParam0, bVar0)){
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

int func_75(int iParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
int iVar1;
var uVar2;
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
if(((!func_10(iVar1, 1, 1) || func_20(iVar1, 0)) || MISC::IS_BIT_SET(Global_2657704[iVar1 /*463*/].f_199, 2)) || func_76(iVar1)){
}elseif(PLAYER::GET_PLAYER_TEAM(iVar1) !=iParam2){
}else{
uVar2=PLAYER::GET_PLAYER_PED(bVar1);
if(PED::IS_PED_INJURED(uVar2)){
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


var func__76(int iParam0){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_36.f_18, 14);
}

int func_77(int iParam0, int iParam1){
if(iParam0==-1){
iParam0=func_72(iParam1, iParam0, 4);
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

int func_78(){
if(func_79()){
return 1;
}
return MISC::IS_BIT_SET(Global_4718592.f_175236, 4);
}


bool func_79(){
return MISC::IS_BIT_SET(Global_4718592.f_164769, 12);
}


bool func_80(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return MISC::IS_BIT_SET(Global_4718592.f_175236, 0);
}
return ((MISC::IS_BIT_SET(Global_4718592.f_175236, 0) || Global_1927347) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_81(){
if(func_79() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 1;
}
return 0;
}

int func_82(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4){
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
iVar2=bParam0;
if(iVar2 > -1){
if(Global_1853988[iVar2 /*867*/]==148){
bVar1=true;
}}
if(!bVar1){
if(iVar0 !=-1){
if(func_88()){
iVar3=func_87(bParam0);
if(!iVar3==-1){
return func_85(iVar3);
}}
if((func_84(iParam1, bParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)) || ((func_74(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0, -1) && MISC::IS_BIT_SET(Global_4718592.f_15, 23)) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18))){
return func_73(1);
}elseif(MISC::IS_BIT_SET(Global_4718592.f_15, 26)){
return func_83(1);
}else{
return func_69(bParam1, 1, iVar0, bParam4);
}}elseif((Global_1836600 || Global_1836590) || Global_1853988[bParam0 /*867*/]==0){
if(bParam0==bParam1 || (Global_1836600==1 && Global_1836610==0)){
return func_73(1);
}else{
return func_69(bParam1, 1, iVar0, bParam4);
}}
if(Global_1836594 && Global_1836080.f_14==bParam0){
return 28;
}}
iVar4=func_87(bParam0);
if(!iVar4==-1){
return func_85(iVar4);
}
if(bParam3){
return 0;
}
return 1;
}

int func_83(bool bParam0){
if(bParam0){
return 119;
}
return 116;
}


bool func_84(bool bParam0, bool bParam1, int iParam2, int iParam3){
if(iParam2==-2){
if(iParam3==0){
if(PLAYER::GET_PLAYER_TEAM(iParam0)==-1 && PLAYER::GET_PLAYER_TEAM(bParam1)==-1){
return 0;
}}
return PLAYER::GET_PLAYER_TEAM(bParam0)==PLAYER::GET_PLAYER_TEAM(bParam1);
}else{
if(iParam3==0){
if(PLAYER::GET_PLAYER_TEAM(bParam0)==-1 && iParam2==-1){
return 0;
}}
return PLAYER::GET_PLAYER_TEAM(bParam0)==iParam2;
}
return PLAYER::GET_PLAYER_TEAM(bParam0)==iParam2;
}

int func_85(int iParam0){
int iVar0;
if(iParam0 > -1){
iVar0=func_86(iParam0);
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


var func__86(int iParam0){
return Global_2648711.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_87(bool bParam0){
if(func_9(bParam0)){
if(func_29(bParam0, 1)){
return Global_2648711.f_818.f_11[func_28(bParam0)];
}}
return -1;
}

int func_88(){
if(((((((func_100() || func_99()) || func_98()) || func_97()) || func_96()) || func_94()) || func_92()) || func_89()){
return 1;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_36, 1)){
return 1;
}
return 0;
}

int func_89(){
return func_90(Global_4718592.f_117591);
}

int func_90(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(iParam0==func_91(iVar0)){
return 1;
}
iVar0++;
}
return 0;
}

int func_91(int iParam0){
if(iParam0 !=-1){
return Global_262145.f_33923[iParam0];
}
return -1;
}

int func_92(){
return func_93(Global_4718592.f_117591);
}

int func_93(int iParam0){
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

int func_94(){
return func_95(Global_4718592.f_117591);
}

int func_95(int iParam0){
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


var func__96(){
return Global_2683883.f_24;
}


var func__97(){
return Global_2683883.f_21;
}


bool func_98(){
return Global_2683883.f_19;
}


var func__99(){
return Global_2683883.f_18;
}


var func__100(){
return Global_2683883.f_17;
}

int func_101(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
iVar1=Global_1058071.f_14[iParam0];
if(func_88()){
iVar2=func_87(iParam1);
if(!iVar2==-1){
return func_85(iVar2);
}}
if(iVar1 > -1 && iVar1 < 17){
if(MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_8104[iVar1], 24)){
return 18;
}}
if(iParam0 > -1 && iParam1 !=func_11()){
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
iVar0=func_69(iParam1, !bParam2, iParam0, 0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_21, 13)){
iVar0=func_102(iParam0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_24, 29)){
iVar0=0;
}
if(MISC::IS_BIT_SET(Global_4718592.f_15, 26) && !func_74(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1)){
iVar0=func_83(1);
}}else{
iVar0=1;
}
return iVar0;
}

int func_102(int iParam0){
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


var func__103(){
return Global_2621446.f_2;
}


var func__104(){
return MISC::IS_BIT_SET(Global_2621446, 4);
}


var func__105(){
return MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

int func_106(int iParam0){
switch (iParam0){
case 179:
case 148:
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/]==148 && func_8(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_35, 1)){
return 1;
}else{
return 0;
}
break;
case 180:
case 182:
case 183:
case 185:
case 186:
case 189:
case 190:
case 191:
case 192:
case 193:
case 194:
case 195:
case 197:
case 198:
case 199:
case 200:
case 201:
case 205:
case 207:
case 208:
case 209:
case 210:
case 211:
return 1;
}
return 0;
}


void func_107(int iParam0){
int iVar0;
bool bVar1;
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
MISC::SET_BIT(&(Global_2794162.f_5231.f_7[iVar0]), bVar1);
}

int func_108(int iParam0){
switch (iParam0){
case 153:
case 154:
case 155:
case 162:
case 160:
case 163:
case 167:
case 168:
case 169:
case 171:
case 172:
case 178:
case 190:
case 191:
case 192:
case 189:
case 193:
case 194:
case 199:
case 205:
case 210:
case 225:
case 226:
case 227:
case 229:
case 230:
case 233:
case 237:
case 238:
case 239:
case 240:
case 249:
case 250:
case 243:
case 158:
case 181:
case 256:
case 258:
case 262:
case 263:
case 264:
case 271:
case 277:
case 291:
case 292:
case 293:
case 294:
case 295:
case 296:
case 297:
case 298:
case 299:
case 300:
case 301:
case 304:
case 305:
case 306:
case 307:
case 308:
case 309:
case 312:
case 313:
case 315:
case 316:
case 317:
return 0;
case 276:
case 267:
case 318:
return 3;
case 152:
case 159:
case 142:
case 164:
case 157:
case 166:
case 170:
case 173:
case 180:
case 183:
case 185:
case 182:
case 186:
case 197:
case 200:
case 201:
case 198:
case 195:
case 207:
case 208:
case 209:
case 214:
case 215:
case 216:
case 217:
case 218:
case 219:
case 220:
case 221:
case 241:
case 242:
case 244:
case 248:
return 1;
case 148:
case 179:
return 2;
default:
}
return -1;
}


bool func_109(bool bParam0){
return func_29(PLAYER::PLAYER_ID(), bParam0);
}

int func_110(bool bParam0, int iParam1){
if(func_34(bParam0, 0)){
return func_108(Global_1895156[bParam0 /*609*/].f_10.f_33)==iParam1;
}
return 0;
}


void func_111(){
switch (func_672()){
case 0:
func_657(151, 1, -1, 0);
func_656(1);
if(func_43() > 0){
func_655(1);
}
break;
case 1:
if(!MISC::IS_BIT_SET(uLocal_94, 2)){
func_652();
}
if(Global_1956833==func_11()){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_38())){
Global_1956833=func_38();
}}
func_646();
func_636();
func_614();
func_612();
func_567();
func_431(&(Global_1645422.f_534), &Global_1645422, 28, &(Global_1645422.f_1), &(Global_1645422.f_117), -1, 0, 0);
if(func_43() > 1){
func_655(2);
}
break;
case 2:
if(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 3)){
func_429(0, func_11());
func_388();
func_112();
}
if(func_43() > 2){
func_655(3);
}
break;
case 3:
break;
}}


void func_112(){
struct<20> Var0;
Var0.f_2=1065353216;
Var0.f_3=1065353216;
Var0.f_4=1;
Var0.f_9=-1;
Var0.f_18=-1;
Var0.f_19=-1;
if(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 3)){
if((MISC::IS_BIT_SET(Local_96.f_1, 2) || MISC::IS_BIT_SET(Local_96.f_1, 4)) || MISC::IS_BIT_SET(Local_96.f_1, 4)){
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
return;
}
if(func_387()){
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
return;
}
if(func_381()){
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
return;
}
if(MISC::IS_BIT_SET(Local_96.f_1, 7)){
func_113(151, 1, &Var0, 0);
}else{
func_113(151, MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 1), &Var0, 0);
}
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
}}


void func_113(int iParam0, bool bParam1, var uParam2, bool bParam3){
int iVar0;
int iVar1;
float fVar2;
float fVar3;
var uVar4;
int iVar5;
int iVar6;
int iVar7;
bool bVar8;
int iVar9;
int iVar10;
func_379(iParam0, bParam1);
func_377(iParam0, &fVar2, &fVar3);
if(uParam2->f_6==0){
iVar1=(iVar1 + uParam2->f_1);
iVar0=(iVar0 + *uParam2);
}
if(bParam1){
iVar1=(iVar1 + func_376(iParam0, uParam2->f_13, bParam3));
if(iParam0==233){
iVar6=(uParam2->f_10 / uParam2->f_11) * 100;
iVar1=((iVar1 / 100) * iVar6);
}
if((iParam0==158 && uParam2->f_21==1) && !uParam2->f_22){
iVar1=200;
}
iVar1=round((to_float(iVar1) / to_float(uParam2->f_4)));
iVar1=round((IntToFloat(iVar1) * fVar3));
iVar1=round((IntToFloat(iVar1) * uParam2->f_3));
iVar0=(iVar0 + func_375(iParam0, bParam3));
iVar0=round((to_float(iVar0) / to_float(uParam2->f_4)));
iVar0=round((IntToFloat(iVar0) * fVar2));
iVar0=round((IntToFloat(iVar0) * uParam2->f_2));
}elseif((iParam0==185 || iParam0==220) || iParam0==221){
iVar1=round((to_float(iVar1) / to_float(uParam2->f_4)));
iVar1=round((IntToFloat(iVar1) * fVar3));
iVar1=round((IntToFloat(iVar1) * uParam2->f_3));
iVar0=round((to_float(iVar0) / to_float(uParam2->f_4)));
iVar0=round((IntToFloat(iVar0) * fVar2));
iVar0=round((IntToFloat(iVar0) * uParam2->f_2));
}
if(uParam2->f_18 > -1){
iVar0=(iVar0 + uParam2->f_18);
}
if(uParam2->f_19 > -1){
iVar1=(iVar1 + uParam2->f_19);
}
if(func_373(iParam0)){
if(bParam1){
if(Global_262145.f_24650){
if(func_372(PLAYER::PLAYER_ID()) <=0){
func_371();
}}elseif(func_372(PLAYER::PLAYER_ID()) > 0){
func_370();
}else{
func_371();
}}else{
func_369();
}}
func_353(iParam0, bParam1, uParam2, &iVar0, &uVar4);
func_350(iParam0, uParam2, &iVar0, &iVar5);
func_324(iParam0, uParam2, &iVar0, &iVar5);
func_321(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
func_313(iParam0, uParam2, &iVar0, &iVar5);
if(iParam0==168){
Global_2794162.f_5231.f_388=uVar4;
}else{
Global_2794162.f_5231.f_388=iVar5;
}
bVar8=func_64();
if(bVar8 !=func_11() && iParam0 !=148){
if(func_29(PLAYER::PLAYER_ID(), 0)){
if(!func_49(PLAYER::PLAYER_ID(), bVar8, 1)){
func_303(&iVar0, 1);
}}}
func_298(iParam0, &iVar9, &iVar10);
iVar1=(iVar1 + iVar9);
iVar0=(iVar0 + iVar10);
if(iVar1 > 0){
Global_1948440.f_10=iVar1;
func_297();
func_250(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
}
if(iVar0 > 0){
Global_1948440.f_9=iVar0;
func_220(iParam0, iVar0, iVar7, uVar4, iVar5, uParam2);
func_219(iParam0, iVar0);
if(func_218(iParam0)){
if(func_217(iParam0) > -1){
func_215(func_217(iParam0), iVar0);
}}
Global_2696952=iVar0;
func_214(&Global_2695043, 0, 0);
}
if(func_36(PLAYER::PLAYER_ID()) || func_213(PLAYER::PLAYER_ID())){
func_204(iParam0);
}
if(func_106(iParam0)){
Global_1948458.f_13=iVar0;
Global_1948458.f_14=iVar1;
}
if(func_203(iParam0)){
Global_1948514.f_13=iVar0;
Global_1948514.f_14=iVar1;
}
if(((func_202(iParam0) || iParam0==297) || iParam0==296) || iParam0==298){
Global_1948577.f_12=iVar0;
Global_1948577.f_13=iVar1;
}
if(func_201(iParam0)){
Global_1948624.f_12=iVar0;
Global_1948624.f_13=iVar1;
}
if(func_200(iParam0)){
Global_1948679.f_12=iVar0;
Global_1948679.f_13=iVar1;
}
if(func_199(iParam0)){
if(func_198(iParam0)){
Global_1948761.f_12=iVar0;
Global_1948761.f_13=iVar1;
}elseif(((func_195(iParam0) || iParam0==299) || iParam0==300) || iParam0==301){
Global_1948815.f_12=iVar0;
Global_1948815.f_13=iVar1;
}}
if(func_194(iParam0)){
Global_1948902.f_12=iVar0;
Global_1948902.f_13=iVar1;
}
if(func_193(iParam0)){
Global_1948977.f_16=iVar0;
Global_1948977.f_17=iVar1;
}
if(func_192(iParam0)){
Global_1949065.f_16=iVar0;
Global_1949065.f_17=iVar1;
}
if(func_191(iParam0) || func_190(iParam0)){
Global_1949199.f_15=iVar0;
Global_1949199.f_16=iVar1;
}
if(iParam0==237 && !func_187(uParam2->f_21)){
return;
}
func_114(bParam1, iParam0);
}


void func_114(bool bParam0, int iParam1){
int iVar0;
bool bVar1;
if(bParam0){
iVar0=-1;
bVar1=false;
switch (iParam1){
case 226:
iVar0=2;
bVar1=true;
break;
case 190:
iVar0=3;
bVar1=true;
break;
case 230:
iVar0=4;
bVar1=true;
break;
case 168:
iVar0=5;
bVar1=true;
break;
case 188:
iVar0=6;
bVar1=true;
break;
case 237:
bVar1=true;
break;
}
if(iVar0 !=-1){
if(func_186(iVar0) && !func_124(iVar0)){
func_115(iVar0);
}}
if(bVar1){
if(func_186(1) && !func_124(1)){
func_115(1);
}}}}


void func_115(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 >=0 && iVar0 < 11){
func_119(func_120(func_121(iParam0)), 1, -1);
func_116(12, func_118(func_121(iParam0)), "UNLOCK_DESC_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
}}


void func_116(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10){
int iVar0;
iVar0=func_117(&Global_1662687);
Global_1662687[iVar0 /*106*/]=iParam0;
StringCopy(&(Global_1662687[iVar0 /*106*/].f_17), sParam3, 64);
StringCopy(&(Global_1662687[iVar0 /*106*/].f_1), sParam4, 64);
StringCopy(&(Global_1662687[iVar0 /*106*/].f_33), sParam1, 64);
StringCopy(&(Global_1662687[iVar0 /*106*/].f_49), sParam2, 64);
Global_1662687[iVar0 /*106*/].f_97=iParam5;
Global_1662687[iVar0 /*106*/].f_104=iParam9;
Global_1662687[iVar0 /*106*/].f_105=iParam10;
if(iParam6 !=0){}
if(iParam7 !=0){}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)){
StringCopy(&(Global_1662687[iVar0 /*106*/].f_98), sParam8, 24);
}}

int func_117(var uParam0){
int iVar0;
int iVar1;
iVar1=0;
while (iVar1 <=9){
if((*uParam0)[iVar1 /*106*/]==0){
iVar0=iVar1;
iVar1=10;
}
iVar1++;
}
return iVar0;
}


char* func_118(int iParam0){
switch (iParam0){
case -1069968045:
return "CLO_X6M_U_3_3";
break;
case -921734020:
return "CLO_X6F_U_3_3";
break;
case -1509312284:
return "CLO_X6M_U_2_3";
break;
case 2103965964:
return "CLO_X6F_U_2_3";
break;
case -1709127394:
return "CLO_X6M_U_3_9";
break;
case -727053399:
return "CLO_X6F_U_3_9";
break;
case 425828250:
return "CLO_X6M_U_2_9";
break;
case -731306227:
return "CLO_X6F_U_2_9";
break;
case -1655013310:
return "CLO_X6M_U_3_12";
break;
case -8081421:
return "CLO_X6F_U_3_12";
break;
case 1136959044:
return "CLO_X6M_U_2_12";
break;
case 1252591238:
return "CLO_X6F_U_2_12";
break;
case -1326192619:
return "CLO_X6M_U_8_0";
break;
case 1881115548:
return "CLO_X6M_U_8_0";
break;
case 1290819217:
return "CLO_X6F_U_10_0";
break;
case 117815244:
return "CLO_X6F_U_10_0";
break;
case -1662464917:
return "CLO_X6M_U_15_0";
break;
case 439944869:
return "CLO_X6F_U_18_0";
break;
case -1411572922:
return "CLO_X6M_U_10_16";
break;
case 1655606115:
return "CLO_X6F_U_12_16";
break;
case -1687399299:
return "CLO_X6M_U_10_0";
break;
case -921932467:
return "CLO_X6F_U_12_0";
break;
case -1516214043:
return "CLO_X6M_U_10_1";
break;
case -1757640274:
return "CLO_X6F_U_12_1";
break;
case 654371756:
return "CLO_X6M_U_10_2";
break;
case 340755414:
return "CLO_X6F_U_12_2";
break;
case -120058021:
return "CLO_X6M_U_10_3";
break;
case 583082169:
return "CLO_X6F_U_12_3";
break;
case 44442359:
return "CLO_X6M_U_10_4";
break;
case 2145704703:
return "CLO_X6F_U_12_4";
break;
case -723499156:
return "CLO_X6M_U_10_5";
break;
case -1907623987:
return "CLO_X6F_U_12_5";
break;
case 222672970:
return "CLO_X6M_U_10_6";
break;
case 818396254:
return "CLO_X6F_U_12_6";
break;
case -544285475:
return "CLO_X6M_U_10_7";
break;
case 514398241:
return "CLO_X6F_U_12_7";
break;
case -375328511:
return "CLO_X6M_U_10_8";
break;
case -2081103177:
return "CLO_X6F_U_12_8";
break;
case -1142876798:
return "CLO_X6M_U_10_9";
break;
case -2104434705:
return "CLO_X6F_U_12_9";
break;
case -551157269:
return "CLO_X6M_U_10_10";
break;
case -1881446972:
return "CLO_X6F_U_12_10";
break;
case 292021870:
return "CLO_X6M_U_10_11";
break;
case 1719833363:
return "CLO_X6F_U_12_11";
break;
case -1035974624:
return "CLO_X6M_U_10_12";
break;
case 1956294467:
return "CLO_X6F_U_12_12";
break;
case -192205643:
return "CLO_X6M_U_10_13";
break;
case 1894950891:
return "CLO_X6F_U_12_13";
break;
case -947334499:
return "CLO_X6M_U_10_14";
break;
case 2114667036:
return "CLO_X6F_U_12_14";
break;
case -111757768:
return "CLO_X6M_U_10_15";
break;
case -783423328:
return "CLO_X6F_U_12_15";
break;
case -593232685:
return "CLO_X6M_U_10_17";
break;
case -1223936995:
return "CLO_X6F_U_12_17";
break;
case 1311829745:
return "CLO_X6M_U_16_0";
break;
case 1376594947:
return "CLO_X6F_U_19_0";
break;
case 925416247:
return "CLO_X6M_U_12_0";
break;
case -993141292:
return "CLO_X6F_U_14_0";
break;
case -80344790:
return "CLO_X6M_L_2_23";
break;
case -448274315:
return "CLO_X6F_L_3_23";
break;
case 1505804828:
return "CLO_X6M_L_3_0";
break;
case -1839009993:
return "CLO_X6F_L_4_0";
break;
case -608876472:
return "CLO_X6M_L_1_1";
break;
case 1334957776:
return "CLO_X6F_L_2_1";
break;
case 498873860:
return "CLO_X6M_F_6_9";
break;
case -126601887:
return "CLO_X6F_F_6_9";
break;
case 1985248855:
return "CLO_X6M_F_6_13";
break;
case -875041851:
return "CLO_X6F_F_6_13";
break;
case -197848144:
return "CLO_X6M_B_0_0";
break;
case 2130504112:
return "CLO_X6F_B_0_0";
break;
case 99858221:
return "CLO_X6M_B_0_1";
break;
case 213255460:
return "CLO_X6F_B_0_1";
break;
case 1605135005:
return "CLO_X6M_B_0_2";
break;
case 461611711:
return "CLO_X6F_B_0_2";
break;
case -1943948059:
return "CLO_X6M_EY_4_0";
break;
case -2070991003:
return "CLO_X6F_EY_4_0";
break;
case -683062477:
return "CLO_X6M_EY_4_1";
break;
case -617653084:
return "CLO_X6F_EY_4_1";
break;
case 388773720:
return "CLO_X6M_LW_1_2";
break;
case -2098938846:
return "CLO_X6F_LW_1_2";
break;
case -1759130267:
return "CLO_X6M_EY_1_0";
break;
case -2109654177:
return "CLO_X6F_EY_1_0";
break;
case 652173018:
return "CLO_X6M_T_0_0";
break;
case -1189158251:
return "CLO_X6F_T_0_0";
break;
case -315422177:
return "CLO_X6M_T_4_0";
break;
case -1832379936:
return "CLO_X6F_T_4_0";
break;
case -1256711400:
return "CLO_X6M_D_3_0";
break;
case 1298977992:
return "CLO_X6F_D_3_0";
break;
case 471019161:
return "CLO_X6M_EY_2_0";
break;
case 692557212:
return "CLO_X6F_EY_2_0";
break;
case 165186084:
return "CLO_X6M_EY_2_1";
break;
case -498759787:
return "CLO_X6F_EY_2_1";
break;
case 493498543:
return "CLO_X6M_EY_2_2";
break;
case -292085704:
return "CLO_X6F_EY_2_2";
break;
case -2056426364:
return "CLO_X6M_PH_5_0";
break;
case 1986396785:
return "CLO_X6F_PH_5_0";
break;
case -1883471582:
return "CLO_X6M_PH_5_1";
break;
case -1397788925:
return "CLO_X6F_PH_5_1";
break;
case -36216721:
return "CLO_X6M_PH_6_0";
break;
case 1244363453:
return "CLO_X6F_PH_6_0";
break;
case 1207735097:
return "CLO_X6M_PH_7_0";
break;
case -133674528:
return "CLO_X6F_PH_7_0";
break;
case 1033338279:
return "CLO_X6M_U_13_0";
break;
case 1956717889:
return "CLO_X6F_U_16_0";
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_g9ec_m_berd_0_0"):
return "CLO_E1M_B_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_berd_0_0"):
return "CLO_E1F_B_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_0_1"):
return "CLO_E1M_B_0_1";
break;
case joaat("dlc_mp_sum2_g9ec_f_berd_0_1"):
return "CLO_E1F_B_0_1";
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_1_0"):
return "CLO_E1M_B_1_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_berd_1_0"):
return "CLO_E1F_B_1_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_1_1"):
return "CLO_E1M_B_1_1";
break;
case joaat("dlc_mp_sum2_g9ec_f_berd_1_1"):
return "CLO_E1F_B_1_1";
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_4_0"):
return "CLO_E1M_B_4_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_4_1"):
return "CLO_E1M_B_4_1";
break;
case joaat("dlc_mp_sum2_g9ec_f_berd_4_0"):
return "CLO_E1F_B_4_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_berd_4_1"):
return "CLO_E1F_B_4_1";
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_2_0"):
return "CLO_E1M_B_2_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_berd_2_0"):
return "CLO_E1F_B_2_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_outfit_mummy"):
return "CLO_E1M_O_MUM";
break;
case joaat("dlc_mp_sum2_g9ec_f_outfit_mummy"):
return "CLO_E1F_O_MUM";
break;
case joaat("dlc_mp_sum2_g9ec_m_legs_0_0"):
return "CLO_E1M_L_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_legs_0_0"):
return "CLO_E1F_L_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_legs_0_1"):
return "CLO_E1M_L_0_1";
break;
case joaat("dlc_mp_sum2_g9ec_f_legs_0_1"):
return "CLO_E1F_L_0_1";
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_0_0"):
return "CLO_E1M_U_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_1_0"):
return "CLO_E1M_U_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_jbib_1_0"):
return "CLO_E1F_U_1_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_jbib_2_0"):
return "CLO_E1F_U_1_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_0_1"):
return "CLO_E1M_U_0_1";
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_1_1"):
return "CLO_E1M_U_0_1";
break;
case joaat("dlc_mp_sum2_g9ec_f_jbib_1_1"):
return "CLO_E1F_U_1_1";
break;
case joaat("dlc_mp_sum2_g9ec_f_jbib_2_1"):
return "CLO_E1F_U_1_1";
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_2_0"):
return "CLO_E1M_U_2_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_3_0"):
return "CLO_E1M_U_2_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_jbib_3_0"):
return "CLO_E1F_U_3_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_jbib_4_0"):
return "CLO_E1F_U_3_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_6_0"):
return "CLO_E1M_U_6_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_jbib_8_0"):
return "CLO_E1F_U_8_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_7_0"):
return "CLO_E1M_U_7_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_jbib_5_0"):
return "CLO_E1F_U_5_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_0_0"):
return "CLO_E1M_PH_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_1_0"):
return "CLO_E1M_PH_1_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_0_0"):
return "CLO_E1F_PH_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_1_0"):
return "CLO_E1F_PH_1_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_2_0"):
return "CLO_E1M_PH_2_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_2_0"):
return "CLO_E1F_PH_2_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_3_0"):
return "CLO_E1M_PH_3_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_4_0"):
return "CLO_E1M_PH_4_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_3_0"):
return "CLO_E1F_PH_3_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_4_0"):
return "CLO_E1F_PH_4_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_6_0"):
return "CLO_E1M_PH_6_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_7_0"):
return "CLO_E1M_PH_7_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_6_0"):
return "CLO_E1F_PH_6_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_7_0"):
return "CLO_E1F_PH_7_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_0"):
return "CLO_E1M_PH_5_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_5_0"):
return "CLO_E1F_PH_5_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_1"):
return "CLO_E1M_PH_5_1";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_5_1"):
return "CLO_E1F_PH_5_1";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_2"):
return "CLO_E1M_PH_5_2";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_5_2"):
return "CLO_E1F_PH_5_2";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_3"):
return "CLO_E1M_PH_5_3";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_5_3"):
return "CLO_E1F_PH_5_3";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_4"):
return "CLO_E1M_PH_5_4";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_5_4"):
return "CLO_E1F_PH_5_4";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_7"):
return "CLO_E1M_PH_5_7";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_5_7"):
return "CLO_E1F_PH_5_7";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_8"):
return "CLO_E1M_PH_5_8";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_5_8"):
return "CLO_E1F_PH_5_8";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_5"):
return "CLO_E1M_PH_5_5";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_5_5"):
return "CLO_E1F_PH_5_5";
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_6"):
return "CLO_E1M_PH_5_6";
break;
case joaat("dlc_mp_sum2_g9ec_f_phead_5_6"):
return "CLO_E1F_PH_5_6";
break;
case joaat("dlc_mp_sum2_g9ec_m_pears_0_0"):
return "CLO_E1M_E_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_pears_0_0"):
return "CLO_E1F_E_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_pleft_wrist_0_0"):
return "CLO_E1M_LW_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_pright_wrist_0_0"):
return "CLO_E1M_RW_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_pleft_wrist_0_0"):
return "CLO_E1F_LW_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_pright_wrist_0_0"):
return "CLO_E1F_RW_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_m_decl_0_0"):
return "CLO_E1M_D_0_0";
break;
case joaat("dlc_mp_sum2_g9ec_f_decl_0_0"):
return "CLO_E1F_D_0_0";
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_m_berd_5_0"):
return "CLO_SBM_B_5_0";
break;
case joaat("dlc_mp_sum2_f_berd_5_0"):
return "CLO_SBF_B_5_0";
break;
case joaat("dlc_mp_sum2_m_berd_5_1"):
return "CLO_SBM_B_5_1";
break;
case joaat("dlc_mp_sum2_f_berd_5_1"):
return "CLO_SBF_B_5_1";
break;
case joaat("dlc_mp_sum2_m_berd_5_2"):
return "CLO_SBM_B_5_2";
break;
case joaat("dlc_mp_sum2_f_berd_5_2"):
return "CLO_SBF_B_5_2";
break;
case joaat("dlc_mp_sum2_m_berd_5_3"):
return "CLO_SBM_B_5_3";
break;
case joaat("dlc_mp_sum2_f_berd_5_3"):
return "CLO_SBF_B_5_3";
break;
case joaat("dlc_mp_sum2_m_berd_6_0"):
return "CLO_SBM_B_6_0";
break;
case joaat("dlc_mp_sum2_f_berd_6_0"):
return "CLO_SBF_B_6_0";
break;
case joaat("dlc_mp_sum2_m_berd_6_1"):
return "CLO_SBM_B_6_1";
break;
case joaat("dlc_mp_sum2_f_berd_6_1"):
return "CLO_SBF_B_6_1";
break;
case joaat("dlc_mp_sum2_m_berd_6_2"):
return "CLO_SBM_B_6_2";
break;
case joaat("dlc_mp_sum2_f_berd_6_2"):
return "CLO_SBF_B_6_2";
break;
case joaat("dlc_mp_sum2_m_berd_7_0"):
return "CLO_SBM_B_7_0";
break;
case joaat("dlc_mp_sum2_f_berd_7_0"):
return "CLO_SBF_B_7_0";
break;
case joaat("dlc_mp_sum2_m_berd_8_0"):
return "CLO_SBM_B_8_0";
break;
case joaat("dlc_mp_sum2_f_berd_8_0"):
return "CLO_SBF_B_8_0";
break;
case joaat("dlc_mp_sum2_m_berd_9_0"):
return "CLO_SBM_B_9_0";
break;
case joaat("dlc_mp_sum2_f_berd_9_0"):
return "CLO_SBF_B_9_0";
break;
case joaat("dlc_mp_sum2_m_berd_9_1"):
return "CLO_SBM_B_9_1";
break;
case joaat("dlc_mp_sum2_f_berd_9_1"):
return "CLO_SBF_B_9_1";
break;
case joaat("dlc_mp_sum2_m_berd_9_2"):
return "CLO_SBM_B_9_2";
break;
case joaat("dlc_mp_sum2_f_berd_9_2"):
return "CLO_SBF_B_9_2";
break;
case joaat("dlc_mp_sum2_m_berd_10_0"):
return "CLO_SBM_B_10_0";
break;
case joaat("dlc_mp_sum2_f_berd_10_0"):
return "CLO_SBF_B_10_0";
break;
case joaat("dlc_mp_sum2_m_berd_10_1"):
return "CLO_SBM_B_10_1";
break;
case joaat("dlc_mp_sum2_f_berd_10_1"):
return "CLO_SBF_B_10_1";
break;
case joaat("dlc_mp_sum2_m_berd_10_2"):
return "CLO_SBM_B_10_2";
break;
case joaat("dlc_mp_sum2_f_berd_10_2"):
return "CLO_SBF_B_10_2";
break;
case joaat("dlc_mp_sum2_m_berd_10_3"):
return "CLO_SBM_B_10_3";
break;
case joaat("dlc_mp_sum2_f_berd_10_3"):
return "CLO_SBF_B_10_3";
break;
case joaat("dlc_mp_sum2_m_berd_10_4"):
return "CLO_SBM_B_10_4";
break;
case joaat("dlc_mp_sum2_f_berd_10_4"):
return "CLO_SBF_B_10_4";
break;
case joaat("dlc_mp_sum2_m_berd_10_5"):
return "CLO_SBM_B_10_5";
break;
case joaat("dlc_mp_sum2_f_berd_10_5"):
return "CLO_SBF_B_10_5";
break;
case joaat("dlc_mp_sum2_m_berd_10_6"):
return "CLO_SBM_B_10_6";
break;
case joaat("dlc_mp_sum2_f_berd_10_6"):
return "CLO_SBF_B_10_6";
break;
case joaat("dlc_mp_sum2_m_berd_10_7"):
return "CLO_SBM_B_10_7";
break;
case joaat("dlc_mp_sum2_f_berd_10_7"):
return "CLO_SBF_B_10_7";
break;
case joaat("dlc_mp_sum2_m_berd_10_8"):
return "CLO_SBM_B_10_8";
break;
case joaat("dlc_mp_sum2_f_berd_10_8"):
return "CLO_SBF_B_10_8";
break;
case joaat("dlc_mp_sum2_m_berd_10_9"):
return "CLO_SBM_B_10_9";
break;
case joaat("dlc_mp_sum2_f_berd_10_9"):
return "CLO_SBF_B_10_9";
break;
case joaat("dlc_mp_sum2_m_berd_10_10"):
return "CLO_SBM_B_10_10";
break;
case joaat("dlc_mp_sum2_f_berd_10_10"):
return "CLO_SBF_B_10_10";
break;
case joaat("dlc_mp_sum2_m_berd_10_11"):
return "CLO_SBM_B_10_11";
break;
case joaat("dlc_mp_sum2_f_berd_10_11"):
return "CLO_SBF_B_10_11";
break;
case joaat("dlc_mp_sum2_m_berd_10_12"):
return "CLO_SBM_B_10_12";
break;
case joaat("dlc_mp_sum2_f_berd_10_12"):
return "CLO_SBF_B_10_12";
break;
case joaat("dlc_mp_sum2_m_berd_10_13"):
return "CLO_SBM_B_10_13";
break;
case joaat("dlc_mp_sum2_f_berd_10_13"):
return "CLO_SBF_B_10_13";
break;
case joaat("dlc_mp_sum2_m_berd_10_14"):
return "CLO_SBM_B_10_14";
break;
case joaat("dlc_mp_sum2_f_berd_10_14"):
return "CLO_SBF_B_10_14";
break;
case joaat("dlc_mp_sum2_m_berd_10_15"):
return "CLO_SBM_B_10_15";
break;
case joaat("dlc_mp_sum2_f_berd_10_15"):
return "CLO_SBF_B_10_15";
break;
case joaat("dlc_mp_sum2_m_berd_10_16"):
return "CLO_SBM_B_10_16";
break;
case joaat("dlc_mp_sum2_f_berd_10_16"):
return "CLO_SBF_B_10_16";
break;
case joaat("dlc_mp_sum2_m_berd_10_17"):
return "CLO_SBM_B_10_17";
break;
case joaat("dlc_mp_sum2_f_berd_10_17"):
return "CLO_SBF_B_10_17";
break;
case joaat("dlc_mp_sum2_m_berd_10_18"):
return "CLO_SBM_B_10_18";
break;
case joaat("dlc_mp_sum2_f_berd_10_18"):
return "CLO_SBF_B_10_18";
break;
case joaat("dlc_mp_sum2_m_berd_10_19"):
return "CLO_SBM_B_10_19";
break;
case joaat("dlc_mp_sum2_f_berd_10_19"):
return "CLO_SBF_B_10_19";
break;
case joaat("dlc_mp_sum2_m_berd_10_20"):
return "CLO_SBM_B_10_20";
break;
case joaat("dlc_mp_sum2_f_berd_10_20"):
return "CLO_SBF_B_10_20";
break;
case joaat("dlc_mp_sum2_m_berd_10_21"):
return "CLO_SBM_B_10_21";
break;
case joaat("dlc_mp_sum2_f_berd_10_21"):
return "CLO_SBF_B_10_21";
break;
case joaat("dlc_mp_sum2_m_berd_10_22"):
return "CLO_SBM_B_10_22";
break;
case joaat("dlc_mp_sum2_f_berd_10_22"):
return "CLO_SBF_B_10_22";
break;
case joaat("dlc_mp_sum2_m_berd_10_23"):
return "CLO_SBM_B_10_23";
break;
case joaat("dlc_mp_sum2_f_berd_10_23"):
return "CLO_SBF_B_10_23";
break;
case joaat("dlc_mp_sum2_m_berd_10_24"):
return "CLO_SBM_B_10_24";
break;
case joaat("dlc_mp_sum2_f_berd_10_24"):
return "CLO_SBF_B_10_24";
break;
case joaat("dlc_mp_sum2_m_berd_10_25"):
return "CLO_SBM_B_10_25";
break;
case joaat("dlc_mp_sum2_f_berd_10_25"):
return "CLO_SBF_B_10_25";
break;
case joaat("dlc_mp_sum2_m_berd_0_0"):
return "CLO_SBM_B_0_0";
break;
case joaat("dlc_mp_sum2_f_berd_0_0"):
return "CLO_SBF_B_0_0";
break;
case joaat("dlc_mp_sum2_m_berd_1_0"):
return "CLO_SBM_B_1_0";
break;
case joaat("dlc_mp_sum2_f_berd_1_0"):
return "CLO_SBF_B_1_0";
break;
case joaat("dlc_mp_sum2_m_berd_1_1"):
return "CLO_SBM_B_1_1";
break;
case joaat("dlc_mp_sum2_f_berd_1_1"):
return "CLO_SBF_B_1_1";
break;
case joaat("dlc_mp_sum2_m_berd_1_2"):
return "CLO_SBM_B_1_2";
break;
case joaat("dlc_mp_sum2_f_berd_1_2"):
return "CLO_SBF_B_1_2";
break;
case joaat("dlc_mp_sum2_m_berd_3_0"):
return "CLO_SBM_B_3_0";
break;
case joaat("dlc_mp_sum2_f_berd_3_0"):
return "CLO_SBF_B_3_0";
break;
case joaat("dlc_mp_sum2_m_berd_4_0"):
return "CLO_SBM_B_4_0";
break;
case joaat("dlc_mp_sum2_f_berd_4_0"):
return "CLO_SBF_B_4_0";
break;
case joaat("dlc_mp_sum2_m_outfit_sasquatch"):
return "CLO_SBM_O_SAS";
break;
case joaat("dlc_mp_sum2_f_outfit_sasquatch"):
return "CLO_SBF_O_SAS";
break;
case joaat("dlc_mp_sum2_m_legs_2_0"):
return "CLO_SBM_L_2_0";
break;
case joaat("dlc_mp_sum2_f_legs_0_0"):
return "CLO_SBF_L_0_0";
break;
case joaat("dlc_mp_sum2_m_legs_2_1"):
return "CLO_SBM_L_2_1";
break;
case joaat("dlc_mp_sum2_f_legs_0_1"):
return "CLO_SBF_L_0_1";
break;
case joaat("dlc_mp_sum2_m_jbib_13_0"):
return "CLO_SBM_U_13_0";
break;
case joaat("dlc_mp_sum2_f_jbib_15_0"):
return "CLO_SBF_U_15_0";
break;
case joaat("dlc_mp_sum2_m_jbib_14_0"):
return "CLO_SBM_U_14_0";
break;
case joaat("dlc_mp_sum2_f_jbib_19_0"):
return "CLO_SBF_U_19_0";
break;
case joaat("dlc_mp_sum2_m_jbib_15_0"):
return "CLO_SBM_U_15_0";
break;
case joaat("dlc_mp_sum2_m_jbib_16_0"):
return "CLO_SBM_U_15_0";
break;
case joaat("dlc_mp_sum2_f_jbib_20_0"):
return "CLO_SBF_U_20_0";
break;
case joaat("dlc_mp_sum2_m_jbib_15_1"):
return "CLO_SBM_U_15_1";
break;
case joaat("dlc_mp_sum2_m_jbib_16_1"):
return "CLO_SBM_U_15_1";
break;
case joaat("dlc_mp_sum2_f_jbib_20_1"):
return "CLO_SBF_U_20_1";
break;
case joaat("dlc_mp_sum2_m_jbib_15_2"):
return "CLO_SBM_U_15_2";
break;
case joaat("dlc_mp_sum2_m_jbib_16_2"):
return "CLO_SBM_U_15_2";
break;
case joaat("dlc_mp_sum2_f_jbib_20_2"):
return "CLO_SBF_U_20_2";
break;
case joaat("dlc_mp_sum2_m_jbib_17_0"):
return "CLO_SBM_U_17_0";
break;
case joaat("dlc_mp_sum2_f_jbib_8_0"):
return "CLO_SBF_U_8_0";
break;
case joaat("dlc_mp_sum2_m_jbib_7_0"):
return "CLO_SBM_U_7_0";
break;
case joaat("dlc_mp_sum2_m_jbib_8_0"):
return "CLO_SBM_U_7_0";
break;
case joaat("dlc_mp_sum2_f_jbib_24_0"):
return "CLO_SBF_U_21_0";
break;
case joaat("dlc_mp_sum2_f_jbib_21_0"):
return "CLO_SBF_U_21_0";
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_m_phead_6_0"):
return "CLO_SBM_PH_6_0";
break;
case joaat("dlc_mp_sum2_f_phead_6_0"):
return "CLO_SBF_PH_6_0";
break;
case joaat("dlc_mp_sum2_m_phead_6_1"):
return "CLO_SBM_PH_6_1";
break;
case joaat("dlc_mp_sum2_f_phead_6_1"):
return "CLO_SBF_PH_6_1";
break;
case joaat("dlc_mp_sum2_m_phead_6_2"):
return "CLO_SBM_PH_6_2";
break;
case joaat("dlc_mp_sum2_f_phead_6_2"):
return "CLO_SBF_PH_6_2";
break;
case joaat("dlc_mp_sum2_m_phead_6_3"):
return "CLO_SBM_PH_6_3";
break;
case joaat("dlc_mp_sum2_f_phead_6_3"):
return "CLO_SBF_PH_6_3";
break;
case joaat("dlc_mp_sum2_m_phead_6_4"):
return "CLO_SBM_PH_6_4";
break;
case joaat("dlc_mp_sum2_f_phead_6_4"):
return "CLO_SBF_PH_6_4";
break;
case joaat("dlc_mp_sum2_m_phead_6_5"):
return "CLO_SBM_PH_6_5";
break;
case joaat("dlc_mp_sum2_f_phead_6_5"):
return "CLO_SBF_PH_6_5";
break;
case joaat("dlc_mp_sum2_m_phead_6_6"):
return "CLO_SBM_PH_6_6";
break;
case joaat("dlc_mp_sum2_f_phead_6_6"):
return "CLO_SBF_PH_6_6";
break;
case joaat("dlc_mp_sum2_m_phead_6_7"):
return "CLO_SBM_PH_6_7";
break;
case joaat("dlc_mp_sum2_f_phead_6_7"):
return "CLO_SBF_PH_6_7";
break;
case joaat("dlc_mp_sum2_m_phead_6_8"):
return "CLO_SBM_PH_6_8";
break;
case joaat("dlc_mp_sum2_f_phead_6_8"):
return "CLO_SBF_PH_6_8";
break;
case joaat("dlc_mp_sum2_m_phead_6_9"):
return "CLO_SBM_PH_6_9";
break;
case joaat("dlc_mp_sum2_f_phead_6_9"):
return "CLO_SBF_PH_6_9";
break;
case joaat("dlc_mp_sum2_m_phead_6_10"):
return "CLO_SBM_PH_6_10";
break;
case joaat("dlc_mp_sum2_f_phead_6_10"):
return "CLO_SBF_PH_6_10";
break;
case joaat("dlc_mp_sum2_m_phead_6_11"):
return "CLO_SBM_PH_6_11";
break;
case joaat("dlc_mp_sum2_f_phead_6_11"):
return "CLO_SBF_PH_6_11";
break;
case joaat("dlc_mp_sum2_m_phead_6_12"):
return "CLO_SBM_PH_6_12";
break;
case joaat("dlc_mp_sum2_f_phead_6_12"):
return "CLO_SBF_PH_6_12";
break;
case joaat("dlc_mp_sum2_m_phead_6_13"):
return "CLO_SBM_PH_6_13";
break;
case joaat("dlc_mp_sum2_f_phead_6_13"):
return "CLO_SBF_PH_6_13";
break;
case joaat("dlc_mp_sum2_m_phead_0_0"):
return "CLO_SBF_PH_0_0";
break;
case joaat("dlc_mp_sum2_m_phead_1_0"):
return "CLO_SBM_PH_1_0";
break;
case joaat("dlc_mp_sum2_f_phead_0_0"):
return "CLO_SBF_PH_0_0";
break;
case joaat("dlc_mp_sum2_f_phead_1_0"):
return "CLO_SBF_PH_1_0";
break;
case joaat("dlc_mp_sum2_m_phead_2_0"):
return "CLO_SBM_PH_2_0";
break;
case joaat("dlc_mp_sum2_m_phead_4_0"):
return "CLO_SBM_PH_4_0";
break;
case joaat("dlc_mp_sum2_f_phead_2_0"):
return "CLO_SBF_PH_2_0";
break;
case joaat("dlc_mp_sum2_f_phead_4_0"):
return "CLO_SBF_PH_4_0";
break;
case joaat("dlc_mp_sum2_m_phead_2_1"):
return "CLO_SBM_PH_2_1";
break;
case joaat("dlc_mp_sum2_m_phead_4_1"):
return "CLO_SBM_PH_4_1";
break;
case joaat("dlc_mp_sum2_f_phead_2_1"):
return "CLO_SBF_PH_2_1";
break;
case joaat("dlc_mp_sum2_f_phead_4_1"):
return "CLO_SBF_PH_4_1";
break;
case joaat("dlc_mp_sum2_m_phead_3_0"):
return "CLO_SBM_PH_3_0";
break;
case joaat("dlc_mp_sum2_m_phead_7_0"):
return "CLO_SBM_PH_7_0";
break;
case joaat("dlc_mp_sum2_f_phead_3_0"):
return "CLO_SBF_PH_3_0";
break;
case joaat("dlc_mp_sum2_f_phead_7_0"):
return "CLO_SBF_PH_7_0";
break;
case joaat("dlc_mp_sum2_m_phead_8_0"):
return "CLO_SBM_PH_8_0";
break;
case joaat("dlc_mp_sum2_f_phead_8_0"):
return "CLO_SBF_PH_8_0";
break;
case joaat("dlc_mp_sum2_m_pears_0_0"):
return "CLO_SBM_E_0_0";
break;
case joaat("dlc_mp_sum2_f_pears_0_0"):
return "CLO_SBF_E_0_0";
break;
case joaat("dlc_mp_sum2_m_pears_0_1"):
return "CLO_SBM_E_0_1";
break;
case joaat("dlc_mp_sum2_f_pears_0_1"):
return "CLO_SBF_E_0_1";
break;
case joaat("dlc_mp_sum2_m_pears_0_2"):
return "CLO_SBM_E_0_2";
break;
case joaat("dlc_mp_sum2_f_pears_0_2"):
return "CLO_SBF_E_0_2";
break;
case joaat("dlc_mp_sum2_m_pears_0_3"):
return "CLO_SBM_E_0_3";
break;
case joaat("dlc_mp_sum2_f_pears_0_3"):
return "CLO_SBF_E_0_3";
break;
case joaat("dlc_mp_sum2_m_pears_0_4"):
return "CLO_SBM_E_0_4";
break;
case joaat("dlc_mp_sum2_f_pears_0_4"):
return "CLO_SBF_E_0_4";
break;
case joaat("dlc_mp_sum2_m_pears_0_5"):
return "CLO_SBM_E_0_5";
break;
case joaat("dlc_mp_sum2_f_pears_0_5"):
return "CLO_SBF_E_0_5";
break;
case joaat("dlc_mp_sum2_m_pears_0_6"):
return "CLO_SBM_E_0_6";
break;
case joaat("dlc_mp_sum2_f_pears_0_6"):
return "CLO_SBF_E_0_6";
break;
case joaat("dlc_mp_sum2_m_pears_0_7"):
return "CLO_SBM_E_0_7";
break;
case joaat("dlc_mp_sum2_f_pears_0_7"):
return "CLO_SBF_E_0_7";
break;
case joaat("dlc_mp_sum2_m_pears_0_8"):
return "CLO_SBM_E_0_8";
break;
case joaat("dlc_mp_sum2_f_pears_0_8"):
return "CLO_SBF_E_0_8";
break;
case joaat("dlc_mp_sum2_m_pears_0_9"):
return "CLO_SBM_E_0_9";
break;
case joaat("dlc_mp_sum2_f_pears_0_9"):
return "CLO_SBF_E_0_9";
break;
case joaat("dlc_mp_sum2_m_pears_0_10"):
return "CLO_SBM_E_0_10";
break;
case joaat("dlc_mp_sum2_f_pears_0_10"):
return "CLO_SBF_E_0_10";
break;
case joaat("dlc_mp_sum2_m_pears_0_11"):
return "CLO_SBM_E_0_11";
break;
case joaat("dlc_mp_sum2_f_pears_0_11"):
return "CLO_SBF_E_0_11";
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_m_special_1_0"):
return "CLO_SBM_S_1_0";
break;
case joaat("dlc_mp_sum2_f_special_1_0"):
return "CLO_SBF_S_1_0";
break;
case joaat("dlc_mp_sum2_m_feet_5_0"):
return "CLO_SBM_F_5_0";
break;
case joaat("dlc_mp_sum2_f_feet_5_0"):
return "CLO_SBF_F_5_0";
break;
case joaat("dlc_mp_sum2_m_feet_5_1"):
return "CLO_SBM_F_5_1";
break;
case joaat("dlc_mp_sum2_f_feet_5_1"):
return "CLO_SBF_F_5_1";
break;
case joaat("dlc_mp_sum2_m_feet_5_2"):
return "CLO_SBM_F_5_2";
break;
case joaat("dlc_mp_sum2_f_feet_5_2"):
return "CLO_SBF_F_5_2";
break;
case joaat("dlc_mp_sum2_m_feet_5_3"):
return "CLO_SBM_F_5_3";
break;
case joaat("dlc_mp_sum2_f_feet_5_3"):
return "CLO_SBF_F_5_3";
break;
case joaat("dlc_mp_sum2_m_feet_5_4"):
return "CLO_SBM_F_5_4";
break;
case joaat("dlc_mp_sum2_f_feet_5_4"):
return "CLO_SBF_F_5_4";
break;
case joaat("dlc_mp_sum2_m_feet_5_5"):
return "CLO_SBM_F_5_5";
break;
case joaat("dlc_mp_sum2_f_feet_5_5"):
return "CLO_SBF_F_5_5";
break;
case joaat("dlc_mp_sum2_m_feet_5_6"):
return "CLO_SBM_F_5_6";
break;
case joaat("dlc_mp_sum2_f_feet_5_6"):
return "CLO_SBF_F_5_6";
break;
case joaat("dlc_mp_sum2_m_feet_5_7"):
return "CLO_SBM_F_5_7";
break;
case joaat("dlc_mp_sum2_f_feet_5_7"):
return "CLO_SBF_F_5_7";
break;
case joaat("dlc_mp_sum2_m_feet_5_8"):
return "CLO_SBM_F_5_8";
break;
case joaat("dlc_mp_sum2_f_feet_5_8"):
return "CLO_SBF_F_5_8";
break;
case joaat("dlc_mp_sum2_m_feet_6_0"):
return "CLO_SBM_F_6_0";
break;
case joaat("dlc_mp_sum2_f_feet_6_0"):
return "CLO_SBF_F_6_0";
break;
case joaat("dlc_mp_sum2_m_feet_6_1"):
return "CLO_SBM_F_6_1";
break;
case joaat("dlc_mp_sum2_f_feet_6_1"):
return "CLO_SBF_F_6_1";
break;
case joaat("dlc_mp_sum2_m_feet_6_2"):
return "CLO_SBM_F_6_2";
break;
case joaat("dlc_mp_sum2_f_feet_6_2"):
return "CLO_SBF_F_6_2";
break;
case joaat("dlc_mp_sum2_m_feet_6_3"):
return "CLO_SBM_F_6_3";
break;
case joaat("dlc_mp_sum2_f_feet_6_3"):
return "CLO_SBF_F_6_3";
break;
case joaat("dlc_mp_sum2_m_feet_6_4"):
return "CLO_SBM_F_6_4";
break;
case joaat("dlc_mp_sum2_f_feet_6_4"):
return "CLO_SBF_F_6_4";
break;
case joaat("dlc_mp_sum2_m_feet_6_5"):
return "CLO_SBM_F_6_5";
break;
case joaat("dlc_mp_sum2_f_feet_6_5"):
return "CLO_SBF_F_6_5";
break;
case joaat("dlc_mp_sum2_m_feet_6_6"):
return "CLO_SBM_F_6_6";
break;
case joaat("dlc_mp_sum2_f_feet_6_6"):
return "CLO_SBF_F_6_6";
break;
case joaat("dlc_mp_sum2_m_feet_6_7"):
return "CLO_SBM_F_6_7";
break;
case joaat("dlc_mp_sum2_f_feet_6_7"):
return "CLO_SBF_F_6_7";
break;
case joaat("dlc_mp_sum2_m_feet_6_8"):
return "CLO_SBM_F_6_8";
break;
case joaat("dlc_mp_sum2_f_feet_6_8"):
return "CLO_SBF_F_6_8";
break;
case joaat("dlc_mp_sum2_m_feet_6_9"):
return "CLO_SBM_F_6_9";
break;
case joaat("dlc_mp_sum2_f_feet_6_9"):
return "CLO_SBF_F_6_9";
break;
case joaat("dlc_mp_sum2_m_feet_6_10"):
return "CLO_SBM_F_6_10";
break;
case joaat("dlc_mp_sum2_f_feet_6_10"):
return "CLO_SBF_F_6_10";
break;
case joaat("dlc_mp_sum2_m_feet_6_11"):
return "CLO_SBM_F_6_11";
break;
case joaat("dlc_mp_sum2_f_feet_6_11"):
return "CLO_SBF_F_6_11";
break;
case joaat("dlc_mp_sum2_m_feet_6_12"):
return "CLO_SBM_F_6_12";
break;
case joaat("dlc_mp_sum2_f_feet_6_12"):
return "CLO_SBF_F_6_12";
break;
case joaat("dlc_mp_sum2_m_feet_6_13"):
return "CLO_SBM_F_6_13";
break;
case joaat("dlc_mp_sum2_f_feet_6_13"):
return "CLO_SBF_F_6_13";
break;
case joaat("dlc_mp_sum2_m_feet_6_14"):
return "CLO_SBM_F_6_14";
break;
case joaat("dlc_mp_sum2_f_feet_6_14"):
return "CLO_SBF_F_6_14";
break;
}
switch (iParam0){
case joaat("dlc_mp_fixer_m_jbib_10_2"):
case joaat("dlc_mp_fixer_f_jbib_10_2"):
return "CLO_FXM_U_10_2";
break;
case joaat("dlc_mp_fixer_m_jbib_10_3"):
case -906547381:
return "CLO_FXM_U_10_3";
break;
case joaat("dlc_mp_fixer_m_jbib_10_4"):
case 308133919:
return "CLO_FXM_U_10_4";
break;
case joaat("dlc_mp_fixer_m_jbib_10_0"):
case joaat("dlc_mp_fixer_f_jbib_13_0"):
return "CLO_FXM_U_10_0";
break;
case joaat("dlc_mp_fixer_m_jbib_10_1"):
case joaat("dlc_mp_fixer_f_jbib_13_1"):
return "CLO_FXM_U_10_1";
break;
case joaat("dlc_mp_fixer_m_berd_0_0"):
case joaat("dlc_mp_fixer_f_berd_0_0"):
return "CLO_FXM_B_0_0";
break;
case joaat("dlc_mp_fixer_m_berd_0_1"):
case joaat("dlc_mp_fixer_f_berd_0_1"):
return "CLO_FXM_B_0_1";
break;
case joaat("dlc_mp_fixer_m_berd_0_2"):
case joaat("dlc_mp_fixer_f_berd_0_2"):
return "CLO_FXM_B_0_2";
break;
case joaat("dlc_mp_fixer_m_berd_0_3"):
case joaat("dlc_mp_fixer_f_berd_0_3"):
return "CLO_FXM_B_0_3";
break;
case joaat("dlc_mp_fixer_m_berd_1_0"):
case joaat("dlc_mp_fixer_f_berd_1_0"):
return "CLO_FXM_B_1_0";
break;
case joaat("dlc_mp_fixer_m_berd_1_1"):
case joaat("dlc_mp_fixer_f_berd_1_1"):
return "CLO_FXM_B_1_1";
break;
case joaat("dlc_mp_fixer_m_berd_1_2"):
case joaat("dlc_mp_fixer_f_berd_1_2"):
return "CLO_FXM_B_1_2";
break;
case joaat("dlc_mp_fixer_m_berd_1_3"):
case joaat("dlc_mp_fixer_f_berd_1_3"):
return "CLO_FXM_B_1_3";
break;
case joaat("dlc_mp_fixer_m_berd_2_0"):
case joaat("dlc_mp_fixer_f_berd_2_0"):
return "CLO_FXM_B_2_0";
break;
case joaat("dlc_mp_fixer_m_berd_2_1"):
case joaat("dlc_mp_fixer_f_berd_2_1"):
return "CLO_FXM_B_2_1";
break;
case joaat("dlc_mp_fixer_m_berd_2_2"):
case joaat("dlc_mp_fixer_f_berd_2_2"):
return "CLO_FXM_B_2_2";
break;
case joaat("dlc_mp_fixer_m_berd_2_3"):
case joaat("dlc_mp_fixer_f_berd_2_3"):
return "CLO_FXM_B_2_3";
break;
}
switch (iParam0){
case joaat("dlc_mp_tuner_m_decl_30_1"):
case joaat("dlc_mp_tuner_f_decl_29_1"):
return "CLO_TRM_D_30_1";
break;
case 991513037:
case -1634791241:
return "CLO_TRM_DECL_8";
break;
case -675149090:
case -1227437948:
return "CLO_TRM_DECL_10";
break;
case joaat("dlc_mp_tuner_m_jbib_11_0"):
case joaat("dlc_mp_tuner_m_jbib_12_0"):
case joaat("dlc_mp_tuner_f_jbib_11_0"):
case joaat("dlc_mp_tuner_f_jbib_12_0"):
return "CLO_TRM_U_11_0";
break;
case -1686814509:
case -1408179706:
return "CLO_TRM_DECL_11";
break;
case joaat("dlc_mp_tuner_m_outfit_boiler_1"):
case joaat("dlc_mp_tuner_m_jbib_1_3"):
case joaat("dlc_mp_tuner_m_legs_1_3"):
case joaat("dlc_mp_tuner_f_outfit_boiler_1"):
case joaat("dlc_mp_tuner_f_jbib_1_3"):
case joaat("dlc_mp_tuner_f_legs_1_3"):
return "CLO_TRM_O_BS_1";
break;
case joaat("dlc_mp_tuner_m_jbib_9_15"):
case joaat("dlc_mp_tuner_f_jbib_9_15"):
return "CLO_TRM_U_9_15";
break;
case joaat("dlc_mp_tuner_m_jbib_13_2"):
case joaat("dlc_mp_tuner_m_jbib_14_2"):
case joaat("dlc_mp_tuner_f_jbib_13_2"):
return "CLO_TRM_U_13_2";
break;
case joaat("dlc_mp_tuner_m_jbib_13_0"):
case joaat("dlc_mp_tuner_m_jbib_14_0"):
case joaat("dlc_mp_tuner_f_jbib_13_0"):
return "CLO_TRM_U_13_0";
break;
case joaat("dlc_mp_tuner_m_jbib_13_1"):
case joaat("dlc_mp_tuner_m_jbib_14_1"):
case joaat("dlc_mp_tuner_f_jbib_13_1"):
return "CLO_TRM_U_13_1";
break;
case joaat("dlc_mp_tuner_m_phead_1_0"):
case joaat("dlc_mp_tuner_m_phead_2_0"):
case joaat("dlc_mp_tuner_f_phead_1_0"):
case joaat("dlc_mp_tuner_f_phead_2_0"):
return "CLO_TRM_PH_1_0";
break;
case joaat("dlc_mp_tuner_m_phead_1_1"):
case joaat("dlc_mp_tuner_m_phead_2_1"):
case joaat("dlc_mp_tuner_f_phead_1_1"):
case joaat("dlc_mp_tuner_f_phead_2_1"):
return "CLO_TRM_PH_1_1";
break;
case joaat("dlc_mp_tuner_m_outfit_morph_0"):
case joaat("dlc_mp_tuner_f_outfit_morph_0"):
return "CLO_TRM_O_MS_0";
break;
case joaat("dlc_mp_tuner_m_outfit_morph_1"):
case joaat("dlc_mp_tuner_f_outfit_morph_1"):
return "CLO_TRM_O_MS_1";
break;
case -1372800957:
return "PS_BAG_64";
break;
case -1125170035:
return "PS_BAG_66";
break;
case 1276052663:
return "PS_BAG_65";
break;
case 2138708412:
case -1894139601:
return "CLO_TRM_DECL_12";
break;
case 205793848:
case -786254870:
return "CLO_TRM_DECL_13";
break;
case 1325175663:
case -773154515:
return "CLO_TRM_DECL_14";
break;
case -368088972:
case 1778247767:
return "CLO_TRM_DECL_15";
break;
case -1771053026:
case -648092145:
return "CLO_TRM_DECL_16";
break;
case joaat("dlc_mp_tuner_m_outfit_boiler_0"):
case joaat("dlc_mp_tuner_m_jbib_1_2"):
case joaat("dlc_mp_tuner_m_legs_1_2"):
case joaat("dlc_mp_tuner_f_outfit_boiler_0"):
case joaat("dlc_mp_tuner_f_jbib_1_2"):
case joaat("dlc_mp_tuner_f_legs_1_2"):
return "CLO_TRM_O_BS_0";
break;
}
switch (iParam0){
case joaat("MP_Heist4_Tee_055_M"):
case joaat("MP_Heist4_Tee_055_F"):
return "CLO_H4M_DECL_55";
break;
case joaat("MP_Heist4_Tee_057_M"):
case joaat("MP_Heist4_Tee_057_F"):
return "CLO_H4M_DECL_57";
break;
case joaat("MP_Heist4_Tee_059_M"):
case joaat("MP_Heist4_Tee_059_F"):
return "CLO_H4M_DECL_59";
break;
case joaat("MP_Heist4_Tee_061_M"):
case joaat("MP_Heist4_Tee_061_F"):
return "CLO_H4M_DECL_61";
break;
case joaat("MP_Heist4_Tee_063_M"):
case joaat("MP_Heist4_Tee_063_F"):
return "CLO_H4M_DECL_63";
break;
case joaat("MP_Heist4_Tee_065_M"):
case joaat("MP_Heist4_Tee_065_F"):
return "CLO_H4M_DECL_65";
break;
}
switch (iParam0){
case joaat("MP_Heist4_Tee_030_M"):
case joaat("MP_Heist4_Tee_030_F"):
return "CLO_H4M_DECL_30";
break;
case joaat("MP_Heist4_Tee_032_M"):
case joaat("MP_Heist4_Tee_032_F"):
return "CLO_H4M_DECL_32";
break;
case joaat("MP_Heist4_Tee_028_M"):
case joaat("MP_Heist4_Tee_028_F"):
return "CLO_H4M_DECL_28";
break;
case joaat("MP_Heist4_Tee_029_M"):
case joaat("MP_Heist4_Tee_029_F"):
return "CLO_H4M_DECL_29";
break;
case joaat("MP_Heist4_Tee_031_M"):
case joaat("MP_Heist4_Tee_031_F"):
return "CLO_H4M_DECL_31";
break;
case joaat("MP_Heist4_Tee_022_M"):
case joaat("MP_Heist4_Tee_022_F"):
return "CLO_H4M_DECL_22";
break;
case joaat("MP_Heist4_Tee_023_M"):
case joaat("MP_Heist4_Tee_023_F"):
return "CLO_H4M_DECL_23";
break;
case joaat("MP_Heist4_Tee_020_M"):
case joaat("MP_Heist4_Tee_020_F"):
return "CLO_H4M_DECL_20";
break;
case joaat("MP_Heist4_Tee_021_M"):
case joaat("MP_Heist4_Tee_021_F"):
return "CLO_H4M_DECL_21";
break;
case joaat("MP_Heist4_Tee_003_M"):
case joaat("MP_Heist4_Tee_003_F"):
return "CLO_H4M_DECL_3";
break;
case joaat("MP_Heist4_Tee_004_M"):
case joaat("MP_Heist4_Tee_004_F"):
return "CLO_H4M_DECL_4";
break;
case joaat("MP_Heist4_Tee_005_M"):
case joaat("MP_Heist4_Tee_005_F"):
return "CLO_H4M_DECL_5";
break;
case joaat("MP_Heist4_Tee_006_M"):
case joaat("MP_Heist4_Tee_006_F"):
return "CLO_H4M_DECL_6";
break;
case joaat("MP_Heist4_Tee_027_M"):
case joaat("MP_Heist4_Tee_027_F"):
return "CLO_H4M_DECL_27";
break;
case joaat("MP_Heist4_Tee_026_M"):
case joaat("MP_Heist4_Tee_026_F"):
return "CLO_H4M_DECL_26";
break;
case joaat("MP_Heist4_Tee_025_M"):
case joaat("MP_Heist4_Tee_025_F"):
return "CLO_H4M_DECL_25";
break;
case joaat("MP_Heist4_Tee_024_M"):
case joaat("MP_Heist4_Tee_024_F"):
return "CLO_H4M_DECL_24";
break;
case joaat("MP_Heist4_Tee_002_M"):
case joaat("MP_Heist4_Tee_002_F"):
return "CLO_H4M_DECL_2";
break;
case joaat("MP_Heist4_Tee_001_M"):
case joaat("MP_Heist4_Tee_001_F"):
return "CLO_H4M_DECL_1";
break;
case joaat("MP_Heist4_Tee_000_M"):
case joaat("MP_Heist4_Tee_000_F"):
return "CLO_H4M_DECL_0";
break;
case joaat("MP_Heist4_Tee_007_M"):
case joaat("MP_Heist4_Tee_007_F"):
return "CLO_H4M_DECL_7";
break;
case joaat("MP_Heist4_Tee_008_M"):
case joaat("MP_Heist4_Tee_008_F"):
return "CLO_H4M_DECL_8";
break;
case joaat("MP_Heist4_Tee_009_M"):
case joaat("MP_Heist4_Tee_009_F"):
return "CLO_H4M_DECL_9";
break;
case joaat("MP_Heist4_Tee_010_M"):
case joaat("MP_Heist4_Tee_010_F"):
return "CLO_H4M_DECL_10";
break;
case joaat("MP_Heist4_Tee_011_M"):
case joaat("MP_Heist4_Tee_011_F"):
return "CLO_H4M_DECL_11";
break;
case joaat("MP_Heist4_Tee_012_M"):
case joaat("MP_Heist4_Tee_012_F"):
return "CLO_H4M_DECL_12";
break;
case joaat("MP_Heist4_Tee_013_M"):
case joaat("MP_Heist4_Tee_013_F"):
return "CLO_H4M_DECL_13";
break;
case joaat("MP_Heist4_Tee_014_M"):
case joaat("MP_Heist4_Tee_014_F"):
return "CLO_H4M_DECL_14";
break;
case joaat("MP_Heist4_Tee_015_M"):
case joaat("MP_Heist4_Tee_015_F"):
return "CLO_H4M_DECL_15";
break;
case joaat("MP_Heist4_Tee_016_M"):
case joaat("MP_Heist4_Tee_016_F"):
return "CLO_H4M_DECL_16";
break;
case joaat("MP_Heist4_Tee_017_M"):
case joaat("MP_Heist4_Tee_017_F"):
return "CLO_H4M_DECL_17";
break;
case joaat("MP_Heist4_Tee_018_M"):
case joaat("MP_Heist4_Tee_018_F"):
return "CLO_H4M_DECL_18";
break;
case joaat("MP_Heist4_Tee_019_M"):
case joaat("MP_Heist4_Tee_019_F"):
return "CLO_H4M_DECL_19";
break;
case joaat("MP_Heist4_Tee_033_M"):
case joaat("MP_Heist4_Tee_033_F"):
return "CLO_H4M_DECL_33";
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_jbib_8_0"):
case joaat("dlc_mp_h4_f_jbib_9_0"):
case joaat("dlc_mp_h4_m_jbib_8_0"):
case joaat("dlc_mp_h4_m_jbib_9_0"):
return "CLO_H4F_U_8_0";
break;
case joaat("dlc_mp_h4_f_jbib_10_0"):
case joaat("dlc_mp_h4_m_jbib_10_0"):
return "CLO_H4F_U_10_0";
break;
case joaat("dlc_mp_h4_f_jbib_5_0"):
case joaat("dlc_mp_h4_m_jbib_6_0"):
return "CLO_H4F_U_5_0";
break;
case joaat("dlc_mp_h4_f_jbib_5_1"):
case joaat("dlc_mp_h4_m_jbib_6_1"):
return "CLO_H4F_U_5_1";
break;
case joaat("dlc_mp_h4_m_jbib_0_5"):
case joaat("dlc_mp_h4_f_jbib_7_1"):
return "CLO_H4F_U_7_1";
break;
case joaat("MP_Heist4_Tee_048_M"):
case joaat("MP_Heist4_Tee_048_F"):
return "CLO_H4M_DECL_48";
break;
case joaat("MP_Heist4_Tee_047_M"):
case joaat("MP_Heist4_Tee_047_F"):
return "CLO_H4M_DECL_47";
break;
case joaat("MP_Heist4_Tee_045_M"):
case joaat("MP_Heist4_Tee_045_F"):
return "CLO_H4M_DECL_45";
break;
case joaat("MP_Heist4_Tee_046_M"):
case joaat("MP_Heist4_Tee_046_F"):
return "CLO_H4M_DECL_46";
break;
case joaat("dlc_mp_h4_f_jbib_7_5"):
case joaat("dlc_mp_h4_m_jbib_0_9"):
return "CLO_H4F_U_7_5";
break;
case joaat("dlc_mp_h4_f_jbib_7_4"):
case joaat("dlc_mp_h4_m_jbib_0_8"):
return "CLO_H4F_U_7_4";
break;
case joaat("dlc_mp_h4_m_decl_0_0"):
case joaat("dlc_mp_h4_f_decl_0_0"):
return "CLO_H4F_D_0_0";
break;
case joaat("dlc_mp_h4_m_jbib_0_6"):
case joaat("dlc_mp_h4_f_jbib_7_2"):
return "CLO_H4F_U_7_2";
break;
case joaat("dlc_mp_h4_m_jbib_0_7"):
case joaat("dlc_mp_h4_f_jbib_7_3"):
return "CLO_H4F_U_7_3";
break;
case joaat("dlc_mp_h4_m_jbib_5_0"):
case joaat("dlc_mp_h4_f_jbib_4_0"):
return "CLO_H4F_U_4_0";
break;
case joaat("dlc_mp_h4_f_jbib_6_4"):
case joaat("dlc_mp_h4_m_jbib_7_4"):
return "CLO_H4F_U_6_4";
break;
case joaat("dlc_mp_h4_f_jbib_6_3"):
case joaat("dlc_mp_h4_m_jbib_7_3"):
return "CLO_H4F_U_6_3";
break;
case joaat("dlc_mp_h4_f_jbib_6_2"):
case joaat("dlc_mp_h4_m_jbib_7_2"):
return "CLO_H4F_U_6_2";
break;
case joaat("dlc_mp_h4_f_jbib_6_1"):
case joaat("dlc_mp_h4_m_jbib_7_1"):
return "CLO_H4F_U_6_1";
break;
case joaat("dlc_mp_h4_f_jbib_6_0"):
case joaat("dlc_mp_h4_m_jbib_7_0"):
return "CLO_H4F_U_6_0";
break;
case joaat("dlc_mp_h4_f_legs_1_0"):
case joaat("dlc_mp_h4_m_legs_1_0"):
return "CLO_H4F_L_1_0";
break;
case joaat("dlc_mp_h4_f_legs_1_1"):
case joaat("dlc_mp_h4_m_legs_1_1"):
return "CLO_H4F_L_1_1";
break;
case joaat("dlc_mp_h4_f_legs_1_2"):
case joaat("dlc_mp_h4_m_legs_1_2"):
return "CLO_H4F_L_1_2";
break;
case joaat("dlc_mp_h4_f_legs_0_0"):
case joaat("dlc_mp_h4_m_legs_0_0"):
return "CLO_H4F_L_0_0";
break;
case joaat("dlc_mp_h4_f_phead_1_0"):
case joaat("dlc_mp_h4_m_phead_1_0"):
case joaat("dlc_mp_h4_f_phead_2_0"):
case joaat("dlc_mp_h4_m_phead_2_0"):
return "CLO_H4F_PH_1_0";
break;
case joaat("dlc_mp_h4_f_phead_1_1"):
case joaat("dlc_mp_h4_m_phead_1_1"):
case joaat("dlc_mp_h4_f_phead_2_1"):
case joaat("dlc_mp_h4_m_phead_2_1"):
return "CLO_H4F_PH_1_1";
break;
case joaat("dlc_mp_h4_f_phead_1_2"):
case joaat("dlc_mp_h4_m_phead_1_2"):
case joaat("dlc_mp_h4_f_phead_2_2"):
case joaat("dlc_mp_h4_m_phead_2_2"):
return "CLO_H4F_PH_1_2";
break;
case joaat("dlc_mp_h4_f_phead_1_3"):
case joaat("dlc_mp_h4_m_phead_1_3"):
case joaat("dlc_mp_h4_f_phead_2_3"):
case joaat("dlc_mp_h4_m_phead_2_3"):
return "CLO_H4F_PH_1_3";
break;
case joaat("dlc_mp_h4_f_phead_1_4"):
case joaat("dlc_mp_h4_m_phead_1_4"):
case joaat("dlc_mp_h4_f_phead_2_4"):
case joaat("dlc_mp_h4_m_phead_2_4"):
return "CLO_H4F_PH_1_4";
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_pleft_wrist_0_0"):
case joaat("dlc_mp_h4_f_pright_wrist_0_0"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_0"):
case joaat("dlc_mp_h4_m_pright_wrist_0_0"):
return "CLO_H4F_PLW_0_0";
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_1"):
case joaat("dlc_mp_h4_f_pright_wrist_0_1"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_1"):
case joaat("dlc_mp_h4_m_pright_wrist_0_1"):
return "CLO_H4F_PLW_0_1";
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_2"):
case joaat("dlc_mp_h4_f_pright_wrist_0_2"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_2"):
case joaat("dlc_mp_h4_m_pright_wrist_0_2"):
return "CLO_H4F_PLW_0_2";
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_3"):
case joaat("dlc_mp_h4_f_pright_wrist_0_3"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_3"):
case joaat("dlc_mp_h4_m_pright_wrist_0_3"):
return "CLO_H4F_PLW_0_3";
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_4"):
case joaat("dlc_mp_h4_f_pright_wrist_0_4"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_4"):
case joaat("dlc_mp_h4_m_pright_wrist_0_4"):
return "CLO_H4F_PLW_0_4";
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_5"):
case joaat("dlc_mp_h4_f_pright_wrist_0_5"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_5"):
case joaat("dlc_mp_h4_m_pright_wrist_0_5"):
return "CLO_H4F_PLW_0_5";
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_6"):
case joaat("dlc_mp_h4_f_pright_wrist_0_6"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_6"):
case joaat("dlc_mp_h4_m_pright_wrist_0_6"):
return "CLO_H4F_PLW_0_6";
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_7"):
case joaat("dlc_mp_h4_f_pright_wrist_0_7"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_7"):
case joaat("dlc_mp_h4_m_pright_wrist_0_7"):
return "CLO_H4F_PLW_0_7";
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_8"):
case joaat("dlc_mp_h4_f_pright_wrist_0_8"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_8"):
case joaat("dlc_mp_h4_m_pright_wrist_0_8"):
return "CLO_H4F_PLW_0_8";
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_9"):
case joaat("dlc_mp_h4_f_pright_wrist_0_9"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_9"):
case joaat("dlc_mp_h4_m_pright_wrist_0_9"):
return "CLO_H4F_PLW_0_9";
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_10"):
case joaat("dlc_mp_h4_f_pright_wrist_0_10"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_10"):
case joaat("dlc_mp_h4_m_pright_wrist_0_10"):
return "CLO_H4F_PLW_010";
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_11"):
case joaat("dlc_mp_h4_f_pright_wrist_0_11"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_11"):
case joaat("dlc_mp_h4_m_pright_wrist_0_11"):
return "CLO_H4F_PLW_011";
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_peyes_0_0"):
case joaat("dlc_mp_h4_m_peyes_0_0"):
return "CLO_H4F_PEY_0_0";
break;
case joaat("dlc_mp_h4_f_peyes_0_1"):
case joaat("dlc_mp_h4_m_peyes_0_1"):
return "CLO_H4F_PEY_0_1";
break;
case joaat("dlc_mp_h4_f_peyes_0_2"):
case joaat("dlc_mp_h4_m_peyes_0_2"):
return "CLO_H4F_PEY_0_2";
break;
case joaat("dlc_mp_h4_f_peyes_0_3"):
case joaat("dlc_mp_h4_m_peyes_0_3"):
return "CLO_H4F_PEY_0_3";
break;
case joaat("dlc_mp_h4_f_peyes_0_4"):
case joaat("dlc_mp_h4_m_peyes_0_4"):
return "CLO_H4F_PEY_0_4";
break;
case joaat("dlc_mp_h4_f_peyes_0_5"):
case joaat("dlc_mp_h4_m_peyes_0_5"):
return "CLO_H4F_PEY_0_5";
break;
case joaat("dlc_mp_h4_f_peyes_0_6"):
case joaat("dlc_mp_h4_m_peyes_0_6"):
return "CLO_H4F_PEY_0_6";
break;
case joaat("dlc_mp_h4_f_peyes_0_7"):
case joaat("dlc_mp_h4_m_peyes_0_7"):
return "CLO_H4F_PEY_0_7";
break;
case joaat("dlc_mp_h4_f_peyes_0_8"):
case joaat("dlc_mp_h4_m_peyes_0_8"):
return "CLO_H4F_PEY_0_8";
break;
case joaat("dlc_mp_h4_f_peyes_0_9"):
case joaat("dlc_mp_h4_m_peyes_0_9"):
return "CLO_H4F_PEY_0_9";
break;
case joaat("dlc_mp_h4_f_peyes_0_10"):
case joaat("dlc_mp_h4_m_peyes_0_10"):
return "CLO_H4F_PEY_010";
break;
case joaat("dlc_mp_h4_f_peyes_0_11"):
case joaat("dlc_mp_h4_m_peyes_0_11"):
return "CLO_H4F_PEY_011";
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_teeth_13_0"):
case joaat("dlc_mp_h4_m_teeth_13_0"):
case joaat("dlc_mp_h4_f_teeth_14_0"):
case joaat("dlc_mp_h4_m_teeth_14_0"):
return "CLO_H4F_T_13_0";
break;
case joaat("dlc_mp_h4_f_teeth_13_1"):
case joaat("dlc_mp_h4_m_teeth_13_1"):
case joaat("dlc_mp_h4_f_teeth_14_1"):
case joaat("dlc_mp_h4_m_teeth_14_1"):
return "CLO_H4F_T_13_1";
break;
case joaat("dlc_mp_h4_f_teeth_13_2"):
case joaat("dlc_mp_h4_m_teeth_13_2"):
case joaat("dlc_mp_h4_f_teeth_14_2"):
case joaat("dlc_mp_h4_m_teeth_14_2"):
return "CLO_H4F_T_13_2";
break;
case joaat("dlc_mp_h4_f_teeth_13_3"):
case joaat("dlc_mp_h4_m_teeth_13_3"):
case joaat("dlc_mp_h4_f_teeth_14_3"):
case joaat("dlc_mp_h4_m_teeth_14_3"):
return "CLO_H4F_T_13_3";
break;
case joaat("dlc_mp_h4_f_teeth_13_4"):
case joaat("dlc_mp_h4_m_teeth_13_4"):
case joaat("dlc_mp_h4_f_teeth_14_4"):
case joaat("dlc_mp_h4_m_teeth_14_4"):
return "CLO_H4F_T_13_4";
break;
case joaat("dlc_mp_h4_f_teeth_13_5"):
case joaat("dlc_mp_h4_m_teeth_13_5"):
case joaat("dlc_mp_h4_f_teeth_14_5"):
case joaat("dlc_mp_h4_m_teeth_14_5"):
return "CLO_H4F_T_13_5";
break;
case joaat("dlc_mp_h4_f_teeth_13_6"):
case joaat("dlc_mp_h4_m_teeth_13_6"):
case joaat("dlc_mp_h4_f_teeth_14_6"):
case joaat("dlc_mp_h4_m_teeth_14_6"):
return "CLO_H4F_T_13_6";
break;
case joaat("dlc_mp_h4_f_teeth_13_7"):
case joaat("dlc_mp_h4_m_teeth_13_7"):
case joaat("dlc_mp_h4_f_teeth_14_7"):
case joaat("dlc_mp_h4_m_teeth_14_7"):
return "CLO_H4F_T_13_7";
break;
case joaat("dlc_mp_h4_f_teeth_13_8"):
case joaat("dlc_mp_h4_m_teeth_13_8"):
case joaat("dlc_mp_h4_f_teeth_14_8"):
case joaat("dlc_mp_h4_m_teeth_14_8"):
return "CLO_H4F_T_13_8";
break;
case joaat("dlc_mp_h4_f_teeth_13_9"):
case joaat("dlc_mp_h4_m_teeth_13_9"):
case joaat("dlc_mp_h4_f_teeth_14_9"):
case joaat("dlc_mp_h4_m_teeth_14_9"):
return "CLO_H4F_T_13_9";
break;
case joaat("dlc_mp_h4_f_teeth_13_10"):
case joaat("dlc_mp_h4_m_teeth_13_10"):
case joaat("dlc_mp_h4_f_teeth_14_10"):
case joaat("dlc_mp_h4_m_teeth_14_10"):
return "CLO_H4F_T_13_10";
break;
case joaat("dlc_mp_h4_f_teeth_13_11"):
case joaat("dlc_mp_h4_m_teeth_13_11"):
case joaat("dlc_mp_h4_f_teeth_14_11"):
case joaat("dlc_mp_h4_m_teeth_14_11"):
return "CLO_H4F_T_13_11";
break;
case joaat("dlc_mp_h4_f_teeth_13_12"):
case joaat("dlc_mp_h4_m_teeth_13_12"):
case joaat("dlc_mp_h4_f_teeth_14_12"):
case joaat("dlc_mp_h4_m_teeth_14_12"):
return "CLO_H4F_T_13_12";
break;
case joaat("dlc_mp_h4_f_teeth_13_13"):
case joaat("dlc_mp_h4_m_teeth_13_13"):
case joaat("dlc_mp_h4_f_teeth_14_13"):
case joaat("dlc_mp_h4_m_teeth_14_13"):
return "CLO_H4F_T_13_13";
break;
case joaat("dlc_mp_h4_f_teeth_13_14"):
case joaat("dlc_mp_h4_m_teeth_13_14"):
case joaat("dlc_mp_h4_f_teeth_14_14"):
case joaat("dlc_mp_h4_m_teeth_14_14"):
return "CLO_H4F_T_13_14";
break;
case joaat("dlc_mp_h4_f_teeth_13_15"):
case joaat("dlc_mp_h4_m_teeth_13_15"):
case joaat("dlc_mp_h4_f_teeth_14_15"):
case joaat("dlc_mp_h4_m_teeth_14_15"):
return "CLO_H4F_T_13_15";
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_m_berd_4_0"):
case joaat("dlc_mp_h4_f_berd_4_0"):
return "CLO_H4M_B_4_0";
break;
case joaat("dlc_mp_h4_m_berd_4_1"):
case joaat("dlc_mp_h4_f_berd_4_1"):
return "CLO_H4M_B_4_1";
break;
case joaat("dlc_mp_h4_m_berd_4_2"):
case joaat("dlc_mp_h4_f_berd_4_2"):
return "CLO_H4M_B_4_2";
break;
case joaat("dlc_mp_h4_m_berd_4_3"):
case joaat("dlc_mp_h4_f_berd_4_3"):
return "CLO_H4M_B_4_3";
break;
case joaat("dlc_mp_h4_m_berd_4_4"):
case joaat("dlc_mp_h4_f_berd_4_4"):
return "CLO_H4M_B_4_4";
break;
case joaat("dlc_mp_h4_m_berd_4_5"):
case joaat("dlc_mp_h4_f_berd_4_5"):
return "CLO_H4M_B_4_5";
break;
case joaat("dlc_mp_h4_m_berd_4_6"):
case joaat("dlc_mp_h4_f_berd_4_6"):
return "CLO_H4M_B_4_6";
break;
case joaat("dlc_mp_h4_m_berd_4_7"):
case joaat("dlc_mp_h4_f_berd_4_7"):
return "CLO_H4M_B_4_7";
break;
case joaat("dlc_mp_h4_m_berd_4_8"):
case joaat("dlc_mp_h4_f_berd_4_8"):
return "CLO_H4M_B_4_8";
break;
case joaat("dlc_mp_h4_m_berd_4_9"):
case joaat("dlc_mp_h4_f_berd_4_9"):
return "CLO_H4M_B_4_9";
break;
case joaat("dlc_mp_h4_m_berd_4_10"):
case joaat("dlc_mp_h4_f_berd_4_10"):
return "CLO_H4M_B_4_10";
break;
case joaat("dlc_mp_h4_m_berd_4_11"):
case joaat("dlc_mp_h4_f_berd_4_11"):
return "CLO_H4M_B_4_11";
break;
case joaat("dlc_mp_h4_m_berd_4_12"):
case joaat("dlc_mp_h4_f_berd_4_12"):
return "CLO_H4M_B_4_12";
break;
case joaat("dlc_mp_h4_m_berd_4_13"):
case joaat("dlc_mp_h4_f_berd_4_13"):
return "CLO_H4M_B_4_13";
break;
case joaat("dlc_mp_h4_m_berd_4_14"):
case joaat("dlc_mp_h4_f_berd_4_14"):
return "CLO_H4M_B_4_14";
break;
case joaat("dlc_mp_h4_m_berd_4_15"):
case joaat("dlc_mp_h4_f_berd_4_15"):
return "CLO_H4M_B_4_15";
break;
case joaat("dlc_mp_h4_m_berd_4_16"):
case joaat("dlc_mp_h4_f_berd_4_16"):
return "CLO_H4M_B_4_16";
break;
case joaat("dlc_mp_h4_m_berd_4_17"):
case joaat("dlc_mp_h4_f_berd_4_17"):
return "CLO_H4M_B_4_17";
break;
case joaat("dlc_mp_h4_m_berd_4_18"):
case joaat("dlc_mp_h4_f_berd_4_18"):
return "CLO_H4M_B_4_18";
break;
case joaat("dlc_mp_h4_m_berd_4_19"):
case joaat("dlc_mp_h4_f_berd_4_19"):
return "CLO_H4M_B_4_19";
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_m_peyes_1_0"):
case joaat("dlc_mp_h4_f_peyes_1_0"):
return "CLO_H4M_PEY_1_0";
break;
case joaat("dlc_mp_h4_m_peyes_1_1"):
case joaat("dlc_mp_h4_f_peyes_1_1"):
return "CLO_H4M_PEY_1_1";
break;
case joaat("dlc_mp_h4_m_peyes_1_2"):
case joaat("dlc_mp_h4_f_peyes_1_2"):
return "CLO_H4M_PEY_1_2";
break;
case joaat("dlc_mp_h4_m_peyes_1_3"):
case joaat("dlc_mp_h4_f_peyes_1_3"):
return "CLO_H4M_PEY_1_3";
break;
case joaat("dlc_mp_h4_m_peyes_1_4"):
case joaat("dlc_mp_h4_f_peyes_1_4"):
return "CLO_H4M_PEY_1_4";
break;
case joaat("dlc_mp_h4_m_peyes_1_5"):
case joaat("dlc_mp_h4_f_peyes_1_5"):
return "CLO_H4M_PEY_1_5";
break;
case joaat("dlc_mp_h4_m_peyes_1_6"):
case joaat("dlc_mp_h4_f_peyes_1_6"):
return "CLO_H4M_PEY_1_6";
break;
case joaat("dlc_mp_h4_m_peyes_1_7"):
case joaat("dlc_mp_h4_f_peyes_1_7"):
return "CLO_H4M_PEY_1_7";
break;
case joaat("dlc_mp_h4_m_peyes_1_8"):
case joaat("dlc_mp_h4_f_peyes_1_8"):
return "CLO_H4M_PEY_1_8";
break;
case joaat("dlc_mp_h4_m_peyes_1_9"):
case joaat("dlc_mp_h4_f_peyes_1_9"):
return "CLO_H4M_PEY_1_9";
break;
case joaat("dlc_mp_h4_m_peyes_1_10"):
case joaat("dlc_mp_h4_f_peyes_1_10"):
return "CLO_H4M_PEY_110";
break;
case joaat("dlc_mp_h4_m_peyes_1_11"):
case joaat("dlc_mp_h4_f_peyes_1_11"):
return "CLO_H4M_PEY_111";
break;
case joaat("dlc_mp_h4_m_peyes_2_0"):
case joaat("dlc_mp_h4_f_peyes_2_0"):
return "CLO_H4M_PEY_2_0";
break;
case joaat("dlc_mp_h4_m_peyes_2_1"):
case joaat("dlc_mp_h4_f_peyes_2_1"):
return "CLO_H4M_PEY_2_1";
break;
case joaat("dlc_mp_h4_m_peyes_2_2"):
case joaat("dlc_mp_h4_f_peyes_2_2"):
return "CLO_H4M_PEY_2_2";
break;
case joaat("dlc_mp_h4_m_peyes_2_3"):
case joaat("dlc_mp_h4_f_peyes_2_3"):
return "CLO_H4M_PEY_2_3";
break;
case joaat("dlc_mp_h4_m_peyes_2_4"):
case joaat("dlc_mp_h4_f_peyes_2_4"):
return "CLO_H4M_PEY_2_4";
break;
case joaat("dlc_mp_h4_m_peyes_2_5"):
case joaat("dlc_mp_h4_f_peyes_2_5"):
return "CLO_H4M_PEY_2_5";
break;
case joaat("dlc_mp_h4_m_peyes_2_6"):
case joaat("dlc_mp_h4_f_peyes_2_6"):
return "CLO_H4M_PEY_2_6";
break;
case joaat("dlc_mp_h4_m_peyes_2_7"):
case joaat("dlc_mp_h4_f_peyes_2_7"):
return "CLO_H4M_PEY_2_7";
break;
case joaat("dlc_mp_h4_m_peyes_2_8"):
case joaat("dlc_mp_h4_f_peyes_2_8"):
return "CLO_H4M_PEY_2_8";
break;
case joaat("dlc_mp_h4_m_peyes_2_9"):
case joaat("dlc_mp_h4_f_peyes_2_9"):
return "CLO_H4M_PEY_2_9";
break;
case joaat("dlc_mp_h4_m_peyes_2_10"):
case joaat("dlc_mp_h4_f_peyes_2_10"):
return "CLO_H4M_PEY_210";
break;
case joaat("dlc_mp_h4_m_peyes_2_11"):
case joaat("dlc_mp_h4_f_peyes_2_11"):
return "CLO_H4M_PEY_211";
break;
case joaat("dlc_mp_h4_m_peyes_3_0"):
case joaat("dlc_mp_h4_f_peyes_3_0"):
return "CLO_H4M_PEY_3_0";
break;
case joaat("dlc_mp_h4_m_peyes_3_1"):
case joaat("dlc_mp_h4_f_peyes_3_1"):
return "CLO_H4M_PEY_3_1";
break;
case joaat("dlc_mp_h4_m_peyes_3_2"):
case joaat("dlc_mp_h4_f_peyes_3_2"):
return "CLO_H4M_PEY_3_2";
break;
case joaat("dlc_mp_h4_m_peyes_3_3"):
case joaat("dlc_mp_h4_f_peyes_3_3"):
return "CLO_H4M_PEY_3_3";
break;
case joaat("dlc_mp_h4_m_peyes_3_4"):
case joaat("dlc_mp_h4_f_peyes_3_4"):
return "CLO_H4M_PEY_3_4";
break;
case joaat("dlc_mp_h4_m_peyes_3_5"):
case joaat("dlc_mp_h4_f_peyes_3_5"):
return "CLO_H4M_PEY_3_5";
break;
case joaat("dlc_mp_h4_m_peyes_3_6"):
case joaat("dlc_mp_h4_f_peyes_3_6"):
return "CLO_H4M_PEY_3_6";
break;
case joaat("dlc_mp_h4_m_peyes_3_7"):
case joaat("dlc_mp_h4_f_peyes_3_7"):
return "CLO_H4M_PEY_3_7";
break;
case joaat("dlc_mp_h4_m_peyes_3_8"):
case joaat("dlc_mp_h4_f_peyes_3_8"):
return "CLO_H4M_PEY_3_8";
break;
case joaat("dlc_mp_h4_m_peyes_3_9"):
case joaat("dlc_mp_h4_f_peyes_3_9"):
return "CLO_H4M_PEY_3_9";
break;
case joaat("dlc_mp_h4_m_peyes_3_10"):
case joaat("dlc_mp_h4_f_peyes_3_10"):
return "CLO_H4M_PEY_310";
break;
case joaat("dlc_mp_h4_m_peyes_3_11"):
case joaat("dlc_mp_h4_f_peyes_3_11"):
return "CLO_H4M_PEY_311";
break;
}
switch (iParam0){
case -1265443416:
return "CLO_SUM_DECL_0";
break;
case 676807987:
return "CLO_SUF_DECL_0";
break;
case 1888753218:
return "CLO_SUM_DECL_1";
break;
case 272160153:
return "CLO_SUF_DECL_1";
break;
case -552467991:
return "CLO_SUM_DECL_2";
break;
case 1593344440:
return "CLO_SUF_DECL_2";
break;
case -1655919948:
return "CLO_SUM_DECL_3";
break;
case 546222390:
return "CLO_SUF_DECL_3";
break;
case -917106601:
return "CLO_SUM_DECL_4";
break;
case 1983375900:
return "CLO_SUF_DECL_4";
break;
case 1595446967:
return "CLO_SUM_DECL_5";
break;
case -620589387:
return "CLO_SUF_DECL_5";
break;
case -530593323:
return "CLO_SUM_DECL_6";
break;
case 383923929:
return "CLO_SUF_DECL_6";
break;
case 561619447:
return "CLO_SUM_DECL_7";
break;
case -1703406594:
return "CLO_SUF_DECL_7";
break;
case -1913656173:
return "CLO_SUM_DECL_8";
break;
case -398286533:
return "CLO_SUF_DECL_8";
break;
case -1766901922:
return "CLO_SUM_DECL_9";
break;
case -80478106:
return "CLO_SUF_DECL_9";
break;
case 2091781849:
return "CLO_SUM_DECL_10";
break;
case 1835331655:
return "CLO_SUF_DECL_10";
break;
case 1824588341:
return "CLO_SUM_DECL_11";
break;
case -1650596870:
return "CLO_SUF_DECL_11";
break;
case 242597641:
return "CLO_SUM_DECL_12";
break;
case 1231926496:
return "CLO_SUF_DECL_12";
break;
case 566785691:
return "CLO_SUM_DECL_13";
break;
case -1506181253:
return "CLO_SUF_DECL_13";
break;
case -2091312957:
return "CLO_SUM_DECL_14";
break;
case -1737145605:
return "CLO_SUF_DECL_14";
break;
case -2079214831:
return "CLO_SUM_DECL_15";
break;
case 1673851512:
return "CLO_SUF_DECL_15";
break;
case 1359156274:
return "CLO_SUM_DECL_16";
break;
case 1023339598:
return "CLO_SUF_DECL_16";
break;
case -1302300594:
return "CLO_SUM_DECL_17";
break;
case -163738770:
return "CLO_SUF_DECL_17";
break;
case -1351518396:
return "CLO_SUM_DECL_18";
break;
case 1863218823:
return "CLO_SUF_DECL_18";
break;
case -797874817:
return "CLO_SUM_DECL_19";
break;
case 333966447:
return "CLO_SUF_DECL_19";
break;
case -385507297:
return "CLO_SUM_DECL_20";
break;
case 1412626052:
return "CLO_SUF_DECL_20";
break;
case 2011910758:
return "CLO_SUM_DECL_21";
break;
case -39100956:
return "CLO_SUF_DECL_21";
break;
case -1953985443:
return "CLO_SUM_DECL_22";
break;
case 1631533003:
return "CLO_SUF_DECL_22";
break;
case -1124222352:
return "CLO_SUM_DECL_23";
break;
case 1493430918:
return "CLO_SUF_DECL_23";
break;
case -1806994767:
return "CLO_SUM_DECL_24";
break;
case -196693334:
return "CLO_SUF_DECL_24";
break;
case -1445761968:
return "CLO_SUM_DECL_25";
break;
case 553507495:
return "CLO_SUF_DECL_25";
break;
case -89186417:
return "CLO_SUM_DECL_26";
break;
case 2003474700:
return "CLO_SUF_DECL_26";
break;
case -308083083:
return "CLO_SUM_DECL_27";
break;
case 1121792228:
return "CLO_SUF_DECL_27";
break;
case 667714507:
return "CLO_SUM_DECL_28";
break;
case -1424651669:
return "CLO_SUF_DECL_28";
break;
case -1610210252:
return "CLO_SUM_DECL_29";
break;
case -1454164346:
return "CLO_SUF_DECL_29";
break;
case joaat("dlc_mp_sum_m_berd_3_4"):
return "CLO_SUM_B_3_4";
break;
case joaat("dlc_mp_sum_f_berd_3_4"):
return "CLO_SUF_B_3_4";
break;
case joaat("dlc_mp_sum_m_berd_3_5"):
return "CLO_SUM_B_3_5";
break;
case joaat("dlc_mp_sum_f_berd_3_5"):
return "CLO_SUF_B_3_5";
break;
case joaat("dlc_mp_sum_m_berd_3_6"):
return "CLO_SUM_B_3_6";
break;
case joaat("dlc_mp_sum_f_berd_3_6"):
return "CLO_SUF_B_3_6";
break;
case joaat("dlc_mp_sum_m_berd_3_7"):
return "CLO_SUM_B_3_7";
break;
case joaat("dlc_mp_sum_f_berd_3_7"):
return "CLO_SUF_B_3_7";
break;
case joaat("dlc_mp_sum_m_legs_1_25"):
return "CLO_SUM_L_1_25";
break;
case joaat("dlc_mp_sum_f_legs_2_25"):
return "CLO_SUF_L_2_25";
break;
case joaat("dlc_mp_sum_m_jbib_0_25"):
return "CLO_SUM_U_0_25";
break;
case joaat("dlc_mp_sum_f_jbib_0_25"):
return "CLO_SUF_U_0_25";
break;
}
switch (iParam0){
case joaat("dlc_mp_vwd_m_decl_1_0"):
return "CLO_VWM_D_1_0";
break;
case joaat("dlc_mp_vwd_f_decl_1_0"):
return "CLO_VWF_D_1_0";
break;
case joaat("dlc_mp_vwd_m_decl_1_6"):
return "CLO_VWM_D_1_6";
break;
case joaat("dlc_mp_vwd_f_decl_1_6"):
return "CLO_VWF_D_1_6";
break;
case joaat("dlc_mp_vwd_m_decl_1_7"):
return "CLO_VWM_D_1_7";
break;
case joaat("dlc_mp_vwd_f_decl_1_7"):
return "CLO_VWF_D_1_7";
break;
case joaat("dlc_mp_vwd_m_decl_1_8"):
return "CLO_VWM_D_1_8";
break;
case joaat("dlc_mp_vwd_f_decl_1_8"):
return "CLO_VWF_D_1_8";
break;
case joaat("dlc_mp_vwd_m_jbib_23_5"):
return "CLO_VWM_U_23_5";
break;
case joaat("dlc_mp_vwd_f_jbib_21_5"):
return "CLO_VWF_U_21_5";
break;
case joaat("dlc_mp_vwd_m_jbib_23_8"):
return "CLO_VWM_U_23_8";
break;
case joaat("dlc_mp_vwd_f_jbib_21_8"):
return "CLO_VWF_U_21_8";
break;
case joaat("dlc_mp_vwd_m_jbib_23_9"):
return "CLO_VWM_U_23_9";
break;
case joaat("dlc_mp_vwd_f_jbib_21_9"):
return "CLO_VWF_U_21_9";
break;
case joaat("dlc_mp_vwd_m_jbib_23_10"):
return "CLO_VWM_U_23_10";
break;
case joaat("dlc_mp_vwd_f_jbib_21_10"):
return "CLO_VWF_U_21_10";
break;
case joaat("dlc_mp_vwd_m_decl_1_11"):
return "CLO_VWM_D_1_11";
break;
case joaat("dlc_mp_vwd_f_decl_1_11"):
return "CLO_VWF_D_1_11";
break;
case joaat("dlc_mp_vwd_m_decl_1_12"):
return "CLO_VWM_D_1_12";
break;
case joaat("dlc_mp_vwd_f_decl_1_12"):
return "CLO_VMF_D_1_12";
break;
case joaat("dlc_mp_vwd_m_decl_1_13"):
return "CLO_VWM_D_1_13";
break;
case joaat("dlc_mp_vwd_f_decl_1_13"):
return "CLO_VWF_D_1_13";
break;
case joaat("dlc_mp_vwd_m_decl_1_14"):
return "CLO_VWM_D_1_14";
break;
case joaat("dlc_mp_vwd_f_decl_1_14"):
return "CLO_VWF_D_1_14";
break;
case joaat("dlc_mp_vwd_m_decl_1_15"):
return "CLO_VWM_D_1_15";
break;
case joaat("dlc_mp_vwd_f_decl_1_15"):
return "CLO_VWF_D_1_15";
break;
case joaat("dlc_mp_vwd_m_decl_1_16"):
return "CLO_VWM_D_1_16";
break;
case joaat("dlc_mp_vwd_f_decl_1_16"):
return "CLO_VWF_D_1_16";
break;
case joaat("dlc_mp_vwd_m_decl_1_17"):
return "CLO_VWM_D_1_17";
break;
case joaat("dlc_mp_vwd_f_decl_1_17"):
return "CLO_VWF_D_1_17";
break;
case joaat("dlc_mp_vwd_m_decl_1_18"):
return "CLO_VWM_D_1_18";
break;
case joaat("dlc_mp_vwd_f_decl_1_18"):
return "CLO_VWF_D_1_18";
break;
case joaat("dlc_mp_vwd_m_jbib_23_0"):
return "CLO_VWM_U_23_0";
break;
case joaat("dlc_mp_vwd_f_jbib_21_0"):
return "CLO_VMF_U_21_0";
break;
case joaat("dlc_mp_vwd_m_jbib_23_2"):
return "CLO_VWM_U_23_2";
break;
case joaat("dlc_mp_vwd_f_jbib_21_2"):
return "CLO_VMF_U_21_2";
break;
case joaat("dlc_mp_vwd_m_jbib_23_4"):
return "CLO_VWM_U_23_4";
break;
case joaat("dlc_mp_vwd_f_jbib_21_4"):
return "CLO_VMF_U_21_4";
break;
case joaat("dlc_mp_vwd_m_jbib_23_7"):
return "CLO_VWM_U_23_7";
break;
case joaat("dlc_mp_vwd_f_jbib_21_7"):
return "CLO_VMF_U_21_7";
break;
}
switch (iParam0){
case joaat("MP_Christmas2018_Tee_000_M"):
return "CLO_AWM_DECL_0";
case joaat("MP_Christmas2018_Tee_000_F"):
return "CLO_AWF_DECL_0";
case joaat("MP_Christmas2018_Tee_001_M"):
return "CLO_AWM_DECL_1";
case joaat("MP_Christmas2018_Tee_001_F"):
return "CLO_AWF_DECL_1";
case joaat("MP_Christmas2018_Tee_002_M"):
return "CLO_AWM_DECL_2";
case joaat("MP_Christmas2018_Tee_002_F"):
return "CLO_AWF_DECL_2";
case joaat("MP_Christmas2018_Tee_003_M"):
return "CLO_AWM_DECL_3";
case joaat("MP_Christmas2018_Tee_003_F"):
return "CLO_AWF_DECL_3";
case joaat("MP_Christmas2018_Tee_004_M"):
return "CLO_AWM_DECL_4";
case joaat("MP_Christmas2018_Tee_004_F"):
return "CLO_AWF_DECL_4";
case joaat("MP_Christmas2018_Tee_005_M"):
return "CLO_AWM_DECL_5";
case joaat("MP_Christmas2018_Tee_005_F"):
return "CLO_AWF_DECL_5";
case joaat("MP_Christmas2018_Tee_006_M"):
return "CLO_AWM_DECL_6";
case joaat("MP_Christmas2018_Tee_006_F"):
return "CLO_AWF_DECL_6";
case joaat("MP_Christmas2018_Tee_007_M"):
return "CLO_AWM_DECL_7";
case joaat("MP_Christmas2018_Tee_007_F"):
return "CLO_AWF_DECL_7";
case joaat("MP_Christmas2018_Tee_008_M"):
return "CLO_AWM_DECL_8";
case joaat("MP_Christmas2018_Tee_008_F"):
return "CLO_AWF_DECL_8";
case joaat("MP_Christmas2018_Tee_009_M"):
return "CLO_AWM_DECL_9";
case joaat("MP_Christmas2018_Tee_009_F"):
return "CLO_AWF_DECL_9";
case joaat("MP_Christmas2018_Tee_010_M"):
return "CLO_AWM_DECL_10";
case joaat("MP_Christmas2018_Tee_010_F"):
return "CLO_AWF_DECL_10";
case joaat("MP_Christmas2018_Tee_011_M"):
return "CLO_AWM_DECL_11";
case joaat("MP_Christmas2018_Tee_011_F"):
return "CLO_AWF_DECL_11";
case joaat("MP_Christmas2018_Tee_012_M"):
return "CLO_AWM_DECL_12";
case joaat("MP_Christmas2018_Tee_012_F"):
return "CLO_AWF_DECL_12";
case joaat("MP_Christmas2018_Tee_013_M"):
return "CLO_AWM_DECL_13";
case joaat("MP_Christmas2018_Tee_013_F"):
return "CLO_AWF_DECL_13";
case joaat("MP_Christmas2018_Tee_014_M"):
return "CLO_AWM_DECL_14";
case joaat("MP_Christmas2018_Tee_014_F"):
return "CLO_AWF_DECL_14";
case joaat("MP_Christmas2018_Tee_015_M"):
return "CLO_AWM_DECL_15";
case joaat("MP_Christmas2018_Tee_015_F"):
return "CLO_AWF_DECL_15";
case joaat("MP_Christmas2018_Tee_016_M"):
return "CLO_AWM_DECL_16";
case joaat("MP_Christmas2018_Tee_016_F"):
return "CLO_AWF_DECL_16";
case joaat("MP_Christmas2018_Tee_017_M"):
return "CLO_AWM_DECL_17";
case joaat("MP_Christmas2018_Tee_017_F"):
return "CLO_AWF_DECL_17";
case joaat("MP_Christmas2018_Tee_018_M"):
return "CLO_AWM_DECL_18";
case joaat("MP_Christmas2018_Tee_018_F"):
return "CLO_AWF_DECL_18";
case joaat("MP_Christmas2018_Tee_019_M"):
return "CLO_AWM_DECL_19";
case joaat("MP_Christmas2018_Tee_019_F"):
return "CLO_AWF_DECL_19";
case joaat("MP_Christmas2018_Tee_020_M"):
return "CLO_AWM_DECL_20";
case joaat("MP_Christmas2018_Tee_020_F"):
return "CLO_AWF_DECL_20";
case joaat("MP_Christmas2018_Tee_021_M"):
return "CLO_AWM_DECL_21";
case joaat("MP_Christmas2018_Tee_021_F"):
return "CLO_AWF_DECL_21";
case joaat("MP_Christmas2018_Tee_022_M"):
return "CLO_AWM_DECL_22";
case joaat("MP_Christmas2018_Tee_022_F"):
return "CLO_AWF_DECL_22";
case joaat("MP_Christmas2018_Tee_023_M"):
return "CLO_AWM_DECL_23";
case joaat("MP_Christmas2018_Tee_023_F"):
return "CLO_AWF_DECL_23";
case joaat("MP_Christmas2018_Tee_024_M"):
return "CLO_AWM_DECL_24";
case joaat("MP_Christmas2018_Tee_024_F"):
return "CLO_AWF_DECL_24";
case joaat("MP_Christmas2018_Tee_025_M"):
return "CLO_AWM_DECL_25";
case joaat("MP_Christmas2018_Tee_025_F"):
return "CLO_AWF_DECL_25";
case joaat("MP_Christmas2018_Tee_026_M"):
return "CLO_AWM_DECL_26";
case joaat("MP_Christmas2018_Tee_026_F"):
return "CLO_AWF_DECL_26";
case joaat("MP_Christmas2018_Tee_027_M"):
return "CLO_AWM_DECL_27";
case joaat("MP_Christmas2018_Tee_027_F"):
return "CLO_AWF_DECL_27";
case joaat("MP_Christmas2018_Tee_028_M"):
return "CLO_AWM_DECL_28";
case joaat("MP_Christmas2018_Tee_028_F"):
return "CLO_AWF_DECL_28";
case joaat("MP_Christmas2018_Tee_029_M"):
return "CLO_AWM_DECL_29";
case joaat("MP_Christmas2018_Tee_029_F"):
return "CLO_AWF_DECL_29";
case joaat("MP_Christmas2018_Tee_030_M"):
return "CLO_AWM_DECL_30";
case joaat("MP_Christmas2018_Tee_030_F"):
return "CLO_AWF_DECL_30";
case joaat("MP_Christmas2018_Tee_031_M"):
return "CLO_AWM_DECL_31";
case joaat("MP_Christmas2018_Tee_031_F"):
return "CLO_AWF_DECL_31";
case joaat("MP_Christmas2018_Tee_032_M"):
return "CLO_AWM_DECL_32";
case joaat("MP_Christmas2018_Tee_032_F"):
return "CLO_AWF_DECL_32";
case joaat("MP_Christmas2018_Tee_033_M"):
return "CLO_AWM_DECL_33";
case joaat("MP_Christmas2018_Tee_033_F"):
return "CLO_AWF_DECL_33";
case joaat("MP_Christmas2018_Tee_034_M"):
return "CLO_AWM_DECL_34";
case joaat("MP_Christmas2018_Tee_034_F"):
return "CLO_AWF_DECL_34";
case joaat("MP_Christmas2018_Tee_035_M"):
return "CLO_AWM_DECL_35";
case joaat("MP_Christmas2018_Tee_035_F"):
return "CLO_AWF_DECL_35";
case joaat("MP_Christmas2018_Tee_036_M"):
return "CLO_AWM_DECL_36";
case joaat("MP_Christmas2018_Tee_036_F"):
return "CLO_AWF_DECL_36";
case joaat("MP_Christmas2018_Tee_037_M"):
return "CLO_AWM_DECL_37";
case joaat("MP_Christmas2018_Tee_037_F"):
return "CLO_AWF_DECL_37";
case joaat("MP_Christmas2018_Tee_038_M"):
return "CLO_AWM_DECL_38";
case joaat("MP_Christmas2018_Tee_038_F"):
return "CLO_AWF_DECL_38";
case joaat("MP_Christmas2018_Tee_039_M"):
return "CLO_AWM_DECL_39";
case joaat("MP_Christmas2018_Tee_039_F"):
return "CLO_AWF_DECL_39";
case joaat("MP_Christmas2018_Tee_040_M"):
return "CLO_AWM_DECL_40";
case joaat("MP_Christmas2018_Tee_040_F"):
return "CLO_AWF_DECL_40";
case joaat("MP_Christmas2018_Tee_041_M"):
return "CLO_AWM_DECL_41";
case joaat("MP_Christmas2018_Tee_041_F"):
return "CLO_AWF_DECL_41";
case joaat("MP_Christmas2018_Tee_042_M"):
return "CLO_AWM_DECL_42";
case joaat("MP_Christmas2018_Tee_042_F"):
return "CLO_AWF_DECL_42";
case joaat("MP_Christmas2018_Tee_043_M"):
return "CLO_AWM_DECL_43";
case joaat("MP_Christmas2018_Tee_043_F"):
return "CLO_AWF_DECL_43";
case joaat("MP_Christmas2018_Tee_044_M"):
return "CLO_AWM_DECL_44";
case joaat("MP_Christmas2018_Tee_044_F"):
return "CLO_AWF_DECL_44";
case joaat("MP_Christmas2018_Tee_045_M"):
return "CLO_AWM_DECL_45";
case joaat("MP_Christmas2018_Tee_045_F"):
return "CLO_AWF_DECL_45";
case joaat("MP_Christmas2018_Tee_046_M"):
return "CLO_AWM_DECL_46";
case joaat("MP_Christmas2018_Tee_046_F"):
return "CLO_AWF_DECL_46";
case joaat("MP_Christmas2018_Tee_047_M"):
return "CLO_AWM_DECL_47";
case joaat("MP_Christmas2018_Tee_047_F"):
return "CLO_AWF_DECL_47";
case joaat("MP_Christmas2018_Tee_048_M"):
return "CLO_AWM_DECL_48";
case joaat("MP_Christmas2018_Tee_048_F"):
return "CLO_AWF_DECL_48";
case joaat("MP_Christmas2018_Tee_049_M"):
return "CLO_AWM_DECL_49";
case joaat("MP_Christmas2018_Tee_049_F"):
return "CLO_AWF_DECL_49";
case joaat("MP_Christmas2018_Tee_050_M"):
return "CLO_AWM_DECL_50";
case joaat("MP_Christmas2018_Tee_050_F"):
return "CLO_AWF_DECL_50";
case joaat("MP_Christmas2018_Tee_051_M"):
return "CLO_AWM_DECL_51";
case joaat("MP_Christmas2018_Tee_051_F"):
return "CLO_AWF_DECL_51";
case joaat("MP_Christmas2018_Tee_052_M"):
return "CLO_AWM_DECL_52";
case joaat("MP_Christmas2018_Tee_052_F"):
return "CLO_AWF_DECL_52";
case joaat("MP_Christmas2018_Tee_053_M"):
return "CLO_AWM_DECL_53";
case joaat("MP_Christmas2018_Tee_053_F"):
return "CLO_AWF_DECL_53";
case joaat("MP_Christmas2018_Tee_054_M"):
return "CLO_AWM_DECL_54";
case joaat("MP_Christmas2018_Tee_054_F"):
return "CLO_AWF_DECL_54";
case joaat("MP_Christmas2018_Tee_055_M"):
return "CLO_AWM_DECL_55";
case joaat("MP_Christmas2018_Tee_055_F"):
return "CLO_AWF_DECL_55";
case joaat("MP_Christmas2018_Tee_056_M"):
return "CLO_AWM_DECL_56";
case joaat("MP_Christmas2018_Tee_056_F"):
return "CLO_AWF_DECL_56";
case joaat("MP_Christmas2018_Tee_057_M"):
return "CLO_AWM_DECL_57";
case joaat("MP_Christmas2018_Tee_057_F"):
return "CLO_AWF_DECL_57";
case joaat("MP_Christmas2018_Tee_058_M"):
return "CLO_AWM_DECL_58";
case joaat("MP_Christmas2018_Tee_058_F"):
return "CLO_AWF_DECL_58";
case joaat("MP_Christmas2018_Tee_059_M"):
return "CLO_AWM_DECL_59";
case joaat("MP_Christmas2018_Tee_059_F"):
return "CLO_AWF_DECL_59";
case joaat("MP_Christmas2018_Tee_060_M"):
return "CLO_AWM_DECL_60";
case joaat("MP_Christmas2018_Tee_060_F"):
return "CLO_AWF_DECL_60";
case joaat("MP_Christmas2018_Tee_061_M"):
return "CLO_AWMDECL_61";
case joaat("MP_Christmas2018_Tee_061_F"):
return "CLO_AWF_DECL_61";
case joaat("MP_Christmas2018_Tee_062_M"):
return "CLO_AWM_DECL_62";
case joaat("MP_Christmas2018_Tee_062_F"):
return "CLO_AWF_DECL_62";
case joaat("MP_Christmas2018_Tee_063_M"):
return "CLO_AWM_DECL_63";
case joaat("MP_Christmas2018_Tee_063_F"):
return "CLO_AWF_DECL_63";
case joaat("MP_Christmas2018_Tee_064_M"):
return "CLO_AWM_DECL_64";
case joaat("MP_Christmas2018_Tee_064_F"):
return "CLO_AWF_DECL_64";
case joaat("MP_Christmas2018_Tee_065_M"):
return "CLO_AWM_DECL_65";
case joaat("MP_Christmas2018_Tee_065_F"):
return "CLO_AWF_DECL_65";
case joaat("MP_Christmas2018_Tee_066_M"):
return "CLO_AWM_DECL_66";
case joaat("MP_Christmas2018_Tee_066_F"):
return "CLO_AWF_DECL_66";
case joaat("MP_Christmas2018_Tee_067_M"):
return "CLO_AWM_DECL_67";
case joaat("MP_Christmas2018_Tee_067_F"):
return "CLO_AWF_DECL_67";
case joaat("MP_Christmas2018_Tee_068_M"):
return "CLO_AWM_DECL_68";
case joaat("MP_Christmas2018_Tee_068_F"):
return "CLO_AWF_DECL_68";
default:
}
switch (iParam0){
case joaat("dlc_mp_arena_f_jbib_16_0"):
return "CLO_X5F_U_16_0";
case joaat("dlc_mp_arena_m_jbib_16_0"):
return "CLO_X5M_U_16_0";
case joaat("dlc_mp_arena_f_jbib_16_1"):
return "CLO_X5F_U_16_1";
case joaat("dlc_mp_arena_m_jbib_16_1"):
return "CLO_X5M_U_16_1";
case joaat("dlc_mp_arena_f_jbib_16_2"):
return "CLO_X5F_U_16_2";
case joaat("dlc_mp_arena_m_jbib_16_2"):
return "CLO_X5M_U_16_2";
case joaat("dlc_mp_arena_f_jbib_16_3"):
return "CLO_X5F_U_16_3";
case joaat("dlc_mp_arena_m_jbib_16_3"):
return "CLO_X5M_U_16_3";
case joaat("dlc_mp_arena_f_jbib_16_4"):
return "CLO_X5F_U_16_4";
case joaat("dlc_mp_arena_m_jbib_16_4"):
return "CLO_X5M_U_16_4";
case joaat("dlc_mp_arena_f_jbib_16_5"):
return "CLO_X5F_U_16_5";
case joaat("dlc_mp_arena_m_jbib_16_5"):
return "CLO_X5M_U_16_5";
case joaat("dlc_mp_arena_f_jbib_16_6"):
return "CLO_X5F_U_16_6";
case joaat("dlc_mp_arena_m_jbib_16_6"):
return "CLO_X5M_U_16_6";
case joaat("dlc_mp_arena_f_jbib_16_7"):
return "CLO_X5F_U_16_7";
case joaat("dlc_mp_arena_m_jbib_16_7"):
return "CLO_X5M_U_16_7";
case joaat("dlc_mp_arena_f_jbib_16_8"):
return "CLO_X5F_U_16_8";
case joaat("dlc_mp_arena_m_jbib_16_8"):
return "CLO_X5M_U_16_8";
case joaat("dlc_mp_arena_f_jbib_16_9"):
return "CLO_X5F_U_16_9";
case joaat("dlc_mp_arena_m_jbib_16_9"):
return "CLO_X5M_U_16_9";
case joaat("dlc_mp_arena_f_jbib_16_10"):
return "CLO_X5F_U_16_10";
case joaat("dlc_mp_arena_m_jbib_16_10"):
return "CLO_X5M_U_16_10";
case joaat("dlc_mp_arena_f_jbib_16_11"):
return "CLO_X5F_U_16_11";
case joaat("dlc_mp_arena_m_jbib_16_11"):
return "CLO_X5M_U_16_11";
case joaat("dlc_mp_arena_f_jbib_16_12"):
return "CLO_X5F_U_16_12";
case joaat("dlc_mp_arena_m_jbib_16_12"):
return "CLO_X5M_U_16_12";
case joaat("dlc_mp_arena_f_jbib_16_13"):
return "CLO_X5F_U_16_13";
case joaat("dlc_mp_arena_m_jbib_16_13"):
return "CLO_X5M_U_16_13";
default:
}
switch (iParam0){
case joaat("MP_Battle_Clothing_000_M"):
case joaat("MP_Battle_Clothing_000_F"):
return "CLO_BHM_DECL_0";
case joaat("MP_Battle_Clothing_002_M"):
case joaat("MP_Battle_Clothing_002_F"):
return "CLO_BHM_DECL_1";
case joaat("MP_Battle_Clothing_003_M"):
case joaat("MP_Battle_Clothing_003_F"):
return "CLO_BHM_DECL_2";
case joaat("MP_Battle_Clothing_004_M"):
case joaat("MP_Battle_Clothing_004_F"):
return "CLO_BHM_DECL_3";
case joaat("MP_Battle_Clothing_005_M"):
case joaat("MP_Battle_Clothing_005_F"):
return "CLO_BHM_DECL_4";
case joaat("MP_Battle_Clothing_006_M"):
case joaat("MP_Battle_Clothing_006_F"):
return "CLO_BHM_DECL_5";
case joaat("MP_Battle_Clothing_007_M"):
case joaat("MP_Battle_Clothing_007_F"):
return "CLO_BHM_DECL_6";
case joaat("MP_Battle_Clothing_008_M"):
case joaat("MP_Battle_Clothing_008_F"):
return "CLO_BHM_DECL_7";
case joaat("MP_Battle_Clothing_009_M"):
case joaat("MP_Battle_Clothing_009_F"):
return "CLO_BHM_DECL_8";
case joaat("MP_Battle_Clothing_010_M"):
case joaat("MP_Battle_Clothing_010_F"):
return "CLO_BHM_DECL_9";
case joaat("MP_Battle_Clothing_011_M"):
case joaat("MP_Battle_Clothing_011_F"):
return "CLO_BHM_DECL_10";
case joaat("MP_Battle_Clothing_012_M"):
case joaat("MP_Battle_Clothing_012_F"):
return "CLO_BHM_DECL_11";
case joaat("MP_Battle_Clothing_013_M"):
case joaat("MP_Battle_Clothing_013_F"):
return "CLO_BHM_DECL_12";
case joaat("MP_Battle_Clothing_014_M"):
case joaat("MP_Battle_Clothing_014_F"):
return "CLO_BHM_DECL_13";
case joaat("MP_Battle_Clothing_015_M"):
case joaat("MP_Battle_Clothing_015_F"):
return "CLO_BHM_DECL_14";
case joaat("MP_Battle_Clothing_016_M"):
case joaat("MP_Battle_Clothing_016_F"):
return "CLO_BHM_DECL_15";
case joaat("MP_Battle_Clothing_017_M"):
case joaat("MP_Battle_Clothing_017_F"):
return "CLO_BHM_DECL_16";
case joaat("MP_Battle_Clothing_018_M"):
case joaat("MP_Battle_Clothing_018_F"):
return "CLO_BHM_DECL_17";
case joaat("MP_Battle_Clothing_019_M"):
case joaat("MP_Battle_Clothing_019_F"):
return "CLO_BHM_DECL_18";
case joaat("MP_Battle_Clothing_020_M"):
case joaat("MP_Battle_Clothing_020_F"):
return "CLO_BHM_DECL_19";
case joaat("MP_Battle_Clothing_021_M"):
case joaat("MP_Battle_Clothing_021_F"):
return "CLO_BHM_DECL_20";
case joaat("MP_Battle_Clothing_022_M"):
case joaat("MP_Battle_Clothing_022_F"):
return "BBNCSHIRT3";
case joaat("MP_Battle_Clothing_023_M"):
case joaat("MP_Battle_Clothing_023_F"):
return "BBNCSHIRT4";
case joaat("MP_Battle_Clothing_024_M"):
case joaat("MP_Battle_Clothing_024_F"):
return "BBNCSHIRT5";
case joaat("MP_Battle_Clothing_025_M"):
case joaat("MP_Battle_Clothing_025_F"):
return "BBNCSHIRT1";
case joaat("MP_Battle_Clothing_026_M"):
case joaat("MP_Battle_Clothing_026_F"):
return "BBNCSHIRT7";
case joaat("MP_Battle_Clothing_027_M"):
case joaat("MP_Battle_Clothing_027_F"):
return "BBNCSHIRT2";
case joaat("MP_Battle_Clothing_028_M"):
case joaat("MP_Battle_Clothing_028_F"):
return "BBNCSHIRT6";
case joaat("MP_Battle_Clothing_029_M"):
case joaat("MP_Battle_Clothing_029_F"):
return "BBNCSHIRT8";
case joaat("MP_Battle_Clothing_030_M"):
case joaat("MP_Battle_Clothing_030_F"):
return "BBNCSHIRT9";
default:
}
switch (iParam0){
case joaat("MP_Battle_Clothing_031_M"):
case joaat("MP_Battle_Clothing_031_F"):
return "CLO_BHF_DECL_30";
case joaat("MP_Battle_Clothing_032_M"):
case joaat("MP_Battle_Clothing_032_F"):
return "CLO_BHF_DECL_31";
case joaat("MP_Battle_Clothing_033_M"):
case joaat("MP_Battle_Clothing_033_F"):
return "CLO_BHF_DECL_32";
case joaat("MP_Battle_Clothing_034_M"):
case joaat("MP_Battle_Clothing_034_F"):
return "CLO_BHF_DECL_33";
case joaat("MP_Battle_Clothing_035_M"):
case joaat("MP_Battle_Clothing_035_F"):
return "CLO_BHF_DECL_34";
case joaat("MP_Battle_Clothing_036_M"):
case joaat("MP_Battle_Clothing_036_F"):
return "CLO_BHF_DECL_35";
case joaat("MP_Battle_Clothing_037_M"):
case joaat("MP_Battle_Clothing_037_F"):
return "CLO_BHF_DECL_36";
case joaat("MP_Battle_Clothing_038_M"):
case joaat("MP_Battle_Clothing_038_F"):
return "CLO_BHF_DECL_37";
case joaat("MP_Battle_Clothing_039_M"):
case joaat("MP_Battle_Clothing_039_F"):
return "CLO_BHF_DECL_38";
case joaat("MP_Battle_Clothing_040_M"):
case joaat("MP_Battle_Clothing_040_F"):
return "CLO_BHF_DECL_39";
case joaat("MP_Battle_Clothing_041_M"):
case joaat("MP_Battle_Clothing_041_F"):
return "CLO_BHF_DECL_40";
case joaat("MP_Battle_Clothing_042_M"):
case joaat("MP_Battle_Clothing_042_F"):
return "CLO_BHF_DECL_41";
case joaat("MP_Battle_Clothing_043_M"):
case joaat("MP_Battle_Clothing_043_F"):
return "CLO_BHF_DECL_42";
case joaat("MP_Battle_Clothing_044_M"):
case joaat("MP_Battle_Clothing_044_F"):
return "CLO_BHF_DECL_43";
case joaat("MP_Battle_Clothing_045_M"):
case joaat("MP_Battle_Clothing_045_F"):
return "CLO_BHF_DECL_44";
case joaat("MP_Battle_Clothing_046_M"):
case joaat("MP_Battle_Clothing_046_F"):
return "CLO_BHF_DECL_45";
case joaat("MP_Battle_Clothing_047_M"):
case joaat("MP_Battle_Clothing_047_F"):
return "CLO_BHF_DECL_46";
case joaat("MP_Battle_Clothing_048_M"):
case joaat("MP_Battle_Clothing_048_F"):
return "CLO_BHF_DECL_47";
case joaat("MP_Battle_Clothing_049_M"):
case joaat("MP_Battle_Clothing_049_F"):
return "CLO_BHF_DECL_48";
case joaat("MP_Battle_Clothing_050_M"):
case joaat("MP_Battle_Clothing_050_F"):
return "CLO_BHF_DECL_49";
case joaat("MP_Battle_Clothing_051_M"):
case joaat("MP_Battle_Clothing_051_F"):
return "CLO_BHF_DECL_50";
case joaat("MP_Battle_Clothing_052_M"):
case joaat("MP_Battle_Clothing_052_F"):
return "CLO_BHF_DECL_51";
case joaat("MP_Battle_Clothing_053_M"):
case joaat("MP_Battle_Clothing_053_F"):
return "CLO_BHF_DECL_52";
case joaat("MP_Battle_Clothing_054_M"):
case joaat("MP_Battle_Clothing_054_F"):
return "CLO_BHF_DECL_53";
case joaat("MP_Battle_Clothing_055_M"):
case joaat("MP_Battle_Clothing_055_F"):
return "CLO_BHF_DECL_54";
case joaat("MP_Battle_Clothing_056_M"):
case joaat("MP_Battle_Clothing_056_F"):
return "CLO_BHF_DECL_55";
case joaat("MP_Battle_Clothing_057_M"):
case joaat("MP_Battle_Clothing_057_F"):
return "CLO_BHF_DECL_56";
case joaat("MP_Battle_Clothing_058_M"):
case joaat("MP_Battle_Clothing_058_F"):
return "CLO_BHF_DECL_57";
case joaat("MP_Battle_Clothing_059_M"):
case joaat("MP_Battle_Clothing_059_F"):
return "CLO_BHF_DECL_58";
case joaat("MP_Battle_Clothing_060_M"):
case joaat("MP_Battle_Clothing_060_F"):
return "CLO_BHF_DECL_59";
case joaat("MP_Battle_Clothing_061_M"):
case joaat("MP_Battle_Clothing_061_F"):
return "CLO_BHF_DECL_60";
case joaat("MP_Battle_Clothing_062_M"):
case joaat("MP_Battle_Clothing_062_F"):
return "CLO_BHF_DECL_61";
default:
}
switch (iParam0){
case joaat("dlc_mp_x17_m_outfit_morph_0"):
case joaat("dlc_mp_x17_m_berd_2_0"):
case joaat("dlc_mp_x17_m_legs_1_0"):
case joaat("dlc_mp_x17_m_feet_1_0"):
case joaat("dlc_mp_x17_m_jbib_5_0"):
return "CLO_X17M_O_M_0";
case joaat("dlc_mp_x17_f_outfit_morph_0"):
case joaat("dlc_mp_x17_f_berd_2_0"):
case joaat("dlc_mp_x17_f_legs_1_0"):
case joaat("dlc_mp_x17_f_feet_1_0"):
case joaat("dlc_mp_x17_f_jbib_5_0"):
return "CLO_X17F_O_M_0";
case joaat("dlc_mp_x17_m_outfit_morph_1"):
case joaat("dlc_mp_x17_m_berd_2_1"):
case joaat("dlc_mp_x17_m_legs_1_1"):
case joaat("dlc_mp_x17_m_feet_1_1"):
case joaat("dlc_mp_x17_m_jbib_5_1"):
return "CLO_X17M_O_M_1";
case joaat("dlc_mp_x17_f_outfit_morph_1"):
case joaat("dlc_mp_x17_f_berd_2_1"):
case joaat("dlc_mp_x17_f_legs_1_1"):
case joaat("dlc_mp_x17_f_feet_1_1"):
case joaat("dlc_mp_x17_f_jbib_5_1"):
return "CLO_X17F_O_M_1";
case joaat("dlc_mp_x17_m_outfit_morph_2"):
case joaat("dlc_mp_x17_m_berd_2_2"):
case joaat("dlc_mp_x17_m_legs_1_2"):
case joaat("dlc_mp_x17_m_feet_1_2"):
case joaat("dlc_mp_x17_m_jbib_5_2"):
return "CLO_X17M_O_M_2";
case joaat("dlc_mp_x17_f_outfit_morph_2"):
case joaat("dlc_mp_x17_f_berd_2_2"):
case joaat("dlc_mp_x17_f_legs_1_2"):
case joaat("dlc_mp_x17_f_feet_1_2"):
case joaat("dlc_mp_x17_f_jbib_5_2"):
return "CLO_X17F_O_M_2";
case joaat("dlc_mp_x17_m_outfit_morph_3"):
case joaat("dlc_mp_x17_m_berd_2_3"):
case joaat("dlc_mp_x17_m_legs_1_3"):
case joaat("dlc_mp_x17_m_feet_1_3"):
case joaat("dlc_mp_x17_m_jbib_5_3"):
return "CLO_X17M_O_M_3";
case joaat("dlc_mp_x17_f_outfit_morph_3"):
case joaat("dlc_mp_x17_f_berd_2_3"):
case joaat("dlc_mp_x17_f_legs_1_3"):
case joaat("dlc_mp_x17_f_feet_1_3"):
case joaat("dlc_mp_x17_f_jbib_5_3"):
return "CLO_X17F_O_M_3";
case joaat("dlc_mp_x17_m_outfit_morph_4"):
case joaat("dlc_mp_x17_m_berd_2_4"):
case joaat("dlc_mp_x17_m_legs_1_4"):
case joaat("dlc_mp_x17_m_feet_1_4"):
case joaat("dlc_mp_x17_m_jbib_5_4"):
return "CLO_X17M_O_M_4";
case joaat("dlc_mp_x17_f_outfit_morph_4"):
case joaat("dlc_mp_x17_f_berd_2_4"):
case joaat("dlc_mp_x17_f_legs_1_4"):
case joaat("dlc_mp_x17_f_feet_1_4"):
case joaat("dlc_mp_x17_f_jbib_5_4"):
return "CLO_X17F_O_M_4";
default:
}
switch (iParam0){
case joaat("dlc_mp_lts_m_outfit_14"):
case joaat("dlc_mp_lts_f_outfit_14"):
return "CLO_LTSM_O_14";
case joaat("dlc_mp_x17_m_berd_10_0"):
case joaat("dlc_mp_x17_f_berd_10_0"):
return "UNLOCK_AWD_KRAMP1";
case joaat("dlc_mp_x17_m_berd_10_1"):
case joaat("dlc_mp_x17_f_berd_10_1"):
return "UNLOCK_AWD_KRAMP2";
case joaat("dlc_mp_x17_m_berd_10_2"):
case joaat("dlc_mp_x17_f_berd_10_2"):
return "UNLOCK_AWD_KRAMP3";
case joaat("dlc_mp_x17_m_berd_10_3"):
case joaat("dlc_mp_x17_f_berd_10_3"):
return "UNLOCK_AWD_KRAMP4";
default:
}
switch (iParam0){
case joaat("dlc_mp_gr_m_phead_6_0"):
case joaat("dlc_mp_gr_m_phead_7_0"):
return "CLO_GRM_PH_6_0";
case joaat("dlc_mp_gr_f_phead_6_0"):
case joaat("dlc_mp_gr_f_phead_7_0"):
return "CLO_GRF_PH_6_0";
case joaat("dlc_mp_gr_m_phead_6_2"):
case joaat("dlc_mp_gr_m_phead_7_2"):
return "CLO_GRM_PH_6_2";
case joaat("dlc_mp_gr_f_phead_6_2"):
case joaat("dlc_mp_gr_f_phead_7_2"):
return "CLO_GRF_PH_6_2";
case joaat("dlc_mp_gr_m_phead_6_4"):
case joaat("dlc_mp_gr_m_phead_7_4"):
return "CLO_GRM_PH_6_4";
case joaat("dlc_mp_gr_f_phead_6_4"):
case joaat("dlc_mp_gr_f_phead_7_4"):
return "CLO_GRF_PH_6_4";
case joaat("dlc_mp_gr_m_phead_6_5"):
case joaat("dlc_mp_gr_m_phead_7_5"):
return "CLO_GRM_PH_6_5";
case joaat("dlc_mp_gr_f_phead_6_5"):
case joaat("dlc_mp_gr_f_phead_7_5"):
return "CLO_GRF_PH_6_5";
case joaat("dlc_mp_gr_m_phead_6_6"):
case joaat("dlc_mp_gr_m_phead_7_6"):
return "CLO_GRM_PH_6_6";
case joaat("dlc_mp_gr_f_phead_6_6"):
case joaat("dlc_mp_gr_f_phead_7_6"):
return "CLO_GRF_PH_6_6";
case joaat("dlc_mp_gr_m_phead_6_7"):
case joaat("dlc_mp_gr_m_phead_7_7"):
return "CLO_GRM_PH_6_7";
case joaat("dlc_mp_gr_f_phead_6_7"):
case joaat("dlc_mp_gr_f_phead_7_7"):
return "CLO_GRF_PH_6_7";
case joaat("dlc_mp_gr_m_phead_6_8"):
case joaat("dlc_mp_gr_m_phead_7_8"):
return "CLO_GRM_PH_6_8";
case joaat("dlc_mp_gr_f_phead_6_8"):
case joaat("dlc_mp_gr_f_phead_7_8"):
return "CLO_GRF_PH_6_8";
case joaat("dlc_mp_gr_m_phead_6_10"):
case joaat("dlc_mp_gr_m_phead_7_10"):
return "CLO_GRM_PH_6_10";
case joaat("dlc_mp_gr_f_phead_6_10"):
case joaat("dlc_mp_gr_f_phead_7_10"):
return "CLO_GRF_PH_6_10";
default:
}
switch (iParam0){
case joaat("dlc_mp_gr_m_jbib_19_0"):
case joaat("dlc_mp_gr_f_jbib_25_0"):
return "CLO_GRF_U_25_0";
case joaat("dlc_mp_gr_m_jbib_19_1"):
case joaat("dlc_mp_gr_f_jbib_25_1"):
return "CLO_GRF_U_25_1";
case joaat("dlc_mp_gr_m_jbib_20_0"):
case joaat("dlc_mp_gr_f_jbib_26_0"):
return "CLO_GRM_U_20_0";
default:
}
switch (iParam0){
case joaat("dlc_mp_gr_m_decl_5_0"):
case joaat("dlc_mp_gr_f_decl_5_0"):
return "CLO_GRF_DECL_19";
case joaat("dlc_mp_gr_m_decl_5_1"):
case joaat("dlc_mp_gr_f_decl_5_1"):
return "CLO_GRM_DECL_20";
case joaat("dlc_mp_gr_m_decl_5_2"):
case joaat("dlc_mp_gr_f_decl_5_2"):
return "CLO_GRM_DECL_21";
case joaat("dlc_mp_gr_m_decl_5_3"):
case joaat("dlc_mp_gr_f_decl_5_3"):
return "CLO_GRF_DECL_22";
case joaat("dlc_mp_gr_m_decl_5_4"):
case joaat("dlc_mp_gr_f_decl_5_4"):
return "CLO_GRM_DECL_23";
case joaat("dlc_mp_gr_m_decl_5_6"):
case joaat("dlc_mp_gr_f_decl_5_6"):
return "CLO_GRM_DECL_25";
case joaat("dlc_mp_gr_m_decl_5_8"):
case joaat("dlc_mp_gr_f_decl_5_8"):
return "CLO_GRM_DECL_27";
case joaat("dlc_mp_gr_m_decl_5_10"):
case joaat("dlc_mp_gr_f_decl_5_10"):
return "CLO_GRM_DECL_29";
default:
}
switch (iParam0){
case joaat("MP_Gunrunning_Award_000_M"):
case joaat("MP_Gunrunning_Award_000_F"):
return "CLO_GRF_DECL_0";
case joaat("MP_Gunrunning_Award_002_M"):
case joaat("MP_Gunrunning_Award_002_F"):
return "CLO_GRM_DECL_2";
case joaat("MP_Gunrunning_Award_003_M"):
case joaat("MP_Gunrunning_Award_003_F"):
return "CLO_GRF_DECL_3";
case joaat("MP_Gunrunning_Award_005_M"):
case joaat("MP_Gunrunning_Award_005_F"):
return "CLO_GRF_DECL_5";
case joaat("MP_Gunrunning_Award_006_M"):
case joaat("MP_Gunrunning_Award_006_F"):
return "CLO_GRF_DECL_6";
case joaat("MP_Gunrunning_Award_009_M"):
case joaat("MP_Gunrunning_Award_009_F"):
return "CLO_GRM_DECL_9";
case joaat("MP_Gunrunning_Award_010_M"):
case joaat("MP_Gunrunning_Award_010_F"):
return "CLO_GRM_DECL_10";
case joaat("MP_Gunrunning_Award_011_M"):
case joaat("MP_Gunrunning_Award_011_F"):
return "CLO_GRF_DECL_11";
case joaat("MP_Gunrunning_Award_012_M"):
case joaat("MP_Gunrunning_Award_012_F"):
return "CLO_GRF_DECL_12";
case joaat("MP_Gunrunning_Award_014_M"):
case joaat("MP_Gunrunning_Award_014_F"):
return "CLO_GRM_DECL_14";
case joaat("MP_Gunrunning_Award_015_M"):
case joaat("MP_Gunrunning_Award_015_F"):
return "CLO_GRM_DECL_15";
case joaat("MP_Gunrunning_Award_016_M"):
case joaat("MP_Gunrunning_Award_016_F"):
return "CLO_GRM_DECL_16";
case joaat("MP_Gunrunning_Award_017_M"):
case joaat("MP_Gunrunning_Award_017_F"):
return "CLO_GRM_DECL_10";
default:
}
switch (iParam0){
case joaat("dlc_mp_ie_m_berd_7_0"):
return "CLO_X4M_B_7_0";
case joaat("dlc_mp_ie_f_berd_7_0"):
return "CLO_X4F_B_7_0";
default:
}
switch (iParam0){
case joaat("MP_Biker_Award_000_M"):
return "CLO_BIM_DECL_57";
case joaat("MP_Biker_Award_000_F"):
return "CLO_BIF_DECL_56";
case joaat("MP_Biker_Award_001_M"):
return "CLO_BIM_DECL_57";
case joaat("MP_Biker_Award_001_F"):
return "CLO_BIF_DECL_57";
default:
}
switch (iParam0){
case joaat("MP_Biker_Tee_022_M"):
case joaat("MP_Biker_Tee_022_F"):
return "bikshirt4";
case joaat("MP_Biker_Tee_023_M"):
case joaat("MP_Biker_Tee_023_F"):
return "bikshirt5";
case joaat("MP_Biker_Tee_024_M"):
case joaat("MP_Biker_Tee_024_F"):
return "bikshirt7";
case joaat("MP_Biker_Tee_025_M"):
case joaat("MP_Biker_Tee_025_F"):
return "bikshirt6";
case joaat("MP_Biker_Tee_047_M"):
case joaat("MP_Biker_Tee_047_F"):
return "bikshirt3";
case joaat("MP_Biker_Tee_048_M"):
case joaat("MP_Biker_Tee_048_F"):
return "bikshirt2";
case joaat("MP_Biker_Tee_049_M"):
case joaat("MP_Biker_Tee_049_F"):
return "bikshirt1";
case joaat("MP_Biker_Tee_050_M"):
case joaat("MP_Biker_Tee_050_F"):
return "bikshirt0";
case joaat("MP_Biker_Tee_051_M"):
case joaat("MP_Biker_Tee_051_F"):
return "bikshirt8";
case joaat("MP_Biker_Tee_052_M"):
case joaat("MP_Biker_Tee_052_F"):
return "bikshirt9";
case joaat("MP_Biker_Tee_053_M"):
case joaat("MP_Biker_Tee_053_F"):
return "bikshirt10";
case joaat("MP_Biker_Tee_054_M"):
case joaat("MP_Biker_Tee_054_F"):
return "bikshirt11";
case joaat("MP_Biker_Tee_055_M"):
case joaat("MP_Biker_Tee_055_F"):
return "bikshirt12";
default:
}
switch (iParam0){
case joaat("dlc_mp_biker_m_decl_0_0"):
case joaat("dlc_mp_biker_f_decl_0_0"):
return "bikshirt13";
case joaat("dlc_mp_biker_m_decl_0_1"):
case joaat("dlc_mp_biker_f_decl_0_1"):
return "bikshirt14";
case joaat("dlc_mp_biker_m_decl_0_2"):
case joaat("dlc_mp_biker_f_decl_0_2"):
return "bikshirt15";
case joaat("dlc_mp_biker_m_decl_0_3"):
case joaat("dlc_mp_biker_f_decl_0_3"):
return "bikshirt16";
case joaat("dlc_mp_biker_m_decl_0_4"):
case joaat("dlc_mp_biker_f_decl_0_4"):
return "bikshirt17";
case joaat("dlc_mp_biker_m_decl_0_5"):
case joaat("dlc_mp_biker_f_decl_0_5"):
return "bikshirt18";
case joaat("dlc_mp_biker_m_decl_0_6"):
case joaat("dlc_mp_biker_f_decl_0_6"):
return "bikshirt19";
case joaat("dlc_mp_biker_m_decl_0_7"):
case joaat("dlc_mp_biker_f_decl_0_7"):
return "bikshirt20";
case joaat("dlc_mp_biker_m_decl_0_8"):
case joaat("dlc_mp_biker_f_decl_0_8"):
return "bikshirt21";
default:
}
switch (iParam0){
case joaat("dlc_mp_stunt_m_outfit_e_0"):
case joaat("dlc_mp_stunt_m_phead_11_0"):
case joaat("dlc_mp_stunt_m_phead_12_0"):
return "CLO_STM_O_E_0";
case joaat("dlc_mp_stunt_f_outfit_e_0"):
case joaat("dlc_mp_stunt_f_phead_11_0"):
case joaat("dlc_mp_stunt_f_phead_12_0"):
return "CLO_STF_O_E_0";
case joaat("dlc_mp_stunt_m_outfit_e_1"):
case joaat("dlc_mp_stunt_m_phead_11_1"):
case joaat("dlc_mp_stunt_m_phead_12_1"):
return "CLO_STM_O_E_1";
case joaat("dlc_mp_stunt_f_outfit_e_1"):
case joaat("dlc_mp_stunt_f_phead_11_1"):
case joaat("dlc_mp_stunt_f_phead_12_1"):
return "CLO_STF_O_E_1";
case joaat("dlc_mp_stunt_m_outfit_e_2"):
case joaat("dlc_mp_stunt_m_phead_11_2"):
case joaat("dlc_mp_stunt_m_phead_12_2"):
return "CLO_STM_O_E_2";
case joaat("dlc_mp_stunt_f_outfit_e_2"):
case joaat("dlc_mp_stunt_f_phead_11_2"):
case joaat("dlc_mp_stunt_f_phead_12_2"):
return "CLO_STF_O_E_2";
case joaat("dlc_mp_stunt_m_outfit_e_3"):
case joaat("dlc_mp_stunt_m_phead_11_3"):
case joaat("dlc_mp_stunt_m_phead_12_3"):
return "CLO_STM_O_E_3";
case joaat("dlc_mp_stunt_f_outfit_e_3"):
case joaat("dlc_mp_stunt_f_phead_11_3"):
case joaat("dlc_mp_stunt_f_phead_12_3"):
return "CLO_STF_O_E_3";
case joaat("dlc_mp_stunt_m_outfit_e_4"):
case joaat("dlc_mp_stunt_m_phead_11_4"):
case joaat("dlc_mp_stunt_m_phead_12_4"):
return "CLO_STM_O_E_4";
case joaat("dlc_mp_stunt_f_outfit_e_4"):
case joaat("dlc_mp_stunt_f_phead_11_4"):
case joaat("dlc_mp_stunt_f_phead_12_4"):
return "CLO_STF_O_E_4";
case joaat("dlc_mp_stunt_m_outfit_e_5"):
case joaat("dlc_mp_stunt_m_phead_13_0"):
case joaat("dlc_mp_stunt_m_phead_14_0"):
return "CLO_STM_O_E_15";
case joaat("dlc_mp_stunt_f_outfit_e_5"):
case joaat("dlc_mp_stunt_f_phead_13_0"):
case joaat("dlc_mp_stunt_f_phead_14_0"):
return "CLO_STF_O_E_5";
case joaat("dlc_mp_stunt_m_outfit_e_6"):
case joaat("dlc_mp_stunt_m_phead_13_1"):
case joaat("dlc_mp_stunt_m_phead_14_1"):
return "CLO_STM_O_E_6";
case joaat("dlc_mp_stunt_f_outfit_e_6"):
case joaat("dlc_mp_stunt_f_phead_13_1"):
case joaat("dlc_mp_stunt_f_phead_14_1"):
return "CLO_STF_O_E_6";
default:
}
switch (iParam0){
case joaat("dlc_mp_exec_f_jbib_15_0"):
case joaat("dlc_mp_exec_f_legs_1_0"):
return "CLO_EXF_EU_15_0";
case joaat("dlc_mp_exec_m_jbib_15_0"):
case joaat("dlc_mp_exec_m_legs_1_0"):
return "CLO_EXM_EU_15_0";
case joaat("dlc_mp_exec_f_jbib_15_1"):
case joaat("dlc_mp_exec_f_legs_1_1"):
return "CLO_EXF_EU_15_1";
case joaat("dlc_mp_exec_m_jbib_15_1"):
case joaat("dlc_mp_exec_m_legs_1_1"):
return "CLO_EXM_EU_15_1";
case joaat("dlc_mp_exec_f_jbib_15_2"):
case joaat("dlc_mp_exec_f_legs_1_2"):
return "CLO_EXF_EU_15_2";
case joaat("dlc_mp_exec_m_jbib_15_2"):
case joaat("dlc_mp_exec_m_legs_1_2"):
return "CLO_EXM_EU_15_2";
case joaat("dlc_mp_exec_f_jbib_15_3"):
case joaat("dlc_mp_exec_f_legs_1_3"):
return "CLO_EXF_EU_15_3";
case joaat("dlc_mp_exec_m_jbib_15_3"):
case joaat("dlc_mp_exec_m_legs_1_3"):
return "CLO_EXM_EU_15_3";
case joaat("dlc_mp_exec_f_jbib_15_4"):
case joaat("dlc_mp_exec_f_legs_1_4"):
return "CLO_EXF_EU_15_4";
case joaat("dlc_mp_exec_m_jbib_15_4"):
case joaat("dlc_mp_exec_m_legs_1_4"):
return "CLO_EXM_EU_15_4";
case joaat("dlc_mp_exec_f_jbib_15_5"):
case joaat("dlc_mp_exec_f_legs_1_5"):
return "CLO_EXF_EU_15_5";
case joaat("dlc_mp_exec_m_jbib_15_5"):
case joaat("dlc_mp_exec_m_legs_1_5"):
return "CLO_EXM_EU_15_5";
case joaat("dlc_mp_exec_f_jbib_15_6"):
case joaat("dlc_mp_exec_f_legs_1_6"):
return "CLO_EXF_EU_15_6";
case joaat("dlc_mp_exec_m_jbib_15_6"):
case joaat("dlc_mp_exec_m_legs_1_6"):
return "CLO_EXM_EU_15_6";
case joaat("dlc_mp_exec_f_jbib_15_7"):
case joaat("dlc_mp_exec_f_legs_1_7"):
return "CLO_EXF_EU_15_7";
case joaat("dlc_mp_exec_m_jbib_15_7"):
case joaat("dlc_mp_exec_m_legs_1_7"):
return "CLO_EXM_EU_15_7";
case joaat("dlc_mp_exec_f_jbib_15_8"):
case joaat("dlc_mp_exec_f_legs_1_8"):
return "CLO_EXF_EU_15_8";
case joaat("dlc_mp_exec_m_jbib_15_8"):
case joaat("dlc_mp_exec_m_legs_1_8"):
return "CLO_EXM_EU_15_8";
case joaat("dlc_mp_exec_f_jbib_15_9"):
case joaat("dlc_mp_exec_f_legs_1_9"):
return "CLO_EXF_EU_15_9";
case joaat("dlc_mp_exec_m_jbib_15_9"):
case joaat("dlc_mp_exec_m_legs_1_9"):
return "CLO_EXM_EU_15_9";
case joaat("dlc_mp_exec_f_jbib_15_10"):
case joaat("dlc_mp_exec_f_legs_1_10"):
return "CLO_EXF_EU_1510";
case joaat("dlc_mp_exec_m_jbib_15_10"):
case joaat("dlc_mp_exec_m_legs_1_10"):
return "CLO_EXM_EU_1510";
case joaat("dlc_mp_exec_f_jbib_15_11"):
case joaat("dlc_mp_exec_f_legs_1_11"):
return "CLO_EXF_EU_1511";
case joaat("dlc_mp_exec_m_jbib_15_11"):
case joaat("dlc_mp_exec_m_legs_1_11"):
return "CLO_EXM_EU_1511";
case joaat("dlc_mp_exec_f_jbib_15_12"):
case joaat("dlc_mp_exec_f_legs_1_12"):
return "CLO_EXF_EU_1512";
case joaat("dlc_mp_exec_m_jbib_15_12"):
case joaat("dlc_mp_exec_m_legs_1_12"):
return "CLO_EXM_EU_1512";
case joaat("dlc_mp_exec_f_jbib_15_13"):
case joaat("dlc_mp_exec_f_legs_1_13"):
return "CLO_EXF_EU_1513";
case joaat("dlc_mp_exec_m_jbib_15_13"):
case joaat("dlc_mp_exec_m_legs_1_13"):
return "CLO_EXM_EU_1513";
default:
}
switch (iParam0){
case joaat("dlc_mp_exec_f_jbib_16_0"):
case joaat("dlc_mp_exec_m_jbib_16_0"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_1"):
case joaat("dlc_mp_exec_m_jbib_16_1"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_2"):
case joaat("dlc_mp_exec_m_jbib_16_2"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_3"):
case joaat("dlc_mp_exec_m_jbib_16_3"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_4"):
case joaat("dlc_mp_exec_m_jbib_16_4"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_5"):
case joaat("dlc_mp_exec_m_jbib_16_5"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_6"):
case joaat("dlc_mp_exec_m_jbib_16_6"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_7"):
case joaat("dlc_mp_exec_m_jbib_16_7"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_8"):
case joaat("dlc_mp_exec_m_jbib_16_8"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_9"):
case joaat("dlc_mp_exec_m_jbib_16_9"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_10"):
case joaat("dlc_mp_exec_m_jbib_16_10"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_11"):
case joaat("dlc_mp_exec_m_jbib_16_11"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_12"):
case joaat("dlc_mp_exec_m_jbib_16_12"):
return "SMOKINGJACKUNLOCK";
case joaat("dlc_mp_exec_f_jbib_16_13"):
case joaat("dlc_mp_exec_m_jbib_16_13"):
return "SMOKINGJACKUNLOCK";
default:
}
switch (iParam0){
case joaat("dlc_mp_low_f_phead_1_0"):
case joaat("dlc_mp_low_m_phead_1_0"):
return "UNLOKLOWHATS0";
case joaat("dlc_mp_low_f_phead_1_1"):
case joaat("dlc_mp_low_m_phead_1_1"):
return "UNLOKLOWHATS1";
case joaat("dlc_mp_low_f_phead_1_2"):
case joaat("dlc_mp_low_m_phead_1_2"):
return "UNLOKLOWHATS2";
case joaat("dlc_mp_low_f_phead_1_3"):
case joaat("dlc_mp_low_m_phead_1_3"):
return "UNLOKLOWHATS3";
case joaat("dlc_mp_low_f_phead_1_4"):
case joaat("dlc_mp_low_m_phead_1_4"):
return "UNLOKLOWHATS4";
case joaat("dlc_mp_low_f_phead_1_5"):
case joaat("dlc_mp_low_m_phead_1_5"):
return "UNLOKLOWHATS5";
case joaat("dlc_mp_low_f_phead_1_6"):
case joaat("dlc_mp_low_m_phead_1_6"):
return "UNLOKLOWHATS6";
case joaat("dlc_mp_low_f_phead_1_7"):
case joaat("dlc_mp_low_m_phead_1_7"):
return "UNLOKLOWHATS7";
case joaat("dlc_mp_low_f_phead_1_8"):
case joaat("dlc_mp_low_m_phead_1_8"):
return "UNLOKLOWHATS8";
case joaat("dlc_mp_low_f_phead_1_9"):
case joaat("dlc_mp_low_m_phead_1_9"):
return "UNLOKLOWHATS9";
default:
}
switch (iParam0){
case joaat("dlc_mp_ind_f_phead_6_0"):
case joaat("dlc_mp_ind_m_phead_6_0"):
return "UNLOCK_NAME_BHAT1";
case joaat("dlc_mp_ind_f_phead_6_1"):
case joaat("dlc_mp_ind_m_phead_6_1"):
return "UNLOCK_NAME_BHAT2";
case joaat("dlc_mp_ind_f_phead_6_2"):
case joaat("dlc_mp_ind_m_phead_6_2"):
return "UNLOCK_NAME_BHAT3";
case joaat("dlc_mp_ind_f_phead_6_3"):
case joaat("dlc_mp_ind_m_phead_6_3"):
return "UNLOCK_NAME_BHAT4";
case joaat("dlc_mp_ind_f_phead_6_4"):
case joaat("dlc_mp_ind_m_phead_6_4"):
return "UNLOCK_NAME_BHAT5";
case joaat("dlc_mp_ind_f_phead_6_5"):
case joaat("dlc_mp_ind_m_phead_6_5"):
return "UNLOCK_NAME_BHAT6";
default:
}
switch (iParam0){
case joaat("dlc_mp_lts_m_berd_2_0"):
case joaat("dlc_mp_lts_f_berd_2_0"):
return "BBSHIRTUN15";
case joaat("FM_Hip_M_Retro_010"):
case joaat("FM_Hip_F_Retro_010"):
return "BBSHIRTUN6";
case joaat("FM_Hip_M_Retro_003"):
case joaat("FM_Hip_F_Retro_003"):
return "BBSHIRTUN1";
case joaat("FM_Hip_M_Retro_000"):
case joaat("FM_Hip_F_Retro_000"):
return "BBSHIRTUN2";
case joaat("FM_Hip_M_Retro_001"):
case joaat("FM_Hip_F_Retro_001"):
return "BBSHIRTUN4";
case joaat("FM_Hip_M_Retro_002"):
case joaat("FM_Hip_F_Retro_002"):
return "BBSHIRTUN3";
case joaat("FM_Hip_M_Retro_004"):
case joaat("FM_Hip_F_Retro_004"):
return "BBSHIRTUN0";
case joaat("FM_Hip_M_Retro_005"):
case joaat("FM_Hip_F_Retro_005"):
return "BBSHIRTUN10";
case joaat("FM_Hip_M_Retro_006"):
case joaat("FM_Hip_F_Retro_006"):
return "BBSHIRTUN8";
case joaat("FM_Hip_M_Retro_007"):
case joaat("FM_Hip_F_Retro_007"):
return "BBSHIRTUN9";
case joaat("FM_Hip_M_Retro_008"):
case joaat("FM_Hip_F_Retro_008"):
return "BBSHIRTUN14";
case joaat("FM_Hip_M_Retro_009"):
case joaat("FM_Hip_F_Retro_009"):
return "BBSHIRTUN12";
case joaat("FM_Hip_M_Retro_011"):
case joaat("FM_Hip_F_Retro_011"):
return "BBSHIRTUN5";
case joaat("FM_Hip_M_Retro_012"):
case joaat("FM_Hip_F_Retro_012"):
return "BBSHIRTUN13";
case joaat("FM_Hip_M_Retro_013"):
case joaat("FM_Hip_F_Retro_013"):
return "BBSHIRTUN7";
case joaat("FM_Ind_M_Award_000"):
case joaat("FM_Ind_F_Award_000"):
return "UNLOCK_NAME_SHIRT14";
default:
}
switch (iParam0){
case 1743008394:
return "CLO_X3F_U_1_0";
case 1084175393:
return "CLO_X3M_U_1_0";
case -1090232119:
return "CLO_X3F_U_1_1";
case 787255484:
return "CLO_X3M_U_1_1";
case -1133356123:
return "CLO_X3F_U_1_2";
case -566366372:
return "CLO_X3M_U_1_2";
default:
}
switch (iParam0){
case 1970268516:
return "CLO_X2F_HT_4_0";
case 2026483804:
return "CLO_X2F_HT_5_0";
case 1831101822:
return "CLO_X2M_HT_4_0";
case 1411612772:
return "CLO_X2M_HT_5_0";
case 1875861023:
return "CLO_X2F_HT_4_3";
case -1385031204:
return "CLO_X2F_HT_5_3";
case -703154335:
return "CLO_X2M_HT_4_3";
case 798340921:
return "CLO_X2M_HT_5_3";
case -1208373599:
return "CLO_X3M_B_10_0";
case 1656518170:
return "CLO_X3F_B_10_0";
case -970054678:
return "CLO_X2M_B_1_0";
case -840010097:
return "CLO_X2F_B_1_0";
default:
}
switch (iParam0){
case joaat("dlc_mp_ind_f_phead_6_0"):
return "CLO_INDF_HT_6_0";
case joaat("dlc_mp_ind_m_phead_6_0"):
return "CLO_INDM_HT_6_0";
case joaat("dlc_mp_ind_f_phead_6_1"):
return "CLO_INDF_HT_6_1";
case joaat("dlc_mp_ind_m_phead_6_1"):
return "CLO_INDM_HT_6_1";
case joaat("dlc_mp_ind_f_phead_6_2"):
return "CLO_INDF_HT_6_2";
case joaat("dlc_mp_ind_m_phead_6_2"):
return "CLO_INDM_HT_6_2";
case joaat("dlc_mp_ind_f_phead_6_3"):
return "CLO_INDF_HT_6_3";
case joaat("dlc_mp_ind_m_phead_6_3"):
return "CLO_INDM_HT_6_3";
case joaat("dlc_mp_ind_f_phead_6_4"):
return "CLO_INDF_HT_6_4";
case joaat("dlc_mp_ind_m_phead_6_4"):
return "CLO_INDM_HT_6_4";
case joaat("dlc_mp_ind_f_phead_6_5"):
return "CLO_INDF_HT_6_5";
case joaat("dlc_mp_ind_m_phead_6_5"):
return "CLO_INDM_HT_6_5";
default:
}
return "UNLOCK_AWD_SHIRT";
}


void func_119(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_22();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}

int func_120(int iParam0){
switch (iParam0){
case joaat("dlc_mp_h3_m_outfit_sh_36"):
case joaat("dlc_mp_h3_f_outfit_sh_36"):
return 41995;
break;
case joaat("dlc_mp_h3_m_outfit_sh_16"):
case joaat("dlc_mp_h3_f_outfit_sh_16"):
return 41675;
break;
case -495980515:
case -1884122156:
return 41994;
break;
case -1053315667:
case -1147212884:
return 41593;
break;
case -510891904:
case -52190144:
return 41996;
break;
}
switch (iParam0){
case -1041157762:
case 1480092963:
case 1403347887:
case 273096854:
return 41915;
break;
case 1562596410:
case -1431506788:
case 1481318280:
case 1410706020:
return 41916;
break;
case 1322956713:
case -1580736814:
case -359578598:
case 1179717339:
return 41917;
break;
case 206910135:
case 1326037335:
case -662396927:
case -1758908350:
return 41918;
break;
case 1801449651:
case -1004756101:
case 249760957:
case -1990945639:
return 41919;
break;
case 857140087:
case 176600813:
return 41920;
break;
case 259402514:
case 1228443772:
return 41921;
break;
case -976306347:
case -1838232916:
return 41922;
break;
case -1349479719:
case -1593710638:
return 41923;
break;
case -130112464:
case 903516549:
return 41924;
break;
case -2034321361:
case -1239928556:
return 41925;
break;
case 2029460640:
case -1440605912:
return 41926;
break;
case -1438515403:
case -638355254:
return 41927;
break;
case 432763903:
case 903486921:
return 41928;
break;
case 788438645:
case 1135065444:
return 41929;
break;
case -925380059:
case 277238562:
return 41930;
break;
case 189706102:
case -1765603361:
return 41931;
break;
case 453889780:
case -1713621:
return 41932;
break;
case 684747385:
case -2128847726:
return 41933;
break;
case -1579508349:
case -1309902495:
return 41934;
break;
case -1291829298:
case -639612596:
return 41935;
break;
case -1059726471:
case -1883720454:
return 41936;
break;
case -1072924698:
case 1689711805:
return 41937;
break;
case 1832668196:
case 1831149491:
return 41938;
break;
case -1224646739:
case -1771605449:
return 41939;
break;
case -1531004120:
case -308567902:
return 41940;
break;
case 1088877430:
case -354378964:
return 41941;
break;
case -1965571870:
case -1644875687:
return 41943;
break;
case -709405012:
case 1459331687:
return 41944;
break;
case -1050957125:
case -412206306:
return 41945;
break;
case -1293295599:
return 41946;
break;
case -76439008:
case 1530833681:
return 41947;
break;
case 306958292:
case 184320570:
return 41948;
break;
case -1854992741:
case 1038304335:
case 1381791731:
case 85238895:
return 41949;
break;
case 822700175:
case -1434116458:
case 1332314605:
return 41950;
break;
case -1047328364:
case -1260113068:
case -1535890431:
return 41951;
break;
case 645026657:
case 407140883:
case -2001144693:
return 41952;
break;
case 2076655270:
case 343754551:
case 1037221601:
return 41953;
break;
case -1021883067:
case -380407580:
case 801809141:
return 41954;
break;
case -747283237:
case 452153764:
case -1408891171:
return 41955;
break;
case -515901328:
case -377098550:
case -212789898:
return 41956;
break;
case -2060417990:
case -267976400:
case -1498127513:
return 41957;
break;
case -353448011:
case -588555527:
case 1245981320:
return 41958;
break;
case 797316363:
case -950490512:
case -1111020961:
return 41959;
break;
case -819174033:
case -1087365986:
case 12043456:
return 41960;
break;
case -616648619:
case -887802035:
case -1743337940:
return 41961;
break;
case 1568211466:
case -841303565:
case 471333760:
return 41962;
break;
case -139826900:
case -298189418:
case 44702545:
return 41963;
break;
case 1633122477:
case -25126721:
case 971776695:
return 41964;
break;
case 1396104300:
case 867238687:
case -1524827885:
return 41965;
break;
case -1043890841:
case 333105367:
case 292600030:
return 41966;
break;
case -386660376:
case -1388153336:
case 1602547176:
return 41967;
break;
case 448031592:
case 242497702:
case 922688733:
return 41968;
break;
case 202100247:
case 1235758861:
case -1830169427:
return 41969;
break;
case 1036890522:
case 1680663574:
case 616527966:
return 41970;
break;
case -1945612798:
case 818904412:
case 1282459584:
return 41971;
break;
case -1107289734:
case -1487561132:
return 41972;
break;
case -640050226:
case -772630900:
return 41973;
break;
case -936530475:
case -1253098937:
return 41974;
break;
case 1147367644:
case -2076574952:
return 41975;
break;
case -1492337070:
case -35289400:
return 41976;
break;
case -1790764353:
case 745235411:
return 41977;
break;
case 789670877:
case 106323436:
return 41978;
break;
case 1258296346:
case 1991901862:
return 41979;
break;
case -1060820713:
case -1948377855:
return 41980;
break;
}
switch (iParam0){
case 15758962:
return 41895;
break;
case 1603674929:
case -2008307000:
return 41885;
break;
case 702166970:
case 2055933767:
return 41886;
break;
case -1107386901:
case 636939925:
return 41887;
break;
case -657038744:
case -769673753:
return 41888;
break;
case 1331556770:
case 965829527:
return 41889;
break;
case -2023639356:
case -1858564428:
return 41890;
break;
case -1739532126:
case -1534872246:
return 41891;
break;
case 1965822553:
case -2012283807:
return 41892;
break;
case -500241311:
case 1927074301:
return 41893;
break;
case 176463443:
case 883069167:
return 41896;
break;
case -1076946846:
case 1424442523:
return 41903;
break;
case 1460860356:
case 1383502026:
return 41904;
break;
case -454979229:
case -2143753138:
return 41905;
break;
case -90719025:
case -301152196:
return 41906;
break;
case -514913742:
case 482583909:
return 41907;
break;
case 140662884:
case -49715659:
return 41908;
break;
case -854199846:
case 505743619:
case -2129956618:
case 1488237764:
return 41909;
break;
case 971879257:
case -1892356316:
return 41910;
break;
case -602441814:
case -1715141552:
return 41911;
break;
case -179394024:
case 358349688:
return 41912;
break;
case 81545523:
case 596383708:
return 41913;
break;
}
switch (iParam0){
case -216094758:
case -2028173056:
return 41724;
break;
case -1943290069:
case -58078045:
return 41784;
break;
case -1399797330:
case -1114567614:
case 1943176755:
case 867535852:
return 41720;
break;
case 870799164:
case 85529298:
return 41721;
break;
case 1952603347:
case -1754936291:
case 53724655:
case -1319527602:
return 41722;
break;
case -1787815344:
case -1287426264:
return 41723;
break;
case 1292798735:
case -530558496:
case 1855224759:
case 1148136799:
return 41725;
break;
case 1116861585:
case 2059664934:
return 41726;
break;
case -1428993608:
case 36282795:
case -311256467:
case -1144803294:
return 41728;
break;
case 1574596757:
case -914729749:
return 41729;
break;
case -1546969079:
case 821488624:
case 1130113212:
case 800648777:
return 41731;
break;
case -670687076:
case 816837218:
case -651439900:
case -356746753:
return 41732;
break;
case 480055430:
case 41711326:
case 1572777474:
case -852100674:
return 41733;
break;
case -172729352:
case -384572629:
case -891669439:
case 59452316:
return 41734;
break;
case -1018763751:
case -695377253:
return 41735;
break;
case 1528145693:
case -1658074252:
case 1562761434:
case 122794789:
return 41737;
break;
case -376126824:
case 837282927:
return 41738;
break;
case -1825308386:
case -1047677306:
return 41739;
break;
case 1490003374:
case -202963674:
case -577307866:
case 100058247:
return 41740;
break;
case -772308102:
case -1471969784:
return 41741;
break;
case -975509909:
case -1353182693:
return 41742;
break;
case -1905815327:
case -437917412:
case -874457158:
case 541587753:
return 41743;
break;
case -1186550391:
case 435856260:
return 41745;
break;
case 1248816471:
case -29784458:
case -387943474:
case 1955985410:
return 41746;
break;
case -1452462704:
case -726999872:
return 41748;
break;
case 556906099:
case -1034477057:
case 1652294890:
case -1971401319:
return 41750;
break;
case 1768113080:
case -1352241175:
case 1324956801:
case 1474352194:
return 41751;
break;
case -77371851:
case 563170242:
return 41752;
break;
case -1076700581:
case 483585299:
return 41753;
break;
case -1220877689:
case -669495935:
case 1176882130:
case 115885678:
return 41754;
break;
case -1333122265:
case 148267266:
case -1150798884:
case -1721019115:
return 41755;
break;
case -1497514773:
case -85033351:
return 41756;
break;
case -445897331:
case 194529950:
return 41757;
break;
case -1957418647:
case -1598705712:
case 315368920:
case -39410940:
return 41758;
break;
case -2086045628:
case -2023251988:
case 953618493:
case 1898219217:
return 41759;
break;
case 353606033:
case -831412864:
return 41761;
break;
case -2042249985:
case -766132237:
case -222189355:
case -1509353036:
return 41762;
break;
case 2003427169:
case -76707874:
case -1517688415:
case 1428508367:
return 41763;
break;
case 1384919253:
case 1712052926:
case 324514068:
case 226077441:
return 41764;
break;
case -2130775413:
case -744933322:
case -1757459188:
case 368037989:
return 41765;
break;
case 340563975:
case 1757108757:
return 41766;
break;
case -1832872434:
case -437789485:
case -2111298850:
case 699561962:
return 41767;
break;
case 1027168861:
case 726310049:
return 41769;
break;
case -906862814:
case 1626116540:
case 54094189:
case 1500141194:
case -1036645131:
case -860545141:
case -292331416:
case -504216362:
return 41770;
break;
case 266736604:
case -1273985678:
case 1364943529:
case -860138991:
return 41771;
break;
case -2053832904:
case -1516279664:
case 1050426667:
case -550439172:
return 41772;
break;
case 1116937469:
case -1991732037:
return 41773;
break;
case 1747942239:
case 1339559453:
return 41774;
break;
case 294302069:
case -2008577412:
case 661564041:
case -1301453596:
return 41776;
break;
}
switch (iParam0){
case -319060743:
case 1517953889:
return 41777;
break;
case 315740565:
case 1264527240:
return 41778;
break;
case -26360079:
case 1845701426:
case -1928374485:
case -1480330810:
return 41780;
break;
case 654916988:
case -1136131795:
return 41782;
break;
case -302690309:
case 1253520069:
case 936390439:
case 546404800:
return 41783;
break;
case 654196074:
case 1282548099:
return 41785;
break;
case -1563193414:
case 457049553:
case -677286834:
case -2074989853:
return 41786;
break;
case -1721399652:
case -972504179:
return 41787;
break;
case -1683674276:
case 1712351607:
case 563282605:
case -363098795:
return 41788;
break;
case -2097983534:
case -325867395:
case -933409338:
case 1980141132:
return 41789;
break;
case -88465290:
case 1800193286:
return 41790;
break;
case 1002840275:
case -1248355355:
case -1941896375:
case 1086773602:
return 41791;
break;
case 511182553:
case -1006708912:
case -471792435:
case 1385285475:
return 41792;
break;
case -65219858:
case 1715240933:
return 41793;
break;
case 1380077011:
case 1518495160:
case 35876616:
case -703396868:
return 41795;
break;
case -1890848151:
case -682990064:
return 41796;
break;
case -557967311:
case -122870584:
return 41797;
break;
case 764576876:
case -840119153:
case -1634228234:
case 779596996:
return 41799;
break;
case 299892340:
case -429162427:
return 41800;
break;
case 1608313096:
case 1210695943:
case -228569214:
case -465788849:
return 41801;
break;
case -1865815169:
case -19772166:
case -164353677:
case 1623483336:
return 41803;
break;
case 994103034:
case 208937707:
case -1231810762:
case 1659425960:
return 41805;
break;
case -2024687146:
case -1387180271:
return 41806;
break;
case 1016505441:
case -281619713:
return 41807;
break;
case -797685524:
case -1136466740:
return 41808;
break;
case 2053513215:
case -1376431943:
return 41809;
break;
case -306641233:
case 1220871674:
return 41810;
break;
}
switch (iParam0){
case -963296156:
case 103826309:
return 41897;
break;
case -1488869771:
case 654910986:
return 41899;
break;
case 72832154:
case -2075077493:
return 41898;
break;
case -953411607:
case 91788361:
return 41900;
break;
case -1404922007:
case 1231573426:
return 41901;
break;
case 1560564400:
case -1647356863:
return 41902;
break;
case -335678317:
case -679031819:
return 41894;
break;
}
switch (iParam0){
case 1605135005:
case 461611711:
return 36759;
break;
}
switch (iParam0){
case -1655013310:
case -8081421:
return 36703;
break;
case 1136959044:
case 1252591238:
return 36704;
break;
case -1662464917:
case 439944869:
return 36718;
break;
case 1311829745:
case 1376594947:
return 36737;
break;
case 925416247:
case -993141292:
case -794186434:
return 36738;
break;
case 1544949032:
case 609473027:
return 36751;
break;
case 1505804828:
case -1839009993:
return 36752;
break;
case -1759130267:
case -2109654177:
return 36763;
break;
case 1207735097:
case -133674528:
return 36783;
break;
case 1033338279:
case 1956717889:
return 36784;
break;
case -36216721:
case 1244363453:
return 36782;
break;
case 1226096741:
case 1745898052:
return 36769;
break;
case 765528446:
case 1154188219:
return 36768;
break;
}
switch (iParam0){
case -197848144:
case 2130504112:
return 36757;
break;
case 99858221:
case 213255460:
return 36758;
break;
case 1710404355:
case -1469882278:
return 36739;
break;
case -2101744495:
case -1661253242:
return 36740;
break;
case 841763679:
case 138092552:
return 36741;
break;
case 1069377153:
case 513166526:
return 36742;
break;
case -843709836:
case -410952059:
return 36743;
break;
case 673800403:
case -2099479637:
return 36775;
break;
}
switch (iParam0){
case 205194150:
case 1019798721:
case -782196529:
case -3146323:
case 1530696889:
case 1301510495:
case 339475450:
case 1494189484:
case -2124289883:
case 1353353015:
case -156491260:
case 1232357267:
return 36809;
break;
case -1069968045:
case -921734020:
return 36699;
break;
case -1509312284:
case 2103965964:
return 36700;
break;
case -1709127394:
case -727053399:
return 36701;
break;
case 425828250:
case -731306227:
return 36702;
break;
case -1326192619:
case 1881115548:
case 1290819217:
case 117815244:
return 36715;
break;
case -1411572922:
case 1655606115:
return 36719;
break;
case -1687399299:
case -921932467:
return 36720;
break;
case -1516214043:
case -1757640274:
return 36721;
break;
case 654371756:
case 340755414:
return 36722;
break;
case -120058021:
case 583082169:
return 36723;
break;
case 44442359:
case 2145704703:
return 36724;
break;
case -723499156:
case -1907623987:
return 36725;
break;
case 222672970:
case 818396254:
return 36726;
break;
case -544285475:
case 514398241:
return 36727;
break;
case -375328511:
case -2081103177:
return 36728;
break;
case -1142876798:
case -2104434705:
return 36729;
break;
case -551157269:
case -1881446972:
return 36730;
break;
case 292021870:
case 1719833363:
return 36731;
break;
case -1035974624:
case 1956294467:
return 36732;
break;
case -192205643:
case 1894950891:
return 36733;
break;
case -947334499:
case 2114667036:
return 36734;
break;
case -111757768:
case -783423328:
return 36735;
break;
case -593232685:
case -1223936995:
return 36736;
break;
case -608876472:
case 1334957776:
return 36753;
break;
case 498873860:
case -126601887:
return 36754;
break;
case 1985248855:
case -875041851:
return 36755;
break;
case -1943948059:
case -2070991003:
return 36760;
break;
case -683062477:
case -617653084:
return 36761;
break;
case 388773720:
case -2098938846:
return 36762;
break;
case 652173018:
case -1189158251:
return 36764;
break;
case -315422177:
case -1832379936:
return 36765;
break;
case -1256711400:
case 1298977992:
return 36774;
break;
case 471019161:
case 692557212:
return 36777;
break;
case 165186084:
case -498759787:
return 36778;
break;
case 493498543:
case -292085704:
return 36779;
break;
case -2056426364:
case 1986396785:
return 36780;
break;
case -1883471582:
case -1397788925:
return 36781;
break;
case -1895527326:
case 1259618253:
return 36705;
break;
case -1416608391:
case -1905506688:
return 36706;
break;
case 1186233287:
case 952605492:
return 36707;
break;
case -1997903306:
case -1952569676:
return 36710;
break;
case -1975121276:
case 441259453:
return 36711;
break;
case -1734858968:
case -751171688:
return 36712;
break;
case 2066009771:
case -1497080576:
return 36713;
break;
case -231360453:
case -91981822:
return 36714;
break;
case -1963845403:
case 882420786:
return 36746;
break;
case 732574088:
case -824927683:
return 36747;
break;
case 492344549:
case -522764734:
return 36748;
break;
case -556847876:
case 1779880946:
case 199921456:
case 758688950:
return 36744;
break;
case -859788431:
case -592908627:
case 1504986091:
case -1749240826:
return 36745;
break;
case -378776327:
case -1886485930:
return 36716;
break;
case 955216856:
case -756304130:
return 36749;
break;
case -1622267676:
case -1099489536:
return 36750;
break;
case 534801913:
case 430517623:
return 36770;
break;
case -602915326:
case 321893176:
return 36708;
break;
case 969275756:
case 44864034:
return 36709;
break;
case 1149459758:
case 886587113:
case 1755450189:
case 1921205679:
return 36756;
break;
case 72595168:
case 1980524092:
return 36776;
break;
}
switch (iParam0){
case 1529075272:
case 28812113:
return 34505;
break;
case 1769388797:
case 183205348:
return 34375;
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_g9ec_m_berd_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_0_0"):
return 34397;
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_0_1"):
case joaat("dlc_mp_sum2_g9ec_f_berd_0_1"):
return 34398;
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_1_0"):
return 34395;
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_1_1"):
case joaat("dlc_mp_sum2_g9ec_f_berd_1_1"):
return 34396;
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_4_0"):
case joaat("dlc_mp_sum2_g9ec_m_berd_4_1"):
case joaat("dlc_mp_sum2_g9ec_f_berd_4_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_4_1"):
return 34399;
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_2_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_2_0"):
return 34400;
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_g9ec_m_outfit_mummy"):
case joaat("dlc_mp_sum2_g9ec_f_outfit_mummy"):
return 34389;
break;
case joaat("dlc_mp_sum2_g9ec_m_legs_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_legs_0_0"):
return 34410;
break;
case joaat("dlc_mp_sum2_g9ec_m_legs_0_1"):
case joaat("dlc_mp_sum2_g9ec_f_legs_0_1"):
return 34409;
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_2_0"):
return 34404;
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_0_1"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_1_1"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_1_1"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_2_1"):
return 34403;
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_2_0"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_3_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_3_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_4_0"):
return 34406;
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_6_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_8_0"):
return 34408;
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_7_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_5_0"):
return 34405;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_1_0"):
return 34391;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_2_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_2_0"):
return 34394;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_3_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_4_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_3_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_4_0"):
return 34390;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_6_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_7_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_6_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_7_0"):
return 34392;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_0"):
return 34393;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_1"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_1"):
return 34730;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_2"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_2"):
return 34731;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_3"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_3"):
return 34732;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_4"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_4"):
return 34733;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_7"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_7"):
return 34736;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_8"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_8"):
return 34737;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_5"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_5"):
return 34734;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_6"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_6"):
return 34735;
break;
case joaat("dlc_mp_sum2_g9ec_m_pears_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_pears_0_0"):
return 34401;
break;
case joaat("dlc_mp_sum2_g9ec_m_pleft_wrist_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_pright_wrist_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_pleft_wrist_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_pright_wrist_0_0"):
return 34402;
break;
case joaat("dlc_mp_sum2_g9ec_m_decl_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_decl_0_0"):
return 34407;
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_m_berd_5_0"):
case joaat("dlc_mp_sum2_f_berd_5_0"):
return 34451;
break;
case joaat("dlc_mp_sum2_m_berd_5_1"):
case joaat("dlc_mp_sum2_f_berd_5_1"):
return 34452;
break;
case joaat("dlc_mp_sum2_m_berd_5_2"):
case joaat("dlc_mp_sum2_f_berd_5_2"):
return 34453;
break;
case joaat("dlc_mp_sum2_m_berd_5_3"):
case joaat("dlc_mp_sum2_f_berd_5_3"):
return 34454;
break;
case joaat("dlc_mp_sum2_m_berd_6_0"):
case joaat("dlc_mp_sum2_f_berd_6_0"):
return 34418;
break;
case joaat("dlc_mp_sum2_m_berd_6_1"):
case joaat("dlc_mp_sum2_f_berd_6_1"):
return 34419;
break;
case joaat("dlc_mp_sum2_m_berd_6_2"):
case joaat("dlc_mp_sum2_f_berd_6_2"):
return 34420;
break;
case joaat("dlc_mp_sum2_m_berd_7_0"):
case joaat("dlc_mp_sum2_f_berd_7_0"):
return 34372;
break;
case joaat("dlc_mp_sum2_m_berd_8_0"):
case joaat("dlc_mp_sum2_f_berd_8_0"):
return 34421;
break;
case joaat("dlc_mp_sum2_m_berd_9_0"):
case joaat("dlc_mp_sum2_f_berd_9_0"):
return 34415;
break;
case joaat("dlc_mp_sum2_m_berd_9_1"):
case joaat("dlc_mp_sum2_f_berd_9_1"):
return 34416;
break;
case joaat("dlc_mp_sum2_m_berd_9_2"):
case joaat("dlc_mp_sum2_f_berd_9_2"):
return 34417;
break;
case joaat("dlc_mp_sum2_m_berd_10_0"):
case joaat("dlc_mp_sum2_f_berd_10_0"):
return 34425;
break;
case joaat("dlc_mp_sum2_m_berd_10_1"):
case joaat("dlc_mp_sum2_f_berd_10_1"):
return 34426;
break;
case joaat("dlc_mp_sum2_m_berd_10_2"):
case joaat("dlc_mp_sum2_f_berd_10_2"):
return 34427;
break;
case joaat("dlc_mp_sum2_m_berd_10_3"):
case joaat("dlc_mp_sum2_f_berd_10_3"):
return 34428;
break;
case joaat("dlc_mp_sum2_m_berd_10_4"):
case joaat("dlc_mp_sum2_f_berd_10_4"):
return 34429;
break;
case joaat("dlc_mp_sum2_m_berd_10_5"):
case joaat("dlc_mp_sum2_f_berd_10_5"):
return 34430;
break;
case joaat("dlc_mp_sum2_m_berd_10_6"):
case joaat("dlc_mp_sum2_f_berd_10_6"):
return 34431;
break;
case joaat("dlc_mp_sum2_m_berd_10_7"):
case joaat("dlc_mp_sum2_f_berd_10_7"):
return 34432;
break;
case joaat("dlc_mp_sum2_m_berd_10_8"):
case joaat("dlc_mp_sum2_f_berd_10_8"):
return 34433;
break;
case joaat("dlc_mp_sum2_m_berd_10_9"):
case joaat("dlc_mp_sum2_f_berd_10_9"):
return 34434;
break;
case joaat("dlc_mp_sum2_m_berd_10_10"):
case joaat("dlc_mp_sum2_f_berd_10_10"):
return 34435;
break;
case joaat("dlc_mp_sum2_m_berd_10_11"):
case joaat("dlc_mp_sum2_f_berd_10_11"):
return 34436;
break;
case joaat("dlc_mp_sum2_m_berd_10_12"):
case joaat("dlc_mp_sum2_f_berd_10_12"):
return 34437;
break;
case joaat("dlc_mp_sum2_m_berd_10_13"):
case joaat("dlc_mp_sum2_f_berd_10_13"):
return 34438;
break;
case joaat("dlc_mp_sum2_m_berd_10_14"):
case joaat("dlc_mp_sum2_f_berd_10_14"):
return 34439;
break;
case joaat("dlc_mp_sum2_m_berd_10_15"):
case joaat("dlc_mp_sum2_f_berd_10_15"):
return 34440;
break;
case joaat("dlc_mp_sum2_m_berd_10_16"):
case joaat("dlc_mp_sum2_f_berd_10_16"):
return 34441;
break;
case joaat("dlc_mp_sum2_m_berd_10_17"):
case joaat("dlc_mp_sum2_f_berd_10_17"):
return 34442;
break;
case joaat("dlc_mp_sum2_m_berd_10_18"):
case joaat("dlc_mp_sum2_f_berd_10_18"):
return 34443;
break;
case joaat("dlc_mp_sum2_m_berd_10_19"):
case joaat("dlc_mp_sum2_f_berd_10_19"):
return 34444;
break;
case joaat("dlc_mp_sum2_m_berd_10_20"):
case joaat("dlc_mp_sum2_f_berd_10_20"):
return 34445;
break;
case joaat("dlc_mp_sum2_m_berd_10_21"):
case joaat("dlc_mp_sum2_f_berd_10_21"):
return 34446;
break;
case joaat("dlc_mp_sum2_m_berd_10_22"):
case joaat("dlc_mp_sum2_f_berd_10_22"):
return 34447;
break;
case joaat("dlc_mp_sum2_m_berd_10_23"):
case joaat("dlc_mp_sum2_f_berd_10_23"):
return 34448;
break;
case joaat("dlc_mp_sum2_m_berd_10_24"):
case joaat("dlc_mp_sum2_f_berd_10_24"):
return 34449;
break;
case joaat("dlc_mp_sum2_m_berd_10_25"):
case joaat("dlc_mp_sum2_f_berd_10_25"):
return 34450;
break;
case joaat("dlc_mp_sum2_m_berd_0_0"):
case joaat("dlc_mp_sum2_f_berd_0_0"):
return 34423;
break;
case joaat("dlc_mp_sum2_m_berd_1_0"):
case joaat("dlc_mp_sum2_f_berd_1_0"):
return 34703;
break;
case joaat("dlc_mp_sum2_m_berd_1_1"):
case joaat("dlc_mp_sum2_f_berd_1_1"):
return 34704;
break;
case joaat("dlc_mp_sum2_m_berd_1_2"):
case joaat("dlc_mp_sum2_f_berd_1_2"):
return 34705;
break;
case joaat("dlc_mp_sum2_m_berd_3_0"):
case joaat("dlc_mp_sum2_f_berd_3_0"):
return 34424;
break;
case joaat("dlc_mp_sum2_m_berd_4_0"):
case joaat("dlc_mp_sum2_f_berd_4_0"):
return 34422;
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_m_outfit_sasquatch"):
case joaat("dlc_mp_sum2_f_outfit_sasquatch"):
return 34411;
break;
case joaat("dlc_mp_sum2_m_legs_2_0"):
case joaat("dlc_mp_sum2_f_legs_0_0"):
return 34506;
break;
case joaat("dlc_mp_sum2_m_legs_2_1"):
case joaat("dlc_mp_sum2_f_legs_0_1"):
return 34507;
break;
case joaat("dlc_mp_sum2_m_jbib_13_0"):
case joaat("dlc_mp_sum2_f_jbib_15_0"):
case joaat("dlc_mp_sum2_f_jbib_16_0"):
return 34380;
break;
case joaat("dlc_mp_sum2_m_jbib_14_0"):
case joaat("dlc_mp_sum2_f_jbib_19_0"):
return 34388;
break;
case joaat("dlc_mp_sum2_m_jbib_15_0"):
case joaat("dlc_mp_sum2_m_jbib_16_0"):
case joaat("dlc_mp_sum2_f_jbib_20_0"):
return 34383;
break;
case joaat("dlc_mp_sum2_m_jbib_15_1"):
case joaat("dlc_mp_sum2_m_jbib_16_1"):
case joaat("dlc_mp_sum2_f_jbib_20_1"):
return 34381;
break;
case joaat("dlc_mp_sum2_m_jbib_15_2"):
case joaat("dlc_mp_sum2_m_jbib_16_2"):
case joaat("dlc_mp_sum2_f_jbib_20_2"):
return 34385;
break;
case joaat("dlc_mp_sum2_m_jbib_17_0"):
case joaat("dlc_mp_sum2_f_jbib_8_0"):
return 34382;
break;
case joaat("dlc_mp_sum2_m_jbib_7_0"):
case joaat("dlc_mp_sum2_m_jbib_8_0"):
case joaat("dlc_mp_sum2_f_jbib_24_0"):
case joaat("dlc_mp_sum2_f_jbib_21_0"):
return 34384;
break;
case joaat("dlc_mp_sum2_m_phead_6_0"):
case joaat("dlc_mp_sum2_f_phead_6_0"):
return 34455;
break;
case joaat("dlc_mp_sum2_m_phead_6_1"):
case joaat("dlc_mp_sum2_f_phead_6_1"):
return 34456;
break;
case joaat("dlc_mp_sum2_m_phead_6_2"):
case joaat("dlc_mp_sum2_f_phead_6_2"):
return 34457;
break;
case joaat("dlc_mp_sum2_m_phead_6_3"):
case joaat("dlc_mp_sum2_f_phead_6_3"):
return 34458;
break;
case joaat("dlc_mp_sum2_m_phead_6_4"):
case joaat("dlc_mp_sum2_f_phead_6_4"):
return 34459;
break;
case joaat("dlc_mp_sum2_m_phead_6_5"):
case joaat("dlc_mp_sum2_f_phead_6_5"):
return 34460;
break;
case joaat("dlc_mp_sum2_m_phead_6_6"):
case joaat("dlc_mp_sum2_f_phead_6_6"):
return 34461;
break;
case joaat("dlc_mp_sum2_m_phead_6_7"):
case joaat("dlc_mp_sum2_f_phead_6_7"):
return 34462;
break;
case joaat("dlc_mp_sum2_m_phead_6_8"):
case joaat("dlc_mp_sum2_f_phead_6_8"):
return 34463;
break;
case joaat("dlc_mp_sum2_m_phead_6_9"):
case joaat("dlc_mp_sum2_f_phead_6_9"):
return 34464;
break;
case joaat("dlc_mp_sum2_m_phead_6_10"):
case joaat("dlc_mp_sum2_f_phead_6_10"):
return 34465;
break;
case joaat("dlc_mp_sum2_m_phead_6_11"):
case joaat("dlc_mp_sum2_f_phead_6_11"):
return 34466;
break;
case joaat("dlc_mp_sum2_m_phead_6_12"):
case joaat("dlc_mp_sum2_f_phead_6_12"):
return 34467;
break;
case joaat("dlc_mp_sum2_m_phead_6_13"):
case joaat("dlc_mp_sum2_f_phead_6_13"):
return 34468;
break;
case joaat("dlc_mp_sum2_m_phead_0_0"):
case joaat("dlc_mp_sum2_m_phead_1_0"):
case joaat("dlc_mp_sum2_f_phead_0_0"):
case joaat("dlc_mp_sum2_f_phead_1_0"):
return 34375;
break;
case joaat("dlc_mp_sum2_m_phead_2_0"):
case joaat("dlc_mp_sum2_m_phead_4_0"):
case joaat("dlc_mp_sum2_f_phead_2_0"):
case joaat("dlc_mp_sum2_f_phead_4_0"):
return 34508;
break;
case joaat("dlc_mp_sum2_m_phead_2_1"):
case joaat("dlc_mp_sum2_m_phead_4_1"):
case joaat("dlc_mp_sum2_f_phead_2_1"):
case joaat("dlc_mp_sum2_f_phead_4_1"):
return 34509;
break;
case joaat("dlc_mp_sum2_m_phead_3_0"):
case joaat("dlc_mp_sum2_m_phead_7_0"):
case joaat("dlc_mp_sum2_f_phead_3_0"):
case joaat("dlc_mp_sum2_f_phead_7_0"):
return 34510;
break;
case joaat("dlc_mp_sum2_m_phead_8_0"):
case joaat("dlc_mp_sum2_f_phead_8_0"):
return 34387;
break;
case joaat("dlc_mp_sum2_m_pears_0_0"):
case joaat("dlc_mp_sum2_f_pears_0_0"):
return 34469;
break;
case joaat("dlc_mp_sum2_m_pears_0_1"):
case joaat("dlc_mp_sum2_f_pears_0_1"):
return 34470;
break;
case joaat("dlc_mp_sum2_m_pears_0_2"):
case joaat("dlc_mp_sum2_f_pears_0_2"):
return 34471;
break;
case joaat("dlc_mp_sum2_m_pears_0_3"):
case joaat("dlc_mp_sum2_f_pears_0_3"):
return 34472;
break;
case joaat("dlc_mp_sum2_m_pears_0_4"):
case joaat("dlc_mp_sum2_f_pears_0_4"):
return 34473;
break;
case joaat("dlc_mp_sum2_m_pears_0_5"):
case joaat("dlc_mp_sum2_f_pears_0_5"):
return 34474;
break;
case joaat("dlc_mp_sum2_m_pears_0_6"):
case joaat("dlc_mp_sum2_f_pears_0_6"):
return 34475;
break;
case joaat("dlc_mp_sum2_m_pears_0_7"):
case joaat("dlc_mp_sum2_f_pears_0_7"):
return 34476;
break;
case joaat("dlc_mp_sum2_m_pears_0_8"):
case joaat("dlc_mp_sum2_f_pears_0_8"):
return 34477;
break;
case joaat("dlc_mp_sum2_m_pears_0_9"):
case joaat("dlc_mp_sum2_f_pears_0_9"):
return 34478;
break;
case joaat("dlc_mp_sum2_m_pears_0_10"):
case joaat("dlc_mp_sum2_f_pears_0_10"):
return 34479;
break;
case joaat("dlc_mp_sum2_m_pears_0_11"):
case joaat("dlc_mp_sum2_f_pears_0_11"):
return 34480;
break;
case joaat("dlc_mp_sum2_m_special_1_0"):
case joaat("dlc_mp_sum2_f_special_1_0"):
return 34386;
break;
case joaat("dlc_mp_sum2_m_feet_5_0"):
case joaat("dlc_mp_sum2_f_feet_5_0"):
return 34481;
break;
case joaat("dlc_mp_sum2_m_feet_5_1"):
case joaat("dlc_mp_sum2_f_feet_5_1"):
return 34482;
break;
case joaat("dlc_mp_sum2_m_feet_5_2"):
case joaat("dlc_mp_sum2_f_feet_5_2"):
return 34483;
break;
case joaat("dlc_mp_sum2_m_feet_5_3"):
case joaat("dlc_mp_sum2_f_feet_5_3"):
return 34484;
break;
case joaat("dlc_mp_sum2_m_feet_5_4"):
case joaat("dlc_mp_sum2_f_feet_5_4"):
return 34485;
break;
case joaat("dlc_mp_sum2_m_feet_5_5"):
case joaat("dlc_mp_sum2_f_feet_5_5"):
return 34486;
break;
case joaat("dlc_mp_sum2_m_feet_5_6"):
case joaat("dlc_mp_sum2_f_feet_5_6"):
return 34487;
break;
case joaat("dlc_mp_sum2_m_feet_5_7"):
case joaat("dlc_mp_sum2_f_feet_5_7"):
return 34488;
break;
case joaat("dlc_mp_sum2_m_feet_5_8"):
case joaat("dlc_mp_sum2_f_feet_5_8"):
return 34489;
break;
case joaat("dlc_mp_sum2_m_feet_6_0"):
case joaat("dlc_mp_sum2_f_feet_6_0"):
return 34490;
break;
case joaat("dlc_mp_sum2_m_feet_6_1"):
case joaat("dlc_mp_sum2_f_feet_6_1"):
return 34491;
break;
case joaat("dlc_mp_sum2_m_feet_6_2"):
case joaat("dlc_mp_sum2_f_feet_6_2"):
return 34492;
break;
case joaat("dlc_mp_sum2_m_feet_6_3"):
case joaat("dlc_mp_sum2_f_feet_6_3"):
return 34493;
break;
case joaat("dlc_mp_sum2_m_feet_6_4"):
case joaat("dlc_mp_sum2_f_feet_6_4"):
return 34494;
break;
case joaat("dlc_mp_sum2_m_feet_6_5"):
case joaat("dlc_mp_sum2_f_feet_6_5"):
return 34495;
break;
case joaat("dlc_mp_sum2_m_feet_6_6"):
case joaat("dlc_mp_sum2_f_feet_6_6"):
return 34496;
break;
case joaat("dlc_mp_sum2_m_feet_6_7"):
case joaat("dlc_mp_sum2_f_feet_6_7"):
return 34497;
break;
case joaat("dlc_mp_sum2_m_feet_6_8"):
case joaat("dlc_mp_sum2_f_feet_6_8"):
return 34498;
break;
case joaat("dlc_mp_sum2_m_feet_6_9"):
case joaat("dlc_mp_sum2_f_feet_6_9"):
return 34499;
break;
case joaat("dlc_mp_sum2_m_feet_6_10"):
case joaat("dlc_mp_sum2_f_feet_6_10"):
return 34500;
break;
case joaat("dlc_mp_sum2_m_feet_6_11"):
case joaat("dlc_mp_sum2_f_feet_6_11"):
return 34501;
break;
case joaat("dlc_mp_sum2_m_feet_6_12"):
case joaat("dlc_mp_sum2_f_feet_6_12"):
return 34502;
break;
case joaat("dlc_mp_sum2_m_feet_6_13"):
case joaat("dlc_mp_sum2_f_feet_6_13"):
return 34503;
break;
case joaat("dlc_mp_sum2_m_feet_6_14"):
case joaat("dlc_mp_sum2_f_feet_6_14"):
return 34504;
break;
}
switch (iParam0){
case joaat("dlc_mp_fixer_m_jbib_10_2"):
case joaat("dlc_mp_fixer_f_jbib_10_2"):
return 32309;
break;
case joaat("dlc_mp_fixer_m_jbib_10_3"):
case -906547381:
return 32310;
break;
case joaat("dlc_mp_fixer_m_jbib_10_4"):
case 308133919:
return 32311;
break;
case joaat("dlc_mp_fixer_m_jbib_10_0"):
case joaat("dlc_mp_fixer_f_jbib_13_0"):
return 32307;
break;
case joaat("dlc_mp_fixer_m_jbib_10_1"):
case joaat("dlc_mp_fixer_f_jbib_13_1"):
return 32308;
break;
case joaat("dlc_mp_fixer_m_berd_0_0"):
case joaat("dlc_mp_fixer_f_berd_0_0"):
return 32295;
break;
case joaat("dlc_mp_fixer_m_berd_0_1"):
case joaat("dlc_mp_fixer_f_berd_0_1"):
return 32296;
break;
case joaat("dlc_mp_fixer_m_berd_0_2"):
case joaat("dlc_mp_fixer_f_berd_0_2"):
return 32297;
break;
case joaat("dlc_mp_fixer_m_berd_0_3"):
case joaat("dlc_mp_fixer_f_berd_0_3"):
return 32298;
break;
case joaat("dlc_mp_fixer_m_berd_1_0"):
case joaat("dlc_mp_fixer_f_berd_1_0"):
return 32299;
break;
case joaat("dlc_mp_fixer_m_berd_1_1"):
case joaat("dlc_mp_fixer_f_berd_1_1"):
return 32300;
break;
case joaat("dlc_mp_fixer_m_berd_1_2"):
case joaat("dlc_mp_fixer_f_berd_1_2"):
return 32301;
break;
case joaat("dlc_mp_fixer_m_berd_1_3"):
case joaat("dlc_mp_fixer_f_berd_1_3"):
return 32302;
break;
case joaat("dlc_mp_fixer_m_berd_2_0"):
case joaat("dlc_mp_fixer_f_berd_2_0"):
return 32303;
break;
case joaat("dlc_mp_fixer_m_berd_2_1"):
case joaat("dlc_mp_fixer_f_berd_2_1"):
return 32304;
break;
case joaat("dlc_mp_fixer_m_berd_2_2"):
case joaat("dlc_mp_fixer_f_berd_2_2"):
return 32305;
break;
case joaat("dlc_mp_fixer_m_berd_2_3"):
case joaat("dlc_mp_fixer_f_berd_2_3"):
return 32306;
break;
}
switch (iParam0){
case joaat("dlc_mp_tuner_m_decl_30_1"):
case joaat("dlc_mp_tuner_f_decl_29_1"):
return 32273;
break;
case 991513037:
case -1634791241:
return 31768;
break;
case -675149090:
case -1227437948:
return 31769;
break;
case joaat("dlc_mp_tuner_m_jbib_11_0"):
case joaat("dlc_mp_tuner_m_jbib_12_0"):
case joaat("dlc_mp_tuner_f_jbib_11_0"):
case joaat("dlc_mp_tuner_f_jbib_12_0"):
return 31784;
break;
case -1686814509:
case -1408179706:
return 31770;
break;
case joaat("dlc_mp_tuner_m_outfit_boiler_1"):
case joaat("dlc_mp_tuner_m_jbib_1_3"):
case joaat("dlc_mp_tuner_m_legs_1_3"):
case joaat("dlc_mp_tuner_f_outfit_boiler_1"):
case joaat("dlc_mp_tuner_f_jbib_1_3"):
case joaat("dlc_mp_tuner_f_legs_1_3"):
return 31777;
break;
case joaat("dlc_mp_tuner_m_jbib_9_15"):
case joaat("dlc_mp_tuner_f_jbib_9_15"):
return 31788;
break;
case joaat("dlc_mp_tuner_m_jbib_13_2"):
case joaat("dlc_mp_tuner_m_jbib_14_2"):
case joaat("dlc_mp_tuner_f_jbib_13_2"):
return 31787;
break;
case joaat("dlc_mp_tuner_m_jbib_13_0"):
case joaat("dlc_mp_tuner_m_jbib_14_0"):
case joaat("dlc_mp_tuner_f_jbib_13_0"):
return 31786;
break;
case joaat("dlc_mp_tuner_m_jbib_13_1"):
case joaat("dlc_mp_tuner_m_jbib_14_1"):
case joaat("dlc_mp_tuner_f_jbib_13_1"):
return 31785;
break;
case joaat("dlc_mp_tuner_m_phead_1_0"):
case joaat("dlc_mp_tuner_m_phead_2_0"):
case joaat("dlc_mp_tuner_f_phead_1_0"):
case joaat("dlc_mp_tuner_f_phead_2_0"):
return 31766;
break;
case joaat("dlc_mp_tuner_m_phead_1_1"):
case joaat("dlc_mp_tuner_m_phead_2_1"):
case joaat("dlc_mp_tuner_f_phead_1_1"):
case joaat("dlc_mp_tuner_f_phead_2_1"):
return 31767;
break;
case joaat("dlc_mp_tuner_m_outfit_morph_0"):
case joaat("dlc_mp_tuner_f_outfit_morph_0"):
return 31789;
break;
case joaat("dlc_mp_tuner_m_outfit_morph_1"):
case joaat("dlc_mp_tuner_f_outfit_morph_1"):
return 31790;
break;
case -1372800957:
return 31791;
break;
case -1125170035:
return 31792;
break;
case 1276052663:
return 31793;
break;
case 2138708412:
case -1894139601:
return 31771;
break;
case 205793848:
case -786254870:
return 31772;
break;
case 1325175663:
case -773154515:
return 31773;
break;
case -368088972:
case 1778247767:
return 31774;
break;
case -1771053026:
case -648092145:
return 31775;
break;
case joaat("dlc_mp_tuner_m_outfit_boiler_0"):
case joaat("dlc_mp_tuner_m_jbib_1_2"):
case joaat("dlc_mp_tuner_m_legs_1_2"):
case joaat("dlc_mp_tuner_f_outfit_boiler_0"):
case joaat("dlc_mp_tuner_f_jbib_1_2"):
case joaat("dlc_mp_tuner_f_legs_1_2"):
return 31776;
break;
}
switch (iParam0){
case joaat("MP_Heist4_Tee_055_M"):
case joaat("MP_Heist4_Tee_055_F"):
return 30703;
break;
case joaat("MP_Heist4_Tee_057_M"):
case joaat("MP_Heist4_Tee_057_F"):
return 30704;
break;
case joaat("MP_Heist4_Tee_059_M"):
case joaat("MP_Heist4_Tee_059_F"):
return 30700;
break;
case joaat("MP_Heist4_Tee_061_M"):
case joaat("MP_Heist4_Tee_061_F"):
return 30701;
break;
case joaat("MP_Heist4_Tee_063_M"):
case joaat("MP_Heist4_Tee_063_F"):
return 30702;
break;
case joaat("MP_Heist4_Tee_065_M"):
case joaat("MP_Heist4_Tee_065_F"):
return 30699;
break;
}
switch (iParam0){
case joaat("MP_Heist4_Tee_030_M"):
case joaat("MP_Heist4_Tee_030_F"):
return 30533;
break;
case joaat("MP_Heist4_Tee_032_M"):
case joaat("MP_Heist4_Tee_032_F"):
return 30534;
break;
case joaat("MP_Heist4_Tee_028_M"):
case joaat("MP_Heist4_Tee_028_F"):
return 30535;
break;
case joaat("MP_Heist4_Tee_029_M"):
case joaat("MP_Heist4_Tee_029_F"):
return 30536;
break;
case joaat("MP_Heist4_Tee_031_M"):
case joaat("MP_Heist4_Tee_031_F"):
return 30537;
break;
case joaat("MP_Heist4_Tee_022_M"):
case joaat("MP_Heist4_Tee_022_F"):
return 30538;
break;
case joaat("MP_Heist4_Tee_023_M"):
case joaat("MP_Heist4_Tee_023_F"):
return 30539;
break;
case joaat("MP_Heist4_Tee_020_M"):
case joaat("MP_Heist4_Tee_020_F"):
return 30540;
break;
case joaat("MP_Heist4_Tee_021_M"):
case joaat("MP_Heist4_Tee_021_F"):
return 30541;
break;
case joaat("MP_Heist4_Tee_003_M"):
case joaat("MP_Heist4_Tee_003_F"):
return 30542;
break;
case joaat("MP_Heist4_Tee_004_M"):
case joaat("MP_Heist4_Tee_004_F"):
return 30543;
break;
case joaat("MP_Heist4_Tee_005_M"):
case joaat("MP_Heist4_Tee_005_F"):
return 30544;
break;
case joaat("MP_Heist4_Tee_006_M"):
case joaat("MP_Heist4_Tee_006_F"):
return 30545;
break;
case joaat("MP_Heist4_Tee_027_M"):
case joaat("MP_Heist4_Tee_027_F"):
return 30546;
break;
case joaat("MP_Heist4_Tee_026_M"):
case joaat("MP_Heist4_Tee_026_F"):
return 30547;
break;
case joaat("MP_Heist4_Tee_025_M"):
case joaat("MP_Heist4_Tee_025_F"):
return 30548;
break;
case joaat("MP_Heist4_Tee_024_M"):
case joaat("MP_Heist4_Tee_024_F"):
return 30549;
break;
case joaat("MP_Heist4_Tee_002_M"):
case joaat("MP_Heist4_Tee_002_F"):
return 30550;
break;
case joaat("MP_Heist4_Tee_001_M"):
case joaat("MP_Heist4_Tee_001_F"):
return 30551;
break;
case joaat("MP_Heist4_Tee_000_M"):
case joaat("MP_Heist4_Tee_000_F"):
return 30552;
break;
case joaat("MP_Heist4_Tee_007_M"):
case joaat("MP_Heist4_Tee_007_F"):
return 30553;
break;
case joaat("MP_Heist4_Tee_008_M"):
case joaat("MP_Heist4_Tee_008_F"):
return 30554;
break;
case joaat("MP_Heist4_Tee_009_M"):
case joaat("MP_Heist4_Tee_009_F"):
return 30555;
break;
case joaat("MP_Heist4_Tee_010_M"):
case joaat("MP_Heist4_Tee_010_F"):
return 30556;
break;
case joaat("MP_Heist4_Tee_011_M"):
case joaat("MP_Heist4_Tee_011_F"):
return 30557;
break;
case joaat("MP_Heist4_Tee_012_M"):
case joaat("MP_Heist4_Tee_012_F"):
return 30524;
break;
case joaat("MP_Heist4_Tee_013_M"):
case joaat("MP_Heist4_Tee_013_F"):
return 30525;
break;
case joaat("MP_Heist4_Tee_014_M"):
case joaat("MP_Heist4_Tee_014_F"):
return 30526;
break;
case joaat("MP_Heist4_Tee_015_M"):
case joaat("MP_Heist4_Tee_015_F"):
return 30527;
break;
case joaat("MP_Heist4_Tee_016_M"):
case joaat("MP_Heist4_Tee_016_F"):
return 30528;
break;
case joaat("MP_Heist4_Tee_017_M"):
case joaat("MP_Heist4_Tee_017_F"):
return 30529;
break;
case joaat("MP_Heist4_Tee_018_M"):
case joaat("MP_Heist4_Tee_018_F"):
return 30530;
break;
case joaat("MP_Heist4_Tee_019_M"):
case joaat("MP_Heist4_Tee_019_F"):
return 30531;
break;
case joaat("MP_Heist4_Tee_033_M"):
case joaat("MP_Heist4_Tee_033_F"):
return 30532;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_jbib_8_0"):
case joaat("dlc_mp_h4_f_jbib_9_0"):
case joaat("dlc_mp_h4_m_jbib_8_0"):
case joaat("dlc_mp_h4_m_jbib_9_0"):
return 30563;
break;
case joaat("dlc_mp_h4_f_jbib_10_0"):
case joaat("dlc_mp_h4_m_jbib_10_0"):
return 30564;
break;
case joaat("dlc_mp_h4_f_jbib_5_0"):
case joaat("dlc_mp_h4_m_jbib_6_0"):
return 30565;
break;
case joaat("dlc_mp_h4_f_jbib_5_1"):
case joaat("dlc_mp_h4_m_jbib_6_1"):
return 30566;
break;
case joaat("dlc_mp_h4_m_jbib_0_5"):
case joaat("dlc_mp_h4_f_jbib_7_1"):
return 30567;
break;
case joaat("MP_Heist4_Tee_048_M"):
case joaat("MP_Heist4_Tee_048_F"):
return 30568;
break;
case joaat("MP_Heist4_Tee_047_M"):
case joaat("MP_Heist4_Tee_047_F"):
return 30569;
break;
case joaat("MP_Heist4_Tee_045_M"):
case joaat("MP_Heist4_Tee_045_F"):
return 30570;
break;
case joaat("MP_Heist4_Tee_046_M"):
case joaat("MP_Heist4_Tee_046_F"):
return 30571;
break;
case joaat("dlc_mp_h4_f_jbib_7_5"):
case joaat("dlc_mp_h4_m_jbib_0_9"):
return 30572;
break;
case joaat("dlc_mp_h4_f_jbib_7_4"):
case joaat("dlc_mp_h4_m_jbib_0_8"):
return 30573;
break;
case joaat("dlc_mp_h4_m_decl_0_0"):
case joaat("dlc_mp_h4_f_decl_0_0"):
return 30574;
break;
case joaat("dlc_mp_h4_m_jbib_0_6"):
case joaat("dlc_mp_h4_f_jbib_7_2"):
return 30575;
break;
case joaat("dlc_mp_h4_m_jbib_0_7"):
case joaat("dlc_mp_h4_f_jbib_7_3"):
return 30576;
break;
case joaat("dlc_mp_h4_m_jbib_5_0"):
case joaat("dlc_mp_h4_f_jbib_4_0"):
return 30577;
break;
case joaat("dlc_mp_h4_f_jbib_6_4"):
case joaat("dlc_mp_h4_m_jbib_7_4"):
return 30578;
break;
case joaat("dlc_mp_h4_f_jbib_6_3"):
case joaat("dlc_mp_h4_m_jbib_7_3"):
return 30579;
break;
case joaat("dlc_mp_h4_f_jbib_6_2"):
case joaat("dlc_mp_h4_m_jbib_7_2"):
return 30580;
break;
case joaat("dlc_mp_h4_f_jbib_6_1"):
case joaat("dlc_mp_h4_m_jbib_7_1"):
return 30581;
break;
case joaat("dlc_mp_h4_f_jbib_6_0"):
case joaat("dlc_mp_h4_m_jbib_7_0"):
return 30582;
break;
case joaat("dlc_mp_h4_f_legs_1_0"):
case joaat("dlc_mp_h4_m_legs_1_0"):
return 30583;
break;
case joaat("dlc_mp_h4_f_legs_1_1"):
case joaat("dlc_mp_h4_m_legs_1_1"):
return 30584;
break;
case joaat("dlc_mp_h4_f_legs_1_2"):
case joaat("dlc_mp_h4_m_legs_1_2"):
return 30585;
break;
case joaat("dlc_mp_h4_f_legs_0_0"):
case joaat("dlc_mp_h4_m_legs_0_0"):
return 30586;
break;
case joaat("dlc_mp_h4_f_phead_1_0"):
case joaat("dlc_mp_h4_m_phead_1_0"):
case joaat("dlc_mp_h4_f_phead_2_0"):
case joaat("dlc_mp_h4_m_phead_2_0"):
return 30587;
break;
case joaat("dlc_mp_h4_f_phead_1_1"):
case joaat("dlc_mp_h4_m_phead_1_1"):
case joaat("dlc_mp_h4_f_phead_2_1"):
case joaat("dlc_mp_h4_m_phead_2_1"):
return 30588;
break;
case joaat("dlc_mp_h4_f_phead_1_2"):
case joaat("dlc_mp_h4_m_phead_1_2"):
case joaat("dlc_mp_h4_f_phead_2_2"):
case joaat("dlc_mp_h4_m_phead_2_2"):
return 30589;
break;
case joaat("dlc_mp_h4_f_phead_1_3"):
case joaat("dlc_mp_h4_m_phead_1_3"):
case joaat("dlc_mp_h4_f_phead_2_3"):
case joaat("dlc_mp_h4_m_phead_2_3"):
return 30590;
break;
case joaat("dlc_mp_h4_f_phead_1_4"):
case joaat("dlc_mp_h4_m_phead_1_4"):
case joaat("dlc_mp_h4_f_phead_2_4"):
case joaat("dlc_mp_h4_m_phead_2_4"):
return 30591;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_pleft_wrist_0_0"):
case joaat("dlc_mp_h4_f_pright_wrist_0_0"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_0"):
case joaat("dlc_mp_h4_m_pright_wrist_0_0"):
return 30592;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_1"):
case joaat("dlc_mp_h4_f_pright_wrist_0_1"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_1"):
case joaat("dlc_mp_h4_m_pright_wrist_0_1"):
return 30593;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_2"):
case joaat("dlc_mp_h4_f_pright_wrist_0_2"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_2"):
case joaat("dlc_mp_h4_m_pright_wrist_0_2"):
return 30594;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_3"):
case joaat("dlc_mp_h4_f_pright_wrist_0_3"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_3"):
case joaat("dlc_mp_h4_m_pright_wrist_0_3"):
return 30595;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_4"):
case joaat("dlc_mp_h4_f_pright_wrist_0_4"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_4"):
case joaat("dlc_mp_h4_m_pright_wrist_0_4"):
return 30596;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_5"):
case joaat("dlc_mp_h4_f_pright_wrist_0_5"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_5"):
case joaat("dlc_mp_h4_m_pright_wrist_0_5"):
return 30597;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_6"):
case joaat("dlc_mp_h4_f_pright_wrist_0_6"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_6"):
case joaat("dlc_mp_h4_m_pright_wrist_0_6"):
return 30598;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_7"):
case joaat("dlc_mp_h4_f_pright_wrist_0_7"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_7"):
case joaat("dlc_mp_h4_m_pright_wrist_0_7"):
return 30599;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_8"):
case joaat("dlc_mp_h4_f_pright_wrist_0_8"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_8"):
case joaat("dlc_mp_h4_m_pright_wrist_0_8"):
return 30600;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_9"):
case joaat("dlc_mp_h4_f_pright_wrist_0_9"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_9"):
case joaat("dlc_mp_h4_m_pright_wrist_0_9"):
return 30601;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_10"):
case joaat("dlc_mp_h4_f_pright_wrist_0_10"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_10"):
case joaat("dlc_mp_h4_m_pright_wrist_0_10"):
return 30602;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_11"):
case joaat("dlc_mp_h4_f_pright_wrist_0_11"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_11"):
case joaat("dlc_mp_h4_m_pright_wrist_0_11"):
return 30603;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_peyes_0_0"):
case joaat("dlc_mp_h4_m_peyes_0_0"):
return 30604;
break;
case joaat("dlc_mp_h4_f_peyes_0_1"):
case joaat("dlc_mp_h4_m_peyes_0_1"):
return 30605;
break;
case joaat("dlc_mp_h4_f_peyes_0_2"):
case joaat("dlc_mp_h4_m_peyes_0_2"):
return 30606;
break;
case joaat("dlc_mp_h4_f_peyes_0_3"):
case joaat("dlc_mp_h4_m_peyes_0_3"):
return 30607;
break;
case joaat("dlc_mp_h4_f_peyes_0_4"):
case joaat("dlc_mp_h4_m_peyes_0_4"):
return 30608;
break;
case joaat("dlc_mp_h4_f_peyes_0_5"):
case joaat("dlc_mp_h4_m_peyes_0_5"):
return 30609;
break;
case joaat("dlc_mp_h4_f_peyes_0_6"):
case joaat("dlc_mp_h4_m_peyes_0_6"):
return 30610;
break;
case joaat("dlc_mp_h4_f_peyes_0_7"):
case joaat("dlc_mp_h4_m_peyes_0_7"):
return 30611;
break;
case joaat("dlc_mp_h4_f_peyes_0_8"):
case joaat("dlc_mp_h4_m_peyes_0_8"):
return 30612;
break;
case joaat("dlc_mp_h4_f_peyes_0_9"):
case joaat("dlc_mp_h4_m_peyes_0_9"):
return 30613;
break;
case joaat("dlc_mp_h4_f_peyes_0_10"):
case joaat("dlc_mp_h4_m_peyes_0_10"):
return 30614;
break;
case joaat("dlc_mp_h4_f_peyes_0_11"):
case joaat("dlc_mp_h4_m_peyes_0_11"):
return 30615;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_teeth_13_0"):
case joaat("dlc_mp_h4_m_teeth_13_0"):
case joaat("dlc_mp_h4_f_teeth_14_0"):
case joaat("dlc_mp_h4_m_teeth_14_0"):
return 30616;
break;
case joaat("dlc_mp_h4_f_teeth_13_1"):
case joaat("dlc_mp_h4_m_teeth_13_1"):
case joaat("dlc_mp_h4_f_teeth_14_1"):
case joaat("dlc_mp_h4_m_teeth_14_1"):
return 30617;
break;
case joaat("dlc_mp_h4_f_teeth_13_2"):
case joaat("dlc_mp_h4_m_teeth_13_2"):
case joaat("dlc_mp_h4_f_teeth_14_2"):
case joaat("dlc_mp_h4_m_teeth_14_2"):
return 30618;
break;
case joaat("dlc_mp_h4_f_teeth_13_3"):
case joaat("dlc_mp_h4_m_teeth_13_3"):
case joaat("dlc_mp_h4_f_teeth_14_3"):
case joaat("dlc_mp_h4_m_teeth_14_3"):
return 30619;
break;
case joaat("dlc_mp_h4_f_teeth_13_4"):
case joaat("dlc_mp_h4_m_teeth_13_4"):
case joaat("dlc_mp_h4_f_teeth_14_4"):
case joaat("dlc_mp_h4_m_teeth_14_4"):
return 30620;
break;
case joaat("dlc_mp_h4_f_teeth_13_5"):
case joaat("dlc_mp_h4_m_teeth_13_5"):
case joaat("dlc_mp_h4_f_teeth_14_5"):
case joaat("dlc_mp_h4_m_teeth_14_5"):
return 30621;
break;
case joaat("dlc_mp_h4_f_teeth_13_6"):
case joaat("dlc_mp_h4_m_teeth_13_6"):
case joaat("dlc_mp_h4_f_teeth_14_6"):
case joaat("dlc_mp_h4_m_teeth_14_6"):
return 30622;
break;
case joaat("dlc_mp_h4_f_teeth_13_7"):
case joaat("dlc_mp_h4_m_teeth_13_7"):
case joaat("dlc_mp_h4_f_teeth_14_7"):
case joaat("dlc_mp_h4_m_teeth_14_7"):
return 30623;
break;
case joaat("dlc_mp_h4_f_teeth_13_8"):
case joaat("dlc_mp_h4_m_teeth_13_8"):
case joaat("dlc_mp_h4_f_teeth_14_8"):
case joaat("dlc_mp_h4_m_teeth_14_8"):
return 30624;
break;
case joaat("dlc_mp_h4_f_teeth_13_9"):
case joaat("dlc_mp_h4_m_teeth_13_9"):
case joaat("dlc_mp_h4_f_teeth_14_9"):
case joaat("dlc_mp_h4_m_teeth_14_9"):
return 30625;
break;
case joaat("dlc_mp_h4_f_teeth_13_10"):
case joaat("dlc_mp_h4_m_teeth_13_10"):
case joaat("dlc_mp_h4_f_teeth_14_10"):
case joaat("dlc_mp_h4_m_teeth_14_10"):
return 30626;
break;
case joaat("dlc_mp_h4_f_teeth_13_11"):
case joaat("dlc_mp_h4_m_teeth_13_11"):
case joaat("dlc_mp_h4_f_teeth_14_11"):
case joaat("dlc_mp_h4_m_teeth_14_11"):
return 30627;
break;
case joaat("dlc_mp_h4_f_teeth_13_12"):
case joaat("dlc_mp_h4_m_teeth_13_12"):
case joaat("dlc_mp_h4_f_teeth_14_12"):
case joaat("dlc_mp_h4_m_teeth_14_12"):
return 30628;
break;
case joaat("dlc_mp_h4_f_teeth_13_13"):
case joaat("dlc_mp_h4_m_teeth_13_13"):
case joaat("dlc_mp_h4_f_teeth_14_13"):
case joaat("dlc_mp_h4_m_teeth_14_13"):
return 30629;
break;
case joaat("dlc_mp_h4_f_teeth_13_14"):
case joaat("dlc_mp_h4_m_teeth_13_14"):
case joaat("dlc_mp_h4_f_teeth_14_14"):
case joaat("dlc_mp_h4_m_teeth_14_14"):
return 30630;
break;
case joaat("dlc_mp_h4_f_teeth_13_15"):
case joaat("dlc_mp_h4_m_teeth_13_15"):
case joaat("dlc_mp_h4_f_teeth_14_15"):
case joaat("dlc_mp_h4_m_teeth_14_15"):
return 30631;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_m_berd_4_0"):
case joaat("dlc_mp_h4_f_berd_4_0"):
return 30674;
break;
case joaat("dlc_mp_h4_m_berd_4_1"):
case joaat("dlc_mp_h4_f_berd_4_1"):
return 30675;
break;
case joaat("dlc_mp_h4_m_berd_4_2"):
case joaat("dlc_mp_h4_f_berd_4_2"):
return 30676;
break;
case joaat("dlc_mp_h4_m_berd_4_3"):
case joaat("dlc_mp_h4_f_berd_4_3"):
return 30677;
break;
case joaat("dlc_mp_h4_m_berd_4_4"):
case joaat("dlc_mp_h4_f_berd_4_4"):
return 30678;
break;
case joaat("dlc_mp_h4_m_berd_4_5"):
case joaat("dlc_mp_h4_f_berd_4_5"):
return 30679;
break;
case joaat("dlc_mp_h4_m_berd_4_6"):
case joaat("dlc_mp_h4_f_berd_4_6"):
return 30680;
break;
case joaat("dlc_mp_h4_m_berd_4_7"):
case joaat("dlc_mp_h4_f_berd_4_7"):
return 30681;
break;
case joaat("dlc_mp_h4_m_berd_4_8"):
case joaat("dlc_mp_h4_f_berd_4_8"):
return 30682;
break;
case joaat("dlc_mp_h4_m_berd_4_9"):
case joaat("dlc_mp_h4_f_berd_4_9"):
return 30683;
break;
case joaat("dlc_mp_h4_m_berd_4_10"):
case joaat("dlc_mp_h4_f_berd_4_10"):
return 30684;
break;
case joaat("dlc_mp_h4_m_berd_4_11"):
case joaat("dlc_mp_h4_f_berd_4_11"):
return 30685;
break;
case joaat("dlc_mp_h4_m_berd_4_12"):
case joaat("dlc_mp_h4_f_berd_4_12"):
return 30686;
break;
case joaat("dlc_mp_h4_m_berd_4_13"):
case joaat("dlc_mp_h4_f_berd_4_13"):
return 30687;
break;
case joaat("dlc_mp_h4_m_berd_4_14"):
case joaat("dlc_mp_h4_f_berd_4_14"):
return 30688;
break;
case joaat("dlc_mp_h4_m_berd_4_15"):
case joaat("dlc_mp_h4_f_berd_4_15"):
return 30689;
break;
case joaat("dlc_mp_h4_m_berd_4_16"):
case joaat("dlc_mp_h4_f_berd_4_16"):
return 30690;
break;
case joaat("dlc_mp_h4_m_berd_4_17"):
case joaat("dlc_mp_h4_f_berd_4_17"):
return 30691;
break;
case joaat("dlc_mp_h4_m_berd_4_18"):
case joaat("dlc_mp_h4_f_berd_4_18"):
return 30692;
break;
case joaat("dlc_mp_h4_m_berd_4_19"):
case joaat("dlc_mp_h4_f_berd_4_19"):
return 30693;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_m_peyes_1_0"):
case joaat("dlc_mp_h4_f_peyes_1_0"):
return 30638;
break;
case joaat("dlc_mp_h4_m_peyes_1_1"):
case joaat("dlc_mp_h4_f_peyes_1_1"):
return 30639;
break;
case joaat("dlc_mp_h4_m_peyes_1_2"):
case joaat("dlc_mp_h4_f_peyes_1_2"):
return 30640;
break;
case joaat("dlc_mp_h4_m_peyes_1_3"):
case joaat("dlc_mp_h4_f_peyes_1_3"):
return 30641;
break;
case joaat("dlc_mp_h4_m_peyes_1_4"):
case joaat("dlc_mp_h4_f_peyes_1_4"):
return 30642;
break;
case joaat("dlc_mp_h4_m_peyes_1_5"):
case joaat("dlc_mp_h4_f_peyes_1_5"):
return 30643;
break;
case joaat("dlc_mp_h4_m_peyes_1_6"):
case joaat("dlc_mp_h4_f_peyes_1_6"):
return 30644;
break;
case joaat("dlc_mp_h4_m_peyes_1_7"):
case joaat("dlc_mp_h4_f_peyes_1_7"):
return 30645;
break;
case joaat("dlc_mp_h4_m_peyes_1_8"):
case joaat("dlc_mp_h4_f_peyes_1_8"):
return 30646;
break;
case joaat("dlc_mp_h4_m_peyes_1_9"):
case joaat("dlc_mp_h4_f_peyes_1_9"):
return 30647;
break;
case joaat("dlc_mp_h4_m_peyes_1_10"):
case joaat("dlc_mp_h4_f_peyes_1_10"):
return 30648;
break;
case joaat("dlc_mp_h4_m_peyes_1_11"):
case joaat("dlc_mp_h4_f_peyes_1_11"):
return 30649;
break;
case joaat("dlc_mp_h4_m_peyes_2_0"):
case joaat("dlc_mp_h4_f_peyes_2_0"):
return 30650;
break;
case joaat("dlc_mp_h4_m_peyes_2_1"):
case joaat("dlc_mp_h4_f_peyes_2_1"):
return 30651;
break;
case joaat("dlc_mp_h4_m_peyes_2_2"):
case joaat("dlc_mp_h4_f_peyes_2_2"):
return 30652;
break;
case joaat("dlc_mp_h4_m_peyes_2_3"):
case joaat("dlc_mp_h4_f_peyes_2_3"):
return 30653;
break;
case joaat("dlc_mp_h4_m_peyes_2_4"):
case joaat("dlc_mp_h4_f_peyes_2_4"):
return 30654;
break;
case joaat("dlc_mp_h4_m_peyes_2_5"):
case joaat("dlc_mp_h4_f_peyes_2_5"):
return 30655;
break;
case joaat("dlc_mp_h4_m_peyes_2_6"):
case joaat("dlc_mp_h4_f_peyes_2_6"):
return 30656;
break;
case joaat("dlc_mp_h4_m_peyes_2_7"):
case joaat("dlc_mp_h4_f_peyes_2_7"):
return 30657;
break;
case joaat("dlc_mp_h4_m_peyes_2_8"):
case joaat("dlc_mp_h4_f_peyes_2_8"):
return 30658;
break;
case joaat("dlc_mp_h4_m_peyes_2_9"):
case joaat("dlc_mp_h4_f_peyes_2_9"):
return 30659;
break;
case joaat("dlc_mp_h4_m_peyes_2_10"):
case joaat("dlc_mp_h4_f_peyes_2_10"):
return 30660;
break;
case joaat("dlc_mp_h4_m_peyes_2_11"):
case joaat("dlc_mp_h4_f_peyes_2_11"):
return 30661;
break;
case joaat("dlc_mp_h4_m_peyes_3_0"):
case joaat("dlc_mp_h4_f_peyes_3_0"):
return 30662;
break;
case joaat("dlc_mp_h4_m_peyes_3_1"):
case joaat("dlc_mp_h4_f_peyes_3_1"):
return 30663;
break;
case joaat("dlc_mp_h4_m_peyes_3_2"):
case joaat("dlc_mp_h4_f_peyes_3_2"):
return 30664;
break;
case joaat("dlc_mp_h4_m_peyes_3_3"):
case joaat("dlc_mp_h4_f_peyes_3_3"):
return 30665;
break;
case joaat("dlc_mp_h4_m_peyes_3_4"):
case joaat("dlc_mp_h4_f_peyes_3_4"):
return 30666;
break;
case joaat("dlc_mp_h4_m_peyes_3_5"):
case joaat("dlc_mp_h4_f_peyes_3_5"):
return 30667;
break;
case joaat("dlc_mp_h4_m_peyes_3_6"):
case joaat("dlc_mp_h4_f_peyes_3_6"):
return 30668;
break;
case joaat("dlc_mp_h4_m_peyes_3_7"):
case joaat("dlc_mp_h4_f_peyes_3_7"):
return 30669;
break;
case joaat("dlc_mp_h4_m_peyes_3_8"):
case joaat("dlc_mp_h4_f_peyes_3_8"):
return 30670;
break;
case joaat("dlc_mp_h4_m_peyes_3_9"):
case joaat("dlc_mp_h4_f_peyes_3_9"):
return 30671;
break;
case joaat("dlc_mp_h4_m_peyes_3_10"):
case joaat("dlc_mp_h4_f_peyes_3_10"):
return 30672;
break;
case joaat("dlc_mp_h4_m_peyes_3_11"):
case joaat("dlc_mp_h4_f_peyes_3_11"):
return 30673;
break;
}
switch (iParam0){
case -1265443416:
case 676807987:
return 30260;
break;
case 1888753218:
case 272160153:
return 30261;
break;
case -552467991:
case 1593344440:
return 30262;
break;
case -1655919948:
case 546222390:
return 30263;
break;
case -917106601:
case 1983375900:
return 30264;
break;
case 1595446967:
case -620589387:
return 30265;
break;
case -530593323:
case 383923929:
return 30266;
break;
case 561619447:
case -1703406594:
return 30267;
break;
case -1913656173:
case -398286533:
return 30268;
break;
case -1766901922:
case -80478106:
return 30269;
break;
case 2091781849:
case 1835331655:
return 30270;
break;
case 1824588341:
case -1650596870:
return 30271;
break;
case 242597641:
case 1231926496:
return 30272;
break;
case 566785691:
case -1506181253:
return 30273;
break;
case -2091312957:
case -1737145605:
return 30274;
break;
case -2079214831:
case 1673851512:
return 30275;
break;
case 1359156274:
case 1023339598:
return 30276;
break;
case 1904247246:
case -163738770:
return 30277;
break;
case -1351518396:
case 1863218823:
return 30278;
break;
case -797874817:
case 333966447:
return 30279;
break;
case -385507297:
case 1412626052:
return 30280;
break;
case 2011910758:
case -39100956:
return 30281;
break;
case -1953985443:
case 1631533003:
return 30282;
break;
case -1124222352:
case 1493430918:
return 30283;
break;
case -1806994767:
case -196693334:
return 30284;
break;
case -1445761968:
case 553507495:
return 30285;
break;
case -89186417:
case 2003474700:
return 30286;
break;
case -308083083:
case 1121792228:
return 30287;
break;
case 667714507:
case -1424651669:
return 30288;
break;
case -1610210252:
case -1454164346:
return 30289;
break;
case joaat("dlc_mp_sum_m_berd_3_4"):
case joaat("dlc_mp_sum_f_berd_3_4"):
return 30290;
break;
case joaat("dlc_mp_sum_m_berd_3_5"):
case joaat("dlc_mp_sum_f_berd_3_5"):
return 30291;
break;
case joaat("dlc_mp_sum_m_berd_3_6"):
case joaat("dlc_mp_sum_f_berd_3_6"):
return 30292;
break;
case joaat("dlc_mp_sum_m_berd_3_7"):
case joaat("dlc_mp_sum_f_berd_3_7"):
return 30293;
break;
case joaat("dlc_mp_sum_m_legs_1_25"):
case joaat("dlc_mp_sum_f_legs_2_25"):
return 30294;
break;
case joaat("dlc_mp_sum_m_jbib_0_25"):
case joaat("dlc_mp_sum_f_jbib_0_25"):
return 30295;
break;
}
switch (iParam0){
case joaat("dlc_mp_vwd_m_decl_1_0"):
case joaat("dlc_mp_vwd_f_decl_1_0"):
return 27194;
break;
case joaat("dlc_mp_vwd_m_decl_1_6"):
case joaat("dlc_mp_vwd_f_decl_1_6"):
return 27195;
break;
case joaat("dlc_mp_vwd_m_decl_1_7"):
case joaat("dlc_mp_vwd_f_decl_1_7"):
return 27196;
break;
case joaat("dlc_mp_vwd_m_decl_1_8"):
case joaat("dlc_mp_vwd_f_decl_1_8"):
return 27197;
break;
case joaat("dlc_mp_vwd_m_jbib_23_5"):
case joaat("dlc_mp_vwd_f_jbib_21_5"):
return 27198;
break;
case joaat("dlc_mp_vwd_m_jbib_23_8"):
case joaat("dlc_mp_vwd_f_jbib_21_8"):
return 27199;
break;
case joaat("dlc_mp_vwd_m_jbib_23_9"):
case joaat("dlc_mp_vwd_f_jbib_21_9"):
return 27200;
break;
case joaat("dlc_mp_vwd_m_jbib_23_10"):
case joaat("dlc_mp_vwd_f_jbib_21_10"):
return 27201;
break;
case joaat("dlc_mp_vwd_m_decl_1_11"):
case joaat("dlc_mp_vwd_f_decl_1_11"):
return 27202;
break;
case joaat("dlc_mp_vwd_m_decl_1_12"):
case joaat("dlc_mp_vwd_f_decl_1_12"):
return 27203;
break;
case joaat("dlc_mp_vwd_m_decl_1_13"):
case joaat("dlc_mp_vwd_f_decl_1_13"):
return 27204;
break;
case joaat("dlc_mp_vwd_m_decl_1_14"):
case joaat("dlc_mp_vwd_f_decl_1_14"):
return 27205;
break;
case joaat("dlc_mp_vwd_m_decl_1_15"):
case joaat("dlc_mp_vwd_f_decl_1_15"):
return 27206;
break;
case joaat("dlc_mp_vwd_m_decl_1_16"):
case joaat("dlc_mp_vwd_f_decl_1_16"):
return 27207;
break;
case joaat("dlc_mp_vwd_m_decl_1_17"):
case joaat("dlc_mp_vwd_f_decl_1_17"):
return 27208;
break;
case joaat("dlc_mp_vwd_m_decl_1_18"):
case joaat("dlc_mp_vwd_f_decl_1_18"):
return 27209;
break;
case joaat("dlc_mp_vwd_m_jbib_23_0"):
case joaat("dlc_mp_vwd_f_jbib_21_0"):
return 27210;
break;
case joaat("dlc_mp_vwd_m_jbib_23_2"):
case joaat("dlc_mp_vwd_f_jbib_21_2"):
return 27211;
break;
case joaat("dlc_mp_vwd_m_jbib_23_4"):
case joaat("dlc_mp_vwd_f_jbib_21_4"):
return 27212;
break;
case joaat("dlc_mp_vwd_m_jbib_23_7"):
case joaat("dlc_mp_vwd_f_jbib_21_7"):
return 27213;
break;
}
switch (iParam0){
case joaat("MP_Christmas2018_Tee_000_M"):
case joaat("MP_Christmas2018_Tee_000_F"):
return 25032;
break;
case joaat("MP_Christmas2018_Tee_001_M"):
case joaat("MP_Christmas2018_Tee_001_F"):
return 25033;
break;
case joaat("MP_Christmas2018_Tee_002_M"):
case joaat("MP_Christmas2018_Tee_002_F"):
return 25034;
break;
case joaat("MP_Christmas2018_Tee_003_M"):
case joaat("MP_Christmas2018_Tee_003_F"):
return 25035;
break;
case joaat("MP_Christmas2018_Tee_004_M"):
case joaat("MP_Christmas2018_Tee_004_F"):
return 25036;
break;
case joaat("MP_Christmas2018_Tee_005_M"):
case joaat("MP_Christmas2018_Tee_005_F"):
return 25037;
break;
case joaat("MP_Christmas2018_Tee_006_M"):
case joaat("MP_Christmas2018_Tee_006_F"):
return 25038;
break;
case joaat("MP_Christmas2018_Tee_007_M"):
case joaat("MP_Christmas2018_Tee_007_F"):
return 25039;
break;
case joaat("MP_Christmas2018_Tee_008_M"):
case joaat("MP_Christmas2018_Tee_008_F"):
return 25040;
break;
case joaat("MP_Christmas2018_Tee_009_M"):
case joaat("MP_Christmas2018_Tee_009_F"):
return 25041;
break;
case joaat("MP_Christmas2018_Tee_010_M"):
case joaat("MP_Christmas2018_Tee_010_F"):
return 25042;
break;
case joaat("MP_Christmas2018_Tee_011_M"):
case joaat("MP_Christmas2018_Tee_011_F"):
return 25043;
break;
case joaat("MP_Christmas2018_Tee_012_M"):
case joaat("MP_Christmas2018_Tee_012_F"):
return 25044;
break;
case joaat("MP_Christmas2018_Tee_013_M"):
case joaat("MP_Christmas2018_Tee_013_F"):
return 25045;
break;
case joaat("MP_Christmas2018_Tee_014_M"):
case joaat("MP_Christmas2018_Tee_014_F"):
return 25046;
break;
case joaat("MP_Christmas2018_Tee_015_M"):
case joaat("MP_Christmas2018_Tee_015_F"):
return 25047;
break;
case joaat("MP_Christmas2018_Tee_016_M"):
case joaat("MP_Christmas2018_Tee_016_F"):
return 25048;
break;
case joaat("MP_Christmas2018_Tee_017_M"):
case joaat("MP_Christmas2018_Tee_017_F"):
return 25049;
break;
case joaat("MP_Christmas2018_Tee_018_M"):
case joaat("MP_Christmas2018_Tee_018_F"):
return 25050;
break;
case joaat("MP_Christmas2018_Tee_019_M"):
case joaat("MP_Christmas2018_Tee_019_F"):
return 25051;
break;
case joaat("MP_Christmas2018_Tee_020_M"):
case joaat("MP_Christmas2018_Tee_020_F"):
return 25052;
break;
case joaat("MP_Christmas2018_Tee_021_M"):
case joaat("MP_Christmas2018_Tee_021_F"):
return 25053;
break;
case joaat("MP_Christmas2018_Tee_022_M"):
case joaat("MP_Christmas2018_Tee_022_F"):
return 25054;
break;
case joaat("MP_Christmas2018_Tee_023_M"):
case joaat("MP_Christmas2018_Tee_023_F"):
return 25055;
break;
case joaat("MP_Christmas2018_Tee_024_M"):
case joaat("MP_Christmas2018_Tee_024_F"):
return 25056;
break;
case joaat("MP_Christmas2018_Tee_025_M"):
case joaat("MP_Christmas2018_Tee_025_F"):
return 25057;
break;
case joaat("MP_Christmas2018_Tee_026_M"):
case joaat("MP_Christmas2018_Tee_026_F"):
return 25058;
break;
case joaat("MP_Christmas2018_Tee_027_M"):
case joaat("MP_Christmas2018_Tee_027_F"):
return 25059;
break;
case joaat("MP_Christmas2018_Tee_028_M"):
case joaat("MP_Christmas2018_Tee_028_F"):
return 25060;
break;
case joaat("MP_Christmas2018_Tee_029_M"):
case joaat("MP_Christmas2018_Tee_029_F"):
return 25061;
break;
case joaat("MP_Christmas2018_Tee_030_M"):
case joaat("MP_Christmas2018_Tee_030_F"):
return 25062;
break;
case joaat("MP_Christmas2018_Tee_031_M"):
case joaat("MP_Christmas2018_Tee_031_F"):
return 25063;
break;
case joaat("MP_Christmas2018_Tee_032_M"):
case joaat("MP_Christmas2018_Tee_032_F"):
return 25064;
break;
case joaat("MP_Christmas2018_Tee_033_M"):
case joaat("MP_Christmas2018_Tee_033_F"):
return 25065;
break;
case joaat("MP_Christmas2018_Tee_034_M"):
case joaat("MP_Christmas2018_Tee_034_F"):
return 25066;
break;
case joaat("MP_Christmas2018_Tee_035_M"):
case joaat("MP_Christmas2018_Tee_035_F"):
return 25067;
break;
case joaat("MP_Christmas2018_Tee_036_M"):
case joaat("MP_Christmas2018_Tee_036_F"):
return 25068;
break;
case joaat("MP_Christmas2018_Tee_037_M"):
case joaat("MP_Christmas2018_Tee_037_F"):
return 25069;
break;
case joaat("MP_Christmas2018_Tee_038_M"):
case joaat("MP_Christmas2018_Tee_038_F"):
return 25070;
break;
case joaat("MP_Christmas2018_Tee_039_M"):
case joaat("MP_Christmas2018_Tee_039_F"):
return 25071;
break;
case joaat("MP_Christmas2018_Tee_040_M"):
case joaat("MP_Christmas2018_Tee_040_F"):
return 25072;
break;
case joaat("MP_Christmas2018_Tee_041_M"):
case joaat("MP_Christmas2018_Tee_041_F"):
return 25073;
break;
case joaat("MP_Christmas2018_Tee_042_M"):
case joaat("MP_Christmas2018_Tee_042_F"):
return 25074;
break;
case joaat("MP_Christmas2018_Tee_043_M"):
case joaat("MP_Christmas2018_Tee_043_F"):
return 25075;
break;
case joaat("MP_Christmas2018_Tee_044_M"):
case joaat("MP_Christmas2018_Tee_044_F"):
return 25076;
break;
case joaat("MP_Christmas2018_Tee_045_M"):
case joaat("MP_Christmas2018_Tee_045_F"):
return 25077;
break;
case joaat("MP_Christmas2018_Tee_046_M"):
case joaat("MP_Christmas2018_Tee_046_F"):
return 25078;
break;
case joaat("MP_Christmas2018_Tee_047_M"):
case joaat("MP_Christmas2018_Tee_047_F"):
return 25079;
break;
case joaat("MP_Christmas2018_Tee_048_M"):
case joaat("MP_Christmas2018_Tee_048_F"):
return 25080;
break;
case joaat("MP_Christmas2018_Tee_049_M"):
case joaat("MP_Christmas2018_Tee_049_F"):
return 25081;
break;
case joaat("MP_Christmas2018_Tee_050_M"):
case joaat("MP_Christmas2018_Tee_050_F"):
return 25082;
break;
case joaat("MP_Christmas2018_Tee_051_M"):
case joaat("MP_Christmas2018_Tee_051_F"):
return 25083;
break;
case joaat("MP_Christmas2018_Tee_052_M"):
case joaat("MP_Christmas2018_Tee_052_F"):
return 25084;
break;
case joaat("MP_Christmas2018_Tee_053_M"):
case joaat("MP_Christmas2018_Tee_053_F"):
return 25085;
break;
case joaat("MP_Christmas2018_Tee_054_M"):
case joaat("MP_Christmas2018_Tee_054_F"):
return 25086;
break;
case joaat("MP_Christmas2018_Tee_055_M"):
case joaat("MP_Christmas2018_Tee_055_F"):
return 25087;
break;
case joaat("MP_Christmas2018_Tee_056_M"):
case joaat("MP_Christmas2018_Tee_056_F"):
return 25088;
break;
case joaat("MP_Christmas2018_Tee_057_M"):
case joaat("MP_Christmas2018_Tee_057_F"):
return 25089;
break;
case joaat("MP_Christmas2018_Tee_058_M"):
case joaat("MP_Christmas2018_Tee_058_F"):
return 25090;
break;
case joaat("MP_Christmas2018_Tee_059_M"):
case joaat("MP_Christmas2018_Tee_059_F"):
return 25091;
break;
case joaat("MP_Christmas2018_Tee_060_M"):
case joaat("MP_Christmas2018_Tee_060_F"):
return 25092;
break;
case joaat("MP_Christmas2018_Tee_061_M"):
case joaat("MP_Christmas2018_Tee_061_F"):
return 25093;
break;
case joaat("MP_Christmas2018_Tee_062_M"):
case joaat("MP_Christmas2018_Tee_062_F"):
return 25094;
break;
case joaat("MP_Christmas2018_Tee_063_M"):
case joaat("MP_Christmas2018_Tee_063_F"):
return 25095;
break;
case joaat("MP_Christmas2018_Tee_064_M"):
case joaat("MP_Christmas2018_Tee_064_F"):
return 25096;
break;
case joaat("MP_Christmas2018_Tee_065_M"):
case joaat("MP_Christmas2018_Tee_065_F"):
return 25097;
break;
case joaat("MP_Christmas2018_Tee_066_M"):
case joaat("MP_Christmas2018_Tee_066_F"):
return 25098;
break;
case joaat("MP_Christmas2018_Tee_067_M"):
case joaat("MP_Christmas2018_Tee_067_F"):
return 25099;
break;
}
switch (iParam0){
case joaat("dlc_mp_arena_f_jbib_16_0"):
case joaat("dlc_mp_arena_m_jbib_16_0"):
return 25022;
case joaat("dlc_mp_arena_f_jbib_16_1"):
case joaat("dlc_mp_arena_m_jbib_16_1"):
return 25023;
case joaat("dlc_mp_arena_f_jbib_16_2"):
case joaat("dlc_mp_arena_m_jbib_16_2"):
return 25024;
case joaat("dlc_mp_arena_f_jbib_16_3"):
case joaat("dlc_mp_arena_m_jbib_16_3"):
return 25025;
case joaat("dlc_mp_arena_f_jbib_16_4"):
case joaat("dlc_mp_arena_m_jbib_16_4"):
return 25026;
case joaat("dlc_mp_arena_f_jbib_16_5"):
case joaat("dlc_mp_arena_m_jbib_16_5"):
return 25027;
case joaat("dlc_mp_arena_f_jbib_16_6"):
case joaat("dlc_mp_arena_m_jbib_16_6"):
return 25028;
case joaat("dlc_mp_arena_f_jbib_16_7"):
case joaat("dlc_mp_arena_m_jbib_16_7"):
return 25019;
case joaat("dlc_mp_arena_f_jbib_16_8"):
case joaat("dlc_mp_arena_m_jbib_16_8"):
return 25029;
case joaat("dlc_mp_arena_f_jbib_16_9"):
case joaat("dlc_mp_arena_m_jbib_16_9"):
return 25021;
case joaat("dlc_mp_arena_f_jbib_16_10"):
case joaat("dlc_mp_arena_m_jbib_16_10"):
return 25018;
case joaat("dlc_mp_arena_f_jbib_16_11"):
case joaat("dlc_mp_arena_m_jbib_16_11"):
return 25020;
case joaat("dlc_mp_arena_f_jbib_16_12"):
case joaat("dlc_mp_arena_m_jbib_16_12"):
return 25030;
case joaat("dlc_mp_arena_f_jbib_16_13"):
case joaat("dlc_mp_arena_m_jbib_16_13"):
return 25031;
default:
}
switch (iParam0){
case -1641688020:
return 25002;
default:
}
switch (iParam0){
case joaat("MP_Battle_Clothing_000_M"):
case joaat("MP_Battle_Clothing_000_F"):
return 22108;
case joaat("MP_Battle_Clothing_002_M"):
case joaat("MP_Battle_Clothing_002_F"):
return 9481;
case joaat("MP_Battle_Clothing_003_M"):
case joaat("MP_Battle_Clothing_003_F"):
return 9470;
case joaat("MP_Battle_Clothing_004_M"):
case joaat("MP_Battle_Clothing_004_F"):
return 9475;
case joaat("MP_Battle_Clothing_005_M"):
case joaat("MP_Battle_Clothing_005_F"):
return 9472;
case joaat("MP_Battle_Clothing_006_M"):
case joaat("MP_Battle_Clothing_006_F"):
return 9465;
case joaat("MP_Battle_Clothing_007_M"):
case joaat("MP_Battle_Clothing_007_F"):
return 9463;
case joaat("MP_Battle_Clothing_008_M"):
case joaat("MP_Battle_Clothing_008_F"):
return 9464;
case joaat("MP_Battle_Clothing_009_M"):
case joaat("MP_Battle_Clothing_009_F"):
return 9468;
case joaat("MP_Battle_Clothing_010_M"):
case joaat("MP_Battle_Clothing_010_F"):
return 9469;
case joaat("MP_Battle_Clothing_011_M"):
case joaat("MP_Battle_Clothing_011_F"):
return 9479;
case joaat("MP_Battle_Clothing_012_M"):
case joaat("MP_Battle_Clothing_012_F"):
return 9473;
case joaat("MP_Battle_Clothing_013_M"):
case joaat("MP_Battle_Clothing_013_F"):
return 9480;
case joaat("MP_Battle_Clothing_014_M"):
case joaat("MP_Battle_Clothing_014_F"):
return 9476;
case joaat("MP_Battle_Clothing_015_M"):
case joaat("MP_Battle_Clothing_015_F"):
return 9477;
case joaat("MP_Battle_Clothing_016_M"):
case joaat("MP_Battle_Clothing_016_F"):
return 9471;
case joaat("MP_Battle_Clothing_017_M"):
case joaat("MP_Battle_Clothing_017_F"):
return 9474;
case joaat("MP_Battle_Clothing_018_M"):
case joaat("MP_Battle_Clothing_018_F"):
return 9467;
case joaat("MP_Battle_Clothing_019_M"):
case joaat("MP_Battle_Clothing_019_F"):
return 9478;
case joaat("MP_Battle_Clothing_020_M"):
case joaat("MP_Battle_Clothing_020_F"):
return 9462;
case joaat("MP_Battle_Clothing_021_M"):
case joaat("MP_Battle_Clothing_021_F"):
return 9466;
case joaat("MP_Battle_Clothing_022_M"):
case joaat("MP_Battle_Clothing_022_F"):
return 22126;
case joaat("MP_Battle_Clothing_023_M"):
case joaat("MP_Battle_Clothing_023_F"):
return 22127;
case joaat("MP_Battle_Clothing_024_M"):
case joaat("MP_Battle_Clothing_024_F"):
return 22128;
case joaat("MP_Battle_Clothing_025_M"):
case joaat("MP_Battle_Clothing_025_F"):
return 22124;
case joaat("MP_Battle_Clothing_026_M"):
case joaat("MP_Battle_Clothing_026_F"):
return 22130;
case joaat("MP_Battle_Clothing_027_M"):
case joaat("MP_Battle_Clothing_027_F"):
return 22125;
case joaat("MP_Battle_Clothing_028_M"):
case joaat("MP_Battle_Clothing_028_F"):
return 22129;
case joaat("MP_Battle_Clothing_029_M"):
case joaat("MP_Battle_Clothing_029_F"):
return 22131;
case joaat("MP_Battle_Clothing_030_M"):
case joaat("MP_Battle_Clothing_030_F"):
return 22132;
default:
}
switch (iParam0){
case joaat("MP_Battle_Clothing_031_M"):
case joaat("MP_Battle_Clothing_031_F"):
return 22147;
case joaat("MP_Battle_Clothing_032_M"):
case joaat("MP_Battle_Clothing_032_F"):
return 22148;
case joaat("MP_Battle_Clothing_033_M"):
case joaat("MP_Battle_Clothing_033_F"):
return 22149;
case joaat("MP_Battle_Clothing_034_M"):
case joaat("MP_Battle_Clothing_034_F"):
return 22150;
case joaat("MP_Battle_Clothing_035_M"):
case joaat("MP_Battle_Clothing_035_F"):
return 22151;
case joaat("MP_Battle_Clothing_036_M"):
case joaat("MP_Battle_Clothing_036_F"):
return 22152;
case joaat("MP_Battle_Clothing_037_M"):
case joaat("MP_Battle_Clothing_037_F"):
return 22153;
case joaat("MP_Battle_Clothing_038_M"):
case joaat("MP_Battle_Clothing_038_F"):
return 22154;
case joaat("MP_Battle_Clothing_039_M"):
case joaat("MP_Battle_Clothing_039_F"):
return 22155;
case joaat("MP_Battle_Clothing_040_M"):
case joaat("MP_Battle_Clothing_040_F"):
return 22156;
case joaat("MP_Battle_Clothing_041_M"):
case joaat("MP_Battle_Clothing_041_F"):
return 22157;
case joaat("MP_Battle_Clothing_042_M"):
case joaat("MP_Battle_Clothing_042_F"):
return 22158;
case joaat("MP_Battle_Clothing_043_M"):
case joaat("MP_Battle_Clothing_043_F"):
return 22159;
case joaat("MP_Battle_Clothing_044_M"):
case joaat("MP_Battle_Clothing_044_F"):
return 22160;
case joaat("MP_Battle_Clothing_045_M"):
case joaat("MP_Battle_Clothing_045_F"):
return 22161;
case joaat("MP_Battle_Clothing_046_M"):
case joaat("MP_Battle_Clothing_046_F"):
return 22162;
case joaat("MP_Battle_Clothing_047_M"):
case joaat("MP_Battle_Clothing_047_F"):
return 22163;
case joaat("MP_Battle_Clothing_048_M"):
case joaat("MP_Battle_Clothing_048_F"):
return 22164;
case joaat("MP_Battle_Clothing_049_M"):
case joaat("MP_Battle_Clothing_049_F"):
return 22165;
case joaat("MP_Battle_Clothing_050_M"):
case joaat("MP_Battle_Clothing_050_F"):
return 22166;
case joaat("MP_Battle_Clothing_051_M"):
case joaat("MP_Battle_Clothing_051_F"):
return 22167;
case joaat("MP_Battle_Clothing_052_M"):
case joaat("MP_Battle_Clothing_052_F"):
return 22168;
case joaat("MP_Battle_Clothing_053_M"):
case joaat("MP_Battle_Clothing_053_F"):
return 22169;
case joaat("MP_Battle_Clothing_054_M"):
case joaat("MP_Battle_Clothing_054_F"):
return 22170;
case joaat("MP_Battle_Clothing_055_M"):
case joaat("MP_Battle_Clothing_055_F"):
return 22171;
case joaat("MP_Battle_Clothing_056_M"):
case joaat("MP_Battle_Clothing_056_F"):
return 22172;
case joaat("MP_Battle_Clothing_057_M"):
case joaat("MP_Battle_Clothing_057_F"):
return 22173;
case joaat("MP_Battle_Clothing_058_M"):
case joaat("MP_Battle_Clothing_058_F"):
return 22174;
case joaat("MP_Battle_Clothing_059_M"):
case joaat("MP_Battle_Clothing_059_F"):
return 22175;
case joaat("MP_Battle_Clothing_060_M"):
case joaat("MP_Battle_Clothing_060_F"):
return 22176;
case joaat("MP_Battle_Clothing_061_M"):
case joaat("MP_Battle_Clothing_061_F"):
return 22177;
case joaat("MP_Battle_Clothing_062_M"):
case joaat("MP_Battle_Clothing_062_F"):
return 22178;
default:
}
switch (iParam0){
case joaat("dlc_mp_lts_m_outfit_14"):
case joaat("dlc_mp_lts_f_outfit_14"):
return 18099;
default:
}
switch (iParam0){
case joaat("dlc_mp_x17_m_outfit_morph_0"):
case joaat("dlc_mp_x17_m_berd_2_0"):
case joaat("dlc_mp_x17_m_legs_1_0"):
case joaat("dlc_mp_x17_m_feet_1_0"):
case joaat("dlc_mp_x17_m_jbib_5_0"):
case joaat("dlc_mp_x17_f_outfit_morph_0"):
case joaat("dlc_mp_x17_f_berd_2_0"):
case joaat("dlc_mp_x17_f_legs_1_0"):
case joaat("dlc_mp_x17_f_feet_1_0"):
case joaat("dlc_mp_x17_f_jbib_5_0"):
return 18121;
case joaat("dlc_mp_x17_m_outfit_morph_1"):
case joaat("dlc_mp_x17_m_berd_2_1"):
case joaat("dlc_mp_x17_m_legs_1_1"):
case joaat("dlc_mp_x17_m_feet_1_1"):
case joaat("dlc_mp_x17_m_jbib_5_1"):
case joaat("dlc_mp_x17_f_outfit_morph_1"):
case joaat("dlc_mp_x17_f_berd_2_1"):
case joaat("dlc_mp_x17_f_legs_1_1"):
case joaat("dlc_mp_x17_f_feet_1_1"):
case joaat("dlc_mp_x17_f_jbib_5_1"):
return 18122;
case joaat("dlc_mp_x17_m_outfit_morph_2"):
case joaat("dlc_mp_x17_m_berd_2_2"):
case joaat("dlc_mp_x17_m_legs_1_2"):
case joaat("dlc_mp_x17_m_feet_1_2"):
case joaat("dlc_mp_x17_m_jbib_5_2"):
case joaat("dlc_mp_x17_f_outfit_morph_2"):
case joaat("dlc_mp_x17_f_berd_2_2"):
case joaat("dlc_mp_x17_f_legs_1_2"):
case joaat("dlc_mp_x17_f_feet_1_2"):
case joaat("dlc_mp_x17_f_jbib_5_2"):
return 18123;
case joaat("dlc_mp_x17_m_outfit_morph_3"):
case joaat("dlc_mp_x17_m_berd_2_3"):
case joaat("dlc_mp_x17_m_legs_1_3"):
case joaat("dlc_mp_x17_m_feet_1_3"):
case joaat("dlc_mp_x17_m_jbib_5_3"):
case joaat("dlc_mp_x17_f_outfit_morph_3"):
case joaat("dlc_mp_x17_f_berd_2_3"):
case joaat("dlc_mp_x17_f_legs_1_3"):
case joaat("dlc_mp_x17_f_feet_1_3"):
case joaat("dlc_mp_x17_f_jbib_5_3"):
return 18124;
case joaat("dlc_mp_x17_m_outfit_morph_4"):
case joaat("dlc_mp_x17_m_berd_2_4"):
case joaat("dlc_mp_x17_m_legs_1_4"):
case joaat("dlc_mp_x17_m_feet_1_4"):
case joaat("dlc_mp_x17_m_jbib_5_4"):
case joaat("dlc_mp_x17_f_outfit_morph_4"):
case joaat("dlc_mp_x17_f_berd_2_4"):
case joaat("dlc_mp_x17_f_legs_1_4"):
case joaat("dlc_mp_x17_f_feet_1_4"):
case joaat("dlc_mp_x17_f_jbib_5_4"):
return 18125;
default:
}
switch (iParam0){
case joaat("dlc_mp_x17_m_berd_10_0"):
case joaat("dlc_mp_x17_f_berd_10_0"):
return 18134;
case joaat("dlc_mp_x17_m_berd_10_1"):
case joaat("dlc_mp_x17_f_berd_10_1"):
return 18135;
case joaat("dlc_mp_x17_m_berd_10_2"):
case joaat("dlc_mp_x17_f_berd_10_2"):
return 18136;
case joaat("dlc_mp_x17_m_berd_10_3"):
case joaat("dlc_mp_x17_f_berd_10_3"):
return 18137;
default:
}
switch (iParam0){
case joaat("dlc_mp_gr_m_jbib_19_0"):
case joaat("dlc_mp_gr_f_jbib_25_0"):
return 15417;
case joaat("dlc_mp_gr_m_jbib_19_1"):
case joaat("dlc_mp_gr_f_jbib_25_1"):
return 15418;
case joaat("dlc_mp_gr_m_jbib_20_0"):
case joaat("dlc_mp_gr_f_jbib_26_0"):
return 15425;
default:
}
switch (iParam0){
case joaat("dlc_mp_gr_m_decl_5_0"):
case joaat("dlc_mp_gr_f_decl_5_0"):
return 15405;
case joaat("dlc_mp_gr_m_decl_5_1"):
case joaat("dlc_mp_gr_f_decl_5_1"):
return 15393;
case joaat("dlc_mp_gr_m_decl_5_2"):
case joaat("dlc_mp_gr_f_decl_5_2"):
return 15409;
case joaat("dlc_mp_gr_m_decl_5_3"):
case joaat("dlc_mp_gr_f_decl_5_3"):
return 15396;
case joaat("dlc_mp_gr_m_decl_5_4"):
case joaat("dlc_mp_gr_f_decl_5_4"):
return 15412;
case joaat("dlc_mp_gr_m_decl_5_6"):
case joaat("dlc_mp_gr_f_decl_5_6"):
return 15403;
case joaat("dlc_mp_gr_m_decl_5_8"):
case joaat("dlc_mp_gr_f_decl_5_8"):
return 15389;
case joaat("dlc_mp_gr_m_decl_5_10"):
case joaat("dlc_mp_gr_f_decl_5_10"):
return 15398;
default:
}
switch (iParam0){
case joaat("dlc_mp_gr_m_phead_6_0"):
case joaat("dlc_mp_gr_f_phead_6_0"):
case joaat("dlc_mp_gr_m_phead_7_0"):
case joaat("dlc_mp_gr_f_phead_7_0"):
return 15400;
case joaat("dlc_mp_gr_m_phead_6_2"):
case joaat("dlc_mp_gr_f_phead_6_2"):
case joaat("dlc_mp_gr_m_phead_7_2"):
case joaat("dlc_mp_gr_f_phead_7_2"):
return 15408;
case joaat("dlc_mp_gr_m_phead_6_4"):
case joaat("dlc_mp_gr_f_phead_6_4"):
case joaat("dlc_mp_gr_m_phead_7_4"):
case joaat("dlc_mp_gr_f_phead_7_4"):
return 15411;
case joaat("dlc_mp_gr_m_phead_6_5"):
case joaat("dlc_mp_gr_f_phead_6_5"):
case joaat("dlc_mp_gr_m_phead_7_5"):
case joaat("dlc_mp_gr_f_phead_7_5"):
return 15397;
case joaat("dlc_mp_gr_m_phead_6_6"):
case joaat("dlc_mp_gr_f_phead_6_6"):
case joaat("dlc_mp_gr_m_phead_7_6"):
case joaat("dlc_mp_gr_f_phead_7_6"):
return 15413;
case joaat("dlc_mp_gr_m_phead_6_7"):
case joaat("dlc_mp_gr_f_phead_6_7"):
case joaat("dlc_mp_gr_m_phead_7_7"):
case joaat("dlc_mp_gr_f_phead_7_7"):
return 15391;
case joaat("dlc_mp_gr_m_phead_6_8"):
case joaat("dlc_mp_gr_f_phead_6_8"):
case joaat("dlc_mp_gr_m_phead_7_8"):
case joaat("dlc_mp_gr_f_phead_7_8"):
return 15388;
case joaat("dlc_mp_gr_m_phead_6_10"):
case joaat("dlc_mp_gr_f_phead_6_10"):
case joaat("dlc_mp_gr_m_phead_7_10"):
case joaat("dlc_mp_gr_f_phead_7_10"):
return 15401;
default:
}
switch (iParam0){
case joaat("MP_Gunrunning_Award_000_M"):
case joaat("MP_Gunrunning_Award_000_F"):
return 15394;
case joaat("MP_Gunrunning_Award_002_M"):
case joaat("MP_Gunrunning_Award_002_F"):
return 15406;
case joaat("MP_Gunrunning_Award_003_M"):
case joaat("MP_Gunrunning_Award_003_F"):
return 15395;
case joaat("MP_Gunrunning_Award_005_M"):
case joaat("MP_Gunrunning_Award_005_F"):
return 15410;
case joaat("MP_Gunrunning_Award_006_M"):
case joaat("MP_Gunrunning_Award_006_F"):
return 15407;
case joaat("MP_Gunrunning_Award_009_M"):
case joaat("MP_Gunrunning_Award_009_F"):
return 15414;
case joaat("MP_Gunrunning_Award_010_M"):
case joaat("MP_Gunrunning_Award_010_F"):
return 15415;
case joaat("MP_Gunrunning_Award_011_M"):
case joaat("MP_Gunrunning_Award_011_F"):
return 15399;
case joaat("MP_Gunrunning_Award_012_M"):
case joaat("MP_Gunrunning_Award_012_F"):
return 15404;
case joaat("MP_Gunrunning_Award_014_M"):
case joaat("MP_Gunrunning_Award_014_F"):
return 15392;
case joaat("MP_Gunrunning_Award_015_M"):
case joaat("MP_Gunrunning_Award_015_F"):
return 15390;
case joaat("MP_Gunrunning_Award_016_M"):
case joaat("MP_Gunrunning_Award_016_F"):
return 15402;
case joaat("MP_Gunrunning_Award_017_M"):
case joaat("MP_Gunrunning_Award_017_F"):
return 15416;
default:
}
switch (iParam0){
case joaat("dlc_mp_ie_m_berd_7_0"):
case joaat("dlc_mp_ie_f_berd_7_0"):
return 9443;
default:
}
switch (iParam0){
case joaat("MP_Biker_Tee_022_M"):
case joaat("MP_Biker_Tee_022_F"):
return 9366;
case joaat("MP_Biker_Tee_023_M"):
case joaat("MP_Biker_Tee_023_F"):
return 9367;
case joaat("MP_Biker_Tee_024_M"):
case joaat("MP_Biker_Tee_024_F"):
return 9369;
case joaat("MP_Biker_Tee_025_M"):
case joaat("MP_Biker_Tee_025_F"):
return 9368;
case joaat("MP_Biker_Tee_047_M"):
case joaat("MP_Biker_Tee_047_F"):
return 9365;
case joaat("MP_Biker_Tee_048_M"):
case joaat("MP_Biker_Tee_048_F"):
return 9364;
case joaat("MP_Biker_Tee_049_M"):
case joaat("MP_Biker_Tee_049_F"):
return 9363;
case joaat("MP_Biker_Tee_050_M"):
case joaat("MP_Biker_Tee_050_F"):
return 9362;
case joaat("MP_Biker_Tee_051_M"):
case joaat("MP_Biker_Tee_051_F"):
return 9370;
case joaat("MP_Biker_Tee_052_M"):
case joaat("MP_Biker_Tee_052_F"):
return 9371;
case joaat("MP_Biker_Tee_053_M"):
case joaat("MP_Biker_Tee_053_F"):
return 9372;
case joaat("MP_Biker_Tee_054_M"):
case joaat("MP_Biker_Tee_054_F"):
return 9373;
case joaat("MP_Biker_Tee_055_M"):
case joaat("MP_Biker_Tee_055_F"):
return 9374;
case joaat("MP_Biker_Award_000_M"):
case joaat("MP_Biker_Award_000_F"):
return 9384;
case joaat("MP_Biker_Award_001_M"):
case joaat("MP_Biker_Award_001_F"):
return 9385;
default:
}
switch (iParam0){
case joaat("dlc_mp_biker_m_decl_0_0"):
case joaat("dlc_mp_biker_f_decl_0_0"):
return 9375;
case joaat("dlc_mp_biker_m_decl_0_1"):
case joaat("dlc_mp_biker_f_decl_0_1"):
return 9376;
case joaat("dlc_mp_biker_m_decl_0_2"):
case joaat("dlc_mp_biker_f_decl_0_2"):
return 9377;
case joaat("dlc_mp_biker_m_decl_0_3"):
case joaat("dlc_mp_biker_f_decl_0_3"):
return 9378;
case joaat("dlc_mp_biker_m_decl_0_4"):
case joaat("dlc_mp_biker_f_decl_0_4"):
return 9379;
case joaat("dlc_mp_biker_m_decl_0_5"):
case joaat("dlc_mp_biker_f_decl_0_5"):
return 9380;
case joaat("dlc_mp_biker_m_decl_0_6"):
case joaat("dlc_mp_biker_f_decl_0_6"):
return 9381;
case joaat("dlc_mp_biker_m_decl_0_7"):
case joaat("dlc_mp_biker_f_decl_0_7"):
return 9382;
case joaat("dlc_mp_biker_m_decl_0_8"):
case joaat("dlc_mp_biker_f_decl_0_8"):
return 9383;
default:
}
switch (iParam0){
case joaat("dlc_mp_stunt_m_outfit_e_0"):
case joaat("dlc_mp_stunt_m_phead_11_0"):
case joaat("dlc_mp_stunt_m_phead_12_0"):
case joaat("dlc_mp_stunt_f_outfit_e_0"):
case joaat("dlc_mp_stunt_f_phead_11_0"):
case joaat("dlc_mp_stunt_f_phead_12_0"):
return 7595;
case joaat("dlc_mp_stunt_m_outfit_e_1"):
case joaat("dlc_mp_stunt_m_phead_11_1"):
case joaat("dlc_mp_stunt_m_phead_12_1"):
case joaat("dlc_mp_stunt_f_outfit_e_1"):
case joaat("dlc_mp_stunt_f_phead_11_1"):
case joaat("dlc_mp_stunt_f_phead_12_1"):
return 7596;
case joaat("dlc_mp_stunt_m_outfit_e_2"):
case joaat("dlc_mp_stunt_m_phead_11_2"):
case joaat("dlc_mp_stunt_m_phead_12_2"):
case joaat("dlc_mp_stunt_f_outfit_e_2"):
case joaat("dlc_mp_stunt_f_phead_11_2"):
case joaat("dlc_mp_stunt_f_phead_12_2"):
return 7597;
case joaat("dlc_mp_stunt_m_outfit_e_3"):
case joaat("dlc_mp_stunt_m_phead_11_3"):
case joaat("dlc_mp_stunt_m_phead_12_3"):
case joaat("dlc_mp_stunt_f_outfit_e_3"):
case joaat("dlc_mp_stunt_f_phead_11_3"):
case joaat("dlc_mp_stunt_f_phead_12_3"):
return 7599;
case joaat("dlc_mp_stunt_m_outfit_e_4"):
case joaat("dlc_mp_stunt_m_phead_11_4"):
case joaat("dlc_mp_stunt_m_phead_12_4"):
case joaat("dlc_mp_stunt_f_outfit_e_4"):
case joaat("dlc_mp_stunt_f_phead_11_4"):
case joaat("dlc_mp_stunt_f_phead_12_4"):
return 7600;
case joaat("dlc_mp_stunt_m_outfit_e_5"):
case joaat("dlc_mp_stunt_m_phead_13_0"):
case joaat("dlc_mp_stunt_m_phead_14_0"):
case joaat("dlc_mp_stunt_f_outfit_e_5"):
case joaat("dlc_mp_stunt_f_phead_13_0"):
case joaat("dlc_mp_stunt_f_phead_14_0"):
return 7598;
case joaat("dlc_mp_stunt_m_outfit_e_6"):
case joaat("dlc_mp_stunt_m_phead_13_1"):
case joaat("dlc_mp_stunt_m_phead_14_1"):
case joaat("dlc_mp_stunt_f_outfit_e_6"):
case joaat("dlc_mp_stunt_f_phead_13_1"):
case joaat("dlc_mp_stunt_f_phead_14_1"):
return 7601;
default:
}
switch (iParam0){
case joaat("dlc_mp_exec_f_jbib_15_0"):
case joaat("dlc_mp_exec_f_legs_1_0"):
case joaat("dlc_mp_exec_m_jbib_15_0"):
case joaat("dlc_mp_exec_m_legs_1_0"):
return 7482;
case joaat("dlc_mp_exec_f_jbib_15_1"):
case joaat("dlc_mp_exec_f_legs_1_1"):
case joaat("dlc_mp_exec_m_jbib_15_1"):
case joaat("dlc_mp_exec_m_legs_1_1"):
return 7483;
case joaat("dlc_mp_exec_f_jbib_15_2"):
case joaat("dlc_mp_exec_f_legs_1_2"):
case joaat("dlc_mp_exec_m_jbib_15_2"):
case joaat("dlc_mp_exec_m_legs_1_2"):
return 7484;
case joaat("dlc_mp_exec_f_jbib_15_3"):
case joaat("dlc_mp_exec_f_legs_1_3"):
case joaat("dlc_mp_exec_m_jbib_15_3"):
case joaat("dlc_mp_exec_m_legs_1_3"):
return 7485;
case joaat("dlc_mp_exec_f_jbib_15_4"):
case joaat("dlc_mp_exec_f_legs_1_4"):
case joaat("dlc_mp_exec_m_jbib_15_4"):
case joaat("dlc_mp_exec_m_legs_1_4"):
return 7486;
case joaat("dlc_mp_exec_f_jbib_15_5"):
case joaat("dlc_mp_exec_f_legs_1_5"):
case joaat("dlc_mp_exec_m_jbib_15_5"):
case joaat("dlc_mp_exec_m_legs_1_5"):
return 7487;
case joaat("dlc_mp_exec_f_jbib_15_6"):
case joaat("dlc_mp_exec_f_legs_1_6"):
case joaat("dlc_mp_exec_m_jbib_15_6"):
case joaat("dlc_mp_exec_m_legs_1_6"):
return 7488;
case joaat("dlc_mp_exec_f_jbib_15_7"):
case joaat("dlc_mp_exec_f_legs_1_7"):
case joaat("dlc_mp_exec_m_jbib_15_7"):
case joaat("dlc_mp_exec_m_legs_1_7"):
return 7489;
case joaat("dlc_mp_exec_f_jbib_15_8"):
case joaat("dlc_mp_exec_f_legs_1_8"):
case joaat("dlc_mp_exec_m_jbib_15_8"):
case joaat("dlc_mp_exec_m_legs_1_8"):
return 7490;
case joaat("dlc_mp_exec_f_jbib_15_9"):
case joaat("dlc_mp_exec_f_legs_1_9"):
case joaat("dlc_mp_exec_m_jbib_15_9"):
case joaat("dlc_mp_exec_m_legs_1_9"):
return 7491;
case joaat("dlc_mp_exec_f_jbib_15_10"):
case joaat("dlc_mp_exec_f_legs_1_10"):
case joaat("dlc_mp_exec_m_jbib_15_10"):
case joaat("dlc_mp_exec_m_legs_1_10"):
return 7492;
case joaat("dlc_mp_exec_f_jbib_15_11"):
case joaat("dlc_mp_exec_f_legs_1_11"):
case joaat("dlc_mp_exec_m_jbib_15_11"):
case joaat("dlc_mp_exec_m_legs_1_11"):
return 7493;
case joaat("dlc_mp_exec_f_jbib_15_12"):
case joaat("dlc_mp_exec_f_legs_1_12"):
case joaat("dlc_mp_exec_m_jbib_15_12"):
case joaat("dlc_mp_exec_m_legs_1_12"):
return 7494;
case joaat("dlc_mp_exec_f_jbib_15_13"):
case joaat("dlc_mp_exec_f_legs_1_13"):
case joaat("dlc_mp_exec_m_jbib_15_13"):
case joaat("dlc_mp_exec_m_legs_1_13"):
return 7495;
case joaat("dlc_mp_exec_f_jbib_16_0"):
case joaat("dlc_mp_exec_m_jbib_16_0"):
return 7515;
case joaat("dlc_mp_exec_f_jbib_16_1"):
case joaat("dlc_mp_exec_m_jbib_16_1"):
return 7516;
case joaat("dlc_mp_exec_f_jbib_16_2"):
case joaat("dlc_mp_exec_m_jbib_16_2"):
return 7517;
case joaat("dlc_mp_exec_f_jbib_16_3"):
case joaat("dlc_mp_exec_m_jbib_16_3"):
return 7518;
case joaat("dlc_mp_exec_f_jbib_16_4"):
case joaat("dlc_mp_exec_m_jbib_16_4"):
return 7519;
case joaat("dlc_mp_exec_f_jbib_16_5"):
case joaat("dlc_mp_exec_m_jbib_16_5"):
return 7520;
case joaat("dlc_mp_exec_f_jbib_16_6"):
case joaat("dlc_mp_exec_m_jbib_16_6"):
return 7521;
case joaat("dlc_mp_exec_f_jbib_16_7"):
case joaat("dlc_mp_exec_m_jbib_16_7"):
return 7522;
case joaat("dlc_mp_exec_f_jbib_16_8"):
case joaat("dlc_mp_exec_m_jbib_16_8"):
return 7523;
case joaat("dlc_mp_exec_f_jbib_16_9"):
case joaat("dlc_mp_exec_m_jbib_16_9"):
return 7524;
case joaat("dlc_mp_exec_f_jbib_16_10"):
case joaat("dlc_mp_exec_m_jbib_16_10"):
return 7525;
case joaat("dlc_mp_exec_f_jbib_16_11"):
case joaat("dlc_mp_exec_m_jbib_16_11"):
return 7526;
case joaat("dlc_mp_exec_f_jbib_16_12"):
case joaat("dlc_mp_exec_m_jbib_16_12"):
return 7527;
case joaat("dlc_mp_exec_f_jbib_16_13"):
case joaat("dlc_mp_exec_m_jbib_16_13"):
return 7528;
default:
}
switch (iParam0){
case joaat("dlc_mp_low_f_phead_1_0"):
case joaat("dlc_mp_low_m_phead_1_0"):
return 4247;
case joaat("dlc_mp_low_f_phead_1_1"):
case joaat("dlc_mp_low_m_phead_1_1"):
return 4248;
case joaat("dlc_mp_low_f_phead_1_2"):
case joaat("dlc_mp_low_m_phead_1_2"):
return 4249;
case joaat("dlc_mp_low_f_phead_1_3"):
case joaat("dlc_mp_low_m_phead_1_3"):
return 4250;
case joaat("dlc_mp_low_f_phead_1_4"):
case joaat("dlc_mp_low_m_phead_1_4"):
return 4251;
case joaat("dlc_mp_low_f_phead_1_5"):
case joaat("dlc_mp_low_m_phead_1_5"):
return 4252;
case joaat("dlc_mp_low_f_phead_1_6"):
case joaat("dlc_mp_low_m_phead_1_6"):
return 4253;
case joaat("dlc_mp_low_f_phead_1_7"):
case joaat("dlc_mp_low_m_phead_1_7"):
return 4254;
case joaat("dlc_mp_low_f_phead_1_8"):
case joaat("dlc_mp_low_m_phead_1_8"):
return 4255;
case joaat("dlc_mp_low_f_phead_1_9"):
case joaat("dlc_mp_low_m_phead_1_9"):
return 4256;
case 1743008394:
case 1084175393:
return 110;
case -1090232119:
case 787255484:
return 111;
case -1133356123:
case -566366372:
return 112;
default:
}
switch (iParam0){
case 1970268516:
case 2026483804:
case 1831101822:
case 1411612772:
return 4333;
case 1875861023:
case -1385031204:
case -703154335:
case 798340921:
return 4334;
case -1208373599:
case 1656518170:
return 4335;
case -970054678:
case -840010097:
return 3750;
default:
}
switch (iParam0){
case joaat("dlc_mp_ind_f_phead_6_0"):
case joaat("dlc_mp_ind_m_phead_6_0"):
return 3594;
case joaat("dlc_mp_ind_f_phead_6_1"):
case joaat("dlc_mp_ind_m_phead_6_1"):
return 3595;
case joaat("dlc_mp_ind_f_phead_6_2"):
case joaat("dlc_mp_ind_m_phead_6_2"):
return 3596;
case joaat("dlc_mp_ind_f_phead_6_3"):
case joaat("dlc_mp_ind_m_phead_6_3"):
return 3597;
case joaat("dlc_mp_ind_f_phead_6_4"):
case joaat("dlc_mp_ind_m_phead_6_4"):
return 3598;
case joaat("dlc_mp_ind_f_phead_6_5"):
case joaat("dlc_mp_ind_m_phead_6_5"):
return 3599;
default:
}
switch (iParam0){
case joaat("dlc_mp_lts_m_berd_2_0"):
case joaat("dlc_mp_lts_f_berd_2_0"):
return 3616;
case joaat("FM_LTS_M_Tshirt_000"):
case joaat("FM_LTS_F_Tshirt_000"):
return 3615;
case joaat("FM_Hip_M_Retro_010"):
case joaat("FM_Hip_F_Retro_010"):
return 9440;
case joaat("FM_Hip_M_Retro_003"):
case joaat("FM_Hip_F_Retro_003"):
return 9430;
case joaat("FM_Hip_M_Retro_000"):
case joaat("FM_Hip_F_Retro_000"):
return 9426;
case joaat("FM_Hip_M_Retro_001"):
case joaat("FM_Hip_F_Retro_001"):
return 9427;
case joaat("FM_Hip_M_Retro_002"):
case joaat("FM_Hip_F_Retro_002"):
return 9428;
case joaat("FM_Hip_M_Retro_004"):
case joaat("FM_Hip_F_Retro_004"):
return 9431;
case joaat("FM_Hip_M_Retro_005"):
case joaat("FM_Hip_F_Retro_005"):
return 9432;
case joaat("FM_Hip_M_Retro_006"):
case joaat("FM_Hip_F_Retro_006"):
return 9433;
case joaat("FM_Hip_M_Retro_007"):
case joaat("FM_Hip_F_Retro_007"):
return 9439;
case joaat("FM_Hip_M_Retro_008"):
case joaat("FM_Hip_F_Retro_008"):
return 9434;
case joaat("FM_Hip_M_Retro_009"):
case joaat("FM_Hip_F_Retro_009"):
return 9435;
case joaat("FM_Hip_M_Retro_011"):
case joaat("FM_Hip_F_Retro_011"):
return 9436;
case joaat("FM_Hip_M_Retro_012"):
case joaat("FM_Hip_F_Retro_012"):
return 9429;
case joaat("FM_Hip_M_Retro_013"):
case joaat("FM_Hip_F_Retro_013"):
return 9437;
case joaat("FM_Ind_M_Award_000"):
case joaat("FM_Ind_F_Award_000"):
return 3593;
default:
}
return -1;
}

int func_121(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 >=0 && iVar0 < 11){
if(func_122()){
return Global_262145.f_32003[iVar0];
}else{
return Global_262145.f_31991[iVar0];
}}
return -1;
}


bool func_122(){
return func_123(PLAYER::PLAYER_ID());
}

int func_123(bool bParam0){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(bParam0))==joaat("mp_f_freemode_01")){
return 1;
}
return 0;
}

int func_124(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
iVar1=-99;
iVar2=-1;
iVar0=func_121(iParam0);
if(iVar0==-1){
return 1;
}
if(func_122()){
iVar3=func_184(iVar0);
if(iVar3 !=-1){
iVar1=func_180(joaat("mp_f_freemode_01"), iVar0, iVar3, 4);
}
iVar2=func_179(iVar0, 4);
if((func_178(func_120(iVar0), -1) || (iVar2 !=-1 && func_174(iVar2, -1))) || (iVar1 !=-99 && func_125(joaat("mp_f_freemode_01"), iVar3, iVar1))){
return 1;
}}else{
iVar4=func_184(iVar0);
if(iVar4 !=-1){
iVar1=func_180(joaat("mp_m_freemode_01"), iVar0, iVar4, 3);
}
iVar2=func_179(iVar0, 3);
if((func_178(func_120(iVar0), -1) || (iVar2 !=-1 && func_174(iVar2, -1))) || (iVar1 !=-99 && func_125(joaat("mp_m_freemode_01"), iVar4, iVar1))){
return 1;
}}
return 0;
}


var func__125(int iParam0, int iParam1, int iParam2){
Global_78472[1 /*14*/]={
func_126(iParam0, iParam1, iParam2, -1) 
};
return MISC::IS_BIT_SET(Global_78472[1 /*14*/].f_6, 2);
}
struct<14> func_126(int iParam0, int iParam1, int iParam2, int iParam3){
func_173();
if(iParam0==joaat("mp_m_freemode_01")){
func_157(iParam1, iParam2, iParam3);
}elseif(iParam0==joaat("mp_f_freemode_01")){
func_127(iParam1, iParam2, iParam3);
}
return Global_78472[0 /*14*/];
}


void func_127(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case 2:
func_156(iParam1, iParam2);
break;
case 11:
func_155(iParam1, iParam2);
break;
case 8:
func_154(iParam1, iParam2);
break;
case 9:
func_153(iParam1, iParam2);
break;
case 3:
func_152(iParam1, iParam2);
break;
case 4:
func_151(iParam1, iParam2);
break;
case 6:
func_150(iParam1, iParam2);
break;
case 1:
func_149(iParam1, iParam2);
break;
case 7:
func_148(iParam1, iParam2);
break;
case 10:
func_147(iParam1, iParam2);
break;
case 14:
func_146(iParam1, iParam2);
break;
case 12:
func_145(iParam1, iParam2);
break;
case 5:
func_144(iParam1, iParam2);
break;
case 0:
func_141(iParam1, iParam2);
break;
case 13:
func_128(iParam1);
break;
}}


void func_128(int iParam0){
bool bVar0;
int iVar1;
char* sVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=13;
switch (iParam0){
case 31:
iVar3=0;
iVar4=0;
break;
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=0;
iVar4=0;
break;
case 2:
iVar3=0;
iVar4=0;
break;
case 3:
iVar3=0;
iVar4=0;
break;
case 4:
iVar3=0;
iVar4=0;
break;
case 5:
iVar3=0;
iVar4=0;
break;
case 6:
iVar3=0;
iVar4=0;
break;
case 7:
iVar3=0;
iVar4=0;
break;
case 8:
iVar3=0;
iVar4=0;
break;
case 9:
iVar3=0;
iVar4=0;
break;
case 10:
iVar3=0;
iVar4=0;
break;
case 11:
iVar3=0;
iVar4=0;
break;
case 12:
iVar3=0;
iVar4=0;
break;
case 13:
iVar3=0;
iVar4=0;
break;
case 14:
iVar3=0;
iVar4=0;
break;
case 15:
iVar3=0;
iVar4=0;
break;
case 16:
iVar3=0;
iVar4=0;
break;
case 17:
iVar3=0;
iVar4=0;
break;
case 18:
iVar3=0;
iVar4=0;
break;
case 19:
iVar3=0;
iVar4=0;
break;
case 20:
iVar3=0;
iVar4=0;
break;
case 21:
iVar3=0;
iVar4=0;
break;
case 22:
iVar3=0;
iVar4=0;
break;
case 23:
iVar3=0;
iVar4=0;
break;
}
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_129(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
int iVar0;
int iVar1;
uParam0->f_6=0;
*uParam0=iParam9;
uParam0->f_1=(iParam2 % 32);
uParam0->f_2=(iParam2 / 32);
uParam0->f_3=iParam4;
uParam0->f_4=iParam5;
uParam0->f_7=iParam6;
StringCopy(&(uParam0->f_8), sParam3, 16);
uParam0->f_13=iParam8;
uParam0->f_12=func_140(iParam8);
if((uParam0->f_2 >=10 && uParam0->f_5 >=0) && uParam0->f_5 < 3){
if(!bParam10){
}
uParam0->f_2=0;
}
if(MISC::GET_HASH_KEY(sParam3) !=MISC::GET_HASH_KEY("NO_LABEL")){}
if(bParam7){
MISC::SET_BIT(&(uParam0->f_6), 3);
}
if(bParam10){
MISC::SET_BIT(&(uParam0->f_6), false);
if(uParam0->f_5 >=0 && uParam0->f_5 < 3){
MISC::SET_BIT(&(uParam0->f_6), 5);
}
MISC::SET_BIT(&(uParam0->f_6), true);
MISC::SET_BIT(&(uParam0->f_6), 2);
MISC::SET_BIT(&(uParam0->f_6), 6);
if(func_139(14)){
return;
}
if(iParam1==1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("rebreather"), 0)){
MISC::SET_BIT(&(uParam0->f_6), 7);
}}
if(iParam1==12){
if(!func_137(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_137(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}elseif(iParam1==13){
}elseif(iParam1==14){
if(!func_137(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_137(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
if(!func_137(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_137(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}
if(FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589)){
MISC::CLEAR_BIT(&(uParam0->f_6), true);
MISC::CLEAR_BIT(&(uParam0->f_6), false);
}}elseif(uParam0->f_5 >=0 && uParam0->f_5 < 3){
MISC::SET_BIT(&(uParam0->f_6), false);
MISC::SET_BIT(&(uParam0->f_6), 5);
if(func_136(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
if(func_136(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(!func_136(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
MISC::SET_BIT(&(uParam0->f_6), false);
if((((((((((iParam1==11 || iParam1==4) || iParam1==6) || iParam1==1) || iParam1==14) || iParam1==2) || iParam1==8) || iParam1==9) || iParam1==10) || iParam1==7) || iParam1==12){
if(func_139(14)){
return;
}
iVar0=func_132(func_135(iParam1, uParam0->f_2), Global_78469);
if(MISC::IS_BIT_SET(iVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
iVar0=func_132(func_131(iParam1, uParam0->f_2), Global_78469);
if(MISC::IS_BIT_SET(iVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(func_130(iParam1, uParam0->f_2, &iVar1)){
iVar0=func_132(iVar1, Global_78469);
if(!MISC::IS_BIT_SET(iVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}}else{
MISC::SET_BIT(&(uParam0->f_6), true);
MISC::SET_BIT(&(uParam0->f_6), 2);
}}
if(iParam1==14){
if(iParam4==-1){
MISC::SET_BIT(&(uParam0->f_6), true);
MISC::SET_BIT(&(uParam0->f_6), 2);
}}}


bool func_130(int iParam0, int iParam1, var uParam2){
*uParam2=979;
switch (iParam1){
case 0:
switch (iParam0){
case 2:
*uParam2=980;
break;
case 3:
*uParam2=1430;
break;
case 4:
*uParam2=996;
break;
case 6:
*uParam2=1004;
break;
case 8:
*uParam2=1431;
break;
case 9:
*uParam2=1439;
break;
case 10:
*uParam2=1441;
break;
case 1:
*uParam2=1012;
break;
case 7:
*uParam2=1442;
break;
case 11:
*uParam2=988;
break;
case 14:
*uParam2=1020;
break;
case 12:
*uParam2=1031;
break;
}
break;
case 1:
switch (iParam0){
case 2:
*uParam2=981;
break;
case 4:
*uParam2=997;
break;
case 6:
*uParam2=1005;
break;
case 8:
*uParam2=1432;
break;
case 9:
*uParam2=1440;
break;
case 7:
*uParam2=1443;
break;
case 11:
*uParam2=989;
break;
case 14:
*uParam2=1021;
break;
}
break;
case 2:
switch (iParam0){
case 2:
*uParam2=982;
break;
case 4:
*uParam2=998;
break;
case 6:
*uParam2=1006;
break;
case 8:
*uParam2=1433;
break;
case 7:
*uParam2=1444;
break;
case 11:
*uParam2=990;
break;
case 14:
*uParam2=1022;
break;
}
break;
case 3:
switch (iParam0){
case 4:
*uParam2=999;
break;
case 6:
*uParam2=1007;
break;
case 8:
*uParam2=1434;
break;
case 11:
*uParam2=991;
break;
case 14:
*uParam2=1023;
break;
}
break;
case 4:
switch (iParam0){
case 4:
*uParam2=1000;
break;
case 6:
*uParam2=1008;
break;
case 8:
*uParam2=1435;
break;
case 11:
*uParam2=992;
break;
case 14:
*uParam2=1024;
break;
}
break;
case 5:
switch (iParam0){
case 4:
*uParam2=1001;
break;
case 6:
*uParam2=1009;
break;
case 8:
*uParam2=1436;
break;
case 11:
*uParam2=993;
break;
case 14:
*uParam2=1025;
break;
}
break;
case 6:
switch (iParam0){
case 4:
*uParam2=1002;
break;
case 6:
*uParam2=1010;
break;
case 8:
*uParam2=1437;
break;
case 11:
*uParam2=994;
break;
case 14:
*uParam2=1026;
break;
}
break;
case 7:
switch (iParam0){
case 4:
*uParam2=1003;
break;
case 6:
*uParam2=1011;
break;
case 8:
*uParam2=1438;
break;
case 11:
*uParam2=995;
break;
case 14:
*uParam2=1027;
break;
}
break;
case 8:
switch (iParam0){
case 14:
*uParam2=1028;
break;
}
break;
case 9:
switch (iParam0){
case 14:
*uParam2=1029;
break;
}
break;
case 10:
switch (iParam0){
case 14:
*uParam2=1030;
break;
}
break;
}
return *uParam2 !=979;
}

int func_131(int iParam0, int iParam1){
switch (iParam1){
case 0:
switch (iParam0){
case 2:
return 928;
break;
case 3:
return 1415;
break;
case 4:
return 944;
break;
case 6:
return 952;
break;
case 8:
return 1416;
break;
case 9:
return 1424;
break;
case 10:
return 1426;
break;
case 1:
return 960;
break;
case 7:
return 1427;
break;
case 11:
return 936;
break;
case 14:
return 968;
break;
case 12:
return 979;
break;
}
break;
case 1:
switch (iParam0){
case 2:
return 929;
break;
case 4:
return 945;
break;
case 6:
return 953;
break;
case 8:
return 1417;
break;
case 9:
return 1425;
break;
case 7:
return 1428;
break;
case 11:
return 937;
break;
case 14:
return 969;
break;
}
break;
case 2:
switch (iParam0){
case 2:
return 930;
break;
case 4:
return 946;
break;
case 6:
return 954;
break;
case 8:
return 1418;
break;
case 7:
return 1429;
break;
case 11:
return 938;
break;
case 14:
return 970;
break;
}
break;
case 3:
switch (iParam0){
case 4:
return 947;
break;
case 6:
return 955;
break;
case 8:
return 1419;
break;
case 11:
return 939;
break;
case 14:
return 971;
break;
}
break;
case 4:
switch (iParam0){
case 4:
return 948;
break;
case 6:
return 956;
break;
case 8:
return 1420;
break;
case 11:
return 940;
break;
case 14:
return 972;
break;
}
break;
case 5:
switch (iParam0){
case 4:
return 949;
break;
case 6:
return 957;
break;
case 8:
return 1421;
break;
case 11:
return 941;
break;
case 14:
return 973;
break;
}
break;
case 6:
switch (iParam0){
case 4:
return 950;
break;
case 6:
return 958;
break;
case 8:
return 1422;
break;
case 11:
return 942;
break;
case 14:
return 974;
break;
}
break;
case 7:
switch (iParam0){
case 4:
return 951;
break;
case 6:
return 959;
break;
case 8:
return 1423;
break;
case 11:
return 943;
break;
case 14:
return 975;
break;
}
break;
case 8:
switch (iParam0){
case 14:
return 976;
break;
}
break;
case 9:
switch (iParam0){
case 14:
return 977;
break;
}
break;
case 10:
switch (iParam0){
case 14:
return 978;
break;
}
break;
}
return 936;
}

int func_132(int iParam0, int iParam1){
var uVar0;
var uVar1;
if(iParam0 !=14385){
uVar0=func_133(iParam0, iParam1);
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


var func__133(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_134(uParam1));
}

int func_134(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_22();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}

int func_135(int iParam0, int iParam1){
switch (iParam1){
case 0:
switch (iParam0){
case 2:
return 876;
break;
case 3:
return 1400;
break;
case 4:
return 892;
break;
case 6:
return 900;
break;
case 8:
return 1401;
break;
case 9:
return 1409;
break;
case 10:
return 1411;
break;
case 1:
return 908;
break;
case 7:
return 1412;
break;
case 11:
return 884;
break;
case 14:
return 916;
break;
case 12:
return 927;
break;
}
break;
case 1:
switch (iParam0){
case 2:
return 877;
break;
case 4:
return 893;
break;
case 6:
return 901;
break;
case 8:
return 1402;
break;
case 9:
return 1410;
break;
case 7:
return 1413;
break;
case 11:
return 885;
break;
case 14:
return 917;
break;
}
break;
case 2:
switch (iParam0){
case 2:
return 878;
break;
case 4:
return 894;
break;
case 6:
return 902;
break;
case 8:
return 1403;
break;
case 7:
return 1414;
break;
case 11:
return 886;
break;
case 14:
return 918;
break;
}
break;
case 3:
switch (iParam0){
case 4:
return 895;
break;
case 6:
return 903;
break;
case 8:
return 1404;
break;
case 11:
return 887;
break;
case 14:
return 919;
break;
}
break;
case 4:
switch (iParam0){
case 4:
return 896;
break;
case 6:
return 904;
break;
case 8:
return 1405;
break;
case 11:
return 888;
break;
case 14:
return 920;
break;
}
break;
case 5:
switch (iParam0){
case 4:
return 897;
break;
case 6:
return 905;
break;
case 8:
return 1406;
break;
case 11:
return 889;
break;
case 14:
return 921;
break;
}
break;
case 6:
switch (iParam0){
case 4:
return 898;
break;
case 6:
return 906;
break;
case 8:
return 1407;
break;
case 11:
return 890;
break;
case 14:
return 922;
break;
}
break;
case 7:
switch (iParam0){
case 4:
return 899;
break;
case 6:
return 907;
break;
case 8:
return 1408;
break;
case 11:
return 891;
break;
case 14:
return 923;
break;
}
break;
case 8:
switch (iParam0){
case 14:
return 924;
break;
}
break;
case 9:
switch (iParam0){
case 14:
return 925;
break;
}
break;
case 10:
switch (iParam0){
case 14:
return 926;
break;
}
break;
}
return 884;
}

int func_136(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6){
if(iParam0==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/][iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/][iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/][iParam3], bParam4);
}elseif(iParam0==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_4[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_4[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_4[iParam3], bParam4);
}elseif(iParam0==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_8[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_8[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_8[iParam3], bParam4);
}elseif(iParam0==3){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_12[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_12[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_12[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_16[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_16[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_16[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_20[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_20[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_20[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_24[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_24[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_24[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_28[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_28[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_28[iParam3], bParam4);
}elseif(iParam2==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_32[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_32[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_32[iParam3], bParam4);
}elseif(iParam2==6){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_36[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_36[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_36[iParam3], bParam4);
}elseif(iParam2==7){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_40[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_40[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_40[iParam3], bParam4);
}elseif(iParam2==8){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_44[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_44[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_44[iParam3], bParam4);
}elseif(iParam2==9){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_48[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_48[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_48[iParam3], bParam4);
}}elseif(iParam0==4){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_52[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_52[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_52[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_56[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_56[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_56[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_60[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_60[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_60[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_64[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_64[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_64[iParam3], bParam4);
}}elseif(iParam0==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_68[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_68[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_68[iParam3], bParam4);
}elseif(iParam0==6){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_72[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_72[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_72[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_76[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_76[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_76[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_80[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_80[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_80[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_84[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_84[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_84[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_88[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_88[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_88[iParam3], bParam4);
}}elseif(iParam0==7){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_92[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_92[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_92[iParam3], bParam4);
}elseif(iParam0==8){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_96[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_96[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_96[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_100[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_100[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_100[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_104[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_104[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_104[iParam3], bParam4);
}}elseif(iParam0==9){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_108[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_108[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_108[iParam3], bParam4);
}elseif(iParam0==10){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_112[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_112[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_112[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_116[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_116[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_116[iParam3], bParam4);
}}elseif(iParam0==11){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_120[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_120[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_120[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_124[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_124[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_124[iParam3], bParam4);
}}elseif(iParam0==12){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_128[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_128[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_128[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_132[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_132[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_132[iParam3], bParam4);
}}elseif(iParam0==13){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_136[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_136[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_136[iParam3], bParam4);
}elseif(iParam0==14){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_140[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_140[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_140[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_144[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_144[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_144[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_148[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_148[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_148[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_152[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_152[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_152[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_156[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_156[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_156[iParam3], bParam4);
}elseif(iParam2==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_160[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_160[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_160[iParam3], bParam4);
}}
return 0;
}

int func_137(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4){
int iVar0;
var uVar1;
int iVar2;
int iVar3;
iVar0=Global_78469;
if(iParam4 !=-1){
iVar0=iParam4;
}
if(func_138(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3)){
iVar3=func_132(iVar2, iVar0);
return MISC::IS_BIT_SET(iVar3, uVar1);
}
return 0;
}


bool func_138(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
int iVar0;
*uParam2=14385;
if((bParam4 && Global_4539490) || (!bParam4 && bParam5)){
switch (iParam1){
case 1:
switch (iParam0){
case joaat("dlc_mp_stunt_m_phead_15_0"):
case joaat("dlc_mp_stunt_m_phead_0_0"):
*uParam2=972;
*uParam3=19;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_1"):
case joaat("dlc_mp_stunt_m_phead_0_1"):
*uParam2=972;
*uParam3=20;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_2"):
case joaat("dlc_mp_stunt_m_phead_0_2"):
*uParam2=972;
*uParam3=21;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_3"):
case joaat("dlc_mp_stunt_m_phead_0_3"):
*uParam2=972;
*uParam3=22;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_4"):
case joaat("dlc_mp_stunt_m_phead_0_4"):
*uParam2=972;
*uParam3=23;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_5"):
case joaat("dlc_mp_stunt_m_phead_0_5"):
*uParam2=972;
*uParam3=24;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_6"):
case joaat("dlc_mp_stunt_m_phead_0_6"):
*uParam2=972;
*uParam3=25;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_7"):
case joaat("dlc_mp_stunt_m_phead_0_7"):
*uParam2=972;
*uParam3=26;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_0"):
case joaat("dlc_mp_biker_m_special_2_0"):
case joaat("dlc_mp_biker_m_special_4_0"):
*uParam2=936;
*uParam3=0;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_1"):
case joaat("dlc_mp_biker_m_special_2_1"):
case joaat("dlc_mp_biker_m_special_4_1"):
*uParam2=936;
*uParam3=1;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_2"):
case joaat("dlc_mp_biker_m_special_2_2"):
case joaat("dlc_mp_biker_m_special_4_2"):
*uParam2=936;
*uParam3=2;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_3"):
case joaat("dlc_mp_biker_m_special_2_3"):
case joaat("dlc_mp_biker_m_special_4_3"):
*uParam2=936;
*uParam3=3;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_4"):
case joaat("dlc_mp_biker_m_special_2_4"):
case joaat("dlc_mp_biker_m_special_4_4"):
*uParam2=936;
*uParam3=4;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_5"):
case joaat("dlc_mp_biker_m_special_2_5"):
case joaat("dlc_mp_biker_m_special_4_5"):
*uParam2=936;
*uParam3=5;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_7"):
case joaat("dlc_mp_biker_m_special_2_7"):
case joaat("dlc_mp_biker_m_special_4_7"):
*uParam2=936;
*uParam3=7;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_8"):
case joaat("dlc_mp_biker_m_special_2_8"):
case joaat("dlc_mp_biker_m_special_4_8"):
*uParam2=936;
*uParam3=8;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_11"):
case joaat("dlc_mp_biker_m_special_2_11"):
case joaat("dlc_mp_biker_m_special_4_11"):
*uParam2=936;
*uParam3=11;
return 1;
break;
}
break;
case 2:
switch (iParam0){
case joaat("dlc_mp_stunt_m_phead_15_0"):
case joaat("dlc_mp_stunt_m_phead_0_0"):
*uParam2=1024;
*uParam3=19;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_1"):
case joaat("dlc_mp_stunt_m_phead_0_1"):
*uParam2=1024;
*uParam3=20;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_2"):
case joaat("dlc_mp_stunt_m_phead_0_2"):
*uParam2=1024;
*uParam3=21;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_3"):
case joaat("dlc_mp_stunt_m_phead_0_3"):
*uParam2=1024;
*uParam3=22;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_4"):
case joaat("dlc_mp_stunt_m_phead_0_4"):
*uParam2=1024;
*uParam3=23;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_5"):
case joaat("dlc_mp_stunt_m_phead_0_5"):
*uParam2=1024;
*uParam3=24;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_6"):
case joaat("dlc_mp_stunt_m_phead_0_6"):
*uParam2=1024;
*uParam3=25;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_7"):
case joaat("dlc_mp_stunt_m_phead_0_7"):
*uParam2=1024;
*uParam3=26;
return 1;
break;
}
break;
}}else{
switch (iParam1){
case 1:
switch (iParam0){
case joaat("dlc_mp_stunt_f_phead_15_0"):
case joaat("dlc_mp_stunt_f_phead_0_0"):
*uParam2=972;
*uParam3=19;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_1"):
case joaat("dlc_mp_stunt_f_phead_0_1"):
*uParam2=972;
*uParam3=20;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_2"):
case joaat("dlc_mp_stunt_f_phead_0_2"):
*uParam2=972;
*uParam3=21;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_3"):
case joaat("dlc_mp_stunt_f_phead_0_3"):
*uParam2=972;
*uParam3=22;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_4"):
case joaat("dlc_mp_stunt_f_phead_0_4"):
*uParam2=972;
*uParam3=23;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_5"):
case joaat("dlc_mp_stunt_f_phead_0_5"):
*uParam2=972;
*uParam3=24;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_6"):
case joaat("dlc_mp_stunt_f_phead_0_6"):
*uParam2=972;
*uParam3=25;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_7"):
case joaat("dlc_mp_stunt_f_phead_0_7"):
*uParam2=972;
*uParam3=26;
return 1;
break;
}
break;
case 2:
switch (iParam0){
case joaat("dlc_mp_stunt_f_phead_15_0"):
case joaat("dlc_mp_stunt_f_phead_0_0"):
*uParam2=1024;
*uParam3=19;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_1"):
case joaat("dlc_mp_stunt_f_phead_0_1"):
*uParam2=1024;
*uParam3=20;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_2"):
case joaat("dlc_mp_stunt_f_phead_0_2"):
*uParam2=1024;
*uParam3=21;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_3"):
case joaat("dlc_mp_stunt_f_phead_0_3"):
*uParam2=1024;
*uParam3=22;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_4"):
case joaat("dlc_mp_stunt_f_phead_0_4"):
*uParam2=1024;
*uParam3=23;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_5"):
case joaat("dlc_mp_stunt_f_phead_0_5"):
*uParam2=1024;
*uParam3=24;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_6"):
case joaat("dlc_mp_stunt_f_phead_0_6"):
*uParam2=1024;
*uParam3=25;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_7"):
case joaat("dlc_mp_stunt_f_phead_0_7"):
*uParam2=1024;
*uParam3=26;
return 1;
break;
}
break;
}}
iVar0=-1;
if(bParam4){
if(Global_4539490){
iVar0=PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}else{
iVar0=PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}}elseif(bParam5){
iVar0=PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}else{
iVar0=PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}
if(iVar0==-1){
return 0;
}
switch (iParam1){
case 1:
switch (floor((to_float(iVar0) / 32f))){
case 0:
*uParam2=1761;
break;
case 1:
*uParam2=1762;
break;
case 2:
*uParam2=1763;
break;
case 3:
*uParam2=1764;
break;
case 4:
*uParam2=1765;
break;
case 5:
*uParam2=1766;
break;
case 6:
*uParam2=1773;
break;
case 7:
*uParam2=1774;
break;
case 8:
*uParam2=1775;
break;
case 9:
*uParam2=1776;
break;
case 10:
*uParam2=1777;
break;
case 11:
*uParam2=1778;
break;
case 12:
*uParam2=1779;
break;
case 13:
*uParam2=1787;
break;
case 14:
*uParam2=1788;
break;
case 15:
*uParam2=1889;
break;
case 16:
*uParam2=1890;
break;
case 17:
*uParam2=1921;
break;
case 18:
*uParam2=1935;
break;
case 19:
*uParam2=1936;
break;
case 20:
*uParam2=1937;
break;
case 21:
*uParam2=1938;
break;
case 22:
*uParam2=1939;
break;
case 23:
*uParam2=2043;
break;
case 24:
*uParam2=2044;
break;
case 25:
*uParam2=2070;
break;
case 26:
*uParam2=2071;
break;
case 27:
*uParam2=2072;
break;
case 28:
*uParam2=2073;
break;
case 29:
*uParam2=2074;
break;
case 30:
*uParam2=2075;
break;
case 31:
*uParam2=2076;
break;
case 32:
*uParam2=2077;
break;
case 33:
*uParam2=2078;
break;
case 34:
*uParam2=2079;
break;
case 35:
*uParam2=2326;
break;
case 36:
*uParam2=2327;
break;
case 37:
*uParam2=2391;
break;
case 38:
*uParam2=2392;
break;
case 39:
*uParam2=2393;
break;
case 40:
*uParam2=2394;
break;
case 41:
*uParam2=2453;
break;
case 42:
*uParam2=2454;
break;
case 43:
*uParam2=2455;
break;
case 44:
*uParam2=2456;
break;
case 45:
*uParam2=2457;
break;
case 46:
*uParam2=2458;
break;
case 47:
*uParam2=2459;
break;
case 48:
*uParam2=2460;
break;
case 49:
*uParam2=2461;
break;
case 50:
*uParam2=2462;
break;
case 51:
*uParam2=2592;
break;
case 52:
*uParam2=2593;
break;
case 53:
*uParam2=2594;
break;
case 54:
*uParam2=2595;
break;
case 55:
*uParam2=2596;
break;
case 56:
*uParam2=2597;
break;
case 57:
*uParam2=2598;
break;
case 58:
*uParam2=2599;
break;
case 59:
*uParam2=2600;
break;
case 60:
*uParam2=2601;
break;
case 61:
*uParam2=2602;
break;
case 62:
*uParam2=3199;
break;
case 63:
*uParam2=3200;
break;
case 64:
*uParam2=3201;
break;
case 65:
*uParam2=3202;
break;
case 66:
*uParam2=3203;
break;
case 67:
*uParam2=3204;
break;
case 68:
*uParam2=3672;
break;
case 69:
*uParam2=3673;
break;
case 70:
*uParam2=3674;
break;
case 71:
*uParam2=3675;
break;
case 72:
*uParam2=3676;
break;
case 73:
*uParam2=3677;
break;
case 74:
*uParam2=3678;
break;
case 75:
*uParam2=3679;
break;
case 76:
*uParam2=3680;
break;
case 77:
*uParam2=3681;
break;
case 78:
*uParam2=3795;
break;
case 79:
*uParam2=3796;
break;
case 80:
*uParam2=3797;
break;
case 81:
*uParam2=3798;
break;
case 82:
*uParam2=3799;
break;
case 83:
*uParam2=3800;
break;
case 84:
*uParam2=3801;
break;
case 85:
*uParam2=3802;
break;
case 86:
*uParam2=3905;
break;
case 87:
*uParam2=3906;
break;
case 88:
*uParam2=3907;
break;
case 89:
*uParam2=5340;
break;
case 90:
*uParam2=5341;
break;
case 91:
*uParam2=5342;
break;
case 92:
*uParam2=5343;
break;
case 93:
*uParam2=5344;
break;
case 94:
*uParam2=5345;
break;
case 95:
*uParam2=5346;
break;
case 96:
*uParam2=5347;
break;
case 97:
*uParam2=5348;
break;
case 98:
*uParam2=5349;
break;
case 99:
*uParam2=5350;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 100:
*uParam2=5351;
break;
case 101:
*uParam2=5397;
break;
case 102:
*uParam2=5398;
break;
case 103:
*uParam2=5399;
break;
case 104:
*uParam2=5400;
break;
case 105:
*uParam2=5401;
break;
case 106:
*uParam2=5402;
break;
case 107:
*uParam2=5403;
break;
case 108:
*uParam2=5404;
break;
case 109:
*uParam2=5405;
break;
case 110:
*uParam2=5406;
break;
case 111:
*uParam2=5407;
break;
case 112:
*uParam2=5408;
break;
case 113:
*uParam2=5409;
break;
case 114:
*uParam2=5410;
break;
case 115:
*uParam2=5411;
break;
case 116:
*uParam2=5412;
break;
case 117:
*uParam2=5413;
break;
case 118:
*uParam2=5414;
break;
case 119:
*uParam2=5415;
break;
case 120:
*uParam2=5416;
break;
case 121:
*uParam2=5417;
break;
case 122:
*uParam2=5418;
break;
case 123:
*uParam2=5419;
break;
case 124:
*uParam2=6125;
break;
case 125:
*uParam2=6126;
break;
case 126:
*uParam2=6127;
break;
case 127:
*uParam2=6128;
break;
case 128:
*uParam2=6129;
break;
case 129:
*uParam2=6130;
break;
case 130:
*uParam2=6131;
break;
case 131:
*uParam2=6132;
break;
case 132:
*uParam2=6133;
break;
case 133:
*uParam2=6134;
break;
case 134:
*uParam2=6135;
break;
case 135:
*uParam2=6136;
break;
case 136:
*uParam2=6137;
break;
case 137:
*uParam2=6138;
break;
case 138:
*uParam2=6139;
break;
case 139:
*uParam2=6438;
break;
case 140:
*uParam2=6439;
break;
case 141:
*uParam2=6440;
break;
case 142:
*uParam2=6441;
break;
case 143:
*uParam2=6442;
break;
case 144:
*uParam2=6443;
break;
case 145:
*uParam2=6444;
break;
case 146:
*uParam2=6445;
break;
case 147:
*uParam2=6446;
break;
case 148:
*uParam2=6447;
break;
case 149:
*uParam2=6448;
break;
case 150:
*uParam2=6449;
break;
case 151:
*uParam2=6450;
break;
case 152:
*uParam2=6451;
break;
case 153:
*uParam2=6452;
break;
case 154:
*uParam2=7269;
break;
case 155:
*uParam2=7270;
break;
case 156:
*uParam2=7271;
break;
case 157:
*uParam2=7272;
break;
case 158:
*uParam2=7273;
break;
case 159:
*uParam2=7274;
break;
case 160:
*uParam2=7275;
break;
case 161:
*uParam2=7882;
break;
case 162:
*uParam2=7883;
break;
case 163:
*uParam2=7884;
break;
case 164:
*uParam2=7885;
break;
case 165:
*uParam2=7886;
break;
case 166:
*uParam2=7887;
break;
case 167:
*uParam2=7888;
break;
case 168:
*uParam2=7889;
break;
case 169:
*uParam2=7890;
break;
case 170:
*uParam2=7891;
break;
case 171:
*uParam2=7892;
break;
case 172:
*uParam2=7893;
break;
case 173:
*uParam2=7894;
break;
case 174:
*uParam2=7895;
break;
case 175:
*uParam2=7896;
break;
case 176:
*uParam2=8302;
break;
case 177:
*uParam2=8303;
break;
case 178:
*uParam2=8304;
break;
case 179:
*uParam2=8305;
break;
case 180:
*uParam2=8306;
break;
case 181:
*uParam2=8307;
break;
case 182:
*uParam2=8308;
break;
case 183:
*uParam2=8309;
break;
case 184:
*uParam2=8310;
break;
case 185:
*uParam2=8311;
break;
case 186:
*uParam2=8312;
break;
case 187:
*uParam2=8313;
break;
case 188:
*uParam2=8314;
break;
case 189:
*uParam2=8315;
break;
case 190:
*uParam2=8316;
break;
case 191:
*uParam2=8317;
break;
case 192:
*uParam2=8318;
break;
case 193:
*uParam2=8319;
break;
case 194:
*uParam2=8320;
break;
case 195:
*uParam2=8321;
break;
case 196:
*uParam2=8322;
break;
case 197:
*uParam2=8323;
break;
case 198:
*uParam2=8324;
break;
case 199:
*uParam2=8325;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 200:
*uParam2=8326;
break;
case 201:
*uParam2=8941;
break;
case 202:
*uParam2=8942;
break;
case 203:
*uParam2=8943;
break;
case 204:
*uParam2=8944;
break;
case 205:
*uParam2=8945;
break;
case 206:
*uParam2=9424;
break;
case 207:
*uParam2=9425;
break;
case 208:
*uParam2=9426;
break;
case 209:
*uParam2=9427;
break;
case 210:
*uParam2=9428;
break;
case 211:
*uParam2=9429;
break;
case 212:
*uParam2=9430;
break;
case 213:
*uParam2=9431;
break;
case 214:
*uParam2=9432;
break;
case 215:
*uParam2=9433;
break;
case 216:
*uParam2=9434;
break;
case 217:
*uParam2=9435;
break;
case 218:
*uParam2=9436;
break;
case 219:
*uParam2=9437;
break;
case 220:
*uParam2=9438;
break;
case 221:
*uParam2=9439;
break;
case 222:
*uParam2=9440;
break;
case 223:
*uParam2=9441;
break;
case 224:
*uParam2=9442;
break;
case 225:
*uParam2=9443;
break;
case 226:
*uParam2=9444;
break;
case 227:
*uParam2=9445;
break;
case 228:
*uParam2=9446;
break;
case 229:
*uParam2=9447;
break;
case 230:
*uParam2=9448;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 231:
*uParam2=10303;
break;
case 232:
*uParam2=10304;
break;
case 233:
*uParam2=10305;
break;
case 234:
*uParam2=10306;
break;
case 235:
*uParam2=10307;
break;
case 236:
*uParam2=10308;
break;
case 237:
*uParam2=10309;
break;
case 238:
*uParam2=10310;
break;
case 239:
*uParam2=10311;
break;
case 240:
*uParam2=10312;
break;
case 241:
*uParam2=10313;
break;
case 242:
*uParam2=10314;
break;
case 243:
*uParam2=10315;
break;
case 244:
*uParam2=10316;
break;
case 245:
*uParam2=10317;
break;
case 246:
*uParam2=10318;
break;
case 247:
*uParam2=10319;
break;
case 248:
*uParam2=10320;
break;
case 249:
*uParam2=10321;
break;
case 250:
*uParam2=10322;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 251:
*uParam2=10419;
break;
case 252:
*uParam2=10420;
break;
case 253:
*uParam2=10421;
break;
case 254:
*uParam2=10422;
break;
case 255:
*uParam2=10423;
break;
case 256:
*uParam2=10424;
break;
case 257:
*uParam2=10425;
break;
case 258:
*uParam2=10426;
break;
case 259:
*uParam2=10427;
break;
case 260:
*uParam2=10428;
break;
case 261:
*uParam2=11845;
break;
case 262:
*uParam2=11846;
break;
case 263:
*uParam2=11847;
break;
case 264:
*uParam2=11848;
break;
case 265:
*uParam2=11849;
break;
case 266:
*uParam2=11850;
break;
case 267:
*uParam2=11851;
break;
case 268:
*uParam2=11852;
break;
case 269:
*uParam2=11853;
break;
case 270:
*uParam2=11854;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 271:
*uParam2=11876;
break;
case 272:
*uParam2=11877;
break;
case 273:
*uParam2=11878;
break;
case 274:
*uParam2=11879;
break;
case 275:
*uParam2=11880;
break;
case 276:
*uParam2=11881;
break;
case 277:
*uParam2=11882;
break;
case 278:
*uParam2=11883;
break;
case 279:
*uParam2=11884;
break;
case 280:
*uParam2=11885;
break;
case 281:
*uParam2=11886;
break;
case 282:
*uParam2=11887;
break;
case 283:
*uParam2=11974;
break;
case 284:
*uParam2=11975;
break;
case 285:
*uParam2=11976;
break;
case 286:
*uParam2=11977;
break;
case 287:
*uParam2=11978;
break;
case 288:
*uParam2=11979;
break;
case 289:
*uParam2=11980;
break;
case 290:
*uParam2=11981;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 291:
*uParam2=11982;
break;
case 292:
*uParam2=11983;
break;
case 293:
*uParam2=11984;
break;
case 294:
*uParam2=11985;
break;
case 295:
*uParam2=11986;
break;
case 296:
*uParam2=11987;
break;
case 297:
*uParam2=11988;
break;
}
break;
case 2:
switch (floor((to_float(iVar0) / 32f))){
case 0:
*uParam2=1767;
break;
case 1:
*uParam2=1768;
break;
case 2:
*uParam2=1769;
break;
case 3:
*uParam2=1770;
break;
case 4:
*uParam2=1771;
break;
case 5:
*uParam2=1772;
break;
case 6:
*uParam2=1780;
break;
case 7:
*uParam2=1781;
break;
case 8:
*uParam2=1782;
break;
case 9:
*uParam2=1783;
break;
case 10:
*uParam2=1784;
break;
case 11:
*uParam2=1785;
break;
case 12:
*uParam2=1786;
break;
case 13:
*uParam2=1789;
break;
case 14:
*uParam2=1790;
break;
case 15:
*uParam2=1891;
break;
case 16:
*uParam2=1892;
break;
case 17:
*uParam2=1922;
break;
case 18:
*uParam2=1940;
break;
case 19:
*uParam2=1941;
break;
case 20:
*uParam2=1942;
break;
case 21:
*uParam2=1943;
break;
case 22:
*uParam2=1944;
break;
case 23:
*uParam2=2045;
break;
case 24:
*uParam2=2046;
break;
case 25:
*uParam2=2080;
break;
case 26:
*uParam2=2081;
break;
case 27:
*uParam2=2082;
break;
case 28:
*uParam2=2083;
break;
case 29:
*uParam2=2084;
break;
case 30:
*uParam2=2085;
break;
case 31:
*uParam2=2086;
break;
case 32:
*uParam2=2087;
break;
case 33:
*uParam2=2088;
break;
case 34:
*uParam2=2089;
break;
case 35:
*uParam2=2328;
break;
case 36:
*uParam2=2329;
break;
case 37:
*uParam2=2395;
break;
case 38:
*uParam2=2396;
break;
case 39:
*uParam2=2397;
break;
case 40:
*uParam2=2398;
break;
case 41:
*uParam2=2463;
break;
case 42:
*uParam2=2464;
break;
case 43:
*uParam2=2465;
break;
case 44:
*uParam2=2466;
break;
case 45:
*uParam2=2467;
break;
case 46:
*uParam2=2468;
break;
case 47:
*uParam2=2469;
break;
case 48:
*uParam2=2470;
break;
case 49:
*uParam2=2471;
break;
case 50:
*uParam2=2472;
break;
case 51:
*uParam2=2603;
break;
case 52:
*uParam2=2604;
break;
case 53:
*uParam2=2605;
break;
case 54:
*uParam2=2606;
break;
case 55:
*uParam2=2607;
break;
case 56:
*uParam2=2608;
break;
case 57:
*uParam2=2609;
break;
case 58:
*uParam2=2610;
break;
case 59:
*uParam2=2611;
break;
case 60:
*uParam2=2612;
break;
case 61:
*uParam2=2613;
break;
case 62:
*uParam2=3205;
break;
case 63:
*uParam2=3206;
break;
case 64:
*uParam2=3207;
break;
case 65:
*uParam2=3208;
break;
case 66:
*uParam2=3209;
break;
case 67:
*uParam2=3210;
break;
case 68:
*uParam2=3682;
break;
case 69:
*uParam2=3683;
break;
case 70:
*uParam2=3684;
break;
case 71:
*uParam2=3685;
break;
case 72:
*uParam2=3686;
break;
case 73:
*uParam2=3687;
break;
case 74:
*uParam2=3688;
break;
case 75:
*uParam2=3689;
break;
case 76:
*uParam2=3690;
break;
case 77:
*uParam2=3691;
break;
case 78:
*uParam2=3803;
break;
case 79:
*uParam2=3804;
break;
case 80:
*uParam2=3805;
break;
case 81:
*uParam2=3806;
break;
case 82:
*uParam2=3807;
break;
case 83:
*uParam2=3808;
break;
case 84:
*uParam2=3809;
break;
case 85:
*uParam2=3810;
break;
case 86:
*uParam2=3908;
break;
case 87:
*uParam2=3909;
break;
case 88:
*uParam2=3910;
break;
case 89:
*uParam2=5352;
break;
case 90:
*uParam2=5353;
break;
case 91:
*uParam2=5354;
break;
case 92:
*uParam2=5355;
break;
case 93:
*uParam2=5356;
break;
case 94:
*uParam2=5357;
break;
case 95:
*uParam2=5358;
break;
case 96:
*uParam2=5359;
break;
case 97:
*uParam2=5360;
break;
case 98:
*uParam2=5361;
break;
case 99:
*uParam2=5362;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 100:
*uParam2=5363;
break;
case 101:
*uParam2=5420;
break;
case 102:
*uParam2=5421;
break;
case 103:
*uParam2=5422;
break;
case 104:
*uParam2=5423;
break;
case 105:
*uParam2=5424;
break;
case 106:
*uParam2=5425;
break;
case 107:
*uParam2=5426;
break;
case 108:
*uParam2=5427;
break;
case 109:
*uParam2=5428;
break;
case 110:
*uParam2=5429;
break;
case 111:
*uParam2=5430;
break;
case 112:
*uParam2=5431;
break;
case 113:
*uParam2=5432;
break;
case 114:
*uParam2=5433;
break;
case 115:
*uParam2=5434;
break;
case 116:
*uParam2=5435;
break;
case 117:
*uParam2=5436;
break;
case 118:
*uParam2=5437;
break;
case 119:
*uParam2=5438;
break;
case 120:
*uParam2=5439;
break;
case 121:
*uParam2=5440;
break;
case 122:
*uParam2=5441;
break;
case 123:
*uParam2=5442;
break;
case 124:
*uParam2=6140;
break;
case 125:
*uParam2=6141;
break;
case 126:
*uParam2=6142;
break;
case 127:
*uParam2=6143;
break;
case 128:
*uParam2=6144;
break;
case 129:
*uParam2=6145;
break;
case 130:
*uParam2=6146;
break;
case 131:
*uParam2=6147;
break;
case 132:
*uParam2=6148;
break;
case 133:
*uParam2=6149;
break;
case 134:
*uParam2=6150;
break;
case 135:
*uParam2=6151;
break;
case 136:
*uParam2=6152;
break;
case 137:
*uParam2=6153;
break;
case 138:
*uParam2=6154;
break;
case 139:
*uParam2=6453;
break;
case 140:
*uParam2=6454;
break;
case 141:
*uParam2=6455;
break;
case 142:
*uParam2=6456;
break;
case 143:
*uParam2=6457;
break;
case 144:
*uParam2=6458;
break;
case 145:
*uParam2=6459;
break;
case 146:
*uParam2=6460;
break;
case 147:
*uParam2=6461;
break;
case 148:
*uParam2=6462;
break;
case 149:
*uParam2=6463;
break;
case 150:
*uParam2=6464;
break;
case 151:
*uParam2=6465;
break;
case 152:
*uParam2=6466;
break;
case 153:
*uParam2=6467;
break;
case 154:
*uParam2=7276;
break;
case 155:
*uParam2=7277;
break;
case 156:
*uParam2=7278;
break;
case 157:
*uParam2=7279;
break;
case 158:
*uParam2=7280;
break;
case 159:
*uParam2=7281;
break;
case 160:
*uParam2=7282;
break;
case 161:
*uParam2=7897;
break;
case 162:
*uParam2=7898;
break;
case 163:
*uParam2=7899;
break;
case 164:
*uParam2=7900;
break;
case 165:
*uParam2=7901;
break;
case 166:
*uParam2=7902;
break;
case 167:
*uParam2=7903;
break;
case 168:
*uParam2=7904;
break;
case 169:
*uParam2=7905;
break;
case 170:
*uParam2=7906;
break;
case 171:
*uParam2=7907;
break;
case 172:
*uParam2=7908;
break;
case 173:
*uParam2=7909;
break;
case 174:
*uParam2=7910;
break;
case 175:
*uParam2=7911;
break;
case 176:
*uParam2=8327;
break;
case 177:
*uParam2=8328;
break;
case 178:
*uParam2=8329;
break;
case 179:
*uParam2=8330;
break;
case 180:
*uParam2=8331;
break;
case 181:
*uParam2=8332;
break;
case 182:
*uParam2=8333;
break;
case 183:
*uParam2=8334;
break;
case 184:
*uParam2=8335;
break;
case 185:
*uParam2=8336;
break;
case 186:
*uParam2=8337;
break;
case 187:
*uParam2=8338;
break;
case 188:
*uParam2=8339;
break;
case 189:
*uParam2=8340;
break;
case 190:
*uParam2=8341;
break;
case 191:
*uParam2=8342;
break;
case 192:
*uParam2=8343;
break;
case 193:
*uParam2=8344;
break;
case 194:
*uParam2=8345;
break;
case 195:
*uParam2=8346;
break;
case 196:
*uParam2=8347;
break;
case 197:
*uParam2=8348;
break;
case 198:
*uParam2=8349;
break;
case 199:
*uParam2=8350;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 200:
*uParam2=8351;
break;
case 201:
*uParam2=8946;
break;
case 202:
*uParam2=8947;
break;
case 203:
*uParam2=8948;
break;
case 204:
*uParam2=8949;
break;
case 205:
*uParam2=8950;
break;
case 206:
*uParam2=9449;
break;
case 207:
*uParam2=9450;
break;
case 208:
*uParam2=9451;
break;
case 209:
*uParam2=9452;
break;
case 210:
*uParam2=9453;
break;
case 211:
*uParam2=9454;
break;
case 212:
*uParam2=9455;
break;
case 213:
*uParam2=9456;
break;
case 214:
*uParam2=9457;
break;
case 215:
*uParam2=9458;
break;
case 216:
*uParam2=9459;
break;
case 217:
*uParam2=9460;
break;
case 218:
*uParam2=9461;
break;
case 219:
*uParam2=9462;
break;
case 220:
*uParam2=9463;
break;
case 221:
*uParam2=9464;
break;
case 222:
*uParam2=9465;
break;
case 223:
*uParam2=9466;
break;
case 224:
*uParam2=9467;
break;
case 225:
*uParam2=9468;
break;
case 226:
*uParam2=9469;
break;
case 227:
*uParam2=9470;
break;
case 228:
*uParam2=9471;
break;
case 229:
*uParam2=9472;
break;
case 230:
*uParam2=9473;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 231:
*uParam2=10323;
break;
case 232:
*uParam2=10324;
break;
case 233:
*uParam2=10325;
break;
case 234:
*uParam2=10326;
break;
case 235:
*uParam2=10327;
break;
case 236:
*uParam2=10328;
break;
case 237:
*uParam2=10329;
break;
case 238:
*uParam2=10330;
break;
case 239:
*uParam2=10331;
break;
case 240:
*uParam2=10332;
break;
case 241:
*uParam2=10333;
break;
case 242:
*uParam2=10334;
break;
case 243:
*uParam2=10335;
break;
case 244:
*uParam2=10336;
break;
case 245:
*uParam2=10337;
break;
case 246:
*uParam2=10338;
break;
case 247:
*uParam2=10339;
break;
case 248:
*uParam2=10340;
break;
case 249:
*uParam2=10341;
break;
case 250:
*uParam2=10342;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 251:
*uParam2=10429;
break;
case 252:
*uParam2=10430;
break;
case 253:
*uParam2=10431;
break;
case 254:
*uParam2=10432;
break;
case 255:
*uParam2=10433;
break;
case 256:
*uParam2=10434;
break;
case 257:
*uParam2=10435;
break;
case 258:
*uParam2=10436;
break;
case 259:
*uParam2=10437;
break;
case 260:
*uParam2=10438;
break;
case 261:
*uParam2=11855;
break;
case 262:
*uParam2=11856;
break;
case 263:
*uParam2=11857;
break;
case 264:
*uParam2=11858;
break;
case 265:
*uParam2=11859;
break;
case 266:
*uParam2=11860;
break;
case 267:
*uParam2=11861;
break;
case 268:
*uParam2=11862;
break;
case 269:
*uParam2=11863;
break;
case 270:
*uParam2=11864;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 271:
*uParam2=11888;
break;
case 272:
*uParam2=11889;
break;
case 273:
*uParam2=11890;
break;
case 274:
*uParam2=11891;
break;
case 275:
*uParam2=11892;
break;
case 276:
*uParam2=11893;
break;
case 277:
*uParam2=11894;
break;
case 278:
*uParam2=11895;
break;
case 279:
*uParam2=11896;
break;
case 280:
*uParam2=11897;
break;
case 281:
*uParam2=11898;
break;
case 282:
*uParam2=11899;
break;
case 283:
*uParam2=11989;
break;
case 284:
*uParam2=11990;
break;
case 285:
*uParam2=11991;
break;
case 286:
*uParam2=11992;
break;
case 287:
*uParam2=11993;
break;
case 288:
*uParam2=11994;
break;
case 289:
*uParam2=11995;
break;
case 290:
*uParam2=11996;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 291:
*uParam2=11997;
break;
case 292:
*uParam2=11998;
break;
case 293:
*uParam2=11999;
break;
case 294:
*uParam2=12000;
break;
case 295:
*uParam2=12001;
break;
case 296:
*uParam2=12002;
break;
case 297:
*uParam2=12003;
break;
}
break;
break;
}
*uParam3=(iVar0 % 32);
return *uParam2 !=14385;
}


bool func_139(int iParam0){
return Global_43377==iParam0;
}

int func_140(int iParam0){
switch (iParam0){
case -1:
return 0;
break;
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
return 5;
break;
case 6:
return 6;
break;
case 7:
return 7;
break;
case 8:
return 8;
break;
case 9:
return 0;
break;
case 10:
return 1;
break;
case 11:
return 0;
break;
case 12:
return 0;
break;
case 13:
return 0;
break;
}
return 0;
}


void func_141(int iParam0, int iParam1){
int iVar0;
iVar0=0;
Global_78472[0 /*14*/].f_5=4;
func_142(iVar0, iParam0, 0, iParam1);
}


void func_142(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
var uVar1;
struct<8> Var2;
int iVar3;
int iVar4;
struct<10> Var5;
int iVar6;
int iVar7;
int iVar8;
struct<10> Var9;
int iVar10;
int iVar11;
iVar0=(iParam1 - iParam2);
iVar0=iVar0;
if(iVar0 < 0){
return;
}
uVar1=Global_78472[0 /*14*/].f_5;
if(iParam0==12){
iVar3=(iParam1 - iParam2);
if(iVar3 >=0){
iVar4=FILES::SETUP_SHOP_PED_OUTFIT_QUERY(uVar1, 0);
if(iVar4 > iVar3){
FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar3, &Var2);
Global_2883588=Var2.f_1;
Global_2883589=Var2.f_0;
func_129(&(Global_78472[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
return;
}}}elseif(iParam0==13){
func_129(&(Global_78472[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
}elseif(iParam0==14){
FILES::INIT_SHOP_PED_PROP(&Var5);
iVar7=(iParam1 - iParam2);
if(iVar7 >=0){
iVar8=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(uVar1, 10, -1, 1, -1, -1);
if(iVar8 > iVar7){
FILES::GET_SHOP_PED_QUERY_PROP(iVar7, &Var5);
if(Var5.f_6==0){
iVar6=9;
}elseif(Var5.f_6==1){
iVar6=10;
}elseif(Var5.f_6==2){
iVar6=2;
}elseif(Var5.f_6==3){
iVar6=3;
}elseif(Var5.f_6==4){
iVar6=4;
}elseif(Var5.f_6==5){
iVar6=5;
}elseif(Var5.f_6==6){
iVar6=6;
}elseif(Var5.f_6==7){
iVar6=7;
}elseif(Var5.f_6==8){
iVar6=8;
}else{
iVar6=-1;
}
Global_2883588=Var5.f_1;
Global_2883589=Var5.f_0;
func_129(&(Global_78472[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var5.f_1, joaat("outfit_only"), 0), iVar6, 2, Var5.f_1 !=0);
return;
}}}else{
FILES::INIT_SHOP_PED_COMPONENT(&Var9);
if(iParam3 !=-1 && Global_78670){
FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_129(&(Global_78472[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}
iVar10=(iParam1 - iParam2);
if(iVar10 >=0){
iVar11=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(uVar1, 10, -1, 0, -1, func_143(iParam0));
if(iVar11 > iVar10){
FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar10, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_129(&(Global_78472[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}}}}

int func_143(int iParam0){
switch (iParam0){
case 0:
return 0;
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
case 6:
return 6;
break;
case 5:
return 5;
break;
case 8:
return 8;
break;
case 9:
return 9;
break;
case 10:
return 10;
break;
case 1:
return 1;
break;
case 7:
return 7;
break;
case 11:
return 11;
break;
}
return 0;
}


void func_144(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=5;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=1;
iVar4=0;
break;
case 2:
iVar3=2;
iVar4=0;
break;
case 3:
iVar3=3;
iVar4=0;
break;
case 4:
iVar3=4;
iVar4=0;
break;
case 5:
iVar3=5;
iVar4=0;
break;
case 6:
iVar3=6;
iVar4=0;
break;
case 7:
iVar3=7;
iVar4=0;
break;
case 8:
iVar3=8;
iVar4=0;
break;
default:
Global_78472[0 /*14*/].f_5=4;
func_142(iVar7, iParam0, 9, iParam1);
return;
break;
}
StringCopy(&Var2, "HA_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_145(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=12;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 1:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S1", 16);
break;
case 2:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S2", 16);
break;
case 3:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S3", 16);
break;
case 4:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S4", 16);
break;
case 5:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S5", 16);
break;
case 6:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S6", 16);
break;
case 7:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S7", 16);
break;
case 8:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S8", 16);
break;
case 9:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P1", 16);
break;
case 10:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P2", 16);
break;
case 11:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P3", 16);
break;
case 12:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P4", 16);
break;
case 13:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P5", 16);
break;
case 14:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P6", 16);
break;
case 15:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P7", 16);
break;
case 16:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P8", 16);
break;
case 17:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P9", 16);
break;
case 18:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P10", 16);
break;
case 19:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B1", 16);
break;
case 20:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B2", 16);
break;
case 21:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B3", 16);
break;
case 22:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B4", 16);
break;
case 23:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B5", 16);
break;
case 24:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B6", 16);
break;
case 25:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B7", 16);
break;
case 26:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B8", 16);
break;
case 27:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B9", 16);
break;
default:
Global_78472[0 /*14*/].f_5=4;
func_142(iVar7, iParam0, 28, iParam1);
return;
break;
}
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_146(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
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
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=14;
iVar8=0;
switch (iParam0){
case 0:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=0;
break;
case 1:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=1;
break;
case 2:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=2;
break;
case 3:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=3;
break;
case 4:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=4;
break;
case 5:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=5;
break;
case 6:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=6;
break;
case 7:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=7;
break;
case 8:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=8;
break;
case 10:
StringCopy(&Var2, "HT_FMF_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 11:
StringCopy(&Var2, "HT_FMF_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 12:
StringCopy(&Var2, "HT_FMF_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=85;
iVar5=0;
iVar8=1;
break;
case 13:
StringCopy(&Var2, "HT_FMF_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 14:
StringCopy(&Var2, "HT_FMF_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=235;
iVar5=0;
iVar8=1;
break;
case 15:
StringCopy(&Var2, "HT_FMF_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=80;
iVar5=0;
iVar8=1;
break;
case 16:
StringCopy(&Var2, "HT_FMF_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=85;
iVar5=0;
iVar8=1;
break;
case 17:
StringCopy(&Var2, "HT_FMF_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=90;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 18:
StringCopy(&Var2, "HT_FMF_1_0", 16);
iVar3=1;
iVar4=0;
iVar5=0;
break;
case 19:
StringCopy(&Var2, "HT_FMF_2_0", 16);
iVar3=2;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 20:
StringCopy(&Var2, "HT_FMF_2_1", 16);
iVar3=2;
iVar4=1;
iVar1=5000;
iVar5=0;
iVar8=1;
break;
case 21:
StringCopy(&Var2, "HT_FMF_2_2", 16);
iVar3=2;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 22:
StringCopy(&Var2, "HT_FMF_2_3", 16);
iVar3=2;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 23:
StringCopy(&Var2, "HT_FMF_2_4", 16);
iVar3=2;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 24:
StringCopy(&Var2, "HT_FMF_2_5", 16);
iVar3=2;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 25:
StringCopy(&Var2, "HT_FMF_2_6", 16);
iVar3=2;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 26:
StringCopy(&Var2, "HT_FMF_2_7", 16);
iVar3=2;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 27:
StringCopy(&Var2, "HT_FMF_3_0", 16);
iVar3=3;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 28:
StringCopy(&Var2, "HT_FMF_3_1", 16);
iVar3=3;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 29:
StringCopy(&Var2, "HT_FMF_3_2", 16);
iVar3=3;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 30:
StringCopy(&Var2, "HT_FMF_3_3", 16);
iVar3=3;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 31:
StringCopy(&Var2, "HT_FMF_3_4", 16);
iVar3=3;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "HT_FMF_3_5", 16);
iVar3=3;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 33:
StringCopy(&Var2, "HT_FMF_3_6", 16);
iVar3=3;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 34:
StringCopy(&Var2, "HT_FMF_3_7", 16);
iVar3=3;
iVar4=7;
iVar1=120;
iVar5=0;
iVar8=1;
break;
case 35:
StringCopy(&Var2, "HT_FMF_4_0", 16);
iVar3=4;
iVar4=0;
iVar1=400;
iVar5=0;
iVar8=1;
break;
case 36:
StringCopy(&Var2, "HT_FMF_4_1", 16);
iVar3=4;
iVar4=1;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 37:
StringCopy(&Var2, "HT_FMF_4_2", 16);
iVar3=4;
iVar4=2;
iVar1=375;
iVar5=0;
iVar8=1;
break;
case 38:
StringCopy(&Var2, "HT_FMF_4_3", 16);
iVar3=4;
iVar4=3;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 39:
StringCopy(&Var2, "HT_FMF_4_4", 16);
iVar3=4;
iVar4=4;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 40:
StringCopy(&Var2, "HT_FMF_4_5", 16);
iVar3=4;
iVar4=5;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 41:
StringCopy(&Var2, "HT_FMF_4_6", 16);
iVar3=4;
iVar4=6;
iVar1=85;
iVar5=0;
iVar8=1;
break;
case 42:
StringCopy(&Var2, "HT_FMF_4_7", 16);
iVar3=4;
iVar4=7;
iVar1=325;
iVar5=0;
iVar8=1;
break;
case 43:
StringCopy(&Var2, "HT_FMF_5_0", 16);
iVar3=5;
iVar4=0;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 44:
StringCopy(&Var2, "HT_FMF_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 45:
StringCopy(&Var2, "HT_FMF_5_2", 16);
iVar3=5;
iVar4=2;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 46:
StringCopy(&Var2, "HT_FMF_5_3", 16);
iVar3=5;
iVar4=3;
iVar1=40;
iVar5=0;
iVar8=1;
break;
case 47:
StringCopy(&Var2, "HT_FMF_5_4", 16);
iVar3=5;
iVar4=4;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 48:
StringCopy(&Var2, "HT_FMF_5_5", 16);
iVar3=5;
iVar4=5;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 49:
StringCopy(&Var2, "HT_FMF_5_6", 16);
iVar3=5;
iVar4=6;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 50:
StringCopy(&Var2, "HT_FMF_5_7", 16);
iVar3=5;
iVar4=7;
iVar1=255;
iVar5=0;
iVar8=1;
break;
case 51:
StringCopy(&Var2, "HT_FMF_6_0", 16);
iVar3=6;
iVar4=0;
iVar1=360;
iVar5=0;
iVar8=1;
break;
case 52:
StringCopy(&Var2, "HT_FMF_6_1", 16);
iVar3=6;
iVar4=1;
iVar1=195;
iVar5=0;
iVar8=1;
break;
case 53:
StringCopy(&Var2, "HT_FMF_6_2", 16);
iVar3=6;
iVar4=2;
iVar1=3970;
iVar5=0;
iVar8=1;
break;
case 54:
StringCopy(&Var2, "HT_FMF_6_3", 16);
iVar3=6;
iVar4=3;
iVar1=135;
iVar5=0;
iVar8=1;
break;
case 55:
StringCopy(&Var2, "HT_FMF_6_4", 16);
iVar3=6;
iVar4=4;
iVar1=1355;
iVar5=0;
iVar8=1;
break;
case 56:
StringCopy(&Var2, "HT_FMF_6_5", 16);
iVar3=6;
iVar4=5;
iVar1=110;
iVar5=0;
iVar8=1;
break;
case 57:
StringCopy(&Var2, "HT_FMF_6_6", 16);
iVar3=6;
iVar4=6;
iVar1=140;
iVar5=0;
iVar8=1;
break;
case 58:
StringCopy(&Var2, "HT_FMF_6_7", 16);
iVar3=6;
iVar4=7;
iVar1=130;
iVar5=0;
iVar8=1;
break;
case 59:
StringCopy(&Var2, "HT_FMF_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=230;
iVar5=0;
iVar8=1;
break;
case 60:
StringCopy(&Var2, "HT_FMF_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=195;
iVar5=0;
iVar8=1;
break;
case 61:
StringCopy(&Var2, "HT_FMF_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=515;
iVar5=0;
iVar8=1;
break;
case 62:
StringCopy(&Var2, "HT_FMF_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=545;
iVar5=0;
iVar8=1;
break;
case 63:
StringCopy(&Var2, "HT_FMF_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=195;
iVar5=0;
iVar8=1;
break;
case 64:
StringCopy(&Var2, "HT_FMF_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=155;
iVar5=0;
iVar8=1;
break;
case 65:
StringCopy(&Var2, "HT_FMF_7_6", 16);
iVar3=7;
iVar4=6;
iVar1=155;
iVar5=0;
iVar8=1;
break;
case 66:
StringCopy(&Var2, "HT_FMF_7_7", 16);
iVar3=7;
iVar4=7;
iVar1=1440;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 67:
StringCopy(&Var2, "HT_FMF_8_0", 16);
iVar3=8;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 68:
StringCopy(&Var2, "HT_FMF_8_1", 16);
iVar3=8;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 69:
StringCopy(&Var2, "HT_FMF_8_2", 16);
iVar3=8;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 70:
StringCopy(&Var2, "HT_FMF_8_3", 16);
iVar3=8;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 71:
StringCopy(&Var2, "HT_FMF_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 72:
StringCopy(&Var2, "HT_FMF_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 73:
StringCopy(&Var2, "HT_FMF_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 74:
StringCopy(&Var2, "HT_FMF_8_7", 16);
iVar3=8;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 75:
StringCopy(&Var2, "HT_FMF_9_0", 16);
iVar3=9;
iVar4=0;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 76:
StringCopy(&Var2, "HT_FMF_9_1", 16);
iVar3=9;
iVar4=1;
iVar1=25;
iVar5=0;
iVar8=1;
break;
case 77:
StringCopy(&Var2, "HT_FMF_9_2", 16);
iVar3=9;
iVar4=2;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 78:
StringCopy(&Var2, "HT_FMF_9_3", 16);
iVar3=9;
iVar4=3;
iVar1=25;
iVar5=0;
iVar8=1;
break;
case 79:
StringCopy(&Var2, "HT_FMF_9_4", 16);
iVar3=9;
iVar4=4;
iVar1=50;
iVar5=0;
iVar8=1;
break;
case 80:
StringCopy(&Var2, "HT_FMF_9_5", 16);
iVar3=9;
iVar4=5;
iVar1=40;
iVar5=0;
iVar8=1;
break;
case 81:
StringCopy(&Var2, "HT_FMF_9_6", 16);
iVar3=9;
iVar4=6;
iVar1=575;
iVar5=0;
iVar8=1;
break;
case 82:
StringCopy(&Var2, "HT_FMF_9_7", 16);
iVar3=9;
iVar4=7;
iVar1=605;
iVar5=0;
iVar8=1;
break;
case 83:
StringCopy(&Var2, "HT_FMF_10_0", 16);
iVar3=10;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 84:
StringCopy(&Var2, "HT_FMF_10_1", 16);
iVar3=10;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 85:
StringCopy(&Var2, "HT_FMF_10_2", 16);
iVar3=10;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 86:
StringCopy(&Var2, "HT_FMF_10_3", 16);
iVar3=10;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 87:
StringCopy(&Var2, "HT_FMF_10_4", 16);
iVar3=10;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 88:
StringCopy(&Var2, "HT_FMF_10_5", 16);
iVar3=10;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 89:
StringCopy(&Var2, "HT_FMF_10_6", 16);
iVar3=10;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 90:
StringCopy(&Var2, "HT_FMF_10_7", 16);
iVar3=10;
iVar4=7;
iVar1=285;
iVar5=0;
iVar8=1;
break;
case 91:
StringCopy(&Var2, "HT_FMF_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 92:
StringCopy(&Var2, "HT_FMF_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=2125;
iVar5=0;
iVar8=1;
break;
case 93:
StringCopy(&Var2, "HT_FMF_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "HT_FMF_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 95:
StringCopy(&Var2, "HT_FMF_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 96:
StringCopy(&Var2, "HT_FMF_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 97:
StringCopy(&Var2, "HT_FMF_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 98:
StringCopy(&Var2, "HT_FMF_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 99:
StringCopy(&Var2, "HT_FMF_12_0", 16);
iVar3=12;
iVar4=0;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 100:
StringCopy(&Var2, "HT_FMF_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 101:
StringCopy(&Var2, "HT_FMF_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 102:
StringCopy(&Var2, "HT_FMF_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 103:
StringCopy(&Var2, "HT_FMF_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 104:
StringCopy(&Var2, "HT_FMF_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 105:
StringCopy(&Var2, "HT_FMF_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 106:
StringCopy(&Var2, "HT_FMF_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=295;
iVar5=0;
iVar8=1;
break;
case 107:
StringCopy(&Var2, "HT_FMF_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=195;
iVar5=0;
iVar8=1;
break;
case 108:
StringCopy(&Var2, "HT_FMF_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=200;
iVar5=0;
iVar8=1;
break;
case 109:
StringCopy(&Var2, "HT_FMF_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=160;
iVar5=0;
iVar8=1;
break;
case 110:
StringCopy(&Var2, "HT_FMF_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=855;
iVar5=0;
iVar8=1;
break;
case 111:
StringCopy(&Var2, "HT_FMF_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=1615;
iVar5=0;
iVar8=1;
break;
case 112:
StringCopy(&Var2, "HT_FMF_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=1130;
iVar5=0;
iVar8=1;
break;
case 113:
StringCopy(&Var2, "HT_FMF_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=165;
iVar5=0;
iVar8=1;
break;
case 114:
StringCopy(&Var2, "HT_FMF_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=215;
iVar5=0;
iVar8=1;
break;
case 115:
StringCopy(&Var2, "HT_FMF_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=145;
iVar5=0;
iVar8=1;
break;
case 116:
StringCopy(&Var2, "HT_FMF_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=250;
iVar5=0;
iVar8=1;
break;
case 117:
StringCopy(&Var2, "HT_FMF_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=110;
iVar5=0;
iVar8=1;
break;
case 118:
StringCopy(&Var2, "HT_FMF_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=145;
iVar5=0;
iVar8=1;
break;
case 119:
StringCopy(&Var2, "HT_FMF_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=105;
iVar5=0;
iVar8=1;
break;
case 120:
StringCopy(&Var2, "HT_FMF_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=105;
iVar5=0;
iVar8=1;
break;
case 121:
StringCopy(&Var2, "HT_FMF_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=115;
iVar5=0;
iVar8=1;
break;
case 122:
StringCopy(&Var2, "HT_FMF_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=115;
iVar5=0;
iVar8=1;
break;
case 123:
StringCopy(&Var2, "HT_FMF_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=390;
iVar5=0;
iVar8=1;
break;
case 124:
StringCopy(&Var2, "HT_FMF_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=395;
iVar5=0;
iVar8=1;
break;
case 125:
StringCopy(&Var2, "HT_FMF_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=595;
iVar5=0;
iVar8=1;
break;
case 126:
StringCopy(&Var2, "HT_FMF_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=425;
iVar5=0;
iVar8=1;
break;
case 127:
StringCopy(&Var2, "HT_FMF_15_4", 16);
iVar3=15;
iVar4=4;
iVar1=600;
iVar5=0;
iVar8=1;
break;
case 128:
StringCopy(&Var2, "HT_FMF_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=590;
iVar5=0;
iVar8=1;
break;
case 129:
StringCopy(&Var2, "HT_FMF_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=595;
iVar5=0;
iVar8=1;
break;
case 130:
StringCopy(&Var2, "HT_FMF_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=555;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 131:
StringCopy(&Var2, "HE_FMF_16_0", 16);
iVar3=16;
iVar4=0;
iVar1=1060;
iVar5=0;
iVar8=2;
break;
case 132:
StringCopy(&Var2, "HE_FMF_16_1", 16);
iVar3=16;
iVar4=1;
iVar1=1400;
iVar5=0;
iVar8=2;
break;
case 133:
StringCopy(&Var2, "HE_FMF_16_2", 16);
iVar3=16;
iVar4=2;
iVar1=1315;
iVar5=0;
iVar8=2;
break;
case 134:
StringCopy(&Var2, "HE_FMF_16_3", 16);
iVar3=16;
iVar4=3;
iVar1=1230;
iVar5=0;
iVar8=2;
break;
case 135:
StringCopy(&Var2, "HE_FMF_16_4", 16);
iVar3=16;
iVar4=4;
iVar1=1145;
iVar5=0;
iVar8=2;
break;
case 136:
StringCopy(&Var2, "HE_FMF_16_5", 16);
iVar3=16;
iVar4=5;
iVar1=8450;
iVar5=0;
iVar8=2;
break;
case 137:
StringCopy(&Var2, "HE_FMF_16_6", 16);
iVar3=16;
iVar4=6;
iVar1=675;
iVar5=0;
iVar8=2;
break;
case 138:
StringCopy(&Var2, "HE_FMF_16_7", 16);
iVar3=16;
iVar4=7;
iVar1=8750;
iVar5=0;
iVar8=2;
break;
case 139:
StringCopy(&Var2, "HE_FMF_17_0", 16);
iVar3=17;
iVar4=0;
iVar1=975;
iVar5=0;
iVar8=2;
break;
case 140:
StringCopy(&Var2, "HE_FMF_17_1", 16);
iVar3=17;
iVar4=1;
iVar1=750;
iVar5=0;
iVar8=2;
break;
case 141:
StringCopy(&Var2, "HE_FMF_17_2", 16);
iVar3=17;
iVar4=2;
iVar1=865;
iVar5=0;
iVar8=2;
break;
case 142:
StringCopy(&Var2, "HE_FMF_17_3", 16);
iVar3=17;
iVar4=3;
iVar1=890;
iVar5=0;
iVar8=2;
break;
case 143:
StringCopy(&Var2, "HE_FMF_17_4", 16);
iVar3=17;
iVar4=4;
iVar1=730;
iVar5=0;
iVar8=2;
break;
case 144:
StringCopy(&Var2, "HE_FMF_17_5", 16);
iVar3=17;
iVar4=5;
iVar1=650;
iVar5=0;
iVar8=2;
break;
case 145:
StringCopy(&Var2, "HE_FMF_17_6", 16);
iVar3=17;
iVar4=6;
iVar1=645;
iVar5=0;
iVar8=2;
break;
case 146:
StringCopy(&Var2, "HE_FMF_17_7", 16);
iVar3=17;
iVar4=7;
iVar1=755;
iVar5=0;
iVar8=2;
break;
case 147:
StringCopy(&Var2, "HE_FMF_18_0", 16);
iVar3=18;
iVar4=0;
iVar1=13850;
iVar5=0;
iVar8=2;
break;
case 148:
StringCopy(&Var2, "HE_FMF_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=2900;
iVar5=0;
iVar8=2;
break;
case 149:
StringCopy(&Var2, "HE_FMF_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=2895;
iVar5=0;
iVar8=2;
break;
case 150:
StringCopy(&Var2, "HE_FMF_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=12500;
iVar5=0;
iVar8=2;
break;
case 151:
StringCopy(&Var2, "HE_FMF_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=15000;
iVar5=0;
iVar8=2;
break;
case 152:
StringCopy(&Var2, "HE_FMF_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=14750;
iVar5=0;
iVar8=2;
break;
case 153:
StringCopy(&Var2, "HE_FMF_18_6", 16);
iVar3=18;
iVar4=6;
iVar1=13150;
iVar5=0;
iVar8=2;
break;
case 154:
StringCopy(&Var2, "HE_FMF_18_7", 16);
iVar3=18;
iVar4=7;
iVar1=2925;
iVar5=0;
iVar8=2;
break;
}
switch (iParam0){
case 155:
StringCopy(&Var2, "G_FMF_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 156:
StringCopy(&Var2, "G_FMF_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 157:
StringCopy(&Var2, "G_FMF_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 158:
StringCopy(&Var2, "G_FMF_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 159:
StringCopy(&Var2, "G_FMF_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 160:
StringCopy(&Var2, "G_FMF_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=80;
iVar5=1;
iVar8=3;
break;
case 161:
StringCopy(&Var2, "G_FMF_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 162:
StringCopy(&Var2, "G_FMF_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=90;
iVar5=1;
iVar8=3;
break;
case 163:
StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
iVar3=0;
iVar4=8;
iVar1=820;
iVar5=1;
iVar8=3;
break;
case 164:
StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
iVar3=0;
iVar4=9;
iVar1=435;
iVar5=1;
iVar8=3;
break;
case 165:
StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
iVar3=0;
iVar4=10;
iVar1=500;
iVar5=1;
iVar8=3;
break;
case 166:
StringCopy(&Var2, "G_FMF_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=160;
iVar5=1;
iVar8=3;
break;
case 167:
StringCopy(&Var2, "G_FMF_1_1", 16);
iVar3=1;
iVar4=1;
iVar1=165;
iVar5=1;
iVar8=3;
break;
case 168:
StringCopy(&Var2, "G_FMF_1_2", 16);
iVar3=1;
iVar4=2;
iVar1=170;
iVar5=1;
iVar8=3;
break;
case 169:
StringCopy(&Var2, "G_FMF_1_3", 16);
iVar3=1;
iVar4=3;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 170:
StringCopy(&Var2, "G_FMF_1_4", 16);
iVar3=1;
iVar4=4;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 171:
StringCopy(&Var2, "G_FMF_1_5", 16);
iVar3=1;
iVar4=5;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 172:
StringCopy(&Var2, "G_FMF_1_6", 16);
iVar3=1;
iVar4=6;
iVar1=140;
iVar5=1;
iVar8=3;
break;
case 173:
StringCopy(&Var2, "G_FMF_1_7", 16);
iVar3=1;
iVar4=7;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 174:
StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
iVar3=1;
iVar4=8;
iVar1=970;
iVar5=1;
iVar8=3;
break;
case 175:
StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
iVar3=1;
iVar4=9;
iVar1=585;
iVar5=1;
iVar8=3;
break;
case 176:
StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
iVar3=1;
iVar4=10;
iVar1=650;
iVar5=1;
iVar8=3;
break;
case 177:
StringCopy(&Var2, "G_FMF_2_0", 16);
iVar3=2;
iVar4=0;
iVar1=180;
iVar5=1;
iVar8=3;
break;
case 178:
StringCopy(&Var2, "G_FMF_2_1", 16);
iVar3=2;
iVar4=1;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 179:
StringCopy(&Var2, "G_FMF_2_2", 16);
iVar3=2;
iVar4=2;
iVar1=115;
iVar5=1;
iVar8=3;
break;
case 180:
StringCopy(&Var2, "G_FMF_2_3", 16);
iVar3=2;
iVar4=3;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 181:
StringCopy(&Var2, "G_FMF_2_4", 16);
iVar3=2;
iVar4=4;
iVar1=595;
iVar5=1;
iVar8=3;
break;
case 182:
StringCopy(&Var2, "G_FMF_2_5", 16);
iVar3=2;
iVar4=5;
iVar1=160;
iVar5=1;
iVar8=3;
break;
case 183:
StringCopy(&Var2, "G_FMF_2_6", 16);
iVar3=2;
iVar4=6;
iVar1=545;
iVar5=1;
iVar8=3;
break;
case 184:
StringCopy(&Var2, "G_FMF_2_7", 16);
iVar3=2;
iVar4=7;
iVar1=590;
iVar5=1;
iVar8=3;
break;
case 185:
StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
iVar3=2;
iVar4=8;
iVar1=1125;
iVar5=1;
iVar8=3;
break;
case 186:
StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
iVar3=2;
iVar4=9;
iVar1=740;
iVar5=1;
iVar8=3;
break;
case 187:
StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
iVar3=2;
iVar4=10;
iVar1=805;
iVar5=1;
iVar8=3;
break;
case 188:
StringCopy(&Var2, "G_FMF_3_0", 16);
iVar3=3;
iVar4=0;
iVar1=6250;
iVar5=1;
iVar8=3;
break;
case 189:
StringCopy(&Var2, "G_FMF_3_1", 16);
iVar3=3;
iVar4=1;
iVar1=4065;
iVar5=1;
iVar8=3;
break;
case 190:
StringCopy(&Var2, "G_FMF_3_2", 16);
iVar3=3;
iVar4=2;
iVar1=3585;
iVar5=1;
iVar8=3;
break;
case 191:
StringCopy(&Var2, "G_FMF_3_3", 16);
iVar3=3;
iVar4=3;
iVar1=4075;
iVar5=1;
iVar8=3;
break;
case 192:
StringCopy(&Var2, "G_FMF_3_4", 16);
iVar3=3;
iVar4=4;
iVar1=4935;
iVar5=1;
iVar8=3;
break;
case 193:
StringCopy(&Var2, "G_FMF_3_5", 16);
iVar3=3;
iVar4=5;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 194:
StringCopy(&Var2, "G_FMF_3_6", 16);
iVar3=3;
iVar4=6;
iVar1=5600;
iVar5=1;
iVar8=3;
break;
case 195:
StringCopy(&Var2, "G_FMF_3_7", 16);
iVar3=3;
iVar4=7;
iVar1=4790;
iVar5=1;
iVar8=3;
break;
case 196:
StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
iVar3=3;
iVar4=8;
iVar1=2315;
iVar5=1;
iVar8=3;
break;
case 197:
StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
iVar3=3;
iVar4=9;
iVar1=1930;
iVar5=1;
iVar8=3;
break;
case 198:
StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
iVar3=3;
iVar4=10;
iVar1=1995;
iVar5=1;
iVar8=3;
break;
case 199:
StringCopy(&Var2, "G_FMF_4_0", 16);
iVar3=4;
iVar4=0;
iVar1=2245;
iVar5=1;
iVar8=3;
break;
case 200:
StringCopy(&Var2, "G_FMF_4_1", 16);
iVar3=4;
iVar4=1;
iVar1=250;
iVar5=1;
iVar8=3;
break;
case 201:
StringCopy(&Var2, "G_FMF_4_2", 16);
iVar3=4;
iVar4=2;
iVar1=210;
iVar5=1;
iVar8=3;
break;
case 202:
StringCopy(&Var2, "G_FMF_4_3", 16);
iVar3=4;
iVar4=3;
iVar1=245;
iVar5=1;
iVar8=3;
break;
case 203:
StringCopy(&Var2, "G_FMF_4_4", 16);
iVar3=4;
iVar4=4;
iVar1=1205;
iVar5=1;
iVar8=3;
break;
case 204:
StringCopy(&Var2, "G_FMF_4_5", 16);
iVar3=4;
iVar4=5;
iVar1=205;
iVar5=1;
iVar8=3;
break;
case 205:
StringCopy(&Var2, "G_FMF_4_6", 16);
iVar3=4;
iVar4=6;
iVar1=2215;
iVar5=1;
iVar8=3;
break;
case 206:
StringCopy(&Var2, "G_FMF_4_7", 16);
iVar3=4;
iVar4=7;
iVar1=215;
iVar5=1;
iVar8=3;
break;
case 207:
StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
iVar3=4;
iVar4=8;
iVar1=2835;
iVar5=1;
iVar8=3;
break;
case 208:
StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
iVar3=4;
iVar4=9;
iVar1=2450;
iVar5=1;
iVar8=3;
break;
case 209:
StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
iVar3=4;
iVar4=10;
iVar1=2515;
iVar5=1;
iVar8=3;
break;
case 210:
StringCopy(&Var2, "G_FMF_5_0", 16);
iVar3=5;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 211:
StringCopy(&Var2, "G_FMF_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 212:
StringCopy(&Var2, "G_FMF_5_2", 16);
iVar3=5;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 213:
StringCopy(&Var2, "G_FMF_5_3", 16);
iVar3=5;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 214:
StringCopy(&Var2, "G_FMF_5_4", 16);
iVar3=5;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 215:
StringCopy(&Var2, "G_FMF_5_5", 16);
iVar3=5;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 216:
StringCopy(&Var2, "G_FMF_5_6", 16);
iVar3=5;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 217:
StringCopy(&Var2, "G_FMF_5_7", 16);
iVar3=5;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 218:
StringCopy(&Var2, "G_FMF_5_8", 16);
iVar3=5;
iVar4=8;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 219:
StringCopy(&Var2, "G_FMF_5_9", 16);
iVar3=5;
iVar4=9;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 220:
StringCopy(&Var2, "G_FMF_5_10", 16);
iVar3=5;
iVar4=10;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 221:
StringCopy(&Var2, "G_FMF_6_0", 16);
iVar3=6;
iVar4=0;
iVar1=5000;
iVar5=1;
iVar8=3;
break;
case 222:
StringCopy(&Var2, "G_FMF_6_1", 16);
iVar3=6;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 223:
StringCopy(&Var2, "G_FMF_6_2", 16);
iVar3=6;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 224:
StringCopy(&Var2, "G_FMF_6_3", 16);
iVar3=6;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 225:
StringCopy(&Var2, "G_FMF_6_4", 16);
iVar3=6;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 226:
StringCopy(&Var2, "G_FMF_6_5", 16);
iVar3=6;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 227:
StringCopy(&Var2, "G_FMF_6_6", 16);
iVar3=6;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 228:
StringCopy(&Var2, "G_FMF_6_7", 16);
iVar3=6;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 229:
StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
iVar3=6;
iVar4=8;
iVar1=2820;
iVar5=1;
iVar8=3;
break;
case 230:
StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
iVar3=6;
iVar4=9;
iVar1=2435;
iVar5=1;
iVar8=3;
break;
case 231:
StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
iVar3=6;
iVar4=10;
iVar1=2500;
iVar5=1;
iVar8=3;
break;
case 232:
StringCopy(&Var2, "G_FMF_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=4815;
iVar5=1;
iVar8=3;
break;
case 233:
StringCopy(&Var2, "G_FMF_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=4795;
iVar5=1;
iVar8=3;
break;
case 234:
StringCopy(&Var2, "G_FMF_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=4305;
iVar5=1;
iVar8=3;
break;
case 235:
StringCopy(&Var2, "G_FMF_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=4305;
iVar5=1;
iVar8=3;
break;
case 236:
StringCopy(&Var2, "G_FMF_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=4965;
iVar5=1;
iVar8=3;
break;
case 237:
StringCopy(&Var2, "G_FMF_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=480;
iVar5=1;
iVar8=3;
break;
case 238:
StringCopy(&Var2, "G_FMF_7_6", 16);
iVar3=7;
iVar4=6;
iVar1=465;
iVar5=1;
iVar8=3;
break;
case 239:
StringCopy(&Var2, "G_FMF_7_7", 16);
iVar3=7;
iVar4=7;
iVar1=4320;
iVar5=1;
iVar8=3;
break;
case 240:
StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
iVar3=7;
iVar4=8;
iVar1=2390;
iVar5=1;
iVar8=3;
break;
case 241:
StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
iVar3=7;
iVar4=9;
iVar1=2005;
iVar5=1;
iVar8=3;
break;
case 242:
StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
iVar3=7;
iVar4=10;
iVar1=2070;
iVar5=1;
iVar8=3;
break;
}
switch (iParam0){
case 243:
StringCopy(&Var2, "G_FMF_8_0", 16);
iVar3=8;
iVar4=0;
iVar1=500;
iVar5=1;
iVar8=3;
break;
case 244:
StringCopy(&Var2, "G_FMF_8_1", 16);
iVar3=8;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 245:
StringCopy(&Var2, "G_FMF_8_2", 16);
iVar3=8;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 246:
StringCopy(&Var2, "G_FMF_8_3", 16);
iVar3=8;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 247:
StringCopy(&Var2, "G_FMF_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 248:
StringCopy(&Var2, "G_FMF_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 249:
StringCopy(&Var2, "G_FMF_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 250:
StringCopy(&Var2, "G_FMF_8_7", 16);
iVar3=8;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 251:
StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
iVar3=8;
iVar4=8;
iVar1=645;
iVar5=1;
iVar8=3;
break;
case 252:
StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
iVar3=8;
iVar4=9;
iVar1=260;
iVar5=1;
iVar8=3;
break;
case 253:
StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
iVar3=8;
iVar4=10;
iVar1=325;
iVar5=1;
iVar8=3;
break;
case 254:
StringCopy(&Var2, "G_FMF_9_0", 16);
iVar3=9;
iVar4=0;
iVar1=70;
iVar5=1;
iVar8=3;
break;
case 255:
StringCopy(&Var2, "G_FMF_9_1", 16);
iVar3=9;
iVar4=1;
iVar1=60;
iVar5=1;
iVar8=3;
break;
case 256:
StringCopy(&Var2, "G_FMF_9_2", 16);
iVar3=9;
iVar4=2;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 257:
StringCopy(&Var2, "G_FMF_9_3", 16);
iVar3=9;
iVar4=3;
iVar1=570;
iVar5=1;
iVar8=3;
break;
case 258:
StringCopy(&Var2, "G_FMF_9_4", 16);
iVar3=9;
iVar4=4;
iVar1=525;
iVar5=1;
iVar8=3;
break;
case 259:
StringCopy(&Var2, "G_FMF_9_5", 16);
iVar3=9;
iVar4=5;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 260:
StringCopy(&Var2, "G_FMF_9_6", 16);
iVar3=9;
iVar4=6;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 261:
StringCopy(&Var2, "G_FMF_9_7", 16);
iVar3=9;
iVar4=7;
iVar1=90;
iVar5=1;
iVar8=3;
break;
case 262:
StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
iVar3=9;
iVar4=8;
iVar1=645;
iVar5=1;
iVar8=3;
break;
case 263:
StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
iVar3=9;
iVar4=9;
iVar1=260;
iVar5=1;
iVar8=3;
break;
case 264:
StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
iVar3=9;
iVar4=10;
iVar1=325;
iVar5=1;
iVar8=3;
break;
case 265:
StringCopy(&Var2, "G_FMF_10_0", 16);
iVar3=10;
iVar4=0;
iVar1=4065;
iVar5=1;
iVar8=3;
break;
case 266:
StringCopy(&Var2, "G_FMF_10_1", 16);
iVar3=10;
iVar4=1;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 267:
StringCopy(&Var2, "G_FMF_10_2", 16);
iVar3=10;
iVar4=2;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 268:
StringCopy(&Var2, "G_FMF_10_3", 16);
iVar3=10;
iVar4=3;
iVar1=4275;
iVar5=1;
iVar8=3;
break;
case 269:
StringCopy(&Var2, "G_FMF_10_4", 16);
iVar3=10;
iVar4=4;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 270:
StringCopy(&Var2, "G_FMF_10_5", 16);
iVar3=10;
iVar4=5;
iVar1=80;
iVar5=1;
iVar8=3;
break;
case 271:
StringCopy(&Var2, "G_FMF_10_6", 16);
iVar3=10;
iVar4=6;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 272:
StringCopy(&Var2, "G_FMF_10_7", 16);
iVar3=10;
iVar4=7;
iVar1=90;
iVar5=1;
iVar8=3;
break;
case 273:
StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
iVar3=10;
iVar4=8;
iVar1=2315;
iVar5=1;
iVar8=3;
break;
case 274:
StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
iVar3=10;
iVar4=9;
iVar1=1930;
iVar5=1;
iVar8=3;
break;
case 275:
StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
iVar3=10;
iVar4=10;
iVar1=1995;
iVar5=1;
iVar8=3;
break;
case 276:
StringCopy(&Var2, "G_FMF_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=3660;
iVar5=1;
iVar8=3;
break;
case 277:
StringCopy(&Var2, "G_FMF_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=4165;
iVar5=1;
iVar8=3;
break;
case 278:
StringCopy(&Var2, "G_FMF_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=3670;
iVar5=1;
iVar8=3;
break;
case 279:
StringCopy(&Var2, "G_FMF_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 280:
StringCopy(&Var2, "G_FMF_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=3620;
iVar5=1;
iVar8=3;
break;
case 281:
StringCopy(&Var2, "G_FMF_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=3610;
iVar5=1;
iVar8=3;
break;
case 282:
StringCopy(&Var2, "G_FMF_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=4140;
iVar5=1;
iVar8=3;
break;
case 283:
StringCopy(&Var2, "G_FMF_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 284:
StringCopy(&Var2, "G_FMF_12_0", 16);
iVar3=12;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 285:
StringCopy(&Var2, "G_FMF_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 286:
StringCopy(&Var2, "G_FMF_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 287:
StringCopy(&Var2, "G_FMF_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 288:
StringCopy(&Var2, "G_FMF_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 289:
StringCopy(&Var2, "G_FMF_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 290:
StringCopy(&Var2, "G_FMF_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 291:
StringCopy(&Var2, "G_FMF_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 292:
StringCopy(&Var2, "G_FMF_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 293:
StringCopy(&Var2, "G_FMF_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 294:
StringCopy(&Var2, "G_FMF_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 295:
StringCopy(&Var2, "G_FMF_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 296:
StringCopy(&Var2, "G_FMF_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 297:
StringCopy(&Var2, "G_FMF_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 298:
StringCopy(&Var2, "G_FMF_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 299:
StringCopy(&Var2, "G_FMF_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 300:
StringCopy(&Var2, "G_FMF_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=325;
iVar5=1;
iVar8=3;
break;
case 301:
StringCopy(&Var2, "G_FMF_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 302:
StringCopy(&Var2, "G_FMF_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=115;
iVar5=1;
iVar8=3;
break;
case 303:
StringCopy(&Var2, "G_FMF_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 304:
StringCopy(&Var2, "G_FMF_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 305:
StringCopy(&Var2, "G_FMF_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 306:
StringCopy(&Var2, "G_FMF_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=115;
iVar5=1;
iVar8=3;
break;
case 307:
StringCopy(&Var2, "G_FMF_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 308:
StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
iVar3=14;
iVar4=8;
iVar1=1490;
iVar5=1;
iVar8=3;
break;
case 309:
StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
iVar3=14;
iVar4=9;
iVar1=1105;
iVar5=1;
iVar8=3;
break;
case 310:
StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
iVar3=14;
iVar4=10;
iVar1=1170;
iVar5=1;
iVar8=3;
break;
case 311:
StringCopy(&Var2, "G_FMF_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 312:
StringCopy(&Var2, "G_FMF_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 313:
StringCopy(&Var2, "G_FMF_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 314:
StringCopy(&Var2, "G_FMF_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 315:
StringCopy(&Var2, "G_FMF_15_4", 16);
iVar3=15;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 316:
StringCopy(&Var2, "G_FMF_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 317:
StringCopy(&Var2, "G_FMF_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 318:
StringCopy(&Var2, "G_FMF_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
}
switch (iParam0){
case 319:
StringCopy(&Var2, "W_FMF_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 320:
StringCopy(&Var2, "W_FMF_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 321:
StringCopy(&Var2, "W_FMF_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 322:
StringCopy(&Var2, "W_FMF_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 323:
StringCopy(&Var2, "W_FMF_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=825;
iVar5=6;
iVar8=4;
break;
case 324:
StringCopy(&Var2, "W_FMF_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 325:
StringCopy(&Var2, "W_FMF_1_1", 16);
iVar3=1;
iVar4=1;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 326:
StringCopy(&Var2, "W_FMF_1_2", 16);
iVar3=1;
iVar4=2;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
}
if(iVar8==1){
iVar9=(iParam0 - 10);
if(iVar9 >=0 && iVar9 < 121){
if(iVar9 > 8){
iVar9=(iVar9 - 1);
}
iVar1=round(((to_float(iVar1) * Global_262145.f_2054[iVar9]) * Global_297959.f_26));
}}elseif(iVar8==2){
iVar10=(iParam0 - 131);
if(iVar10 >=0 && iVar10 < 24){
iVar1=round(((to_float(iVar1) * Global_262145.f_2175[iVar10]) * Global_297959.f_27));
}}elseif(iVar8==3){
iVar11=(iParam0 - 155);
if(iVar11 >=0 && iVar11 < 128){
iVar1=round(((to_float(iVar1) * Global_262145.f_2200[iVar11]) * Global_297959.f_56));
}}elseif(iVar8==4){
iVar12=(iParam0 - 319);
if(iVar12 >=0 && iVar12 < 10){
iVar1=round(((to_float(iVar1) * Global_262145.f_2329[iVar12]) * Global_297959.f_28));
}}
if(iParam0 >=327){
Global_78472[0 /*14*/].f_5=4;
func_142(iVar7, iParam0, 327, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("hat"), 1)){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_26));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("glasses"), 1)){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_56));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("watch"), 1)){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_28));
}}}else{
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_147(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=10;
switch (iParam0){
case 0:
StringCopy(&Var2, "D_FMM_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=0;
break;
case 1:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=1;
iVar4=0;
iVar1=10000;
break;
case 2:
StringCopy(&Var2, "D_FMM_1_0", 16);
iVar3=2;
iVar4=0;
iVar1=5000;
break;
case 3:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=3;
iVar4=0;
iVar1=10000;
break;
case 4:
StringCopy(&Var2, "D_FMM_1_0", 16);
iVar3=4;
iVar4=0;
iVar1=5000;
break;
case 5:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=5;
iVar4=0;
iVar1=10000;
break;
default:
Global_78472[0 /*14*/].f_5=4;
func_142(iVar7, iParam0, 6, iParam1);
return;
break;
}
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_148(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=7;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=0;
break;
case 1:
iVar3=1;
iVar4=0;
if(Global_262145.f_4151 !=-1){
iVar1=Global_262145.f_4151;
}else{
iVar1=310;
}
break;
case 2:
iVar3=1;
iVar4=1;
if(Global_262145.f_4152 !=-1){
iVar1=Global_262145.f_4152;
}else{
iVar1=125;
}
break;
case 3:
iVar3=1;
iVar4=2;
if(Global_262145.f_4153 !=-1){
iVar1=Global_262145.f_4153;
}else{
iVar1=145;
}
break;
case 4:
iVar3=1;
iVar4=3;
if(Global_262145.f_4154 !=-1){
iVar1=Global_262145.f_4154;
}else{
iVar1=130;
}
break;
case 5:
iVar3=1;
iVar4=4;
if(Global_262145.f_4155 !=-1){
iVar1=Global_262145.f_4155;
}else{
iVar1=265;
}
break;
case 6:
iVar3=1;
iVar4=5;
if(Global_262145.f_4156 !=-1){
iVar1=Global_262145.f_4156;
}else{
iVar1=280;
}
break;
case 7:
iVar3=2;
iVar4=0;
if(Global_262145.f_4157 !=-1){
iVar1=Global_262145.f_4157;
}else{
iVar1=295;
}
break;
case 8:
iVar3=2;
iVar4=1;
if(Global_262145.f_4158 !=-1){
iVar1=Global_262145.f_4158;
}else{
iVar1=95;
}
break;
case 9:
iVar3=2;
iVar4=2;
if(Global_262145.f_4159 !=-1){
iVar1=Global_262145.f_4159;
}else{
iVar1=85;
}
break;
case 10:
iVar3=2;
iVar4=3;
if(Global_262145.f_4160 !=-1){
iVar1=Global_262145.f_4160;
}else{
iVar1=95;
}
break;
case 11:
iVar3=2;
iVar4=4;
if(Global_262145.f_4161 !=-1){
iVar1=Global_262145.f_4161;
}else{
iVar1=105;
}
break;
case 12:
iVar3=2;
iVar4=5;
if(Global_262145.f_4162 !=-1){
iVar1=Global_262145.f_4162;
}else{
iVar1=95;
}
break;
case 13:
iVar3=3;
iVar4=0;
if(Global_262145.f_4163 !=-1){
iVar1=Global_262145.f_4163;
}else{
iVar1=35;
}
break;
case 14:
iVar3=3;
iVar4=1;
if(Global_262145.f_4164 !=-1){
iVar1=Global_262145.f_4164;
}else{
iVar1=35;
}
break;
case 15:
iVar3=3;
iVar4=2;
if(Global_262145.f_4165 !=-1){
iVar1=Global_262145.f_4165;
}else{
iVar1=30;
}
break;
case 16:
iVar3=3;
iVar4=3;
if(Global_262145.f_4166 !=-1){
iVar1=Global_262145.f_4166;
}else{
iVar1=40;
}
break;
case 17:
iVar3=3;
iVar4=4;
if(Global_262145.f_4167 !=-1){
iVar1=Global_262145.f_4167;
}else{
iVar1=35;
}
break;
case 18:
iVar3=3;
iVar4=5;
if(Global_262145.f_4168 !=-1){
iVar1=Global_262145.f_4168;
}else{
iVar1=35;
}
break;
case 19:
iVar3=4;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 20:
iVar3=4;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 21:
iVar3=4;
iVar4=2;
if(Global_262145.f_4169 !=-1){
iVar1=Global_262145.f_4169;
}else{
iVar1=355;
}
break;
case 22:
iVar3=4;
iVar4=3;
if(Global_262145.f_4170 !=-1){
iVar1=Global_262145.f_4170;
}else{
iVar1=370;
}
break;
case 23:
iVar3=4;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 24:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 25:
iVar3=5;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 26:
iVar3=5;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 27:
iVar3=5;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 28:
iVar3=5;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 29:
iVar3=5;
iVar4=4;
if(Global_262145.f_4171 !=-1){
iVar1=Global_262145.f_4171;
}else{
iVar1=110;
}
break;
case 30:
iVar3=5;
iVar4=5;
if(Global_262145.f_4172 !=-1){
iVar1=Global_262145.f_4172;
}else{
iVar1=160;
}
break;
case 31:
iVar3=6;
iVar4=0;
if(Global_262145.f_4173 !=-1){
iVar1=Global_262145.f_4173;
}else{
iVar1=385;
}
break;
case 32:
iVar3=6;
iVar4=1;
if(Global_262145.f_4174 !=-1){
iVar1=Global_262145.f_4174;
}else{
iVar1=190;
}
break;
case 33:
iVar3=6;
iVar4=2;
if(Global_262145.f_4175 !=-1){
iVar1=Global_262145.f_4175;
}else{
iVar1=235;
}
break;
case 34:
iVar3=6;
iVar4=3;
if(Global_262145.f_4176 !=-1){
iVar1=Global_262145.f_4176;
}else{
iVar1=220;
}
break;
case 35:
iVar3=6;
iVar4=4;
if(Global_262145.f_4177 !=-1){
iVar1=Global_262145.f_4177;
}else{
iVar1=250;
}
break;
case 36:
iVar3=6;
iVar4=5;
if(Global_262145.f_4178 !=-1){
iVar1=Global_262145.f_4178;
}else{
iVar1=205;
}
break;
case 37:
iVar3=7;
iVar4=0;
if(Global_262145.f_4179 !=-1){
iVar1=Global_262145.f_4179;
}else{
iVar1=445;
}
break;
case 38:
iVar3=7;
iVar4=1;
if(Global_262145.f_4180 !=-1){
iVar1=Global_262145.f_4180;
}else{
iVar1=175;
}
break;
case 39:
iVar3=7;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 40:
iVar3=7;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 41:
iVar3=7;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 42:
iVar3=7;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 43:
iVar3=8;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 44:
iVar3=8;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 45:
iVar3=8;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 46:
iVar3=8;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 47:
iVar3=8;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 48:
iVar3=8;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 49:
iVar3=9;
iVar4=0;
if(Global_262145.f_4181 !=-1){
iVar1=Global_262145.f_4181;
}else{
iVar1=340;
}
break;
case 50:
iVar3=9;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 51:
iVar3=9;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 52:
iVar3=9;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 53:
iVar3=9;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 54:
iVar3=9;
iVar4=5;
iVar1=0;
bVar0=true;
break;
default:
Global_78472[0 /*14*/].f_5=4;
func_142(iVar7, iParam0, 55, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_58));
}
return;
break;
}
iVar1=round((to_float(iVar1) * Global_297959.f_58));
StringCopy(&Var2, "T_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_149(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=1;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=0;
break;
case 1:
iVar3=1;
iVar4=0;
iVar1=965;
break;
case 2:
iVar3=1;
iVar4=1;
iVar1=960;
break;
case 3:
iVar3=1;
iVar4=2;
iVar1=9500;
break;
case 4:
iVar3=1;
iVar4=3;
iVar1=975;
break;
case 5:
iVar3=2;
iVar4=0;
iVar1=1185;
break;
case 6:
iVar3=2;
iVar4=1;
iVar1=15000;
break;
case 7:
iVar3=2;
iVar4=2;
iVar1=1115;
break;
case 8:
iVar3=2;
iVar4=3;
iVar1=1105;
break;
case 9:
iVar3=3;
iVar4=0;
iVar1=25000;
break;
case 10:
iVar3=4;
iVar4=0;
iVar1=510;
break;
case 11:
iVar3=4;
iVar4=1;
iVar1=530;
break;
case 12:
iVar3=4;
iVar4=2;
iVar1=5500;
break;
case 13:
iVar3=4;
iVar4=3;
iVar1=535;
break;
case 14:
iVar3=5;
iVar4=0;
iVar1=1510;
break;
case 15:
iVar3=5;
iVar4=1;
iVar1=1530;
break;
case 16:
iVar3=5;
iVar4=2;
iVar1=14500;
break;
case 17:
iVar3=5;
iVar4=3;
iVar1=13000;
break;
case 18:
iVar3=6;
iVar4=0;
iVar1=8000;
break;
case 19:
iVar3=6;
iVar4=1;
iVar1=1265;
break;
case 20:
iVar3=6;
iVar4=2;
iVar1=8500;
break;
case 21:
iVar3=6;
iVar4=3;
iVar1=1210;
break;
case 22:
iVar3=7;
iVar4=0;
iVar1=2360;
break;
case 23:
iVar3=7;
iVar4=1;
iVar1=22500;
break;
case 24:
iVar3=7;
iVar4=2;
iVar1=2375;
break;
case 25:
iVar3=7;
iVar4=3;
iVar1=2485;
break;
default:
Global_78472[0 /*14*/].f_5=4;
func_142(iVar7, iParam0, 26, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_29));
}
return;
break;
}
StringCopy(&Var2, "M_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
iVar8=(iParam0 - 1);
if(iVar8 >=0 && iVar8 < 26){
iVar1=round(((to_float(iVar1) * Global_262145.f_2027[iVar8]) * Global_297959.f_29));
}
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_150(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=6;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=1765;
break;
case 1:
iVar3=0;
iVar4=1;
iVar1=760;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=760;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=765;
break;
case 4:
iVar3=0;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 5:
iVar3=0;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 6:
iVar3=0;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 7:
iVar3=0;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 8:
iVar3=0;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 9:
iVar3=0;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 10:
iVar3=0;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 11:
iVar3=0;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 12:
iVar3=0;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 13:
iVar3=0;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 14:
iVar3=0;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 15:
iVar3=0;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 16:
iVar3=1;
iVar4=0;
iVar1=85;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=80;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=90;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=90;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=95;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=100;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=60;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=55;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=100;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=1255;
break;
case 26:
iVar3=1;
iVar4=10;
iVar1=65;
break;
case 27:
iVar3=1;
iVar4=11;
iVar1=1050;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=1895;
break;
case 29:
iVar3=1;
iVar4=13;
iVar1=185;
break;
case 30:
iVar3=1;
iVar4=14;
iVar1=190;
break;
case 31:
iVar3=1;
iVar4=15;
iVar1=115;
break;
}
switch (iParam0){
case 32:
iVar3=2;
iVar4=0;
iVar1=415;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=115;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=135;
break;
case 35:
iVar3=2;
iVar4=3;
iVar1=125;
break;
case 36:
iVar3=2;
iVar4=4;
iVar1=105;
break;
case 37:
iVar3=2;
iVar4=5;
iVar1=130;
break;
case 38:
iVar3=2;
iVar4=6;
iVar1=3530;
break;
case 39:
iVar3=2;
iVar4=7;
iVar1=2610;
break;
case 40:
iVar3=2;
iVar4=8;
iVar1=1295;
break;
case 41:
iVar3=2;
iVar4=9;
iVar1=120;
break;
case 42:
iVar3=2;
iVar4=10;
iVar1=160;
break;
case 43:
iVar3=2;
iVar4=11;
iVar1=160;
break;
case 44:
iVar3=2;
iVar4=12;
iVar1=145;
break;
case 45:
iVar3=2;
iVar4=13;
iVar1=105;
break;
case 46:
iVar3=2;
iVar4=14;
iVar1=115;
break;
case 47:
iVar3=2;
iVar4=15;
iVar1=150;
break;
case 48:
iVar3=3;
iVar4=0;
iVar1=540;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=115;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=110;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=120;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=460;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=120;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=120;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=415;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=135;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=140;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=160;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=120;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=1025;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=1560;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=145;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=120;
break;
}
switch (iParam0){
case 64:
iVar3=4;
iVar4=0;
iVar1=365;
break;
case 65:
iVar3=4;
iVar4=1;
iVar1=100;
break;
case 66:
iVar3=4;
iVar4=2;
iVar1=65;
break;
case 67:
iVar3=4;
iVar4=3;
iVar1=85;
break;
case 68:
iVar3=4;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 69:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 70:
iVar3=4;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 71:
iVar3=4;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 72:
iVar3=4;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 73:
iVar3=4;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 74:
iVar3=4;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 75:
iVar3=4;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 76:
iVar3=4;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 77:
iVar3=4;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 78:
iVar3=4;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 79:
iVar3=4;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 80:
iVar3=5;
iVar4=0;
iVar1=50;
break;
case 81:
iVar3=5;
iVar4=1;
iVar1=35;
break;
case 82:
iVar3=5;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 83:
iVar3=5;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 84:
iVar3=5;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 85:
iVar3=5;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 86:
iVar3=5;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 87:
iVar3=5;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 88:
iVar3=5;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 89:
iVar3=5;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 90:
iVar3=5;
iVar4=10;
iVar1=50;
break;
case 91:
iVar3=5;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 92:
iVar3=5;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 93:
iVar3=5;
iVar4=13;
iVar1=50;
break;
case 94:
iVar3=5;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 95:
iVar3=5;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 96:
iVar3=6;
iVar4=0;
iVar1=2395;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=3675;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=320;
break;
case 99:
iVar3=6;
iVar4=3;
iVar1=3875;
break;
case 100:
iVar3=6;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 101:
iVar3=6;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 102:
iVar3=6;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 103:
iVar3=6;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 104:
iVar3=6;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 105:
iVar3=6;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 106:
iVar3=6;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 107:
iVar3=6;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 108:
iVar3=6;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 109:
iVar3=6;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 110:
iVar3=6;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 111:
iVar3=6;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 112:
iVar3=7;
iVar4=0;
iVar1=2050;
break;
case 113:
iVar3=7;
iVar4=1;
iVar1=375;
break;
case 114:
iVar3=7;
iVar4=2;
iVar1=2105;
break;
case 115:
iVar3=7;
iVar4=3;
iVar1=345;
break;
case 116:
iVar3=7;
iVar4=4;
iVar1=380;
break;
case 117:
iVar3=7;
iVar4=5;
iVar1=340;
break;
case 118:
iVar3=7;
iVar4=6;
iVar1=385;
break;
case 119:
iVar3=7;
iVar4=7;
iVar1=4135;
break;
case 120:
iVar3=7;
iVar4=8;
iVar1=370;
break;
case 121:
iVar3=7;
iVar4=9;
iVar1=375;
break;
case 122:
iVar3=7;
iVar4=10;
iVar1=385;
break;
case 123:
iVar3=7;
iVar4=11;
iVar1=365;
break;
case 124:
iVar3=7;
iVar4=12;
iVar1=325;
break;
case 125:
iVar3=7;
iVar4=13;
iVar1=325;
break;
case 126:
iVar3=7;
iVar4=14;
iVar1=370;
break;
case 127:
iVar3=7;
iVar4=15;
iVar1=330;
break;
}
switch (iParam0){
case 128:
iVar3=8;
iVar4=0;
iVar1=1025;
break;
case 129:
iVar3=8;
iVar4=1;
iVar1=390;
break;
case 130:
iVar3=8;
iVar4=2;
iVar1=400;
break;
case 131:
iVar3=8;
iVar4=3;
iVar1=390;
break;
case 132:
iVar3=8;
iVar4=4;
iVar1=365;
break;
case 133:
iVar3=8;
iVar4=5;
iVar1=410;
break;
case 134:
iVar3=8;
iVar4=6;
iVar1=4125;
break;
case 135:
iVar3=8;
iVar4=7;
iVar1=4365;
break;
case 136:
iVar3=8;
iVar4=8;
iVar1=5365;
break;
case 137:
iVar3=8;
iVar4=9;
iVar1=6225;
break;
case 138:
iVar3=8;
iVar4=10;
iVar1=3755;
break;
case 139:
iVar3=8;
iVar4=11;
iVar1=405;
break;
case 140:
iVar3=8;
iVar4=12;
iVar1=4115;
break;
case 141:
iVar3=8;
iVar4=13;
iVar1=2240;
break;
case 142:
iVar3=8;
iVar4=14;
iVar1=3850;
break;
case 143:
iVar3=8;
iVar4=15;
iVar1=3110;
break;
case 144:
iVar3=9;
iVar4=0;
iVar1=1950;
break;
case 145:
iVar3=9;
iVar4=1;
iVar1=455;
break;
case 146:
iVar3=9;
iVar4=2;
iVar1=405;
break;
case 147:
iVar3=9;
iVar4=3;
iVar1=410;
break;
case 148:
iVar3=9;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 149:
iVar3=9;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 150:
iVar3=9;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 151:
iVar3=9;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 152:
iVar3=9;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 153:
iVar3=9;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 154:
iVar3=9;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 155:
iVar3=9;
iVar4=11;
iVar1=415;
break;
case 156:
iVar3=9;
iVar4=12;
iVar1=4425;
break;
case 157:
iVar3=9;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 158:
iVar3=9;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 159:
iVar3=9;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 160:
iVar3=10;
iVar4=0;
iVar1=115;
break;
case 161:
iVar3=10;
iVar4=1;
iVar1=65;
break;
case 162:
iVar3=10;
iVar4=2;
iVar1=85;
break;
case 163:
iVar3=10;
iVar4=3;
iVar1=75;
break;
case 164:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 165:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 166:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 167:
iVar3=10;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 168:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 169:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 170:
iVar3=10;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 171:
iVar3=10;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 172:
iVar3=10;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 173:
iVar3=10;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 174:
iVar3=10;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 175:
iVar3=10;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 176:
iVar3=11;
iVar4=0;
iVar1=115;
break;
case 177:
iVar3=11;
iVar4=1;
iVar1=360;
break;
case 178:
iVar3=11;
iVar4=2;
iVar1=135;
break;
case 179:
iVar3=11;
iVar4=3;
iVar1=175;
break;
case 180:
iVar3=11;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 181:
iVar3=11;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 182:
iVar3=11;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 183:
iVar3=11;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 184:
iVar3=11;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 185:
iVar3=11;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 186:
iVar3=11;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 187:
iVar3=11;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 188:
iVar3=11;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 189:
iVar3=11;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 190:
iVar3=11;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 191:
iVar3=11;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 192:
iVar3=12;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 193:
iVar3=12;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 194:
iVar3=12;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 195:
iVar3=12;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 196:
iVar3=12;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 197:
iVar3=12;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 198:
iVar3=12;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 199:
iVar3=12;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 200:
iVar3=12;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 201:
iVar3=12;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 202:
iVar3=12;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 203:
iVar3=12;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 204:
iVar3=12;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 205:
iVar3=12;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 206:
iVar3=12;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 207:
iVar3=12;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 208:
iVar3=13;
iVar4=0;
iVar1=675;
break;
case 209:
iVar3=13;
iVar4=1;
iVar1=100;
break;
case 210:
iVar3=13;
iVar4=2;
iVar1=400;
break;
case 211:
iVar3=13;
iVar4=3;
iVar1=340;
break;
case 212:
iVar3=13;
iVar4=4;
iVar1=195;
break;
case 213:
iVar3=13;
iVar4=5;
iVar1=215;
break;
case 214:
iVar3=13;
iVar4=6;
iVar1=120;
break;
case 215:
iVar3=13;
iVar4=7;
iVar1=165;
break;
case 216:
iVar3=13;
iVar4=8;
iVar1=100;
break;
case 217:
iVar3=13;
iVar4=9;
iVar1=1040;
break;
case 218:
iVar3=13;
iVar4=10;
iVar1=100;
break;
case 219:
iVar3=13;
iVar4=11;
iVar1=120;
break;
case 220:
iVar3=13;
iVar4=12;
iVar1=210;
break;
case 221:
iVar3=13;
iVar4=13;
iVar1=205;
break;
case 222:
iVar3=13;
iVar4=14;
iVar1=200;
break;
case 223:
iVar3=13;
iVar4=15;
iVar1=100;
break;
case 224:
iVar3=14;
iVar4=0;
iVar1=1420;
break;
case 225:
iVar3=14;
iVar4=1;
iVar1=445;
break;
case 226:
iVar3=14;
iVar4=2;
iVar1=435;
break;
case 227:
iVar3=14;
iVar4=3;
iVar1=420;
break;
case 228:
iVar3=14;
iVar4=4;
iVar1=425;
break;
case 229:
iVar3=14;
iVar4=5;
iVar1=435;
break;
case 230:
iVar3=14;
iVar4=6;
iVar1=425;
break;
case 231:
iVar3=14;
iVar4=7;
iVar1=430;
break;
case 232:
iVar3=14;
iVar4=8;
iVar1=3215;
break;
case 233:
iVar3=14;
iVar4=9;
iVar1=3320;
break;
case 234:
iVar3=14;
iVar4=10;
iVar1=440;
break;
case 235:
iVar3=14;
iVar4=11;
iVar1=440;
break;
case 236:
iVar3=14;
iVar4=12;
iVar1=445;
break;
case 237:
iVar3=14;
iVar4=13;
iVar1=450;
break;
case 238:
iVar3=14;
iVar4=14;
iVar1=450;
break;
case 239:
iVar3=14;
iVar4=15;
iVar1=1255;
break;
case 240:
iVar3=15;
iVar4=0;
iVar1=750;
break;
case 241:
iVar3=15;
iVar4=1;
iVar1=165;
break;
case 242:
iVar3=15;
iVar4=2;
iVar1=460;
break;
case 243:
iVar3=15;
iVar4=3;
iVar1=190;
break;
case 244:
iVar3=15;
iVar4=4;
iVar1=195;
break;
case 245:
iVar3=15;
iVar4=5;
iVar1=200;
break;
case 246:
iVar3=15;
iVar4=6;
iVar1=205;
break;
case 247:
iVar3=15;
iVar4=7;
iVar1=210;
break;
case 248:
iVar3=15;
iVar4=8;
iVar1=215;
break;
case 249:
iVar3=15;
iVar4=9;
iVar1=220;
break;
case 250:
iVar3=15;
iVar4=10;
iVar1=455;
break;
case 251:
iVar3=15;
iVar4=11;
iVar1=175;
break;
case 252:
iVar3=15;
iVar4=12;
iVar1=800;
break;
case 253:
iVar3=15;
iVar4=13;
iVar1=790;
break;
case 254:
iVar3=15;
iVar4=14;
iVar1=175;
break;
case 255:
iVar3=15;
iVar4=15;
iVar1=190;
break;
}
StringCopy(&Var2, "F_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
iVar1=round(((to_float(iVar1) * Global_262145.f_1770[iVar8]) * Global_297959.f_25));
}
if(iParam0 >=256){
Global_78472[0 /*14*/].f_5=4;
func_142(iVar7, iParam0, 256, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_25));
}}else{
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_151(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=4;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=270;
break;
case 1:
iVar3=0;
iVar4=1;
iVar1=750;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=450;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=4875;
break;
case 4:
iVar3=0;
iVar4=4;
iVar1=1760;
break;
case 5:
iVar3=0;
iVar4=5;
iVar1=1090;
break;
case 6:
iVar3=0;
iVar4=6;
iVar1=2465;
break;
case 7:
iVar3=0;
iVar4=7;
iVar1=305;
break;
case 8:
iVar3=0;
iVar4=8;
iVar1=290;
break;
case 9:
iVar3=0;
iVar4=9;
iVar1=410;
break;
case 10:
iVar3=0;
iVar4=10;
iVar1=255;
break;
case 11:
iVar3=0;
iVar4=11;
iVar1=255;
break;
case 12:
iVar3=0;
iVar4=12;
iVar1=405;
break;
case 13:
iVar3=0;
iVar4=13;
iVar1=5000;
break;
case 14:
iVar3=0;
iVar4=14;
iVar1=4480;
break;
case 15:
iVar3=0;
iVar4=15;
iVar1=4335;
break;
}
switch (iParam0){
case 16:
iVar3=1;
iVar4=0;
iVar1=375;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=265;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=275;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=280;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=300;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=265;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=255;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=250;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=260;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=250;
break;
case 26:
iVar3=1;
iVar4=10;
iVar1=225;
break;
case 27:
iVar3=1;
iVar4=11;
iVar1=230;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=215;
break;
case 29:
iVar3=1;
iVar4=13;
iVar1=650;
break;
case 30:
iVar3=1;
iVar4=14;
iVar1=425;
break;
case 31:
iVar3=1;
iVar4=15;
iVar1=345;
break;
}
switch (iParam0){
case 32:
iVar3=2;
iVar4=0;
iVar1=115;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=110;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=250;
break;
case 35:
iVar3=2;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 36:
iVar3=2;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 37:
iVar3=2;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 38:
iVar3=2;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 39:
iVar3=2;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 40:
iVar3=2;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 41:
iVar3=2;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 42:
iVar3=2;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 43:
iVar3=2;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 44:
iVar3=2;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 45:
iVar3=2;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 46:
iVar3=2;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 47:
iVar3=2;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 48:
iVar3=3;
iVar4=0;
iVar1=290;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=115;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=135;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=125;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=120;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=130;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=110;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=525;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=115;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=535;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=135;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=120;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=130;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=140;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=130;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=520;
break;
}
switch (iParam0){
case 64:
iVar3=4;
iVar4=0;
iVar1=215;
break;
case 65:
iVar3=4;
iVar4=1;
iVar1=220;
break;
case 66:
iVar3=4;
iVar4=2;
iVar1=225;
break;
case 67:
iVar3=4;
iVar4=3;
iVar1=245;
break;
case 68:
iVar3=4;
iVar4=4;
iVar1=215;
break;
case 69:
iVar3=4;
iVar4=5;
iVar1=630;
break;
case 70:
iVar3=4;
iVar4=6;
iVar1=250;
break;
case 71:
iVar3=4;
iVar4=7;
iVar1=260;
break;
case 72:
iVar3=4;
iVar4=8;
iVar1=200;
break;
case 73:
iVar3=4;
iVar4=9;
iVar1=225;
break;
case 74:
iVar3=4;
iVar4=10;
iVar1=230;
break;
case 75:
iVar3=4;
iVar4=11;
iVar1=725;
break;
case 76:
iVar3=4;
iVar4=12;
iVar1=650;
break;
case 77:
iVar3=4;
iVar4=13;
iVar1=230;
break;
case 78:
iVar3=4;
iVar4=14;
iVar1=230;
break;
case 79:
iVar3=4;
iVar4=15;
iVar1=280;
break;
}
switch (iParam0){
case 80:
iVar3=5;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 81:
iVar3=5;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 82:
iVar3=5;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 83:
iVar3=5;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 84:
iVar3=5;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 85:
iVar3=5;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 86:
iVar3=5;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 87:
iVar3=5;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 88:
iVar3=5;
iVar4=8;
iVar1=330;
break;
case 89:
iVar3=5;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 90:
iVar3=5;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 91:
iVar3=5;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 92:
iVar3=5;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 93:
iVar3=5;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 94:
iVar3=5;
iVar4=14;
iVar1=320;
break;
case 95:
iVar3=5;
iVar4=15;
iVar1=315;
break;
}
switch (iParam0){
case 96:
iVar3=6;
iVar4=0;
iVar1=850;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=535;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=530;
break;
case 99:
iVar3=6;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 100:
iVar3=6;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 101:
iVar3=6;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 102:
iVar3=6;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 103:
iVar3=6;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 104:
iVar3=6;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 105:
iVar3=6;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 106:
iVar3=6;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 107:
iVar3=6;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 108:
iVar3=6;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 109:
iVar3=6;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 110:
iVar3=6;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 111:
iVar3=6;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 112:
iVar3=7;
iVar4=0;
iVar1=890;
break;
case 113:
iVar3=7;
iVar4=1;
iVar1=440;
break;
case 114:
iVar3=7;
iVar4=2;
iVar1=455;
break;
case 115:
iVar3=7;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 116:
iVar3=7;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 117:
iVar3=7;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 118:
iVar3=7;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 119:
iVar3=7;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 120:
iVar3=7;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 121:
iVar3=7;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 122:
iVar3=7;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 123:
iVar3=7;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 124:
iVar3=7;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 125:
iVar3=7;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 126:
iVar3=7;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 127:
iVar3=7;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 128:
iVar3=8;
iVar4=0;
iVar1=295;
break;
case 129:
iVar3=8;
iVar4=1;
iVar1=180;
break;
case 130:
iVar3=8;
iVar4=2;
iVar1=150;
break;
case 131:
iVar3=8;
iVar4=3;
iVar1=150;
break;
case 132:
iVar3=8;
iVar4=4;
iVar1=155;
break;
case 133:
iVar3=8;
iVar4=5;
iVar1=840;
break;
case 134:
iVar3=8;
iVar4=6;
iVar1=205;
break;
case 135:
iVar3=8;
iVar4=7;
iVar1=150;
break;
case 136:
iVar3=8;
iVar4=8;
iVar1=950;
break;
case 137:
iVar3=8;
iVar4=9;
iVar1=580;
break;
case 138:
iVar3=8;
iVar4=10;
iVar1=200;
break;
case 139:
iVar3=8;
iVar4=11;
iVar1=665;
break;
case 140:
iVar3=8;
iVar4=12;
iVar1=780;
break;
case 141:
iVar3=8;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 142:
iVar3=8;
iVar4=14;
iVar1=615;
break;
case 143:
iVar3=8;
iVar4=15;
iVar1=250;
break;
}
switch (iParam0){
case 144:
iVar3=9;
iVar4=0;
iVar1=495;
break;
case 145:
iVar3=9;
iVar4=1;
iVar1=435;
break;
case 146:
iVar3=9;
iVar4=2;
iVar1=420;
break;
case 147:
iVar3=9;
iVar4=3;
iVar1=390;
break;
case 148:
iVar3=9;
iVar4=4;
iVar1=485;
break;
case 149:
iVar3=9;
iVar4=5;
iVar1=380;
break;
case 150:
iVar3=9;
iVar4=6;
iVar1=1295;
break;
case 151:
iVar3=9;
iVar4=7;
iVar1=1135;
break;
case 152:
iVar3=9;
iVar4=8;
iVar1=1425;
break;
case 153:
iVar3=9;
iVar4=9;
iVar1=1645;
break;
case 154:
iVar3=9;
iVar4=10;
iVar1=1925;
break;
case 155:
iVar3=9;
iVar4=11;
iVar1=2250;
break;
case 156:
iVar3=9;
iVar4=12;
iVar1=365;
break;
case 157:
iVar3=9;
iVar4=13;
iVar1=360;
break;
case 158:
iVar3=9;
iVar4=14;
iVar1=2245;
break;
case 159:
iVar3=9;
iVar4=15;
iVar1=2170;
break;
case 160:
iVar3=10;
iVar4=0;
iVar1=50;
break;
case 161:
iVar3=10;
iVar4=1;
iVar1=100;
break;
case 162:
iVar3=10;
iVar4=2;
iVar1=65;
break;
case 163:
iVar3=10;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 164:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 165:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 166:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 167:
iVar3=10;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 168:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 169:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 170:
iVar3=10;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 171:
iVar3=10;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 172:
iVar3=10;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 173:
iVar3=10;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 174:
iVar3=10;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 175:
iVar3=10;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 176:
iVar3=11;
iVar4=0;
iVar1=275;
break;
case 177:
iVar3=11;
iVar4=1;
iVar1=300;
break;
case 178:
iVar3=11;
iVar4=2;
iVar1=145;
break;
case 179:
iVar3=11;
iVar4=3;
iVar1=150;
break;
case 180:
iVar3=11;
iVar4=4;
iVar1=110;
break;
case 181:
iVar3=11;
iVar4=5;
iVar1=95;
break;
case 182:
iVar3=11;
iVar4=6;
iVar1=155;
break;
case 183:
iVar3=11;
iVar4=7;
iVar1=155;
break;
case 184:
iVar3=11;
iVar4=8;
iVar1=510;
break;
case 185:
iVar3=11;
iVar4=9;
iVar1=165;
break;
case 186:
iVar3=11;
iVar4=10;
iVar1=465;
break;
case 187:
iVar3=11;
iVar4=11;
iVar1=250;
break;
case 188:
iVar3=11;
iVar4=12;
iVar1=110;
break;
case 189:
iVar3=11;
iVar4=13;
iVar1=470;
break;
case 190:
iVar3=11;
iVar4=14;
iVar1=480;
break;
case 191:
iVar3=11;
iVar4=15;
iVar1=155;
break;
case 192:
iVar3=12;
iVar4=0;
iVar1=275;
break;
case 193:
iVar3=12;
iVar4=1;
iVar1=395;
break;
case 194:
iVar3=12;
iVar4=2;
iVar1=285;
break;
case 195:
iVar3=12;
iVar4=3;
iVar1=560;
break;
case 196:
iVar3=12;
iVar4=4;
iVar1=595;
break;
case 197:
iVar3=12;
iVar4=5;
iVar1=295;
break;
case 198:
iVar3=12;
iVar4=6;
iVar1=230;
break;
case 199:
iVar3=12;
iVar4=7;
iVar1=215;
break;
case 200:
iVar3=12;
iVar4=8;
iVar1=270;
break;
case 201:
iVar3=12;
iVar4=9;
iVar1=295;
break;
case 202:
iVar3=12;
iVar4=10;
iVar1=285;
break;
case 203:
iVar3=12;
iVar4=11;
iVar1=215;
break;
case 204:
iVar3=12;
iVar4=12;
iVar1=210;
break;
case 205:
iVar3=12;
iVar4=13;
iVar1=290;
break;
case 206:
iVar3=12;
iVar4=14;
iVar1=230;
break;
case 207:
iVar3=12;
iVar4=15;
iVar1=215;
break;
}
switch (iParam0){
case 208:
iVar3=13;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 209:
iVar3=13;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 210:
iVar3=13;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 211:
iVar3=13;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 212:
iVar3=13;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 213:
iVar3=13;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 214:
iVar3=13;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 215:
iVar3=13;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 216:
iVar3=13;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 217:
iVar3=13;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 218:
iVar3=13;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 219:
iVar3=13;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 220:
iVar3=13;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 221:
iVar3=13;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 222:
iVar3=13;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 223:
iVar3=13;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 224:
iVar3=14;
iVar4=0;
iVar1=90;
break;
case 225:
iVar3=14;
iVar4=1;
iVar1=105;
break;
case 226:
iVar3=14;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 227:
iVar3=14;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 228:
iVar3=14;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 229:
iVar3=14;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 230:
iVar3=14;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 231:
iVar3=14;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 232:
iVar3=14;
iVar4=8;
iVar1=100;
break;
case 233:
iVar3=14;
iVar4=9;
iVar1=105;
break;
case 234:
iVar3=14;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 235:
iVar3=14;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 236:
iVar3=14;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 237:
iVar3=14;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 238:
iVar3=14;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 239:
iVar3=14;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 240:
iVar3=15;
iVar4=0;
iVar1=230;
break;
case 241:
iVar3=15;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 242:
iVar3=15;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 243:
iVar3=15;
iVar4=3;
iVar1=130;
break;
case 244:
iVar3=15;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 245:
iVar3=15;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 246:
iVar3=15;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 247:
iVar3=15;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 248:
iVar3=15;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 249:
iVar3=15;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 250:
iVar3=15;
iVar4=10;
iVar1=350;
break;
case 251:
iVar3=15;
iVar4=11;
iVar1=335;
break;
case 252:
iVar3=15;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 253:
iVar3=15;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 254:
iVar3=15;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 255:
iVar3=15;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
StringCopy(&Var2, "L_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
iVar1=round(((to_float(iVar1) * Global_262145.f_1256[iVar8]) * Global_297959.f_23));
}
if(iParam0 >=256){
Global_78472[0 /*14*/].f_5=4;
func_142(iVar7, iParam0, 256, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_23));
}}else{
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_152(int iParam0, int iParam1){
bool bVar0;
int iVar1;
char* sVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=3;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=1;
iVar4=0;
break;
case 2:
iVar3=2;
iVar4=0;
break;
case 3:
iVar3=3;
iVar4=0;
break;
case 4:
iVar3=4;
iVar4=0;
break;
case 5:
iVar3=5;
iVar4=0;
break;
case 6:
iVar3=6;
iVar4=0;
break;
case 7:
iVar3=7;
iVar4=0;
break;
case 8:
iVar3=8;
iVar4=0;
break;
case 9:
iVar3=9;
iVar4=0;
break;
case 10:
iVar3=10;
iVar4=0;
break;
case 11:
iVar3=11;
iVar4=0;
break;
case 12:
iVar3=12;
iVar4=0;
break;
case 13:
iVar3=13;
iVar4=0;
break;
case 14:
iVar3=14;
iVar4=0;
break;
case 15:
iVar3=15;
iVar4=0;
break;
}
if(iParam0 >=16){
Global_78472[0 /*14*/].f_5=4;
func_142(iVar7, iParam0, 16, iParam1);
return;
}
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_153(int iParam0, int iParam1){
bool bVar0;
int iVar1;
char* sVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=9;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=1;
iVar4=0;
break;
case 2:
iVar3=1;
iVar4=1;
break;
case 3:
iVar3=1;
iVar4=2;
break;
case 4:
iVar3=1;
iVar4=3;
break;
case 5:
iVar3=1;
iVar4=4;
break;
case 6:
iVar3=2;
iVar4=0;
break;
case 7:
iVar3=2;
iVar4=1;
break;
case 8:
iVar3=2;
iVar4=2;
break;
case 9:
iVar3=2;
iVar4=3;
break;
case 10:
iVar3=2;
iVar4=4;
break;
case 11:
iVar3=3;
iVar4=0;
break;
case 12:
iVar3=3;
iVar4=1;
break;
case 13:
iVar3=3;
iVar4=2;
break;
case 14:
iVar3=3;
iVar4=3;
break;
case 15:
iVar3=3;
iVar4=4;
break;
case 16:
iVar3=4;
iVar4=0;
break;
case 17:
iVar3=4;
iVar4=1;
break;
case 18:
iVar3=4;
iVar4=2;
break;
case 19:
iVar3=4;
iVar4=3;
break;
case 20:
iVar3=4;
iVar4=4;
break;
case 21:
iVar3=5;
iVar4=0;
break;
case 22:
iVar3=5;
iVar4=1;
break;
case 23:
iVar3=5;
iVar4=2;
break;
case 24:
iVar3=5;
iVar4=3;
break;
case 25:
iVar3=5;
iVar4=4;
break;
case 26:
iVar3=6;
iVar4=0;
break;
case 27:
iVar3=6;
iVar4=1;
break;
case 28:
iVar3=6;
iVar4=2;
break;
case 29:
iVar3=6;
iVar4=3;
break;
case 30:
iVar3=6;
iVar4=4;
break;
case 31:
iVar3=7;
iVar4=0;
break;
case 32:
iVar3=7;
iVar4=1;
break;
case 33:
iVar3=7;
iVar4=2;
break;
case 34:
iVar3=7;
iVar4=3;
break;
case 35:
iVar3=7;
iVar4=4;
break;
}
if(iParam0 >=36){
Global_78472[0 /*14*/].f_5=4;
func_142(iVar7, iParam0, 36, iParam1);
return;
}
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_154(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=8;
switch (iParam0){
case 0:
StringCopy(&Var2, "U_FMF_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=250;
break;
case 1:
StringCopy(&Var2, "U_FMF_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=225;
break;
case 2:
StringCopy(&Var2, "U_FMF_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=50;
break;
case 3:
StringCopy(&Var2, "U_FMF_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=40;
break;
case 4:
StringCopy(&Var2, "U_FMF_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=40;
break;
case 5:
StringCopy(&Var2, "U_FMF_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=40;
break;
case 6:
StringCopy(&Var2, "U_FMF_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=40;
break;
case 7:
StringCopy(&Var2, "U_FMF_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=45;
break;
case 8:
StringCopy(&Var2, "U_FMF_0_8", 16);
iVar3=0;
iVar4=8;
iVar1=40;
break;
case 9:
StringCopy(&Var2, "U_FMF_0_9", 16);
iVar3=0;
iVar4=9;
iVar1=40;
break;
case 10:
StringCopy(&Var2, "U_FMF_0_10", 16);
iVar3=0;
iVar4=10;
iVar1=135;
break;
case 11:
StringCopy(&Var2, "U_FMF_0_11", 16);
iVar3=0;
iVar4=11;
iVar1=60;
break;
case 12:
StringCopy(&Var2, "U_FMF_0_12", 16);
iVar3=0;
iVar4=12;
iVar1=220;
break;
case 13:
StringCopy(&Var2, "U_FMF_0_13", 16);
iVar3=0;
iVar4=13;
iVar1=45;
break;
case 14:
StringCopy(&Var2, "U_FMF_0_14", 16);
iVar3=0;
iVar4=14;
iVar1=45;
break;
case 15:
StringCopy(&Var2, "U_FMF_0_15", 16);
iVar3=0;
iVar4=15;
iVar1=125;
break;
case 16:
StringCopy(&Var2, "U_FMF_0_0", 16);
iVar3=1;
iVar4=0;
iVar1=250;
break;
case 17:
StringCopy(&Var2, "U_FMF_0_1", 16);
iVar3=1;
iVar4=1;
iVar1=60;
break;
case 18:
StringCopy(&Var2, "U_FMF_0_2", 16);
iVar3=1;
iVar4=2;
iVar1=50;
break;
case 19:
StringCopy(&Var2, "U_FMF_0_3", 16);
iVar3=1;
iVar4=3;
iVar1=40;
break;
case 20:
StringCopy(&Var2, "U_FMF_0_4", 16);
iVar3=1;
iVar4=4;
iVar1=40;
break;
case 21:
StringCopy(&Var2, "U_FMF_0_5", 16);
iVar3=1;
iVar4=5;
iVar1=40;
break;
case 22:
StringCopy(&Var2, "U_FMF_0_6", 16);
iVar3=1;
iVar4=6;
iVar1=40;
break;
case 23:
StringCopy(&Var2, "U_FMF_0_7", 16);
iVar3=1;
iVar4=7;
iVar1=45;
break;
case 24:
StringCopy(&Var2, "U_FMF_0_8", 16);
iVar3=1;
iVar4=8;
iVar1=40;
break;
case 25:
StringCopy(&Var2, "U_FMF_0_9", 16);
iVar3=1;
iVar4=9;
iVar1=40;
break;
case 26:
StringCopy(&Var2, "U_FMF_0_10", 16);
iVar3=1;
iVar4=10;
iVar1=135;
break;
case 27:
StringCopy(&Var2, "U_FMF_0_11", 16);
iVar3=1;
iVar4=11;
iVar1=60;
break;
case 28:
StringCopy(&Var2, "U_FMF_0_12", 16);
iVar3=1;
iVar4=12;
iVar1=220;
break;
case 29:
StringCopy(&Var2, "U_FMF_0_13", 16);
iVar3=1;
iVar4=13;
iVar1=45;
break;
case 30:
StringCopy(&Var2, "U_FMF_0_14", 16);
iVar3=1;
iVar4=14;
iVar1=45;
break;
case 31:
StringCopy(&Var2, "U_FMF_0_15", 16);
iVar3=1;
iVar4=15;
iVar1=125;
break;
case 32:
iVar3=2;
iVar4=0;
break;
case 33:
iVar3=3;
iVar4=0;
break;
case 34:
StringCopy(&Var2, "U_FMF_4_0", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "U_FMF_4_1", 16);
iVar3=4;
iVar4=1;
bVar0=true;
break;
case 36:
StringCopy(&Var2, "U_FMF_4_2", 16);
iVar3=4;
iVar4=2;
bVar0=true;
break;
case 37:
StringCopy(&Var2, "U_FMF_4_3", 16);
iVar3=4;
iVar4=3;
bVar0=true;
break;
case 38:
StringCopy(&Var2, "U_FMF_4_4", 16);
iVar3=4;
iVar4=4;
bVar0=true;
break;
case 39:
StringCopy(&Var2, "U_FMF_4_5", 16);
iVar3=4;
iVar4=5;
bVar0=true;
break;
case 40:
StringCopy(&Var2, "U_FMF_4_6", 16);
iVar3=4;
iVar4=6;
bVar0=true;
break;
case 41:
StringCopy(&Var2, "U_FMF_4_7", 16);
iVar3=4;
iVar4=7;
bVar0=true;
break;
case 42:
StringCopy(&Var2, "U_FMF_4_8", 16);
iVar3=4;
iVar4=8;
bVar0=true;
break;
case 43:
StringCopy(&Var2, "U_FMF_4_9", 16);
iVar3=4;
iVar4=9;
bVar0=true;
break;
case 44:
StringCopy(&Var2, "U_FMF_4_10", 16);
iVar3=4;
iVar4=10;
bVar0=true;
break;
case 45:
StringCopy(&Var2, "U_FMF_4_11", 16);
iVar3=4;
iVar4=11;
bVar0=true;
break;
case 46:
StringCopy(&Var2, "U_FMF_4_12", 16);
iVar3=4;
iVar4=12;
bVar0=true;
break;
case 47:
StringCopy(&Var2, "U_FMF_4_13", 16);
iVar3=4;
iVar4=13;
iVar1=40;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[77]));
break;
case 48:
StringCopy(&Var2, "U_FMF_4_14", 16);
iVar3=4;
iVar4=14;
iVar1=40;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[78]));
break;
case 49:
StringCopy(&Var2, "U_FMF_4_15", 16);
iVar3=4;
iVar4=15;
bVar0=true;
break;
case 50:
StringCopy(&Var2, "U_FMF_5_0", 16);
iVar3=5;
iVar4=0;
iVar1=45;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[80]));
break;
case 51:
StringCopy(&Var2, "U_FMF_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=60;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[81]));
break;
case 52:
StringCopy(&Var2, "U_FMF_5_2", 16);
iVar3=5;
iVar4=2;
bVar0=true;
break;
case 53:
StringCopy(&Var2, "U_FMF_5_3", 16);
iVar3=5;
iVar4=3;
bVar0=true;
break;
case 54:
StringCopy(&Var2, "U_FMF_5_4", 16);
iVar3=5;
iVar4=4;
bVar0=true;
break;
case 55:
StringCopy(&Var2, "U_FMF_5_5", 16);
iVar3=5;
iVar4=5;
bVar0=true;
break;
case 56:
StringCopy(&Var2, "U_FMF_5_6", 16);
iVar3=5;
iVar4=6;
bVar0=true;
break;
case 57:
StringCopy(&Var2, "U_FMF_5_7", 16);
iVar3=5;
iVar4=7;
iVar1=375;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[87]));
break;
case 58:
StringCopy(&Var2, "U_FMF_5_8", 16);
iVar3=5;
iVar4=8;
bVar0=true;
break;
case 59:
StringCopy(&Var2, "U_FMF_5_9", 16);
iVar3=5;
iVar4=9;
iVar1=90;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[89]));
break;
case 60:
StringCopy(&Var2, "U_FMF_5_10", 16);
iVar3=5;
iVar4=10;
bVar0=true;
break;
case 61:
StringCopy(&Var2, "U_FMF_5_11", 16);
iVar3=5;
iVar4=11;
bVar0=true;
break;
case 62:
StringCopy(&Var2, "U_FMF_5_12", 16);
iVar3=5;
iVar4=12;
bVar0=true;
break;
case 63:
StringCopy(&Var2, "U_FMF_5_13", 16);
iVar3=5;
iVar4=13;
bVar0=true;
break;
case 64:
StringCopy(&Var2, "U_FMF_5_14", 16);
iVar3=5;
iVar4=14;
bVar0=true;
break;
case 65:
StringCopy(&Var2, "U_FMF_5_15", 16);
iVar3=5;
iVar4=15;
bVar0=true;
break;
case 66:
iVar3=6;
iVar4=0;
break;
case 67:
iVar3=7;
iVar4=0;
break;
case 68:
iVar3=8;
iVar4=0;
break;
case 69:
iVar3=9;
iVar4=0;
break;
case 70:
iVar3=10;
iVar4=0;
break;
case 71:
StringCopy(&Var2, "U_FMF_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=90;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[176]));
break;
case 72:
StringCopy(&Var2, "U_FMF_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=95;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[177]));
break;
case 73:
StringCopy(&Var2, "U_FMF_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=95;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[178]));
break;
case 74:
StringCopy(&Var2, "U_FMF_11_3", 16);
iVar3=11;
iVar4=3;
bVar0=true;
break;
case 75:
StringCopy(&Var2, "U_FMF_11_4", 16);
iVar3=11;
iVar4=4;
bVar0=true;
break;
case 76:
StringCopy(&Var2, "U_FMF_11_5", 16);
iVar3=11;
iVar4=5;
bVar0=true;
break;
case 77:
StringCopy(&Var2, "U_FMF_11_6", 16);
iVar3=11;
iVar4=6;
bVar0=true;
break;
case 78:
StringCopy(&Var2, "U_FMF_11_7", 16);
iVar3=11;
iVar4=7;
bVar0=true;
break;
case 79:
StringCopy(&Var2, "U_FMF_11_8", 16);
iVar3=11;
iVar4=8;
bVar0=true;
break;
case 80:
StringCopy(&Var2, "U_FMF_11_9", 16);
iVar3=11;
iVar4=9;
bVar0=true;
break;
case 81:
StringCopy(&Var2, "U_FMF_11_10", 16);
iVar3=11;
iVar4=10;
iVar1=150;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[186]));
break;
case 82:
StringCopy(&Var2, "U_FMF_11_11", 16);
iVar3=11;
iVar4=11;
iVar1=65;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[187]));
break;
case 83:
StringCopy(&Var2, "U_FMF_11_12", 16);
iVar3=11;
iVar4=12;
bVar0=true;
break;
case 84:
StringCopy(&Var2, "U_FMF_11_13", 16);
iVar3=11;
iVar4=13;
bVar0=true;
break;
case 85:
StringCopy(&Var2, "U_FMF_11_14", 16);
iVar3=11;
iVar4=14;
bVar0=true;
break;
case 86:
StringCopy(&Var2, "U_FMF_11_15", 16);
iVar3=11;
iVar4=15;
iVar1=145;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[191]));
break;
case 87:
StringCopy(&Var2, "U_FMF_12_0", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 88:
StringCopy(&Var2, "U_FMF_12_1", 16);
iVar3=12;
iVar4=1;
bVar0=true;
break;
case 89:
StringCopy(&Var2, "U_FMF_12_2", 16);
iVar3=12;
iVar4=2;
bVar0=true;
break;
case 90:
StringCopy(&Var2, "U_FMF_12_3", 16);
iVar3=12;
iVar4=3;
bVar0=true;
break;
case 91:
StringCopy(&Var2, "U_FMF_12_4", 16);
iVar3=12;
iVar4=4;
bVar0=true;
break;
case 92:
StringCopy(&Var2, "U_FMF_12_5", 16);
iVar3=12;
iVar4=5;
bVar0=true;
break;
case 93:
StringCopy(&Var2, "U_FMF_12_6", 16);
iVar3=12;
iVar4=6;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "U_FMF_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=1560;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[199]));
break;
case 95:
StringCopy(&Var2, "U_FMF_12_8", 16);
iVar3=12;
iVar4=8;
iVar1=195;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[200]));
break;
case 96:
StringCopy(&Var2, "U_FMF_12_9", 16);
iVar3=12;
iVar4=9;
iVar1=200;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[201]));
break;
case 97:
StringCopy(&Var2, "U_FMF_12_10", 16);
iVar3=12;
iVar4=10;
bVar0=true;
break;
case 98:
StringCopy(&Var2, "U_FMF_12_11", 16);
iVar3=12;
iVar4=11;
bVar0=true;
break;
case 99:
StringCopy(&Var2, "U_FMF_12_12", 16);
iVar3=12;
iVar4=12;
bVar0=true;
break;
case 100:
StringCopy(&Var2, "U_FMF_12_13", 16);
iVar3=12;
iVar4=13;
bVar0=true;
break;
case 101:
StringCopy(&Var2, "U_FMF_12_14", 16);
iVar3=12;
iVar4=14;
bVar0=true;
break;
case 102:
StringCopy(&Var2, "U_FMF_12_15", 16);
iVar3=12;
iVar4=15;
bVar0=true;
break;
case 103:
StringCopy(&Var2, "U_FMF_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=975;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[208]));
break;
case 104:
StringCopy(&Var2, "U_FMF_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=2670;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[209]));
break;
case 105:
StringCopy(&Var2, "U_FMF_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=480;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[210]));
break;
case 106:
StringCopy(&Var2, "U_FMF_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=400;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[211]));
break;
case 107:
StringCopy(&Var2, "U_FMF_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=2500;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[212]));
break;
case 108:
StringCopy(&Var2, "U_FMF_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=2060;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[213]));
break;
case 109:
StringCopy(&Var2, "U_FMF_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=2620;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[214]));
break;
case 110:
StringCopy(&Var2, "U_FMF_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=475;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[215]));
break;
case 111:
StringCopy(&Var2, "U_FMF_13_8", 16);
iVar3=13;
iVar4=8;
iVar1=490;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[216]));
break;
case 112:
StringCopy(&Var2, "U_FMF_13_9", 16);
iVar3=13;
iVar4=9;
iVar1=2280;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[217]));
break;
case 113:
StringCopy(&Var2, "U_FMF_13_10", 16);
iVar3=13;
iVar4=10;
iVar1=485;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[218]));
break;
case 114:
StringCopy(&Var2, "U_FMF_13_11", 16);
iVar3=13;
iVar4=11;
iVar1=2390;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[219]));
break;
case 115:
StringCopy(&Var2, "U_FMF_13_12", 16);
iVar3=13;
iVar4=12;
iVar1=2610;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[220]));
break;
case 116:
StringCopy(&Var2, "U_FMF_13_13", 16);
iVar3=13;
iVar4=13;
iVar1=1450;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[221]));
break;
case 117:
StringCopy(&Var2, "U_FMF_13_14", 16);
iVar3=13;
iVar4=14;
iVar1=2720;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[222]));
break;
case 118:
StringCopy(&Var2, "U_FMF_13_15", 16);
iVar3=13;
iVar4=15;
iVar1=4995;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[223]));
break;
case 119:
iVar3=14;
iVar4=0;
break;
case 120:
StringCopy(&Var2, "U_FMF_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=325;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[240]));
break;
case 121:
StringCopy(&Var2, "U_FMF_15_1", 16);
iVar3=15;
iVar4=1;
bVar0=true;
break;
case 122:
StringCopy(&Var2, "U_FMF_15_2", 16);
iVar3=15;
iVar4=2;
bVar0=true;
break;
case 123:
StringCopy(&Var2, "U_FMF_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=130;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[243]));
break;
case 124:
StringCopy(&Var2, "U_FMF_15_4", 16);
iVar3=15;
iVar4=4;
bVar0=true;
break;
case 125:
StringCopy(&Var2, "U_FMF_15_5", 16);
iVar3=15;
iVar4=5;
bVar0=true;
break;
case 126:
StringCopy(&Var2, "U_FMF_15_6", 16);
iVar3=15;
iVar4=6;
bVar0=true;
break;
case 127:
StringCopy(&Var2, "U_FMF_15_7", 16);
iVar3=15;
iVar4=7;
bVar0=true;
break;
case 128:
StringCopy(&Var2, "U_FMF_15_8", 16);
iVar3=15;
iVar4=8;
bVar0=true;
break;
case 129:
StringCopy(&Var2, "U_FMF_15_9", 16);
iVar3=15;
iVar4=9;
bVar0=true;
break;
case 130:
StringCopy(&Var2, "U_FMF_15_10", 16);
iVar3=15;
iVar4=10;
iVar1=450;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[250]));
break;
case 131:
StringCopy(&Var2, "U_FMF_15_11", 16);
iVar3=15;
iVar4=11;
iVar1=465;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[251]));
break;
case 132:
StringCopy(&Var2, "U_FMF_15_12", 16);
iVar3=15;
iVar4=12;
bVar0=true;
break;
case 133:
StringCopy(&Var2, "U_FMF_15_13", 16);
iVar3=15;
iVar4=13;
bVar0=true;
break;
case 134:
StringCopy(&Var2, "U_FMF_15_14", 16);
iVar3=15;
iVar4=14;
bVar0=true;
break;
case 135:
StringCopy(&Var2, "U_FMF_15_15", 16);
iVar3=15;
iVar4=15;
bVar0=true;
break;
default:
Global_78472[0 /*14*/].f_5=4;
func_142(iVar7, iParam0, 136, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_24));
}
return;
break;
}
if(iParam0==4 || iParam0==20){
if(func_174(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round((to_float(1250) * Global_262145.f_2990));
}else{
iVar1=round((to_float(40) * Global_262145.f_1513[4]));
}}elseif(iParam0==7 || iParam0==23){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round((to_float(450) * Global_262145.f_2989));
}elseif(iParam0==9 || iParam0==25){
if(func_174(87, -1)){
StringCopy(&Var2, "REW_REDSK", 16);
iVar1=round((to_float(500) * Global_262145.f_2988));
}else{
iVar1=round((to_float(40) * Global_262145.f_1513[9]));
}}elseif(iParam0 >=0 && iParam0 < 16){
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
iVar1=round((to_float(iVar1) * Global_262145.f_1513[iVar8]));
}}elseif(iParam0 >=16 && iParam0 < 32){
iVar9=(iParam0 - 16);
if(iVar9 >=0 && iVar9 < 256){
iVar1=round((to_float(iVar1) * Global_262145.f_1513[iVar9]));
}}
iVar1=round((to_float(iVar1) * Global_297959.f_24));
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_155(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=11;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=250;
break;
case 1:
iVar3=0;
iVar4=1;
iVar1=225;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=50;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=40;
break;
case 4:
iVar3=0;
iVar4=4;
iVar1=40;
break;
case 5:
iVar3=0;
iVar4=5;
iVar1=40;
break;
case 6:
iVar3=0;
iVar4=6;
iVar1=40;
break;
case 7:
iVar3=0;
iVar4=7;
iVar1=45;
break;
case 8:
iVar3=0;
iVar4=8;
iVar1=40;
break;
case 9:
iVar3=0;
iVar4=9;
iVar1=40;
break;
case 10:
iVar3=0;
iVar4=10;
iVar1=135;
break;
case 11:
iVar3=0;
iVar4=11;
iVar1=60;
break;
case 12:
iVar3=0;
iVar4=12;
iVar1=220;
break;
case 13:
iVar3=0;
iVar4=13;
iVar1=45;
break;
case 14:
iVar3=0;
iVar4=14;
iVar1=45;
break;
case 15:
iVar3=0;
iVar4=15;
iVar1=125;
break;
}
switch (iParam0){
case 16:
iVar3=1;
iVar4=0;
iVar1=390;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=230;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=355;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=5000;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=2725;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=3265;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=3625;
break;
case 26:
iVar3=1;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 27:
iVar3=1;
iVar4=11;
iVar1=4220;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 29:
iVar3=1;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 30:
iVar3=1;
iVar4=14;
iVar1=310;
break;
case 31:
iVar3=1;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 32:
iVar3=2;
iVar4=0;
iVar1=45;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=210;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=75;
break;
case 35:
iVar3=2;
iVar4=3;
iVar1=50;
break;
case 36:
iVar3=2;
iVar4=4;
iVar1=60;
break;
case 37:
iVar3=2;
iVar4=5;
iVar1=50;
break;
case 38:
iVar3=2;
iVar4=6;
iVar1=295;
break;
case 39:
iVar3=2;
iVar4=7;
iVar1=80;
break;
case 40:
iVar3=2;
iVar4=8;
iVar1=75;
break;
case 41:
iVar3=2;
iVar4=9;
iVar1=2250;
break;
case 42:
iVar3=2;
iVar4=10;
iVar1=275;
break;
case 43:
iVar3=2;
iVar4=11;
iVar1=445;
break;
case 44:
iVar3=2;
iVar4=12;
iVar1=50;
break;
case 45:
iVar3=2;
iVar4=13;
iVar1=40;
break;
case 46:
iVar3=2;
iVar4=14;
iVar1=45;
break;
case 47:
iVar3=2;
iVar4=15;
iVar1=470;
break;
}
switch (iParam0){
case 48:
iVar3=3;
iVar4=0;
iVar1=95;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=95;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=360;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=100;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=60;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=295;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=460;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=1980;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=2110;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=95;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 64:
iVar3=4;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 65:
iVar3=4;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 66:
iVar3=4;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 67:
iVar3=4;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 68:
iVar3=4;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 69:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 70:
iVar3=4;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 71:
iVar3=4;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 72:
iVar3=4;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 73:
iVar3=4;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 74:
iVar3=4;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 75:
iVar3=4;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 76:
iVar3=4;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 77:
iVar3=4;
iVar4=13;
iVar1=40;
break;
case 78:
iVar3=4;
iVar4=14;
iVar1=40;
break;
case 79:
iVar3=4;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 80:
iVar3=5;
iVar4=0;
iVar1=45;
break;
case 81:
iVar3=5;
iVar4=1;
iVar1=60;
break;
case 82:
iVar3=5;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 83:
iVar3=5;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 84:
iVar3=5;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 85:
iVar3=5;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 86:
iVar3=5;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 87:
iVar3=5;
iVar4=7;
iVar1=375;
break;
case 88:
iVar3=5;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 89:
iVar3=5;
iVar4=9;
iVar1=90;
break;
case 90:
iVar3=5;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 91:
iVar3=5;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 92:
iVar3=5;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 93:
iVar3=5;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 94:
iVar3=5;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 95:
iVar3=5;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 96:
iVar3=6;
iVar4=0;
iVar1=900;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=1000;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=1050;
break;
case 99:
iVar3=6;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 100:
iVar3=6;
iVar4=4;
iVar1=1000;
break;
case 101:
iVar3=6;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 102:
iVar3=6;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 103:
iVar3=6;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 104:
iVar3=6;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 105:
iVar3=6;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 106:
iVar3=6;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 107:
iVar3=6;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 108:
iVar3=6;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 109:
iVar3=6;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 110:
iVar3=6;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 111:
iVar3=6;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 112:
iVar3=7;
iVar4=0;
iVar1=2975;
break;
case 113:
iVar3=7;
iVar4=1;
iVar1=1100;
break;
case 114:
iVar3=7;
iVar4=2;
iVar1=1825;
break;
case 115:
iVar3=7;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 116:
iVar3=7;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 117:
iVar3=7;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 118:
iVar3=7;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 119:
iVar3=7;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 120:
iVar3=7;
iVar4=8;
iVar1=1750;
break;
case 121:
iVar3=7;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 122:
iVar3=7;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 123:
iVar3=7;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 124:
iVar3=7;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 125:
iVar3=7;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 126:
iVar3=7;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 127:
iVar3=7;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 128:
iVar3=8;
iVar4=0;
iVar1=1025;
break;
case 129:
iVar3=8;
iVar4=1;
iVar1=1075;
break;
case 130:
iVar3=8;
iVar4=2;
iVar1=2805;
break;
case 131:
iVar3=8;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 132:
iVar3=8;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 133:
iVar3=8;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 134:
iVar3=8;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 135:
iVar3=8;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 136:
iVar3=8;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 137:
iVar3=8;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 138:
iVar3=8;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 139:
iVar3=8;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 140:
iVar3=8;
iVar4=12;
iVar1=2250;
break;
case 141:
iVar3=8;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 142:
iVar3=8;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 143:
iVar3=8;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 144:
iVar3=9;
iVar4=0;
iVar1=495;
break;
case 145:
iVar3=9;
iVar4=1;
iVar1=95;
break;
case 146:
iVar3=9;
iVar4=2;
iVar1=95;
break;
case 147:
iVar3=9;
iVar4=3;
iVar1=525;
break;
case 148:
iVar3=9;
iVar4=4;
iVar1=100;
break;
case 149:
iVar3=9;
iVar4=5;
iVar1=110;
break;
case 150:
iVar3=9;
iVar4=6;
iVar1=100;
break;
case 151:
iVar3=9;
iVar4=7;
iVar1=110;
break;
case 152:
iVar3=9;
iVar4=8;
iVar1=130;
break;
case 153:
iVar3=9;
iVar4=9;
iVar1=560;
break;
case 154:
iVar3=9;
iVar4=10;
iVar1=295;
break;
case 155:
iVar3=9;
iVar4=11;
iVar1=975;
break;
case 156:
iVar3=9;
iVar4=12;
iVar1=160;
break;
case 157:
iVar3=9;
iVar4=13;
iVar1=100;
break;
case 158:
iVar3=9;
iVar4=14;
iVar1=1700;
break;
case 159:
iVar3=9;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 160:
iVar3=10;
iVar4=0;
iVar1=380;
break;
case 161:
iVar3=10;
iVar4=1;
iVar1=95;
break;
case 162:
iVar3=10;
iVar4=2;
iVar1=95;
break;
case 163:
iVar3=10;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 164:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 165:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 166:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 167:
iVar3=10;
iVar4=7;
iVar1=110;
break;
case 168:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 169:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 170:
iVar3=10;
iVar4=10;
iVar1=95;
break;
case 171:
iVar3=10;
iVar4=11;
iVar1=90;
break;
case 172:
iVar3=10;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 173:
iVar3=10;
iVar4=13;
iVar1=85;
break;
case 174:
iVar3=10;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 175:
iVar3=10;
iVar4=15;
iVar1=215;
break;
}
switch (iParam0){
case 176:
iVar3=11;
iVar4=0;
iVar1=90;
break;
case 177:
iVar3=11;
iVar4=1;
iVar1=95;
break;
case 178:
iVar3=11;
iVar4=2;
iVar1=95;
break;
case 179:
iVar3=11;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 180:
iVar3=11;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 181:
iVar3=11;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 182:
iVar3=11;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 183:
iVar3=11;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 184:
iVar3=11;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 185:
iVar3=11;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 186:
iVar3=11;
iVar4=10;
iVar1=150;
break;
case 187:
iVar3=11;
iVar4=11;
iVar1=65;
break;
case 188:
iVar3=11;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 189:
iVar3=11;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 190:
iVar3=11;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 191:
iVar3=11;
iVar4=15;
iVar1=145;
break;
}
switch (iParam0){
case 192:
iVar3=12;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 193:
iVar3=12;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 194:
iVar3=12;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 195:
iVar3=12;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 196:
iVar3=12;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 197:
iVar3=12;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 198:
iVar3=12;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 199:
iVar3=12;
iVar4=7;
iVar1=1560;
break;
case 200:
iVar3=12;
iVar4=8;
iVar1=195;
break;
case 201:
iVar3=12;
iVar4=9;
iVar1=200;
break;
case 202:
iVar3=12;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 203:
iVar3=12;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 204:
iVar3=12;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 205:
iVar3=12;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 206:
iVar3=12;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 207:
iVar3=12;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 208:
iVar3=13;
iVar4=0;
iVar1=975;
break;
case 209:
iVar3=13;
iVar4=1;
iVar1=2670;
break;
case 210:
iVar3=13;
iVar4=2;
iVar1=480;
break;
case 211:
iVar3=13;
iVar4=3;
iVar1=400;
break;
case 212:
iVar3=13;
iVar4=4;
iVar1=2500;
break;
case 213:
iVar3=13;
iVar4=5;
iVar1=2060;
break;
case 214:
iVar3=13;
iVar4=6;
iVar1=2620;
break;
case 215:
iVar3=13;
iVar4=7;
iVar1=475;
break;
case 216:
iVar3=13;
iVar4=8;
iVar1=490;
break;
case 217:
iVar3=13;
iVar4=9;
iVar1=2280;
break;
case 218:
iVar3=13;
iVar4=10;
iVar1=485;
break;
case 219:
iVar3=13;
iVar4=11;
iVar1=2390;
break;
case 220:
iVar3=13;
iVar4=12;
iVar1=2610;
break;
case 221:
iVar3=13;
iVar4=13;
iVar1=1450;
break;
case 222:
iVar3=13;
iVar4=14;
iVar1=2720;
break;
case 223:
iVar3=13;
iVar4=15;
iVar1=4995;
break;
}
switch (iParam0){
case 224:
iVar3=14;
iVar4=0;
iVar1=265;
break;
case 225:
iVar3=14;
iVar4=1;
iVar1=385;
break;
case 226:
iVar3=14;
iVar4=2;
iVar1=345;
break;
case 227:
iVar3=14;
iVar4=3;
iVar1=330;
break;
case 228:
iVar3=14;
iVar4=4;
iVar1=430;
break;
case 229:
iVar3=14;
iVar4=5;
iVar1=375;
break;
case 230:
iVar3=14;
iVar4=6;
iVar1=375;
break;
case 231:
iVar3=14;
iVar4=7;
iVar1=295;
break;
case 232:
iVar3=14;
iVar4=8;
iVar1=360;
break;
case 233:
iVar3=14;
iVar4=9;
iVar1=325;
break;
case 234:
iVar3=14;
iVar4=10;
iVar1=340;
break;
case 235:
iVar3=14;
iVar4=11;
iVar1=435;
break;
case 236:
iVar3=14;
iVar4=12;
iVar1=300;
break;
case 237:
iVar3=14;
iVar4=13;
iVar1=315;
break;
case 238:
iVar3=14;
iVar4=14;
iVar1=415;
break;
case 239:
iVar3=14;
iVar4=15;
iVar1=420;
break;
}
switch (iParam0){
case 240:
iVar3=15;
iVar4=0;
iVar1=325;
break;
case 241:
iVar3=15;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 242:
iVar3=15;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 243:
iVar3=15;
iVar4=3;
iVar1=130;
break;
case 244:
iVar3=15;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 245:
iVar3=15;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 246:
iVar3=15;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 247:
iVar3=15;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 248:
iVar3=15;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 249:
iVar3=15;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 250:
iVar3=15;
iVar4=10;
iVar1=450;
break;
case 251:
iVar3=15;
iVar4=11;
iVar1=465;
break;
case 252:
iVar3=15;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 253:
iVar3=15;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 254:
iVar3=15;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 255:
iVar3=15;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
StringCopy(&Var2, "U_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
if(iParam0==4){
if(func_174(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round(((to_float(1250) * Global_262145.f_2990) * Global_297959.f_24));
}else{
iVar1=round(((to_float(40) * Global_262145.f_1513[4]) * Global_297959.f_24));
}}elseif(iParam0==7){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round(((to_float(450) * Global_262145.f_2989) * Global_297959.f_24));
}elseif(iParam0==9){
if(func_174(87, -1)){
StringCopy(&Var2, "REW_REDSK", 16);
iVar1=round(((to_float(500) * Global_262145.f_2988) * Global_297959.f_24));
}else{
iVar1=round(((to_float(40) * Global_262145.f_1513[9]) * Global_297959.f_24));
}}else{
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
iVar1=round(((to_float(iVar1) * Global_262145.f_1513[iVar8]) * Global_297959.f_24));
}}
if(iParam0 >=256){
Global_78472[0 /*14*/].f_5=4;
func_142(iVar7, iParam0, 256, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_24));
}}else{
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_156(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=2;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=500;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[0]));
break;
case 1:
iVar3=1;
iVar4=0;
iVar1=500;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[1]));
break;
case 2:
iVar3=1;
iVar4=1;
iVar1=495;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[2]));
break;
case 3:
iVar3=1;
iVar4=2;
iVar1=490;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[3]));
break;
case 4:
iVar3=1;
iVar4=3;
iVar1=485;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[4]));
break;
case 5:
iVar3=1;
iVar4=4;
iVar1=480;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[5]));
break;
case 6:
iVar3=1;
iVar4=5;
iVar1=0;
break;
case 7:
iVar3=2;
iVar4=0;
iVar1=440;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[6]));
break;
case 8:
iVar3=2;
iVar4=1;
iVar1=435;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[7]));
break;
case 9:
iVar3=2;
iVar4=2;
iVar1=430;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[8]));
break;
case 10:
iVar3=2;
iVar4=3;
iVar1=425;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[9]));
break;
case 11:
iVar3=2;
iVar4=4;
iVar1=420;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[10]));
break;
case 12:
iVar3=2;
iVar4=5;
iVar1=0;
break;
case 13:
iVar3=3;
iVar4=0;
iVar1=190;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[11]));
break;
case 14:
iVar3=3;
iVar4=1;
iVar1=185;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[12]));
break;
case 15:
iVar3=3;
iVar4=2;
iVar1=180;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[13]));
break;
case 16:
iVar3=3;
iVar4=3;
iVar1=175;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[14]));
break;
case 17:
iVar3=3;
iVar4=4;
iVar1=170;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[15]));
break;
case 18:
iVar3=4;
iVar4=0;
iVar1=295;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[16]));
break;
case 19:
iVar3=4;
iVar4=1;
iVar1=290;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[17]));
break;
case 20:
iVar3=4;
iVar4=2;
iVar1=285;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[18]));
break;
case 21:
iVar3=4;
iVar4=3;
iVar1=280;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[19]));
break;
case 22:
iVar3=4;
iVar4=4;
iVar1=275;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[20]));
break;
case 23:
iVar3=4;
iVar4=5;
iVar1=0;
break;
case 24:
iVar3=5;
iVar4=0;
iVar1=2000;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[21]));
break;
case 25:
iVar3=5;
iVar4=1;
iVar1=1995;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[22]));
break;
case 26:
iVar3=5;
iVar4=2;
iVar1=1990;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[23]));
break;
case 27:
iVar3=5;
iVar4=3;
iVar1=1985;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[24]));
break;
case 28:
iVar3=5;
iVar4=4;
iVar1=1980;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[25]));
break;
case 29:
iVar3=5;
iVar4=5;
iVar1=0;
break;
case 30:
iVar3=6;
iVar4=0;
iVar1=1150;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[26]));
break;
case 31:
iVar3=6;
iVar4=1;
iVar1=1145;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[27]));
break;
case 32:
iVar3=6;
iVar4=2;
iVar1=1140;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[28]));
break;
case 33:
iVar3=6;
iVar4=3;
iVar1=1135;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[29]));
break;
case 34:
iVar3=6;
iVar4=4;
iVar1=1130;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[30]));
break;
case 35:
iVar3=7;
iVar4=0;
iVar1=550;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[31]));
break;
case 36:
iVar3=7;
iVar4=1;
iVar1=545;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[32]));
break;
case 37:
iVar3=7;
iVar4=2;
iVar1=540;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[33]));
break;
case 38:
iVar3=7;
iVar4=3;
iVar1=535;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[34]));
break;
case 39:
iVar3=7;
iVar4=4;
iVar1=530;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[35]));
break;
case 40:
iVar3=7;
iVar4=5;
iVar1=0;
break;
case 41:
iVar3=8;
iVar4=0;
iVar1=580;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[36]));
break;
case 42:
iVar3=8;
iVar4=1;
iVar1=575;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[37]));
break;
case 43:
iVar3=8;
iVar4=2;
iVar1=570;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[38]));
break;
case 44:
iVar3=8;
iVar4=3;
iVar1=565;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[39]));
break;
case 45:
iVar3=8;
iVar4=4;
iVar1=560;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[40]));
break;
case 46:
iVar3=8;
iVar4=5;
iVar1=0;
break;
case 47:
iVar3=9;
iVar4=0;
iVar1=1100;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[41]));
break;
case 48:
iVar3=9;
iVar4=1;
iVar1=1095;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[42]));
break;
case 49:
iVar3=9;
iVar4=2;
iVar1=1090;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[43]));
break;
case 50:
iVar3=9;
iVar4=3;
iVar1=1085;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[44]));
break;
case 51:
iVar3=9;
iVar4=4;
iVar1=1080;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[45]));
break;
case 52:
iVar3=9;
iVar4=5;
iVar1=0;
break;
case 53:
iVar3=10;
iVar4=0;
iVar1=520;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[46]));
break;
case 54:
iVar3=10;
iVar4=1;
iVar1=515;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[47]));
break;
case 55:
iVar3=10;
iVar4=2;
iVar1=510;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[48]));
break;
case 56:
iVar3=10;
iVar4=3;
iVar1=505;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[49]));
break;
case 57:
iVar3=10;
iVar4=4;
iVar1=500;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[50]));
break;
case 58:
iVar3=10;
iVar4=5;
iVar1=0;
break;
case 59:
iVar3=10;
iVar4=6;
iVar1=0;
break;
case 60:
iVar3=11;
iVar4=0;
iVar1=395;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[51]));
break;
case 61:
iVar3=11;
iVar4=1;
iVar1=390;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[52]));
break;
case 62:
iVar3=11;
iVar4=2;
iVar1=385;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[53]));
break;
case 63:
iVar3=11;
iVar4=3;
iVar1=380;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[54]));
break;
case 64:
iVar3=11;
iVar4=4;
iVar1=375;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[55]));
break;
case 65:
iVar3=11;
iVar4=5;
iVar1=0;
break;
case 66:
iVar3=11;
iVar4=6;
iVar1=0;
break;
case 67:
iVar3=12;
iVar4=0;
iVar1=1050;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[56]));
break;
case 68:
iVar3=12;
iVar4=1;
iVar1=1045;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[57]));
break;
case 69:
iVar3=12;
iVar4=2;
iVar1=1040;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[58]));
break;
case 70:
iVar3=12;
iVar4=3;
iVar1=1035;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[59]));
break;
case 71:
iVar3=12;
iVar4=4;
iVar1=1030;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[60]));
break;
case 72:
iVar3=12;
iVar4=5;
iVar1=0;
break;
case 73:
iVar3=13;
iVar4=0;
iVar1=1200;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[61]));
break;
case 74:
iVar3=13;
iVar4=1;
iVar1=1195;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[62]));
break;
case 75:
iVar3=13;
iVar4=2;
iVar1=1190;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[63]));
break;
case 76:
iVar3=13;
iVar4=3;
iVar1=1185;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[64]));
break;
case 77:
iVar3=13;
iVar4=4;
iVar1=1180;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[65]));
break;
case 78:
iVar3=13;
iVar4=5;
iVar1=0;
break;
case 79:
iVar3=14;
iVar4=0;
iVar1=475;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[66]));
break;
case 80:
iVar3=14;
iVar4=1;
iVar1=470;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[67]));
break;
case 81:
iVar3=14;
iVar4=2;
iVar1=465;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[68]));
break;
case 82:
iVar3=14;
iVar4=3;
iVar1=460;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[69]));
break;
case 83:
iVar3=14;
iVar4=4;
iVar1=455;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[70]));
break;
case 84:
iVar3=14;
iVar4=5;
iVar1=0;
break;
case 85:
iVar3=15;
iVar4=0;
iVar1=950;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[71]));
break;
case 86:
iVar3=15;
iVar4=1;
iVar1=945;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[72]));
break;
case 87:
iVar3=15;
iVar4=2;
iVar1=940;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[73]));
break;
case 88:
iVar3=15;
iVar4=3;
iVar1=935;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[74]));
break;
case 89:
iVar3=15;
iVar4=4;
iVar1=930;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[75]));
break;
case 90:
iVar3=15;
iVar4=5;
iVar1=0;
break;
case 91:
iVar3=15;
iVar4=6;
iVar1=0;
break;
default:
Global_78472[0 /*14*/].f_5=4;
func_142(iVar7, iParam0, 92, iParam1);
return;
break;
}
StringCopy(&Var2, "H_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_157(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case 2:
func_172(iParam1, iParam2);
break;
case 11:
func_171(iParam1, iParam2);
break;
case 8:
func_170(iParam1, iParam2);
break;
case 9:
func_169(iParam1, iParam2);
break;
case 3:
func_168(iParam1, iParam2);
break;
case 4:
func_167(iParam1, iParam2);
break;
case 6:
func_166(iParam1, iParam2);
break;
case 1:
func_165(iParam1, iParam2);
break;
case 7:
func_164(iParam1, iParam2);
break;
case 10:
func_163(iParam1, iParam2);
break;
case 14:
func_162(iParam1, iParam2);
break;
case 12:
func_161(iParam1, iParam2);
break;
case 5:
func_160(iParam1, iParam2);
break;
case 0:
func_159(iParam1, iParam2);
break;
case 13:
func_158(iParam1);
break;
}}


void func_158(int iParam0){
bool bVar0;
int iVar1;
char* sVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=13;
switch (iParam0){
case 31:
iVar3=0;
iVar4=0;
break;
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=0;
iVar4=0;
break;
case 2:
iVar3=0;
iVar4=0;
break;
case 3:
iVar3=0;
iVar4=0;
break;
case 4:
iVar3=0;
iVar4=0;
break;
case 5:
iVar3=0;
iVar4=0;
break;
case 6:
iVar3=0;
iVar4=0;
break;
case 7:
iVar3=0;
iVar4=0;
break;
case 8:
iVar3=0;
iVar4=0;
break;
case 9:
iVar3=0;
iVar4=0;
break;
case 10:
iVar3=0;
iVar4=0;
break;
case 11:
iVar3=0;
iVar4=0;
break;
case 12:
iVar3=0;
iVar4=0;
break;
case 13:
iVar3=0;
iVar4=0;
break;
case 14:
iVar3=0;
iVar4=0;
break;
case 15:
iVar3=0;
iVar4=0;
break;
case 16:
iVar3=0;
iVar4=0;
break;
case 17:
iVar3=0;
iVar4=0;
break;
case 18:
iVar3=0;
iVar4=0;
break;
case 19:
iVar3=0;
iVar4=0;
break;
case 20:
iVar3=0;
iVar4=0;
break;
case 21:
iVar3=0;
iVar4=0;
break;
case 22:
iVar3=0;
iVar4=0;
break;
case 23:
iVar3=0;
iVar4=0;
break;
case 24:
iVar3=0;
iVar4=0;
break;
}
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_159(int iParam0, int iParam1){
int iVar0;
iVar0=0;
Global_78472[0 /*14*/].f_5=3;
func_142(iVar0, iParam0, 0, iParam1);
}


void func_160(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=5;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=1;
iVar4=0;
break;
case 2:
iVar3=2;
iVar4=0;
break;
case 3:
iVar3=3;
iVar4=0;
break;
case 4:
iVar3=4;
iVar4=0;
break;
case 5:
iVar3=5;
iVar4=0;
break;
case 6:
iVar3=6;
iVar4=0;
break;
case 7:
iVar3=7;
iVar4=0;
break;
case 8:
iVar3=8;
iVar4=0;
break;
default:
Global_78472[0 /*14*/].f_5=3;
func_142(iVar7, iParam0, 9, iParam1);
return;
break;
}
StringCopy(&Var2, "HA_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_161(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=12;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 1:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S1", 16);
break;
case 2:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S2", 16);
break;
case 3:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S3", 16);
break;
case 4:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S4", 16);
break;
case 5:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S5", 16);
break;
case 6:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S6", 16);
break;
case 7:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S7", 16);
break;
case 8:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S8", 16);
break;
case 9:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S9", 16);
break;
case 10:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P1", 16);
break;
case 11:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P2", 16);
break;
case 12:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P3", 16);
break;
case 13:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P4", 16);
break;
case 14:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P5", 16);
break;
case 15:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P6", 16);
break;
case 16:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P7", 16);
break;
case 17:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P8", 16);
break;
case 18:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B1", 16);
break;
case 19:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B2", 16);
break;
case 20:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B3", 16);
break;
case 21:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B4", 16);
break;
case 22:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B5", 16);
break;
case 23:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B6", 16);
break;
case 24:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B7", 16);
break;
case 25:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B8", 16);
break;
default:
Global_78472[0 /*14*/].f_5=3;
func_142(iVar7, iParam0, 26, iParam1);
return;
break;
}
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_162(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
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
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=14;
iVar8=0;
switch (iParam0){
case 0:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=0;
break;
case 1:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=1;
break;
case 2:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=2;
break;
case 3:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=3;
break;
case 4:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=4;
break;
case 5:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=5;
break;
case 6:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=6;
break;
case 7:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=7;
break;
case 8:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=8;
break;
case 10:
StringCopy(&Var2, "HT_FMM_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 11:
StringCopy(&Var2, "HT_FMM_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 12:
StringCopy(&Var2, "HT_FMM_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=85;
iVar5=0;
iVar8=1;
break;
case 13:
StringCopy(&Var2, "HT_FMM_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 14:
StringCopy(&Var2, "HT_FMM_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=235;
iVar5=0;
iVar8=1;
break;
case 15:
StringCopy(&Var2, "HT_FMM_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=80;
iVar5=0;
iVar8=1;
break;
case 16:
StringCopy(&Var2, "HT_FMM_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=85;
iVar5=0;
iVar8=1;
break;
case 17:
StringCopy(&Var2, "HT_FMM_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=90;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 18:
StringCopy(&Var2, "HT_FMM_1_0", 16);
iVar3=1;
iVar4=0;
iVar5=0;
break;
case 19:
StringCopy(&Var2, "HT_FMM_2_0", 16);
iVar3=2;
iVar4=0;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 20:
StringCopy(&Var2, "HT_FMM_2_1", 16);
iVar3=2;
iVar4=1;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 21:
StringCopy(&Var2, "HT_FMM_2_2", 16);
iVar3=2;
iVar4=2;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 22:
StringCopy(&Var2, "HT_FMM_2_3", 16);
iVar3=2;
iVar4=3;
iVar1=320;
iVar5=0;
iVar8=1;
break;
case 23:
StringCopy(&Var2, "HT_FMM_2_4", 16);
iVar3=2;
iVar4=4;
iVar1=185;
iVar5=0;
iVar8=1;
break;
case 24:
StringCopy(&Var2, "HT_FMM_2_5", 16);
iVar3=2;
iVar4=5;
iVar1=245;
iVar5=0;
iVar8=1;
break;
case 25:
StringCopy(&Var2, "HT_FMM_2_6", 16);
iVar3=2;
iVar4=6;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 26:
StringCopy(&Var2, "HT_FMM_2_7", 16);
iVar3=2;
iVar4=7;
iVar1=40;
iVar5=0;
iVar8=1;
break;
case 27:
StringCopy(&Var2, "HT_FMM_3_0", 16);
iVar3=3;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 28:
StringCopy(&Var2, "HT_FMM_3_1", 16);
iVar3=3;
iVar4=1;
iVar1=60;
iVar5=0;
iVar8=1;
break;
case 29:
StringCopy(&Var2, "HT_FMM_3_2", 16);
iVar3=3;
iVar4=2;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 30:
StringCopy(&Var2, "HT_FMM_3_3", 16);
iVar3=3;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 31:
StringCopy(&Var2, "HT_FMM_3_4", 16);
iVar3=3;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "HT_FMM_3_5", 16);
iVar3=3;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 33:
StringCopy(&Var2, "HT_FMM_3_6", 16);
iVar3=3;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 34:
StringCopy(&Var2, "HT_FMM_3_7", 16);
iVar3=3;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "HT_FMM_4_0", 16);
iVar3=4;
iVar4=0;
iVar1=415;
iVar5=0;
iVar8=1;
break;
case 36:
StringCopy(&Var2, "HT_FMM_4_1", 16);
iVar3=4;
iVar4=1;
iVar1=315;
iVar5=0;
iVar8=1;
break;
case 37:
StringCopy(&Var2, "HT_FMM_4_2", 16);
iVar3=4;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 38:
StringCopy(&Var2, "HT_FMM_4_3", 16);
iVar3=4;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 39:
StringCopy(&Var2, "HT_FMM_4_4", 16);
iVar3=4;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 40:
StringCopy(&Var2, "HT_FMM_4_5", 16);
iVar3=4;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 41:
StringCopy(&Var2, "HT_FMM_4_6", 16);
iVar3=4;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 42:
StringCopy(&Var2, "HT_FMM_4_7", 16);
iVar3=4;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 43:
StringCopy(&Var2, "HT_FMM_5_0", 16);
iVar3=5;
iVar4=0;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 44:
StringCopy(&Var2, "HT_FMM_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=60;
iVar5=0;
iVar8=1;
break;
case 45:
StringCopy(&Var2, "HT_FMM_5_2", 16);
iVar3=5;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 46:
StringCopy(&Var2, "HT_FMM_5_3", 16);
iVar3=5;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 47:
StringCopy(&Var2, "HT_FMM_5_4", 16);
iVar3=5;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 48:
StringCopy(&Var2, "HT_FMM_5_5", 16);
iVar3=5;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 49:
StringCopy(&Var2, "HT_FMM_5_6", 16);
iVar3=5;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 50:
StringCopy(&Var2, "HT_FMM_5_7", 16);
iVar3=5;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 51:
StringCopy(&Var2, "HT_FMM_6_0", 16);
iVar3=6;
iVar4=0;
iVar1=160;
iVar5=0;
iVar8=1;
break;
case 52:
StringCopy(&Var2, "HT_FMM_6_1", 16);
iVar3=6;
iVar4=1;
iVar1=265;
iVar5=0;
iVar8=1;
break;
case 53:
StringCopy(&Var2, "HT_FMM_6_2", 16);
iVar3=6;
iVar4=2;
iVar1=170;
iVar5=0;
iVar8=1;
break;
case 54:
StringCopy(&Var2, "HT_FMM_6_3", 16);
iVar3=6;
iVar4=3;
iVar1=135;
iVar5=0;
iVar8=1;
break;
case 55:
StringCopy(&Var2, "HT_FMM_6_4", 16);
iVar3=6;
iVar4=4;
iVar1=570;
iVar5=0;
iVar8=1;
break;
case 56:
StringCopy(&Var2, "HT_FMM_6_5", 16);
iVar3=6;
iVar4=5;
iVar1=560;
iVar5=0;
iVar8=1;
break;
case 57:
StringCopy(&Var2, "HT_FMM_6_6", 16);
iVar3=6;
iVar4=6;
iVar1=140;
iVar5=0;
iVar8=1;
break;
case 58:
StringCopy(&Var2, "HT_FMM_6_7", 16);
iVar3=6;
iVar4=7;
iVar1=130;
iVar5=0;
iVar8=1;
break;
case 59:
StringCopy(&Var2, "HT_FMM_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=260;
iVar5=0;
iVar8=1;
break;
case 60:
StringCopy(&Var2, "HT_FMM_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=215;
iVar5=0;
iVar8=1;
break;
case 61:
StringCopy(&Var2, "HT_FMM_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=430;
iVar5=0;
iVar8=1;
break;
case 62:
StringCopy(&Var2, "HT_FMM_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=160;
iVar5=0;
iVar8=1;
break;
case 63:
StringCopy(&Var2, "HT_FMM_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=200;
iVar5=0;
iVar8=1;
break;
case 64:
StringCopy(&Var2, "HT_FMM_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=155;
iVar5=0;
iVar8=1;
break;
case 65:
StringCopy(&Var2, "HT_FMM_7_6", 16);
iVar3=7;
iVar4=6;
iVar1=155;
iVar5=0;
iVar8=1;
break;
case 66:
StringCopy(&Var2, "HT_FMM_7_7", 16);
iVar3=7;
iVar4=7;
iVar1=165;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 67:
StringCopy(&Var2, "HT_FMM_8_0", 16);
iVar3=8;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 68:
StringCopy(&Var2, "HT_FMM_8_1", 16);
iVar3=8;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 69:
StringCopy(&Var2, "HT_FMM_8_2", 16);
iVar3=8;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 70:
StringCopy(&Var2, "HT_FMM_8_3", 16);
iVar3=8;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 71:
StringCopy(&Var2, "HT_FMM_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 72:
StringCopy(&Var2, "HT_FMM_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 73:
StringCopy(&Var2, "HT_FMM_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 74:
StringCopy(&Var2, "HT_FMM_8_7", 16);
iVar3=8;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 75:
StringCopy(&Var2, "HT_FMM_9_0", 16);
iVar3=9;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 76:
StringCopy(&Var2, "HT_FMM_9_1", 16);
iVar3=9;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 77:
StringCopy(&Var2, "HT_FMM_9_2", 16);
iVar3=9;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 78:
StringCopy(&Var2, "HT_FMM_9_3", 16);
iVar3=9;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 79:
StringCopy(&Var2, "HT_FMM_9_4", 16);
iVar3=9;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 80:
StringCopy(&Var2, "HT_FMM_9_5", 16);
iVar3=9;
iVar4=5;
iVar1=100;
iVar5=0;
iVar8=1;
break;
case 81:
StringCopy(&Var2, "HT_FMM_9_6", 16);
iVar3=9;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 82:
StringCopy(&Var2, "HT_FMM_9_7", 16);
iVar3=9;
iVar4=7;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 83:
StringCopy(&Var2, "HT_FMM_10_0", 16);
iVar3=10;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 84:
StringCopy(&Var2, "HT_FMM_10_1", 16);
iVar3=10;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 85:
StringCopy(&Var2, "HT_FMM_10_2", 16);
iVar3=10;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 86:
StringCopy(&Var2, "HT_FMM_10_3", 16);
iVar3=10;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 87:
StringCopy(&Var2, "HT_FMM_10_4", 16);
iVar3=10;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 88:
StringCopy(&Var2, "HT_FMM_10_5", 16);
iVar3=10;
iVar4=5;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 89:
StringCopy(&Var2, "HT_FMM_10_6", 16);
iVar3=10;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 90:
StringCopy(&Var2, "HT_FMM_10_7", 16);
iVar3=10;
iVar4=7;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 91:
StringCopy(&Var2, "HT_FMM_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 92:
StringCopy(&Var2, "HT_FMM_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 93:
StringCopy(&Var2, "HT_FMM_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "HT_FMM_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 95:
StringCopy(&Var2, "HT_FMM_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 96:
StringCopy(&Var2, "HT_FMM_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 97:
StringCopy(&Var2, "HT_FMM_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 98:
StringCopy(&Var2, "HT_FMM_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 99:
StringCopy(&Var2, "HT_FMM_12_0", 16);
iVar3=12;
iVar4=0;
iVar1=1715;
iVar5=0;
iVar8=1;
break;
case 100:
StringCopy(&Var2, "HT_FMM_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=3900;
iVar5=0;
iVar8=1;
break;
case 101:
StringCopy(&Var2, "HT_FMM_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=1550;
iVar5=0;
iVar8=1;
break;
case 102:
StringCopy(&Var2, "HT_FMM_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 103:
StringCopy(&Var2, "HT_FMM_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=4250;
iVar5=0;
iVar8=1;
break;
case 104:
StringCopy(&Var2, "HT_FMM_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 105:
StringCopy(&Var2, "HT_FMM_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=4460;
iVar5=0;
iVar8=1;
break;
case 106:
StringCopy(&Var2, "HT_FMM_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=4970;
iVar5=0;
iVar8=1;
break;
case 107:
StringCopy(&Var2, "HT_FMM_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=290;
iVar5=0;
iVar8=1;
break;
case 108:
StringCopy(&Var2, "HT_FMM_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=305;
iVar5=0;
iVar8=1;
break;
case 109:
StringCopy(&Var2, "HT_FMM_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=4170;
iVar5=0;
iVar8=1;
break;
case 110:
StringCopy(&Var2, "HT_FMM_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=335;
iVar5=0;
iVar8=1;
break;
case 111:
StringCopy(&Var2, "HT_FMM_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=4940;
iVar5=0;
iVar8=1;
break;
case 112:
StringCopy(&Var2, "HT_FMM_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=275;
iVar5=0;
iVar8=1;
break;
case 113:
StringCopy(&Var2, "HT_FMM_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=5000;
iVar5=0;
iVar8=1;
break;
case 114:
StringCopy(&Var2, "HT_FMM_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=3620;
iVar5=0;
iVar8=1;
break;
case 115:
StringCopy(&Var2, "HT_FMM_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 116:
StringCopy(&Var2, "HT_FMM_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=25;
iVar5=0;
iVar8=1;
break;
case 117:
StringCopy(&Var2, "HT_FMM_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 118:
StringCopy(&Var2, "HT_FMM_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 119:
StringCopy(&Var2, "HT_FMM_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 120:
StringCopy(&Var2, "HT_FMM_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 121:
StringCopy(&Var2, "HT_FMM_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=350;
iVar5=0;
iVar8=1;
break;
case 122:
StringCopy(&Var2, "HT_FMM_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 123:
StringCopy(&Var2, "HT_FMM_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=365;
iVar5=0;
iVar8=1;
break;
case 124:
StringCopy(&Var2, "HT_FMM_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=380;
iVar5=0;
iVar8=1;
break;
case 125:
StringCopy(&Var2, "HT_FMM_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=595;
iVar5=0;
iVar8=1;
break;
case 126:
StringCopy(&Var2, "HT_FMM_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=595;
iVar5=0;
iVar8=1;
break;
case 127:
StringCopy(&Var2, "HT_FMM_15_4", 16);
iVar3=15;
iVar4=4;
iVar1=600;
iVar5=0;
iVar8=1;
break;
case 128:
StringCopy(&Var2, "HT_FMM_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=590;
iVar5=0;
iVar8=1;
break;
case 129:
StringCopy(&Var2, "HT_FMM_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=395;
iVar5=0;
iVar8=1;
break;
case 130:
StringCopy(&Var2, "HT_FMM_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=555;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 131:
StringCopy(&Var2, "HE_FMM_16_0", 16);
iVar3=16;
iVar4=0;
iVar1=1060;
iVar5=0;
iVar8=2;
break;
case 132:
StringCopy(&Var2, "HE_FMM_16_1", 16);
iVar3=16;
iVar4=1;
iVar1=1400;
iVar5=0;
iVar8=2;
break;
case 133:
StringCopy(&Var2, "HE_FMM_16_2", 16);
iVar3=16;
iVar4=2;
iVar1=1315;
iVar5=0;
iVar8=2;
break;
case 134:
StringCopy(&Var2, "HE_FMM_16_3", 16);
iVar3=16;
iVar4=3;
iVar1=1230;
iVar5=0;
iVar8=2;
break;
case 135:
StringCopy(&Var2, "HE_FMM_16_4", 16);
iVar3=16;
iVar4=4;
iVar1=1145;
iVar5=0;
iVar8=2;
break;
case 136:
StringCopy(&Var2, "HE_FMM_16_5", 16);
iVar3=16;
iVar4=5;
iVar1=8450;
iVar5=0;
iVar8=2;
break;
case 137:
StringCopy(&Var2, "HE_FMM_16_6", 16);
iVar3=16;
iVar4=6;
iVar1=675;
iVar5=0;
iVar8=2;
break;
case 138:
StringCopy(&Var2, "HE_FMM_16_7", 16);
iVar3=16;
iVar4=7;
iVar1=8750;
iVar5=0;
iVar8=2;
break;
case 139:
StringCopy(&Var2, "HE_FMM_17_0", 16);
iVar3=17;
iVar4=0;
iVar1=975;
iVar5=0;
iVar8=2;
break;
case 140:
StringCopy(&Var2, "HE_FMM_17_1", 16);
iVar3=17;
iVar4=1;
iVar1=750;
iVar5=0;
iVar8=2;
break;
case 141:
StringCopy(&Var2, "HE_FMM_17_2", 16);
iVar3=17;
iVar4=2;
iVar1=865;
iVar5=0;
iVar8=2;
break;
case 142:
StringCopy(&Var2, "HE_FMM_17_3", 16);
iVar3=17;
iVar4=3;
iVar1=890;
iVar5=0;
iVar8=2;
break;
case 143:
StringCopy(&Var2, "HE_FMM_17_4", 16);
iVar3=17;
iVar4=4;
iVar1=730;
iVar5=0;
iVar8=2;
break;
case 144:
StringCopy(&Var2, "HE_FMM_17_5", 16);
iVar3=17;
iVar4=5;
iVar1=650;
iVar5=0;
iVar8=2;
break;
case 145:
StringCopy(&Var2, "HE_FMM_17_6", 16);
iVar3=17;
iVar4=6;
iVar1=645;
iVar5=0;
iVar8=2;
break;
case 146:
StringCopy(&Var2, "HE_FMM_17_7", 16);
iVar3=17;
iVar4=7;
iVar1=755;
iVar5=0;
iVar8=2;
break;
case 147:
StringCopy(&Var2, "HE_FMM_18_0", 16);
iVar3=18;
iVar4=0;
iVar1=13850;
iVar5=0;
iVar8=2;
break;
case 148:
StringCopy(&Var2, "HE_FMM_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=2900;
iVar5=0;
iVar8=2;
break;
case 149:
StringCopy(&Var2, "HE_FMM_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=2895;
iVar5=0;
iVar8=2;
break;
case 150:
StringCopy(&Var2, "HE_FMM_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=12500;
iVar5=0;
iVar8=2;
break;
case 151:
StringCopy(&Var2, "HE_FMM_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=15000;
iVar5=0;
iVar8=2;
break;
case 152:
StringCopy(&Var2, "HE_FMM_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=14750;
iVar5=0;
iVar8=2;
break;
case 153:
StringCopy(&Var2, "HE_FMM_18_6", 16);
iVar3=18;
iVar4=6;
iVar1=13150;
iVar5=0;
iVar8=2;
break;
case 154:
StringCopy(&Var2, "HE_FMM_18_7", 16);
iVar3=18;
iVar4=7;
iVar1=2925;
iVar5=0;
iVar8=2;
break;
}
switch (iParam0){
case 155:
StringCopy(&Var2, "G_FMM_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 156:
StringCopy(&Var2, "G_FMM_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 157:
StringCopy(&Var2, "G_FMM_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 158:
StringCopy(&Var2, "G_FMM_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 159:
StringCopy(&Var2, "G_FMM_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 160:
StringCopy(&Var2, "G_FMM_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 161:
StringCopy(&Var2, "G_FMM_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 162:
StringCopy(&Var2, "G_FMM_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 163:
StringCopy(&Var2, "G_FMM_0_8", 16);
iVar3=0;
iVar4=8;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 164:
StringCopy(&Var2, "G_FMM_0_9", 16);
iVar3=0;
iVar4=9;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 165:
StringCopy(&Var2, "G_FMM_0_10", 16);
iVar3=0;
iVar4=10;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 166:
StringCopy(&Var2, "G_FMM_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 167:
StringCopy(&Var2, "G_FMM_1_1", 16);
iVar3=1;
iVar4=1;
iVar1=180;
iVar5=1;
iVar8=3;
break;
case 168:
StringCopy(&Var2, "G_FMM_1_2", 16);
iVar3=1;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 169:
StringCopy(&Var2, "G_FMM_1_3", 16);
iVar3=1;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 170:
StringCopy(&Var2, "G_FMM_1_4", 16);
iVar3=1;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 171:
StringCopy(&Var2, "G_FMM_1_5", 16);
iVar3=1;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 172:
StringCopy(&Var2, "G_FMM_1_6", 16);
iVar3=1;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 173:
StringCopy(&Var2, "G_FMM_1_7", 16);
iVar3=1;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 174:
StringCopy(&Var2, "G_FMM_2_0", 16);
iVar3=2;
iVar4=0;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 175:
StringCopy(&Var2, "G_FMM_2_1", 16);
iVar3=2;
iVar4=1;
iVar1=140;
iVar5=1;
iVar8=3;
break;
case 176:
StringCopy(&Var2, "G_FMM_2_2", 16);
iVar3=2;
iVar4=2;
iVar1=380;
iVar5=1;
iVar8=3;
break;
case 177:
StringCopy(&Var2, "G_FMM_2_3", 16);
iVar3=2;
iVar4=3;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 178:
StringCopy(&Var2, "G_FMM_2_4", 16);
iVar3=2;
iVar4=4;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 179:
StringCopy(&Var2, "G_FMM_2_5", 16);
iVar3=2;
iVar4=5;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 180:
StringCopy(&Var2, "G_FMM_2_6", 16);
iVar3=2;
iVar4=6;
iVar1=140;
iVar5=1;
iVar8=3;
break;
case 181:
StringCopy(&Var2, "G_FMM_2_7", 16);
iVar3=2;
iVar4=7;
iVar1=390;
iVar5=1;
iVar8=3;
break;
case 182:
StringCopy(&Var2, "CLO_EXM_G_2_8", 16);
iVar3=2;
iVar4=8;
iVar1=950;
iVar5=1;
iVar8=3;
break;
case 183:
StringCopy(&Var2, "CLO_EXM_G_2_9", 16);
iVar3=2;
iVar4=9;
iVar1=565;
iVar5=1;
iVar8=3;
break;
case 184:
StringCopy(&Var2, "CLO_EXM_G_2_10", 16);
iVar3=2;
iVar4=10;
iVar1=630;
iVar5=1;
iVar8=3;
break;
case 185:
StringCopy(&Var2, "G_FMM_3_0", 16);
iVar3=3;
iVar4=0;
iVar1=70;
iVar5=1;
iVar8=3;
break;
case 186:
StringCopy(&Var2, "G_FMM_3_1", 16);
iVar3=3;
iVar4=1;
iVar1=60;
iVar5=1;
iVar8=3;
break;
case 187:
StringCopy(&Var2, "G_FMM_3_2", 16);
iVar3=3;
iVar4=2;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 188:
StringCopy(&Var2, "G_FMM_3_3", 16);
iVar3=3;
iVar4=3;
iVar1=95;
iVar5=1;
iVar8=3;
break;
case 189:
StringCopy(&Var2, "G_FMM_3_4", 16);
iVar3=3;
iVar4=4;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 190:
StringCopy(&Var2, "G_FMM_3_5", 16);
iVar3=3;
iVar4=5;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 191:
StringCopy(&Var2, "G_FMM_3_6", 16);
iVar3=3;
iVar4=6;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 192:
StringCopy(&Var2, "G_FMM_3_7", 16);
iVar3=3;
iVar4=7;
iVar1=90;
iVar5=1;
iVar8=3;
break;
case 193:
StringCopy(&Var2, "CLO_EXM_G_3_8", 16);
iVar3=3;
iVar4=8;
iVar1=650;
iVar5=1;
iVar8=3;
break;
case 194:
StringCopy(&Var2, "CLO_EXM_G_3_9", 16);
iVar3=3;
iVar4=9;
iVar1=265;
iVar5=1;
iVar8=3;
break;
case 195:
StringCopy(&Var2, "CLO_EXM_G_3_10", 16);
iVar3=3;
iVar4=10;
iVar1=330;
iVar5=1;
iVar8=3;
break;
case 196:
StringCopy(&Var2, "G_FMM_4_0", 16);
iVar3=4;
iVar4=0;
iVar1=245;
iVar5=1;
iVar8=3;
break;
case 197:
StringCopy(&Var2, "G_FMM_4_1", 16);
iVar3=4;
iVar4=1;
iVar1=250;
iVar5=1;
iVar8=3;
break;
case 198:
StringCopy(&Var2, "G_FMM_4_2", 16);
iVar3=4;
iVar4=2;
iVar1=210;
iVar5=1;
iVar8=3;
break;
case 199:
StringCopy(&Var2, "G_FMM_4_3", 16);
iVar3=4;
iVar4=3;
iVar1=245;
iVar5=1;
iVar8=3;
break;
case 200:
StringCopy(&Var2, "G_FMM_4_4", 16);
iVar3=4;
iVar4=4;
iVar1=205;
iVar5=1;
iVar8=3;
break;
case 201:
StringCopy(&Var2, "G_FMM_4_5", 16);
iVar3=4;
iVar4=5;
iVar1=205;
iVar5=1;
iVar8=3;
break;
case 202:
StringCopy(&Var2, "G_FMM_4_6", 16);
iVar3=4;
iVar4=6;
iVar1=215;
iVar5=1;
iVar8=3;
break;
case 203:
StringCopy(&Var2, "G_FMM_4_7", 16);
iVar3=4;
iVar4=7;
iVar1=215;
iVar5=1;
iVar8=3;
break;
case 204:
StringCopy(&Var2, "CLO_EXM_G_4_8", 16);
iVar3=4;
iVar4=8;
iVar1=995;
iVar5=1;
iVar8=3;
break;
case 205:
StringCopy(&Var2, "CLO_EXM_G_4_9", 16);
iVar3=4;
iVar4=9;
iVar1=610;
iVar5=1;
iVar8=3;
break;
case 206:
StringCopy(&Var2, "CLO_EXM_G_4_10", 16);
iVar3=4;
iVar4=10;
iVar1=675;
iVar5=1;
iVar8=3;
break;
case 207:
StringCopy(&Var2, "G_FMM_5_0", 16);
iVar3=5;
iVar4=0;
iVar1=4050;
iVar5=1;
iVar8=3;
break;
case 208:
StringCopy(&Var2, "G_FMM_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=4060;
iVar5=1;
iVar8=3;
break;
case 209:
StringCopy(&Var2, "G_FMM_5_2", 16);
iVar3=5;
iVar4=2;
iVar1=170;
iVar5=1;
iVar8=3;
break;
case 210:
StringCopy(&Var2, "G_FMM_5_3", 16);
iVar3=5;
iVar4=3;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 211:
StringCopy(&Var2, "G_FMM_5_4", 16);
iVar3=5;
iVar4=4;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 212:
StringCopy(&Var2, "G_FMM_5_5", 16);
iVar3=5;
iVar4=5;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 213:
StringCopy(&Var2, "G_FMM_5_6", 16);
iVar3=5;
iVar4=6;
iVar1=140;
iVar5=1;
iVar8=3;
break;
case 214:
StringCopy(&Var2, "G_FMM_5_7", 16);
iVar3=5;
iVar4=7;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 215:
StringCopy(&Var2, "CLO_EXM_G_5_8", 16);
iVar3=5;
iVar4=8;
iVar1=1760;
iVar5=1;
iVar8=3;
break;
case 216:
StringCopy(&Var2, "CLO_EXM_G_5_9", 16);
iVar3=5;
iVar4=9;
iVar1=1375;
iVar5=1;
iVar8=3;
break;
case 217:
StringCopy(&Var2, "CLO_EXM_G_5_10", 16);
iVar3=5;
iVar4=10;
iVar1=1440;
iVar5=1;
iVar8=3;
break;
case 218:
StringCopy(&Var2, "G_FMM_6_0", 16);
iVar3=6;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 219:
StringCopy(&Var2, "G_FMM_6_1", 16);
iVar3=6;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 220:
StringCopy(&Var2, "G_FMM_6_2", 16);
iVar3=6;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 221:
StringCopy(&Var2, "G_FMM_6_3", 16);
iVar3=6;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 222:
StringCopy(&Var2, "G_FMM_6_4", 16);
iVar3=6;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 223:
StringCopy(&Var2, "G_FMM_6_5", 16);
iVar3=6;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 224:
StringCopy(&Var2, "G_FMM_6_6", 16);
iVar3=6;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 225:
StringCopy(&Var2, "G_FMM_6_7", 16);
iVar3=6;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 226:
StringCopy(&Var2, "G_FMM_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=180;
iVar5=1;
iVar8=3;
break;
case 227:
StringCopy(&Var2, "G_FMM_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=500;
iVar5=1;
iVar8=3;
break;
case 228:
StringCopy(&Var2, "G_FMM_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=115;
iVar5=1;
iVar8=3;
break;
case 229:
StringCopy(&Var2, "G_FMM_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=220;
iVar5=1;
iVar8=3;
break;
case 230:
StringCopy(&Var2, "G_FMM_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=185;
iVar5=1;
iVar8=3;
break;
case 231:
StringCopy(&Var2, "G_FMM_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=1445;
iVar5=1;
iVar8=3;
break;
case 232:
StringCopy(&Var2, "G_FMM_7_6", 16);
iVar3=7;
iVar4=6;
iVar1=530;
iVar5=1;
iVar8=3;
break;
case 233:
StringCopy(&Var2, "G_FMM_7_7", 16);
iVar3=7;
iVar4=7;
iVar1=650;
iVar5=1;
iVar8=3;
break;
case 234:
StringCopy(&Var2, "CLO_EXM_G_7_8", 16);
iVar3=7;
iVar4=8;
iVar1=1170;
iVar5=1;
iVar8=3;
break;
case 235:
StringCopy(&Var2, "CLO_EXM_G_7_9", 16);
iVar3=7;
iVar4=9;
iVar1=785;
iVar5=1;
iVar8=3;
break;
case 236:
StringCopy(&Var2, "CLO_EXM_G_7_10", 16);
iVar3=7;
iVar4=10;
iVar1=850;
iVar5=1;
iVar8=3;
break;
}
switch (iParam0){
case 237:
StringCopy(&Var2, "G_FMM_8_0", 16);
iVar3=8;
iVar4=0;
iVar1=4260;
iVar5=1;
iVar8=3;
break;
case 238:
StringCopy(&Var2, "G_FMM_8_1", 16);
iVar3=8;
iVar4=1;
iVar1=4310;
iVar5=1;
iVar8=3;
break;
case 239:
StringCopy(&Var2, "G_FMM_8_2", 16);
iVar3=8;
iVar4=2;
iVar1=4130;
iVar5=1;
iVar8=3;
break;
case 240:
StringCopy(&Var2, "G_FMM_8_3", 16);
iVar3=8;
iVar4=3;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 241:
StringCopy(&Var2, "G_FMM_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 242:
StringCopy(&Var2, "G_FMM_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 243:
StringCopy(&Var2, "G_FMM_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=140;
iVar5=1;
iVar8=3;
break;
case 244:
StringCopy(&Var2, "G_FMM_8_7", 16);
iVar3=8;
iVar4=7;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 245:
StringCopy(&Var2, "CLO_EXM_G_8_8", 16);
iVar3=8;
iVar4=8;
iVar1=1885;
iVar5=1;
iVar8=3;
break;
case 246:
StringCopy(&Var2, "CLO_EXM_G_8_9", 16);
iVar3=8;
iVar4=9;
iVar1=1500;
iVar5=1;
iVar8=3;
break;
case 247:
StringCopy(&Var2, "CLO_EXM_G_8_10", 16);
iVar3=8;
iVar4=10;
iVar1=1565;
iVar5=1;
iVar8=3;
break;
case 248:
StringCopy(&Var2, "G_FMM_9_0", 16);
iVar3=9;
iVar4=0;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 249:
StringCopy(&Var2, "G_FMM_9_1", 16);
iVar3=9;
iVar4=1;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 250:
StringCopy(&Var2, "G_FMM_9_2", 16);
iVar3=9;
iVar4=2;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 251:
StringCopy(&Var2, "G_FMM_9_3", 16);
iVar3=9;
iVar4=3;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 252:
StringCopy(&Var2, "G_FMM_9_4", 16);
iVar3=9;
iVar4=4;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 253:
StringCopy(&Var2, "G_FMM_9_5", 16);
iVar3=9;
iVar4=5;
iVar1=4290;
iVar5=1;
iVar8=3;
break;
case 254:
StringCopy(&Var2, "G_FMM_9_6", 16);
iVar3=9;
iVar4=6;
iVar1=4150;
iVar5=1;
iVar8=3;
break;
case 255:
StringCopy(&Var2, "G_FMM_9_7", 16);
iVar3=9;
iVar4=7;
iVar1=4295;
iVar5=1;
iVar8=3;
break;
case 256:
StringCopy(&Var2, "CLO_EXM_G_9_8", 16);
iVar3=9;
iVar4=8;
iVar1=2315;
iVar5=1;
iVar8=3;
break;
case 257:
StringCopy(&Var2, "CLO_EXM_G_9_9", 16);
iVar3=9;
iVar4=9;
iVar1=1930;
iVar5=1;
iVar8=3;
break;
case 258:
StringCopy(&Var2, "CLO_EXM_G_9_10", 16);
iVar3=9;
iVar4=10;
iVar1=1995;
iVar5=1;
iVar8=3;
break;
case 259:
StringCopy(&Var2, "G_FMM_10_0", 16);
iVar3=10;
iVar4=0;
iVar1=6240;
iVar5=1;
iVar8=3;
break;
case 260:
StringCopy(&Var2, "G_FMM_10_1", 16);
iVar3=10;
iVar4=1;
iVar1=4955;
iVar5=1;
iVar8=3;
break;
case 261:
StringCopy(&Var2, "G_FMM_10_2", 16);
iVar3=10;
iVar4=2;
iVar1=5590;
iVar5=1;
iVar8=3;
break;
case 262:
StringCopy(&Var2, "G_FMM_10_3", 16);
iVar3=10;
iVar4=3;
iVar1=4920;
iVar5=1;
iVar8=3;
break;
case 263:
StringCopy(&Var2, "G_FMM_10_4", 16);
iVar3=10;
iVar4=4;
iVar1=4990;
iVar5=1;
iVar8=3;
break;
case 264:
StringCopy(&Var2, "G_FMM_10_5", 16);
iVar3=10;
iVar4=5;
iVar1=4780;
iVar5=1;
iVar8=3;
break;
case 265:
StringCopy(&Var2, "G_FMM_10_6", 16);
iVar3=10;
iVar4=6;
iVar1=4775;
iVar5=1;
iVar8=3;
break;
case 266:
StringCopy(&Var2, "G_FMM_10_7", 16);
iVar3=10;
iVar4=7;
iVar1=4800;
iVar5=1;
iVar8=3;
break;
case 267:
StringCopy(&Var2, "CLO_EXM_G_10_8", 16);
iVar3=10;
iVar4=8;
iVar1=2835;
iVar5=1;
iVar8=3;
break;
case 268:
StringCopy(&Var2, "CLO_EXM_G_10_9", 16);
iVar3=10;
iVar4=9;
iVar1=2450;
iVar5=1;
iVar8=3;
break;
case 269:
StringCopy(&Var2, "CLO_EXM_G_10_10", 16);
iVar3=10;
iVar4=10;
iVar1=2515;
iVar5=1;
iVar8=3;
break;
case 270:
StringCopy(&Var2, "G_FMM_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 271:
StringCopy(&Var2, "G_FMM_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 272:
StringCopy(&Var2, "G_FMM_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 273:
StringCopy(&Var2, "G_FMM_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 274:
StringCopy(&Var2, "G_FMM_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 275:
StringCopy(&Var2, "G_FMM_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 277:
StringCopy(&Var2, "G_FMM_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 278:
StringCopy(&Var2, "G_FMM_12_0", 16);
iVar3=12;
iVar4=0;
iVar1=385;
iVar5=1;
iVar8=3;
break;
case 279:
StringCopy(&Var2, "G_FMM_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=310;
iVar5=1;
iVar8=3;
break;
case 280:
StringCopy(&Var2, "G_FMM_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=3655;
iVar5=1;
iVar8=3;
break;
case 281:
StringCopy(&Var2, "G_FMM_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=4055;
iVar5=1;
iVar8=3;
break;
case 282:
StringCopy(&Var2, "G_FMM_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=3595;
iVar5=1;
iVar8=3;
break;
case 283:
StringCopy(&Var2, "G_FMM_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=3605;
iVar5=1;
iVar8=3;
break;
case 284:
StringCopy(&Var2, "G_FMM_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=3645;
iVar5=1;
iVar8=3;
break;
case 285:
StringCopy(&Var2, "G_FMM_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=320;
iVar5=1;
iVar8=3;
break;
case 286:
StringCopy(&Var2, "CLO_EXM_G_12_8", 16);
iVar3=12;
iVar4=8;
iVar1=2820;
iVar5=1;
iVar8=3;
break;
case 287:
StringCopy(&Var2, "CLO_EXM_G_12_9", 16);
iVar3=12;
iVar4=9;
iVar1=2435;
iVar5=1;
iVar8=3;
break;
case 288:
StringCopy(&Var2, "CLO_EXM_G_12_10", 16);
iVar3=12;
iVar4=10;
iVar1=2500;
iVar5=1;
iVar8=3;
break;
case 289:
StringCopy(&Var2, "G_FMM_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=230;
iVar5=1;
iVar8=3;
break;
case 290:
StringCopy(&Var2, "G_FMM_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=1605;
iVar5=1;
iVar8=3;
break;
case 291:
StringCopy(&Var2, "G_FMM_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=2230;
iVar5=1;
iVar8=3;
break;
case 292:
StringCopy(&Var2, "G_FMM_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=220;
iVar5=1;
iVar8=3;
break;
case 293:
StringCopy(&Var2, "G_FMM_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=185;
iVar5=1;
iVar8=3;
break;
case 294:
StringCopy(&Var2, "G_FMM_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=2070;
iVar5=1;
iVar8=3;
break;
case 295:
StringCopy(&Var2, "G_FMM_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=2205;
iVar5=1;
iVar8=3;
break;
case 296:
StringCopy(&Var2, "G_FMM_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=1690;
iVar5=1;
iVar8=3;
break;
case 297:
StringCopy(&Var2, "CLO_EXM_G_13_8", 16);
iVar3=13;
iVar4=8;
iVar1=2715;
iVar5=1;
iVar8=3;
break;
case 298:
StringCopy(&Var2, "CLO_EXM_G_13_9", 16);
iVar3=13;
iVar4=9;
iVar1=2330;
iVar5=1;
iVar8=3;
break;
case 299:
StringCopy(&Var2, "CLO_EXM_G_13_10", 16);
iVar3=13;
iVar4=10;
iVar1=2395;
iVar5=1;
iVar8=3;
break;
case 300:
StringCopy(&Var2, "G_FMM_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 301:
StringCopy(&Var2, "G_FMM_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 302:
StringCopy(&Var2, "G_FMM_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 303:
StringCopy(&Var2, "G_FMM_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 304:
StringCopy(&Var2, "G_FMM_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 305:
StringCopy(&Var2, "G_FMM_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 306:
StringCopy(&Var2, "G_FMM_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 307:
StringCopy(&Var2, "G_FMM_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 308:
StringCopy(&Var2, "G_FMM_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=515;
iVar5=1;
iVar8=3;
break;
case 309:
StringCopy(&Var2, "G_FMM_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=60;
iVar5=1;
iVar8=3;
break;
case 310:
StringCopy(&Var2, "G_FMM_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 311:
StringCopy(&Var2, "G_FMM_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=95;
iVar5=1;
iVar8=3;
break;
case 312:
StringCopy(&Var2, "G_FMM_15_4", 16);
iVar3=15;
iVar4=4;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 313:
StringCopy(&Var2, "G_FMM_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 314:
StringCopy(&Var2, "G_FMM_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=485;
iVar5=1;
iVar8=3;
break;
case 315:
StringCopy(&Var2, "G_FMM_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=545;
iVar5=1;
iVar8=3;
break;
case 316:
StringCopy(&Var2, "CLO_EXM_G_15_8", 16);
iVar3=15;
iVar4=8;
iVar1=645;
iVar5=1;
iVar8=3;
break;
case 317:
StringCopy(&Var2, "CLO_EXM_G_15_9", 16);
iVar3=15;
iVar4=9;
iVar1=260;
iVar5=1;
iVar8=3;
break;
case 318:
StringCopy(&Var2, "CLO_EXM_G_15_10", 16);
iVar3=15;
iVar4=10;
iVar1=325;
iVar5=1;
iVar8=3;
break;
}
switch (iParam0){
case 319:
StringCopy(&Var2, "W_FMM_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=5000;
iVar5=6;
iVar8=4;
break;
case 320:
StringCopy(&Var2, "W_FMM_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 321:
StringCopy(&Var2, "W_FMM_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 322:
StringCopy(&Var2, "W_FMM_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 323:
StringCopy(&Var2, "W_FMM_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 324:
StringCopy(&Var2, "W_FMM_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=695;
iVar5=6;
iVar8=4;
break;
case 325:
StringCopy(&Var2, "W_FMM_1_1", 16);
iVar3=1;
iVar4=1;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 326:
StringCopy(&Var2, "W_FMM_1_2", 16);
iVar3=1;
iVar4=2;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
}
if(iVar8==1){
iVar9=(iParam0 - 10);
if(iVar9 >=0 && iVar9 < 121){
if(iVar9 > 8){
iVar9=(iVar9 - 1);
}
iVar1=round(((to_float(iVar1) * Global_262145.f_965[iVar9]) * Global_297959.f_18));
}}elseif(iVar8==2){
iVar10=(iParam0 - 131);
if(iVar10 >=0 && iVar10 < 24){
iVar1=round(((to_float(iVar1) * Global_262145.f_1086[iVar10]) * Global_297959.f_19));
}}elseif(iVar8==3){
iVar11=(iParam0 - 155);
if(iVar11 >=0 && iVar11 < 128){
iVar1=round(((to_float(iVar1) * Global_262145.f_1111[iVar11]) * Global_297959.f_20));
}}elseif(iVar8==4){
iVar12=(iParam0 - 319);
if(iVar12 >=0 && iVar12 < 15){
iVar1=round(((to_float(iVar1) * Global_262145.f_1240[iVar12]) * Global_297959.f_21));
}}
if(iParam0 >=327){
Global_78472[0 /*14*/].f_5=3;
func_142(iVar7, iParam0, 327, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("hat"), 1)){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_18));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("glasses"), 1)){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_20));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("watch"), 1)){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_21));
}}}else{
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_163(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=10;
switch (iParam0){
case 0:
StringCopy(&Var2, "D_FMM_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=0;
break;
case 1:
StringCopy(&Var2, "D_FMM_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=5000;
break;
case 2:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=2;
iVar4=0;
iVar1=10000;
break;
case 3:
StringCopy(&Var2, "D_FMM_1_0", 16);
iVar3=3;
iVar4=0;
iVar1=5000;
break;
case 4:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=4;
iVar4=0;
iVar1=10000;
break;
case 5:
StringCopy(&Var2, "D_FMM_1_0", 16);
iVar3=5;
iVar4=0;
iVar1=5000;
break;
case 6:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=6;
iVar4=0;
iVar1=10000;
break;
default:
Global_78472[0 /*14*/].f_5=3;
func_142(iVar7, iParam0, 7, iParam1);
return;
break;
}
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_164(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=7;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=0;
break;
case 1:
iVar3=1;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 2:
iVar3=1;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 3:
iVar3=1;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 4:
iVar3=2;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 5:
iVar3=2;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 6:
iVar3=2;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 7:
iVar3=3;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 8:
iVar3=3;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 9:
iVar3=3;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 10:
iVar3=4;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 11:
iVar3=4;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 12:
iVar3=4;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 13:
iVar3=4;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 14:
iVar3=4;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 15:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 16:
iVar3=4;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 17:
iVar3=4;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 18:
iVar3=4;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 19:
iVar3=4;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 20:
iVar3=4;
iVar4=10;
bVar0=true;
break;
case 21:
iVar3=4;
iVar4=11;
bVar0=true;
break;
case 22:
iVar3=4;
iVar4=12;
bVar0=true;
break;
case 23:
iVar3=4;
iVar4=13;
bVar0=true;
break;
case 24:
iVar3=4;
iVar4=14;
bVar0=true;
break;
case 25:
iVar3=4;
iVar4=15;
bVar0=true;
break;
case 26:
iVar3=5;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 27:
iVar3=5;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 28:
iVar3=5;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 29:
iVar3=5;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 30:
iVar3=5;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 31:
iVar3=5;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 32:
iVar3=6;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 33:
iVar3=6;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 34:
iVar3=6;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 35:
iVar3=6;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 36:
iVar3=6;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 37:
iVar3=6;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 38:
iVar3=7;
iVar4=0;
break;
case 39:
iVar3=8;
iVar4=0;
break;
case 40:
iVar3=9;
iVar4=0;
break;
case 41:
iVar3=10;
iVar4=0;
if(Global_262145.f_4182 !=-1){
iVar1=Global_262145.f_4182;
}else{
iVar1=115;
}
break;
case 42:
iVar3=10;
iVar4=1;
if(Global_262145.f_4183 !=-1){
iVar1=Global_262145.f_4183;
}else{
iVar1=125;
}
break;
case 43:
iVar3=10;
iVar4=2;
if(Global_262145.f_4184 !=-1){
iVar1=Global_262145.f_4184;
}else{
iVar1=130;
}
break;
case 44:
iVar3=10;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 45:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 46:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 47:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 48:
iVar3=10;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 49:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 50:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 51:
iVar3=10;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 52:
iVar3=10;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 53:
iVar3=10;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 54:
iVar3=10;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 55:
iVar3=10;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 56:
iVar3=10;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 57:
iVar3=11;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 58:
iVar3=11;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 59:
iVar3=11;
iVar4=2;
if(Global_262145.f_4188 !=-1){
iVar1=Global_262145.f_4188;
}else{
iVar1=725;
}
break;
case 60:
iVar3=11;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 61:
iVar3=11;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 62:
iVar3=11;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 63:
iVar3=11;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 64:
iVar3=11;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 65:
iVar3=11;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 66:
iVar3=11;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 67:
iVar3=11;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 68:
iVar3=11;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 69:
iVar3=11;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 70:
iVar3=11;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 71:
iVar3=11;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 72:
iVar3=11;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 73:
iVar3=12;
iVar4=0;
if(Global_262145.f_4185 !=-1){
iVar1=Global_262145.f_4185;
}else{
iVar1=65;
}
break;
case 74:
iVar3=12;
iVar4=1;
if(Global_262145.f_4186 !=-1){
iVar1=Global_262145.f_4186;
}else{
iVar1=65;
}
break;
case 75:
iVar3=12;
iVar4=2;
if(Global_262145.f_4187 !=-1){
iVar1=Global_262145.f_4187;
}else{
iVar1=95;
}
break;
case 76:
iVar3=12;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 77:
iVar3=12;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 78:
iVar3=12;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 79:
iVar3=12;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 80:
iVar3=12;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 81:
iVar3=12;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 82:
iVar3=12;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 83:
iVar3=12;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 84:
iVar3=12;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 85:
iVar3=12;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 86:
iVar3=12;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 87:
iVar3=12;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 88:
iVar3=12;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 89:
iVar3=13;
iVar4=0;
break;
case 90:
iVar3=14;
iVar4=0;
break;
case 91:
iVar3=15;
iVar4=0;
break;
default:
Global_78472[0 /*14*/].f_5=3;
func_142(iVar7, iParam0, 92, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_57));
}
return;
break;
}
iVar1=round((to_float(iVar1) * Global_297959.f_57));
StringCopy(&Var2, "T_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_165(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=1;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=0;
break;
case 1:
iVar3=1;
iVar4=0;
iVar1=965;
break;
case 2:
iVar3=1;
iVar4=1;
iVar1=960;
break;
case 3:
iVar3=1;
iVar4=2;
iVar1=9500;
break;
case 4:
iVar3=1;
iVar4=3;
iVar1=975;
break;
case 5:
iVar3=2;
iVar4=0;
iVar1=1185;
break;
case 6:
iVar3=2;
iVar4=1;
iVar1=15000;
break;
case 7:
iVar3=2;
iVar4=2;
iVar1=1115;
break;
case 8:
iVar3=2;
iVar4=3;
iVar1=1105;
break;
case 9:
iVar3=3;
iVar4=0;
iVar1=25000;
break;
case 10:
iVar3=4;
iVar4=0;
iVar1=510;
break;
case 11:
iVar3=4;
iVar4=1;
iVar1=530;
break;
case 12:
iVar3=4;
iVar4=2;
iVar1=5500;
break;
case 13:
iVar3=4;
iVar4=3;
iVar1=535;
break;
case 14:
iVar3=5;
iVar4=0;
iVar1=1510;
break;
case 15:
iVar3=5;
iVar4=1;
iVar1=1530;
break;
case 16:
iVar3=5;
iVar4=2;
iVar1=14500;
break;
case 17:
iVar3=5;
iVar4=3;
iVar1=13000;
break;
case 18:
iVar3=6;
iVar4=0;
iVar1=8000;
break;
case 19:
iVar3=6;
iVar4=1;
iVar1=1265;
break;
case 20:
iVar3=6;
iVar4=2;
iVar1=8500;
break;
case 21:
iVar3=6;
iVar4=3;
iVar1=1210;
break;
case 22:
iVar3=7;
iVar4=0;
iVar1=2360;
break;
case 23:
iVar3=7;
iVar4=1;
iVar1=22500;
break;
case 24:
iVar3=7;
iVar4=2;
iVar1=2375;
break;
case 25:
iVar3=7;
iVar4=3;
iVar1=2485;
break;
default:
Global_78472[0 /*14*/].f_5=3;
func_142(iVar7, iParam0, 26, iParam1);
return;
break;
}
StringCopy(&Var2, "M_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
iVar8=(iParam0 - 1);
if(iVar8 >=0 && iVar8 < 26){
iVar1=round(((to_float(iVar1) * Global_262145.f_938[iVar8]) * Global_297959.f_22));
}
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_166(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=6;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 1:
iVar3=0;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 4:
iVar3=0;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 5:
iVar3=0;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 6:
iVar3=0;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 7:
iVar3=0;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 8:
iVar3=0;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 9:
iVar3=0;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 10:
iVar3=0;
iVar4=10;
iVar1=300;
break;
case 11:
iVar3=0;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 12:
iVar3=0;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 13:
iVar3=0;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 14:
iVar3=0;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 15:
iVar3=0;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 16:
iVar3=1;
iVar4=0;
iVar1=285;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=180;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=190;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=190;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=165;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=200;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=480;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=155;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=350;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=290;
break;
case 26:
iVar3=1;
iVar4=10;
iVar1=165;
break;
case 27:
iVar3=1;
iVar4=11;
iVar1=165;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=170;
break;
case 29:
iVar3=1;
iVar4=13;
iVar1=155;
break;
case 30:
iVar3=1;
iVar4=14;
iVar1=165;
break;
case 31:
iVar3=1;
iVar4=15;
iVar1=165;
break;
}
switch (iParam0){
case 32:
iVar3=2;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 35:
iVar3=2;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 36:
iVar3=2;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 37:
iVar3=2;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 38:
iVar3=2;
iVar4=6;
iVar1=160;
break;
case 39:
iVar3=2;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 40:
iVar3=2;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 41:
iVar3=2;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 42:
iVar3=2;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 43:
iVar3=2;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 44:
iVar3=2;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 45:
iVar3=2;
iVar4=13;
iVar1=205;
break;
case 46:
iVar3=2;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 47:
iVar3=2;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 48:
iVar3=3;
iVar4=0;
iVar1=560;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=275;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=290;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=300;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=360;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=270;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=265;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=295;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=355;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=340;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=285;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=310;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=350;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=305;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=280;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=320;
break;
}
switch (iParam0){
case 64:
iVar3=4;
iVar4=0;
iVar1=115;
break;
case 65:
iVar3=4;
iVar4=1;
iVar1=115;
break;
case 66:
iVar3=4;
iVar4=2;
iVar1=110;
break;
case 67:
iVar3=4;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 68:
iVar3=4;
iVar4=4;
iVar1=125;
break;
case 69:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 70:
iVar3=4;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 71:
iVar3=4;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 72:
iVar3=4;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 73:
iVar3=4;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 74:
iVar3=4;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 75:
iVar3=4;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 76:
iVar3=4;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 77:
iVar3=4;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 78:
iVar3=4;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 79:
iVar3=4;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 80:
iVar3=5;
iVar4=0;
iVar1=50;
break;
case 81:
iVar3=5;
iVar4=1;
iVar1=35;
break;
case 82:
iVar3=5;
iVar4=2;
iVar1=50;
break;
case 83:
iVar3=5;
iVar4=3;
iVar1=50;
break;
case 84:
iVar3=5;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 85:
iVar3=5;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 86:
iVar3=5;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 87:
iVar3=5;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 88:
iVar3=5;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 89:
iVar3=5;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 90:
iVar3=5;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 91:
iVar3=5;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 92:
iVar3=5;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 93:
iVar3=5;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 94:
iVar3=5;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 95:
iVar3=5;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 96:
iVar3=6;
iVar4=0;
iVar1=65;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=65;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 99:
iVar3=6;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 100:
iVar3=6;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 101:
iVar3=6;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 102:
iVar3=6;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 103:
iVar3=6;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 104:
iVar3=6;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 105:
iVar3=6;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 106:
iVar3=6;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 107:
iVar3=6;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 108:
iVar3=6;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 109:
iVar3=6;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 110:
iVar3=6;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 111:
iVar3=6;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 112:
iVar3=7;
iVar4=0;
iVar1=165;
break;
case 113:
iVar3=7;
iVar4=1;
iVar1=165;
break;
case 114:
iVar3=7;
iVar4=2;
iVar1=185;
break;
case 115:
iVar3=7;
iVar4=3;
iVar1=175;
break;
case 116:
iVar3=7;
iVar4=4;
iVar1=185;
break;
case 117:
iVar3=7;
iVar4=5;
iVar1=460;
break;
case 118:
iVar3=7;
iVar4=6;
iVar1=185;
break;
case 119:
iVar3=7;
iVar4=7;
iVar1=190;
break;
case 120:
iVar3=7;
iVar4=8;
iVar1=165;
break;
case 121:
iVar3=7;
iVar4=9;
iVar1=165;
break;
case 122:
iVar3=7;
iVar4=10;
iVar1=185;
break;
case 123:
iVar3=7;
iVar4=11;
iVar1=175;
break;
case 124:
iVar3=7;
iVar4=12;
iVar1=235;
break;
case 125:
iVar3=7;
iVar4=13;
iVar1=445;
break;
case 126:
iVar3=7;
iVar4=14;
iVar1=185;
break;
case 127:
iVar3=7;
iVar4=15;
iVar1=190;
break;
}
switch (iParam0){
case 128:
iVar3=8;
iVar4=0;
iVar1=175;
break;
case 129:
iVar3=8;
iVar4=1;
iVar1=215;
break;
case 130:
iVar3=8;
iVar4=2;
iVar1=225;
break;
case 131:
iVar3=8;
iVar4=3;
iVar1=230;
break;
case 132:
iVar3=8;
iVar4=4;
iVar1=235;
break;
case 133:
iVar3=8;
iVar4=5;
iVar1=215;
break;
case 134:
iVar3=8;
iVar4=6;
iVar1=205;
break;
case 135:
iVar3=8;
iVar4=7;
iVar1=245;
break;
case 136:
iVar3=8;
iVar4=8;
iVar1=225;
break;
case 137:
iVar3=8;
iVar4=9;
iVar1=215;
break;
case 138:
iVar3=8;
iVar4=10;
iVar1=225;
break;
case 139:
iVar3=8;
iVar4=11;
iVar1=230;
break;
case 140:
iVar3=8;
iVar4=12;
iVar1=235;
break;
case 141:
iVar3=8;
iVar4=13;
iVar1=215;
break;
case 142:
iVar3=8;
iVar4=14;
iVar1=425;
break;
case 143:
iVar3=8;
iVar4=15;
iVar1=245;
break;
case 144:
iVar3=9;
iVar4=0;
iVar1=225;
break;
case 145:
iVar3=9;
iVar4=1;
iVar1=135;
break;
case 146:
iVar3=9;
iVar4=2;
iVar1=130;
break;
case 147:
iVar3=9;
iVar4=3;
iVar1=110;
break;
case 148:
iVar3=9;
iVar4=4;
iVar1=140;
break;
case 149:
iVar3=9;
iVar4=5;
iVar1=95;
break;
case 150:
iVar3=9;
iVar4=6;
iVar1=100;
break;
case 151:
iVar3=9;
iVar4=7;
iVar1=110;
break;
case 152:
iVar3=9;
iVar4=8;
iVar1=95;
break;
case 153:
iVar3=9;
iVar4=9;
iVar1=105;
break;
case 154:
iVar3=9;
iVar4=10;
iVar1=105;
break;
case 155:
iVar3=9;
iVar4=11;
iVar1=115;
break;
case 156:
iVar3=9;
iVar4=12;
iVar1=115;
break;
case 157:
iVar3=9;
iVar4=13;
iVar1=115;
break;
case 158:
iVar3=9;
iVar4=14;
iVar1=500;
break;
case 159:
iVar3=9;
iVar4=15;
iVar1=440;
break;
}
switch (iParam0){
case 160:
iVar3=10;
iVar4=0;
iVar1=1090;
break;
case 161:
iVar3=10;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 162:
iVar3=10;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 163:
iVar3=10;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 164:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 165:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 166:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 167:
iVar3=10;
iVar4=7;
iVar1=600;
break;
case 168:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 169:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 170:
iVar3=10;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 171:
iVar3=10;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 172:
iVar3=10;
iVar4=12;
iVar1=1865;
break;
case 173:
iVar3=10;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 174:
iVar3=10;
iVar4=14;
iVar1=490;
break;
case 175:
iVar3=10;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 176:
iVar3=11;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 177:
iVar3=11;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 178:
iVar3=11;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 179:
iVar3=11;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 180:
iVar3=11;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 181:
iVar3=11;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 182:
iVar3=11;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 183:
iVar3=11;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 184:
iVar3=11;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 185:
iVar3=11;
iVar4=9;
iVar1=470;
break;
case 186:
iVar3=11;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 187:
iVar3=11;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 188:
iVar3=11;
iVar4=12;
iVar1=1795;
break;
case 189:
iVar3=11;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 190:
iVar3=11;
iVar4=14;
iVar1=1830;
break;
case 191:
iVar3=11;
iVar4=15;
iVar1=455;
break;
}
switch (iParam0){
case 192:
iVar3=12;
iVar4=0;
iVar1=455;
break;
case 193:
iVar3=12;
iVar4=1;
iVar1=2110;
break;
case 194:
iVar3=12;
iVar4=2;
iVar1=380;
break;
case 195:
iVar3=12;
iVar4=3;
iVar1=1655;
break;
case 196:
iVar3=12;
iVar4=4;
iVar1=2500;
break;
case 197:
iVar3=12;
iVar4=5;
iVar1=415;
break;
case 198:
iVar3=12;
iVar4=6;
iVar1=730;
break;
case 199:
iVar3=12;
iVar4=7;
iVar1=445;
break;
case 200:
iVar3=12;
iVar4=8;
iVar1=425;
break;
case 201:
iVar3=12;
iVar4=9;
iVar1=410;
break;
case 202:
iVar3=12;
iVar4=10;
iVar1=480;
break;
case 203:
iVar3=12;
iVar4=11;
iVar1=485;
break;
case 204:
iVar3=12;
iVar4=12;
iVar1=480;
break;
case 205:
iVar3=12;
iVar4=13;
iVar1=395;
break;
case 206:
iVar3=12;
iVar4=14;
iVar1=495;
break;
case 207:
iVar3=12;
iVar4=15;
iVar1=2090;
break;
case 208:
iVar3=13;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 209:
iVar3=13;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 210:
iVar3=13;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 211:
iVar3=13;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 212:
iVar3=13;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 213:
iVar3=13;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 214:
iVar3=13;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 215:
iVar3=13;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 216:
iVar3=13;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 217:
iVar3=13;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 218:
iVar3=13;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 219:
iVar3=13;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 220:
iVar3=13;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 221:
iVar3=13;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 222:
iVar3=13;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 223:
iVar3=13;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 224:
iVar3=14;
iVar4=0;
iVar1=450;
break;
case 225:
iVar3=14;
iVar4=1;
iVar1=685;
break;
case 226:
iVar3=14;
iVar4=2;
iVar1=420;
break;
case 227:
iVar3=14;
iVar4=3;
iVar1=365;
break;
case 228:
iVar3=14;
iVar4=4;
iVar1=465;
break;
case 229:
iVar3=14;
iVar4=5;
iVar1=405;
break;
case 230:
iVar3=14;
iVar4=6;
iVar1=400;
break;
case 231:
iVar3=14;
iVar4=7;
iVar1=440;
break;
case 232:
iVar3=14;
iVar4=8;
iVar1=385;
break;
case 233:
iVar3=14;
iVar4=9;
iVar1=435;
break;
case 234:
iVar3=14;
iVar4=10;
iVar1=375;
break;
case 235:
iVar3=14;
iVar4=11;
iVar1=390;
break;
case 236:
iVar3=14;
iVar4=12;
iVar1=475;
break;
case 237:
iVar3=14;
iVar4=13;
iVar1=430;
break;
case 238:
iVar3=14;
iVar4=14;
iVar1=490;
break;
case 239:
iVar3=14;
iVar4=15;
iVar1=490;
break;
case 240:
iVar3=15;
iVar4=0;
iVar1=615;
break;
case 241:
iVar3=15;
iVar4=1;
iVar1=315;
break;
case 242:
iVar3=15;
iVar4=2;
iVar1=415;
break;
case 243:
iVar3=15;
iVar4=3;
iVar1=425;
break;
case 244:
iVar3=15;
iVar4=4;
iVar1=435;
break;
case 245:
iVar3=15;
iVar4=5;
iVar1=445;
break;
case 246:
iVar3=15;
iVar4=6;
iVar1=640;
break;
case 247:
iVar3=15;
iVar4=7;
iVar1=460;
break;
case 248:
iVar3=15;
iVar4=8;
iVar1=465;
break;
case 249:
iVar3=15;
iVar4=9;
iVar1=745;
break;
case 250:
iVar3=15;
iVar4=10;
iVar1=845;
break;
case 251:
iVar3=15;
iVar4=11;
iVar1=1420;
break;
case 252:
iVar3=15;
iVar4=12;
iVar1=475;
break;
case 253:
iVar3=15;
iVar4=13;
iVar1=470;
break;
case 254:
iVar3=15;
iVar4=14;
iVar1=1000;
break;
case 255:
iVar3=15;
iVar4=15;
iVar1=690;
break;
}
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
iVar1=round(((to_float(iVar1) * Global_262145.f_681[iVar8]) * Global_297959.f_17));
}
StringCopy(&Var2, "F_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
if(iParam0 >=256){
Global_78472[0 /*14*/].f_5=3;
func_142(iVar7, iParam0, 256, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_17));
}}else{
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_167(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=4;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=335;
break;
case 1:
iVar3=0;
iVar4=1;
iVar1=460;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=455;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=470;
break;
case 4:
iVar3=0;
iVar4=4;
iVar1=650;
break;
case 5:
iVar3=0;
iVar4=5;
iVar1=385;
break;
case 6:
iVar3=0;
iVar4=6;
iVar1=455;
break;
case 7:
iVar3=0;
iVar4=7;
iVar1=2150;
break;
case 8:
iVar3=0;
iVar4=8;
iVar1=375;
break;
case 9:
iVar3=0;
iVar4=9;
iVar1=2190;
break;
case 10:
iVar3=0;
iVar4=10;
iVar1=285;
break;
case 11:
iVar3=0;
iVar4=11;
iVar1=295;
break;
case 12:
iVar3=0;
iVar4=12;
iVar1=445;
break;
case 13:
iVar3=0;
iVar4=13;
iVar1=2240;
break;
case 14:
iVar3=0;
iVar4=14;
iVar1=465;
break;
case 15:
iVar3=0;
iVar4=15;
iVar1=1740;
break;
case 16:
iVar3=1;
iVar4=0;
iVar1=1415;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=325;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=345;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=355;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=395;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=315;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=275;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=265;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=305;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=255;
break;
case 26:
iVar3=1;
iVar4=10;
iVar1=235;
break;
case 27:
iVar3=1;
iVar4=11;
iVar1=245;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=215;
break;
case 29:
iVar3=1;
iVar4=13;
iVar1=1865;
break;
case 30:
iVar3=1;
iVar4=14;
iVar1=450;
break;
case 31:
iVar3=1;
iVar4=15;
iVar1=415;
break;
case 32:
iVar3=2;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 35:
iVar3=2;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 36:
iVar3=2;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 37:
iVar3=2;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 38:
iVar3=2;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 39:
iVar3=2;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 40:
iVar3=2;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 41:
iVar3=2;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 42:
iVar3=2;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 43:
iVar3=2;
iVar4=11;
iVar1=100;
break;
case 44:
iVar3=2;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 45:
iVar3=2;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 46:
iVar3=2;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 47:
iVar3=2;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 48:
iVar3=3;
iVar4=0;
iVar1=55;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=60;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=100;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=65;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=65;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=100;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=100;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=65;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=90;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=75;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=65;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=100;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=100;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=225;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=205;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=215;
break;
case 64:
iVar3=4;
iVar4=0;
iVar1=490;
break;
case 65:
iVar3=4;
iVar4=1;
iVar1=485;
break;
case 66:
iVar3=4;
iVar4=2;
iVar1=2500;
break;
case 67:
iVar3=4;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 68:
iVar3=4;
iVar4=4;
iVar1=485;
break;
case 69:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 70:
iVar3=4;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 71:
iVar3=4;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 72:
iVar3=4;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 73:
iVar3=4;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 74:
iVar3=4;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 75:
iVar3=4;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 76:
iVar3=4;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 77:
iVar3=4;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 78:
iVar3=4;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 79:
iVar3=4;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 80:
iVar3=5;
iVar4=0;
iVar1=100;
break;
case 81:
iVar3=5;
iVar4=1;
iVar1=105;
break;
case 82:
iVar3=5;
iVar4=2;
iVar1=80;
break;
case 83:
iVar3=5;
iVar4=3;
iVar1=90;
break;
case 84:
iVar3=5;
iVar4=4;
iVar1=100;
break;
case 85:
iVar3=5;
iVar4=5;
iVar1=95;
break;
case 86:
iVar3=5;
iVar4=6;
iVar1=100;
break;
case 87:
iVar3=5;
iVar4=7;
iVar1=90;
break;
case 88:
iVar3=5;
iVar4=8;
iVar1=85;
break;
case 89:
iVar3=5;
iVar4=9;
iVar1=80;
break;
case 90:
iVar3=5;
iVar4=10;
iVar1=80;
break;
case 91:
iVar3=5;
iVar4=11;
iVar1=100;
break;
case 92:
iVar3=5;
iVar4=12;
iVar1=95;
break;
case 93:
iVar3=5;
iVar4=13;
iVar1=440;
break;
case 94:
iVar3=5;
iVar4=14;
iVar1=380;
break;
case 95:
iVar3=5;
iVar4=15;
iVar1=80;
break;
case 96:
iVar3=6;
iVar4=0;
iVar1=115;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=140;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=135;
break;
case 99:
iVar3=6;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 100:
iVar3=6;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 101:
iVar3=6;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 102:
iVar3=6;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 103:
iVar3=6;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 104:
iVar3=6;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 105:
iVar3=6;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 106:
iVar3=6;
iVar4=10;
iVar1=255;
break;
case 107:
iVar3=6;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 108:
iVar3=6;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 109:
iVar3=6;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 110:
iVar3=6;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 111:
iVar3=6;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 112:
iVar3=7;
iVar4=0;
iVar1=325;
break;
case 113:
iVar3=7;
iVar4=1;
iVar1=115;
break;
case 114:
iVar3=7;
iVar4=2;
iVar1=135;
break;
case 115:
iVar3=7;
iVar4=3;
iVar1=125;
break;
case 116:
iVar3=7;
iVar4=4;
iVar1=120;
break;
case 117:
iVar3=7;
iVar4=5;
iVar1=130;
break;
case 118:
iVar3=7;
iVar4=6;
iVar1=110;
break;
case 119:
iVar3=7;
iVar4=7;
iVar1=345;
break;
case 120:
iVar3=7;
iVar4=8;
iVar1=745;
break;
case 121:
iVar3=7;
iVar4=9;
iVar1=120;
break;
case 122:
iVar3=7;
iVar4=10;
iVar1=135;
break;
case 123:
iVar3=7;
iVar4=11;
iVar1=345;
break;
case 124:
iVar3=7;
iVar4=12;
iVar1=130;
break;
case 125:
iVar3=7;
iVar4=13;
iVar1=140;
break;
case 126:
iVar3=7;
iVar4=14;
iVar1=130;
break;
case 127:
iVar3=7;
iVar4=15;
iVar1=660;
break;
case 128:
iVar3=8;
iVar4=0;
iVar1=150;
break;
case 129:
iVar3=8;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 130:
iVar3=8;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 131:
iVar3=8;
iVar4=3;
iVar1=150;
break;
case 132:
iVar3=8;
iVar4=4;
iVar1=150;
break;
case 133:
iVar3=8;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 134:
iVar3=8;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 135:
iVar3=8;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 136:
iVar3=8;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 137:
iVar3=8;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 138:
iVar3=8;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 139:
iVar3=8;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 140:
iVar3=8;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 141:
iVar3=8;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 142:
iVar3=8;
iVar4=14;
iVar1=150;
break;
case 143:
iVar3=8;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 144:
iVar3=9;
iVar4=0;
iVar1=75;
break;
case 145:
iVar3=9;
iVar4=1;
iVar1=90;
break;
case 146:
iVar3=9;
iVar4=2;
iVar1=145;
break;
case 147:
iVar3=9;
iVar4=3;
iVar1=150;
break;
case 148:
iVar3=9;
iVar4=4;
iVar1=110;
break;
case 149:
iVar3=9;
iVar4=5;
iVar1=95;
break;
case 150:
iVar3=9;
iVar4=6;
iVar1=155;
break;
case 151:
iVar3=9;
iVar4=7;
iVar1=255;
break;
case 152:
iVar3=9;
iVar4=8;
iVar1=165;
break;
case 153:
iVar3=9;
iVar4=9;
iVar1=1150;
break;
case 154:
iVar3=9;
iVar4=10;
iVar1=1150;
break;
case 155:
iVar3=9;
iVar4=11;
iVar1=1210;
break;
case 156:
iVar3=9;
iVar4=12;
iVar1=1125;
break;
case 157:
iVar3=9;
iVar4=13;
iVar1=1135;
break;
case 158:
iVar3=9;
iVar4=14;
iVar1=1145;
break;
case 159:
iVar3=9;
iVar4=15;
iVar1=1145;
break;
case 160:
iVar3=10;
iVar4=0;
iVar1=845;
break;
case 161:
iVar3=10;
iVar4=1;
iVar1=480;
break;
case 162:
iVar3=10;
iVar4=2;
iVar1=475;
break;
case 163:
iVar3=10;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 164:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 165:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 166:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 167:
iVar3=10;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 168:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 169:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 170:
iVar3=10;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 171:
iVar3=10;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 172:
iVar3=10;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 173:
iVar3=10;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 174:
iVar3=10;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 175:
iVar3=10;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 176:
iVar3=11;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 177:
iVar3=11;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 178:
iVar3=11;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 179:
iVar3=11;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 180:
iVar3=11;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 181:
iVar3=11;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 182:
iVar3=11;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 183:
iVar3=11;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 184:
iVar3=11;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 185:
iVar3=11;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 186:
iVar3=11;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 187:
iVar3=11;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 188:
iVar3=11;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 189:
iVar3=11;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 190:
iVar3=11;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 191:
iVar3=11;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 192:
iVar3=12;
iVar4=0;
iVar1=220;
break;
case 193:
iVar3=12;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 194:
iVar3=12;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 195:
iVar3=12;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 196:
iVar3=12;
iVar4=4;
iVar1=100;
break;
case 197:
iVar3=12;
iVar4=5;
iVar1=65;
break;
case 198:
iVar3=12;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 199:
iVar3=12;
iVar4=7;
iVar1=50;
break;
case 200:
iVar3=12;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 201:
iVar3=12;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 202:
iVar3=12;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 203:
iVar3=12;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 204:
iVar3=12;
iVar4=12;
iVar1=100;
break;
case 205:
iVar3=12;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 206:
iVar3=12;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 207:
iVar3=12;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 208:
iVar3=13;
iVar4=0;
iVar1=460;
break;
case 209:
iVar3=13;
iVar4=1;
iVar1=475;
break;
case 210:
iVar3=13;
iVar4=2;
iVar1=470;
break;
case 211:
iVar3=13;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 212:
iVar3=13;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 213:
iVar3=13;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 214:
iVar3=13;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 215:
iVar3=13;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 216:
iVar3=13;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 217:
iVar3=13;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 218:
iVar3=13;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 219:
iVar3=13;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 220:
iVar3=13;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 221:
iVar3=13;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 222:
iVar3=13;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 223:
iVar3=13;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 224:
iVar3=14;
iVar4=0;
iVar1=50;
break;
case 225:
iVar3=14;
iVar4=1;
iVar1=100;
break;
case 226:
iVar3=14;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 227:
iVar3=14;
iVar4=3;
iVar1=100;
break;
case 228:
iVar3=14;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 229:
iVar3=14;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 230:
iVar3=14;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 231:
iVar3=14;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 232:
iVar3=14;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 233:
iVar3=14;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 234:
iVar3=14;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 235:
iVar3=14;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 236:
iVar3=14;
iVar4=12;
iVar1=100;
break;
case 237:
iVar3=14;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 238:
iVar3=14;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 239:
iVar3=14;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 240:
iVar3=15;
iVar4=0;
iVar1=90;
break;
case 241:
iVar3=15;
iVar4=1;
iVar1=105;
break;
case 242:
iVar3=15;
iVar4=2;
iVar1=100;
break;
case 243:
iVar3=15;
iVar4=3;
iVar1=240;
break;
case 244:
iVar3=15;
iVar4=4;
iVar1=95;
break;
case 245:
iVar3=15;
iVar4=5;
iVar1=95;
break;
case 246:
iVar3=15;
iVar4=6;
iVar1=100;
break;
case 247:
iVar3=15;
iVar4=7;
iVar1=105;
break;
case 248:
iVar3=15;
iVar4=8;
iVar1=100;
break;
case 249:
iVar3=15;
iVar4=9;
iVar1=295;
break;
case 250:
iVar3=15;
iVar4=10;
iVar1=250;
break;
case 251:
iVar3=15;
iVar4=11;
iVar1=285;
break;
case 252:
iVar3=15;
iVar4=12;
iVar1=275;
break;
case 253:
iVar3=15;
iVar4=13;
iVar1=105;
break;
case 254:
iVar3=15;
iVar4=14;
iVar1=100;
break;
case 255:
iVar3=15;
iVar4=15;
iVar1=95;
break;
}
StringCopy(&Var2, "L_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
iVar1=round(((to_float(iVar1) * Global_262145.f_186[iVar8]) * Global_297959.f_15));
}
if(iParam0 >=256){
Global_78472[0 /*14*/].f_5=3;
func_142(iVar7, iParam0, 256, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_15));
}}else{
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_168(int iParam0, int iParam1){
bool bVar0;
int iVar1;
char* sVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=3;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=1;
iVar4=0;
break;
case 2:
iVar3=2;
iVar4=0;
break;
case 3:
iVar3=3;
iVar4=0;
break;
case 4:
iVar3=4;
iVar4=0;
break;
case 5:
iVar3=5;
iVar4=0;
break;
case 6:
iVar3=6;
iVar4=0;
break;
case 7:
iVar3=7;
iVar4=0;
break;
case 8:
iVar3=8;
iVar4=0;
break;
case 9:
iVar3=9;
iVar4=0;
break;
case 10:
iVar3=10;
iVar4=0;
break;
case 11:
iVar3=11;
iVar4=0;
break;
case 12:
iVar3=12;
iVar4=0;
break;
case 13:
iVar3=13;
iVar4=0;
break;
case 14:
iVar3=14;
iVar4=0;
break;
case 15:
iVar3=15;
iVar4=0;
break;
default:
Global_78472[0 /*14*/].f_5=3;
func_142(iVar7, iParam0, 16, iParam1);
return;
break;
}
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_169(int iParam0, int iParam1){
bool bVar0;
int iVar1;
char* sVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=9;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=1;
iVar4=0;
break;
case 2:
iVar3=1;
iVar4=1;
break;
case 3:
iVar3=1;
iVar4=2;
break;
case 4:
iVar3=1;
iVar4=3;
break;
case 5:
iVar3=1;
iVar4=4;
break;
case 6:
iVar3=2;
iVar4=0;
break;
case 7:
iVar3=2;
iVar4=1;
break;
case 8:
iVar3=2;
iVar4=2;
break;
case 9:
iVar3=2;
iVar4=3;
break;
case 10:
iVar3=2;
iVar4=4;
break;
case 11:
iVar3=3;
iVar4=0;
break;
case 12:
iVar3=3;
iVar4=1;
break;
case 13:
iVar3=3;
iVar4=2;
break;
case 14:
iVar3=3;
iVar4=3;
break;
case 15:
iVar3=3;
iVar4=4;
break;
case 16:
iVar3=4;
iVar4=0;
break;
case 17:
iVar3=4;
iVar4=1;
break;
case 18:
iVar3=4;
iVar4=2;
break;
case 19:
iVar3=4;
iVar4=3;
break;
case 20:
iVar3=4;
iVar4=4;
break;
case 21:
iVar3=5;
iVar4=0;
break;
case 22:
iVar3=5;
iVar4=1;
break;
case 23:
iVar3=5;
iVar4=2;
break;
case 24:
iVar3=5;
iVar4=3;
break;
case 25:
iVar3=5;
iVar4=4;
break;
case 26:
iVar3=6;
iVar4=0;
break;
case 27:
iVar3=6;
iVar4=1;
break;
case 28:
iVar3=6;
iVar4=2;
break;
case 29:
iVar3=6;
iVar4=3;
break;
case 30:
iVar3=6;
iVar4=4;
break;
case 31:
iVar3=7;
iVar4=0;
break;
case 32:
iVar3=7;
iVar4=1;
break;
case 33:
iVar3=7;
iVar4=2;
break;
case 34:
iVar3=7;
iVar4=3;
break;
case 35:
iVar3=7;
iVar4=4;
break;
case 36:
iVar3=8;
iVar4=0;
break;
case 37:
iVar3=8;
iVar4=1;
break;
case 38:
iVar3=8;
iVar4=2;
break;
case 39:
iVar3=8;
iVar4=3;
break;
case 40:
iVar3=8;
iVar4=4;
break;
case 41:
iVar3=9;
iVar4=0;
break;
case 42:
iVar3=9;
iVar4=1;
break;
case 43:
iVar3=9;
iVar4=2;
break;
case 44:
iVar3=9;
iVar4=3;
break;
case 45:
iVar3=9;
iVar4=4;
break;
default:
Global_78472[0 /*14*/].f_5=3;
func_142(iVar7, iParam0, 46, iParam1);
return;
break;
}
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_170(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=8;
switch (iParam0){
case 0:
StringCopy(&Var2, "U_FMM_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=250;
break;
case 1:
StringCopy(&Var2, "U_FMM_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=210;
break;
case 2:
StringCopy(&Var2, "U_FMM_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=50;
break;
case 3:
StringCopy(&Var2, "U_FMM_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=90;
break;
case 4:
StringCopy(&Var2, "U_FMM_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=210;
break;
case 5:
StringCopy(&Var2, "U_FMM_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=200;
break;
case 6:
StringCopy(&Var2, "U_FMM_0_6", 16);
iVar3=0;
iVar4=6;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "U_FMM_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=130;
break;
case 8:
StringCopy(&Var2, "U_FMM_0_8", 16);
iVar3=0;
iVar4=8;
iVar1=220;
break;
case 9:
StringCopy(&Var2, "U_FMM_0_9", 16);
iVar3=0;
iVar4=9;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "U_FMM_0_10", 16);
iVar3=0;
iVar4=10;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "U_FMM_0_11", 16);
iVar3=0;
iVar4=11;
iVar1=220;
break;
case 12:
StringCopy(&Var2, "U_FMM_0_12", 16);
iVar3=0;
iVar4=12;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "U_FMM_0_13", 16);
iVar3=0;
iVar4=13;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "U_FMM_0_14", 16);
iVar3=0;
iVar4=14;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "U_FMM_0_15", 16);
iVar3=0;
iVar4=15;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "U_FMM_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=45;
break;
case 17:
StringCopy(&Var2, "U_FMM_1_1", 16);
iVar3=1;
iVar4=1;
iVar1=60;
break;
case 18:
StringCopy(&Var2, "U_FMM_1_2", 16);
iVar3=1;
iVar4=2;
bVar0=true;
break;
case 19:
StringCopy(&Var2, "U_FMM_1_3", 16);
iVar3=1;
iVar4=3;
iVar1=40;
break;
case 20:
StringCopy(&Var2, "U_FMM_1_4", 16);
iVar3=1;
iVar4=4;
iVar1=315;
break;
case 21:
StringCopy(&Var2, "U_FMM_1_5", 16);
iVar3=1;
iVar4=5;
iVar1=215;
break;
case 22:
StringCopy(&Var2, "U_FMM_1_6", 16);
iVar3=1;
iVar4=6;
iVar1=265;
break;
case 23:
StringCopy(&Var2, "U_FMM_1_7", 16);
iVar3=1;
iVar4=7;
iVar1=45;
break;
case 24:
StringCopy(&Var2, "U_FMM_1_8", 16);
iVar3=1;
iVar4=8;
iVar1=205;
break;
case 25:
StringCopy(&Var2, "U_FMM_1_9", 16);
iVar3=1;
iVar4=9;
bVar0=true;
break;
case 26:
StringCopy(&Var2, "U_FMM_1_10", 16);
iVar3=1;
iVar4=10;
bVar0=true;
break;
case 27:
StringCopy(&Var2, "U_FMM_1_11", 16);
iVar3=1;
iVar4=11;
iVar1=60;
break;
case 28:
StringCopy(&Var2, "U_FMM_1_12", 16);
iVar3=1;
iVar4=12;
iVar1=55;
break;
case 29:
StringCopy(&Var2, "U_FMM_1_13", 16);
iVar3=1;
iVar4=13;
bVar0=true;
break;
case 30:
StringCopy(&Var2, "U_FMM_1_14", 16);
iVar3=1;
iVar4=14;
iVar1=170;
break;
case 31:
StringCopy(&Var2, "U_FMM_1_15", 16);
iVar3=1;
iVar4=15;
bVar0=true;
break;
}
switch (iParam0){
case 32:
StringCopy(&Var2, "U_FMM_0_0", 16);
iVar3=2;
iVar4=0;
iVar1=250;
break;
case 33:
StringCopy(&Var2, "U_FMM_0_1", 16);
iVar3=2;
iVar4=1;
iVar1=210;
break;
case 34:
StringCopy(&Var2, "U_FMM_0_2", 16);
iVar3=2;
iVar4=2;
iVar1=50;
break;
case 35:
StringCopy(&Var2, "U_FMM_0_3", 16);
iVar3=2;
iVar4=3;
iVar1=90;
break;
case 36:
StringCopy(&Var2, "U_FMM_0_4", 16);
iVar3=2;
iVar4=4;
iVar1=210;
break;
case 37:
StringCopy(&Var2, "U_FMM_0_5", 16);
iVar3=2;
iVar4=5;
iVar1=200;
break;
case 38:
StringCopy(&Var2, "U_FMM_0_6", 16);
iVar3=2;
iVar4=6;
bVar0=true;
break;
case 39:
StringCopy(&Var2, "U_FMM_0_7", 16);
iVar3=2;
iVar4=7;
iVar1=130;
break;
case 40:
StringCopy(&Var2, "U_FMM_0_8", 16);
iVar3=2;
iVar4=8;
iVar1=220;
break;
case 41:
StringCopy(&Var2, "U_FMM_0_9", 16);
iVar3=2;
iVar4=9;
bVar0=true;
break;
case 42:
StringCopy(&Var2, "U_FMM_0_10", 16);
iVar3=2;
iVar4=10;
bVar0=true;
break;
case 43:
StringCopy(&Var2, "U_FMM_0_11", 16);
iVar3=2;
iVar4=11;
iVar1=220;
break;
case 44:
StringCopy(&Var2, "U_FMM_0_12", 16);
iVar3=2;
iVar4=12;
bVar0=true;
break;
case 45:
StringCopy(&Var2, "U_FMM_0_13", 16);
iVar3=2;
iVar4=13;
bVar0=true;
break;
case 46:
StringCopy(&Var2, "U_FMM_0_14", 16);
iVar3=2;
iVar4=14;
bVar0=true;
break;
case 47:
StringCopy(&Var2, "U_FMM_0_15", 16);
iVar3=2;
iVar4=15;
bVar0=true;
break;
case 48:
StringCopy(&Var2, "SP_FMM_3_0", 16);
iVar3=3;
iVar4=0;
if(Global_262145.f_4191 !=-1){
iVar1=Global_262145.f_4191;
}else{
iVar1=165;
}
break;
case 49:
StringCopy(&Var2, "SP_FMM_3_1", 16);
iVar3=3;
iVar4=1;
if(Global_262145.f_4199 !=-1){
iVar1=Global_262145.f_4199;
}else{
iVar1=120;
}
break;
case 50:
StringCopy(&Var2, "SP_FMM_3_2", 16);
iVar3=3;
iVar4=2;
if(Global_262145.f_4194 !=-1){
iVar1=Global_262145.f_4194;
}else{
iVar1=115;
}
break;
case 51:
StringCopy(&Var2, "SP_FMM_3_3", 16);
iVar3=3;
iVar4=3;
bVar0=true;
break;
case 52:
StringCopy(&Var2, "SP_FMM_3_4", 16);
iVar3=3;
iVar4=4;
bVar0=true;
break;
case 53:
StringCopy(&Var2, "SP_FMM_3_5", 16);
iVar3=3;
iVar4=5;
bVar0=true;
break;
case 54:
StringCopy(&Var2, "SP_FMM_3_6", 16);
iVar3=3;
iVar4=6;
bVar0=true;
break;
case 55:
StringCopy(&Var2, "SP_FMM_3_7", 16);
iVar3=3;
iVar4=7;
bVar0=true;
break;
case 56:
StringCopy(&Var2, "SP_FMM_3_8", 16);
iVar3=3;
iVar4=8;
bVar0=true;
break;
case 57:
StringCopy(&Var2, "SP_FMM_3_9", 16);
iVar3=3;
iVar4=9;
bVar0=true;
break;
case 58:
StringCopy(&Var2, "SP_FMM_3_10", 16);
iVar3=3;
iVar4=10;
bVar0=true;
break;
case 59:
StringCopy(&Var2, "SP_FMM_3_11", 16);
iVar3=3;
iVar4=11;
bVar0=true;
break;
case 60:
StringCopy(&Var2, "SP_FMM_3_12", 16);
iVar3=3;
iVar4=12;
bVar0=true;
break;
case 61:
StringCopy(&Var2, "SP_FMM_3_13", 16);
iVar3=3;
iVar4=13;
bVar0=true;
break;
case 62:
StringCopy(&Var2, "SP_FMM_3_14", 16);
iVar3=3;
iVar4=14;
bVar0=true;
break;
case 63:
StringCopy(&Var2, "SP_FMM_3_15", 16);
iVar3=3;
iVar4=15;
bVar0=true;
break;
}
switch (iParam0){
case 64:
StringCopy(&Var2, "SP_FMM_3_0", 16);
iVar3=4;
iVar4=0;
if(Global_262145.f_4191 !=-1){
iVar1=Global_262145.f_4191;
}else{
iVar1=165;
}
break;
case 65:
StringCopy(&Var2, "SP_FMM_3_1", 16);
iVar3=4;
iVar4=1;
if(Global_262145.f_4199 !=-1){
iVar1=Global_262145.f_4199;
}else{
iVar1=120;
}
break;
case 66:
StringCopy(&Var2, "SP_FMM_3_2", 16);
iVar3=4;
iVar4=2;
if(Global_262145.f_4194 !=-1){
iVar1=Global_262145.f_4194;
}else{
iVar1=115;
}
break;
case 67:
StringCopy(&Var2, "SP_FMM_3_3", 16);
iVar3=4;
iVar4=3;
bVar0=true;
break;
case 68:
StringCopy(&Var2, "SP_FMM_3_4", 16);
iVar3=4;
iVar4=4;
bVar0=true;
break;
case 69:
StringCopy(&Var2, "SP_FMM_3_5", 16);
iVar3=4;
iVar4=5;
bVar0=true;
break;
case 70:
StringCopy(&Var2, "SP_FMM_3_6", 16);
iVar3=4;
iVar4=6;
bVar0=true;
break;
case 71:
StringCopy(&Var2, "SP_FMM_3_7", 16);
iVar3=4;
iVar4=7;
bVar0=true;
break;
case 72:
StringCopy(&Var2, "SP_FMM_3_8", 16);
iVar3=4;
iVar4=8;
bVar0=true;
break;
case 73:
StringCopy(&Var2, "SP_FMM_3_9", 16);
iVar3=4;
iVar4=9;
bVar0=true;
break;
case 74:
StringCopy(&Var2, "SP_FMM_3_10", 16);
iVar3=4;
iVar4=10;
bVar0=true;
break;
case 75:
StringCopy(&Var2, "SP_FMM_3_11", 16);
iVar3=4;
iVar4=11;
bVar0=true;
break;
case 76:
StringCopy(&Var2, "SP_FMM_3_12", 16);
iVar3=4;
iVar4=12;
bVar0=true;
break;
case 77:
StringCopy(&Var2, "SP_FMM_3_13", 16);
iVar3=4;
iVar4=13;
bVar0=true;
break;
case 78:
StringCopy(&Var2, "SP_FMM_3_14", 16);
iVar3=4;
iVar4=14;
bVar0=true;
break;
case 79:
StringCopy(&Var2, "SP_FMM_3_15", 16);
iVar3=4;
iVar4=15;
bVar0=true;
break;
case 80:
StringCopy(&Var2, "U_FMM_5_0", 16);
iVar3=5;
iVar4=0;
iVar1=80;
iVar1=round((to_float(iVar1) * Global_262145.f_443[80]));
break;
case 81:
StringCopy(&Var2, "U_FMM_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=45;
iVar1=round((to_float(iVar1) * Global_262145.f_443[81]));
break;
case 82:
StringCopy(&Var2, "U_FMM_5_2", 16);
iVar3=5;
iVar4=2;
iVar1=50;
iVar1=round((to_float(iVar1) * Global_262145.f_443[82]));
break;
case 83:
StringCopy(&Var2, "U_FMM_5_3", 16);
iVar3=5;
iVar4=3;
bVar0=true;
break;
case 84:
StringCopy(&Var2, "U_FMM_5_4", 16);
iVar3=5;
iVar4=4;
bVar0=true;
break;
case 85:
StringCopy(&Var2, "U_FMM_5_5", 16);
iVar3=5;
iVar4=5;
bVar0=true;
break;
case 86:
StringCopy(&Var2, "U_FMM_5_6", 16);
iVar3=5;
iVar4=6;
bVar0=true;
break;
case 87:
StringCopy(&Var2, "U_FMM_5_7", 16);
iVar3=5;
iVar4=7;
iVar1=50;
iVar1=round((to_float(iVar1) * Global_262145.f_443[87]));
break;
case 88:
StringCopy(&Var2, "U_FMM_5_8", 16);
iVar3=5;
iVar4=8;
bVar0=true;
break;
case 89:
StringCopy(&Var2, "U_FMM_5_9", 16);
iVar3=5;
iVar4=9;
bVar0=true;
break;
case 90:
StringCopy(&Var2, "U_FMM_5_10", 16);
iVar3=5;
iVar4=10;
bVar0=true;
break;
case 91:
StringCopy(&Var2, "U_FMM_5_11", 16);
iVar3=5;
iVar4=11;
bVar0=true;
break;
case 92:
StringCopy(&Var2, "U_FMM_5_12", 16);
iVar3=5;
iVar4=12;
bVar0=true;
break;
case 93:
StringCopy(&Var2, "U_FMM_5_13", 16);
iVar3=5;
iVar4=13;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "U_FMM_5_14", 16);
iVar3=5;
iVar4=14;
bVar0=true;
break;
case 95:
StringCopy(&Var2, "U_FMM_5_15", 16);
iVar3=5;
iVar4=15;
bVar0=true;
break;
}
switch (iParam0){
case 96:
StringCopy(&Var2, "SP_FMM_6_0", 16);
iVar3=6;
iVar4=0;
if(Global_262145.f_4212 !=-1){
iVar1=Global_262145.f_4212;
}else{
iVar1=420;
}
break;
case 97:
StringCopy(&Var2, "SP_FMM_6_1", 16);
iVar3=6;
iVar4=1;
if(Global_262145.f_4210 !=-1){
iVar1=Global_262145.f_4210;
}else{
iVar1=415;
}
break;
case 98:
StringCopy(&Var2, "SP_FMM_6_2", 16);
iVar3=6;
iVar4=2;
if(Global_262145.f_4190 !=-1){
iVar1=Global_262145.f_4190;
}else{
iVar1=440;
}
break;
case 99:
StringCopy(&Var2, "SP_FMM_6_3", 16);
iVar3=6;
iVar4=3;
if(Global_262145.f_4204 !=-1){
iVar1=Global_262145.f_4204;
}else{
iVar1=400;
}
break;
case 100:
StringCopy(&Var2, "SP_FMM_6_4", 16);
iVar3=6;
iVar4=4;
if(Global_262145.f_4189 !=-1){
iVar1=Global_262145.f_4189;
}else{
iVar1=400;
}
break;
case 101:
StringCopy(&Var2, "SP_FMM_6_5", 16);
iVar3=6;
iVar4=5;
if(Global_262145.f_4206 !=-1){
iVar1=Global_262145.f_4206;
}else{
iVar1=410;
}
break;
case 102:
StringCopy(&Var2, "SP_FMM_6_6", 16);
iVar3=6;
iVar4=6;
if(Global_262145.f_4209 !=-1){
iVar1=Global_262145.f_4209;
}else{
iVar1=435;
}
break;
case 103:
StringCopy(&Var2, "SP_FMM_6_7", 16);
iVar3=6;
iVar4=7;
if(Global_262145.f_4205 !=-1){
iVar1=Global_262145.f_4205;
}else{
iVar1=425;
}
break;
case 104:
StringCopy(&Var2, "SP_FMM_6_8", 16);
iVar3=6;
iVar4=8;
if(Global_262145.f_4198 !=-1){
iVar1=Global_262145.f_4198;
}else{
iVar1=435;
}
break;
case 105:
StringCopy(&Var2, "SP_FMM_6_9", 16);
iVar3=6;
iVar4=9;
if(Global_262145.f_4203 !=-1){
iVar1=Global_262145.f_4203;
}else{
iVar1=420;
}
break;
case 106:
StringCopy(&Var2, "SP_FMM_6_10", 16);
iVar3=6;
iVar4=10;
if(Global_262145.f_4201 !=-1){
iVar1=Global_262145.f_4201;
}else{
iVar1=425;
}
break;
case 107:
StringCopy(&Var2, "SP_FMM_6_11", 16);
iVar3=6;
iVar4=11;
if(Global_262145.f_4211 !=-1){
iVar1=Global_262145.f_4211;
}else{
iVar1=425;
}
break;
case 108:
StringCopy(&Var2, "SP_FMM_6_12", 16);
iVar3=6;
iVar4=12;
if(Global_262145.f_4197 !=-1){
iVar1=Global_262145.f_4197;
}else{
iVar1=435;
}
break;
case 109:
StringCopy(&Var2, "SP_FMM_6_13", 16);
iVar3=6;
iVar4=13;
if(Global_262145.f_4192 !=-1){
iVar1=Global_262145.f_4192;
}else{
iVar1=750;
}
break;
case 110:
StringCopy(&Var2, "SP_FMM_6_14", 16);
iVar3=6;
iVar4=14;
if(Global_262145.f_4207 !=-1){
iVar1=Global_262145.f_4207;
}else{
iVar1=400;
}
break;
case 111:
StringCopy(&Var2, "SP_FMM_6_15", 16);
iVar3=6;
iVar4=15;
if(Global_262145.f_4200 !=-1){
iVar1=Global_262145.f_4200;
}else{
iVar1=435;
}
break;
case 112:
StringCopy(&Var2, "SP_FMM_6_0", 16);
iVar3=7;
iVar4=0;
if(Global_262145.f_4212 !=-1){
iVar1=Global_262145.f_4212;
}else{
iVar1=420;
}
break;
case 113:
StringCopy(&Var2, "SP_FMM_6_1", 16);
iVar3=7;
iVar4=1;
if(Global_262145.f_4210 !=-1){
iVar1=Global_262145.f_4210;
}else{
iVar1=415;
}
break;
case 114:
StringCopy(&Var2, "SP_FMM_6_2", 16);
iVar3=7;
iVar4=2;
if(Global_262145.f_4190 !=-1){
iVar1=Global_262145.f_4190;
}else{
iVar1=440;
}
break;
case 115:
StringCopy(&Var2, "SP_FMM_6_3", 16);
iVar3=7;
iVar4=3;
if(Global_262145.f_4204 !=-1){
iVar1=Global_262145.f_4204;
}else{
iVar1=400;
}
break;
case 116:
StringCopy(&Var2, "SP_FMM_6_4", 16);
iVar3=7;
iVar4=4;
if(Global_262145.f_4189 !=-1){
iVar1=Global_262145.f_4189;
}else{
iVar1=400;
}
break;
case 117:
StringCopy(&Var2, "SP_FMM_6_5", 16);
iVar3=7;
iVar4=5;
if(Global_262145.f_4206 !=-1){
iVar1=Global_262145.f_4206;
}else{
iVar1=410;
}
break;
case 118:
StringCopy(&Var2, "SP_FMM_6_6", 16);
iVar3=7;
iVar4=6;
if(Global_262145.f_4209 !=-1){
iVar1=Global_262145.f_4209;
}else{
iVar1=435;
}
break;
case 119:
StringCopy(&Var2, "SP_FMM_6_7", 16);
iVar3=7;
iVar4=7;
if(Global_262145.f_4205 !=-1){
iVar1=Global_262145.f_4205;
}else{
iVar1=425;
}
break;
case 120:
StringCopy(&Var2, "SP_FMM_6_8", 16);
iVar3=7;
iVar4=8;
if(Global_262145.f_4198 !=-1){
iVar1=Global_262145.f_4198;
}else{
iVar1=435;
}
break;
case 121:
StringCopy(&Var2, "SP_FMM_6_9", 16);
iVar3=7;
iVar4=9;
if(Global_262145.f_4203 !=-1){
iVar1=Global_262145.f_4203;
}else{
iVar1=420;
}
break;
case 122:
StringCopy(&Var2, "SP_FMM_6_10", 16);
iVar3=7;
iVar4=10;
if(Global_262145.f_4201 !=-1){
iVar1=Global_262145.f_4201;
}else{
iVar1=425;
}
break;
case 123:
StringCopy(&Var2, "SP_FMM_6_11", 16);
iVar3=7;
iVar4=11;
if(Global_262145.f_4211 !=-1){
iVar1=Global_262145.f_4211;
}else{
iVar1=425;
}
break;
case 124:
StringCopy(&Var2, "SP_FMM_6_12", 16);
iVar3=7;
iVar4=12;
if(Global_262145.f_4197 !=-1){
iVar1=Global_262145.f_4197;
}else{
iVar1=435;
}
break;
case 125:
StringCopy(&Var2, "SP_FMM_6_13", 16);
iVar3=7;
iVar4=13;
if(Global_262145.f_4192 !=-1){
iVar1=Global_262145.f_4192;
}else{
iVar1=750;
}
break;
case 126:
StringCopy(&Var2, "SP_FMM_6_14", 16);
iVar3=7;
iVar4=14;
if(Global_262145.f_4207 !=-1){
iVar1=Global_262145.f_4207;
}else{
iVar1=400;
}
break;
case 127:
StringCopy(&Var2, "SP_FMM_6_15", 16);
iVar3=7;
iVar4=15;
if(Global_262145.f_4200 !=-1){
iVar1=Global_262145.f_4200;
}else{
iVar1=435;
}
break;
}
switch (iParam0){
case 128:
StringCopy(&Var2, "U_FMM_8_0", 16);
iVar3=8;
iVar4=0;
iVar1=45;
break;
case 129:
StringCopy(&Var2, "U_FMM_8_1", 16);
iVar3=8;
iVar4=1;
bVar0=true;
break;
case 130:
StringCopy(&Var2, "U_FMM_8_2", 16);
iVar3=8;
iVar4=2;
bVar0=true;
break;
case 131:
StringCopy(&Var2, "U_FMM_8_3", 16);
iVar3=8;
iVar4=3;
bVar0=true;
break;
case 132:
StringCopy(&Var2, "U_FMM_8_4", 16);
iVar3=8;
iVar4=4;
bVar0=true;
break;
case 133:
StringCopy(&Var2, "U_FMM_8_5", 16);
iVar3=8;
iVar4=5;
bVar0=true;
break;
case 134:
StringCopy(&Var2, "U_FMM_8_6", 16);
iVar3=8;
iVar4=6;
bVar0=true;
break;
case 135:
StringCopy(&Var2, "U_FMM_8_7", 16);
iVar3=8;
iVar4=7;
bVar0=true;
break;
case 136:
StringCopy(&Var2, "U_FMM_8_8", 16);
iVar3=8;
iVar4=8;
bVar0=true;
break;
case 137:
StringCopy(&Var2, "U_FMM_8_9", 16);
iVar3=8;
iVar4=9;
bVar0=true;
break;
case 138:
StringCopy(&Var2, "U_FMM_8_10", 16);
iVar3=8;
iVar4=10;
iVar1=65;
break;
case 139:
StringCopy(&Var2, "U_FMM_8_11", 16);
iVar3=8;
iVar4=11;
bVar0=true;
break;
case 140:
StringCopy(&Var2, "U_FMM_8_12", 16);
iVar3=8;
iVar4=12;
bVar0=true;
break;
case 141:
StringCopy(&Var2, "U_FMM_8_13", 16);
iVar3=8;
iVar4=13;
iVar1=40;
break;
case 142:
StringCopy(&Var2, "U_FMM_8_14", 16);
iVar3=8;
iVar4=14;
iVar1=45;
break;
case 143:
StringCopy(&Var2, "U_FMM_8_15", 16);
iVar3=8;
iVar4=15;
bVar0=true;
break;
case 144:
StringCopy(&Var2, "U_FMM_9_0", 16);
iVar3=9;
iVar4=0;
iVar1=265;
break;
case 145:
StringCopy(&Var2, "U_FMM_9_1", 16);
iVar3=9;
iVar4=1;
iVar1=340;
break;
case 146:
StringCopy(&Var2, "U_FMM_9_2", 16);
iVar3=9;
iVar4=2;
iVar1=335;
break;
case 147:
StringCopy(&Var2, "U_FMM_9_3", 16);
iVar3=9;
iVar4=3;
iVar1=330;
break;
case 148:
StringCopy(&Var2, "U_FMM_9_4", 16);
iVar3=9;
iVar4=4;
iVar1=345;
break;
case 149:
StringCopy(&Var2, "U_FMM_9_5", 16);
iVar3=9;
iVar4=5;
iVar1=550;
break;
case 150:
StringCopy(&Var2, "U_FMM_9_6", 16);
iVar3=9;
iVar4=6;
iVar1=340;
break;
case 151:
StringCopy(&Var2, "U_FMM_9_7", 16);
iVar3=9;
iVar4=7;
iVar1=295;
break;
case 152:
StringCopy(&Var2, "U_FMM_9_8", 16);
iVar3=9;
iVar4=8;
bVar0=true;
break;
case 153:
StringCopy(&Var2, "U_FMM_9_9", 16);
iVar3=9;
iVar4=9;
bVar0=true;
break;
case 154:
StringCopy(&Var2, "U_FMM_9_10", 16);
iVar3=9;
iVar4=10;
iVar1=545;
break;
case 155:
StringCopy(&Var2, "U_FMM_9_11", 16);
iVar3=9;
iVar4=11;
iVar1=345;
break;
case 156:
StringCopy(&Var2, "U_FMM_9_12", 16);
iVar3=9;
iVar4=12;
iVar1=315;
break;
case 157:
StringCopy(&Var2, "U_FMM_9_13", 16);
iVar3=9;
iVar4=13;
iVar1=520;
break;
case 158:
StringCopy(&Var2, "U_FMM_9_14", 16);
iVar3=9;
iVar4=14;
iVar1=325;
break;
case 159:
StringCopy(&Var2, "U_FMM_9_15", 16);
iVar3=9;
iVar4=15;
iVar1=330;
break;
}
switch (iParam0){
case 160:
StringCopy(&Var2, "SP_FMM_10_0", 16);
iVar3=10;
iVar4=0;
if(Global_262145.f_4212 !=-1){
iVar1=Global_262145.f_4212;
}else{
iVar1=405;
}
break;
case 161:
StringCopy(&Var2, "SP_FMM_10_1", 16);
iVar3=10;
iVar4=1;
if(Global_262145.f_4210 !=-1){
iVar1=Global_262145.f_4210;
}else{
iVar1=400;
}
break;
case 162:
StringCopy(&Var2, "SP_FMM_10_2", 16);
iVar3=10;
iVar4=2;
if(Global_262145.f_4196 !=-1){
iVar1=Global_262145.f_4196;
}else{
iVar1=425;
}
break;
case 163:
StringCopy(&Var2, "SP_FMM_10_3", 16);
iVar3=10;
iVar4=3;
if(Global_262145.f_4204 !=-1){
iVar1=Global_262145.f_4204;
}else{
iVar1=385;
}
break;
case 164:
StringCopy(&Var2, "SP_FMM_10_4", 16);
iVar3=10;
iVar4=4;
if(Global_262145.f_4189 !=-1){
iVar1=Global_262145.f_4189;
}else{
iVar1=385;
}
break;
case 165:
StringCopy(&Var2, "SP_FMM_10_5", 16);
iVar3=10;
iVar4=5;
if(Global_262145.f_4206 !=-1){
iVar1=Global_262145.f_4206;
}else{
iVar1=395;
}
break;
case 166:
StringCopy(&Var2, "SP_FMM_10_6", 16);
iVar3=10;
iVar4=6;
if(Global_262145.f_4195 !=-1){
iVar1=Global_262145.f_4195;
}else{
iVar1=500;
}
break;
case 167:
StringCopy(&Var2, "SP_FMM_10_7", 16);
iVar3=10;
iVar4=7;
if(Global_262145.f_4209 !=-1){
iVar1=Global_262145.f_4209;
}else{
iVar1=420;
}
break;
case 168:
StringCopy(&Var2, "SP_FMM_10_8", 16);
iVar3=10;
iVar4=8;
if(Global_262145.f_4205 !=-1){
iVar1=Global_262145.f_4205;
}else{
iVar1=410;
}
break;
case 169:
StringCopy(&Var2, "SP_FMM_10_9", 16);
iVar3=10;
iVar4=9;
if(Global_262145.f_4198 !=-1){
iVar1=Global_262145.f_4198;
}else{
iVar1=420;
}
break;
case 170:
StringCopy(&Var2, "SP_FMM_10_10", 16);
iVar3=10;
iVar4=10;
if(Global_262145.f_4203 !=-1){
iVar1=Global_262145.f_4203;
}else{
iVar1=405;
}
break;
case 171:
StringCopy(&Var2, "SP_FMM_10_11", 16);
iVar3=10;
iVar4=11;
if(Global_262145.f_4201 !=-1){
iVar1=Global_262145.f_4201;
}else{
iVar1=410;
}
break;
case 172:
StringCopy(&Var2, "SP_FMM_10_12", 16);
iVar3=10;
iVar4=12;
if(Global_262145.f_4193 !=-1){
iVar1=Global_262145.f_4193;
}else{
iVar1=420;
}
break;
case 173:
StringCopy(&Var2, "SP_FMM_10_13", 16);
iVar3=10;
iVar4=13;
if(Global_262145.f_4208 !=-1){
iVar1=Global_262145.f_4208;
}else{
iVar1=420;
}
break;
case 174:
StringCopy(&Var2, "SP_FMM_10_14", 16);
iVar3=10;
iVar4=14;
if(Global_262145.f_4211 !=-1){
iVar1=Global_262145.f_4211;
}else{
iVar1=410;
}
break;
case 175:
StringCopy(&Var2, "SP_FMM_10_15", 16);
iVar3=10;
iVar4=15;
if(Global_262145.f_4202 !=-1){
iVar1=Global_262145.f_4202;
}else{
iVar1=460;
}
break;
case 176:
StringCopy(&Var2, "SP_FMM_10_0", 16);
iVar3=11;
iVar4=0;
if(Global_262145.f_4212 !=-1){
iVar1=Global_262145.f_4212;
}else{
iVar1=405;
}
break;
case 177:
StringCopy(&Var2, "SP_FMM_10_1", 16);
iVar3=11;
iVar4=1;
if(Global_262145.f_4210 !=-1){
iVar1=Global_262145.f_4210;
}else{
iVar1=400;
}
break;
case 178:
StringCopy(&Var2, "SP_FMM_10_2", 16);
iVar3=11;
iVar4=2;
if(Global_262145.f_4196 !=-1){
iVar1=Global_262145.f_4196;
}else{
iVar1=425;
}
break;
case 179:
StringCopy(&Var2, "SP_FMM_10_3", 16);
iVar3=11;
iVar4=3;
if(Global_262145.f_4204 !=-1){
iVar1=Global_262145.f_4204;
}else{
iVar1=385;
}
break;
case 180:
StringCopy(&Var2, "SP_FMM_10_4", 16);
iVar3=11;
iVar4=4;
if(Global_262145.f_4189 !=-1){
iVar1=Global_262145.f_4189;
}else{
iVar1=385;
}
break;
case 181:
StringCopy(&Var2, "SP_FMM_10_5", 16);
iVar3=11;
iVar4=5;
if(Global_262145.f_4206 !=-1){
iVar1=Global_262145.f_4206;
}else{
iVar1=395;
}
break;
case 182:
StringCopy(&Var2, "SP_FMM_10_6", 16);
iVar3=11;
iVar4=6;
if(Global_262145.f_4195 !=-1){
iVar1=Global_262145.f_4195;
}else{
iVar1=500;
}
break;
case 183:
StringCopy(&Var2, "SP_FMM_10_7", 16);
iVar3=11;
iVar4=7;
if(Global_262145.f_4209 !=-1){
iVar1=Global_262145.f_4209;
}else{
iVar1=420;
}
break;
case 184:
StringCopy(&Var2, "SP_FMM_10_8", 16);
iVar3=11;
iVar4=8;
if(Global_262145.f_4205 !=-1){
iVar1=Global_262145.f_4205;
}else{
iVar1=410;
}
break;
case 185:
StringCopy(&Var2, "SP_FMM_10_9", 16);
iVar3=11;
iVar4=9;
if(Global_262145.f_4198 !=-1){
iVar1=Global_262145.f_4198;
}else{
iVar1=420;
}
break;
case 186:
StringCopy(&Var2, "SP_FMM_10_10", 16);
iVar3=11;
iVar4=10;
if(Global_262145.f_4203 !=-1){
iVar1=Global_262145.f_4203;
}else{
iVar1=405;
}
break;
case 187:
StringCopy(&Var2, "SP_FMM_10_11", 16);
iVar3=11;
iVar4=11;
if(Global_262145.f_4201 !=-1){
iVar1=Global_262145.f_4201;
}else{
iVar1=410;
}
break;
case 188:
StringCopy(&Var2, "SP_FMM_10_12", 16);
iVar3=11;
iVar4=12;
if(Global_262145.f_4193 !=-1){
iVar1=Global_262145.f_4193;
}else{
iVar1=420;
}
break;
case 189:
StringCopy(&Var2, "SP_FMM_10_13", 16);
iVar3=11;
iVar4=13;
if(Global_262145.f_4208 !=-1){
iVar1=Global_262145.f_4208;
}else{
iVar1=420;
}
break;
case 190:
StringCopy(&Var2, "SP_FMM_10_14", 16);
iVar3=11;
iVar4=14;
if(Global_262145.f_4211 !=-1){
iVar1=Global_262145.f_4211;
}else{
iVar1=410;
}
break;
case 191:
StringCopy(&Var2, "SP_FMM_10_15", 16);
iVar3=11;
iVar4=15;
if(Global_262145.f_4202 !=-1){
iVar1=Global_262145.f_4202;
}else{
iVar1=460;
}
break;
}
switch (iParam0){
case 192:
StringCopy(&Var2, "U_FMM_12_0", 16);
iVar3=12;
iVar4=0;
iVar1=420;
break;
case 193:
StringCopy(&Var2, "U_FMM_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=415;
break;
case 194:
StringCopy(&Var2, "U_FMM_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=695;
break;
case 195:
StringCopy(&Var2, "U_FMM_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=385;
break;
case 196:
StringCopy(&Var2, "U_FMM_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=330;
break;
case 197:
StringCopy(&Var2, "U_FMM_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=345;
break;
case 198:
StringCopy(&Var2, "U_FMM_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=340;
break;
case 199:
StringCopy(&Var2, "U_FMM_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=450;
break;
case 200:
StringCopy(&Var2, "U_FMM_12_8", 16);
iVar3=12;
iVar4=8;
iVar1=295;
break;
case 201:
StringCopy(&Var2, "U_FMM_12_9", 16);
iVar3=12;
iVar4=9;
iVar1=340;
break;
case 202:
StringCopy(&Var2, "U_FMM_12_10", 16);
iVar3=12;
iVar4=10;
iVar1=1060;
break;
case 203:
StringCopy(&Var2, "U_FMM_12_11", 16);
iVar3=12;
iVar4=11;
iVar1=1040;
break;
case 204:
StringCopy(&Var2, "U_FMM_12_12", 16);
iVar3=12;
iVar4=12;
bVar0=true;
break;
case 205:
StringCopy(&Var2, "U_FMM_12_13", 16);
iVar3=12;
iVar4=13;
bVar0=true;
break;
case 206:
StringCopy(&Var2, "U_FMM_12_14", 16);
iVar3=12;
iVar4=14;
bVar0=true;
break;
case 207:
StringCopy(&Var2, "U_FMM_12_15", 16);
iVar3=12;
iVar4=15;
bVar0=true;
break;
case 208:
StringCopy(&Var2, "U_FMM_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=420;
break;
case 209:
StringCopy(&Var2, "U_FMM_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=415;
break;
case 210:
StringCopy(&Var2, "U_FMM_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=680;
break;
case 211:
StringCopy(&Var2, "U_FMM_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=385;
break;
case 212:
StringCopy(&Var2, "U_FMM_13_4", 16);
iVar3=13;
iVar4=4;
bVar0=true;
break;
case 213:
StringCopy(&Var2, "U_FMM_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=345;
break;
case 214:
StringCopy(&Var2, "U_FMM_13_6", 16);
iVar3=13;
iVar4=6;
bVar0=true;
break;
case 215:
StringCopy(&Var2, "U_FMM_13_7", 16);
iVar3=13;
iVar4=7;
bVar0=true;
break;
case 216:
StringCopy(&Var2, "U_FMM_13_8", 16);
iVar3=13;
iVar4=8;
bVar0=true;
break;
case 217:
StringCopy(&Var2, "U_FMM_13_9", 16);
iVar3=13;
iVar4=9;
bVar0=true;
break;
case 218:
StringCopy(&Var2, "U_FMM_13_10", 16);
iVar3=13;
iVar4=10;
bVar0=true;
break;
case 219:
StringCopy(&Var2, "U_FMM_13_11", 16);
iVar3=13;
iVar4=11;
bVar0=true;
break;
case 220:
StringCopy(&Var2, "U_FMM_13_12", 16);
iVar3=13;
iVar4=12;
bVar0=true;
break;
case 221:
StringCopy(&Var2, "U_FMM_13_13", 16);
iVar3=13;
iVar4=13;
iVar1=1065;
break;
case 222:
StringCopy(&Var2, "U_FMM_13_14", 16);
iVar3=13;
iVar4=14;
bVar0=true;
break;
case 223:
StringCopy(&Var2, "U_FMM_13_15", 16);
iVar3=13;
iVar4=15;
bVar0=true;
break;
}
switch (iParam0){
case 224:
StringCopy(&Var2, "U_FMM_1_0", 16);
iVar3=14;
iVar4=0;
iVar1=45;
iVar1=round((to_float(iVar1) * Global_262145.f_443[16]));
break;
case 225:
StringCopy(&Var2, "U_FMM_1_1", 16);
iVar3=14;
iVar4=1;
iVar1=60;
iVar1=round((to_float(iVar1) * Global_262145.f_443[17]));
break;
case 226:
StringCopy(&Var2, "U_FMM_1_2", 16);
iVar3=14;
iVar4=2;
bVar0=true;
break;
case 227:
StringCopy(&Var2, "U_FMM_1_3", 16);
iVar3=14;
iVar4=3;
iVar1=40;
iVar1=round((to_float(iVar1) * Global_262145.f_443[19]));
break;
case 228:
StringCopy(&Var2, "U_FMM_1_4", 16);
iVar3=14;
iVar4=4;
iVar1=315;
iVar1=round((to_float(iVar1) * Global_262145.f_443[20]));
break;
case 229:
StringCopy(&Var2, "U_FMM_1_5", 16);
iVar3=14;
iVar4=5;
iVar1=215;
iVar1=round((to_float(iVar1) * Global_262145.f_443[21]));
break;
case 230:
StringCopy(&Var2, "U_FMM_1_6", 16);
iVar3=14;
iVar4=6;
iVar1=265;
iVar1=round((to_float(iVar1) * Global_262145.f_443[22]));
break;
case 231:
StringCopy(&Var2, "U_FMM_1_7", 16);
iVar3=14;
iVar4=7;
iVar1=45;
iVar1=round((to_float(iVar1) * Global_262145.f_443[23]));
break;
case 232:
StringCopy(&Var2, "U_FMM_1_8", 16);
iVar3=14;
iVar4=8;
iVar1=205;
iVar1=round((to_float(iVar1) * Global_262145.f_443[24]));
break;
case 233:
StringCopy(&Var2, "U_FMM_1_9", 16);
iVar3=14;
iVar4=9;
bVar0=true;
break;
case 234:
StringCopy(&Var2, "U_FMM_1_10", 16);
iVar3=14;
iVar4=10;
bVar0=true;
break;
case 235:
StringCopy(&Var2, "U_FMM_1_11", 16);
iVar3=14;
iVar4=11;
iVar1=60;
iVar1=round((to_float(iVar1) * Global_262145.f_443[27]));
break;
case 236:
StringCopy(&Var2, "U_FMM_1_12", 16);
iVar3=14;
iVar4=12;
iVar1=55;
iVar1=round((to_float(iVar1) * Global_262145.f_443[28]));
break;
case 237:
StringCopy(&Var2, "U_FMM_1_13", 16);
iVar3=14;
iVar4=13;
bVar0=true;
break;
case 238:
StringCopy(&Var2, "U_FMM_1_14", 16);
iVar3=14;
iVar4=14;
iVar1=170;
iVar1=round((to_float(iVar1) * Global_262145.f_443[30]));
break;
case 239:
StringCopy(&Var2, "U_FMM_1_15", 16);
iVar3=14;
iVar4=15;
bVar0=true;
break;
case 240:
StringCopy(&Var2, "U_FMM_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=0;
iVar1=round((to_float(iVar1) * Global_262145.f_443[32]));
break;
}
if(iParam0==23 || iParam0==231){
if(func_174(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round((to_float(1250) * Global_262145.f_2990));
}else{
iVar1=round((to_float(45) * Global_262145.f_443[23]));
}}elseif(iParam0==17 || iParam0==225){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round((to_float(450) * Global_262145.f_2989));
}elseif(iParam0==28 || iParam0==236){
if(func_174(87, -1)){
StringCopy(&Var2, "REW_REDSK", 16);
iVar1=round((to_float(500) * Global_262145.f_2988));
}else{
iVar1=round((to_float(55) * Global_262145.f_443[28]));
}}elseif(iParam0 >=0 && iParam0 < 32){
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 237){
iVar1=round((to_float(iVar1) * Global_262145.f_443[iVar8]));
}}elseif(iParam0 >=32 && iParam0 < 48){
iVar9=(iParam0 - 32);
if(iVar9 >=0 && iVar9 < 237){
iVar1=round((to_float(iVar1) * Global_262145.f_443[iVar9]));
}}elseif(iParam0 >=128 && iParam0 < 160){
iVar10=(iParam0 - 160) + 124;
if(iVar10 >=0 && iVar10 < 237){
iVar1=round((to_float(iVar1) * Global_262145.f_443[iVar10]));
}}elseif(iParam0 >=192 && iParam0 < 224){
iVar11=(iParam0 - 160) + 188;
if(iVar11 >=0 && iVar11 < 237){
iVar1=round((to_float(iVar1) * Global_262145.f_443[iVar11]));
}}
iVar1=round((to_float(iVar1) * Global_297959.f_16));
if(iParam0 >=241){
Global_78472[0 /*14*/].f_5=3;
func_142(iVar7, iParam0, 241, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_16));
}}else{
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_171(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=11;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=250;
break;
case 1:
iVar3=0;
iVar4=1;
iVar1=210;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=50;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=90;
break;
case 4:
iVar3=0;
iVar4=4;
iVar1=210;
break;
case 5:
iVar3=0;
iVar4=5;
iVar1=200;
break;
case 6:
iVar3=0;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 7:
iVar3=0;
iVar4=7;
iVar1=130;
break;
case 8:
iVar3=0;
iVar4=8;
iVar1=220;
break;
case 9:
iVar3=0;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 10:
iVar3=0;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 11:
iVar3=0;
iVar4=11;
iVar1=220;
break;
case 12:
iVar3=0;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 13:
iVar3=0;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 14:
iVar3=0;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 15:
iVar3=0;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 16:
iVar3=1;
iVar4=0;
iVar1=45;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=60;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=40;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=315;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=215;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=265;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=45;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=205;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 26:
iVar3=1;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 27:
iVar3=1;
iVar4=11;
iVar1=60;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=55;
break;
case 29:
iVar3=1;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 30:
iVar3=1;
iVar4=14;
iVar1=170;
break;
case 31:
iVar3=1;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 32:
iVar3=2;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 35:
iVar3=2;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 36:
iVar3=2;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 37:
iVar3=2;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 38:
iVar3=2;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 39:
iVar3=2;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 40:
iVar3=2;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 41:
iVar3=2;
iVar4=9;
iVar1=160;
break;
case 42:
iVar3=2;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 43:
iVar3=2;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 44:
iVar3=2;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 45:
iVar3=2;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 46:
iVar3=2;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 47:
iVar3=2;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 48:
iVar3=3;
iVar4=0;
iVar1=205;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=110;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=150;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=115;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=115;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=150;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=150;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=115;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=140;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=125;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=115;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=150;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=150;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=275;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=460;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=260;
break;
}
switch (iParam0){
case 64:
iVar3=4;
iVar4=0;
iVar1=965;
break;
case 65:
iVar3=4;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 66:
iVar3=4;
iVar4=2;
iVar1=2520;
break;
case 67:
iVar3=4;
iVar4=3;
iVar1=350;
break;
case 68:
iVar3=4;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 69:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 70:
iVar3=4;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 71:
iVar3=4;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 72:
iVar3=4;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 73:
iVar3=4;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 74:
iVar3=4;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 75:
iVar3=4;
iVar4=11;
iVar1=150;
break;
case 76:
iVar3=4;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 77:
iVar3=4;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 78:
iVar3=4;
iVar4=14;
iVar1=3125;
break;
case 79:
iVar3=4;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 80:
iVar3=5;
iVar4=0;
iVar1=80;
break;
case 81:
iVar3=5;
iVar4=1;
iVar1=45;
break;
case 82:
iVar3=5;
iVar4=2;
iVar1=50;
break;
case 83:
iVar3=5;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 84:
iVar3=5;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 85:
iVar3=5;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 86:
iVar3=5;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 87:
iVar3=5;
iVar4=7;
iVar1=50;
break;
case 88:
iVar3=5;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 89:
iVar3=5;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 90:
iVar3=5;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 91:
iVar3=5;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 92:
iVar3=5;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 93:
iVar3=5;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 94:
iVar3=5;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 95:
iVar3=5;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 96:
iVar3=6;
iVar4=0;
iVar1=2485;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=535;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 99:
iVar3=6;
iVar4=3;
iVar1=2945;
break;
case 100:
iVar3=6;
iVar4=4;
iVar1=3080;
break;
case 101:
iVar3=6;
iVar4=5;
iVar1=2990;
break;
case 102:
iVar3=6;
iVar4=6;
iVar1=3750;
break;
case 103:
iVar3=6;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 104:
iVar3=6;
iVar4=8;
iVar1=515;
break;
case 105:
iVar3=6;
iVar4=9;
iVar1=530;
break;
case 106:
iVar3=6;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 107:
iVar3=6;
iVar4=11;
iVar1=2810;
break;
case 108:
iVar3=7;
iVar4=0;
iVar1=150;
break;
case 109:
iVar3=7;
iVar4=1;
iVar1=155;
break;
case 110:
iVar3=7;
iVar4=2;
iVar1=320;
break;
case 111:
iVar3=7;
iVar4=3;
iVar1=140;
break;
case 112:
iVar3=7;
iVar4=4;
iVar1=150;
break;
case 113:
iVar3=7;
iVar4=5;
iVar1=145;
break;
case 114:
iVar3=7;
iVar4=6;
iVar1=150;
break;
case 115:
iVar3=7;
iVar4=7;
iVar1=140;
break;
case 116:
iVar3=7;
iVar4=8;
iVar1=135;
break;
case 117:
iVar3=7;
iVar4=9;
iVar1=130;
break;
case 118:
iVar3=7;
iVar4=10;
iVar1=130;
break;
case 119:
iVar3=7;
iVar4=11;
iVar1=150;
break;
case 120:
iVar3=7;
iVar4=12;
iVar1=145;
break;
case 121:
iVar3=7;
iVar4=13;
iVar1=740;
break;
case 122:
iVar3=7;
iVar4=14;
iVar1=790;
break;
case 123:
iVar3=7;
iVar4=15;
iVar1=130;
break;
}
switch (iParam0){
case 124:
iVar3=8;
iVar4=0;
iVar1=45;
break;
case 125:
iVar3=8;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 126:
iVar3=8;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 127:
iVar3=8;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 128:
iVar3=8;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 129:
iVar3=8;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 130:
iVar3=8;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 131:
iVar3=8;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 132:
iVar3=8;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 133:
iVar3=8;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 134:
iVar3=8;
iVar4=10;
iVar1=65;
break;
case 135:
iVar3=8;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 136:
iVar3=8;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 137:
iVar3=8;
iVar4=13;
iVar1=40;
break;
case 138:
iVar3=8;
iVar4=14;
iVar1=45;
break;
case 139:
iVar3=8;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 140:
iVar3=9;
iVar4=0;
iVar1=265;
break;
case 141:
iVar3=9;
iVar4=1;
iVar1=340;
break;
case 142:
iVar3=9;
iVar4=2;
iVar1=335;
break;
case 143:
iVar3=9;
iVar4=3;
iVar1=330;
break;
case 144:
iVar3=9;
iVar4=4;
iVar1=345;
break;
case 145:
iVar3=9;
iVar4=5;
iVar1=550;
break;
case 146:
iVar3=9;
iVar4=6;
iVar1=340;
break;
case 147:
iVar3=9;
iVar4=7;
iVar1=295;
break;
case 148:
iVar3=9;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 149:
iVar3=9;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 150:
iVar3=9;
iVar4=10;
iVar1=545;
break;
case 151:
iVar3=9;
iVar4=11;
iVar1=345;
break;
case 152:
iVar3=9;
iVar4=12;
iVar1=315;
break;
case 153:
iVar3=9;
iVar4=13;
iVar1=520;
break;
case 154:
iVar3=9;
iVar4=14;
iVar1=325;
break;
case 155:
iVar3=9;
iVar4=15;
iVar1=330;
break;
}
switch (iParam0){
case 156:
iVar3=10;
iVar4=0;
iVar1=505;
break;
case 157:
iVar3=10;
iVar4=1;
iVar1=470;
break;
case 158:
iVar3=10;
iVar4=2;
iVar1=475;
break;
case 159:
iVar3=10;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 160:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 161:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 162:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 163:
iVar3=10;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 164:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 165:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 166:
iVar3=10;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 167:
iVar3=10;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 168:
iVar3=10;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 169:
iVar3=10;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 170:
iVar3=10;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 171:
iVar3=10;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 172:
iVar3=11;
iVar4=0;
iVar1=120;
break;
case 173:
iVar3=11;
iVar4=1;
iVar1=360;
break;
case 174:
iVar3=11;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 175:
iVar3=11;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 176:
iVar3=11;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 177:
iVar3=11;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 178:
iVar3=11;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 179:
iVar3=11;
iVar4=7;
iVar1=90;
break;
case 180:
iVar3=11;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 181:
iVar3=11;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 182:
iVar3=11;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 183:
iVar3=11;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 184:
iVar3=11;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 185:
iVar3=11;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 186:
iVar3=11;
iVar4=14;
iVar1=2450;
break;
case 187:
iVar3=11;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 188:
iVar3=12;
iVar4=0;
iVar1=420;
break;
case 189:
iVar3=12;
iVar4=1;
iVar1=415;
break;
case 190:
iVar3=12;
iVar4=2;
iVar1=695;
break;
case 191:
iVar3=12;
iVar4=3;
iVar1=385;
break;
case 192:
iVar3=12;
iVar4=4;
iVar1=330;
break;
case 193:
iVar3=12;
iVar4=5;
iVar1=345;
break;
case 194:
iVar3=12;
iVar4=6;
iVar1=340;
break;
case 195:
iVar3=12;
iVar4=7;
iVar1=450;
break;
case 196:
iVar3=12;
iVar4=8;
iVar1=295;
break;
case 197:
iVar3=12;
iVar4=9;
iVar1=340;
break;
case 198:
iVar3=12;
iVar4=10;
iVar1=1060;
break;
case 199:
iVar3=12;
iVar4=11;
iVar1=1040;
break;
case 200:
iVar3=12;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 201:
iVar3=12;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 202:
iVar3=12;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 203:
iVar3=12;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 204:
iVar3=13;
iVar4=0;
iVar1=420;
break;
case 205:
iVar3=13;
iVar4=1;
iVar1=415;
break;
case 206:
iVar3=13;
iVar4=2;
iVar1=680;
break;
case 207:
iVar3=13;
iVar4=3;
iVar1=385;
break;
case 208:
iVar3=13;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 209:
iVar3=13;
iVar4=5;
iVar1=345;
break;
case 210:
iVar3=13;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 211:
iVar3=13;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 212:
iVar3=13;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 213:
iVar3=13;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 214:
iVar3=13;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 215:
iVar3=13;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 216:
iVar3=13;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 217:
iVar3=13;
iVar4=13;
iVar1=1065;
break;
case 218:
iVar3=13;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 219:
iVar3=13;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 220:
iVar3=14;
iVar4=0;
iVar1=420;
break;
case 221:
iVar3=14;
iVar4=1;
iVar1=415;
break;
case 222:
iVar3=14;
iVar4=2;
iVar1=440;
break;
case 223:
iVar3=14;
iVar4=3;
iVar1=385;
break;
case 224:
iVar3=14;
iVar4=4;
iVar1=330;
break;
case 225:
iVar3=14;
iVar4=5;
iVar1=445;
break;
case 226:
iVar3=14;
iVar4=6;
iVar1=340;
break;
case 227:
iVar3=14;
iVar4=7;
iVar1=440;
break;
case 228:
iVar3=14;
iVar4=8;
iVar1=295;
break;
case 229:
iVar3=14;
iVar4=9;
iVar1=340;
break;
case 230:
iVar3=14;
iVar4=10;
iVar1=325;
break;
case 231:
iVar3=14;
iVar4=11;
iVar1=435;
break;
case 232:
iVar3=14;
iVar4=12;
iVar1=445;
break;
case 233:
iVar3=14;
iVar4=13;
iVar1=440;
break;
case 234:
iVar3=14;
iVar4=14;
iVar1=325;
break;
case 235:
iVar3=14;
iVar4=15;
iVar1=325;
break;
case 236:
iVar3=15;
iVar4=0;
break;
}
StringCopy(&Var2, "U_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
if(iParam0==23){
if(func_174(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round(((to_float(1250) * Global_262145.f_2990) * Global_297959.f_16));
}else{
iVar1=round(((to_float(45) * Global_262145.f_443[23]) * Global_297959.f_16));
}}elseif(iParam0==17){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round(((to_float(450) * Global_262145.f_2989) * Global_297959.f_16));
}elseif(iParam0==28){
if(func_174(87, -1)){
StringCopy(&Var2, "REW_REDSK", 16);
iVar1=round(((to_float(500) * Global_262145.f_2988) * Global_297959.f_16));
}else{
iVar1=round(((to_float(55) * Global_262145.f_443[28]) * Global_297959.f_16));
}}else{
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 237){
iVar1=round(((to_float(iVar1) * Global_262145.f_443[iVar8]) * Global_297959.f_16));
}}
if(iParam0 >=237){
Global_78472[0 /*14*/].f_5=3;
func_142(iVar7, iParam0, 237, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_16));
}}else{
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_172(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=2;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=500;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[0]));
break;
case 1:
iVar3=1;
iVar4=0;
iVar1=190;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[1]));
break;
case 2:
iVar3=1;
iVar4=1;
iVar1=185;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[2]));
break;
case 3:
iVar3=1;
iVar4=2;
iVar1=180;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[3]));
break;
case 4:
iVar3=1;
iVar4=3;
iVar1=175;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[4]));
break;
case 5:
iVar3=1;
iVar4=4;
iVar1=170;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[5]));
break;
case 6:
iVar3=1;
iVar4=5;
iVar1=0;
break;
case 7:
iVar3=2;
iVar4=0;
iVar1=580;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[6]));
break;
case 8:
iVar3=2;
iVar4=1;
iVar1=575;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[7]));
break;
case 9:
iVar3=2;
iVar4=2;
iVar1=570;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[8]));
break;
case 10:
iVar3=2;
iVar4=3;
iVar1=565;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[9]));
break;
case 11:
iVar3=2;
iVar4=4;
iVar1=560;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[10]));
break;
case 12:
iVar3=2;
iVar4=5;
iVar1=0;
break;
case 13:
iVar3=3;
iVar4=0;
iVar1=1100;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[11]));
break;
case 14:
iVar3=3;
iVar4=1;
iVar1=1095;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[12]));
break;
case 15:
iVar3=3;
iVar4=2;
iVar1=1090;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[13]));
break;
case 16:
iVar3=3;
iVar4=3;
iVar1=1085;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[14]));
break;
case 17:
iVar3=3;
iVar4=4;
iVar1=1080;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[15]));
break;
case 18:
iVar3=3;
iVar4=5;
iVar1=0;
break;
case 19:
iVar3=4;
iVar4=0;
iVar1=520;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[16]));
break;
case 20:
iVar3=4;
iVar4=1;
iVar1=515;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[17]));
break;
case 21:
iVar3=4;
iVar4=2;
iVar1=510;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[18]));
break;
case 22:
iVar3=4;
iVar4=3;
iVar1=505;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[19]));
break;
case 23:
iVar3=4;
iVar4=4;
iVar1=500;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[20]));
break;
case 24:
iVar3=4;
iVar4=5;
iVar1=0;
break;
case 25:
iVar3=4;
iVar4=6;
iVar1=0;
break;
case 26:
iVar3=5;
iVar4=0;
iVar1=295;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[21]));
break;
case 27:
iVar3=5;
iVar4=1;
iVar1=290;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[22]));
break;
case 28:
iVar3=5;
iVar4=2;
iVar1=285;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[23]));
break;
case 29:
iVar3=5;
iVar4=3;
iVar1=280;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[24]));
break;
case 30:
iVar3=5;
iVar4=4;
iVar1=275;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[25]));
break;
case 31:
iVar3=5;
iVar4=5;
iVar1=0;
break;
case 32:
iVar3=6;
iVar4=0;
iVar1=950;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[26]));
break;
case 33:
iVar3=6;
iVar4=1;
iVar1=945;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[27]));
break;
case 34:
iVar3=6;
iVar4=2;
iVar1=940;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[28]));
break;
case 35:
iVar3=6;
iVar4=3;
iVar1=935;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[29]));
break;
case 36:
iVar3=6;
iVar4=4;
iVar1=930;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[30]));
break;
case 37:
iVar3=6;
iVar4=5;
iVar1=0;
break;
case 38:
iVar3=7;
iVar4=0;
iVar1=440;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[31]));
break;
case 39:
iVar3=7;
iVar4=1;
iVar1=435;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[32]));
break;
case 40:
iVar3=7;
iVar4=2;
iVar1=430;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[33]));
break;
case 41:
iVar3=7;
iVar4=3;
iVar1=425;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[34]));
break;
case 42:
iVar3=7;
iVar4=4;
iVar1=420;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[35]));
break;
case 43:
iVar3=7;
iVar4=5;
iVar1=0;
break;
case 44:
iVar3=7;
iVar4=6;
iVar1=0;
break;
case 45:
iVar3=8;
iVar4=0;
iVar1=1150;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[36]));
break;
case 46:
iVar3=8;
iVar4=1;
iVar1=1145;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[37]));
break;
case 47:
iVar3=8;
iVar4=2;
iVar1=1140;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[38]));
break;
case 48:
iVar3=8;
iVar4=3;
iVar1=1135;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[39]));
break;
case 49:
iVar3=8;
iVar4=4;
iVar1=1130;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[40]));
break;
case 50:
iVar3=9;
iVar4=0;
iVar1=395;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[41]));
break;
case 51:
iVar3=9;
iVar4=1;
iVar1=390;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[42]));
break;
case 52:
iVar3=9;
iVar4=2;
iVar1=385;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[43]));
break;
case 53:
iVar3=9;
iVar4=3;
iVar1=380;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[44]));
break;
case 54:
iVar3=9;
iVar4=4;
iVar1=375;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[45]));
break;
case 55:
iVar3=9;
iVar4=5;
iVar1=0;
break;
case 56:
iVar3=9;
iVar4=6;
iVar1=0;
break;
case 57:
iVar3=10;
iVar4=0;
iVar1=500;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[46]));
break;
case 58:
iVar3=10;
iVar4=1;
iVar1=495;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[47]));
break;
case 59:
iVar3=10;
iVar4=2;
iVar1=490;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[48]));
break;
case 60:
iVar3=10;
iVar4=3;
iVar1=485;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[49]));
break;
case 61:
iVar3=10;
iVar4=4;
iVar1=480;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[50]));
break;
case 62:
iVar3=10;
iVar4=5;
iVar1=0;
break;
case 63:
iVar3=11;
iVar4=0;
iVar1=1050;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[51]));
break;
case 64:
iVar3=11;
iVar4=1;
iVar1=1045;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[52]));
break;
case 65:
iVar3=11;
iVar4=2;
iVar1=1040;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[53]));
break;
case 66:
iVar3=11;
iVar4=3;
iVar1=1035;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[54]));
break;
case 67:
iVar3=11;
iVar4=4;
iVar1=1030;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[55]));
break;
case 68:
iVar3=11;
iVar4=5;
iVar1=0;
break;
case 69:
iVar3=12;
iVar4=0;
iVar1=550;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[56]));
break;
case 70:
iVar3=12;
iVar4=1;
iVar1=545;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[57]));
break;
case 71:
iVar3=12;
iVar4=2;
iVar1=540;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[58]));
break;
case 72:
iVar3=12;
iVar4=3;
iVar1=535;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[59]));
break;
case 73:
iVar3=12;
iVar4=4;
iVar1=530;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[60]));
break;
case 74:
iVar3=13;
iVar4=0;
iVar1=1200;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[61]));
break;
case 75:
iVar3=13;
iVar4=1;
iVar1=1195;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[62]));
break;
case 76:
iVar3=13;
iVar4=2;
iVar1=1190;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[63]));
break;
case 77:
iVar3=13;
iVar4=3;
iVar1=1185;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[64]));
break;
case 78:
iVar3=13;
iVar4=4;
iVar1=1180;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[65]));
break;
case 79:
iVar3=13;
iVar4=5;
iVar1=0;
break;
case 80:
iVar3=14;
iVar4=0;
iVar1=2000;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[66]));
break;
case 81:
iVar3=14;
iVar4=1;
iVar1=1995;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[67]));
break;
case 82:
iVar3=14;
iVar4=2;
iVar1=1990;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[68]));
break;
case 83:
iVar3=14;
iVar4=3;
iVar1=1985;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[69]));
break;
case 84:
iVar3=14;
iVar4=4;
iVar1=1980;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[70]));
break;
case 85:
iVar3=15;
iVar4=0;
iVar1=475;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[71]));
break;
case 86:
iVar3=15;
iVar4=1;
iVar1=470;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[72]));
break;
case 87:
iVar3=15;
iVar4=2;
iVar1=465;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[73]));
break;
case 88:
iVar3=15;
iVar4=3;
iVar1=460;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[74]));
break;
case 89:
iVar3=15;
iVar4=4;
iVar1=455;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[75]));
break;
case 90:
iVar3=15;
iVar4=5;
iVar1=0;
break;
default:
Global_78472[0 /*14*/].f_5=3;
func_142(iVar7, iParam0, 91, iParam1);
return;
break;
}
StringCopy(&Var2, "H_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_129(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_173(){
Global_78472[0 /*14*/].f_1=-1;
Global_78472[0 /*14*/].f_2=-1;
Global_78472[0 /*14*/].f_5=-1;
Global_78472[0 /*14*/].f_3=-1;
Global_78472[0 /*14*/].f_4=-1;
Global_78472[0 /*14*/].f_7=0;
Global_78472[0 /*14*/].f_6=0;
Global_78472[0 /*14*/].f_13=-1;
Global_78472[0 /*14*/].f_12=0;
Global_78472[0 /*14*/]=0;
StringCopy(&(Global_78472[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_174(int iParam0, int iParam1){
var uVar0;
int iVar1;
if(func_176(iParam0)==14385){
return 0;
}
uVar0=func_175(iParam0, iParam1);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_25(iVar1));
}

int func_175(var uParam0, int iParam1){
int iVar0;
iVar0=func_132(func_176(uParam0), iParam1);
return iVar0;
}

int func_176(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_26(iVar0);
if((func_17()==0 || func_177()==0) || (func_17()==999 && func_177()==999)){
switch (iVar1){
case 0:
return 1039;
break;
case 1:
return 1040;
break;
case 2:
return 1041;
break;
case 3:
return 1042;
break;
case 4:
return 1043;
break;
case 5:
return 1503;
break;
case 6:
return 1758;
break;
case 7:
return 1952;
break;
case 8:
return 1953;
break;
case 9:
return 1954;
break;
case 10:
return 1955;
break;
case 11:
return 1956;
break;
case 12:
return 1957;
break;
case 13:
return 2424;
break;
case 14:
return 2444;
break;
case 15:
return 2447;
break;
case 16:
return 2450;
break;
case 17:
return 2614;
break;
case 18:
return 2617;
break;
case 19:
return 2620;
break;
case 20:
return 3786;
break;
case 21:
return 3789;
break;
case 22:
return 3864;
break;
case 23:
return 3867;
break;
case 24:
return 3870;
break;
case 25:
return 3873;
break;
case 26:
return 5364;
break;
case 27:
return 5367;
break;
case 28:
return 5469;
break;
case 29:
return 5472;
break;
case 30:
return 6431;
break;
case 31:
return 6434;
break;
case 32:
return 7255;
break;
case 33:
return 7258;
break;
case 34:
return 7261;
break;
case 35:
return 7970;
break;
case 36:
return 7973;
break;
case 37:
return 7976;
break;
case 38:
return 7979;
break;
case 39:
return 8501;
break;
case 40:
return 8504;
break;
case 41:
return 8507;
break;
case 42:
return 8510;
break;
case 43:
return 8906;
break;
case 44:
return 8909;
break;
case 45:
return 8912;
break;
case 46:
return 10287;
break;
case 47:
return 10290;
break;
case 48:
return 10413;
break;
case 49:
return 10416;
break;
case 50:
return 11824;
break;
case 51:
return 11827;
break;
}}
return 14385;
}

int func_177(){
return Global_32284;
}


bool func_178(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_22();
}
return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_179(int iParam0, int iParam1){
int iVar0;
iVar0=FILES::GET_TATTOO_SHOP_DLC_ITEM_INDEX(iParam1, -1, iParam0);
if(iVar0 !=-1){
return (129 + iVar0);
}
return -1;
}

int func_180(int iParam0, int iParam1, int iParam2, int iParam3){
struct<2> Var0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(iParam2==12){
iVar2=FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iParam3, 0);
iVar1=0;
while (iVar1 < iVar2){
FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar1, &Var0);
if(Var0.f_1==iParam1){
return (func_183(iParam0) + iVar1);
}
iVar1++;
}}elseif(iParam2==13){}elseif(iParam2==14){
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 1, -1, -1);
iVar3=FILES::GET_SHOP_PED_QUERY_PROP_INDEX(iParam1);
if(iVar3 !=-1){
return (func_182(iParam0) + iVar3);
}}else{
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_143(iParam2));
iVar4=FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iParam1);
if(iVar4 !=-1){
return (func_181(iParam0, func_143(iParam2)) + iVar4);
}}
return -99;
}

int func_181(int iParam0, int iParam1){
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 0:
return 7;
break;
case 1:
return 5;
break;
case 2:
return 6;
break;
case 3:
return 181;
break;
case 4:
return 113;
break;
case 5:
return 14;
break;
case 6:
return 99;
break;
case 7:
return 1;
break;
case 8:
return 24;
break;
case 9:
return 20;
break;
case 10:
return 48;
break;
case 11:
return 45;
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 5;
break;
case 2:
return 21;
break;
case 3:
return 318;
break;
case 4:
return 117;
break;
case 5:
return 7;
break;
case 6:
return 134;
break;
case 7:
return 1;
break;
case 8:
return 77;
break;
case 9:
return 12;
break;
case 10:
return 53;
break;
case 11:
return 63;
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
return 7;
break;
case 1:
return 6;
break;
case 2:
return 9;
break;
case 3:
return 242;
break;
case 4:
return 104;
break;
case 5:
return 7;
break;
case 6:
return 84;
break;
case 7:
return 1;
break;
case 8:
return 18;
break;
case 9:
return 17;
break;
case 10:
return 33;
break;
case 11:
return 1;
break;
}
break;
}
switch (iParam0){
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
return 0;
break;
case 1:
return 26;
break;
case 2:
return 91;
break;
case 3:
return 16;
break;
case 4:
return 256;
break;
case 5:
return 9;
break;
case 6:
return 256;
break;
case 7:
return 92;
break;
case 8:
return 241;
break;
case 9:
return 46;
break;
case 10:
return 7;
break;
case 11:
return 237;
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
return 0;
break;
case 1:
return 26;
break;
case 2:
return 92;
break;
case 3:
return 16;
break;
case 4:
return 256;
break;
case 5:
return 9;
break;
case 6:
return 256;
break;
case 7:
return 55;
break;
case 8:
return 136;
break;
case 9:
return 36;
break;
case 10:
return 6;
break;
case 11:
return 256;
break;
}
break;
}
return -99;
}

int func_182(int iParam0){
switch (iParam0){
case joaat("player_zero"):
return 113;
break;
case joaat("player_one"):
return 175;
break;
case joaat("player_two"):
return 155;
break;
}
switch (iParam0){
case joaat("mp_m_freemode_01"):
return 327;
break;
case joaat("mp_f_freemode_01"):
return 327;
break;
}
return -99;
}

int func_183(int iParam0){
switch (iParam0){
case joaat("player_zero"):
return 53;
break;
case joaat("player_one"):
return 47;
break;
case joaat("player_two"):
return 48;
break;
}
switch (iParam0){
case joaat("mp_m_freemode_01"):
return 26;
break;
case joaat("mp_f_freemode_01"):
return 28;
break;
}
return -99;
}

int func_184(int iParam0){
struct<7> Var0;
struct<2> Var1;
struct<2> Var2;
FILES::GET_SHOP_PED_COMPONENT(iParam0, &Var0);
if(iParam0==Var0.f_1){
return func_185(Var0.f_6);
}
FILES::GET_SHOP_PED_PROP(iParam0, &Var1);
if(iParam0==Var1.f_1){
return 14;
}
FILES::GET_SHOP_PED_OUTFIT(iParam0, &Var2);
if(iParam0==Var2.f_1){
return 12;
}
return -1;
}

int func_185(int iParam0){
switch (iParam0){
case 0:
return 0;
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
case 6:
return 6;
break;
case 5:
return 5;
break;
case 8:
return 8;
break;
case 9:
return 9;
break;
case 10:
return 10;
break;
case 1:
return 1;
break;
case 7:
return 7;
break;
case 11:
return 11;
break;
}
return 0;
}

int func_186(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 >=0 && iVar0 < 11){
if(func_122()){
if(Global_262145.f_32003[iVar0] !=-1){
return 1;
}}elseif(Global_262145.f_31991[iVar0] !=-1){
return 1;
}}
return 0;
}

int func_187(int iParam0){
if(func_189(iParam0) || func_188(iParam0)){
return 0;
}
return 1;
}

int func_188(int iParam0){
switch (iParam0){
case 16:
case 17:
case 18:
case 19:
case 20:
case 21:
case 22:
case 23:
case 24:
case 25:
return 1;
default:
}
return 0;
}

int func_189(int iParam0){
switch (iParam0){
case 0:
case 4:
case 3:
case 2:
case 5:
case 1:
return 1;
default:
}
return 0;
}

int func_190(int iParam0){
switch (iParam0){
case 264:
return 1;
default:
}
return 0;
}

int func_191(int iParam0){
switch (iParam0){
case 271:
return 1;
default:
}
return 0;
}

int func_192(int iParam0){
switch (iParam0){
case 256:
return 1;
default:
}
return 0;
}

int func_193(int iParam0){
switch (iParam0){
case 158:
return 1;
default:
}
return 0;
}

int func_194(int iParam0){
switch (iParam0){
case 243:
return 1;
default:
}
return 0;
}

int func_195(int iParam0){
if(((((((((iParam0==250 || iParam0==238) || iParam0==242) || iParam0==244) || iParam0==248) || iParam0==241) || iParam0==239) || iParam0==240) || iParam0==249) || (iParam0==237 && func_189(func_196(PLAYER::PLAYER_ID())))){
return 1;
}
return 0;
}

int func_196(bool bParam0){
if(func_33(bParam0)==237 || func_33(bParam0)==250){
return func_197(bParam0);
}
return -1;
}

int func_197(bool bParam0){
if(func_34(bParam0, 0)){
return Global_1895156[bParam0 /*609*/].f_10.f_182;
}
return -1;
}

int func_198(int iParam0){
if(iParam0==237){
return 1;
}
return 0;
}

int func_199(int iParam0){
switch (iParam0){
case 150:
case 236:
case 237:
case 238:
case 239:
case 240:
case 241:
case 242:
case 244:
case 248:
case 249:
case 250:
return 1;
default:
}
return 0;
}

int func_200(int iParam0){
switch (iParam0){
case 233:
return 1;
default:
}
return 0;
}

int func_201(int iParam0){
switch (iParam0){
case 229:
case 230:
return 1;
default:
}
return 0;
}

int func_202(int iParam0){
switch (iParam0){
case 225:
case 226:
case 227:
return 1;
default:
}
return 0;
}

int func_203(int iParam0){
switch (iParam0){
case 214:
case 215:
case 216:
case 217:
case 218:
case 219:
case 220:
case 221:
case 188:
case 178:
return 1;
default:
}
return 0;
}


void func_204(int iParam0){
if(func_212(PLAYER::PLAYER_ID()) && func_211()){
if(func_210(iParam0)){
func_208(12683, -1);
}elseif(func_207(iParam0)){
func_208(12685, -1);
}elseif(func_206(iParam0, 1)){
func_208(12686, -1);
}elseif(func_205(iParam0)){
func_208(12687, -1);
}}}

int func_205(int iParam0){
switch (iParam0){
case 194:
case 193:
case 189:
case 153:
return 1;
default:
}
return 0;
}

int func_206(int iParam0, int iParam1){
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

int func_207(int iParam0){
switch (iParam0){
case 179:
case 201:
case 200:
case 148:
return 1;
default:
}
return 0;
}


void func_208(int iParam0, int iParam1){
int iVar0;
iVar0=func_132(iParam0, func_134(iParam1));
iVar0++;
func_209(iParam0, iVar0, iParam1, 1);
}


void func_209(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_133(iParam0, iParam2);
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}

int func_210(int iParam0){
switch (iParam0){
case 180:
case 183:
case 185:
case 186:
case 182:
case 195:
case 197:
case 198:
case 207:
case 208:
case 209:
return 1;
default:
}
return 0;
}


bool func_211(){
return func_66(PLAYER::PLAYER_ID());
}

int func_212(bool bParam0){
if(!func_9(bParam0)){
return 0;
}
return MISC::IS_BIT_SET(Global_1853988[bParam0 /*867*/].f_267.f_133, 14);
}


bool func_213(bool bParam0){
return func_37(bParam0, 20);
}


void func_214(var uParam0, bool bParam1, bool bParam2){
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


void func_215(int iParam0, int iParam1){
if(iParam1 > 0){
if(Global_262145.f_24178 !=-1){
if(func_216()){
Global_2794162.f_283=iParam0;
if(iParam1 > Global_262145.f_7127){
iParam1=Global_262145.f_7127;
}
Global_2794162.f_284=iParam1;
Global_2794162.f_285=0;
}}}}

int func_216(){
if(MISC::IS_PC_VERSION() && Global_1984719==0){
return 0;
}
return 0;
}

int func_217(int iParam0){
switch (iParam0){
case 142:
return 25;
case 157:
return 22;
case 159:
return 21;
case 151:
return 33;
case 148:
return 23;
case 164:
return 24;
case 152:
return 26;
case 153:
return 30;
case 154:
return 32;
case 155:
return 28;
case 160:
return 29;
case 162:
return 31;
case 163:
return 27;
case 166:
return 38;
case 170:
return 34;
case 171:
return 35;
case 172:
return 36;
case 173:
return 37;
case 179:
return 23;
default:
}
return 0;
}

int func_218(int iParam0){
int iVar0;
iVar0=1;
switch (iParam0){
case 167:
iVar0=0;
break;
case 169:
iVar0=0;
break;
case 168:
iVar0=0;
break;
case 166:
iVar0=0;
break;
case 190:
iVar0=0;
break;
case 191:
iVar0=0;
break;
case 192:
iVar0=0;
break;
}
return iVar0;
}


void func_219(int iParam0, int iParam1){
if(func_212(PLAYER::PLAYER_ID()) && func_211()){
if(func_210(iParam0) && iParam1 > 0){
func_209(12684, (func_132(12684, -1) + iParam1), -1, 1);
}}}


void func_220(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5){
var uVar0;
var uVar1;
int iVar2;
int iVar3;
int iVar4;
bool bVar5;
bool bVar6;
bool bVar7;
bool bVar8;
struct<2> Var9;
char* sVar10;
bVar6=func_12();
if(bVar6 !=func_11()){
func_249(bVar6, &uVar0, &uVar1);
}
bVar7=!func_109(1);
bVar8=func_109(0);
Var9.f_1=-1;
switch (iParam0){
case 168:
if(func_248()){
if(!func_247()){
MONEY::NETWORK_EARN_FROM_CONTRABAND(iParam1, uParam3);
}}elseif(func_247()){
func_236(-856006867, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
}else{
MONEY::NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
}
if(bVar8){
bVar5=true;
}
break;
case 190:
if(func_211()){
if(!func_247()){
Var9={
func_235() 
};
MONEY::NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_234(Var9.f_0)), func_233(Var9.f_0), iParam4);
}}elseif(func_247()){
func_236(-856006867, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
}else{
MONEY::NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
}
if(bVar8){
bVar5=true;
}
break;
case 226:
if(func_248()){
if(!func_247()){
MONEY::NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_234(func_232(PLAYER::PLAYER_ID()))), 5, iParam4);
}}elseif(func_247()){
func_236(-856006867, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
}else{
MONEY::NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
}
if(bVar8){
bVar5=true;
}
break;
case 230:
if(func_248()){
if(!func_247()){
iVar2=func_228(uParam5->f_16, iParam4);
iVar3=iParam1;
if(iVar2 > 0){
iVar3=(iVar3 - iVar2);
}
if(iParam2 > 0){
iVar3=(iVar3 - iParam2);
}
MONEY::NETWORK_EARN_FROM_SMUGGLER_WORK(iVar3, iParam4, iParam2, iVar2, uParam5->f_16, 230);
}}else{
if(func_247()){
func_236(463142405, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
}else{
MONEY::NETWORK_EARN_SMUGGLER_AGENCY(uVar0, uVar1, iParam1, bVar7);
}
if(bVar8){
bVar5=true;
}}
break;
case 233:
if(func_247()){
func_236(1407278493, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
}else{
MONEY::NETWORK_EARN_GANGOPS_PREP_PARTICIPATION(iParam1);
}
break;
case 237:
if(func_248()){
if(!func_247()){
MONEY::NETWORK_EARN_FROM_BUSINESS_HUB_SELL(iParam1, uParam5->f_20, iParam4);
}}else{
if(func_247()){
func_236(-856006867, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
}else{
MONEY::NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
}
if(bVar8){
bVar5=true;
}}
break;
case 250:
if(func_247()){
func_236(-961034881, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
Global_4535172[iVar4 /*85*/]=1781827765;
}else{
MONEY::NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(iParam1, 1781827765);
}
break;
case 249:
if(func_247()){
func_236(1135468152, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
}else{
MONEY::NETWORK_EARN_FROM_FMBB_PHONECALL_MISSION(iParam1);
}
break;
case 242:
case 244:
case 248:
case 241:
case 239:
case 240:
if(func_247()){
func_236(-634726636, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
}else{
MONEY::NETWORK_EARN_FROM_FMBB_BOSS_WORK(iParam1);
}
break;
case 243:
if(func_247()){
func_236(1698417709, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
}else{
MONEY::NETWORK_EARN_CASINO_MISSION_REWARD(iParam1);
}
break;
case 158:
if(uParam5->f_22){
if(func_247()){
func_236(1668610896, iParam1, &iVar4, 0, 1, 0);
}else{
MONEY::NETWORK_EARN_CASINO_HEIST(iParam1, 0, 0, 1, iParam1, 0, 0);
}}elseif(func_247()){
func_236(-2032529561, iParam1, &iVar4, 0, 1, 0);
}else{
MONEY::NETWORK_EARN_CASINO_HEIST(iParam1, 1, iParam1, 0, 0, 0, 0);
}
break;
default:
if(func_247()){
func_236(-856006867, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
}else{
MONEY::NETWORK_EARN_AGENCY(uVar0, uVar1, iParam1, bVar7);
}
break;
}
if(bVar5){
sVar10="GBMR_SELLTICK0";
if(func_227(1)){
sVar10="GBMR_SELLTICK2";
}elseif(func_226(bVar6)){
sVar10="GBMR_SELLTICK1";
}
func_221(sVar10, iParam1, 0);
}}

int func_221(char* sParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=-1;
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
if(bParam2){
func_222(3, sParam0, 2, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
}else{
func_222(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
}
return iVar0;
}


void func_222(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11){
int iVar0;
if((!func_225() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_20(PLAYER::PLAYER_ID(), 0)){
return;
}
iVar0=func_223(iParam2);
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

int func_223(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(Global_1944768 - 1)){
if(iParam0 > Global_1944768.f_5[iVar0 /*53*/].f_1){
func_224(iVar0);
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


void func_224(int iParam0){
int iVar0;
iVar0=4;
while (iVar0 >=iParam0 + 1){
Global_1944768.f_5[iVar0 /*53*/]={
Global_1944768.f_5[(iVar0 - 1) /*53*/] 
};
iVar0=(iVar0 + -1);
}}


bool func_225(){
return DLC::IS_DLC_PRESENT(-1762644250);
}

int func_226(bool bParam0){
if(!func_9(bParam0)){
return 0;
}
return MISC::IS_BIT_SET(Global_1853988[bParam0 /*867*/].f_267.f_31, 26);
}


bool func_227(bool bParam0){
return func_6(PLAYER::PLAYER_ID(), bParam0);
}

int func_228(int iParam0, int iParam1){
float fVar0;
float fVar1;
fVar0=func_231(iParam0, iParam1);
fVar1=(to_float(func_229(iParam0, iParam1)) * fVar0);
return round(fVar1);
}

int func_229(int iParam0, int iParam1){
return (func_230(iParam0) * iParam1);
}

int func_230(int iParam0){
switch (iParam0){
case 8:
return Global_262145.f_22990;
case 0:
return Global_262145.f_22991;
case 1:
return Global_262145.f_22992;
case 2:
return Global_262145.f_22993;
case 3:
return Global_262145.f_22994;
case 4:
return Global_262145.f_22995;
case 5:
return Global_262145.f_22996;
case 6:
return Global_262145.f_22997;
case 7:
return Global_262145.f_22998;
default:
}
return 0;
}


float func_231(int iParam0, int iParam1){
float fVar0;
float fVar1;
int iVar2;
fVar0=0f;
fVar1=to_float(Global_262145.f_23000);
switch (iParam0){
case -1:
case 8:
return 0f;
case 7:
fVar0=Global_262145.f_23002;
fVar1=to_float(Global_262145.f_22999);
break;
case 3:
fVar0=Global_262145.f_23002;
fVar1=to_float(Global_262145.f_22999);
break;
case 0:
fVar0=Global_262145.f_23003;
break;
case 1:
fVar0=Global_262145.f_23003;
break;
case 4:
fVar0=Global_262145.f_23003;
break;
case 6:
fVar0=Global_262145.f_23004;
fVar1=to_float(Global_262145.f_23001);
break;
case 2:
fVar0=Global_262145.f_23004;
fVar1=to_float(Global_262145.f_23001);
break;
case 5:
fVar0=Global_262145.f_23004;
fVar1=to_float(Global_262145.f_23001);
break;
}
iVar2=floor((to_float(iParam1) / fVar1));
return (to_float(iVar2) * fVar0);
}

int func_232(bool bParam0){
if(bParam0==func_11()){
return 0;
}
return Global_1853988[bParam0 /*867*/].f_267.f_193[5 /*13*/];
}

int func_233(int iParam0){
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


char* func_234(int iParam0){
char* sVar0;
switch (iParam0){
case 2:
sVar0="MP_BWH_WEED_1";
break;
case 1:
sVar0="MP_BWH_METH_1";
break;
case 3:
sVar0="MP_BWH_CRACK_1";
break;
case 5:
sVar0="MP_BWH_FAKEID_1";
break;
case 4:
sVar0="MP_BWH_CASH_1";
break;
case 7:
sVar0="MP_BWH_WEED_2";
break;
case 6:
sVar0="MP_BWH_METH_2";
break;
case 8:
sVar0="MP_BWH_CRACK_2";
break;
case 10:
sVar0="MP_BWH_FAKEID_2";
break;
case 9:
sVar0="MP_BWH_CASH_2";
break;
case 12:
sVar0="MP_BWH_WEED_3";
break;
case 11:
sVar0="MP_BWH_METH_3";
break;
case 13:
sVar0="MP_BWH_CRACK_3";
break;
case 15:
sVar0="MP_BWH_FAKEID_3";
break;
case 14:
sVar0="MP_BWH_CASH_3";
break;
case 17:
sVar0="MP_BWH_WEED_4";
break;
case 16:
sVar0="MP_BWH_METH_4";
break;
case 18:
sVar0="MP_BWH_CRACK_4";
break;
case 20:
sVar0="MP_BWH_FAKEID_4";
break;
case 19:
sVar0="MP_BWH_CASH_4";
break;
case 32:
sVar0="MP_BWH_ACID";
break;
case 21:
sVar0="MP_BUNKER_1";
break;
case 22:
sVar0="MP_BUNKER_2";
break;
case 23:
sVar0="MP_BUNKER_3";
break;
case 24:
sVar0="MP_BUNKER_4";
break;
case 25:
sVar0="MP_BUNKER_5";
break;
case 26:
sVar0="MP_BUNKER_6";
break;
case 27:
sVar0="MP_BUNKER_7";
break;
case 28:
sVar0="MP_BUNKER_9";
break;
case 29:
sVar0="MP_BUNKER_10";
break;
case 30:
sVar0="MP_BUNKER_11";
break;
case 31:
sVar0="MP_BUNKER_12";
break;
}
return sVar0;
}


struct<2> func_235(){
return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_194;
}


void func_236(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5){
int iVar0;
if(!func_247()){
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
func_237(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_237(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_237(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_237(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
break;
}}

int func_237(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
bool bVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
bVar0=false;
if(!func_247()){
bVar0=true;
}
iVar1=1;
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_22()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
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
*uParam0=func_244(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
func_243(1, iParam4);
Global_4536677=0;
}
if(iParam7 & 4 !=0){
func_238(-1, iParam4, iParam6, iParam5, -1);
}}
return 0;
}


void func_238(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4){
switch (iParam1){
case 1704445500:
MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_126.f_71), false);
break;
}
if(iParam0 !=-1){
func_239(iParam0);
}}


void func_239(int iParam0){
bool bVar0;
bVar0=false;
if(!func_247()){
bVar0=true;
}
if(iParam0 !=-1){
if(func_242(iParam0)){
if(!bVar0){
NETSHOPPING::NET_GAMESERVER_BASKET_END();
}}elseif(!bVar0){
NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
}
func_240(&(Global_4535172[iParam0 /*85*/]));
}}


void func_240(var uParam0){
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
func_241(&(uParam0->f_14));
func_241(&(uParam0->f_14.f_13));
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


void func_241(var uParam0){
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

int func_242(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_5==1;
}
return 0;
}


void func_243(int iParam0, var uParam1){
Global_2697092=uParam1;
Global_2697091=iParam0;
}

int func_244(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(Global_4535172[iVar0 /*85*/].f_66.f_2==0){
if(!func_247()){
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
func_245(Global_4535172[iVar0 /*85*/], iVar0);
}
return iVar0;
}
iVar0++;
}
return -1;
}


void func_245(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19){
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
iVar1=func_47(Var0.f_1);
if((Global_262145.f_24258 && !Global_262145.f_24259) && !Global_262145.f_24260){
return;
}
if(!iVar1==0){
func_246();
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 36, iVar1);
}}


void func_246(){
SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_247(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}


bool func_248(){
return func_30(PLAYER::PLAYER_ID());
}


void func_249(bool bParam0, var uParam1, var uParam2){
*uParam1=Global_1895156[bParam0 /*609*/].f_10.f_8[0];
*uParam2=Global_1895156[bParam0 /*609*/].f_10.f_8[1];
}

int func_250(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10){
return func_251(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_251(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10){
int iVar0;
int iVar1;
iVar0=func_261(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_39, 19)){
return iVar0;
}
if(iParam4==-592022605 || iParam4==-1915191729){
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
if(ENTITY::IS_ENTITY_A_PED(iParam1)){
iVar1=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
func_257(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
}}}else{
func_252(iParam1, iVar0, sParam8, iParam10);
}
return iVar0;
}


void func_252(int iParam0, int iParam1, char* sParam2, int iParam3){
struct<3> Var0;
Var0={
func_255(iParam0, 1) 
};
if(iParam0==func_254(PLAYER::PLAYER_PED_ID())){
func_253(1);
}
func_257(Var0, iParam1, 0, sParam2, iParam3);
}


void func_253(int iParam0){
Global_2672524.f_1682=iParam0;
}

int func_254(int iParam0){
return iParam0;
}


Vector3 func__255(int iParam0, bool bParam1){
struct<3> Var0;
struct<3> Var1;
float fVar2;
struct<3> Var3;
struct<3> Var4;
float fVar5;
if(CAM::IS_GAMEPLAY_CAM_RENDERING()){
Var1={
CAM::GET_GAMEPLAY_CAM_ROT(2) 
};
}
if(iParam0==func_256(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT())==4){
Var0={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) 
};
}else{
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 0) 
};
}
fVar2=0f;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
fVar2=ENTITY::GET_ENTITY_HEADING(iParam0);
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT())==4){
fVar2=Var1.f_2;
}}
MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var3, &Var4);
if(bParam1){
fVar5=(Var4.f_2 + 0.18f);
}else{
fVar5=(Var3.f_2 + 0.18f);
}
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar2, 0f, 0f, fVar5) 
};
return Var0;
}

int func_256(int iParam0){
return iParam0;
}


void func_257(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4){
int iVar0;
int iVar1;
if(iParam1 !=0){
iVar1=-1;
iVar0=0;
while (iVar0 < 20){
if(Global_2672524.f_1081[iVar0 /*30*/].f_6==0 || Global_2672524.f_1081[iVar0 /*30*/].f_6==7){
iVar1=iVar0;
iVar0=20;
}
iVar0++;
}
if(iVar1 !=-1){
Global_2672524.f_1081[iVar1 /*30*/]={
Param0 
};
Global_2672524.f_1081[iVar1 /*30*/].f_6=1;
Global_2672524.f_1081[iVar1 /*30*/].f_4=func_260(Global_2672524.f_1081[iVar1 /*30*/], &Global_1574479, &Global_1574480);
Global_2672524.f_1081[iVar1 /*30*/].f_7=NETWORK::GET_NETWORK_TIME();
Global_2672524.f_1081[iVar1 /*30*/].f_3=iParam1;
Global_2672524.f_1081[iVar1 /*30*/].f_8=iParam2;
Global_2672524.f_1081[iVar1 /*30*/].f_9=func_259();
Global_2672524.f_1081[iVar1 /*30*/].f_10=func_258();
StringCopy(&(Global_2672524.f_1081[iVar1 /*30*/].f_22), sParam3, 16);
Global_2672524.f_1081[iVar1 /*30*/].f_26=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam4);
}}}

int func_258(){
if(Global_2672524.f_1682){
Global_2672524.f_1682=0;
return 1;
}
Global_2672524.f_1682=0;
return 0;
}


var func__259(){
var uVar0;
uVar0=Global_2672524.f_1684;
Global_2672524.f_1684=1;
return uVar0;
}


float func_260(struct<3> Param0, var uParam1, var uParam2){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
fVar0=MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, 1);
if(fVar0 < 5f){
*uParam1=0.402f;
*uParam2=0.476f;
return 0f;
}
if(fVar0 > 20f){
*uParam1=0.212f;
*uParam2=0.286f;
return 1f;
}
fVar1=(1f - ((fVar0 - 5f) / (20f - 5f)));
fVar2=(fVar1 * (0.402f - 0.212f));
fVar3=(fVar1 * (0.476f - 0.286f));
*uParam1=(fVar2 + 0.212f);
*uParam2=(fVar3 + 0.286f);
return fVar1;
}


var func__261(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
var uVar0;
uVar0=func_262(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
return uVar0;
}

int func_262(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
float fVar0;
int iVar1;
int iVar2;
float fVar3;
iVar2=func_291();
if(func_290(uParam2)){}
if(func_289()){
if(iParam4 < 1){
iParam4=1;
}
iVar1=round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
iVar1=func_287(iVar1);
fVar3=(to_float(iVar1) * Global_262145.f_1);
iVar1=round(fVar3);
if(bParam10){
iVar1=func_286(&iVar1);
}
if(iParam1==0){
switch (iParam0){
case 2:
func_283(0, &iVar1);
break;
case 3:
func_283(1, &iVar1);
break;
case 1:
func_280(&iVar1);
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
func_279(1165, iVar1, -1);
if(iParam1==0){
func_271((func_278(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
if(iParam8==0){
}
if(iParam9==0){
}
STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_2 !=-1){
func_279(1166, iVar1, -1);
}
func_267(iVar1);
}}
if(bParam5){
}
if(bParam7){
if(iParam6==-1){
func_263((func_265(PLAYER::PLAYER_ID()) + iVar1));
}else{
func_263((func_265(PLAYER::PLAYER_ID()) + iParam6));
}}}
return iVar1;
}


void func_263(int iParam0){
if(func_289()){
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_5=iParam0;
func_264(joaat("mpply_globalxp"), iParam0);
}}


void func_264(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, 1);
}}

int func_265(bool bParam0){
if(bParam0 > -1){
if(func_10(bParam0, 0, 1)){
if(bParam0==PLAYER::PLAYER_ID()){
return func_266(joaat("mpply_globalxp"));
}else{
return Global_1853988[bParam0 /*867*/].f_205.f_5;
}}else{
return func_266(joaat("mpply_globalxp"));
}}
return 0;
}

int func_266(int iParam0){
var uVar0;
var uVar1;
uVar0=iParam0;
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


void func_267(int iParam0){
struct<13> Var0;
int iVar1;
Var0={
func_270(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0)){
iVar1=func_268(func_269(&Var0));
if(iVar1==0){
func_264(joaat("mpply_crew_local_xp_0"), (func_266(joaat("mpply_crew_local_xp_0")) + iParam0));
}elseif(iVar1==1){
func_264(joaat("mpply_crew_local_xp_1"), (func_266(joaat("mpply_crew_local_xp_1")) + iParam0));
}elseif(iVar1==2){
func_264(joaat("mpply_crew_local_xp_2"), (func_266(joaat("mpply_crew_local_xp_2")) + iParam0));
}elseif(iVar1==3){
func_264(joaat("mpply_crew_local_xp_3"), (func_266(joaat("mpply_crew_local_xp_3")) + iParam0));
}elseif(iVar1==4){
func_264(joaat("mpply_crew_local_xp_4"), (func_266(joaat("mpply_crew_local_xp_4")) + iParam0));
}}}}

int func_268(int iParam0){
if(iParam0==func_266(joaat("mpply_crew_0_id"))){
return 0;
}elseif(iParam0==func_266(joaat("mpply_crew_1_id"))){
return 1;
}elseif(iParam0==func_266(joaat("mpply_crew_2_id"))){
return 2;
}elseif(iParam0==func_266(joaat("mpply_crew_3_id"))){
return 3;
}elseif(iParam0==func_266(joaat("mpply_crew_4_id"))){
return 4;
}else{
return -1;
}
return -1;
}

int func_269(var uParam0){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0)){
return Global_2694518;
}}
return Global_2694518;
}
struct<13> func_270(bool bParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
return Var0;
}


void func_271(int iParam0, int iParam1, int iParam2){
if(func_289()){
if(iParam0 >=1787576850){
iParam0=1787576850;
}
if(Global_262145.f_10242==0 && iParam1 !=-1076930708){
if(iParam2==0){
if(iParam0 < func_132(640, -1)){
STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
return;
}elseif(iParam0==func_132(640, -1)){
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
if(func_16(PLAYER::PLAYER_ID())){
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_1=iParam0;
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_6=func_275(iParam0, 1);
}
func_209(640, iParam0, -1, 1);
func_209(641, func_275(iParam0, 1), -1, 1);
func_272(-1109644434, 7, 0);
}}


void func_272(int iParam0, int iParam1, int iParam2){
int iVar0;
if(func_274(iParam1, iParam2)){
iVar0=func_273();
Global_2694470[iVar0]=iParam1;
Global_2694481[iVar0]=iParam0;
}}

int func_273(){
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

int func_274(int iParam0, var uParam1){
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

int func_275(int iParam0, bool bParam1){
if(bParam1){}
return func_276(iParam0, 0);
}

int func_276(int iParam0, int iParam1){
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
if(func_277(iVar3)==iParam0){
iVar1=iVar3;
iVar2=iVar3;
}elseif(func_277(iVar3) < iParam0){
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

int func_277(int iParam0){
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

int func_278(bool bParam0){
if(Global_1574632.f_9==0){
if(bParam0 > -1){
if(bParam0==PLAYER::PLAYER_ID()){
return func_132(640, -1);
}elseif(func_16(bParam0)){
return Global_1853988[bParam0 /*867*/].f_205.f_1;
}}}else{
return func_132(640, -1);
}
return 0;
}


void func_279(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_132(iParam0, func_134(iParam2));
iVar0=(iVar0 + iParam1);
func_209(iParam0, iVar0, iParam2, 1);
}


void func_280(int iParam0){
int iVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
int iVar6;
int iVar7;
iVar1=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iVar4=PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4)){
bVar5=NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
if(PLAYER::GET_PLAYER_TEAM(bVar5) !=-1){
if(PLAYER::GET_PLAYER_TEAM(bVar5)==iVar1 || func_74(PLAYER::GET_PLAYER_TEAM(bVar5), iVar1, 0, -1)){
iVar2++;
if(bVar5 !=PLAYER::PLAYER_ID()){
if(func_282(PLAYER::PLAYER_ID(), bVar5)){
bVar3=true;
}}}}}
iVar0++;
}
if(bVar3){
iVar6=round((func_281(*iParam0, 100) * (10f * Global_262145.f_4228)));
}
if(iVar2 > 4){
iVar2=4;
}
if(iVar2 >=2){
iVar7=round((func_281(*iParam0, 100) * (20f * Global_262145.f_4221)));
}
*iParam0=(*iParam0 + iVar6);
*iParam0=(*iParam0 + iVar7);
}


float func_281(int iParam0, int iParam1){
float fVar0;
float fVar1;
float fVar2;
fVar0=to_float(iParam0);
fVar1=to_float(iParam1);
fVar2=(fVar0 / fVar1);
return fVar2;
}

int func_282(bool bParam0, bool bParam1){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Global_2764376={
func_270(bParam0) 
};
Global_2764389={
func_270(bParam1) 
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


void func_283(bool bParam0, int iParam1){
int iVar0;
int iVar1;
bool bVar2;
int iVar3;
bool bVar4;
int iVar5;
int iVar6;
if(bParam0){
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iVar3=iVar0;
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3)){
bVar4=NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
if(func_10(bVar4, 0, 1)){
if(bVar4 !=PLAYER::PLAYER_ID()){
iVar1++;
if(func_282(PLAYER::PLAYER_ID(), bVar4)){
bVar2=true;
}}}}
iVar0++;
}}else{
iVar0=0;
while (iVar0 < 32){
bVar4=iVar0;
if(func_10(bVar4, 1, 1)){
if(bVar4 !=PLAYER::PLAYER_ID()){
if(func_284(PLAYER::PLAYER_ID(), bVar4) <=20f){
iVar1++;
if(func_282(PLAYER::PLAYER_ID(), bVar4)){
bVar2=true;
}}}}
iVar0++;
}}
if(bVar2){
iVar5=round((func_281(*iParam1, 100) * (10f * Global_262145.f_4228)));
}
if(iVar1 > 4){
iVar1=4;
}
if(iVar1 >=1){
iVar6=round((func_281(*iParam1, 100) * (20f * Global_262145.f_4221)));
}
*iParam1=(*iParam1 + iVar5);
*iParam1=(*iParam1 + iVar6);
}


float func_284(bool bParam0, bool bParam1){
return vdist(func_285(bParam0), func_285(bParam1));
return 0f;
}


Vector3 func__285(bool bParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), 0);
}

int func_286(int iParam0){
int iVar0;
if(PAD::GET_LOCAL_PLAYER_AIM_STATE() !=3){
return *iParam0;
}
iVar0=round((func_281(*iParam0, 100) * 25f));
*iParam0=(*iParam0 + iVar0);
return *iParam0;
}

int func_287(int iParam0){
if(iParam0 < 0){
if(MISC::ABSI(iParam0) > func_278(PLAYER::PLAYER_ID())){
iParam0=-func_278(PLAYER::PLAYER_ID());
}}
if(func_288(8000, 0, 0) > 0){
if(func_288(8000, 0, 0) < (iParam0 + func_278(PLAYER::PLAYER_ID()))){
iParam0=(func_288(8000, 0, 0) - func_278(PLAYER::PLAYER_ID()));
}}
return iParam0;
}

int func_288(int iParam0, bool bParam1, int iParam2){
if(iParam2==0){}
if(bParam1){}
if(iParam0 >=8000){
iParam0=8000;
}
return func_277(iParam0);
}

int func_289(){
return 1;
}

int func_290(var uParam0){
if(MISC::IS_STRING_NULL(uParam0)){
return 1;
}elseif(MISC::ARE_STRINGS_EQUAL(uParam0, "") || MISC::ARE_STRINGS_EQUAL(uParam0, "0")){
return 1;
}
return 0;
}

int func_291(){
int iVar0;
if(func_296(PLAYER::PLAYER_ID()) || func_295(PLAYER::PLAYER_ID())){
if(Global_262145.f_10274 > 16000){
iVar0=16000;
}else{
iVar0=Global_262145.f_10274;
}}elseif(func_293() || func_292(PLAYER::PLAYER_ID())){
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

int func_292(bool bParam0){
return func_200(func_33(bParam0));
}


bool func_293(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return func_98();
}
return func_294(Global_4718592.f_117591);
}

int func_294(int iParam0){
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


bool func_295(bool bParam0){
return Global_2657704[bParam0 /*463*/].f_121==2;
}


bool func_296(bool bParam0){
return Global_2657704[bParam0 /*463*/].f_121==7;
}


void func_297(){
Global_2696289=1;
}


void func_298(int iParam0, var uParam1, var uParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
*uParam1=0;
*uParam2=0;
if(!func_302(7)){
return;
}
iVar0=func_301(iParam0);
iVar1=func_300(iParam0);
iVar2=MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2794162.f_5231.f_270, NETWORK::GET_NETWORK_TIME()));
if(func_299(iParam0) !=-1){
if(iVar2 > func_299(iParam0)){
iVar2=func_299(iParam0);
}}elseif(iVar2 > Global_262145.f_13043){
iVar2=Global_262145.f_13043;
}
iVar3=floor((to_float(iVar2) / (1000f * 60f)));
if(iVar3 < 1){
iVar3=1;
}
*uParam1=(iVar3 * iVar1);
*uParam2=(iVar3 * iVar0);
}

int func_299(int iParam0){
if(func_206(iParam0, 0) || func_207(iParam0)){
return Global_262145.f_19139;
}
if(func_210(iParam0)){
return Global_262145.f_19138;
}
switch (iParam0){
case 192:
return Global_262145.f_19135;
case 191:
return Global_262145.f_19137;
case 190:
return Global_262145.f_19136;
case 227:
return Global_262145.f_21700;
case 226:
return Global_262145.f_21686;
case 225:
return Global_262145.f_21708;
case 230:
return Global_262145.f_22987;
case 229:
return Global_262145.f_22889;
case 233:
return Global_262145.f_23468;
case 237:
return Global_262145.f_24639;
case 238:
return Global_262145.f_24757;
case 249:
return Global_262145.f_24773;
case 243:
return Global_262145.f_27278;
default:
}
return -1;
}

int func_300(int iParam0){
switch (iParam0){
case 148:
return Global_262145.f_13134;
case 152:
return Global_262145.f_13169;
case 151:
return 0;
case 142:
return Global_262145.f_13157;
case 157:
return Global_262145.f_13124;
case 159:
return Global_262145.f_13107;
case 164:
return Global_262145.f_13147;
case 160:
return Global_262145.f_13197;
case 162:
return Global_262145.f_13217;
case 163:
return Global_262145.f_13182;
case 154:
return Global_262145.f_13252;
case 155:
return Global_262145.f_13242;
case 153:
return Global_262145.f_13206;
case 170:
return Global_262145.f_15629;
case 171:
return Global_262145.f_15688;
case 172:
return Global_262145.f_15706;
case 173:
return Global_262145.f_15647;
case 166:
return Global_262145.f_15662;
case 167:
return Global_262145.f_15753;
case 169:
return Global_262145.f_15725;
case 168:
return Global_262145.f_15718;
case 179:
return Global_262145.f_19016;
case 180:
return Global_262145.f_18794;
case 182:
return Global_262145.f_18794;
case 183:
return Global_262145.f_18794;
case 185:
return Global_262145.f_18794;
case 186:
return Global_262145.f_18794;
case 189:
return Global_262145.f_19016;
case 190:
return Global_262145.f_18670;
case 191:
return Global_262145.f_18761;
case 192:
return Global_262145.f_18555;
case 193:
return Global_262145.f_19016;
case 194:
return Global_262145.f_19016;
case 195:
return Global_262145.f_18794;
case 197:
return Global_262145.f_18794;
case 198:
return Global_262145.f_18794;
case 199:
return Global_262145.f_19016;
case 200:
return Global_262145.f_19016;
case 201:
return Global_262145.f_19016;
case 205:
return Global_262145.f_19016;
case 207:
return Global_262145.f_18794;
case 208:
return Global_262145.f_18794;
case 209:
return Global_262145.f_18794;
case 210:
return Global_262145.f_19016;
case 211:
return Global_262145.f_19016;
case 214:
return Global_262145.f_19868;
case 215:
return Global_262145.f_19870;
case 216:
return Global_262145.f_19872;
case 217:
return Global_262145.f_19874;
case 218:
return Global_262145.f_19876;
case 219:
return Global_262145.f_19878;
case 220:
return Global_262145.f_19880;
case 221:
return Global_262145.f_19882;
case 225:
if(!func_248()){
return Global_262145.f_21710;
}
break;
case 226:
if(!func_248()){
return Global_262145.f_21688;
}
break;
case 227:
if(!func_248()){
return Global_262145.f_21702;
}
break;
case 229:
if(!func_248()){
return Global_262145.f_22891;
}
break;
case 230:
if(!func_248()){
return Global_262145.f_22989;
}
break;
case 233:
if(!func_248()){
return Global_262145.f_23467;
}
break;
case 241:
return 100;
case 242:
return 100;
case 244:
return 100;
case 248:
return 100;
case 239:
return 100;
case 240:
return 100;
case 250:
return 100;
case 237:
if(!func_248()){
return Global_262145.f_24641;
}
break;
case 238:
if(!func_248()){
return Global_262145.f_24759;
}
break;
case 249:
if(!func_248()){
return Global_262145.f_24775;
}
break;
case 243:
if(!func_248()){
return Global_262145.f_27281;
}
break;
case 158:
if(!func_248()){
return 100;
}
break;
}
return 0;
}

int func_301(int iParam0){
int iVar0;
switch (iParam0){
case 148:
iVar0=Global_262145.f_13133;
break;
case 152:
iVar0=Global_262145.f_13168;
break;
case 151:
iVar0=0;
break;
case 142:
iVar0=Global_262145.f_13156;
break;
case 157:
iVar0=Global_262145.f_13123;
break;
case 159:
iVar0=Global_262145.f_13106;
break;
case 164:
iVar0=Global_262145.f_13146;
break;
case 160:
iVar0=Global_262145.f_13196;
break;
case 162:
iVar0=Global_262145.f_13216;
break;
case 163:
iVar0=Global_262145.f_13181;
break;
case 154:
iVar0=Global_262145.f_13251;
break;
case 155:
iVar0=Global_262145.f_13241;
break;
case 153:
iVar0=Global_262145.f_13205;
break;
case 170:
iVar0=Global_262145.f_15628;
break;
case 171:
iVar0=Global_262145.f_15687;
break;
case 172:
iVar0=Global_262145.f_15705;
break;
case 173:
iVar0=Global_262145.f_15646;
break;
case 166:
iVar0=Global_262145.f_15661;
break;
case 179:
iVar0=Global_262145.f_19015;
break;
case 180:
iVar0=Global_262145.f_18793;
break;
case 182:
iVar0=Global_262145.f_18793;
break;
case 183:
iVar0=Global_262145.f_18793;
break;
case 185:
iVar0=Global_262145.f_18793;
break;
case 186:
iVar0=Global_262145.f_18793;
break;
case 189:
iVar0=Global_262145.f_19015;
break;
case 193:
iVar0=Global_262145.f_19015;
break;
case 194:
iVar0=Global_262145.f_19015;
break;
case 195:
iVar0=Global_262145.f_18793;
break;
case 197:
iVar0=Global_262145.f_18793;
break;
case 198:
iVar0=Global_262145.f_18793;
break;
case 199:
iVar0=Global_262145.f_19015;
break;
case 200:
iVar0=Global_262145.f_19015;
break;
case 201:
iVar0=Global_262145.f_19015;
break;
case 205:
iVar0=Global_262145.f_19015;
break;
case 207:
iVar0=Global_262145.f_18793;
break;
case 208:
iVar0=Global_262145.f_18793;
break;
case 209:
iVar0=Global_262145.f_18793;
break;
case 210:
iVar0=Global_262145.f_19015;
break;
case 211:
iVar0=Global_262145.f_19015;
break;
case 190:
if(func_227(0)){
iVar0=Global_262145.f_18669;
}
break;
case 191:
if(func_227(0)){
iVar0=Global_262145.f_18760;
}
break;
case 192:
if(func_227(0)){
iVar0=Global_262145.f_18554;
}
break;
case 214:
iVar0=Global_262145.f_19867;
break;
case 215:
iVar0=Global_262145.f_19869;
break;
case 216:
iVar0=Global_262145.f_19871;
break;
case 217:
iVar0=Global_262145.f_19873;
break;
case 218:
iVar0=Global_262145.f_19875;
break;
case 219:
iVar0=Global_262145.f_19877;
break;
case 220:
iVar0=Global_262145.f_19879;
break;
case 221:
iVar0=Global_262145.f_19881;
break;
case 225:
if(func_227(0)){
iVar0=Global_262145.f_21709;
}
break;
case 226:
if(func_227(0)){
iVar0=Global_262145.f_21687;
}
break;
case 227:
if(func_227(0)){
iVar0=Global_262145.f_21701;
}
break;
case 229:
if(func_227(0)){
iVar0=Global_262145.f_22890;
}
break;
case 230:
if(func_227(0)){
iVar0=Global_262145.f_22988;
}
break;
case 233:
if(func_227(0)){
iVar0=Global_262145.f_23469;
}
break;
case 241:
iVar0=500;
break;
case 242:
iVar0=500;
break;
case 244:
iVar0=500;
break;
case 248:
iVar0=500;
break;
case 239:
iVar0=500;
break;
case 240:
iVar0=500;
break;
case 250:
iVar0=500;
break;
case 237:
if(func_227(0)){
iVar0=Global_262145.f_24640;
}
break;
case 238:
if(func_227(0)){
iVar0=Global_262145.f_24758;
}
break;
case 249:
if(func_227(0)){
iVar0=Global_262145.f_24774;
}
break;
case 243:
iVar0=Global_262145.f_27277;
break;
case 158:
if(func_227(0)){
iVar0=500;
}
break;
}
if(func_227(0) && Global_262145.f_24649 > 0f){
iVar0=ceil((IntToFloat(iVar0) * Global_262145.f_24649));
}
return iVar0;
}


bool func_302(int iParam0){
return MISC::IS_BIT_SET(Global_2794162.f_5231.f_48, iParam0);
}


void func_303(int iParam0, int iParam1){
int iVar0;
if(*iParam0 > 0){
if(!func_248()){
if(func_109(0)){
if(!func_227(0)){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_12())){
if(func_312()==100){
iVar0=*iParam0;
*iParam0=0;
}
else{
iVar0=((*iParam0 / 100) * func_312());
*iParam0=(*iParam0 - iVar0);
}
func_310(&iVar0, 0);
if(iParam1==1){
func_307("GB_BCUT_TICK1", func_12(), iVar0, 0, 0, 1);
}
func_107(20);
func_304(func_12(), iVar0, 1);
}}}}}}


void func_304(bool bParam0, int iParam1, int iParam2){
struct<8> Var0;
if(func_10(bParam0, 0, 1)){
Var0.f_0=-1141119736;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam1;
Var0.f_4=iParam2;
Var0.f_5=func_306(bParam0);
func_305(&(Var0.f_6), &(Var0.f_7));
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 8, func_47(bParam0));
}}


void func_305(var uParam0, var uParam1){
*uParam0=Global_1924276.f_9;
*uParam1=Global_1924276.f_10;
}


var func__306(bool bParam0){
return Global_1895156[bParam0 /*609*/].f_511;
}

int func_307(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5){
int iVar0;
struct<8> Var1;
iVar0=-1;
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bParam1) || iParam5){
if(!bParam4){
StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
}else{
StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&Var1)){
}
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_67(bParam1, -2, 1, 0, 0));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_308(&Var1));
if(!iParam3==0){
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
}
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
func_222(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
}
return iVar0;
}


var func__308(char* sParam0){
char cVar0[64];
StringCopy(&cVar0, "<C>", 64);
StringConCat(&cVar0, sParam0, 64);
StringConCat(&cVar0, "</C>~s~", 64);
return func_309(&cVar0);
}


var func__309(char[4] cParam0){
return cParam0;
}


void func_310(int iParam0, bool bParam1){
int iVar0;
int iVar1;
if(bParam1){
iVar1=func_311(1);
}else{
iVar1=func_311(0);
}
iVar0=((*iParam0 / 100) * iVar1);
*iParam0=(*iParam0 - iVar0);
}

int func_311(bool bParam0){
if(bParam0){
return round((0.05f * 100f));
}
return Global_262145.f_13038;
}

int func_312(){
return Global_262145.f_13037;
}


void func_313(int iParam0, var uParam1, int iParam2, var uParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
var uVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bool bVar11;
float fVar12;
float fVar13;
float fVar14;
float fVar15;
float fVar16;
bool bVar17;
bool bVar18;
bool bVar19;
int iVar20;
bVar18=func_227(1);
bVar19=false;
if(iParam0==237 && !uParam1->f_22){
if(func_248()){
bVar17=PLAYER::PLAYER_ID();
}else{
bVar17=func_12();
}
bVar11=bVar17;
if(bVar11 !=-1){
iVar0=Global_1853988[bVar11 /*867*/].f_841.f_1;
if(uParam1->f_10==uParam1->f_11){
iVar1=iVar0;
bVar19=true;
}else{
fVar12=to_float(uParam1->f_10);
fVar13=to_float(uParam1->f_11);
fVar14=((fVar12 / fVar13) * 100f);
fVar15=((IntToFloat(iVar0) / 100f) * fVar14);
iVar1=ceil(fVar15);
}
*uParam3=iVar1;
if(bVar19){
iVar2=Global_1853988[bVar11 /*867*/].f_841.f_2;
}else{
iVar2=func_320(Global_1853988[bVar11 /*867*/].f_841.f_4, Global_1853988[bVar11 /*867*/].f_841.f_1, *uParam3, Global_1853988[bVar11 /*867*/].f_841.f_2, Global_1853988[bVar11 /*867*/].f_841.f_3);
}
if(uParam1->f_17){
iVar20=(iVar2 - ceil((IntToFloat(iVar2) * 0.9f)));
if(iVar20 > 100000){
iVar20=100000;
}
iVar2=(iVar2 - iVar20);
}
*iParam2=(*iParam2 + iVar2);
iVar10=func_319(*iParam2);
if(iVar10 > 0){
if(bVar17==PLAYER::PLAYER_ID()){
func_221("TICK_TCUT", iVar10, 0);
}
*iParam2=(*iParam2 - iVar10);
}
Global_1948761.f_49=*uParam3;
if(bVar17==PLAYER::PLAYER_ID()){
if(iVar2 > 0){
func_316(iVar2);
}
if(*uParam3 > 0){
func_315(*uParam3);
}
if(!NETWORK::NETWORK_SESSION_IS_PRIVATE()){
iVar6=func_314(&uVar5);
iVar7=Global_262145.f_24677;
if(iVar6 > iVar7){
iVar6=iVar7;
}
iVar9=ceil((IntToFloat(iVar6) * Global_262145.f_24676));
iVar8=((*iParam2 / 100) * iVar9);
*iParam2=(*iParam2 + iVar8);
if(*iParam2 > 0){
if(iVar6 > 0){
func_107(140);
}}}
if(Global_262145.f_33279){
if(!func_178(32356, -1)){
*iParam2=(*iParam2 * Global_262145.f_33288);
func_119(32356, 1, -1);
}}
Global_2794162.f_5231.f_387=*iParam2;
}else{
fVar16=Global_262145.f_24643;
if(!bVar18){
fVar16=Global_262145.f_24644;
}
iVar3=ceil((IntToFloat(*iParam2) * fVar16));
*iParam2=iVar3;
iVar4=Global_262145.f_24645;
if(!bVar18){
iVar4=Global_262145.f_24646;
}
if(*iParam2 > iVar4){
*iParam2=iVar4;
}}}}elseif(uParam1->f_22){}}

int func_314(var uParam0){
int iVar0;
int iVar1;
bool bVar2;
iVar1=0;
iVar0=0;
while (iVar0 < 32){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0))){
bVar2=PLAYER::INT_TO_PLAYERINDEX(iVar0);
if(!func_20(bVar2, 0) && !func_49(bVar2, PLAYER::PLAYER_ID(), 1)){
iVar1++;
}elseif(func_20(bVar2, 0)){
*uParam0++;
}}
iVar0++;
}
return iVar1;
}


void func_315(int iParam0){
func_279(7239, iParam0, -1);
}


void func_316(int iParam0){
func_317(7234, iParam0, -1);
}


void func_317(int iParam0, int iParam1, int iParam2){
func_318(iParam0, (func_132(iParam0, iParam2) + iParam1), iParam2);
}


void func_318(int iParam0, int iParam1, int iParam2){
func_209(iParam0, iParam1, iParam2, 1);
}

int func_319(int iParam0){
float fVar0;
float fVar1;
fVar0=to_float(iParam0);
fVar1=(fVar0 * Global_262145.f_24678);
if(fVar1 > 100000f){
fVar1=100000f;
}
return round(fVar1);
}

int func_320(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4){
int iVar0;
float fVar1;
float fVar2;
if(iParam2==iParam1){
return uParam3;
}
iVar0=uParam3;
if((iParam0==1 || iParam0==2) || iParam0==3){
iVar0=(iVar0 - iParam4);
}
fVar1=(to_float(iParam2) / to_float(iParam1));
fVar2=to_float(iVar0);
return floor((fVar2 * fVar1));
}


void func_321(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
var uVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
float fVar10;
float fVar11;
float fVar12;
float fVar13;
float fVar14;
bool bVar15;
bool bVar16;
bool bVar17;
*uParam4=0;
bVar16=func_227(1);
bVar17=false;
if(iParam0==229){}elseif(iParam0==230){
if(func_248()){
bVar15=PLAYER::PLAYER_ID();
}else{
bVar15=func_12();
}
if(bVar15 !=-1){
iVar0=(uParam1->f_15 + uParam1->f_8);
if(uParam1->f_10==uParam1->f_11){
iVar1=iVar0;
bVar17=true;
}else{
fVar10=to_float(uParam1->f_10);
fVar11=to_float(uParam1->f_11);
fVar12=((fVar10 / fVar11) * 100f);
fVar13=((IntToFloat(iVar0) / 100f) * fVar12);
iVar1=ceil(fVar13);
}
*uParam3=iVar1;
iVar2=func_229(uParam1->f_16, *uParam3);
*iParam2=(*iParam2 + iVar2);
if(bVar17){
iVar9=func_228(uParam1->f_16, *uParam3);
if(iVar9 > 0){
*iParam2=(*iParam2 + iVar9);
}}
if(func_323(*iParam2) > 0){
if(bVar15==PLAYER::PLAYER_ID()){
func_221("SMTICK_RONCUT", func_323(*iParam2), 0);
}
*iParam2=(*iParam2 - func_323(*iParam2));
}
if(bVar15==PLAYER::PLAYER_ID()){
func_322(iVar2, iVar9);
if(!NETWORK::NETWORK_SESSION_IS_PRIVATE()){
iVar6=func_314(&uVar5);
iVar7=Global_262145.f_23006;
if(iVar6 > iVar7){
iVar6=iVar7;
}
iVar8=ceil((IntToFloat(iVar6) * Global_262145.f_23005));
*uParam4=((*iParam2 / 100) * iVar8);
*iParam2=(*iParam2 + *uParam4);
if(*iParam2 > 0){
if(iVar6 > 0){
func_107(44);
}}}
Global_2794162.f_5231.f_387=*iParam2;
}else{
fVar14=Global_262145.f_22937;
if(!bVar16){
fVar14=Global_262145.f_22938;
}
iVar3=ceil((IntToFloat(*iParam2) * fVar14));
*iParam2=iVar3;
iVar4=Global_262145.f_22939;
if(!bVar16){
iVar4=Global_262145.f_22940;
}
if(*iParam2 > iVar4){
*iParam2=iVar4;
}}}}}


void func_322(int iParam0, int iParam1){
if(iParam0 > 0){
func_317(6119, iParam0, -1);
}
if(iParam1 > 0){
func_317(6120, iParam1, -1);
}}

int func_323(int iParam0){
float fVar0;
float fVar1;
fVar0=to_float(iParam0);
fVar1=(fVar0 * Global_262145.f_22973);
if(fVar1 > to_float(Global_262145.f_22974)){
fVar1=to_float(Global_262145.f_22974);
}
return round(fVar1);
}


void func_324(int iParam0, var uParam1, int iParam2, var uParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
var uVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
float fVar10;
float fVar11;
float fVar12;
float fVar13;
float fVar14;
bool bVar15;
int iVar16;
bool bVar17;
bVar17=func_227(1);
if(iParam0==225){}elseif(iParam0==226){
if(func_248()){
bVar15=PLAYER::PLAYER_ID();
}else{
bVar15=func_12();
}
if(bVar15 !=-1){
iVar16=func_232(bVar15);
iVar0=(func_349(bVar15, iVar16) + uParam1->f_8);
if(uParam1->f_10==uParam1->f_11){
iVar1=iVar0;
}else{
fVar10=to_float(uParam1->f_10);
fVar11=to_float(uParam1->f_11);
fVar12=((fVar10 / fVar11) * 100f);
fVar13=((IntToFloat(iVar0) / 100f) * fVar12);
iVar1=ceil(fVar13);
}
*uParam3=iVar1;
iVar2=func_339(bVar15, iVar16, iVar1, 0);
if(uParam1->f_14==0){
iVar2=ceil((IntToFloat(iVar2) * Global_262145.f_21690));
}else{
iVar2=ceil((IntToFloat(iVar2) * Global_262145.f_21689));
}
*iParam2=(*iParam2 + iVar2);
if(bVar15==PLAYER::PLAYER_ID()){
func_335(iVar16, iVar2);
if(func_331(iVar16) >=Global_262145.f_21235 || iVar2 >=Global_262145.f_21235){
func_325(5);
}
if(!NETWORK::NETWORK_SESSION_IS_PRIVATE()){
iVar6=func_314(&uVar5);
iVar7=round(Global_262145.f_21692);
if(iVar6 > iVar7){
iVar6=iVar7;
}
iVar8=ceil((IntToFloat(iVar6) * Global_262145.f_21691));
iVar9=((*iParam2 / 100) * iVar8);
*iParam2=(*iParam2 + iVar9);
if(*iParam2 > 0){
if(iVar6 > 0){
func_107(108);
}
else{
func_107(110);
}}}
if(Global_262145.f_33280){
if(!func_178(32357, -1)){
*iParam2=(*iParam2 * Global_262145.f_33289);
func_119(32357, 1, -1);
}}
Global_2794162.f_5231.f_387=*iParam2;
}else{
fVar14=Global_262145.f_21693;
if(!bVar17){
fVar14=Global_262145.f_21694;
}
iVar3=ceil((IntToFloat(*iParam2) * fVar14));
*iParam2=iVar3;
iVar4=Global_262145.f_21695;
if(!bVar17){
iVar4=Global_262145.f_21696;
}
if(*iParam2 > iVar4){
*iParam2=iVar4;
}}}}elseif(iParam0==227){}}


void func_325(int iParam0){
switch (iParam0){
case 0:
if(Global_262145.f_21223){
if(func_327(Global_262145.f_21224)){
func_326("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
}}
break;
case 1:
if(Global_262145.f_21225){
if(func_327(Global_262145.f_21226)){
func_326("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
}}
break;
case 2:
if(Global_262145.f_21227){
if(func_327(Global_262145.f_21228)){
func_326("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
}}
break;
case 3:
if(Global_262145.f_21229){
if(func_327(Global_262145.f_21230)){
func_326("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
}}
break;
case 4:
if(Global_262145.f_21231){
if(func_327(Global_262145.f_21232)){
func_326("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
}}
break;
case 5:
if(Global_262145.f_21233){
if(func_327(Global_262145.f_21234)){
func_221("CLOTHAWDSTRAP3", Global_262145.f_21235, 0);
}}
break;
case 6:
if(Global_262145.f_21236){
if(func_327(Global_262145.f_21237)){
func_221("CLOTHAWDSTRAP5", Global_262145.f_21372, 0);
}}
break;
case 7:
if(Global_262145.f_21239){
if(func_327(Global_262145.f_21240)){
func_326("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
}}
break;
case 8:
if(Global_262145.f_21241){
if(func_327(Global_262145.f_21242)){
func_326("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
}}
break;
case 9:
if(Global_262145.f_21243){
if(func_327(Global_262145.f_21244)){
func_326("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
}}
break;
case 10:
if(Global_262145.f_21245){
if(func_327(Global_262145.f_21246)){
func_326("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
}}
break;
case 11:
if(Global_262145.f_21247){
if(func_327(Global_262145.f_21248)){
func_326("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
}}
break;
case 12:
if(Global_262145.f_21249){
if(func_327(Global_262145.f_21250)){
func_326("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
}}
break;
case 13:
if(Global_262145.f_21251){
if(func_327(Global_262145.f_21252)){
func_326("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
}}
break;
case 14:
if(Global_262145.f_21253){
if(func_327(Global_262145.f_21254)){
func_326("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
}}
break;
}}

int func_326(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
int iVar1;
int iVar2;
iVar0=-1;
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
if(!iParam2==0){
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
}
if(!iParam3==0){
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
}
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
if(!bParam4){
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
}else{
Global_2764376={
func_270(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764306, 35, &Global_2764376)){
iVar1=0;
if(MISC::ARE_STRINGS_EQUAL(&(Global_2764306.f_22), "Leader") && Global_2764306.f_30==0){
iVar1=1;
}
if(Global_2764306.f_21 > 0){
iVar2=0;
}else{
iVar2=1;
}
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(iVar2, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2764306, 35), &(Global_2764306.f_17), Global_2764306.f_30, iVar1, 0, Global_2764306, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), Global_1576220, Global_1576221, Global_1576222);
}else{
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
}}
func_222(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
return iVar0;
}

int func_327(int iParam0){
switch (iParam0){
case joaat("dlc_mp_gr_m_jbib_19_0"):
case joaat("dlc_mp_gr_f_jbib_25_0"):
case -1191485992:
case joaat("CLO_GRF_U_25_0"):
if(!func_178(15417, -1)){
func_119(15417, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_jbib_19_1"):
case joaat("dlc_mp_gr_f_jbib_25_1"):
case -1407302654:
case joaat("CLO_GRF_U_25_1"):
if(!func_178(15418, -1)){
func_119(15418, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_jbib_20_0"):
case joaat("dlc_mp_gr_f_jbib_26_0"):
case joaat("CLO_GRM_U_20_0"):
case -1850642937:
if(!func_178(15425, -1)){
func_119(15425, 1, -1);
return 1;
}
break;
}
switch (iParam0){
case joaat("dlc_mp_gr_m_decl_5_0"):
case joaat("dlc_mp_gr_f_decl_5_0"):
case -1307315235:
case joaat("CLO_GRF_DECL_19"):
if(!func_178(15405, -1)){
func_119(15405, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_decl_5_1"):
case joaat("dlc_mp_gr_f_decl_5_1"):
case joaat("CLO_GRM_DECL_20"):
case 1374601256:
if(!func_178(15393, -1)){
func_119(15393, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_decl_5_2"):
case joaat("dlc_mp_gr_f_decl_5_2"):
case joaat("CLO_GRM_DECL_21"):
case -660288110:
if(!func_178(15409, -1)){
func_119(15409, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_decl_5_3"):
case joaat("dlc_mp_gr_f_decl_5_3"):
case -1005186539:
case joaat("CLO_GRF_DECL_22"):
if(!func_178(15396, -1)){
func_119(15396, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_decl_5_4"):
case joaat("dlc_mp_gr_f_decl_5_4"):
case joaat("CLO_GRM_DECL_23"):
case -1132522169:
if(!func_178(15412, -1)){
func_119(15412, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_decl_5_5"):
case joaat("dlc_mp_gr_f_decl_5_5"):
case 1110085176:
case joaat("CLO_GRF_DECL_24"):
if(!func_330(209, -1)){
func_328(209, 1, -1, 1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_decl_5_6"):
case joaat("dlc_mp_gr_f_decl_5_6"):
case joaat("CLO_GRM_DECL_25"):
case -182614393:
if(!func_178(15403, -1)){
func_119(15403, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_decl_5_7"):
case joaat("dlc_mp_gr_f_decl_5_7"):
case -1496983695:
case joaat("CLO_GRF_DECL_26"):
if(!func_330(209, -1)){
func_328(209, 1, -1, 1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_decl_5_8"):
case joaat("dlc_mp_gr_f_decl_5_8"):
case joaat("CLO_GRM_DECL_27"):
case -646852824:
if(!func_178(15389, -1)){
func_119(15389, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_decl_5_9"):
case joaat("dlc_mp_gr_f_decl_5_9"):
case 420690954:
case joaat("CLO_GRF_DECL_28"):
if(!func_330(209, -1)){
func_328(209, 1, -1, 1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_decl_5_10"):
case joaat("dlc_mp_gr_f_decl_5_10"):
case joaat("CLO_GRM_DECL_29"):
case 1717168382:
if(!func_178(15398, -1)){
func_119(15398, 1, -1);
return 1;
}
break;
}
switch (iParam0){
case joaat("dlc_mp_gr_m_phead_6_0"):
case joaat("dlc_mp_gr_f_phead_6_0"):
case joaat("dlc_mp_gr_m_phead_7_0"):
case joaat("dlc_mp_gr_f_phead_7_0"):
case -1991379993:
case joaat("CLO_GRF_PH_6_0"):
if(!func_178(15400, -1)){
func_119(15400, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_phead_6_1"):
case joaat("dlc_mp_gr_f_phead_6_1"):
case joaat("dlc_mp_gr_m_phead_7_1"):
case joaat("dlc_mp_gr_f_phead_7_1"):
case 2065127290:
case joaat("CLO_GRF_PH_6_1"):
if(!func_330(209, -1)){
func_328(209, 1, -1, 1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_phead_6_2"):
case joaat("dlc_mp_gr_f_phead_6_2"):
case joaat("dlc_mp_gr_m_phead_7_2"):
case joaat("dlc_mp_gr_f_phead_7_2"):
case -56403312:
case joaat("CLO_GRF_PH_6_2"):
if(!func_178(15408, -1)){
func_119(15408, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_phead_6_3"):
case joaat("dlc_mp_gr_f_phead_6_3"):
case joaat("dlc_mp_gr_m_phead_7_3"):
case joaat("dlc_mp_gr_f_phead_7_3"):
case -292700571:
case joaat("CLO_GRF_PH_6_3"):
if(!func_330(209, -1)){
func_328(209, 1, -1, 1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_phead_6_4"):
case joaat("dlc_mp_gr_f_phead_6_4"):
case joaat("dlc_mp_gr_m_phead_7_4"):
case joaat("dlc_mp_gr_f_phead_7_4"):
case -648899601:
case joaat("CLO_GRF_PH_6_4"):
if(!func_178(15411, -1)){
func_119(15411, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_phead_6_5"):
case joaat("dlc_mp_gr_f_phead_6_5"):
case joaat("dlc_mp_gr_m_phead_7_5"):
case joaat("dlc_mp_gr_f_phead_7_5"):
case -889194678:
case joaat("CLO_GRF_PH_6_5"):
if(!func_178(15397, -1)){
func_119(15397, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_phead_6_6"):
case joaat("dlc_mp_gr_f_phead_6_6"):
case joaat("dlc_mp_gr_m_phead_7_6"):
case joaat("dlc_mp_gr_f_phead_7_6"):
case 867092646:
case joaat("CLO_GRF_PH_6_6"):
if(!func_178(15413, -1)){
func_119(15413, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_phead_6_7"):
case joaat("dlc_mp_gr_f_phead_6_7"):
case joaat("dlc_mp_gr_m_phead_7_7"):
case joaat("dlc_mp_gr_f_phead_7_7"):
case 627387411:
case joaat("CLO_GRF_PH_6_7"):
if(!func_178(15391, -1)){
func_119(15391, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_phead_6_8"):
case joaat("dlc_mp_gr_f_phead_6_8"):
case joaat("dlc_mp_gr_m_phead_7_8"):
case joaat("dlc_mp_gr_f_phead_7_8"):
case joaat("CLO_GRM_PH_6_8"):
case 1682427144:
if(!func_178(15388, -1)){
func_119(15388, 1, -1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_phead_6_9"):
case joaat("dlc_mp_gr_f_phead_6_9"):
case joaat("dlc_mp_gr_m_phead_7_9"):
case joaat("dlc_mp_gr_f_phead_7_9"):
case 35480964:
case joaat("CLO_GRF_PH_6_9"):
if(!func_330(209, -1)){
func_328(209, 1, -1, 1);
return 1;
}
break;
case joaat("dlc_mp_gr_m_phead_6_10"):
case joaat("dlc_mp_gr_f_phead_6_10"):
case joaat("dlc_mp_gr_m_phead_7_10"):
case joaat("dlc_mp_gr_f_phead_7_10"):
case joaat("CLO_GRM_PH_6_10"):
case 1377465778:
if(!func_178(15401, -1)){
func_119(15401, 1, -1);
return 1;
}
break;
}
switch (iParam0){
case joaat("MP_Gunrunning_Award_000_M"):
case joaat("MP_Gunrunning_Award_000_F"):
case -1604737223:
case joaat("CLO_GRF_DECL_0"):
if(!func_178(15394, -1)){
func_119(15394, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_001_M"):
case joaat("MP_Gunrunning_Award_001_F"):
case -1367129204:
case joaat("CLO_GRF_DECL_1"):
if(!func_330(209, -1)){
func_328(209, 1, -1, 1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_002_M"):
case joaat("MP_Gunrunning_Award_002_F"):
case joaat("CLO_GRM_DECL_2"):
case -1438775324:
if(!func_178(15406, -1)){
func_119(15406, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_003_M"):
case joaat("MP_Gunrunning_Award_003_F"):
case -1686659723:
case joaat("CLO_GRF_DECL_3"):
if(!func_178(15395, -1)){
func_119(15395, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_004_M"):
case joaat("MP_Gunrunning_Award_004_F"):
case 1992217604:
case joaat("CLO_GRF_DECL_4"):
if(!func_330(209, -1)){
func_328(209, 1, -1, 1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_005_M"):
case joaat("MP_Gunrunning_Award_005_F"):
case -1934557208:
case joaat("CLO_GRF_DECL_5"):
if(!func_178(15410, -1)){
func_119(15410, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_006_M"):
case joaat("MP_Gunrunning_Award_006_F"):
case -1034032319:
case joaat("CLO_GRF_DECL_6"):
if(!func_178(15407, -1)){
func_119(15407, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_007_M"):
case joaat("MP_Gunrunning_Award_007_F"):
case 1747334867:
case joaat("CLO_GRF_DECL_7"):
if(!func_330(209, -1)){
func_328(209, 1, -1, 1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_008_M"):
case joaat("MP_Gunrunning_Award_008_F"):
case 236389050:
case joaat("CLO_GRF_DECL_8"):
if(!func_330(209, -1)){
func_328(209, 1, -1, 1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_009_M"):
case joaat("MP_Gunrunning_Award_009_F"):
case joaat("CLO_GRM_DECL_9"):
case 908992470:
if(!func_178(15414, -1)){
func_119(15414, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_010_M"):
case joaat("MP_Gunrunning_Award_010_F"):
case joaat("CLO_GRM_DECL_10"):
case -1021993708:
if(!func_178(15415, -1)){
func_119(15415, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_011_M"):
case joaat("MP_Gunrunning_Award_011_F"):
case 479676642:
case joaat("CLO_GRF_DECL_11"):
if(!func_178(15399, -1)){
func_119(15399, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_012_M"):
case joaat("MP_Gunrunning_Award_012_F"):
case 242920617:
case joaat("CLO_GRF_DECL_12"):
if(!func_178(15404, -1)){
func_119(15404, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_013_M"):
case joaat("MP_Gunrunning_Award_013_F"):
case -1219723702:
case joaat("CLO_GRF_DECL_13"):
if(!func_330(209, -1)){
func_328(209, 1, -1, 1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_014_M"):
case joaat("MP_Gunrunning_Award_014_F"):
case joaat("CLO_GRM_DECL_14"):
case 2087194554:
if(!func_178(15392, -1)){
func_119(15392, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_015_M"):
case joaat("MP_Gunrunning_Award_015_F"):
case joaat("CLO_GRM_DECL_15"):
case 981732339:
if(!func_178(15390, -1)){
func_119(15390, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_016_M"):
case joaat("MP_Gunrunning_Award_016_F"):
case joaat("CLO_GRM_DECL_16"):
case 1271443068:
if(!func_178(15402, -1)){
func_119(15402, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_017_M"):
case joaat("MP_Gunrunning_Award_017_F"):
case joaat("CLO_GRM_DECL_17"):
case -1785118184:
if(!func_178(15416, -1)){
func_119(15416, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_018_M"):
case joaat("MP_Gunrunning_Award_018_F"):
case 2029126042:
case joaat("CLO_GRF_DECL_18"):
if(!func_330(209, -1)){
func_328(209, 1, -1, 1);
return 1;
}
break;
}
switch (iParam0){
case joaat("MP_Gunrunning_Award_019_M"):
case joaat("MP_Gunrunning_Award_025_F"):
case -14316613:
case joaat("CLO_GRF_DECL_30"):
if(!func_178(15426, -1)){
func_119(15426, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_020_M"):
case joaat("MP_Gunrunning_Award_020_F"):
case 1281631799:
case joaat("CLO_GRF_DECL_31"):
if(!func_178(15422, -1)){
func_119(15422, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_020_M_ALT"):
case joaat("MP_Gunrunning_Award_020_F_ALT"):
case 447234752:
case joaat("CLO_GRF_DECL_32"):
if(!func_178(15423, -1)){
func_119(15423, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_021_M"):
case joaat("MP_Gunrunning_Award_021_F"):
case 278933172:
case joaat("CLO_GRF_DECL_33"):
if(!func_178(15421, -1)){
func_119(15421, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_022_M"):
case joaat("MP_Gunrunning_Award_026_F"):
case -562607521:
case joaat("CLO_GRF_DECL_34"):
if(!func_178(15427, -1)){
func_119(15427, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_023_M"):
case joaat("MP_Gunrunning_Award_023_F"):
case 755492739:
case joaat("CLO_GRF_DECL_35"):
if(!func_178(15419, -1)){
func_119(15419, 1, -1);
return 1;
}
break;
case joaat("MP_Gunrunning_Award_024_M"):
case joaat("MP_Gunrunning_Award_024_F"):
case -85982412:
case joaat("CLO_GRF_DECL_36"):
if(!func_178(15420, -1)){
func_119(15420, 1, -1);
return 1;
}
break;
}
return 0;
}


void func_328(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_329(iParam0, iParam2);
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
}}


var func__329(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(2, uParam0, func_134(uParam1));
}

int func_330(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=func_329(iParam0, iParam1);
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_331(int iParam0){
int iVar0;
iVar0=func_333(iParam0);
return func_132(func_332(iVar0), -1);
}

int func_332(int iParam0){
switch (iParam0){
case 0:
return 3954;
case 1:
return 3955;
case 2:
return 3956;
case 3:
return 3957;
case 4:
return 3958;
case 5:
return 5459;
case 6:
return 11813;
default:
}
return 3954;
}

int func_333(int iParam0){
int iVar0;
if(func_334(iParam0)){
iVar0=0;
while (iVar0 <=6){
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_193[iVar0 /*13*/]==iParam0){
return iVar0;
}
iVar0++;
}}
return -1;
}

int func_334(int iParam0){
if(iParam0==33 || iParam0==0){
return 0;
}
return 1;
}


void func_335(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
iVar0=func_333(iParam0);
iVar1=func_332(iVar0);
iVar2=(func_132(iVar1, -1) + iParam1);
func_318(iVar1, iVar2, -1);
if(iVar0==5 || iVar0==6){
return;
}
if(func_338(9357, -1) < 3){
iVar3=0;
iVar0=0;
while (iVar0 <=6){
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_193[iVar0 /*13*/] !=0){
iVar1=func_332(iVar0);
iVar3=(iVar3 + func_132(iVar1, -1));
}
iVar0++;
}
iVar4=1;
while (iVar4 <=3){
if(iVar3 >=func_337(iVar4)){
iVar5=iVar4;
}
iVar4++;
}
func_336(9357, iVar5, -1);
}}


void func_336(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_22();
}
if(iParam1 < 0){
iParam1=255;
}
STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}

int func_337(int iParam0){
switch (iParam0){
case 1:
return 100000;
break;
case 2:
return 300000;
break;
case 3:
return 500000;
break;
}
return 0;
}

int func_338(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_22();
}
return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

int func_339(bool bParam0, int iParam1, int iParam2, bool bParam3){
int iVar0;
int iVar1;
iVar1=func_233(iParam1);
if(func_334(iParam1)){
switch (iVar1){
case 1:
iVar0=Global_262145.f_17604;
if(func_346(bParam0, iParam1, 0)){
iVar0=(iVar0 + Global_262145.f_17610);
}
if(func_346(bParam0, iParam1, 1)){
iVar0=(iVar0 + Global_262145.f_17616);
}
iVar0=(iVar0 * iParam2);
break;
case 3:
iVar0=Global_262145.f_17603;
if(func_346(bParam0, iParam1, 0)){
iVar0=(iVar0 + Global_262145.f_17609);
}
if(func_346(bParam0, iParam1, 1)){
iVar0=(iVar0 + Global_262145.f_17615);
}
iVar0=(iVar0 * iParam2);
break;
case 4:
iVar0=Global_262145.f_17602;
if(func_346(bParam0, iParam1, 0)){
iVar0=(iVar0 + Global_262145.f_17608);
}
if(func_346(bParam0, iParam1, 1)){
iVar0=(iVar0 + Global_262145.f_17614);
}
iVar0=(iVar0 * iParam2);
break;
case 0:
iVar0=Global_262145.f_17600;
if(func_346(bParam0, iParam1, 0)){
iVar0=(iVar0 + Global_262145.f_17606);
}
if(func_346(bParam0, iParam1, 1)){
iVar0=(iVar0 + Global_262145.f_17612);
}
iVar0=(iVar0 * iParam2);
break;
case 6:
iVar0=Global_262145.f_17605;
if(func_345(bParam0)){
iVar0=(iVar0 + Global_262145.f_17611);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(func_341(bParam0))){
iVar0=floor((to_float(iVar0) * 1.05f));
}
iVar0=(iVar0 * iParam2);
break;
case 2:
iVar0=Global_262145.f_17601;
if(func_346(bParam0, iParam1, 0)){
iVar0=(iVar0 + Global_262145.f_17607);
}
if(func_346(bParam0, iParam1, 1)){
iVar0=(iVar0 + Global_262145.f_17613);
}
iVar0=(iVar0 * iParam2);
break;
case 5:
iVar0=Global_262145.f_21717;
if(func_346(bParam0, iParam1, 0)){
iVar0=(iVar0 + Global_262145.f_21719);
}
if(func_346(bParam0, iParam1, 1)){
iVar0=(iVar0 + Global_262145.f_21718);
}
iVar0=(iVar0 * iParam2);
break;
}}
if(bParam3){
iVar0=func_340(iVar1, iVar0);
}
return iVar0;
}

int func_340(int iParam0, int iParam1){
switch (iParam0){
case 1:
if(Global_262145.f_33273){
if(!func_178(32351, -1)){
iParam1=(iParam1 * Global_262145.f_33282);
}}
break;
case 3:
if(Global_262145.f_33274){
if(!func_178(32352, -1)){
iParam1=(iParam1 * Global_262145.f_33283);
}}
break;
case 4:
if(Global_262145.f_33275){
if(!func_178(32353, -1)){
iParam1=(iParam1 * Global_262145.f_33284);
}}
break;
case 0:
if(Global_262145.f_33276){
if(!func_178(32354, -1)){
iParam1=(iParam1 * Global_262145.f_33285);
}}
break;
case 6:
if(Global_262145.f_33277){
if(!func_178(36667, -1)){
iParam1=(iParam1 * Global_262145.f_33286);
}}
break;
case 2:
if(Global_262145.f_33278){
if(!func_178(32355, -1)){
iParam1=(iParam1 * Global_262145.f_33287);
}}
break;
case 5:
if(Global_262145.f_33280){
if(!func_178(32357, -1)){
iParam1=(iParam1 * Global_262145.f_33289);
}}
break;
}
return iParam1;
}


char* func_341(bool bParam0){
char* sVar0;
int iVar1;
if(bParam0==PLAYER::PLAYER_ID()){
sVar0=func_344(&(Global_1914706[bParam0 /*299*/].f_267));
return sVar0;
}
if(Global_1895156[bParam0 /*609*/].f_10.f_121 !=Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_121){
return sVar0;
}
if(func_37(bParam0, 28) || (func_37(PLAYER::PLAYER_ID(), 28) && !func_343(bParam0))){
return "";
}
iVar1=func_28(bParam0);
if(iVar1 !=func_11()){
if(iVar1 !=PLAYER::PLAYER_ID()){
if(!func_342() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)){
return "";
}}}
if(iVar1 !=func_11()){
sVar0=func_344(&(Global_1914706[iVar1 /*299*/].f_267));
if(MISC::IS_STRING_NULL_OR_EMPTY(sVar0)){
return "";
}else{
return sVar0;
}}
return "";
}


bool func_342(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_343(bool bParam0){
struct<13> Var0;
Var0={
func_270(bParam0) 
};
if(func_342()){
if(bParam0==PLAYER::PLAYER_ID()){
return 1;
}elseif(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
if(NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0)){
return 1;
}}}
return 0;
}


var func__344(var uParam0){
return uParam0;
}

int func_345(int iParam0){
if(iParam0==func_11()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_479, 16);
}

int func_346(bool bParam0, int iParam1, int iParam2){
int iVar0;
if(func_348(bParam0, iParam1)){
iVar0=func_347(bParam0, iParam1);
return MISC::IS_BIT_SET(Global_1853988[bParam0 /*867*/].f_267.f_193[iVar0 /*13*/].f_5, iParam2);
}
return 0;
}

int func_347(int iParam0, int iParam1){
int iVar0;
if(func_334(iParam1) && iParam0 !=func_11()){
iVar0=0;
while (iVar0 <=6){
if(Global_1853988[iParam0 /*867*/].f_267.f_193[iVar0 /*13*/]==iParam1){
return iVar0;
}
iVar0++;
}}
return -1;
}

int func_348(int iParam0, int iParam1){
int iVar0;
if(func_334(iParam1) && iParam0 !=func_11()){
iVar0=0;
while (iVar0 <=6){
if(Global_1853988[iParam0 /*867*/].f_267.f_193[iVar0 /*13*/]==iParam1){
return 1;
}
iVar0++;
}}
return 0;
}

int func_349(bool bParam0, int iParam1){
int iVar0;
if(bParam0==func_11()){
return 0;
}
if(func_334(iParam1)){
iVar0=0;
while (iVar0 <=6){
if(Global_1853988[bParam0 /*867*/].f_267.f_193[iVar0 /*13*/]==iParam1){
return Global_1853988[bParam0 /*867*/].f_267.f_193[iVar0 /*13*/].f_1;
}
iVar0++;
}}
return 0;
}


void func_350(int iParam0, var uParam1, int iParam2, var uParam3){
struct<2> Var0;
float fVar1;
float fVar2;
float fVar3;
int iVar4;
float fVar5;
int iVar6;
float fVar7;
float fVar8;
var uVar9;
int iVar10;
int iVar11;
int iVar12;
int iVar13;
struct<2> Var14;
float fVar15;
float fVar16;
float fVar17;
int iVar18;
float fVar19;
int iVar20;
float fVar21;
int iVar22;
int iVar23;
if(iParam0==192){}elseif(iParam0==190){
if(uParam1->f_10 > 0){
if(func_211()){
Var0={
func_235() 
};
if(uParam1->f_10==uParam1->f_11){
*uParam3=(uParam1->f_15 + uParam1->f_8);
}else{
fVar1=to_float(uParam1->f_10);
fVar2=to_float(uParam1->f_11);
fVar3=((fVar1 / fVar2) * 100f);
iVar4=(uParam1->f_15 + uParam1->f_8);
fVar5=((IntToFloat(iVar4) / 100f) * fVar3);
*uParam3=ceil(fVar5);
}
iVar6=func_339(PLAYER::PLAYER_ID(), Var0.f_0, *uParam3, 0);
if(Var0.f_1==1){
fVar7=(to_float(iVar6) * Global_262145.f_19247);
iVar6=round(fVar7);
}else{
fVar8=(to_float(iVar6) * Global_262145.f_19246);
iVar6=round(fVar8);
}
*iParam2=(*iParam2 + iVar6);
if(!NETWORK::NETWORK_SESSION_IS_PRIVATE()){
iVar10=func_314(&uVar9);
iVar11=round(Global_262145.f_19237);
if(iVar10 > iVar11){
iVar10=iVar11;
}
iVar12=ceil((IntToFloat(iVar10) * Global_262145.f_19236));
iVar13=((*iParam2 / 100) * iVar12);
*iParam2=(*iParam2 + iVar13);
if(iVar10 > 0){
func_107(86);
}}
if(uParam1->f_6){
*iParam2=(*iParam2 + *uParam1);
}
if(uParam1->f_6){
if(uParam1->f_12==11){
if(*uParam1 > 0){
*iParam2=(*iParam2 + *uParam1);
}}elseif(uParam1->f_12==9){
if(*uParam1 > 0){
*iParam2=(*iParam2 + *uParam1);
}}}
switch (func_352(Var0.f_0)){
case 1:
if(Global_262145.f_33273){
if(!func_178(32351, -1)){
*iParam2=(*iParam2 * Global_262145.f_33282);
func_119(32351, 1, -1);
}
}
break;
case 3:
if(Global_262145.f_33274){
if(!func_178(32352, -1)){
*iParam2=(*iParam2 * Global_262145.f_33283);
func_119(32352, 1, -1);
}
}
break;
case 4:
if(Global_262145.f_33275){
if(!func_178(32353, -1)){
*iParam2=(*iParam2 * Global_262145.f_33284);
func_119(32353, 1, -1);
}
}
break;
case 0:
if(Global_262145.f_33276){
if(!func_178(32354, -1)){
*iParam2=(*iParam2 * Global_262145.f_33285);
func_119(32354, 1, -1);
}
}
break;
case 2:
if(Global_262145.f_33278){
if(!func_178(32355, -1)){
*iParam2=(*iParam2 * Global_262145.f_33287);
func_119(32355, 1, -1);
}
}
break;
}
Global_2794162.f_5231.f_387=*iParam2;
}elseif(func_227(0)){
Var14={
func_351(func_12()) 
};
if(uParam1->f_10==uParam1->f_11){
*uParam3=(uParam1->f_15 + uParam1->f_8);
}else{
fVar15=to_float(uParam1->f_10);
fVar16=to_float(uParam1->f_11);
fVar17=((fVar15 / fVar16) * 100f);
iVar18=(uParam1->f_15 + uParam1->f_8);
fVar19=((IntToFloat(iVar18) / 100f) * fVar17);
*uParam3=ceil(fVar19);
}
iVar20=func_339(func_12(), Var14.f_0, *uParam3, 0);
if(Var14.f_1==1){
iVar20=ceil((IntToFloat(iVar20) * Global_262145.f_19247));
}elseif(Var14.f_1==0){
iVar20=ceil((IntToFloat(iVar20) * Global_262145.f_19246));
}
*iParam2=(*iParam2 + iVar20);
fVar21=Global_262145.f_19286;
iVar22=ceil((IntToFloat(*iParam2) * fVar21));
*iParam2=iVar22;
iVar23=Global_262145.f_19287;
if(*iParam2 > iVar23){
*iParam2=iVar23;
}
if(uParam1->f_6){
if(uParam1->f_12==11){
if(*uParam1 > 0){
*iParam2=(*iParam2 + *uParam1);
}}}}}}}


struct<2> func_351(bool bParam0){
return Global_1895156[bParam0 /*609*/].f_10.f_194;
}

int func_352(int iParam0){
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


void func_353(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4){
bool bVar0;
int iVar1;
int iVar2;
var uVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
float fVar8;
int iVar9;
int iVar10;
bVar0=func_30(PLAYER::PLAYER_ID());
if(iParam0==167){
if(func_30(PLAYER::PLAYER_ID())){
if(bParam1){
func_368();
}
func_367();
}}elseif(iParam0==168){
if(bParam1){
if(uParam2->f_5){
*iParam3=(*iParam3 + func_359(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_183));
}else{
*uParam4=uParam2->f_7;
if(uParam2->f_8 > 0){
*uParam4=(*uParam4 + uParam2->f_8);
}
iVar1=func_358(*uParam4);
iVar2=(iVar1 * *uParam4);
*iParam3=(*iParam3 + iVar2);
if(bVar0){
if(!NETWORK::NETWORK_SESSION_IS_PRIVATE()){
iVar4=func_314(&uVar3);
iVar5=Global_262145.f_16781;
if(iVar4 > iVar5){
iVar4=iVar5;
}
iVar6=ceil((IntToFloat(iVar4) * Global_262145.f_15984));
iVar7=((*iParam3 / 100) * iVar6);
*iParam3=(*iParam3 + iVar7);
if(iVar4 > 0 && uParam2->f_9 !=4){
func_107(44);
}}
if(uParam2->f_6){
*iParam3=(*iParam3 + *uParam2);
}}}
if(bVar0){
if(Global_262145.f_33272){
if(!func_178(32350, -1)){
*iParam3=(*iParam3 * Global_262145.f_33281);
func_119(32350, 1, -1);
}}
func_356(*iParam3);
func_355();
Global_2794162.f_5231.f_387=*iParam3;
}else{
fVar8=Global_262145.f_24647;
iVar9=ceil((IntToFloat(*iParam3) * fVar8));
*iParam3=iVar9;
iVar10=Global_262145.f_24648;
if(*iParam3 > iVar10){
*iParam3=iVar10;
}}}
if(bVar0){
func_354();
}}}


void func_354(){
int iVar0;
iVar0=func_132(3670, func_22());
iVar0++;
func_209(3670, iVar0, -1, 1);
}


void func_355(){
int iVar0;
iVar0=func_132(3669, func_22());
iVar0++;
func_209(3669, iVar0, -1, 1);
}


void func_356(int iParam0){
int iVar0;
int iVar1;
int iVar2;
iVar0=func_132(3671, func_22());
iVar0=(iVar0 + iParam0);
func_318(3671, iVar0, -1);
if(func_338(7666, -1) < 24){
iVar1=1;
while (iVar1 <=24){
if(iVar0 >=func_357(iVar1)){
iVar2=iVar1;
}
iVar1++;
}
func_336(7666, iVar2, -1);
}}

int func_357(int iParam0){
switch (iParam0){
case 1:
return Global_262145.f_16914;
break;
case 2:
return Global_262145.f_16915;
break;
case 3:
return Global_262145.f_16916;
break;
case 4:
return Global_262145.f_16917;
break;
case 5:
return Global_262145.f_16918;
break;
case 6:
return Global_262145.f_16919;
break;
case 7:
return Global_262145.f_16920;
break;
case 8:
return Global_262145.f_16921;
break;
case 9:
return Global_262145.f_16922;
break;
case 10:
return Global_262145.f_16923;
break;
case 11:
return Global_262145.f_16924;
break;
case 12:
return Global_262145.f_16925;
break;
case 13:
return Global_262145.f_16926;
break;
case 14:
return Global_262145.f_16927;
break;
case 15:
return Global_262145.f_16928;
break;
case 16:
return Global_262145.f_16929;
break;
case 17:
return Global_262145.f_16930;
break;
case 18:
return Global_262145.f_16931;
break;
case 19:
return Global_262145.f_16932;
break;
case 20:
return Global_262145.f_16933;
break;
case 21:
return Global_262145.f_16934;
break;
case 22:
return Global_262145.f_16935;
break;
case 23:
return Global_262145.f_16936;
break;
case 24:
return Global_262145.f_16937;
break;
}
return 0;
}


var func__358(int iParam0){
if(iParam0 >=Global_262145.f_15962){
return Global_262145.f_15983;
}elseif(iParam0 >=Global_262145.f_15961){
return Global_262145.f_15982;
}elseif(iParam0 >=Global_262145.f_15960){
return Global_262145.f_15981;
}elseif(iParam0 >=Global_262145.f_15959){
return Global_262145.f_15980;
}elseif(iParam0 >=Global_262145.f_15958){
return Global_262145.f_15979;
}elseif(iParam0 >=Global_262145.f_15957){
return Global_262145.f_15978;
}elseif(iParam0 >=Global_262145.f_15956){
return Global_262145.f_15977;
}elseif(iParam0 >=Global_262145.f_15955){
return Global_262145.f_15976;
}elseif(iParam0 >=Global_262145.f_15954){
return Global_262145.f_15975;
}elseif(iParam0 >=Global_262145.f_15953){
return Global_262145.f_15974;
}elseif(iParam0 >=Global_262145.f_15952){
return Global_262145.f_15973;
}elseif(iParam0 >=Global_262145.f_15951){
return Global_262145.f_15972;
}elseif(iParam0 >=Global_262145.f_15950){
return Global_262145.f_15971;
}elseif(iParam0 >=Global_262145.f_15949){
return Global_262145.f_15970;
}elseif(iParam0 >=Global_262145.f_15948){
return Global_262145.f_15969;
}elseif(iParam0 >=Global_262145.f_15947){
return Global_262145.f_15968;
}elseif(iParam0 >=Global_262145.f_15946){
return Global_262145.f_15967;
}elseif(iParam0 >=Global_262145.f_15945){
return Global_262145.f_15966;
}elseif(iParam0 >=Global_262145.f_15944){
return Global_262145.f_15965;
}elseif(iParam0 >=Global_262145.f_15943){
return Global_262145.f_15964;
}
return Global_262145.f_15963;
}

int func_359(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(func_366(iParam0)){
iVar2=1;
while (iVar2 <=6){
iVar3=iVar2;
if(func_365(iParam0, iVar3)){
iVar0=(iVar0 + func_364(iVar3));
iVar1++;
}
iVar2++;
}
if(iVar1 < func_360(iParam0)){
iVar2=0;
while (iVar2 <=(func_360(iParam0) - iVar1)){
iVar0=(iVar0 + func_364(MISC::GET_RANDOM_INT_IN_RANGE(1, 6)));
iVar2++;
}}}
return iVar0;
}

int func_360(int iParam0){
int iVar0;
if(func_363(iParam0)){
iVar0=func_361(func_362(iParam0));
return func_132(iVar0, -1);
}
return 0;
}

int func_361(int iParam0){
if(iParam0==0){
return 3649;
}elseif(iParam0==1){
return 3650;
}elseif(iParam0==2){
return 3651;
}elseif(iParam0==3){
return 3652;
}elseif(iParam0==4){
return 3653;
}
return 3649;
}

int func_362(int iParam0){
int iVar0;
if(func_363(iParam0)){
iVar0=0;
while (iVar0 <=4){
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_116[iVar0 /*3*/]==iParam0){
return iVar0;
}
iVar0++;
}}
return -1;
}

int func_363(int iParam0){
if(iParam0 < 1 || iParam0 > 22){
return 0;
}
return 1;
}

int func_364(int iParam0){
if(iParam0==1){
return Global_262145.f_16168;
}elseif(iParam0==2){
return Global_262145.f_16166;
}elseif(iParam0==3){
return Global_262145.f_16170;
}elseif(iParam0==4){
return Global_262145.f_16164;
}elseif(iParam0==5){
return Global_262145.f_16162;
}elseif(iParam0==6){
return Global_262145.f_16172;
}
return 0;
}

int func_365(int iParam0, int iParam1){
int iVar0;
if(func_363(iParam0)){
iVar0=0;
while (iVar0 < 6){
if(Global_1950550[iVar0]==iParam1 && Global_1950557[iVar0]==iParam0){
return 1;
}
iVar0++;
}}
return 0;
}

int func_366(int iParam0){
int iVar0;
if(func_363(iParam0)){
iVar0=0;
while (iVar0 <=4){
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_116[iVar0 /*3*/]==iParam0){
return 1;
}
iVar0++;
}}
return 0;
}


void func_367(){
int iVar0;
iVar0=func_132(3668, func_22());
iVar0++;
func_209(3668, iVar0, -1, 1);
}


void func_368(){
int iVar0;
int iVar1;
iVar0=func_132(3666, func_22());
iVar1=func_132(3667, func_22());
iVar0++;
iVar1++;
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_138=iVar1;
func_209(3666, iVar0, -1, 1);
func_209(3667, iVar1, -1, 1);
}


void func_369(){
if(func_248()){
Global_2684820.f_3076.f_134=0;
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_428=Global_2684820.f_3076.f_134;
}}


void func_370(){
if(func_248()){
if(Global_2684820.f_3076.f_134 > 0){
Global_2684820.f_3076.f_134=(Global_2684820.f_3076.f_134 - 1);
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_428=Global_2684820.f_3076.f_134;
}}}


void func_371(){
if(func_248()){
if(Global_2684820.f_3076.f_134 < 10){
Global_2684820.f_3076.f_134++;
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_428=Global_2684820.f_3076.f_134;
}}}

int func_372(bool bParam0){
return Global_1895156[bParam0 /*609*/].f_10.f_28;
}

int func_373(int iParam0){
switch (iParam0){
case 167:
case 168:
case 178:
case 188:
return 1;
case 225:
case 226:
case 229:
case 230:
case 233:
case 237:
case 158:
case 256:
case 258:
if(func_109(1) && !func_227(1)){
if(func_226(func_12())){
return 1;
}}
break;
}
if(func_374(iParam0)==0){
if(func_109(1) && !func_227(1)){
if(func_226(func_12())){
return 1;
}}}
return 0;
}

int func_374(int iParam0){
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

int func_375(int iParam0, bool bParam1){
if(bParam1){
return Global_262145.f_18931;
}
switch (iParam0){
case 142:
return round((IntToFloat(Global_262145.f_13154) * Global_262145.f_13159));
case 157:
return 0;
case 159:
return round((IntToFloat(Global_262145.f_13104) * Global_262145.f_13109));
case 151:
return 0;
case 148:
return round((IntToFloat(Global_262145.f_13131) * Global_262145.f_13135));
case 164:
return round((IntToFloat(Global_262145.f_13144) * Global_262145.f_13148));
case 152:
return round((IntToFloat(Global_262145.f_13166) * Global_262145.f_13171));
case 153:
return round((IntToFloat(Global_262145.f_13328) * Global_262145.f_13329));
case 154:
return round((IntToFloat(Global_262145.f_13334) * Global_262145.f_13335));
case 155:
return round((IntToFloat(Global_262145.f_13332) * Global_262145.f_13333));
case 160:
return round((IntToFloat(Global_262145.f_13326) * Global_262145.f_13327));
case 162:
return round((IntToFloat(Global_262145.f_13330) * Global_262145.f_13331));
case 163:
return round((IntToFloat(Global_262145.f_13324) * Global_262145.f_13325));
case 170:
return 0;
case 171:
return Global_262145.f_15685;
case 172:
return Global_262145.f_15701;
case 173:
return Global_262145.f_15644;
case 166:
return 0;
case 179:
return Global_262145.f_18939;
case 180:
return Global_262145.f_18814;
case 182:
return 0;
case 183:
return Global_262145.f_18822;
case 185:
return Global_262145.f_18831;
case 186:
return 0;
case 189:
return Global_262145.f_19027;
case 190:
return 0;
case 191:
return 0;
case 192:
return 0;
case 193:
return Global_262145.f_19044;
case 194:
return 0;
case 195:
return 0;
case 197:
return Global_262145.f_18891;
case 198:
return 0;
case 199:
return Global_262145.f_19075;
case 200:
return 0;
case 201:
return Global_262145.f_18953;
case 205:
return Global_262145.f_19062;
case 207:
return 0;
case 208:
return Global_262145.f_18920;
case 209:
return 0;
case 210:
return Global_262145.f_19057;
case 211:
return Global_262145.f_19021;
case 214:
return Global_262145.f_19617;
case 215:
return Global_262145.f_19627;
case 216:
return Global_262145.f_19637;
case 217:
return Global_262145.f_19646;
case 218:
return Global_262145.f_19655;
case 219:
return Global_262145.f_19671;
case 241:
return Global_262145.f_24794;
case 242:
return Global_262145.f_24790;
case 248:
return Global_262145.f_24793;
case 244:
return Global_262145.f_24791;
case 239:
return Global_262145.f_24795;
case 240:
return Global_262145.f_24796;
case 243:
return Global_262145.f_27276;
default:
}
return 0;
}

int func_376(int iParam0, bool bParam1, bool bParam2){
int iVar0;
if(bParam2){
return Global_262145.f_18932;
}
switch (iParam0){
case 142:
return round((IntToFloat(Global_262145.f_13155) * Global_262145.f_13160));
case 157:
return 0;
case 159:
return round((IntToFloat(Global_262145.f_13105) * Global_262145.f_13110));
case 151:
return 0;
case 148:
return round((IntToFloat(Global_262145.f_13132) * Global_262145.f_13136));
case 164:
return round((IntToFloat(Global_262145.f_13145) * Global_262145.f_13149));
case 152:
return round((IntToFloat(Global_262145.f_13167) * Global_262145.f_13172));
case 153:
return round((IntToFloat(Global_262145.f_13204) * Global_262145.f_13207));
case 154:
return round((IntToFloat(Global_262145.f_13250) * Global_262145.f_13253));
case 155:
return round((IntToFloat(Global_262145.f_13240) * Global_262145.f_13243));
case 160:
return round((IntToFloat(Global_262145.f_13195) * Global_262145.f_13198));
case 162:
return round((IntToFloat(Global_262145.f_13215) * Global_262145.f_13220));
case 163:
return round((IntToFloat(Global_262145.f_13180) * Global_262145.f_13183));
case 170:
return Global_262145.f_15627;
case 171:
return Global_262145.f_15686;
case 172:
return Global_262145.f_15702;
case 173:
return Global_262145.f_15645;
case 166:
return 0;
case 167:
return Global_262145.f_17737;
case 168:
iVar0=Global_262145.f_17736;
if((func_248() && Global_262145.f_33272) && !func_178(32350, -1)){
iVar0=(iVar0 * Global_262145.f_33290);
}
return iVar0;
case 179:
return Global_262145.f_18940;
case 180:
return Global_262145.f_18815;
case 182:
return 0;
case 183:
return Global_262145.f_18823;
case 185:
return Global_262145.f_18832;
case 186:
return 0;
case 189:
return Global_262145.f_19028;
case 190:
return 0;
case 191:
return 0;
case 192:
return 0;
case 193:
return Global_262145.f_19045;
case 194:
return 0;
case 195:
return 0;
case 197:
return Global_262145.f_18892;
case 198:
return 0;
case 199:
return Global_262145.f_19076;
case 200:
return 0;
case 201:
return Global_262145.f_18954;
case 205:
return Global_262145.f_19063;
case 207:
return 0;
case 208:
return Global_262145.f_18921;
case 209:
return 0;
case 210:
return Global_262145.f_19058;
case 211:
return Global_262145.f_19022;
case 214:
return Global_262145.f_19618;
case 215:
return Global_262145.f_19628;
case 216:
return Global_262145.f_19638;
case 217:
return Global_262145.f_19647;
case 218:
return Global_262145.f_19656;
case 219:
return Global_262145.f_19672;
case 178:
if(func_248()){
return Global_262145.f_19495;
}elseif(bParam1){
return Global_262145.f_19496;
}
break;
case 188:
if(func_248()){
return Global_262145.f_19579;
}elseif(bParam1){
return Global_262145.f_19580;
}
break;
case 225:
if(func_248() && !func_211()){
if(func_226(PLAYER::PLAYER_ID())){
return Global_262145.f_21705;
}else{
return Global_262145.f_21706;
}}elseif(func_211()){
return Global_262145.f_21707;
}
break;
case 226:
if(func_248() && !func_211()){
if(func_226(PLAYER::PLAYER_ID())){
iVar0=Global_262145.f_21683;
}else{
iVar0=Global_262145.f_21684;
}}elseif(func_211()){
iVar0=Global_262145.f_21685;
}
if((func_248() && Global_262145.f_33280) && !func_178(32357, -1)){
iVar0=(iVar0 * Global_262145.f_33297);
}
return iVar0;
break;
case 227:
if(func_248() && !func_211()){
if(func_226(PLAYER::PLAYER_ID())){
return Global_262145.f_21697;
}else{
return Global_262145.f_21698;
}}elseif(func_211()){
return Global_262145.f_21699;
}
break;
case 229:
if(func_248() && !func_211()){
if(func_226(PLAYER::PLAYER_ID())){
return Global_262145.f_22886;
}else{
return Global_262145.f_22887;
}}elseif(func_211()){
return Global_262145.f_22888;
}
break;
case 230:
if(func_248() && !func_211()){
if(func_226(PLAYER::PLAYER_ID())){
return Global_262145.f_22984;
}else{
return Global_262145.f_22985;
}}elseif(func_211()){
return Global_262145.f_22986;
}
break;
case 233:
if(func_248() && !func_211()){
if(func_226(PLAYER::PLAYER_ID())){
return Global_262145.f_23465;
}else{
return Global_262145.f_23466;
}}elseif(func_211()){
return Global_262145.f_23464;
}
break;
case 241:
return Global_262145.f_24801;
case 242:
return Global_262145.f_24797;
case 244:
return Global_262145.f_24798;
case 248:
return Global_262145.f_24800;
case 239:
return Global_262145.f_24802;
case 240:
return Global_262145.f_24803;
case 237:
if(func_248() && !func_211()){
if(func_226(PLAYER::PLAYER_ID())){
iVar0=Global_262145.f_24636;
}else{
iVar0=Global_262145.f_24637;
}}elseif(func_211()){
iVar0=Global_262145.f_24638;
}
if((func_248() && Global_262145.f_33279) && !func_178(32356, -1)){
iVar0=(iVar0 * Global_262145.f_33296);
}
return iVar0;
break;
case 238:
if(func_248() && !func_211()){
if(func_226(PLAYER::PLAYER_ID())){
return Global_262145.f_24754;
}else{
return Global_262145.f_24755;
}}elseif(func_211()){
return Global_262145.f_24756;
}
break;
case 249:
if(func_248() && !func_211()){
if(func_226(PLAYER::PLAYER_ID())){
return Global_262145.f_24770;
}else{
return Global_262145.f_24771;
}}elseif(func_211()){
return Global_262145.f_24772;
}
break;
case 243:
if(func_248() && !func_211()){
if(func_226(PLAYER::PLAYER_ID())){
return Global_262145.f_27279;
}else{
return Global_262145.f_27280;
}}elseif(func_211()){
return Global_262145.f_27279;
}
break;
case 158:
if(func_248() && !func_211()){
if(func_226(PLAYER::PLAYER_ID())){
return 1500;
}else{
return 1000;
}}elseif(func_211()){
return 1500;
}
break;
}
return 0;
}


void func_377(int iParam0, var uParam1, var uParam2){
int iVar0;
if(iParam0==157){
*uParam1=1f;
*uParam2=1f;
return;
}
if(func_378(iParam0)){
if(!func_248()){
*uParam1=1f;
*uParam2=Global_262145.f_13048;
}else{
*uParam1=1f;
*uParam2=1f;
}
return;
}
if(func_29(PLAYER::PLAYER_ID(), 1)){
if(func_106(iParam0)){
*uParam1=(Global_262145.f_18791 / 100f);
*uParam2=(Global_262145.f_18791 / 100f);
}elseif(iParam0==242){
*uParam1=Global_262145.f_24804;
*uParam2=Global_262145.f_24804;
}elseif(iParam0==244){
*uParam1=Global_262145.f_24805;
*uParam2=Global_262145.f_24805;
}elseif(iParam0==248){
*uParam1=Global_262145.f_24807;
*uParam2=Global_262145.f_24807;
}elseif(iParam0==241){
*uParam1=Global_262145.f_24808;
*uParam2=Global_262145.f_24808;
}elseif(iParam0==239){
*uParam1=Global_262145.f_24809;
*uParam2=Global_262145.f_24809;
}elseif(iParam0==240){
*uParam1=Global_262145.f_24810;
*uParam2=Global_262145.f_24810;
}else{
*uParam1=Global_262145.f_13045;
*uParam2=Global_262145.f_13044;
}}elseif(func_106(iParam0)){
*uParam1=(Global_262145.f_18792 / 100f);
*uParam2=(Global_262145.f_18792 / 100f);
}elseif(iParam0==242){
*uParam1=Global_262145.f_24811;
*uParam2=Global_262145.f_24811;
}elseif(iParam0==244){
*uParam1=Global_262145.f_24812;
*uParam2=Global_262145.f_24812;
}elseif(iParam0==248){
*uParam1=Global_262145.f_24814;
*uParam2=Global_262145.f_24814;
}elseif(iParam0==241){
*uParam1=Global_262145.f_24815;
*uParam2=Global_262145.f_24815;
}elseif(iParam0==239){
*uParam1=Global_262145.f_24816;
*uParam2=Global_262145.f_24816;
}elseif(iParam0==240){
*uParam1=Global_262145.f_24817;
*uParam2=Global_262145.f_24817;
}else{
*uParam1=Global_262145.f_13047;
*uParam2=Global_262145.f_13046;
}
iVar0=func_64();
if(iVar0 !=func_11()){
if(func_49(PLAYER::PLAYER_ID(), iVar0, 1)){
*uParam1=1f;
*uParam2=1f;
}}}

int func_378(int iParam0){
switch (iParam0){
case 160:
case 162:
case 153:
case 154:
case 155:
case 163:
case 171:
case 172:
return 1;
default:
}
return 0;
}


void func_379(int iParam0, bool bParam1){
int iVar0;
if(!bParam1){
return;
}
iVar0=0;
switch (iParam0){
case 157:
iVar0=36892;
break;
case 148:
iVar0=36893;
break;
case 164:
iVar0=36894;
break;
case 159:
iVar0=36895;
break;
case 152:
iVar0=36896;
break;
case 142:
iVar0=36897;
break;
case 166:
iVar0=36898;
break;
case 170:
iVar0=36899;
break;
case 173:
iVar0=36900;
break;
case 214:
iVar0=36901;
break;
case 215:
iVar0=36902;
break;
case 216:
iVar0=36903;
break;
case 217:
iVar0=36904;
break;
case 218:
iVar0=36905;
break;
case 219:
iVar0=36906;
break;
case 220:
iVar0=36907;
break;
case 221:
iVar0=36908;
break;
case 160:
iVar0=36909;
break;
case 155:
iVar0=36910;
break;
case 162:
iVar0=36911;
break;
case 153:
iVar0=36912;
break;
case 163:
iVar0=36913;
break;
case 154:
iVar0=36945;
break;
case 171:
iVar0=36914;
break;
case 172:
iVar0=36915;
break;
}
if(iVar0==0){
return;
}
func_380(iVar0, 1);
}


void func_380(int iParam0, int iParam1){
func_119(iParam0, iParam1, -1);
}

int func_381(){
if((func_37(PLAYER::PLAYER_ID(), 21) || func_37(PLAYER::PLAYER_ID(), 22)) || func_386()){
return 1;
}
if(func_383()){
func_382(22);
return 1;
}
return 0;
}


void func_382(bool bParam0){
MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), iParam0);
}

int func_383(){
if(func_34(PLAYER::PLAYER_ID(), 0)){
if(((func_27() && !func_385()) || func_23(PLAYER::PLAYER_ID(), 21)) || func_23(PLAYER::PLAYER_ID(), 25)){
return 1;
}else{
func_384(27);
}}
return 0;
}


void func_384(bool bParam0){
MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), iParam0);
}


bool func_385(){
return Global_1574582.f_1;
}


bool func_386(){
return func_330(424, -1);
}

int func_387(){
return 0;
}


void func_388(){
char* sVar0;
char* sVar1;
struct<14> Var2;
if(func_428()){
return;
}
if(func_427()){
func_420();
}
if(func_419()){
func_418();
}
sVar0="GB_WORK_OVER";
sVar1="GB_WORK_OVER";
if(func_6(PLAYER::PLAYER_ID(), 1)){
sVar0="BK_RUN_OVER";
}
if((!MISC::IS_BIT_SET(Local_96.f_1, 2) && !MISC::IS_BIT_SET(Local_96.f_1, 4)) && !MISC::IS_BIT_SET(Local_96.f_1, 3)){
if(MISC::IS_BIT_SET(Local_96.f_1, 7)){
sVar1="GBTER_B_SSH";
if(Local_96.f_10){
sVar1="GBTER_B_SSH_A";
}
if(Local_96.f_10){
func_412(101, sVar0, sVar1, func_414(), func_413(PLAYER::PLAYER_ID()), func_38(), func_11(), func_11(), 0, -1, -1, -1, 2, -1, 2);
}else{
func_411(87, func_38(), -1, sVar1, sVar0, 1, -1, 2, 0);
}}elseif(func_410() !=PLAYER::PLAYER_ID()){
sVar1="GBTER_BIG_COMS";
if(func_6(PLAYER::PLAYER_ID(), 1)){
sVar1="GBTER_B_SSO";
if(Local_96.f_10){
sVar1="GBTER_B_SSO_A";
}}
if(Local_96.f_10){
func_412(101, sVar0, sVar1, func_414(), func_413(PLAYER::PLAYER_ID()), func_410(), func_38(), func_11(), 0, -1, -1, -1, 2, -1, 2);
}else{
func_409(91, func_410(), func_38(), -1, sVar1, sVar0, 1, -1, 2, 0, 0, 0);
}}else{
sVar1="GBTER_BIG_WINS";
if(func_6(PLAYER::PLAYER_ID(), 1)){
sVar1="GBTER_B_SSW";
if(Local_96.f_10){
sVar1="GBTER_B_SSW_A";
}}
if(Local_96.f_10){
func_412(101, "GB_WINNER", sVar1, func_414(), func_413(PLAYER::PLAYER_ID()), func_38(), func_11(), func_11(), 0, -1, -1, -1, 2, -1, 2);
}else{
func_411(87, func_38(), -1, sVar1, "GB_WINNER", 1, -1, 2, 0);
}}}elseif(MISC::IS_BIT_SET(Local_96.f_1, 3)){}else{
sVar1="GBTER_BIG_FLEE";
if(func_6(PLAYER::PLAYER_ID(), 1)){
sVar1="GBTER_B_BFLEE";
}
func_390(88, sVar0, sVar1, 1, -1, 2, 1, 0);
if(MISC::IS_BIT_SET(Local_96.f_1, 4) || func_32(func_38(), 1, 0)){
if(PLAYER::PLAYER_ID()==func_64()){
Var2.f_10=func_64();
Var2.f_2=110435988;
func_389(Var2, func_47(func_38()));
}}}}


void func_389(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13){
Param0.f_0=-642704387;
Param0.f_1=PLAYER::PLAYER_ID();
if(!iParam13==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Param0, 14, iParam13);
}}

int func_390(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
struct<80> Var0;
Var0.f_3=-1;
Var0.f_4=-1;
Var0.f_5=-1;
Var0.f_6=-1;
Var0.f_7=-1082130432;
Var0.f_16=1;
Var0.f_71=1;
Var0.f_72=2;
Var0.f_79=-1;
func_408(iParam0, &Var0, -1, sParam2, sParam1);
Var0.f_71=iParam3;
Var0.f_6=iParam4;
Var0.f_72=iParam5;
Var0.f_16=iParam6;
if(iParam7 !=0){
func_406(&(Var0.f_69), iParam7);
}
return func_391(&Var0);
}

int func_391(var uParam0){
int iVar0;
if(uParam0->f_1==1){
if(Global_2672524.f_2836){
return 0;
}}
func_405(uParam0, uParam0->f_17);
func_402(uParam0);
if(func_98()){
func_402(uParam0);
}
if(func_401(uParam0->f_1)){
func_394();
if(Global_2672524.f_2514[0 /*80*/].f_2==0){
Global_2672524.f_2514[0 /*80*/]={
*uParam0 
};
if(func_393(uParam0->f_69, 8192)){
Global_1935885=1;
}
return 1;
}
if(((Global_2672524.f_2514[0 /*80*/].f_1==13 || Global_2672524.f_2514[0 /*80*/].f_1==53) || Global_2672524.f_2514[0 /*80*/].f_1==54) || Global_2672524.f_2514[0 /*80*/].f_1==58){
Global_2672524.f_2514[0 /*80*/].f_2=5;
}
iVar0=2;
while (iVar0 >=1){
Global_2672524.f_2514[iVar0 + 1 /*80*/]={
Global_2672524.f_2514[iVar0 /*80*/] 
};
iVar0=(iVar0 + -1);
}
Global_2672524.f_2514[1 /*80*/]={
*uParam0 
};
return 1;
}
iVar0=0;
while (iVar0 < 4){
if(Global_2672524.f_2514[iVar0 /*80*/].f_2==0){
Global_2672524.f_2514[iVar0 /*80*/]={
*uParam0 
};
if(iVar0==0){
func_394();
}
return 1;
}else{
if(uParam0->f_1==1){
func_406(&(Global_2672524.f_2514[iVar0 /*80*/].f_69), 2);
Global_2672524.f_2514[iVar0 /*80*/].f_2=5;
}
if(uParam0->f_1==86 && !func_393(uParam0->f_69, 128)){
if(func_392(Global_2672524.f_2514[iVar0 /*80*/].f_1)){
Global_2672524.f_2514[iVar0 /*80*/].f_2=5;
func_406(&(Global_2672524.f_2514[iVar0 /*80*/].f_69), 1);
}}}
iVar0++;
}
return 0;
}

int func_392(int iParam0){
switch (iParam0){
case 88:
case 87:
case 91:
case 92:
case 86:
case 93:
case 94:
case 95:
case 96:
case 97:
case 98:
case 99:
case 89:
case 100:
case 101:
case 102:
case 103:
case 90:
case 110:
return 1;
default:
}
return 0;
}


bool func_393(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}


void func_394(){
bool bVar0;
if(Global_2672524.f_2837){
return;
}
if(!Global_78958){
Global_78958=1;
bVar0=true;
}elseif(Global_78959){
Global_78959=0;
bVar0=true;
}
func_395();
if(bVar0){
Global_78958=0;
}}


void func_395(){
Global_2672524.f_2838=0;
Global_2672524.f_2838.f_582=0;
func_399(&(Global_2672524.f_2838.f_1));
Global_2672524.f_2838.f_1.f_1=0;
func_396(&(Global_2672524.f_2838.f_1), 1);
}


void func_396(var uParam0, int iParam1){
if(uParam0->f_1 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
uParam0->f_1=0;
}
if((uParam0->f_566 || iParam1) && uParam0->f_4 !=0){
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
uParam0->f_4=0;
}
if(uParam0->f_568){
SCRIPT::SET_NO_LOADING_SCREEN(0);
uParam0->f_568=0;
}
if(!Global_78958){
if(!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX())){
if(!Global_78960){
if(CAM::IS_SCREEN_FADED_OUT() && !func_398(0)){
CAM::DO_SCREEN_FADE_IN(800);
}}}}
func_397(0);
}


void func_397(int iParam0){
Global_78950=iParam0;
Global_78951=iParam0;
}

int func_398(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78938, 0);
}


void func_399(var uParam0){
func_400(uParam0);
uParam0->f_574=0;
uParam0->f_31=0;
uParam0->f_56=0;
uParam0->f_571=0;
uParam0->f_573=0;
}


void func_400(var uParam0){
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

int func_401(int iParam0){
if((((((((((((((((((((((((iParam0==3 || iParam0==4) || iParam0==5) || iParam0==6) || iParam0==11) || iParam0==12) || iParam0==28) || iParam0==29) || iParam0==30) || iParam0==24) || iParam0==32) || iParam0==31) || iParam0==26) || iParam0==25) || iParam0==56) || iParam0==7) || iParam0==8) || iParam0==9) || iParam0==10) || iParam0==104) || iParam0==100) || iParam0==103) || iParam0==105) || iParam0==110) || iParam0==111){
return 1;
}
return 0;
}


void func_402(var uParam0){
if(func_404(uParam0->f_1)){
uParam0->f_72=func_403();
}}

int func_403(){
return 21;
}

int func_404(int iParam0){
switch (iParam0){
case 63:
case 64:
case 65:
case 66:
case 67:
case 68:
case 69:
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
case 81:
case 82:
case 83:
return 1;
default:
}
return 0;
}


void func_405(var uParam0, int iParam1){
if(func_404(uParam0->f_1)){
uParam0->f_73=1;
}
if(iParam1==func_11() || !func_10(iParam1, 0, 1)){
return;
}
if(func_392(uParam0->f_1)){
if(uParam0->f_71==1){
uParam0->f_73=func_67(iParam1, -2, 0, 0, 0);
}}}


void func_406(var uParam0, int iParam1){
func_407(uParam0, iParam1);
}


void func_407(var uParam0, var uParam1){
*uParam0=(*uParam0 || uParam1);
}


void func_408(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4){
uParam1->f_17=func_11();
uParam1->f_18=func_11();
uParam1->f_19=func_11();
uParam1->f_20=func_11();
uParam1->f_1=uParam0;
uParam1->f_2=1;
StringCopy(&(uParam1->f_21), sParam4, 16);
StringCopy(&(uParam1->f_8), sParam3, 32);
uParam1->f_16=1;
uParam1->f_3=iParam2;
uParam1->f_71=1;
uParam1->f_74=1;
uParam1->f_75=1;
uParam1->f_76=0;
uParam1->f_77=0;
uParam1->f_73=0;
StringCopy(&(uParam1->f_25), "", 64);
StringCopy(&(uParam1->f_41), "", 64);
}

int func_409(int iParam0, bool bParam1, bool bParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11){
struct<80> Var0;
Var0.f_3=-1;
Var0.f_4=-1;
Var0.f_5=-1;
Var0.f_6=-1;
Var0.f_7=-1082130432;
Var0.f_16=1;
Var0.f_71=1;
Var0.f_72=2;
Var0.f_79=-1;
func_408(iParam0, &Var0, iParam3, sParam4, sParam5);
Var0.f_17=bParam1;
Var0.f_18=bParam2;
Var0.f_71=iParam6;
Var0.f_6=iParam7;
Var0.f_72=iParam8;
StringCopy(&(Var0.f_25), sParam9, 64);
StringCopy(&(Var0.f_41), sParam10, 64);
StringCopy(&(Var0.f_57), sParam11, 16);
return func_391(&Var0);
}


bool func_410(){
return Local_96.f_3;
}

int func_411(int iParam0, bool bParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8){
struct<80> Var0;
Var0.f_3=-1;
Var0.f_4=-1;
Var0.f_5=-1;
Var0.f_6=-1;
Var0.f_7=-1082130432;
Var0.f_16=1;
Var0.f_71=1;
Var0.f_72=2;
Var0.f_79=-1;
func_408(iParam0, &Var0, iParam2, sParam3, sParam4);
Var0.f_17=bParam1;
Var0.f_71=iParam5;
Var0.f_6=iParam6;
Var0.f_72=iParam7;
if(iParam8 !=0){
func_406(&(Var0.f_69), iParam8);
}
return func_391(&Var0);
}

int func_412(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14){
struct<80> Var0;
Var0.f_3=-1;
Var0.f_4=-1;
Var0.f_5=-1;
Var0.f_6=-1;
Var0.f_7=-1082130432;
Var0.f_16=1;
Var0.f_71=1;
Var0.f_72=2;
Var0.f_79=-1;
func_408(iParam0, &Var0, iParam9, sParam2, sParam1);
Var0.f_4=iParam10;
Var0.f_5=iParam11;
Var0.f_17=bParam5;
Var0.f_18=bParam6;
Var0.f_19=bParam7;
StringCopy(&(Var0.f_25), sParam3, 64);
StringCopy(&(Var0.f_57), sParam8, 16);
Var0.f_73=uParam4;
Var0.f_71=uParam4;
Var0.f_6=iParam13;
Var0.f_72=iParam12;
if(iParam14 !=2){
Var0.f_71=iParam14;
}
func_406(&(Var0.f_69), 4);
return func_391(&Var0);
}

int func_413(bool bParam0){
int iVar0;
iVar0=func_87(bParam0);
if(iVar0 !=-1){
return func_85(iVar0);
}
return 1;
}


char* func_414(){
bool bVar0;
char* sVar1;
bVar0=func_28(PLAYER::PLAYER_ID());
if(bVar0 !=func_11()){
if(bVar0 !=PLAYER::PLAYER_ID()){
if(((func_37(bVar0, 28) || func_37(PLAYER::PLAYER_ID(), 28)) || func_417(bVar0)) && !func_343(bVar0)){
return func_415(bVar0, 0);
}
if(!func_342() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)){
return func_415(bVar0, 0);
}}
sVar1=func_344(&(Global_1895156[bVar0 /*609*/].f_10.f_105));
if(MISC::IS_STRING_NULL_OR_EMPTY(sVar1)){
return func_415(bVar0, 0);
}else{
return sVar1;
}}
return "";
}


var func__415(bool bParam0, bool bParam1){
if(!bParam1){
if(func_6(bParam0, 1)){
return func_416();
}}
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC");
}


var func__416(){
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM");
}

int func_417(bool bParam0){
struct<13> Var0;
if(bParam0 !=func_11()){
Var0={
func_270(bParam0) 
};
if((MISC::IS_ORBIS_VERSION() && !MISC::IS_PROSPERO_VERSION()) || MISC::IS_PC_VERSION()){
if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
return 0;
}}elseif(func_342() || MISC::IS_PROSPERO_VERSION()){
if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
if(NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0)){
return 0;
}}}}
return 1;
}


void func_418(){
int iVar0;
iVar0=0;
while (iVar0 <=3){
if(Global_2672524.f_2514[iVar0 /*80*/].f_2 !=0){
Global_2672524.f_2514[iVar0 /*80*/].f_2=5;
func_406(&(Global_2672524.f_2514[iVar0 /*80*/].f_69), 1);
}
iVar0++;
}}


bool func_419(){
return Global_2672524.f_2514[0 /*80*/].f_1 !=0;
}


void func_420(){
if(!func_426()){
return;
}
if(!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME())==Global_1574757.f_9){
return;
}
func_421();
}


void func_421(){
func_423();
func_422(0);
}


void func_422(bool bParam0){
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


void func_423(){
if(!func_425()){}
if(func_426()){
HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574757.f_12));
func_424();
HUD::END_TEXT_COMMAND_CLEAR_PRINT();
}}


void func_424(){
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

int func_425(){
if(!func_426()){
return 0;
}
HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574757.f_12));
func_424();
return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_426(){
if(Global_1574757==20){
return 0;
}
return 1;
}


bool func_427(){
return func_426();
}

int func_428(){
if(!Global_2672524.f_4.f_10 || func_673()){
return 1;
}
return 0;
}


void func_429(int iParam0, bool bParam1){
int iVar0;
if(bParam1 !=func_11()){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam1)){
if(bParam1==PLAYER::PLAYER_ID()){
iVar0=1;
}elseif(func_430(bParam1, PLAYER::PLAYER_ID())){
iVar0=1;
}}}
if(iParam0 || iVar0){
if(func_10(PLAYER::PLAYER_ID(), 1, 1)){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
Global_2794162.f_5231.f_389=NETWORK::GET_CLOUD_TIME_AS_INT();
}}}

int func_430(bool bParam0, bool bParam1){
int iVar0;
if(func_9(bParam0) && func_9(bParam1)){
iVar0=func_28(bParam0);
if(iVar0 !=func_11()){
return iVar0==func_28(bParam1);
}}
return 0;
}


void func_431(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7){
int iVar0;
int iVar1[32];
bool bVar2;
bool bVar3;
bool bVar4;
char* sVar5;
int iVar6;
struct<4> Var7;
int iVar8;
int iVar9;
bool bVar10;
float fVar11;
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
struct<2> Var23;
if(func_563(iParam2)){
return;
}
fVar11=-1f;
iVar12=-1;
iVar13=-1;
iVar15=0;
iVar16=0;
uParam3->f_36=0;
if(func_561() || iParam2==28){
if(func_508(uParam1, iParam2, uParam3, Global_1836371, 0, func_559(), iParam7)){
func_507(1);
if((!func_506() && !func_505()) || MISC::IS_BIT_SET(Global_2794162.f_4694, 1)){
if(func_504()){
func_503();
}else{
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
if(uParam3->f_27==0){
func_502(1);
Global_1836371=0;
iVar20=-1;
if(Global_1836595 !=1){
func_501(uParam1, 0, 0);
if(MISC::IS_BIT_SET(uParam3->f_33, 7)){
MISC::CLEAR_BIT(&(uParam3->f_33), 7);
}
}
if(iParam2==28){
iVar18=0;
while (iVar18 < 32){
iVar1[iVar18]=-1;
iVar18++;
}
iVar18=0;
while (iVar18 < 32){
if(func_10(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1)){
bVar4=PLAYER::INT_TO_PLAYERINDEX(iVar18);
if(!func_20(bVar4, 0)){
if(func_497(bVar4) || func_496(bVar4, bVar3)){
bVar10=bVar4;
if(func_30(bVar4)){
iVar1[bVar10]=iVar21;
iVar21++;
iVar0++;
func_495(&iVar1, bVar4, &iVar21, &iVar0, bVar3);
}
}
}}
iVar18++;
}
}
if(!func_493(PLAYER::PLAYER_ID(), 0) && func_33(PLAYER::PLAYER_ID()) !=188){
bVar2=iVar0 > 0;
}
iVar18=0;
while (iVar18 < 32){
if(func_492()){
if(func_10(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1)){
bVar4=PLAYER::INT_TO_PLAYERINDEX(iVar18);
}else{
bVar4=func_11();
}}else{
bVar4=(uParam0[iVar18 /*42*/])->f_1;
}
if((func_491(bVar4) && func_486(bVar4, iParam2, bVar3)) && func_10(bVar4, 0, 1)){
bVar10=bVar4;
iVar8=Global_1853988[bVar10 /*867*/].f_205.f_6;
Var7={
func_481(bVar4) 
};
if(bVar4==PLAYER::PLAYER_ID()){
uParam3->f_35=iVar19;
}
StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar4), 64);
*(uParam4[iVar18 /*13*/])={
func_270(bVar4) 
};
iVar6=func_475(bVar4);
sVar5="";
if(iVar6 !=0){
sVar5=PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
}
Global_1836371++;
if((uParam0[iVar18 /*42*/])->f_22 !=-1f){
fVar11=(uParam0[iVar18 /*42*/])->f_22;
}
if((uParam0[iVar18 /*42*/])->f_31 !=-1){
iVar12=(uParam0[iVar18 /*42*/])->f_31;
}
if((uParam0[iVar18 /*42*/])->f_41 !=-1){
iVar13=(uParam0[iVar18 /*42*/])->f_41;
}
iVar9=(uParam0[iVar18 /*42*/])->f_7;
if(((uParam0[iVar18 /*42*/])->f_7 !=-1 || (uParam0[iVar18 /*42*/])->f_22 !=-1f) || (uParam0[iVar18 /*42*/])->f_31 !=-1){
if(!func_492()){
iVar16=1;
}}
if(iParam5 !=-1){
func_470(&iVar9, &fVar11, (uParam0[iVar18 /*42*/])->f_7, iParam5);
StringCopy(&(uParam3->f_104), func_469(iParam5, 1, 0, 0), 16);
}
if(bParam6){
iVar14=(uParam0[iVar18 /*42*/])->f_2 + 1;
if(iVar20 !=iVar14){
iVar20=iVar14;
}
else{
iVar14=-2;
}}
iVar17=func_468(bVar4, 0);
if(bVar2){
if(func_29(bVar4, 1) && iVar1[bVar10] !=-1){
iVar19=iVar1[bVar10];
}
else{
iVar19=(iVar0 + iVar22);
iVar22++;
}}
uParam3->f_38[bVar10 /*2*/].f_1=iVar19;
if((uParam0[iVar18 /*42*/])->f_39 !=-1){
StringCopy(&Var23, "UW_TM", 16);
StringIntConCat(&Var23, (uParam0[iVar18 /*42*/])->f_39, 16);
}
if(func_467(iParam5)){
func_466(bVar4, uParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
}else{
func_466(bVar4, uParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
}
MISC::SET_BIT(&iVar15, bVar4);
iVar19++;
}
iVar18++;
}
iVar18=0;
while (iVar18 < 32){
bVar4=PLAYER::INT_TO_PLAYERINDEX(iVar18);
if(func_10(bVar4, 0, 1) && !MISC::IS_BIT_SET(iVar15, bVar4)){
bVar4=PLAYER::INT_TO_PLAYERINDEX(iVar18);
}else{
bVar4=func_11();
}
if(func_491(bVar4)){
if(func_10(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1)){
bVar10=bVar4;
iVar8=Global_1853988[bVar10 /*867*/].f_205.f_6;
Var7={
func_481(bVar4) 
};
*(uParam4[iVar18 /*13*/])={
func_270(bVar4) 
};
iVar6=func_475(bVar4);
sVar5="";
if(iVar6 !=0){
sVar5=PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
}
Global_1836371++;
iVar17=func_468(bVar4, 1);
if(bVar2){
if(func_29(bVar4, 1)){
iVar19=iVar1[iVar18];
}
else{
iVar19=(iVar0 + iVar22);
iVar22++;
}
}
uParam3->f_38[bVar10 /*2*/].f_1=iVar19;
func_446(bVar4, PLAYER::GET_PLAYER_NAME(bVar4), uParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar17, iVar16);
iVar19++;
}}
iVar18++;
}
if(MISC::IS_BIT_SET(uParam3->f_33, 11)){
func_443(uParam3, uParam1, iParam2);
}
func_442(&(uParam3->f_21));
func_441();
uParam3->f_27=2;
}
if(uParam3->f_27==2){
if(!MISC::IS_BIT_SET(uParam3->f_33, 7)){
func_440(uParam3, uParam1);
func_439(uParam1, 0, 1);
MISC::SET_BIT(&(uParam3->f_33), 7);
}
func_440(uParam3, uParam1);
if(!MISC::IS_BIT_SET(uParam3->f_33, 11)){
MISC::SET_BIT(&(uParam3->f_33), 11);
}
if(func_435(uParam3)){
Global_1836595=1;
}
func_432(uParam3);
if(Global_1836595==1){
uParam3->f_27=0;
}
if(Global_1836595==2){
uParam3->f_27=0;
}}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1)){
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
}}}}else{
uParam3->f_27=0;
func_441();
func_502(0);
if(MISC::IS_BIT_SET(uParam3->f_33, 7)){
MISC::CLEAR_BIT(&(uParam3->f_33), 7);
}
if(MISC::IS_BIT_SET(uParam3->f_33, 10)){
MISC::CLEAR_BIT(&(uParam3->f_33), 10);
}}}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


void func_432(var uParam0){
if(!func_434(&(uParam0->f_21))){
func_4(&(uParam0->f_21), 0, 0);
}elseif(func_3(&(uParam0->f_21), 250, 0)){
func_442(&(uParam0->f_21));
func_433(0);
}}


void func_433(bool bParam0){
if(bParam0){
if(Global_1836595 !=2){
Global_1836595=2;
}}else{
switch (Global_1836595){
case 0:
Global_1836595=1;
break;
case 1:
break;
case 2:
break;
}}}


bool func_434(var uParam0){
return uParam0->f_1;
}

int func_435(var uParam0){
int iVar0;
int iVar1;
struct<13> Var2;
bool bVar3;
int iVar4;
iVar4=0;
iVar0=uParam0->f_37;
bVar3=PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
if(bVar3 !=func_11() && func_10(bVar3, 0, 1)){
Var2={
func_270(bVar3) 
};
iVar1=func_438(uParam0, uParam0->f_37);
if(func_437(Var2)){
switch (iVar1){
case 0:
if(NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2)){
if(NETWORK::NETWORK_IS_GAMER_TALKING(&Var2)){
iVar4=1;
func_436(uParam0, iVar0, 2);
}}elseif(NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2)){
iVar4=1;
func_436(uParam0, iVar0, 1);
}
break;
case 2:
if(NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2)){
if(!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2)){
iVar4=1;
func_436(uParam0, iVar0, 0);
}}else{
iVar4=1;
func_436(uParam0, iVar0, 0);
}
break;
case 1:
if(NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2)){
if(!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2)){
iVar4=1;
func_436(uParam0, iVar0, 0);
}}elseif(!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2)){
iVar4=1;
func_436(uParam0, iVar0, 0);
}
break;
}}}
uParam0->f_37++;
if(uParam0->f_37 >=32){
uParam0->f_37=0;
}
return iVar4;
}


void func_436(var uParam0, int iParam1, int iParam2){
uParam0->f_38[iParam1 /*2*/]=iParam2;
}


bool func_437(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12){
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}


var func__438(var uParam0, int iParam1){
return uParam0->f_38[iParam1 /*2*/];
}


void func_439(var uParam0, int iParam1, int iParam2){
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "COLLAPSE")){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(iParam2==1){
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DISPLAY_VIEW")){
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}


void func_440(var uParam0, var uParam1){
if(!MISC::IS_BIT_SET(uParam0->f_33, 10)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "SET_HIGHLIGHT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
MISC::SET_BIT(&(uParam0->f_33), 10);
}}


void func_441(){
if(Global_1836595 !=0){
Global_1836595=0;
}}


void func_442(var uParam0){
uParam0->f_1=0;
}


void func_443(var uParam0, var uParam1, int iParam2){
int iVar0;
int iVar1;
bool bVar2;
iVar0=0;
while (iVar0 < 32){
bVar2=PLAYER::INT_TO_PLAYERINDEX(iVar0);
if(bVar2 !=func_11()){
if(func_10(bVar2, 0, 1)){
if(uParam0->f_38[iVar0 /*2*/].f_1 !=-1){
iVar1=func_445(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
func_444(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1853988[iVar0 /*867*/].f_205.f_6);
}}}
iVar0++;
}}


void func_444(var uParam0, int iParam1, int iParam2, int iParam3){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON")){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
if(iParam2==65){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}

int func_445(int iParam0, bool bParam1, int iParam2){
int iVar0;
iVar0=65;
switch (iParam2){
case 21:
iVar0=0;
break;
}
if(bParam1){
iVar0=116;
}
switch (iParam0){
case 2:
return 47;
case 1:
return 49;
default:
}
return iVar0;
}


void func_446(bool bParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12){
int iVar0;
char* sVar1;
if(iParam4 >=func_465() && iParam4 < func_464()){
iParam4=(iParam4 % 16);
iVar0=iParam4 + 1;
if(Global_1836373){
iVar0 +=16;
}
sVar1="SET_DATA_SLOT";
if(Global_1836595==1){
sVar1="UPDATE_SLOT";
}
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, sVar1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
if(MISC::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108==6){
func_463("");
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
}
func_463(sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
if(uParam3->f_108==6){
func_463("");
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
func_463("");
if(uParam3->f_108==6){
func_463("");
}else{
func_463(&sParam5);
}
func_451(uParam3, bParam0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
if(func_450(uParam3)){
func_449("DPAD_FRIEND");
}elseif(func_448(uParam3)){
func_449("DPAD_FRIEND");
}elseif(func_447(uParam3)){
func_449("DPAD_CREW");
}else{
func_449("");
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}


bool func_447(var uParam0){
return MISC::IS_BIT_SET(uParam0->f_33, 6);
}


bool func_448(var uParam0){
return MISC::IS_BIT_SET(uParam0->f_33, 5);
}


void func_449(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_450(var uParam0){
if(func_448(uParam0) && func_447(uParam0)){
return 1;
}
return 0;
}


void func_451(var uParam0, bool bParam1){
if(func_462(bParam1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
}elseif(func_455(bParam1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
}elseif(((MISC::IS_BIT_SET(Global_4718592.f_27, 15) && bParam1 > -1) && bParam1 < 32) && MISC::IS_BIT_SET(Global_2657704[bParam1 /*463*/].f_433, 0)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
}else{
if(func_452()){
uParam0->f_36=0;
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
}}

int func_452(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
if(func_453() || func_100()){
return 1;
}}
return 0;
}

int func_453(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return func_100();
}
return func_454(Global_4718592.f_117591);
}

int func_454(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 8){
if(Global_262145.f_5025[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_455(bool bParam0){
if((func_10(bParam0, 0, 1) && func_456()) && func_6(bParam0, 1)){
return 1;
}
return 0;
}

int func_456(){
if(func_461(PLAYER::PLAYER_ID()) || func_460()){
if(!func_457(PLAYER::PLAYER_ID())){
return 0;
}}
return 1;
}

int func_457(bool bParam0){
if(func_459(bParam0)==236 || func_459(bParam0)==150){
return func_458(bParam0);
}
return 0;
}

int func_458(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1895156[iVar0 /*609*/].f_1, 7);
}
return 0;
}

int func_459(bool bParam0){
int iVar0;
iVar0=bParam0;
if(iVar0 !=-1){
return Global_1895156[iVar0 /*609*/];
}
return -1;
}

int func_460(){
switch (func_33(PLAYER::PLAYER_ID())){
case 193:
case 194:
case 199:
case 205:
case 210:
case 188:
return 1;
default:
}
return 0;
}

int func_461(bool bParam0){
int iVar0;
iVar0=bParam0;
if(iVar0 !=-1){
return Global_1895156[iVar0 /*609*/] !=-1;
}
return 0;
}

int func_462(bool bParam0){
if(func_452()){
if(func_10(bParam0, 0, 1)){
return func_30(bParam0);
}}
if((func_10(bParam0, 0, 1) && func_456()) && func_8(bParam0, 0)){
return 1;
}
return 0;
}


void func_463(char* sParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_464(){
int iVar0;
if(Global_1836373){
iVar0=32;
}else{
iVar0=16;
}
return iVar0;
}

int func_465(){
int iVar0;
iVar0=0;
if(Global_1836373){
iVar0=16;
}
return iVar0;
}


void func_466(bool bParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19){
int iVar0;
char* sVar1;
if(iParam3 >=func_465() && iParam3 < func_464()){
iParam3=(iParam3 % 16);
iVar0=iParam3 + 1;
if(Global_1836373){
iVar0 +=16;
}
if(bParam19){
iVar0=iParam18;
if(iVar0==-2){
iParam10=-1;
}}
sVar1="SET_DATA_SLOT";
if(Global_1836595==1){
sVar1="UPDATE_SLOT";
}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1)){
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, sVar1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
if(MISC::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108==6){
func_463("");
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
}
if(uParam2->f_108==6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16)){
func_449(sParam16);
}else{
func_463(&(uParam2->f_1));
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
if(uParam2->f_108==6){
func_463("");
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
}
if(iParam12==1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
}
if(func_492()){
func_463("");
}elseif(uParam2->f_108==6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(uParam2->f_108==5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(uParam2->f_108==7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(uParam2->f_108==8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104))){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
if(fParam13 !=-1f){
HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
}
if(iParam10 !=-1){
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
}
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(uParam2->f_108==9){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(uParam2->f_108==10){
if(iParam10==0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}}elseif(iParam15 > -1){
if(iParam15==0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104))){
func_449(&(uParam2->f_104));
}else{
func_463("");
}}elseif(iParam14 !=-1){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(fParam13 !=-1f){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(iParam10 !=-1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
}else{
func_463("");
}
if(uParam2->f_108==6){
func_463("");
}else{
func_463(&sParam4);
}
func_451(uParam2, bParam0);
if(iParam12==1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8)){
func_463("");
func_463("");
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
}
if(func_450(uParam2)){
func_449("DPAD_FRIEND");
}elseif(func_448(uParam2)){
func_449("DPAD_FRIEND");
}elseif(func_447(uParam2)){
func_449("DPAD_CREW");
}else{
func_449("");
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}}

int func_467(int iParam0){
return 0;
switch (iParam0){
case 11:
case 12:
return 1;
default:
}
return 0;
}

int func_468(bool bParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=116;
if((!bParam1 && func_461(bParam0)) && !func_213(bParam0)){
iVar0=func_403();
}
iVar1=func_87(bParam0);
if(!iVar1==-1){
return func_85(iVar1);
}
return iVar0;
}


char* func_469(int iParam0, bool bParam1, bool bParam2, int iParam3){
switch (iParam0){
case 0:
case 3:
case 4:
case 5:
case 1:
case 6:
case 9:
case 10:
case 13:
case 11:
case 12:
if(MISC::SHOULD_USE_METRIC_MEASUREMENTS()){
if(bParam1){
return "AMCH_M_LB";
}elseif(bParam2){
return "AMCH_M";
}else{
return "AMCH_METRES";
}}elseif(bParam1){
return "AMCH_FT_LB";
}elseif(bParam2){
return "AMCH_FT";
}else{
return "AMCH_FEET";
}
break;
case 2:
if(MISC::SHOULD_USE_METRIC_MEASUREMENTS()){
if(bParam1){
return "AMCH_KMH_LB";
}elseif(bParam2){
return "AMCH_KMHN";
}else{
return "AMCH_KMH";
}}elseif(bParam1){
return "AMCH_MPH_LB";
}elseif(bParam2){
return "AMCH_MPHN";
}else{
return "AMCH_MPH";
}
break;
case 7:
if(bParam1 || bParam2){
return "";
}else{
return "AMCH_VEH";
}
break;
case 15:
case 16:
case 17:
case 18:
if(bParam1 || bParam2){
return "";
}elseif(iParam3 !=1){
return "AMCH_KILLS";
}else{
return "AMCH_KILL";
}
break;
}
if(bParam1 || bParam2){
return "";
}
return "AMCH_EMPTY";
}

int func_470(var uParam0, float fParam1, int iParam2, int iParam3){
if(func_474(iParam3)){
*fParam1=(func_471(iParam3, iParam2) / 10f);
return 1;
}
if(func_467(iParam3)){
*fParam1=(func_471(iParam3, iParam2) / 1000f);
return 1;
}
*uParam0=iParam2;
return 0;
}


float func_471(int iParam0, int iParam1){
switch (iParam0){
case 0:
case 3:
case 4:
case 5:
case 1:
case 6:
case 9:
case 10:
case 13:
case 11:
case 12:
if(MISC::SHOULD_USE_METRIC_MEASUREMENTS()){
return to_float(iParam1);
}else{
return func_473(to_float(iParam1));
}
break;
case 2:
if(MISC::SHOULD_USE_METRIC_MEASUREMENTS()){
return to_float(iParam1);
}else{
return func_472(to_float(iParam1));
}
break;
}
return to_float(iParam1);
}


float func_472(float fParam0){
return (fParam0 / 1.609344f);
}


float func_473(float fParam0){
return (fParam0 / 0.3048f);
}

int func_474(int iParam0){
switch (iParam0){
case 0:
case 2:
case 3:
case 5:
case 4:
case 1:
case 6:
case 9:
case 10:
case 13:
case 11:
case 12:
return 1;
default:
}
return 0;
}

int func_475(bool bParam0){
int iVar0;
iVar0=func_478(bParam0);
if(iVar0==-1){
func_476(bParam0, 1);
return 0;
}
Global_1666485[iVar0 /*5*/].f_4=1;
return Global_1666485[iVar0 /*5*/].f_2;
}


void func_476(bool bParam0, bool bParam1){
if(!func_10(bParam0, 0, 1)){
return;
}
if(func_478(bParam0) !=-1){
return;
}
if(Global_1666648){
if(bParam0==Global_1666648.f_1){
return;
}}
if(func_477(bParam0)){
return;
}
if(Global_1666686 >=32){
return;
}
Global_1666653[Global_1666686]=bParam0;
Global_1666686++;
if(bParam1){}}

int func_477(bool bParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < Global_1666686){
if(Global_1666653[iVar0]==bParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_478(bool bParam0){
int iVar0;
if(!func_10(bParam0, 0, 1)){
return -1;
}
if(Global_1666646==0){
return -1;
}
iVar0=0;
iVar0=0;
while (iVar0 < Global_1666646){
if(Global_1666485[iVar0 /*5*/].f_1==bParam0){
if(PED::IS_PEDHEADSHOT_VALID(Global_1666485[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1666485[iVar0 /*5*/].f_2)){
return iVar0;
}
func_479(iVar0);
return -1;
}
iVar0++;
}
return -1;
}


void func_479(int iParam0){
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
func_480(&(Global_1666485[iVar2 /*5*/]));
Global_1666646=(Global_1666646 - 1);
}


void func_480(var uParam0){
*uParam0=0;
uParam0->f_1=func_11();
uParam0->f_2=0;
uParam0->f_4=0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uParam0->f_3=NETWORK::GET_NETWORK_TIME();
}}


struct<4> func_481(bool bParam0){
struct<4> Var0;
if(func_10(bParam0, 0, 1)){
Global_2764376={
func_270(bParam0) 
};
if(func_342()){
if(func_437(Global_2764376)){
if(!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2764376)){
return Var0;
}}}elseif(!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
return Var0;
}
if(func_485(&Global_2764376)){
Global_2764306={
func_483(bParam0) 
};
func_482(&Global_2764306, &Var0);
}}
return Var0;
}


void func_482(var uParam0, var uParam1){
NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, uParam1);
}
struct<35> func_483(bool bParam0){
struct<13> Var0;
struct<35> Var1;
if(func_484(bParam0)){
return Global_1575095[PLAYER::PLAYER_ID() /*35*/];
}
Var0={
func_270(bParam0) 
};
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
return Var1;
}

int func_484(int iParam0){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}
return 0;
}

int func_485(var uParam0){
if(PLAYER::IS_PLAYER_ONLINE()){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0)){
return 1;
}}
return 0;
}

int func_486(bool bParam0, int iParam1, bool bParam2){
if(iParam1==27){
if((func_490(bParam0) || func_489(bParam0)) || func_488(bParam0)){
return 0;
}}
if(!func_487(bParam0)){
return 0;
}
if(!func_497(bParam0) && !func_496(bParam0, bParam2)){
return 0;
}
return 1;
}


bool func_487(bool bParam0){
return MISC::IS_BIT_SET(Global_1853988[bParam0 /*867*/].f_139, 22);
}

int func_488(bool bParam0){
if(func_490(bParam0)){
return 1;
}
return MISC::IS_BIT_SET(Global_1895156[bParam0 /*609*/].f_1, 8);
}

int func_489(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return (MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_1, 10) || MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_1, 9));
}
return 0;
}


bool func_490(int iParam0){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_1, 2);
}

int func_491(bool bParam0){
bool bVar0;
if(bParam0==func_11()){
return 0;
}
if(func_20(bParam0, 0)){
return 0;
}
bVar0=bParam0;
if(bVar0 !=-1){
if(MISC::IS_BIT_SET(Global_1853988[bVar0 /*867*/].f_139, 2)){
return 0;
}}
return 1;
}

int func_492(){
switch (func_33(PLAYER::PLAYER_ID())){
case 179:
case 180:
case 182:
case 183:
case 184:
case 185:
case 186:
case 189:
case 190:
case 191:
case 192:
case 195:
case 197:
case 198:
case 200:
case 201:
case 202:
case 203:
case 204:
case 206:
case 207:
case 208:
case 209:
case 211:
return 1;
default:
}
switch (func_459(PLAYER::PLAYER_ID())){
case 131:
case 140:
case 138:
case 146:
return 1;
break;
}
if(func_213(PLAYER::PLAYER_ID())){
switch (func_33(PLAYER::PLAYER_ID())){
case 148:
case 151:
case 152:
case 153:
case 157:
case 159:
case 162:
case 164:
case 142:
return 1;
break;
}}
if(func_457(PLAYER::PLAYER_ID())){
return 1;
}
return 0;
}

int func_493(bool bParam0, int iParam1){
if(Global_1895156[bParam0 /*609*/].f_10.f_33 !=-1 && func_494(Global_1895156[bParam0 /*609*/].f_10.f_33)){
return 1;
}
if(iParam1 && Global_1895156[bParam0 /*609*/].f_10.f_32 !=-1){
if(func_494(Global_1895156[bParam0 /*609*/].f_10.f_32)){
return 1;
}}
return 0;
}

int func_494(int iParam0){
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
return func_206(iParam0, 0);
return 0;
}


void func_495(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
bool bVar1;
iVar0=0;
while (iVar0 < 32){
if(func_10(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1)){
bVar1=PLAYER::INT_TO_PLAYERINDEX(iVar0);
if(!func_20(bVar1, 0)){
if(func_497(bVar1) || func_496(bVar1, bParam4)){
if(func_49(bVar1, bParam1, 0)){
(*iParam0)[iVar0]=*iParam2;
*iParam2++;
*iParam3++;
}}}}
iVar0++;
}}


bool func_496(bool bParam0, bool bParam1){
if(bParam1){
return 0;
}
return (Global_2657704[bParam0 /*463*/].f_246 !=-1 || func_31(bParam0));
}

int func_497(bool bParam0){
if(!func_10(bParam0, 0, 1)){
return 0;
}
if(!func_10(PLAYER::PLAYER_ID(), 0, 1)){
return 0;
}
if(!func_498(bParam0)){
return 0;
}
if((NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(bParam0, PLAYER::PLAYER_ID()) || func_33(bParam0)==233) || func_33(bParam0)==271){
return 1;
}
return 0;
}

int func_498(bool bParam0){
bool bVar0;
bool bVar1;
bVar0=func_499(PLAYER::PLAYER_ID());
bVar1=func_499(bParam0);
if((bVar0 && !bVar1) || (!bVar0 && bVar1)){
return 0;
}
return 1;
}


var func__499(bool bParam0){
return func_500(&(Global_2657704[bParam0 /*463*/].f_442), 0);
}


var func__500(var uParam0, int iParam1){
return MISC::IS_BIT_SET(*uParam0, iParam1);
}


void func_501(var uParam0, int iParam1, int iParam2){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}


void func_502(bool bParam0){
if(bParam0){
if(Global_1654051.f_2==0){
Global_1654051.f_2=1;
}}elseif(Global_1654051.f_2==1){
Global_1654051.f_2=0;
}}


void func_503(){
if(MISC::IS_BIT_SET(Global_2794162.f_4694, 1)){
if(func_419()){
func_418();
}}}

int func_504(){
if(MISC::IS_BIT_SET(Global_2794162.f_4694, 0) && func_419()){
return 1;
}
if(MISC::IS_BIT_SET(Global_2794162.f_4694, 1) && func_419()){
return 1;
}
return 0;
}

int func_505(){
if(func_419()){
if(func_392(Global_2672524.f_2514[0 /*80*/].f_1)){
return 1;
}}
return 0;
}

int func_506(){
if(func_419()){
if(func_404(Global_2672524.f_2514[0 /*80*/].f_1)){
return 1;
}}
return 0;
}


void func_507(int iParam0){
if(Global_1654051.f_1 !=Global_1654051){
Global_1654051.f_1=Global_1654051;
}
if(Global_1654051 !=iParam0){
Global_1654051=iParam0;
}}

int func_508(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6){
struct<4> Var0;
var uVar1;
bool bVar2;
bool bVar3;
float fVar4;
int iVar5;
char* sVar6;
StringCopy(&Var0, "", 16);
bVar2=iParam1==20;
bVar3=func_558(iParam1);
fVar4=func_557();
iVar5=-1;
if(iParam1==27 || iParam1==28){
if(func_556()){
if(func_555() > 0 && Global_1836373){
HUD::THEFEED_HIDE_THIS_FRAME();
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
HUD::HIDE_HELP_TEXT_THIS_FRAME();
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
}}}
if(!bParam5){
if(!func_538()){
func_537(uParam0, uParam2, 1);
return 0;
}}
if(MISC::IS_BIT_SET(Global_2794162.f_4697, 26)){
func_537(uParam0, uParam2, 1);
return 0;
}
if(!func_434(&(uParam2->f_19))){
if(func_555()==1){
func_536(bVar3, uParam0, 0);
func_4(&(uParam2->f_19), 0, 0);
func_537(uParam0, uParam2, 0);
MISC::SET_BIT(&(Global_2794162.f_4699), 5);
}}
if(func_434(&(uParam2->f_19)) || bParam5){
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
HUD::HIDE_HELP_TEXT_THIS_FRAME();
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
if(func_3(&(uParam2->f_19), 10000, 0) || (func_555()==0 && !bParam5)){
func_537(uParam0, uParam2, 1);
return 0;
}else{
if(bVar2==0){
func_535();
if(iParam1==27 || iParam1==28){
HUD::THEFEED_HIDE_THIS_FRAME();
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
}
if(!MISC::IS_BIT_SET(uParam2->f_33, 0)){
if(bVar2==0){
func_535();
if(iParam1==27 || iParam1==28){
HUD::THEFEED_HIDE_THIS_FRAME();
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
}
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
if(func_536(bVar3, uParam0, 0)){
func_501(uParam0, 0, 0);
uVar1=func_533(iParam1, &(Global_4718592.f_117598), bParam4);
Var0={
func_531(iParam1) 
};
if(bParam4){
func_528(uParam0, uVar1, "", 0, -1, -1, 1);
}elseif(iParam1==27){
func_521(uParam0, func_525(uParam2), func_522(uParam2), -1);
}elseif(iParam1==28){
sVar6=func_517(uParam2);
if(!MISC::IS_STRING_NULL_OR_EMPTY(uParam6)){
sVar6=sParam6;
}
func_515(uParam0, sVar6, func_516(), -1);
}elseif(func_452()){
uParam2->f_34=Global_1836372;
func_528(uParam0, uVar1, &Var0, 1, -1, Global_1836372, 1);
}elseif(bVar2){
iVar5=func_510(iParam1);
uParam2->f_34=Global_1836372;
func_528(uParam0, uVar1, "", 0, iVar5, func_509(), 1);
}else{
iVar5=func_510(iParam1);
func_528(uParam0, uVar1, &Var0, 1, iVar5, -1, 1);
}
MISC::SET_BIT(&(uParam2->f_33), false);
}}
if(MISC::IS_BIT_SET(uParam2->f_33, 0)){
Global_1836371=uParam3;
Global_1836370=1;
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
if(bVar2){
if(uParam2->f_34 !=Global_1836372){
MISC::CLEAR_BIT(&(uParam2->f_33), false);
}}
return 1;
}}}
return 0;
}

int func_509(){
return Global_1836372;
}

int func_510(int iParam0){
int iVar0;
iVar0=-1;
if(func_514()){
iVar0=2;
}
switch (iParam0){
case 40:
iVar0=22;
break;
case 0:
case 31:
case 30:
case 32:
case 33:
case 34:
case 35:
case 36:
case 37:
case 38:
case 39:
case 41:
case 42:
iVar0=3;
break;
case 2:
iVar0=3;
break;
case 1:
iVar0=6;
break;
case 3:
iVar0=5;
break;
case 26:
iVar0=21;
break;
case 4:
case 5:
case 6:
case 8:
case 9:
case 10:
case 11:
iVar0=4;
break;
case 7:
iVar0=10;
break;
case 12:
case 13:
case 14:
case 17:
case 43:
iVar0=2;
break;
case 15:
iVar0=17;
break;
case 16:
iVar0=18;
break;
case 18:
if(func_513(PLAYER::PLAYER_ID())){
iVar0=20;
}
if(func_512(PLAYER::PLAYER_ID())){
iVar0=19;
}
break;
}
if(func_511(PLAYER::PLAYER_ID())){
iVar0=2;
}
if(func_293()){
iVar0=20;
}
return iVar0;
}


bool func_511(bool bParam0){
return Global_2657704[bParam0 /*463*/].f_121==4;
}


bool func_512(bool bParam0){
return Global_2657704[bParam0 /*463*/].f_121==7;
}


bool func_513(bool bParam0){
return Global_2657704[bParam0 /*463*/].f_121==2;
}


bool func_514(){
return Global_4718592.f_1==0;
}


void func_515(var uParam0, char* sParam1, char* sParam2, int iParam3){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam2)){
func_449(sParam1);
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
func_449("");
if(iParam3 !=-1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}


char* func_516(){
switch (func_33(PLAYER::PLAYER_ID())){
case 163:
return "BD_SORT_1";
break;
case 160:
return "BD_SORT_4";
break;
case 154:
return "BD_SORT_3";
break;
case 155:
return "BD_SORT_3";
break;
}
return "";
}


char* func_517(var uParam0){
switch (uParam0->f_112){
case 0:
return "GR_DPD_E";
break;
case 1:
return "GR_DPD_F";
break;
case 2:
return "GR_DPD_S";
break;
}
switch (uParam0->f_110){
case 0:
return "GR_DPD_A";
break;
case 1:
return "GR_DPD_B";
break;
case 2:
return "GR_DPD_C";
break;
case 3:
return "GR_DPD_D";
break;
}
switch (func_33(PLAYER::PLAYER_ID())){
case 233:
return "H2_DPAD_SET";
break;
case 180:
return "GB_BIGUNLOAD_T";
break;
case 182:
return "DEAL_DEALN";
break;
case 194:
return "PI_BIK_13_0";
break;
case 189:
return "PI_BIK_4_1";
break;
case 193:
return "PI_BIK_13_1";
break;
case 205:
return "PI_BIK_13_3";
break;
case 186:
return "CELL_BIKER_CK";
break;
case 207:
return "DV_SH_TITLE";
break;
case 208:
return "BA_SH_TITLE";
break;
case 209:
return "SHU_SH_TITLE";
break;
case 210:
return "PI_BIK_13_4";
break;
case 183:
return "CELL_BIKER_RESC";
break;
case 199:
return "CELL_BIKER_SEAR";
break;
case 201:
return "CELL_BIKER_STAN";
break;
case 142:
return "PIM_MAGM210";
break;
case 163:
return "PIM_MAGM608";
break;
case 160:
return "PIM_MAGM604";
break;
case 154:
return "PIM_MAGM602";
break;
case 155:
return "PIM_MAGM603";
break;
case 148:
if(func_519()){
return "LBD_BKVBK";
}
return "PIM_MAGM201";
break;
case 151:
if(func_227(1)){
return "GB_DPAD_BMFD";
}
return "PIM_MAGM202";
break;
case 152:
return "PIM_MAGM204";
break;
case 153:
if(func_227(1)){
return "PI_BIK_3_2";
}
return "PIM_MAGM601";
break;
case 157:
return "PIM_MAGM207";
break;
case 159:
return "PIM_MAGM206";
break;
case 162:
return "PIM_MAGM607";
break;
case 164:
return "PIM_MAGM212";
break;
case 166:
return "GB_DPAD_HEAD";
case 167:
return "GB_DPAD_BUY";
case 168:
return "GB_DPAD_SELL";
case 169:
return "GB_DPAD_DEF";
case 170:
return "GB_DPAD_AIR";
case 171:
return "GB_DPAD_CASH";
case 172:
return "GB_DPAD_SAL";
case 173:
return "GB_DPAD_FRA";
case 178:
return "VEX_TITLEa";
case 188:
return "VEX_TITLEb";
case 218:
return "FRT_MODE";
case 217:
return "FRT_TRNS";
case 214:
return "MODE_PLW";
case 215:
return "MODE_FUL";
case 216:
return "MODE_AA";
case 219:
return "MODE_VEL";
case 220:
return "MODE_RMP";
case 221:
return "MODE_STK";
case 225:
return "GR_TITLEL";
case 226:
return "GRS_TITLEL";
case 227:
return "GRD_TITLEL";
case 195:
return "GB_STEAL_T";
case 198:
return "SC_MENU_TITLE";
case 190:
return "GB_DPAD_BSEL";
case 191:
return "GB_DPAD_BDEF";
case 185:
return "GB_DPAD_GFH";
case 197:
return "GB_DPAD_JB";
case 179:
return "CELL_JOUST";
case 200:
return "CAG_BLIP";
case 192:
if(func_518(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_182)){
return "GB_DPAD_BSET";
}
return "GB_DPAD_BBUY";
break;
}
return "";
}

int func_518(int iParam0){
switch (iParam0){
case 15:
case 16:
case 17:
case 18:
case 19:
return 1;
default:
}
return 0;
}


bool func_519(){
return (func_520() && func_66(func_64()));
}


bool func_520(){
return Global_1853988[PLAYER::PLAYER_ID() /*867*/]==148;
}


void func_521(var uParam0, char* sParam1, char* sParam2, int iParam3){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
if(MISC::IS_STRING_NULL_OR_EMPTY(uParam2)){
func_449(uParam1);
}elseif(func_459(PLAYER::PLAYER_ID())==133){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
func_449("");
if(iParam3 !=-1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}


char* func_522(var uParam0){
int iVar0;
iVar0=func_459(PLAYER::PLAYER_ID());
if(func_524()){
if(uParam0->f_103 !=-1){
iVar0=uParam0->f_103;
}}
switch (iVar0){
case 131:
return "";
case 132:
return "FM_AE_SORT_5";
case 133:
switch (func_523()){
case 0:
return "FM_AE_SORT_2";
case 1:
return "FM_AE_SORT_2";
case 2:
return "FM_AE_SORT_3";
case 3:
return "FM_AE_SORT_2";
case 4:
return "FM_AE_SORT_2";
case 5:
return "FM_AE_SORT_2";
case 6:
return "FM_AE_SORT_2";
case 7:
return "FM_AE_SORT_13";
case 8:
return "FM_AE_SORT_4";
case 9:
return "FM_AE_SORT_2";
case 10:
return "FM_AE_SORT_2";
case 11:
return "FM_AE_SORT_2";
case 12:
return "FM_AE_SORT_2";
case 13:
return "FM_AE_SORT_2";
case 14:
return "FM_AE_SORT_5";
case 15:
return "FM_AE_SORT_9";
case 16:
return "FM_AE_SORT_9";
case 17:
return "FM_AE_SORT_9";
case 18:
return "FM_AE_SORT_9";
default:
}
break;
case 136:
return "";
case 138:
return "";
case 139:
return "FM_AE_SORT_10";
case 140:
return "";
case 141:
return "FM_AE_SORT_5";
case 144:
return "FM_AE_SORT_1";
case 129:
return "FM_AE_SORT_9";
}
return "";
}

int func_523(){
if(func_459(PLAYER::PLAYER_ID())==133){
return Global_2794162.f_5152;
}
return -1;
}


bool func_524(){
return Global_1853861;
}


char* func_525(var uParam0){
int iVar0;
iVar0=func_459(PLAYER::PLAYER_ID());
if(func_524()){
if(uParam0->f_103 !=-1){
iVar0=uParam0->f_103;
}}
switch (iVar0){
case 131:
return "PIM_TA9";
case 132:
if(func_527()==0){
return "CPC_TILEL";
}elseif(func_527()==1){
return "CPC_TILELA";
}
return "PIM_TA0";
break;
case 133:
switch (func_523()){
case 0:
return "AMCH_0SLC";
case 1:
return "AMCH_1SLC";
case 2:
return "AMCH_2SLC";
case 3:
return "AMCH_3SLC";
case 4:
return "AMCH_4SLC";
case 5:
return "AMCH_5SLC";
case 6:
return "AMCH_6SLC";
case 7:
return "AMCH_7SLC";
case 8:
return "AMCH_8SLC";
case 9:
return "AMCH_12SLC";
case 10:
return "AMCH_13SLC";
case 11:
return "AMCH_15SLC";
case 12:
return "AMCH_16SLC";
case 13:
return "AMCH_23SLC";
case 14:
return "AMCH_9SLC";
case 15:
return "AMCH_19SLC";
case 16:
return "AMCH_20SLC";
case 17:
return "AMCH_21SLC";
case 18:
return "AMCH_22SLC";
default:
}
break;
case 136:
return "PIM_TA10";
case 138:
return "PIM_TA4";
case 139:
return "PIM_TA5";
case 140:
return "PIM_TA3";
case 141:
return "PIM_TA8";
case 144:
return "PIM_TA2";
case 129:
if(func_526()==1){
return "FM_AE_TITL_12";
}else{
return "PIM_TA7";
}
break;
case 146:
return "PIM_TA6";
}
return "";
}

int func_526(){
return Global_2794162.f_5155;
}

int func_527(){
if(func_459(PLAYER::PLAYER_ID())==132){
return Global_2794162.f_5150;
}
return -1;
}


void func_528(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6){
int iVar0;
int iVar1;
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
if(bParam3){
func_463(uParam1);
}elseif(iParam5 !=-1){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam1);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
func_449(sParam1);
}
if(func_556() && iParam6){
if(func_530()){
iVar0=2;
iVar1=2;
}else{
iVar0=1;
iVar1=2;
}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
func_449(sParam2);
}
if(iParam4 !=-1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
if(func_529(PLAYER::PLAYER_ID())){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
}elseif(func_98()){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
}}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}

int func_529(bool bParam0){
if(func_513(bParam0) || func_512(bParam0)){
return 1;
}
return 0;
}


bool func_530(){
return Global_1836373;
}


struct<4> func_531(int iParam0){
struct<4> Var0;
StringCopy(&Var0, "", 16);
if(func_532(PLAYER::PLAYER_ID()) || func_511(PLAYER::PLAYER_ID())){
return Var0;
}
switch (iParam0){
case 12:
case 13:
case 14:
case 17:
case 15:
case 16:
case 18:
StringCopy(&Var0, "LBD_DIF_", 16);
StringIntConCat(&Var0, Global_4718592.f_1749, 16);
break;
}
if(func_452() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
StringCopy(&Var0, "LBD_DIF_", 16);
StringIntConCat(&Var0, Global_4718592.f_1749, 16);
}
return Var0;
}


bool func_532(bool bParam0){
return Global_2657704[bParam0 /*463*/].f_121==5;
}


char* func_533(int iParam0, char* sParam1, bool bParam2){
var uVar0;
if(iParam0==20 && (!func_452() || MISC::IS_STRING_NULL_OR_EMPTY(uParam1))){
uVar0=func_534();
return uVar0;
}elseif(bParam2){
return "HUD_LBD_IMP";
}elseif(iParam0==25){
if(Global_1836615==0){
Global_1836615=1;
}
return "HUD_LBD_OVR";
}elseif(!MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
if(Global_1836615==1){
Global_1836615=0;
}
return sParam1;
}else{
if(Global_1836615==0){
Global_1836615=1;
}
switch (iParam0){
case 0:
case 31:
case 42:
return "HUD_LBD_DM";
break;
case 1:
return "HUD_LBD_TDM";
break;
case 5:
return "HUD_LBD_GRCE";
break;
case 4:
case 9:
case 10:
case 6:
case 26:
case 11:
return "HUD_LBD_RCE";
break;
case 7:
return "HUD_LBD_BRCE";
break;
case 18:
case 14:
case 17:
case 15:
case 13:
case 12:
case 16:
case 19:
return "HUD_TITLEMC";
break;
case 3:
return "HUD_LBD_HRD";
break;
case 22:
return "HUD_LBD_SHOO";
break;
}}
return sParam1;
}


char* func_534(){
if(NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS()){
return "HUD_LBD_FMF";
}
if(NETWORK::NETWORK_SESSION_IS_CLOSED_CREW()){
return "HUD_LBD_FMC";
}
if(NETWORK::NETWORK_SESSION_IS_SOLO()){
return "HUD_LBD_FMS";
}
if(NETWORK::NETWORK_SESSION_IS_PRIVATE()){
return "HUD_LBD_FMI";
}
return "HUD_LBD_FMP";
}


void func_535(){
Global_44323=1;
}


bool func_536(bool bParam0, var uParam1, bool bParam2){
if(bParam0){
*uParam1=GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_mm_card_freemode");
}elseif(bParam2){
*uParam1=GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_SPECTATOR_CARD");
}else{
*uParam1=GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_matchmaking_card");
}
return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1);
}


void func_537(var uParam0, var uParam1, bool bParam2){
MISC::CLEAR_BIT(&(uParam1->f_33), 7);
Global_1836371=0;
func_441();
Global_1836370=0;
uParam1->f_27=0;
if(bParam2){
if(func_434(&(uParam1->f_19))){
func_442(&(uParam1->f_19));
MISC::CLEAR_BIT(&(Global_2794162.f_4699), 5);
}}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
}
if(MISC::IS_BIT_SET(uParam1->f_33, 0)){
MISC::CLEAR_BIT(&(uParam1->f_33), false);
}
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}

int func_538(){
if(func_554()){
return 0;
}
if(func_553()){
return 0;
}
if(!func_551()){
return 0;
}
if(!func_549()){
return 0;
}
if(func_548(8, -1)){
return 0;
}
if(func_555()==2){
return 0;
}
if(Global_2794162.f_4649){
return 0;
}
if(func_547()){
return 0;
}elseif(!func_544(PLAYER::PLAYER_ID(), 1, 0) && Global_1573860[0 /*4*/] > 0){
return 0;
}
if(((func_543(1) || func_541(1)) || Global_23251.f_124) || Global_23251){
return 0;
}
if(HUD::IS_PAUSE_MENU_ACTIVE()){
return 0;
}
if(func_540() && Global_1970692==2){
return 0;
}
if(func_18(PLAYER::PLAYER_ID()) && !func_540()){
return 0;
}
if(Global_1935879){
return 0;
}
if(Global_1935884){
return 0;
}
if(func_302(0)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 4)){
return 0;
}
if(Global_1648760){
return 0;
}
if((Global_1964804.f_718.f_5 || Global_1967630.f_718.f_5) || Global_1963832.f_718.f_5){
return 0;
}
if((Global_1971696.f_724.f_5 || Global_1971696.f_744.f_724.f_5) || Global_1971696.f_1497.f_724.f_5){
return 0;
}
if(Global_1978495.f_726.f_5){
return 0;
}
if(func_539(PLAYER::PLAYER_ID())){
return 0;
}
if((Global_1648802 || Global_1648803) || Global_1648804){
return 0;
}
return 1;
}

int func_539(bool bParam0){
if(bParam0==func_11()){
return 0;
}
return MISC::IS_BIT_SET(Global_2657704[bParam0 /*463*/].f_321.f_4, 6);
}


bool func_540(){
return (MISC::IS_BIT_SET(Global_4718592.f_30, 12) && MISC::IS_BIT_SET(Global_1970693, 0));
}

int func_541(bool bParam0){
if(PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED()){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_542(PLAYER::PLAYER_PED_ID())){
if(PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68)){
return 0;
}}}}
if(Global_23251.f_130){
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

int func_542(int iParam0){
int iVar0;
if(CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()){
if(!PED::IS_PED_INJURED(iParam0)){
WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
if(((iVar0==joaat("weapon_sniperrifle") || iVar0==joaat("weapon_heavysniper")) || iVar0==joaat("weapon_marksmanrifle")) || iVar0==joaat("weapon_heavysniper_mk2")){
return 1;
}}}
return 0;
}


bool func_543(bool bParam0){
if(bParam0){
return (Global_23251.f_4 && Global_23251.f_104==4);
}
return Global_23251.f_4;
}

int func_544(bool bParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_545(bParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853988[bParam0 /*867*/]==-1){
return 0;
}
return 1;
}


bool func_545(int iParam0){
return func_546(iParam0);
}


var func__546(int iParam0){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_11.f_1, 0);
}


bool func_547(){
return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192 !=0;
}


bool func_548(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}

int func_549(){
if(func_550()==0){
return 1;
}
return 0;
}

int func_550(){
return Global_1574632.f_18;
}

int func_551(){
if(func_552()){
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


bool func_552(){
return Global_1574604;
}


bool func_553(){
return Global_1853988[PLAYER::PLAYER_ID() /*867*/]==5;
}


bool func_554(){
return MISC::GET_GAME_TIMER() <=Global_23390.f_6321 + 100;
}

int func_555(){
return Global_1654054.f_68;
}

int func_556(){
if(Global_1836372 > 16){
return 1;
}
return 0;
}


float func_557(){
float fVar0;
float fVar1;
float fVar2;
fVar2=0.6347182f;
fVar1=(1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
fVar0=(1f - (fVar1 - fVar2));
return fVar0;
}

int func_558(int iParam0){
switch (iParam0){
case 20:
case 21:
case 27:
case 28:
case 40:
return 1;
default:
}
return 0;
}

int func_559(){
if(func_560(PLAYER::PLAYER_ID())){
return Global_1581969;
}
return 0;
}

int func_560(bool bParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_20(bParam0, 0)){
return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(bParam0);
}}
return 0;
}

int func_561(){
if(func_559()){
return 1;
}
if(func_488(PLAYER::PLAYER_ID())){
return 0;
}
if(func_524()){
return 1;
}
if(func_461(PLAYER::PLAYER_ID())){
switch (func_459(PLAYER::PLAYER_ID())){
case 131:
case 132:
case 133:
case 136:
case 138:
case 139:
case 141:
case 144:
case 146:
return 1;
break;
case 140:
if(!func_562(PLAYER::PLAYER_ID())){
return 1;
}
break;
case 129:
if(!func_562(PLAYER::PLAYER_ID())){
return 1;
}
break;
case 174:
if(!func_562(PLAYER::PLAYER_ID())){
return 1;
}
break;
case 175:
return 1;
break;
}}
return 0;
}


bool func_562(bool bParam0){
return MISC::IS_BIT_SET(Global_1895156[bParam0 /*609*/].f_1, 4);
}

int func_563(int iParam0){
if(iParam0==28){
if((func_461(PLAYER::PLAYER_ID()) && !func_213(PLAYER::PLAYER_ID())) && !func_457(PLAYER::PLAYER_ID())){
return 1;
}}
if(iParam0==27){
if(func_34(PLAYER::PLAYER_ID(), 0) && func_213(PLAYER::PLAYER_ID())){
return 1;
}
if(func_564(PLAYER::PLAYER_ID())==3){
return 1;
}}
return 0;
}

int func_564(bool bParam0){
int iVar0;
bool bVar1;
bool bVar2;
var uVar3;
bool bVar4;
iVar0=2;
bVar1=((func_461(bParam0) && !func_490(bParam0)) && !MISC::IS_BIT_SET(Global_1895156[bParam0 /*609*/].f_1, 8));
bVar2=func_213(bParam0);
uVar3=func_27();
bVar4=func_381();
if((bVar1 && (func_458(bParam0) || func_566(bParam0))) || bVar4){
iVar0=0;
}elseif(uVar3 || ((!bVar2 && !func_36(bParam0)) && !func_565(bParam0))){
iVar0=2;
}else{
iVar0=3;
}
if(Global_2794162.f_5231.f_221 !=iVar0){
Global_2794162.f_5231.f_221=iVar0;
}
return iVar0;
}


bool func_565(int iParam0){
return func_37(iParam0, 19);
}

int func_566(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1895156[iVar0 /*609*/].f_1, 0);
}
return 0;
}


void func_567(){
if(func_10(func_38(), 1, 1) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(func_38()), 0)){
func_568(151, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(func_38()), 1), &uLocal_95, 1140457472, 1144750080, 0);
}}


void func_568(int iParam0, struct<3> Param1, var uParam2, float fParam3, float fParam4, int iParam5){
float fVar0;
float fVar1;
if((((func_461(PLAYER::PLAYER_ID()) && !func_490(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 8)) && (func_458(PLAYER::PLAYER_ID()) || func_566(PLAYER::PLAYER_ID()))) || func_611(Param1)){
return;
}
Global_1948431={
Param1 
};
fVar0=vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Param1);
func_607(iParam0, fVar0);
if(HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE()==15){
if(func_36(PLAYER::PLAYER_ID()) || func_35(PLAYER::PLAYER_ID())){
if(!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371)){
HUD::PAUSE_MENU_ACTIVATE_CONTEXT(1344549371);
}}elseif(HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371)){
HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
}}
if(fVar0 < fParam3){
if(!(func_23(PLAYER::PLAYER_ID(), 21) || func_23(PLAYER::PLAYER_ID(), 25))){
func_606(Param1, 1, 0);
}
if(!*uParam2 && func_10(PLAYER::PLAYER_ID(), 1, 1)){
*uParam2=1;
if(func_605(iParam0)){
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_604(iParam0));
if(func_603(iParam0, -1)){
PLAYER::SET_MAX_WANTED_LEVEL(0);
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 1);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 1);
}
MISC::SET_BIT(&(Global_1948431.f_3), false);
}}
if(func_602(iParam0)){
fVar1=func_601(iParam0);
if(fVar1 !=1f){
func_598(fVar1);
MISC::SET_BIT(&(Global_1948431.f_3), true);
}}
if(!Global_4593985){
if(func_597(iParam0) && func_36(PLAYER::PLAYER_ID())){
func_595(1);
func_594(2);
}}
func_382(19);
}}else{
if(fVar0 > fParam4){
if(func_37(PLAYER::PLAYER_ID(), 19)){
func_384(19);
}}
if(*uParam2 && func_10(PLAYER::PLAYER_ID(), 1, 1)){
*uParam2=0;
if(func_605(iParam0)){
if(MISC::IS_BIT_SET(Global_1948431.f_3, 0)){
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
PLAYER::SET_MAX_WANTED_LEVEL(5);
MISC::CLEAR_BIT(&(Global_1948431.f_3), false);
}}
if(func_602(iParam0)){
func_593();
MISC::CLEAR_BIT(&(Global_1948431.f_3), true);
}
if(iParam5 && !func_461(PLAYER::PLAYER_ID())){
if(func_33(PLAYER::PLAYER_ID()) !=152){
func_570();
}}
if(func_302(2)){
func_595(0);
func_569(2);
}}}}


void func_569(bool bParam0){
MISC::CLEAR_BIT(&(Global_2794162.f_5231.f_48), bParam0);
}


void func_570(){
MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_24), &Global_2639951, 2);
MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_26), &Global_2639953, 19);
func_591();
func_573(1, 1, 0);
func_571();
}


void func_571(){
func_572(0, 0);
}


void func_572(int iParam0, int iParam1){
Global_2635560.f_22=iParam0;
Global_2635560.f_23=iParam1;
}


void func_573(bool bParam0, bool bParam1, bool bParam2){
if(bParam1){
MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_45), &Global_2639972, 323);
}else{
Global_2635560.f_45={
Global_2639972 
};
Global_2635560.f_45.f_49={
Global_2639972.f_49 
};
Global_2635560.f_45.f_52=Global_2639972.f_52;
Global_2635560.f_45.f_53=Global_2639972.f_53;
}
if(bParam0){
func_590();
}
if(!bParam2){
func_576(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
}
func_575(0);
func_574();
}


void func_574(){
struct<6> Var0;
if(Global_2635560.f_490.f_1==SCRIPT::GET_ID_OF_THIS_THREAD()){
Global_2635560.f_490={
Var0 
};
}}


void func_575(bool bParam0){
if(bParam0){
Global_2635560.f_713=0;
}else{
Global_2635560.f_713=1;
}}


void func_576(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14){
if(bParam0){
if(func_589()){
func_588();
}
Global_2635560.f_714.f_568=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_2635560.f_714.f_554=iParam1;
Global_2635560.f_714.f_555=iParam2;
Global_2635560.f_714.f_556=iParam10;
func_586();
func_580(8, 0, 0, 0, 0);
Global_2635560.f_714.f_557=iParam11;
Global_2635560.f_714.f_562=iParam3;
Global_2635560.f_714.f_563=iParam4;
Global_2635560.f_714.f_560=iParam5;
Global_2635560.f_714.f_561=iParam6;
Global_2635560.f_714.f_564=iParam7;
Global_2635560.f_714.f_565=iParam8;
Global_2635560.f_714.f_566=iParam9;
Global_2635560.f_714.f_567=iParam14;
Global_2635560.f_714.f_558=iParam12;
Global_2635560.f_714.f_559=iParam13;
Global_2635560.f_1853=1;
}else{
func_577();
}}


void func_577(){
if(func_589() && !func_579()){
func_588();
}
if(func_579()){
func_578();
}else{
func_586();
func_580(0, 0, 0, 0, 0);
Global_2635560.f_1853=0;
Global_2635560.f_1852=0;
}}


void func_578(){
MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_714), &(Global_2635560.f_1283), 569);
Global_2635560.f_490={
Global_2635560.f_496 
};
if(SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635560.f_714.f_568){
Global_2635560.f_1852=0;
}}

int func_579(){
if((Global_2635560.f_1852 && !SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635560.f_1283.f_568) && SCRIPT::IS_THREAD_ACTIVE(Global_2635560.f_1283.f_568)){
return 1;
}
return 0;
}


void func_580(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
if(Global_2672524.f_1685.f_703.f_16 !=func_11()){
if(MISC::IS_BIT_SET(Global_2657704[Global_2672524.f_1685.f_703.f_16 /*463*/].f_424, 0) && func_581()){
iParam0=23;
}}
if(iParam0 !=18 && iParam0 !=17){
Global_2643396=0;
}
Global_2635560.f_490=iParam0;
Global_2635560.f_490.f_1=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_2635560.f_490.f_2=iParam1;
Global_2635560.f_490.f_3=iParam2;
Global_2635560.f_490.f_4=iParam3;
Global_2635560.f_490.f_5=iParam4;
}

int func_581(){
if((((((func_33(PLAYER::PLAYER_ID())==229 || func_33(PLAYER::PLAYER_ID())==191) || func_585()) || func_584()) || func_583()) || Global_2765084.f_227==1) || (Global_2635560.f_1853 && func_582(PLAYER::PLAYER_ID()))){
return 0;
}
return 1;
}

int func_582(int iParam0){
if(func_458(iParam0)){
return 1;
}
if(func_213(iParam0)){
return 1;
}
return 0;
}


var func__583(){
return Global_2765083;
}


var func__584(){
return Global_1836594;
}

int func_585(){
if(Global_4718592==6){
return 1;
}
return 0;
}


void func_586(){
if(func_589() && !func_579()){
func_588();
}
func_587();
Global_2635560.f_714=0;
Global_2635560.f_714.f_502=0;
}


void func_587(){
int iVar0;
struct<5> Var1;
struct<3> Var2;
Var1.f_4=1065353216;
iVar0=0;
while (iVar0 < 100){
Global_2635560.f_714.f_1[iVar0 /*5*/]={
Var1 
};
iVar0++;
}
Var2=-1;
Var2.f_2=-3;
iVar0=0;
while (iVar0 < 16){
Global_2635560.f_714.f_503[iVar0 /*3*/]={
Var2 
};
iVar0++;
}}


void func_588(){
if(func_579()){
if(Global_2635560.f_714.f_568==Global_2635560.f_1283.f_568){
return;
}}
if(!SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635560.f_714.f_568){
MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_1283), &(Global_2635560.f_714), 569);
Global_2635560.f_496={
Global_2635560.f_490 
};
Global_2635560.f_1852=1;
}}

int func_589(){
if((Global_2635560.f_1853 && !SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635560.f_714.f_568) && SCRIPT::IS_THREAD_ACTIVE(Global_2635560.f_714.f_568)){
return 1;
}
return 0;
}


void func_590(){
MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_368), &Global_2640295, 121);
}


void func_591(){
func_592();
}


void func_592(){
int iVar0;
struct<4> Var1;
iVar0=0;
while (iVar0 < 50){
Global_2635560.f_2363[iVar0 /*4*/]={
Var1 
};
iVar0++;
}
Global_2635560.f_2362=0;
}


void func_593(){
if(SCRIPT::IS_THREAD_ACTIVE(Global_2794162.f_5227)){
if(!Global_2794162.f_5227==SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2794162.f_5226 < 1f){
return;
}}
Global_2794162.f_5227=-1;
Global_2794162.f_5226=1f;
}


void func_594(bool bParam0){
MISC::SET_BIT(&(Global_2794162.f_5231.f_48), iParam0);
}


void func_595(int iParam0){
if(func_596() && iParam0){
return;
}
if(iParam0==Global_4593985){
return;
}
Global_4593985=iParam0;
Global_4593987=0;
Global_4593988=0;
}

int func_596(){
if((((Global_1057409 !=-1 && Global_1057409 !=33) && Global_1057409 !=35) && Global_1057409 !=37) && Global_1057409 !=21){
return 1;
}
return 0;
}

int func_597(int iParam0){
switch (iParam0){
case 142:
case 159:
case 148:
case 157:
case 166:
case 179:
case 189:
case 193:
case 198:
case 205:
return 1;
default:
}
return 0;
}


void func_598(float fParam0){
float fVar0;
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME())==func_599()){
return;
}
fVar0=(Global_2794162.f_5226 - fParam0);
if(SCRIPT::IS_THREAD_ACTIVE(Global_2794162.f_5227)){
if(!Global_2794162.f_5227==SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f){
return;
}}
Global_2794162.f_5226=fParam0;
Global_2794162.f_5227=SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_599(){
switch (func_17()){
case 0:
return func_600();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_600(){
switch (Global_2697098){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}


float func_601(int iParam0){
switch (iParam0){
case 142:
case 157:
case 159:
case 151:
case 148:
case 164:
case 152:
case 153:
case 154:
case 155:
case 160:
case 162:
case 166:
case 173:
case 169:
case 167:
case 168:
case 170:
case 178:
case 179:
case 189:
case 180:
case 182:
case 183:
case 190:
case 191:
case 192:
case 193:
case 194:
case 199:
case 201:
case 185:
case 197:
case 186:
case 198:
case 195:
case 205:
case 207:
case 208:
case 209:
case 216:
case 218:
case 215:
case 214:
case 220:
case 221:
case 217:
case 219:
case 225:
case 226:
case 227:
case 229:
case 230:
case 233:
case 237:
case 238:
case 239:
case 240:
case 241:
case 242:
case 244:
case 248:
case 249:
case 250:
case 243:
case 158:
case 181:
case 256:
case 258:
return 0f;
default:
}
if(func_374(iParam0)==0){
return 0f;
}
return 1f;
}

int func_602(int iParam0){
switch (iParam0){
case 152:
case 164:
case 151:
case 170:
case 169:
case 201:
case 191:
case 198:
case 180:
case 200:
case 208:
case 216:
case 218:
case 215:
case 214:
case 220:
case 221:
case 217:
case 219:
case 227:
case 237:
case 238:
case 239:
case 240:
case 241:
case 242:
case 244:
case 248:
case 249:
case 250:
return 1;
default:
}
return 0;
}

int func_603(int iParam0, int iParam1){
switch (iParam0){
case 148:
case 164:
case 152:
case 153:
case 160:
return 1;
case 168:
if((iParam1 !=2 && iParam1 !=10) && iParam1 !=7){
return 1;
}
break;
case 170:
case 166:
case 173:
return 1;
case 179:
case 183:
case 181:
case 189:
case 191:
case 192:
case 193:
case 194:
case 186:
case 199:
case 185:
case 201:
case 198:
case 195:
case 180:
case 207:
case 208:
case 209:
case 210:
case 214:
case 217:
case 218:
case 215:
case 216:
case 219:
case 220:
case 221:
case 237:
case 238:
case 239:
case 240:
case 241:
case 242:
case 244:
case 248:
case 249:
case 250:
case 227:
return 1;
case 190:
if(((iParam1 !=6 && iParam1 !=9) && iParam1 !=7) && iParam1 !=1){
return 1;
}
break;
}
return 0;
}


float func_604(int iParam0){
switch (iParam0){
case 131:
case 138:
case 140:
case 139:
case 141:
case 146:
case 216:
case 218:
case 215:
case 214:
case 220:
case 221:
case 217:
case 219:
case 237:
case 238:
case 239:
case 240:
case 241:
case 242:
case 244:
case 248:
case 249:
case 250:
return 0f;
case 144:
return 0f;
case 185:
return 0f;
default:
}
return 1f;
}

int func_605(int iParam0){
switch (iParam0){
case 152:
case 142:
case 164:
case 151:
case 160:
case 166:
case 173:
case 183:
case 185:
case 197:
case 186:
case 201:
case 191:
case 198:
case 207:
case 208:
case 209:
case 200:
case 195:
case 180:
case 216:
case 218:
case 215:
case 214:
case 220:
case 221:
case 217:
case 219:
case 227:
case 237:
case 238:
case 239:
case 240:
case 241:
case 242:
case 244:
case 248:
case 249:
case 250:
return 1;
default:
}
return 0;
}


void func_606(struct<3> Param0, int iParam1, int iParam2){
Global_2635560.f_45.f_49={
Param0 
};
Global_2635560.f_45.f_52=iParam1;
Global_2635560.f_45.f_53=iParam2;
}


void func_607(int iParam0, float fParam1){
int iVar0;
iVar0=func_610(iParam0);
if(iVar0==-1){
return;
}
if(fParam1 < IntToFloat(iVar0)){
func_608();
}}


void func_608(){
if(!func_609(PLAYER::PLAYER_ID())){
func_382(25);
}}


bool func_609(int iParam0){
return func_37(iParam0, 25);
}

int func_610(int iParam0){
switch (iParam0){
case 152:
return Global_262145.f_13170;
case 142:
return Global_262145.f_13158;
case 157:
return Global_262145.f_13125;
case 159:
return Global_262145.f_13108;
case 162:
return Global_262145.f_13219;
case 173:
return 100;
case 170:
return 100;
default:
}
return -1;
}

int func_611(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


void func_612(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1)){
iVar1=SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
switch (iVar1){
case 186:
func_613(iVar0);
break;
}
iVar0++;
}}


void func_613(int iParam0){
struct<6> Var0;
if(SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13)){
if((ENTITY::DOES_ENTITY_EXIST(Var0.f_0) && ENTITY::IS_ENTITY_A_PED(Var0.f_0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0)==PLAYER::GET_PLAYER_PED(func_38())){
if(Var0.f_5){
if(ENTITY::DOES_ENTITY_EXIST(Var0.f_1) && ENTITY::IS_ENTITY_A_PED(Var0.f_1)){
if(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)==PLAYER::PLAYER_PED_ID()){
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), true);
}}}}}}


void func_614(){
if(!MISC::IS_BIT_SET(uLocal_94, 3)){
if(func_10(func_38(), 1, 1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_38())){
func_634(func_38(), func_635(6), 1, 0);
func_632(func_38(), 432, 1, 0);
func_630(func_38(), 1, 1, 0);
func_629(func_38(), Global_262145.f_13003, 1, 0);
func_626(func_38(), 1, 0);
if(func_43() <=1){
func_615(func_38(), 1, 7000);
}
MISC::SET_BIT(&uLocal_94, 3);
}}}


void func_615(bool bParam0, bool bParam1, int iParam2){
bool bVar0;
if(bParam0==func_11()){
return;
}
if(iParam2 > 200000){
iParam2=200000;
}
bVar0=bParam0;
if(bParam1){
if(bParam0==Global_2672524){
}elseif(HUD::DOES_BLIP_EXIST(Global_2646835[bVar0])){
MISC::SET_BIT(&(Global_2646835.f_370), bVar0);
MISC::CLEAR_BIT(&(Global_2646835.f_375), bVar0);
HUD::SET_BLIP_FLASHES(Global_2646835[bVar0], 1);
HUD::SET_BLIP_FLASH_INTERVAL(Global_2646835[bVar0], 250);
func_616(bParam0);
if(iParam2 < 0){
MISC::SET_BIT(&(Global_2646835.f_375), bVar0);
}else{
Global_2646835.f_201[bVar0]=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
}}else{
MISC::SET_BIT(&(Global_2646835.f_370), bVar0);
MISC::CLEAR_BIT(&(Global_2646835.f_375), bVar0);
if(iParam2 < 0){
MISC::SET_BIT(&(Global_2646835.f_375), bVar0);
}else{
Global_2646835.f_201[bVar0]=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
}}}
if(!bParam1){
MISC::CLEAR_BIT(&(Global_2646835.f_370), bVar0);
MISC::CLEAR_BIT(&(Global_2646835.f_375), bVar0);
if(HUD::DOES_BLIP_EXIST(Global_2646835[bVar0])){
func_616(bParam0);
HUD::SET_BLIP_FLASHES(Global_2646835[bVar0], 0);
}}}


void func_616(bool bParam0){
int iVar0;
iVar0=bParam0;
if(func_10(bParam0, 0, 1)){
if(HUD::DOES_BLIP_EXIST(Global_2646835[iVar0])){
Global_2646835.f_1504[iVar0]=func_617(bParam0);
HUD::SET_BLIP_PRIORITY(Global_2646835[iVar0], Global_2646835.f_1504[iVar0]);
}}}

int func_617(bool bParam0){
int iVar0;
int iVar1;
iVar0=bParam0;
if(func_10(bParam0, 0, 1)){
if(HUD::DOES_BLIP_EXIST(Global_2646835[iVar0])){
iVar1=HUD::GET_BLIP_SPRITE(Global_2646835[iVar0]);
if(MISC::IS_BIT_SET(Global_2646835.f_386, iVar0) || MISC::IS_BIT_SET(Global_2646835.f_385, iVar0)){
return 1;
}elseif((MISC::IS_BIT_SET(Global_2646835.f_371, iVar0) || MISC::IS_BIT_SET(Global_2646835.f_370, iVar0)) || MISC::IS_BIT_SET(Global_2646835.f_388, iVar0)){
return func_623(10);
}else{
switch (iVar1){
case 253:
case 252:
case 255:
return func_623(7);
break;
case 257:
case 258:
case 259:
case 260:
case 261:
return func_623(11);
break;
case 254:
if(PLAYER::GET_PLAYER_TEAM(bParam0)==PLAYER::GET_PLAYER_TEAM(Global_2672524)){
return func_623(6);
}
else{
return func_623(5);
}
break;
case 271:
if(PLAYER::GET_PLAYER_TEAM(bParam0)==PLAYER::GET_PLAYER_TEAM(Global_2672524)){
return func_623(6);
}
else{
return func_623(5);
}
break;
case 163:
case 164:
if(func_84(Global_2672524, bParam0, -2, 0)){
return func_623(6);
}
else{
return func_623(5);
}
break;
case 303:
case 418:
return func_623(10);
break;
case 364:
if(func_621(Global_2672524, bParam0, 1)){
return func_623(10);
}
else{
return func_623(5);
}
break;
case 478:
case 501:
case 523:
case 556:
return func_623(10);
break;
case 417:
if((func_620(bParam0) || func_619(bParam0)) || func_618(bParam0)){
if(func_621(Global_2672524, bParam0, 1)){
return 3;
}else{
return 4;
}
}
elseif(func_621(Global_2672524, bParam0, 1)){
return func_623(6);
}
else{
return func_623(5);
}
break;
case 256:
case 268:
default:
if(func_621(Global_2672524, bParam0, 1)){
return func_623(6);
}
else{
return func_623(5);
}
break;
}}}}
return 1;
}

int func_618(bool bParam0){
if(bParam0 !=func_11()){
if(func_10(bParam0, 1, 1)){
if(Global_2657704[bParam0 /*463*/].f_321.f_7 !=-1){
return func_59(Global_2657704[bParam0 /*463*/].f_321.f_7)==16;
}}}
return 0;
}

int func_619(bool bParam0){
if(bParam0 !=func_11()){
if(func_10(bParam0, 1, 1)){
if(Global_2657704[bParam0 /*463*/].f_321.f_7 !=-1){
return func_59(Global_2657704[bParam0 /*463*/].f_321.f_7)==15;
}}}
return 0;
}

int func_620(bool bParam0){
if(bParam0 !=func_11()){
if(func_10(bParam0, 1, 1)){
if(Global_2657704[bParam0 /*463*/].f_321.f_7 !=-1){
return func_59(Global_2657704[bParam0 /*463*/].f_321.f_7)==14;
}}}
return 0;
}

int func_621(int iParam0, bool bParam1, bool bParam2){
if(func_67(iParam0, -2, 0, 0, 0)==func_67(bParam1, -2, 0, 0, 0)){
return 1;
}
if(bParam2){
if(func_622(func_67(iParam0, -2, 0, 0, 0)) && func_622(func_67(bParam1, -2, 0, 0, 0))){
return 1;
}}
return 0;
}

int func_622(int iParam0){
if(iParam0==func_73(1) || iParam0==func_73(0)){
return 1;
}
return 0;
}

int func_623(int iParam0){
switch (iParam0){
case 5:
case 6:
if(func_625()){
if(iParam0==5){
iParam0=6;
}else{
iParam0=5;
}}
break;
}
return func_624(iParam0);
}

int func_624(int iParam0){
switch (iParam0){
case 10:
return 9;
break;
case 5:
return 8;
break;
case 6:
return 7;
break;
case 8:
return 6;
break;
case 7:
return 4;
break;
case 4:
case 11:
return 2;
break;
case 0:
case 2:
case 3:
case 9:
case 1:
return 1;
break;
}
return 1;
}

int func_625(){
int iVar0;
iVar0=PLAYER::GET_PLAYER_TEAM(Global_2672524);
if(iVar0 > -1 && iVar0 < 4){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iVar0 /*24279*/].f_13040, 4);
}
return 0;
}


void func_626(bool bParam0, bool bParam1, bool bParam2){
var uVar0;
if(func_628(bParam0)){
return;
}
func_627(&(Global_2646835.f_723[bParam0]), &(Global_2646835.f_1086[bParam0]), &(Global_2646835.f_393), bParam1, bParam0, bParam2, &uVar0);
}

int func_627(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6){
if(bParam5){
if(!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1==SCRIPT::GET_ID_OF_THIS_THREAD()){
*uParam1=SCRIPT::GET_ID_OF_THIS_THREAD();
*uParam0=SCRIPT::GET_ID_OF_THIS_THREAD();
}}
if(!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0==SCRIPT::GET_ID_OF_THIS_THREAD()){
if(bParam3){
if(!MISC::IS_BIT_SET(*uParam2, bParam4)){
*uParam6=1;
MISC::SET_BIT(uParam2, bParam4);
}
*uParam0=SCRIPT::GET_ID_OF_THIS_THREAD();
}else{
if(MISC::IS_BIT_SET(*uParam2, bParam4)){
*uParam6=1;
MISC::CLEAR_BIT(uParam2, bParam4);
}
if(*uParam1==SCRIPT::GET_ID_OF_THIS_THREAD()){
*uParam1=-1;
}
*uParam0=-1;
}
return 1;
}elseif(SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1==SCRIPT::GET_ID_OF_THIS_THREAD()){}
return 0;
}

int func_628(int iParam0){
if(iParam0==func_11()){
return 1;
}
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME())==func_599()){
return 1;
}
return 0;
}


void func_629(bool bParam0, float fParam1, bool bParam2, bool bParam3){
var uVar0;
if(func_628(bParam0)){
return;
}
if(func_627(&(Global_2646835.f_756[bParam0]), &(Global_2646835.f_1119[bParam0]), &(Global_2646835.f_392), bParam2, bParam0, bParam3, &uVar0)){
if(bParam2){
Global_2646835.f_558[bParam0]=fParam1;
}}}


void func_630(bool bParam0, bool bParam1, bool bParam2, bool bParam3){
var uVar0;
if(func_628(bParam0)){
return;
}
if(func_627(&(Global_2646835.f_822[bParam0]), &(Global_2646835.f_1185[bParam0]), &(Global_2646835.f_367), bParam1, bParam0, bParam3, &uVar0)){
func_631(bParam0, bParam2);
}}


void func_631(bool bParam0, bool bParam1){
if(bParam1){
MISC::SET_BIT(&(Global_2646835.f_368), bParam0);
}else{
MISC::CLEAR_BIT(&(Global_2646835.f_368), bParam0);
}
if(HUD::DOES_BLIP_EXIST(Global_2646835[bParam0])){
if(bParam1){
HUD::SET_BLIP_AS_SHORT_RANGE(Global_2646835[bParam0], 0);
}else{
HUD::SET_BLIP_AS_SHORT_RANGE(Global_2646835[bParam0], 1);
}}}


void func_632(bool bParam0, int iParam1, bool bParam2, bool bParam3){
bool bVar0;
if(func_628(bParam0)){
return;
}
if(func_627(&(Global_2646835.f_591[bParam0]), &(Global_2646835.f_954[bParam0]), &(Global_2646835.f_388), bParam2, bParam0, bParam3, &bVar0)){
if(bParam2){
Global_2646835.f_426[bParam0]=iParam1;
}
if(bVar0){
func_633();
}}}


void func_633(){
Global_2646835.f_1655=1;
}


void func_634(bool bParam0, var uParam1, bool bParam2, bool bParam3){
var uVar0;
if(func_628(bParam0)){
return;
}
if(func_627(&(Global_2646835.f_624[bParam0]), &(Global_2646835.f_987[bParam0]), &(Global_2646835.f_389), bParam2, bParam0, bParam3, &uVar0)){
if(bParam2){
Global_2646835.f_459[bParam0]=uParam1;
}}}

int func_635(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
switch (iParam0){
case 1:
return 4;
case 0:
return 4;
case 6:
return 59;
case 18:
return 2;
case 13:
return 5;
case 116:
return 38;
case 28:
return 6;
case 29:
return 7;
case 30:
return 8;
case 31:
return 9;
case 32:
return 10;
case 33:
return 11;
case 34:
return 12;
case 35:
return 13;
case 36:
return 14;
case 37:
return 15;
case 38:
return 16;
case 39:
return 17;
case 40:
return 18;
case 41:
return 19;
case 42:
return 20;
case 43:
return 21;
case 44:
return 22;
case 45:
return 23;
case 46:
return 24;
case 47:
return 25;
case 48:
return 26;
case 49:
return 27;
case 50:
return 28;
case 51:
return 29;
case 52:
return 30;
case 53:
return 31;
case 54:
return 32;
case 55:
return 33;
case 56:
return 34;
case 57:
return 35;
case 58:
return 36;
case 59:
return 37;
case 9:
return 57;
case 10:
return 53;
case 118:
return 57;
case 14:
return 56;
case 3:
return 55;
case 21:
return 50;
case 15:
return 51;
case 20:
return 52;
case 11:
return 54;
case 23:
return 58;
case 12:
return 60;
case 24:
return 61;
case 4:
return 62;
default:
}
HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
return 0;
}


void func_636(){
char* sVar0;
if(func_428()){
if(func_427()){
func_420();
}
return;
}
sVar0="GBTER_KILL";
if(func_6(PLAYER::PLAYER_ID(), 1)){
sVar0="GBTER_B_KILL";
if(Local_96.f_10){
sVar0="GBTER_AB_KILL";
}}
if(!func_643(sVar0)){
func_637(sVar0, func_38(), 1, 0);
}}


void func_637(char* sParam0, bool bParam1, int iParam2, bool bParam3){
func_638(sParam0, PLAYER::GET_PLAYER_NAME(bParam1), bParam3, 1);
}

int func_638(char* sParam0, char* sParam1, bool bParam2, int iParam3){
var uVar0;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
return 0;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 63){
return 0;
}
if(func_642(sParam0, sParam1) && Global_1574757.f_56==Global_1574757.f_58){
return 0;
}
uVar0=Global_1574757.f_54;
func_421();
Global_1574757=9;
StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
Global_1574757.f_9=MISC::GET_HASH_KEY(&(Global_1574757.f_1));
StringCopy(&(Global_1574757.f_12), sParam0, 16);
StringCopy(&(Global_1574757.f_16), sParam1, 64);
Global_1574757.f_58=iParam3;
Global_1574757.f_56=iParam3;
Global_1574757.f_54=uVar0;
func_641();
func_640(bParam2);
func_639();
return 1;
}


void func_639(){
MISC::SET_BIT(&(Global_1574757.f_59), true);
}


void func_640(bool bParam0){
if(bParam0){
MISC::SET_BIT(&(Global_1574757.f_59), false);
return;
}
MISC::CLEAR_BIT(&(Global_1574757.f_59), false);
}


void func_641(){
Global_1574757.f_10=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
Global_1574757.f_11=NETWORK::GET_NETWORK_TIME();
}


bool func_642(char* sParam0, char* sParam1){
if(!func_426()){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(uParam0)){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(uParam1)){
return 0;
}
if(!MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_12))){
return 0;
}
return MISC::GET_HASH_KEY(sParam1)==MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}

int func_643(char* sParam0){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
if(!func_426()){
return 0;
}
if(Global_1574757==11){
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63){
return 0;
}}elseif(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23){
return 0;
}
return func_644(sParam0);
}


bool func_644(char* sParam0){
if(!func_426()){
return 0;
}
if(Global_1574757==11){
return func_645(uParam0);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(uParam0)){
return 0;
}
return MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_12));
}


bool func_645(char* sParam0){
if(!func_426()){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(uParam0)){
return 0;
}
return MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}


void func_646(){
int iVar0;
int iVar1;
char* sVar2;
if(func_428()){
return;
}
if(MISC::IS_BIT_SET(Local_96.f_1, 0)){
if(func_434(&(Local_96.f_4))){
iVar1=(func_5() - func_651(&(Local_96.f_4), 0, 0));
if(iVar1 > 30000){
iVar0=1;
}else{
iVar0=6;
}
iVar1=func_650(iVar1, 0);
sVar2="GB_WORK_END";
if(func_6(PLAYER::PLAYER_ID(), 1)){
sVar2="BK_TIME";
}
if(iVar1 > 0){
func_647(iVar1, sVar2, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}else{
func_647(0, sVar2, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}}}}


void func_647(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17){
bool bVar0;
int iVar1;
bVar0=-1;
iVar1=0;
while (iVar1 <=9){
if(bVar0==-1){
if(func_649(7, iVar1)==0){
bVar0=iVar1;
}}
iVar1++;
}
if(bVar0 > -1){
Global_1655612.f_1=1;
func_648(7, bVar0);
Global_1655612.f_4659[bVar0]=iParam0;
StringCopy(&(Global_1655612.f_4659.f_11[bVar0 /*16*/]), sParam1, 64);
Global_1655612.f_4659.f_172[bVar0]=iParam2;
Global_1655612.f_4659.f_216[bVar0]=iParam3;
Global_1655612.f_4659.f_183[bVar0]=iParam4;
Global_1655612.f_4659.f_194[bVar0]=iParam5;
Global_1655612.f_4659.f_249[bVar0]=iParam6;
Global_1655612.f_4659.f_260[bVar0]=iParam7;
Global_1655612.f_4659.f_205[bVar0]=iParam8;
Global_1655612.f_4659.f_314[bVar0]=iParam9;
Global_1655612.f_4659.f_325[bVar0]=iParam10;
Global_1655612.f_4659.f_357[bVar0]=iParam11;
Global_1655612.f_4659.f_238[bVar0]=iParam12;
Global_1655612.f_4659.f_271[bVar0]=iParam13;
Global_1655612.f_4659.f_368[bVar0]=iParam14;
Global_1655612.f_4659.f_379[bVar0]=iParam15;
Global_1655612.f_4659.f_390[bVar0]=iParam16;
Global_1655612.f_4659.f_227[bVar0]=iParam17;
}}


void func_648(int iParam0, bool bParam1){
MISC::SET_BIT(&(Global_1655612.f_7009[iParam0]), bParam1);
}

int func_649(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1655612.f_7009[iParam0], iParam1);
}

int func_650(int iParam0, int iParam1){
if(iParam0 > iParam1){
return iParam0;
}
return iParam1;
}

int func_651(var uParam0, bool bParam1, bool bParam2){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
}else{
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
}}
return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}


void func_652(){
char* sVar0;
char* sVar1;
char* sVar2;
char* sVar3;
char* sVar4;
char* sVar5;
if(func_428()){
return;
}
if(PLAYER::PLAYER_ID() !=func_64()){
if(MISC::IS_BIT_SET(uLocal_94, 0)){
if(!func_419()){
sVar0="GBTER_START";
if(func_6(PLAYER::PLAYER_ID(), 1)){
sVar0="GBTER_BSTART";
if(Local_96.f_10){
sVar0="GBTER_AB_START";
}}
func_654(sVar0, PLAYER::GET_PLAYER_NAME(func_38()), 0, -1);
func_653(1);
MISC::SET_BIT(&uLocal_94, 2);
}}else{
sVar1="GBTER_BIG";
sVar2="GBTER_BIG_GS";
if(func_6(PLAYER::PLAYER_ID(), 1)){
sVar1="GBTER_B_BIG";
sVar2="GBTER_B_SS";
if(Local_96.f_10){
sVar1="GBTER_B_BIG";
sVar2="GBTER_AB_SS";
}}
func_418();
func_411(86, func_38(), -1, sVar2, sVar1, 1, -1, 2, 0);
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), false);
}}elseif(MISC::IS_BIT_SET(uLocal_94, 0)){
if(!func_419()){
sVar3="GBTER_BOSS";
if(func_6(PLAYER::PLAYER_ID(), 1)){
sVar3="GBTER_BBOSS";
if(Local_96.f_10){
sVar3="GBTER_AB_BOSS";
}}
func_654(sVar3, PLAYER::GET_PLAYER_NAME(func_38()), 0, -1);
MISC::SET_BIT(&uLocal_94, 2);
func_653(1);
}}else{
sVar4="GBTER_BIG";
sVar5="GBTER_BIG_GS";
if(func_6(PLAYER::PLAYER_ID(), 1)){
sVar4="GBTER_B_BIG";
sVar5="GBTER_B_BSS";
if(Local_96.f_10){
sVar4="GBTER_B_BIG";
sVar5="GBTER_AB_SS";
}}
func_418();
func_411(86, func_38(), -1, sVar5, sVar4, 1, -1, 2, 0);
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), false);
}
MISC::SET_BIT(&uLocal_94, false);
}


void func_653(int iParam0){
char* sVar0;
sVar0="GTAO_Boss_Goons_FM_Soundset";
if(func_227(1)){
sVar0="GTAO_Biker_FM_Soundset";
}
if(iParam0 && !func_419()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, 0);
}}


void func_654(char* sParam0, var uParam1, int iParam2, int iParam3){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
if(!iParam2==0){
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
}
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam1);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam3);
}


void func_655(int iParam0){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2=iParam0;
}


void func_656(bool bParam0){
if(bParam0){
if(!func_37(PLAYER::PLAYER_ID(), 9)){
if(func_564(PLAYER::PLAYER_ID()) !=0){
func_382(9);
}}}elseif(func_37(PLAYER::PLAYER_ID(), 9)){
func_384(9);
}}


void func_657(int iParam0, bool bParam1, int iParam2, int iParam3){
float fVar0;
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_33 !=iParam0){
func_671(-1);
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_33=iParam0;
if(func_670() !=-1){
func_669(-1);
}
if(func_668() !=-1){
func_667(-1);
}
func_666(iParam2);
func_664(iParam0);
if(!func_602(iParam0)){
fVar0=func_601(iParam0);
if(fVar0 !=1f){
func_598(fVar0);
MISC::SET_BIT(&(Global_1948431.f_3), true);
}}
if(!func_605(iParam0) || iParam3){
if(func_603(iParam0, iParam2) && iParam3==1){
PLAYER::SET_MAX_WANTED_LEVEL(0);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
}
MISC::SET_BIT(&(Global_1948431.f_3), false);
}elseif(PLAYER::GET_MAX_WANTED_LEVEL() < 5){
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
PLAYER::SET_MAX_WANTED_LEVEL(5);
}}
if(func_27()){
func_382(27);
}
if(bParam1){
if(!func_381()){
func_595(1);
}}
if((((((iParam0==159 || iParam0==157) || iParam0==153) || iParam0==154) || iParam0==164) || iParam0==155) || iParam0==171){
if((MISC::IS_BIT_SET(Global_2794162.f_4661, 1) || MISC::IS_BIT_SET(Global_2794162.f_4661, 4)) || MISC::IS_BIT_SET(Global_2794162.f_4661, 0)){
func_107(6);
}
func_663();
}
if(((iParam0==164 || iParam0==208) || iParam0==250) || iParam0==237){
MISC::ENABLE_DISPATCH_SERVICE(3, 0);
MISC::ENABLE_DISPATCH_SERVICE(5, 0);
}
if(func_461(PLAYER::PLAYER_ID()) && func_36(PLAYER::PLAYER_ID())){
MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 8);
}
func_659();
if(func_658(iParam0)){
MISC::ENABLE_DISPATCH_SERVICE(3, 0);
MISC::ENABLE_DISPATCH_SERVICE(5, 0);
MISC::SET_BIT(&(Global_1948431.f_3), 6);
}
Global_2794162.f_6873=0;
}}

int func_658(int iParam0){
switch (iParam0){
case 216:
case 218:
case 215:
case 120:
case 214:
case 220:
case 221:
case 217:
case 219:
return 1;
default:
}
return 0;
}


void func_659(){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
uVar3=func_662();
iVar2=func_28(PLAYER::PLAYER_ID());
iVar0=0;
while (iVar0 < 32){
iVar1=PLAYER::INT_TO_PLAYERINDEX(iVar0);
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1)){
if(func_49(bVar1, iVar2, 1) || func_660(bVar1, PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(PLAYER::PLAYER_ID(), bVar1, uVar3);
PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(bVar1, PLAYER::PLAYER_ID(), uVar3);
}}
iVar0++;
}}

int func_660(int iParam0, int iParam1){
if(func_29(iParam0, 1) && func_29(iParam1, 1)){
return (func_661(iParam0)==func_28(iParam1) || func_661(iParam1)==func_28(iParam0));
}
return 0;
}

int func_661(int iParam0){
if(func_29(iParam0, 1)){
return Global_1895156[func_28(iParam0) /*609*/].f_10.f_463;
}
return func_11();
}

int func_662(){
int iVar0;
int iVar1;
iVar0=func_12();
if(iVar0 !=func_11()){
if(func_10(iVar0, 0, 1)){
iVar1=iVar0;
if(iVar1 !=-1){
return MISC::IS_BIT_SET(Global_1895156[iVar1 /*609*/].f_1, 16);
}}}
return 0;
}


void func_663(){
if(MISC::IS_BIT_SET(Global_2794162.f_4661, 1)){
MISC::CLEAR_BIT(&(Global_2794162.f_4661), true);
}
if(MISC::IS_BIT_SET(Global_2794162.f_4661, 4)){
MISC::CLEAR_BIT(&(Global_2794162.f_4661), 4);
}
if(MISC::IS_BIT_SET(Global_2794162.f_4661, 6)){
MISC::CLEAR_BIT(&(Global_2794162.f_4661), 6);
}
MISC::CLEAR_BIT(&(Global_2794162.f_4661), false);
MISC::CLEAR_BIT(&(Global_2794162.f_4661), 2);
MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863), 17);
if(Global_2794162.f_4663 > 0){
PLAYER::SET_MAX_WANTED_LEVEL(Global_2794162.f_4663);
}
Global_2794162.f_4662=0;
}


void func_664(int iParam0){
int iVar0;
bool bVar1;
iVar0=func_132(3794, -1);
bVar1=func_665(iParam0);
if(bVar1 !=-1){
MISC::SET_BIT(&iVar0, bVar1);
func_209(3794, iVar0, -1, 1);
}}

int func_665(int iParam0){
switch (iParam0){
case 170:
return 0;
case 166:
return 1;
case 171:
return 2;
case 172:
return 3;
case 173:
return 4;
case 214:
return 5;
case 215:
return 6;
case 216:
return 7;
case 217:
return 8;
case 218:
return 9;
case 219:
return 10;
case 220:
return 11;
case 221:
return 12;
default:
}
return -1;
}


void func_666(int iParam0){
int iVar0;
iVar0=PLAYER::PLAYER_ID();
if(Global_1895156[iVar0 /*609*/].f_10.f_182 !=iParam0){
Global_1895156[iVar0 /*609*/].f_10.f_182=iParam0;
}}


void func_667(int iParam0){
if(Global_2794162.f_5231.f_346 !=iParam0){
Global_2794162.f_5231.f_346=iParam0;
}}

int func_668(){
return Global_2794162.f_5231.f_346;
}


void func_669(int iParam0){
if(Global_2794162.f_5231.f_345 !=iParam0){
Global_2794162.f_5231.f_345=iParam0;
}}

int func_670(){
return Global_2794162.f_5231.f_345;
}


void func_671(int iParam0){
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_32=iParam0;
}

int func_672(){
return Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2;
}

int func_673(){
if(func_674(151) || func_381()){
return 1;
}
return 0;
}

int func_674(int iParam0){
if(!func_248() && !func_29(PLAYER::PLAYER_ID(), 1)){
if(!func_36(PLAYER::PLAYER_ID())){
if(func_381()){
return 1;
}}}
switch (iParam0){
case 148:
break;
case 151:
break;
case 152:
break;
}
return 0;
}


void func_675(int iParam0, int iParam1){
Local_97[iParam0 /*4*/]=iParam1;
}

int func_676(){
return 1;
}

int func_677(){
return Local_96.f_0;
}

int func_678(int iParam0){
return Local_97[iParam0 /*4*/];
}

int func_679(){
if(Global_1575038==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_683()){
return 1;
}
if(Global_2696994){
return 1;
}
if(func_682()){
return 1;
}
if(func_681(159)){
if(!func_680()){
return 1;
}}
if(func_681(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_599() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_599())==0){
return 1;
}}
return 0;
}


bool func_680(){
return Global_2683883.f_698;
}

int func_681(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_682(){
return Global_2694576;
}


bool func_683(){
return Global_2683883.f_693;
}


void func_684(){
wait(0);
}


void func_685(){
func_420();
if(func_10(func_38(), 0, 1)){
func_629(func_38(), 1f, 1, 0);
func_46(func_47(func_38()), 0);
}
Global_1956833=func_11();
func_686(1, 0);
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_686(bool bParam0, int iParam1){
int iVar0;
int iVar1;
if(Global_1645422.f_1.f_108 !=0){
Global_1645422.f_1.f_108=0;
}
Global_1645422.f_1.f_109=-1;
Global_1645422.f_1.f_110=-1;
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_33==167 || Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_33==168){
func_747();
MISC::CLEAR_BIT(&(Global_1948431.f_3), 4);
}
if((func_211() && iParam1 !=0) && Global_262145.f_17628){
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_33==190 || Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_33==192){
func_720(PLAYER::PLAYER_ID(), iParam1, 1, 0);
}}
if(((Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_33==164 || Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_33==208) || Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_33==250) || Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_33==237){
MISC::ENABLE_DISPATCH_SERVICE(3, 1);
MISC::ENABLE_DISPATCH_SERVICE(5, 1);
}
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_33 !=-1){
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_33=-1;
if(!MISC::IS_BIT_SET(Global_1836866.f_1, 14) && !func_461(PLAYER::PLAYER_ID())){
func_595(0);
}}elseif(func_718(PLAYER::PLAYER_ID()) !=-1){
func_671(-1);
}
func_717(func_11());
if(func_302(16)){
func_569(16);
}
func_714(0);
func_666(-1);
func_713();
iVar0=0;
while (iVar0 < 8){
func_710(iVar0);
iVar0++;
}
if(MISC::IS_BIT_SET(Global_1948431.f_3, 0)){
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
PLAYER::SET_MAX_WANTED_LEVEL(5);
MISC::CLEAR_BIT(&(Global_1948431.f_3), false);
}
if(MISC::IS_BIT_SET(Global_1948431.f_3, 5)){
MISC::CLEAR_BIT(&(Global_1948431.f_3), 5);
}
iVar1=func_709();
if((func_494(iVar1) || iVar1==205) || iVar1==210){
func_703(-1);
}elseif(((iVar1==201 || iVar1==200) || iVar1==179) || func_210(iVar1)){
func_703(-1);
}elseif(((((func_702(iVar1) || func_701(iVar1)) || func_700(iVar1)) || func_202(iVar1)) || func_201(iVar1)) || func_200(iVar1)){}else{
func_703(-1);
}
func_384(19);
func_384(20);
func_384(21);
func_384(22);
func_384(27);
func_569(3);
func_569(4);
func_569(7);
func_699();
if(func_36(PLAYER::PLAYER_ID())){
func_656(0);
}
func_384(29);
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_57=func_11();
if(Global_2794162.f_5231.f_44 !=0){
Global_2794162.f_5231.f_44=0;
}
if(bParam0){
func_570();
}
if(!func_461(PLAYER::PLAYER_ID())){
func_593();
MISC::CLEAR_BIT(&(Global_1948431.f_3), true);
}
if(MISC::IS_BIT_SET(Global_1948431.f_3, 6)){
MISC::ENABLE_DISPATCH_SERVICE(3, 1);
MISC::ENABLE_DISPATCH_SERVICE(5, 1);
MISC::CLEAR_BIT(&(Global_1948431.f_3), 6);
}
if(MISC::IS_BIT_SET(Global_1948431.f_3, 7)){
MISC::CLEAR_BIT(&(Global_1948431.f_3), 7);
}
if(MISC::IS_BIT_SET(Global_1948431.f_3, 8)){
func_698("IMPEXP_SELFDES", 0);
func_689("IMPEXP_SELFDES");
MISC::CLEAR_BIT(&(Global_1948431.f_3), 8);
}
func_687(iVar1, 0);
}


void func_687(int iParam0, bool bParam1){
if(bParam1){
if(!MISC::IS_BIT_SET(Global_1948431.f_3, 9)){
AUDIO::START_AUDIO_SCENE(func_688(iParam0));
MISC::SET_BIT(&(Global_1948431.f_3), 9);
}}elseif(MISC::IS_BIT_SET(Global_1948431.f_3, 9)){
AUDIO::STOP_AUDIO_SCENE(func_688(iParam0));
MISC::CLEAR_BIT(&(Global_1948431.f_3), 9);
}}


char* func_688(int iParam0){
switch (iParam0){
case 219:
return "DLC_IE_VIP_Velocity_Vehicle_Scene";
case 221:
return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
case 220:
return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
case 214:
return "DLC_IE_VIP_Plowed_Vehicle_Scene";
case 217:
return "DLC_IE_VIP_Transporter_Vehicle_Scene";
case 218:
return "DLC_IE_VIP_Fortified_Vehicle_Scene";
case 215:
return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
case 216:
return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
default:
}
return "";
}


void func_689(char* sParam0){
int iVar0;
iVar0=0;
while (iVar0 < 35){
if(!MISC::IS_STRING_NULL(&(Global_113810.f_14144[iVar0 /*104*/]))){
if(MISC::ARE_STRINGS_EQUAL(&(Global_113810.f_14144[iVar0 /*104*/]), sParam0)){
if(Global_113810.f_14144[iVar0 /*104*/].f_24==2){
}else{
func_691();
Global_113810.f_14144[iVar0 /*104*/].f_99[Global_20500]=0;
if(func_690(iVar0)){
}else{
Global_113810.f_14144[iVar0 /*104*/].f_24=0;
Global_113810.f_14144[iVar0 /*104*/].f_28=0;
Global_113810.f_14144[iVar0 /*104*/].f_29=0;
}
HUD::THEFEED_REMOVE_ITEM(Global_113810.f_14144[iVar0 /*104*/].f_16);
}}}
iVar0++;
}}

int func_690(int iParam0){
if((Global_113810.f_14144[iParam0 /*104*/].f_99[0]==1 || Global_113810.f_14144[iParam0 /*104*/].f_99[1]==1) || Global_113810.f_14144[iParam0 /*104*/].f_99[2]==1){
return 1;
}
return 0;
}


void func_691(){
if(func_139(14)){
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
Global_20500=func_692();
if(Global_20500==145){
Global_20500=3;
}
if(Global_78689){
Global_20500=3;
}
if(Global_20500 > 3){
Global_20500=3;
}}}


var func__692(){
func_693();
return Global_113810.f_2366.f_539.f_4321;
}


void func_693(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_696(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_695(PLAYER::PLAYER_PED_ID());
if(func_694(iVar0) && (!func_139(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_694(Global_113810.f_2366.f_539.f_4321)){
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


bool func_694(int iParam0){
return iParam0 < 3;
}

int func_695(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_696(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_696(int iParam0){
if(func_694(iParam0)){
return func_697(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__697(int iParam0){
return Global_2058[iParam0 /*29*/];
}


void func_698(char* sParam0, int iParam1){
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


void func_699(){
if(func_609(PLAYER::PLAYER_ID())){
func_384(25);
}}

int func_700(int iParam0){
switch (iParam0){
case 178:
case 188:
return 1;
default:
}
return 0;
}

int func_701(int iParam0){
if((iParam0==191 || iParam0==190) || iParam0==192){
return 1;
}
return 0;
}

int func_702(int iParam0){
switch (iParam0){
case 167:
case 169:
case 168:
return 1;
default:
}
return 0;
}


void func_703(int iParam0){
int iVar0;
bool bVar1;
bool bVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
if(iParam0==-1){
iParam0=func_709();
}
if(iParam0 <=0){
return;
}
if(func_708(iParam0)){
if((!func_37(PLAYER::PLAYER_ID(), 19) && !func_37(PLAYER::PLAYER_ID(), 20)) && !func_37(PLAYER::PLAYER_ID(), 9)){
return;
}}
iVar0=func_707(iParam0);
switch (iVar0){
case 0:
if(func_12() !=func_11() && func_63(PLAYER::PLAYER_ID())==PLAYER::PLAYER_ID()){
bVar1=true;
}
break;
case 1:
if(func_12() !=func_11()){
bVar1=true;
}
break;
}
iVar3=0;
while (iVar3 < 46){
iVar4=func_706(iVar3);
if(iVar0 !=func_707(iVar4)){
}else{
if(iParam0==iVar4){
iVar5=func_705(iVar4, bVar1);
}else{
iVar5=func_705(iVar4, 0);
}
iVar6=(NETWORK::GET_CLOUD_TIME_AS_INT() + (iVar5 / 1000));
Global_2766202[iVar3]=func_650(Global_2766202[iVar3], iVar6);
iVar7=func_704(iVar4);
if(iVar7 !=14385){
func_209(iVar7, Global_2766202[iVar3], -1, 1);
if(!bVar2){
bVar2=true;
}}}
iVar3++;
}
if(bVar2){
func_272(692743013, 12, 0);
}}

int func_704(int iParam0){
switch (iParam0){
case 166:
return 3813;
case 170:
return 3814;
case 173:
return 3815;
case 159:
return 3187;
case 157:
return 3188;
case 148:
return 3189;
case 164:
return 3190;
case 142:
return 3191;
case 152:
return 3192;
case 179:
return 3817;
case 200:
return 3912;
case 201:
return 3911;
case 214:
return 5321;
case 215:
return 5322;
case 216:
return 5323;
case 217:
return 5324;
case 218:
return 5325;
case 219:
return 5326;
case 220:
return 5327;
case 221:
return 5328;
default:
}
return 14385;
}

int func_705(int iParam0, bool bParam1){
if(iParam0==-1){
iParam0=func_709();
}
switch (iParam0){
case 159:
if(bParam1){
return Global_262145.f_13098;
}else{
return Global_262145.f_13254;
}
break;
case 157:
if(bParam1){
return Global_262145.f_13112;
}else{
return Global_262145.f_13254;
}
break;
case 148:
if(bParam1){
return Global_262145.f_13130;
}else{
if(func_66(PLAYER::PLAYER_ID())){
return Global_262145.f_18926;
}
return Global_262145.f_13254;
}
break;
case 164:
if(bParam1){
return Global_262145.f_13143;
}else{
return Global_262145.f_13254;
}
break;
case 142:
if(bParam1){
return Global_262145.f_13151;
}else{
return Global_262145.f_13254;
}
break;
case 152:
if(bParam1){
return Global_262145.f_13165;
}else{
return Global_262145.f_13254;
}
break;
case 163:
if(bParam1){
return Global_262145.f_13178;
}else{
return Global_262145.f_13255;
}
break;
case 155:
if(bParam1){
return Global_262145.f_13238;
}else{
return Global_262145.f_13255;
}
break;
case 160:
if(bParam1){
return Global_262145.f_13191;
}else{
return Global_262145.f_13255;
}
break;
case 153:
if(bParam1){
return Global_262145.f_13202;
}else{
return Global_262145.f_13255;
}
break;
case 162:
if(bParam1){
return Global_262145.f_13213;
}else{
return Global_262145.f_13255;
}
break;
case 154:
if(bParam1){
return Global_262145.f_13248;
}else{
return Global_262145.f_13255;
}
break;
case 171:
if(bParam1){
return Global_262145.f_15680;
}else{
return Global_262145.f_13255;
}
break;
case 173:
if(bParam1){
return Global_262145.f_15643;
}else{
return Global_262145.f_13254;
}
break;
case 166:
if(bParam1){
return Global_262145.f_15658;
}else{
return Global_262145.f_13254;
}
break;
case 170:
if(bParam1){
return Global_262145.f_15624;
}else{
return Global_262145.f_13254;
}
break;
case 172:
if(bParam1){
return Global_262145.f_15699;
}else{
return Global_262145.f_13255;
}
break;
case 179:
if(bParam1){
return 1800000;
}else{
return Global_262145.f_18926;
}
break;
case 201:
if(bParam1){
return Global_262145.f_18950;
}else{
return Global_262145.f_18926;
}
break;
case 199:
if(bParam1){
return 600000;
}else{
return Global_262145.f_13255;
}
break;
case 194:
if(bParam1){
return 600000;
}else{
return Global_262145.f_13255;
}
break;
case 193:
if(bParam1){
return 600000;
}else{
return Global_262145.f_13255;
}
break;
case 210:
if(bParam1){
return 600000;
}else{
return Global_262145.f_13255;
}
break;
case 205:
if(bParam1){
return 600000;
}else{
return Global_262145.f_13255;
}
break;
case 189:
if(bParam1){
return 600000;
}else{
return Global_262145.f_13255;
}
break;
case 200:
if(bParam1){
return 600000;
}else{
return Global_262145.f_18926;
}
break;
case 182:
case 183:
case 185:
case 186:
case 180:
case 195:
case 197:
case 198:
case 207:
case 208:
case 209:
case 211:
if(bParam1){
return 600000;
}else{
return Global_262145.f_13255;
}
break;
case 214:
if(bParam1){
return Global_262145.f_19616;
}else{
return Global_262145.f_13254;
}
break;
case 215:
if(bParam1){
return Global_262145.f_19626;
}else{
return Global_262145.f_13254;
}
break;
case 216:
if(bParam1){
return Global_262145.f_19636;
}else{
return Global_262145.f_13254;
}
break;
case 217:
if(bParam1){
return Global_262145.f_19645;
}else{
return Global_262145.f_13254;
}
break;
case 218:
if(bParam1){
return Global_262145.f_19654;
}else{
return Global_262145.f_13254;
}
break;
case 219:
if(bParam1){
return Global_262145.f_19670;
}else{
return Global_262145.f_13254;
}
break;
case 220:
if(bParam1){
return Global_262145.f_19687;
}else{
return Global_262145.f_13254;
}
break;
case 221:
if(bParam1){
return Global_262145.f_19700;
}else{
return Global_262145.f_13254;
}
break;
case 237:
case 238:
case 239:
case 240:
case 241:
case 242:
case 244:
case 248:
case 249:
case 250:
case 243:
case 158:
case 181:
case 256:
case 258:
return 0;
}
if(func_374(iParam0)==0){
return 0;
}
return 600000;
}

int func_706(int iParam0){
switch (iParam0){
case 0:
return 214;
case 1:
return 215;
case 2:
return 216;
case 3:
return 217;
case 4:
return 218;
case 5:
return 219;
case 6:
return 220;
case 7:
return 221;
case 11:
return 159;
case 12:
return 157;
case 13:
return 148;
case 14:
return 164;
case 15:
return 142;
case 16:
return 152;
case 17:
return 163;
case 18:
return 155;
case 19:
return 160;
case 20:
return 153;
case 21:
return 162;
case 22:
return 154;
case 8:
return 166;
case 9:
return 170;
case 10:
return 173;
case 23:
return 171;
case 24:
return 172;
case 25:
return 179;
case 26:
return 189;
case 27:
return 193;
case 28:
return 194;
case 29:
return 199;
case 30:
return 201;
case 31:
return 200;
case 32:
return 205;
case 33:
return 210;
case 34:
return 182;
case 35:
return 183;
case 36:
return 185;
case 37:
return 186;
case 38:
return 180;
case 39:
return 195;
case 40:
return 197;
case 41:
return 198;
case 42:
return 207;
case 43:
return 208;
case 44:
return 209;
case 45:
return 211;
default:
}
return 0;
}

int func_707(int iParam0){
switch (iParam0){
case 159:
case 157:
case 148:
case 164:
case 142:
case 152:
case 166:
case 170:
case 173:
case 179:
case 200:
case 201:
case 182:
case 183:
case 185:
case 186:
case 180:
case 195:
case 197:
case 198:
case 207:
case 208:
case 209:
case 214:
case 215:
case 216:
case 217:
case 218:
case 219:
case 220:
case 221:
return 0;
case 155:
case 163:
case 160:
case 153:
case 162:
case 154:
case 171:
case 172:
case 199:
case 194:
case 193:
case 210:
case 205:
case 189:
case 211:
return 1;
default:
}
return -1;
}

int func_708(int iParam0){
switch (iParam0){
case 159:
case 157:
case 148:
case 164:
case 142:
case 152:
case 166:
case 170:
case 173:
case 179:
case 200:
case 201:
return 1;
default:
}
return 0;
}

int func_709(){
var uVar0;
uVar0=SCRIPT::GET_THIS_SCRIPT_NAME();
if(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_ASSAULT")){
return 159;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BELLYBEAST")){
return 157;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_DEATHMATCH")){
return 148;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_HUNT_THE_BOSS")){
return 164;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_SIGHTSEER")){
return 142;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_YACHT_ROB")){
return 152;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_CARJACKING")){
return 163;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_COLLECT_MONEY")){
return 155;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_FINDERSKEEPERS")){
return 160;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_FIVESTAR")){
return 153;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_POINT_TO_POINT")){
return 162;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_ROB_SHOP")){
return 154;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_HEADHUNTER")){
return 166;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_CONTRABAND_BUY")){
return 167;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_CONTRABAND_SELL")){
return 168;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_CONTRABAND_DEFEND")){
return 169;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_AIRFREIGHT")){
return 170;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_CASHING_OUT")){
return 171;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_SALVAGE")){
return 172;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_FRAGILE_GOODS")){
return 173;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_VEHICLE_EXPORT")){
return 178;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_ILLICIT_GOODS_RESUPPLY")){
return 192;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_JOUST")){
return 179;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_UNLOAD_WEAPONS")){
return 180;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_BAD_DEAL")){
return 182;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_RESCUE_CONTACT")){
return 183;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_LAST_RESPECTS")){
return 185;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_CONTRACT_KILLING")){
return 186;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_RACE_P2P")){
return 189;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_CONTRABAND_SELL")){
return 190;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_CONTRABAND_DEFEND")){
return 191;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_ILLICIT_GOODS_RESUPPLY")){
return 192;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN")){
return 193;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_RIPPIN_IT_UP")){
return 194;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_FREE_PRISONER")){
return 197;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_SAFECRACKER")){
return 198;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_STEAL_BIKES")){
return 195;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_SEARCH_AND_DESTROY")){
return 199;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "AM_PENNED_IN")){
return 200;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_STAND_YOUR_GROUND")){
return 201;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF")){
return 205;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_DESTROY_VANS")){
return 207;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_BURN_ASSETS")){
return 208;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_SHUTTLE")){
return 209;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_WHEELIE_RIDER")){
return 210;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_PLOUGHED")){
return 214;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_FULLY_LOADED")){
return 215;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_AMPHIBIOUS_ASSAULT")){
return 216;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_TRANSPORTER")){
return 217;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_FORTIFIED")){
return 218;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_VELOCITY")){
return 219;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_STOCKPILING")){
return 221;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_RAMPED_UP")){
return 220;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_GUNRUNNING")){
return 225;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_GUNRUNNING_DEFEND")){
return 227;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_SMUGGLER")){
return 229;
}elseif(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_FM_GANGOPS")){
return 233;
}
return 0;
}


void func_710(int iParam0){
if(!func_711(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_151[iParam0 /*3*/], func_712(), 0)){
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_151[iParam0 /*3*/]={
func_712() 
};
}
if(!func_711(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_126[iParam0 /*3*/], func_712(), 0)){
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_126[iParam0 /*3*/]={
func_712() 
};
}}


bool func_711(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}


Vector3 func__712(){
struct<3> Var0;
return Var0;
}


void func_713(){
struct<20> Var0;
Var0.f_2=-1;
Var0.f_3=-1;
Var0.f_4=-1;
Var0.f_6=-1;
Var0.f_7=-1;
Var0.f_8=-1;
Global_1836080={
Var0 
};
Global_1836080.f_13=func_11();
if(MISC::IS_BIT_SET(Global_1835495, 3)){
MISC::CLEAR_BIT(&Global_1835495, 3);
}}


void func_714(bool bParam0){
if(bParam0){
if(!func_48(PLAYER::PLAYER_ID(), 5)){
func_716(5);
}}elseif(func_48(PLAYER::PLAYER_ID(), 5)){
func_715(5);
}}


void func_715(bool bParam0){
MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_5), bParam0);
}


void func_716(bool bParam0){
MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_5), bParam0);
}


void func_717(int iParam0){
if(func_30(PLAYER::PLAYER_ID())){
if(PLAYER::PLAYER_ID() !=iParam0){
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_463 !=iParam0){
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_463=iParam0;
if(iParam0 !=func_11()){
}}}}}

int func_718(int iParam0){
if(func_719(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_32;
}
return -1;
}

int func_719(int iParam0, int iParam1){
if(Global_1895156[iParam0 /*609*/].f_10.f_32 !=-1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_33 !=-1)){
return 1;
}
return 0;
}


void func_720(int iParam0, int iParam1, bool bParam2, bool bParam3){
int iVar0;
if(func_348(iParam0, iParam1) && func_746(iParam0, iParam1)){
iVar0=func_347(iParam0, iParam1);
func_724(iVar0, bParam2, bParam3, 0);
func_721(iVar0, 1);
}}


void func_721(int iParam0, int iParam1){
if(!func_723(iParam0)){
return;
}
func_119(func_722(iParam0), iParam1, -1);
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_193[iParam0 /*13*/].f_6=iParam1;
}

int func_722(int iParam0){
switch (iParam0){
case 0:
return 7628;
case 1:
return 7629;
case 2:
return 7630;
case 3:
return 7631;
case 4:
return 7632;
case 5:
return 15373;
case 6:
return 36665;
default:
}
return 7628;
}


bool func_723(int iParam0){
return (iParam0 >=0 && iParam0 < 7);
}


void func_724(int iParam0, bool bParam1, bool bParam2, bool bParam3){
int iVar0;
bool bVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
float fVar6;
bVar1=false;
iVar2=func_745(PLAYER::PLAYER_ID(), iParam0);
if(!bParam1){
func_744(iParam0, 0, bParam2);
}
if(bParam1){
iVar0=Global_2764649[iParam0];
iVar0=func_743(iParam0, bParam2);
if(iVar0 < 0){
iVar0=0;
}
if(!bParam2){
Global_1950696=-1;
}
func_742(iParam0, 0, bParam2);
}elseif(func_740(iParam0, bParam2)){
iVar0=func_732(iVar2, 0, 0, 0);
iVar3=func_731(PLAYER::PLAYER_ID(), iVar2);
iVar4=func_730(iVar2, bParam2);
iVar5=func_732(iVar2, 0, bParam2, 0);
fVar6=(to_float(iVar5) / to_float(iVar4));
iVar0=(iVar0 - round((to_float(iVar3) * fVar6)));
if(iVar0 <=0){
iVar0=iVar5;
}
if(func_729(iVar2) && func_728(PLAYER::PLAYER_ID(), iVar2)==2){
iVar0=(iVar0 / 2);
bVar1=true;
}
func_744(iParam0, iVar0, bParam2);
}else{
if(func_727(PLAYER::PLAYER_ID(), iVar2) > 0){
func_726(iParam0, (Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_193[iParam0 /*13*/].f_2 - (func_730(iVar2, bParam2) / 2)));
}
iVar0=(func_732(iVar2, 1, bParam2, bParam3) / func_727(PLAYER::PLAYER_ID(), iVar2) + 1);
}
if(!bVar1){
if(func_729(iVar2) && func_728(PLAYER::PLAYER_ID(), iVar2)==2){
iVar0=(iVar0 / 2);
bVar1=true;
}}
func_725(PLAYER::PLAYER_ID(), iVar2, iVar0, bParam2);
}


void func_725(int iParam0, int iParam1, int iParam2, bool bParam3){
int iVar0;
if(iParam0==func_11()){
return;
}
if(func_334(iParam1)){
iVar0=0;
while (iVar0 <=6){
if(Global_1853988[iParam0 /*867*/].f_267.f_193[iVar0 /*13*/]==iParam1){
if(bParam3){
Global_1853988[iParam0 /*867*/].f_267.f_286=iParam2;
}else{
Global_1853988[iParam0 /*867*/].f_267.f_193[iVar0 /*13*/].f_9=iParam2;
}}
iVar0++;
}}}


void func_726(int iParam0, int iParam1){
if(iParam0 !=-1 && iParam1 !=Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_193[iParam0 /*13*/].f_2){
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_193[iParam0 /*13*/].f_2=iParam1;
}}

int func_727(int iParam0, int iParam1){
int iVar0;
if(iParam0==func_11()){
return 0;
}
if(func_334(iParam1)){
iVar0=0;
while (iVar0 <=6){
if(Global_1853988[iParam0 /*867*/].f_267.f_193[iVar0 /*13*/]==iParam1){
return Global_1853988[iParam0 /*867*/].f_267.f_193[iVar0 /*13*/].f_8;
}
iVar0++;
}}
return 0;
}

int func_728(int iParam0, int iParam1){
int iVar0;
if(iParam0==func_11()){
return 0;
}
if(func_334(iParam1) && func_729(iParam1)){
iVar0=0;
while (iVar0 <=6){
if(Global_1853988[iParam0 /*867*/].f_267.f_193[iVar0 /*13*/]==iParam1){
return Global_1853988[iParam0 /*867*/].f_267.f_193[iVar0 /*13*/].f_12;
}
iVar0++;
}}
return 0;
}


bool func_729(int iParam0){
return func_233(iParam0)==5;
}

int func_730(int iParam0, bool bParam1){
var uVar0;
int iVar1;
iVar1=func_233(iParam0);
switch (iVar1){
case 1:
uVar0=Global_262145.f_17592;
if(func_346(PLAYER::PLAYER_ID(), iParam0, 0)){
uVar0=Global_262145.f_17598;
}
break;
case 3:
uVar0=Global_262145.f_17591;
if(func_346(PLAYER::PLAYER_ID(), iParam0, 0)){
uVar0=Global_262145.f_17597;
}
break;
case 4:
uVar0=Global_262145.f_17590;
if(func_346(PLAYER::PLAYER_ID(), iParam0, 0)){
uVar0=Global_262145.f_17596;
}
break;
case 0:
uVar0=Global_262145.f_17588;
if(func_346(PLAYER::PLAYER_ID(), iParam0, 0)){
uVar0=Global_262145.f_17594;
}
break;
case 6:
uVar0=Global_262145.f_17593;
if(func_345(PLAYER::PLAYER_ID())){
uVar0=Global_262145.f_17599;
}
break;
case 2:
uVar0=Global_262145.f_17589;
if(func_346(PLAYER::PLAYER_ID(), iParam0, 0)){
uVar0=Global_262145.f_17595;
}
break;
case 5:
if(bParam1){
uVar0=Global_262145.f_21731;
if(func_346(PLAYER::PLAYER_ID(), iParam0, 0)){
uVar0=Global_262145.f_21732;
}}else{
uVar0=Global_262145.f_21715;
if(func_346(PLAYER::PLAYER_ID(), iParam0, 0)){
uVar0=Global_262145.f_21716;
}}
break;
}
return uVar0;
}

int func_731(int iParam0, int iParam1){
int iVar0;
if(iParam0==func_11()){
return 0;
}
if(func_334(iParam1)){
iVar0=0;
while (iVar0 <=6){
if(Global_1853988[iParam0 /*867*/].f_267.f_193[iVar0 /*13*/]==iParam1){
return Global_1853988[iParam0 /*867*/].f_267.f_193[iVar0 /*13*/].f_2;
}
iVar0++;
}}
return 0;
}

int func_732(int iParam0, bool bParam1, bool bParam2, bool bParam3){
int iVar0;
int iVar1;
iVar1=func_233(iParam0);
if(bParam1){
func_734(iParam0, bParam2, bParam3);
}
switch (iVar1){
case 1:
iVar0=Global_262145.f_17571;
if(func_346(PLAYER::PLAYER_ID(), iParam0, 0)){
iVar0=(iVar0 - Global_262145.f_17581);
}
if(func_346(PLAYER::PLAYER_ID(), iParam0, 1)){
iVar0=(iVar0 - Global_262145.f_17587);
}
if(Global_262145.f_33258 && !func_178(34716, -1)){
iVar0=floor((IntToFloat(iVar0) * Global_262145.f_33265));
}
break;
case 6:
iVar0=Global_262145.f_17576;
if(func_345(PLAYER::PLAYER_ID())){
iVar0=(iVar0 - Global_262145.f_17582);
}
if(func_733(1)){
iVar0=(iVar0 / 2);
}
break;
case 3:
iVar0=Global_262145.f_17572;
if(func_346(PLAYER::PLAYER_ID(), iParam0, 0)){
iVar0=(iVar0 - Global_262145.f_17580);
}
if(func_346(PLAYER::PLAYER_ID(), iParam0, 1)){
iVar0=(iVar0 - Global_262145.f_17586);
}
if(Global_262145.f_33259 && !func_178(34719, -1)){
iVar0=floor((IntToFloat(iVar0) * Global_262145.f_33266));
}
break;
case 4:
iVar0=Global_262145.f_17573;
if(func_346(PLAYER::PLAYER_ID(), iParam0, 0)){
iVar0=(iVar0 - Global_262145.f_17579);
}
if(func_346(PLAYER::PLAYER_ID(), iParam0, 1)){
iVar0=(iVar0 - Global_262145.f_17585);
}
if(Global_262145.f_33260 && !func_178(34717, -1)){
iVar0=floor((IntToFloat(iVar0) * Global_262145.f_33267));
}
break;
case 0:
iVar0=Global_262145.f_17574;
if(func_346(PLAYER::PLAYER_ID(), iParam0, 0)){
iVar0=(iVar0 - Global_262145.f_17577);
}
if(func_346(PLAYER::PLAYER_ID(), iParam0, 1)){
iVar0=(iVar0 - Global_262145.f_17583);
}
if(Global_262145.f_33261 && !func_178(34718, -1)){
iVar0=floor((IntToFloat(iVar0) * Global_262145.f_33268));
}
break;
case 2:
iVar0=Global_262145.f_17575;
if(func_346(PLAYER::PLAYER_ID(), iParam0, 0)){
iVar0=(iVar0 - Global_262145.f_17578);
}
if(func_346(PLAYER::PLAYER_ID(), iParam0, 1)){
iVar0=(iVar0 - Global_262145.f_17584);
}
if(Global_262145.f_33262 && !func_178(34720, -1)){
iVar0=floor((IntToFloat(iVar0) * Global_262145.f_33269));
}
break;
case 5:
if(bParam2){
iVar0=Global_262145.f_21728;
}else{
iVar0=Global_262145.f_21712;
}
if(func_346(PLAYER::PLAYER_ID(), iParam0, 0)){
if(bParam2){
iVar0=(iVar0 - Global_262145.f_21729);
}else{
iVar0=(iVar0 - Global_262145.f_21713);
}}
if(func_346(PLAYER::PLAYER_ID(), iParam0, 1)){
if(bParam2){
iVar0=(iVar0 - Global_262145.f_21730);
}else{
iVar0=(iVar0 - Global_262145.f_21714);
}}
if(bParam2){
if(Global_262145.f_33264 && !func_178(34739, -1)){
iVar0=floor((IntToFloat(iVar0) * Global_262145.f_33271));
}}elseif(Global_262145.f_33263 && !func_178(34721, -1)){
iVar0=floor((IntToFloat(iVar0) * Global_262145.f_33270));
}
if(func_728(PLAYER::PLAYER_ID(), iParam0)==2){
iVar0 *=2;
}
break;
}
return iVar0;
}

int func_733(int iParam0){
int iVar0;
iVar0=func_132(11822, -1);
if(iVar0==0){
return 0;
}
if(func_132(11823, -1) <=NETWORK::GET_CLOUD_TIME_AS_INT()){
if(iVar0 !=0){
func_209(11823, 0, -1, 1);
func_209(11822, 0, -1, 1);
}
return 0;
}
if(iParam0 && iVar0 > Global_262145.f_22051){
return 0;
}
return 1;
}


void func_734(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
if(!func_737(iParam0, bParam2)){
return;
}
iVar0=func_352(iParam0);
iVar1=func_736(iVar0);
if(bParam1){
iVar1=func_735(iVar0);
}
if(!func_178(iVar1, -1)){
func_119(iVar1, 1, -1);
}}

int func_735(int iParam0){
switch (iParam0){
case 5:
return 34738;
break;
}
return 0;
}

int func_736(int iParam0){
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

int func_737(int iParam0, bool bParam1){
if(!func_348(PLAYER::PLAYER_ID(), iParam0)){
return 0;
}
if(!bParam1 && !func_746(PLAYER::PLAYER_ID(), iParam0)){
return 0;
}
if(!bParam1 && !func_738(PLAYER::PLAYER_ID(), func_333(iParam0))){
return 0;
}
return 1;
}

int func_738(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
iVar1=func_745(iParam0, iParam1);
iVar2=func_233(iVar1);
switch (iVar2){
case 1:
if(func_739(iParam0, iVar1) > 8){
iVar0=1;
}
break;
case 3:
if(func_739(iParam0, iVar1) > 2){
iVar0=1;
}
break;
case 4:
if(func_739(iParam0, iVar1) > 1){
iVar0=1;
}
break;
case 0:
if(func_739(iParam0, iVar1) > 1){
iVar0=1;
}
break;
case 2:
if(func_739(iParam0, iVar1) > 1){
iVar0=1;
}
break;
case 5:
if(func_739(iParam0, iVar1) > 1){
iVar0=1;
}
break;
case 6:
if(func_739(iParam0, iVar1) > 1){
iVar0=1;
}
break;
}
return iVar0;
}

int func_739(int iParam0, int iParam1){
int iVar0;
if(iParam0==func_11()){
return 0;
}
if(func_334(iParam1)){
iVar0=0;
while (iVar0 <=6){
if(Global_1853988[iParam0 /*867*/].f_267.f_193[iVar0 /*13*/]==iParam1){
return Global_1853988[iParam0 /*867*/].f_267.f_193[iVar0 /*13*/].f_4;
}
iVar0++;
}}
return 0;
}


bool func_740(int iParam0, bool bParam1){
if(bParam1){
return func_178(15384, -1);
}
return func_178(func_741(iParam0), -1);
}

int func_741(int iParam0){
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


void func_742(int iParam0, int iParam1, bool bParam2){
if(bParam2){
func_119(15384, iParam1, -1);
return;
}
func_119(func_741(iParam0), iParam1, -1);
}

int func_743(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=Global_2764649[iParam0];
iVar1=func_745(PLAYER::PLAYER_ID(), iParam0);
if(bParam1){
iVar0=Global_2764657;
}
if(func_729(iVar1)){
if(func_728(PLAYER::PLAYER_ID(), iVar1)==2){
iVar0 *=2;
}}
return iVar0;
}


void func_744(int iParam0, int iParam1, bool bParam2){
if(bParam2){
Global_2764657=iParam1;
return;
}
Global_2764649[iParam0]=iParam1;
}

int func_745(int iParam0, int iParam1){
var uVar0;
if(iParam0==func_11()){
return 0;
}
if(iParam1 < 0 || iParam1 >=7){
return 0;
}
if(func_334(Global_1853988[iParam0 /*867*/].f_267.f_193[iParam1 /*13*/])){
uVar0=Global_1853988[iParam0 /*867*/].f_267.f_193[iParam1 /*13*/];
}
return uVar0;
}

int func_746(int iParam0, int iParam1){
int iVar0;
if(func_348(iParam0, iParam1)){
iVar0=func_347(iParam0, iParam1);
if(Global_1853988[iParam0 /*867*/].f_267.f_193[iVar0 /*13*/].f_4 > 0 && Global_1853988[iParam0 /*867*/].f_267.f_193[iVar0 /*13*/].f_7){
return 1;
}}
return 0;
}


void func_747(){
MISC::CLEAR_BIT(&(Global_2794162.f_1838), 28);
MISC::CLEAR_BIT(&(Global_2794162.f_1838), 29);
func_748(24);
}


void func_748(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(Global_2794162.f_5231.f_7[iVar0]), iVar1);
}

int func_749(struct<21> Param0){
func_801(func_802(Param0.f_0), Param0);
NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(0);
func_798(0, -1, 0);
NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_96, 11, 0);
NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_97, 129, 0);
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
func_750(0, 0, 0);
return 1;
}


void func_750(int iParam0, bool bParam1, bool bParam2){
func_797();
if(func_62(PLAYER::PLAYER_ID())){
func_756(1);
}
if((iParam0 !=0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_755(bParam1, 1)){
switch (iParam0){
case 157:
MISC::SET_BIT(&Global_1948426, false);
break;
}}
if(!func_248() && !func_29(PLAYER::PLAYER_ID(), 1)){
if(func_386()){
func_594(3);
}}
func_594(4);
if(func_109(0)){
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_57=func_12();
}
if((func_106(iParam0) || iParam0==293) || iParam0==291){
func_754();
Global_1948458.f_18=func_753(func_64());
}elseif(func_203(func_718(PLAYER::PLAYER_ID()))){
func_752();
Global_1948514.f_18=func_753(func_64());
}
if(bParam2){
if(!func_381()){
func_595(1);
}}
func_751();
}


void func_751(){
int iVar0;
iVar0=0;
while (iVar0 < 32){
Global_1645422.f_534[iVar0 /*42*/].f_1=func_11();
Global_1645422.f_534[iVar0 /*42*/].f_7=0;
iVar0++;
}}


void func_752(){
struct<63> Var0;
Var0.f_8=-1;
Var0.f_9=-1;
Var0.f_10=-1;
Var0.f_11=-1;
Var0.f_12=-1;
Var0.f_15=-1;
Var0.f_16=-1;
Var0.f_17=-1;
Var0.f_18=-1;
Var0.f_19=-1;
Var0.f_20=-1;
Var0.f_21=-1;
Var0.f_22=-1;
Var0.f_23=-1;
Var0.f_24=-1;
Var0.f_25=-1;
Var0.f_26=-1;
Var0.f_27=-1;
Var0.f_28=-1;
Var0.f_29=-1;
Var0.f_30=-1;
Var0.f_31=-1;
Var0.f_32=-1;
Var0.f_33=-1;
Var0.f_34=-1;
Var0.f_35=-1;
Var0.f_36=-1;
Var0.f_37=-1;
Var0.f_38=-1;
Var0.f_39=-1;
Var0.f_40=-1;
Var0.f_41=-1;
Var0.f_42=-1;
Var0.f_43=-1;
Var0.f_44=-1;
Var0.f_45=-1;
Var0.f_46=-1;
Var0.f_47=-1;
Var0.f_48=-1;
Var0.f_49=-1;
Var0.f_50=-1;
Var0.f_51=-1;
Var0.f_52=-1;
Var0.f_53=-1;
Var0.f_54=-1;
Var0.f_55=-1;
Var0.f_56=-1;
Var0.f_57=-1;
Var0.f_58=-1;
Var0.f_59=-1;
Var0.f_60=-1;
Var0.f_61=-1;
Var0.f_62=-1;
Global_1948514={
Var0 
};
Global_1948514.f_24=0;
Global_1948514.f_25=0;
Global_1948514.f_17=0;
}

int func_753(int iParam0){
if(func_29(iParam0, 1)){
return Global_1895156[iParam0 /*609*/].f_10.f_430;
}
return -1;
}


void func_754(){
struct<56> Var0;
Var0.f_8=-1;
Var0.f_9=-1;
Var0.f_10=-1;
Var0.f_11=-1;
Var0.f_12=-1;
Var0.f_15=-1;
Var0.f_16=-1;
Var0.f_17=-1;
Var0.f_18=-1;
Var0.f_19=-1;
Var0.f_20=-1;
Var0.f_21=-1;
Var0.f_22=-1;
Var0.f_23=-1;
Var0.f_24=-1;
Var0.f_25=-1;
Var0.f_26=-1;
Var0.f_27=-1;
Var0.f_28=-1;
Var0.f_29=-1;
Var0.f_30=-1;
Var0.f_31=-1;
Var0.f_32=-1;
Var0.f_33=-1;
Var0.f_34=-1;
Var0.f_35=-1;
Var0.f_36=-1;
Var0.f_37=-1;
Var0.f_38=-1;
Var0.f_39=-1;
Var0.f_40=-1;
Var0.f_41=-1;
Var0.f_42=-1;
Var0.f_43=-1;
Var0.f_44=-1;
Var0.f_45=-1;
Var0.f_46=-1;
Var0.f_47=-1;
Var0.f_48=-1;
Var0.f_49=-1;
Var0.f_50=-1;
Var0.f_51=-1;
Var0.f_52=-1;
Var0.f_53=-1;
Global_1948458={
Var0 
};
Global_1948458.f_29=0;
Global_1948458.f_30=0;
Global_1948458.f_17=0;
}

int func_755(int iParam0, bool bParam1){
return func_49(PLAYER::PLAYER_ID(), iParam0, bParam1);
}


void func_756(bool bParam0){
int iVar0;
func_748(33);
func_748(34);
func_748(35);
func_748(36);
func_748(37);
func_748(38);
func_748(39);
func_748(40);
func_748(43);
func_748(41);
func_748(54);
func_748(42);
func_748(47);
func_796(23);
func_796(24);
func_748(92);
MISC::CLEAR_BIT(&(Global_2794162.f_1838), 2);
func_795();
func_790();
func_785();
func_780();
func_769();
func_765();
func_761();
func_758();
if(bParam0){
iVar0=0;
while (iVar0 < 2){
Global_2794162.f_5231.f_14[iVar0]=0;
iVar0++;
}}elseif(func_757(3)){
func_796(3);
}elseif(func_757(4)){
func_796(4);
}elseif(func_757(5)){
func_796(5);
}elseif(func_757(6)){
func_796(6);
}elseif(func_757(7)){
func_796(7);
}elseif(((((((((((((((((func_757(0) || func_757(1)) || func_757(2)) || func_757(8)) || func_757(9)) || func_757(10)) || func_757(11)) || func_757(12)) || func_757(13)) || func_757(14)) || func_757(15)) || func_757(16)) || func_757(17)) || func_757(18)) || func_757(19)) || func_757(20)) || func_757(21)) || func_757(22)){
func_796(8);
func_796(0);
func_796(1);
func_796(2);
func_796(9);
func_796(10);
func_796(11);
func_796(12);
func_796(13);
func_796(14);
func_796(15);
func_796(16);
func_796(17);
func_796(18);
func_796(19);
func_796(20);
func_796(21);
func_796(22);
}else{
iVar0=0;
while (iVar0 < 2){
Global_2794162.f_5231.f_14[iVar0]=0;
iVar0++;
}}}


bool func_757(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
return MISC::IS_BIT_SET(Global_2794162.f_5231.f_14[iVar0], iVar1);
}


void func_758(){
int iVar0;
iVar0=0;
while (iVar0 < 104){
if(func_760(iVar0)){
func_759(iVar0);
}
iVar0++;
}}


void func_759(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(Global_2794162.f_5231.f_35[iVar0]), iVar1);
}


bool func_760(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
return MISC::IS_BIT_SET(Global_2794162.f_5231.f_35[iVar0], iVar1);
}


void func_761(){
if(func_763()){
func_762(0);
func_762(1);
func_762(2);
func_762(3);
}}


void func_762(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(Global_2794162.f_5231.f_33[iVar0]), iVar1);
}

int func_763(){
if(((func_764(0) || func_764(1)) || func_764(2)) || func_764(3)){
return 1;
}
return 0;
}


var func__764(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
return MISC::IS_BIT_SET(Global_2794162.f_5231.f_33[iVar0], iVar1);
}


void func_765(){
if(func_767()){
func_766(4);
func_766(5);
func_766(6);
func_766(7);
}}


void func_766(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(Global_2794162.f_5231.f_31[iVar0]), iVar1);
}

int func_767(){
if(((func_768(4) || func_768(5)) || func_768(6)) || func_768(7)){
return 1;
}
return 0;
}


var func__768(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
return MISC::IS_BIT_SET(Global_2794162.f_5231.f_31[iVar0], iVar1);
}


void func_769(){
var uVar0;
if(func_779()){
func_778(8);
func_778(9);
func_778(10);
func_778(12);
func_778(13);
func_778(14);
func_778(19);
func_778(20);
func_778(21);
func_778(22);
func_778(23);
func_778(24);
func_778(25);
func_778(26);
func_778(15);
func_778(16);
func_778(17);
func_778(18);
func_778(35);
func_778(45);
func_778(46);
if(func_777(11)){
func_778(11);
uVar0=func_132(7229, -1);
MISC::SET_BIT(&uVar0, 2);
func_209(7229, uVar0, -1, 1);
}}
if(func_777(48)){
if(func_775(151, 3)){
func_773(151, 3);
}
func_778(48);
}
if(func_777(49)){
if(func_775(152, 3)){
func_773(152, 3);
}
func_778(49);
}
if(func_777(50)){
if(func_775(153, 3)){
func_773(153, 3);
}
func_778(50);
}
if(func_777(51)){
if(func_775(func_770(), 3)){
func_773(func_770(), 3);
}
func_778(51);
}}

int func_770(){
if(func_772()){
func_771(154, Global_20500, 1);
}
return 154;
}


void func_771(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2058[iParam0 /*29*/].f_24[iParam1]=iParam2;
if(iParam0 < 162){
Global_113810.f_28053[iParam0 /*29*/].f_24[iParam1]=iParam2;
}}

int func_772(){
int iVar0;
iVar0=func_28(PLAYER::PLAYER_ID());
if(((iVar0 !=PLAYER::PLAYER_ID() && iVar0 !=func_11()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && bVar0 !=-1){
return 1;
}
return 0;
}


void func_773(int iParam0, int iParam1){
int iVar0;
if(Global_117[iParam0 /*10*/].f_8 !=172){
if(iParam1 > 3){
}else{
iVar0=iParam1;
func_774(iParam0, iVar0, 0);
func_771(iParam0, iVar0, 0);
}}}


void func_774(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2058[iParam0 /*29*/].f_12[iParam1]=iParam2;
if(iParam0 < 162){
Global_113810.f_28053[iParam0 /*29*/].f_12[iParam1]=iParam2;
}}

int func_775(int iParam0, int iParam1){
if(func_776(iParam0, iParam1)==1){
return 1;
}
return 0;
}

int func_776(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2058[iParam0 /*29*/].f_12[iParam1];
}


bool func_777(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
return MISC::IS_BIT_SET(Global_2794162.f_5231.f_26[iVar0], iVar1);
}


void func_778(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(Global_2794162.f_5231.f_26[iVar0]), iVar1);
}

int func_779(){
if(((((((((((((((((((((func_777(8) || func_777(9)) || func_777(10)) || func_777(12)) || func_777(11)) || func_777(13)) || func_777(14)) || func_777(19)) || func_777(20)) || func_777(21)) || func_777(22)) || func_777(23)) || func_777(24)) || func_777(25)) || func_777(26)) || func_777(15)) || func_777(16)) || func_777(17)) || func_777(18)) || func_777(35)) || func_777(45)) || func_777(46)){
return 1;
}
return 0;
}


void func_780(){
if(func_784()){
func_783(0);
func_783(1);
func_783(2);
func_783(3);
func_783(4);
func_783(5);
if(func_782(32)){
if(func_775(func_781(), 3)){
func_773(func_781(), 3);
}
func_783(32);
}}}

int func_781(){
if(func_772()){
func_771(12, Global_20500, 1);
}
return 12;
}


bool func_782(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
return MISC::IS_BIT_SET(Global_2794162.f_5231.f_23[iVar0], iVar1);
}


void func_783(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(Global_2794162.f_5231.f_23[iVar0]), iVar1);
}

int func_784(){
if((((func_782(1) || func_782(0)) || func_782(2)) || func_782(4)) || func_782(5)){
return 1;
}
return 0;
}


void func_785(){
if(func_789()){
func_788(0);
func_788(1);
func_788(2);
func_788(3);
func_788(4);
func_788(5);
func_788(6);
func_788(7);
if(func_787(8)){
func_788(8);
}
if(func_787(15)){
if(func_775(func_786(), 3)){
func_773(func_786(), 3);
}
func_788(15);
}}}

int func_786(){
if(func_772()){
func_771(20, Global_20500, 1);
}
return 20;
}


bool func_787(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
return MISC::IS_BIT_SET(Global_2794162.f_5231.f_21[iVar0], iVar1);
}


void func_788(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(Global_2794162.f_5231.f_21[iVar0]), iVar1);
}

int func_789(){
if((((((((func_787(0) || func_787(1)) || func_787(2)) || func_787(3)) || func_787(4)) || func_787(5)) || func_787(6)) || func_787(7)) || func_787(8)){
return 1;
}
return 0;
}


void func_790(){
if(func_794()){
func_793(0);
func_793(1);
func_793(2);
func_793(3);
func_793(4);
func_793(5);
func_793(6);
func_793(7);
func_793(8);
func_793(9);
func_793(10);
func_793(11);
func_793(12);
if(func_792(13)){
if(func_775(func_791(), 3)){
func_773(func_791(), 3);
}
func_793(13);
}}}

int func_791(){
if(func_772()){
func_771(76, Global_20500, 1);
}
return 76;
}


bool func_792(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
return MISC::IS_BIT_SET(Global_2794162.f_5231.f_19[iVar0], iVar1);
}


void func_793(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(Global_2794162.f_5231.f_19[iVar0]), iVar1);
}

int func_794(){
if((((((((((((func_792(0) || func_792(1)) || func_792(2)) || func_792(3)) || func_792(4)) || func_792(5)) || func_792(6)) || func_792(7)) || func_792(8)) || func_792(9)) || func_792(10)) || func_792(11)) || func_792(12)){
return 1;
}
return 0;
}


void func_795(){
int iVar0;
iVar0=0;
while (iVar0 < 1){
Global_2794162.f_5231.f_17[iVar0]=0;
iVar0++;
}}


void func_796(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(Global_2794162.f_5231.f_14[iVar0]), iVar1);
}


void func_797(){
struct<14> Var0;
Global_1948440={
Var0 
};
Global_1948440.f_14=0;
Global_1948440.f_15=0;
}

int func_798(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
while (iVar0 !=2){
if(((iVar0==3 || iVar0==4) || iVar0==5) || iVar0==6){
if(!bParam2){
func_800();
}else{
return 0;
}}
if(!func_799(0)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_800();
}else{
return 0;
}}
if(func_683()){
if(!bParam2){
func_800();
}else{
return 0;
}}
if(func_681(157)){
if(!bParam2){
func_800();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_800();
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
func_800();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_800();
}else{
return 0;
}}
return 1;
}


bool func_799(bool bParam0){
if(bParam0){}
return Global_1575038;
}


void func_800(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_801(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_800();
}
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_802(int iParam0){
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
switch (func_374(func_803(iParam0, 1))){
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

int func_803(int iParam0, bool bParam1){
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