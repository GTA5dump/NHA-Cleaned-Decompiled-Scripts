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
var uLocal_67=-1;
var uLocal_68=0;
var uLocal_69=0;
var uLocal_70=0;
var uLocal_71=0;
var uLocal_72=0;
var uLocal_73=0;
var uLocal_74=0;
float fLocal_75=0f;
float fLocal_76=0f;
float fLocal_77=0f;
float fLocal_78=0f;
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
int iLocal_109=0;
var uLocal_110=0;
float fLocal_111=0f;
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
float fLocal_133=0f;
float fLocal_134=0f;
var uLocal_135=0;
int iLocal_136=0;
struct<22> Local_137={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<2949> Local_138={
0, 0, 0, 0, 225, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 14, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 35, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 14, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 15, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, 0, 0, 0, 0, 0, 0, 0, 10, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, 0, -2147483647, -2147483647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, 3, 20, 0, 0, -2147483647, -2147483647, -2147483647, -2147483647, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 20, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 14, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 0, 0, -2147483647, -1, 0, 0, 0, -2147483647, 0, -2147483647, 0, 0, -2147483647, 10, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, -1 
};
var uLocal_139=0;
var uLocal_140=0;
var uLocal_141=0;
var uLocal_142=0;
var uLocal_143=0;
var uLocal_144=1073741824;
var uLocal_145=-1073741824;
var uLocal_146=0;
struct<17> Local_147={
8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0 
};
var uLocal_148=255;
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
var uLocal_161=255;
var uLocal_162=0;
var uLocal_163=0;
var uLocal_164=0;
var uLocal_165=255;
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
var uLocal_178=255;
var uLocal_179=0;
var uLocal_180=0;
var uLocal_181=0;
var uLocal_182=255;
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
var uLocal_195=255;
var uLocal_196=0;
var uLocal_197=0;
var uLocal_198=0;
var uLocal_199=255;
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
var uLocal_212=255;
var uLocal_213=0;
var uLocal_214=0;
var uLocal_215=0;
var uLocal_216=255;
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
var uLocal_229=255;
var uLocal_230=0;
var uLocal_231=0;
var uLocal_232=0;
var uLocal_233=255;
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
var uLocal_246=255;
var uLocal_247=0;
var uLocal_248=0;
var uLocal_249=0;
var uLocal_250=255;
var uLocal_251=0;
var uLocal_252=0;
var uLocal_253=0;
var uLocal_254=0;
var uLocal_255=0;
var uLocal_256=0;
var uLocal_257=0;
var uLocal_258=0;
var uLocal_259=0;
var uLocal_260=0;
var uLocal_261=0;
var uLocal_262=0;
var uLocal_263=255;
var uLocal_264=0;
var uLocal_265=0;
var uLocal_266=0;
var uLocal_267=255;
var uLocal_268=0;
struct<21> Local_269={
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
fLocal_21=80f;
fLocal_22=140f;
fLocal_23=180f;
fLocal_26=0f;
fLocal_30=-0.0375f;
fLocal_31=0.17f;
iLocal_34=3;
iLocal_38=1;
iLocal_39=65;
iLocal_40=49;
iLocal_41=64;
fLocal_61=((0.05f + 0.275f) - 0.01f);
fLocal_75=3f;
fLocal_76=0f;
fLocal_77=2f;
fLocal_78=100f;
iLocal_109=-1;
fLocal_111=0.5f;
ScriptParam_269.f_0=215;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_399(ScriptParam_269);
}
while (true){
func_398();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_48();
}else{
func_1();
}}}


void func_1(){
func_3();
func_2();
}


void func_2(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_3(){
int iVar0;
if(!MISC::IS_BIT_SET(Local_138.f_2368.f_333, 7)){
Local_137.f_16=1;
Local_137.f_17=Local_138.f_2712.f_2;
Local_137.f_18=Local_138.f_2712.f_6;
Local_137.f_20=func_47();
Local_137.f_21=func_43();
func_42();
}
func_18();
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_16());
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPInvPersHud");
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPInvPersMessages");
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPInvPersMessages2");
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MpInvPersCommon");
if(!MISC::IS_STRING_NULL_OR_EMPTY(Local_138.f_2895)){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(Local_138.f_2895);
}
HUD::CLEAR_ADDITIONAL_TEXT(3, 0);
func_15();
iVar0=0;
while (iVar0 <=13){
if(Local_138.f_1801[iVar0 /*14*/].f_12 > -1){
AUDIO::STOP_SOUND(Local_138.f_1801[iVar0 /*14*/].f_12);
AUDIO::RELEASE_SOUND_ID(Local_138.f_1801[iVar0 /*14*/].f_12);
Local_138.f_1801[iVar0 /*14*/].f_12=-1;
}
if(Local_138.f_1801[iVar0 /*14*/].f_13 > -1){
AUDIO::STOP_SOUND(Local_138.f_1801[iVar0 /*14*/].f_13);
AUDIO::RELEASE_SOUND_ID(Local_138.f_1801[iVar0 /*14*/].f_13);
Local_138.f_1801[iVar0 /*14*/].f_13=-1;
}
iVar0++;
}
func_14(&(Local_138.f_2729));
func_12(func_13(6));
AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_VINEWOOD/DLC_VW_AM_IP");
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_ip_in_gameplay_scene")){
AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_ip_in_gameplay_scene");
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_ip_in_menus_scene")){
AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_ip_in_menus_scene");
}
func_11();
func_9();
func_8(12);
func_7(0);
func_4();
func_2();
}


void func_4(){
if(MISC::IS_BIT_SET(Local_138.f_2904, 7)){
func_5(12, "CLO_VWM_U_23_1", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
}
if(MISC::IS_BIT_SET(Local_138.f_2904, 8)){
func_5(12, "CLO_VWM_U_23_3", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
}
if(MISC::IS_BIT_SET(Local_138.f_2904, 9)){
func_5(12, "CLO_VWM_D_1_10", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
}
if(MISC::IS_BIT_SET(Local_138.f_2904, 10)){
func_5(12, "CLO_VWM_U_23_6", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
}
if(MISC::IS_BIT_SET(Local_138.f_2904, 11)){
func_5(12, "CLO_VWM_D_1_9", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
}}


void func_5(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10){
int iVar0;
iVar0=func_6(&Global_1662687);
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

int func_6(var uParam0){
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


void func_7(int iParam0){
Global_1935867=iParam0;
}


void func_8(int iParam0){
Local_138.f_2870=iParam0;
}


void func_9(){
Local_138.f_2947=-1;
if(Local_138.f_2901 !=-2147483647){
Local_138.f_2901=-2147483647;
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(Local_138.f_2903)){
Local_138.f_2903=func_10();
}
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
HUD::CLEAR_HELP(1);
}}


var func__10(){
var uVar0;
return uVar0;
}


void func_11(){
if(Local_138.f_2879 !=0){
GRAPHICS::STOP_BINK_MOVIE(Local_138.f_2879);
GRAPHICS::RELEASE_BINK_MOVIE(Local_138.f_2879);
}
if(Local_138.f_2880 !=0){
GRAPHICS::STOP_BINK_MOVIE(Local_138.f_2880);
GRAPHICS::RELEASE_BINK_MOVIE(Local_138.f_2880);
}
if(Local_138.f_2881 !=0){
GRAPHICS::STOP_BINK_MOVIE(Local_138.f_2881);
GRAPHICS::RELEASE_BINK_MOVIE(Local_138.f_2881);
}}


void func_12(var uParam0){
AUDIO::TRIGGER_MUSIC_EVENT(uParam0);
}


char* func_13(int iParam0){
switch (iParam0){
case 0:
return "CASINO_IAP_THEME_START";
case 1:
switch (Local_138.f_2871){
case 0:
return "CASINO_IAP_LEVEL1_BRIEF";
case 1:
return "CASINO_IAP_LEVEL2_BRIEF";
case 2:
return "CASINO_IAP_LEVEL3_BRIEF";
case 3:
return "CASINO_IAP_LEVEL4_BRIEF";
case 4:
return "CASINO_IAP_LEVEL5_BRIEF";
default:
}
break;
case 2:
switch (Local_138.f_2871){
case 0:
return "CASINO_IAP_LEVEL1_PLAY";
case 1:
return "CASINO_IAP_LEVEL2_PLAY";
case 2:
return "CASINO_IAP_LEVEL3_PLAY";
case 3:
return "CASINO_IAP_LEVEL4_PLAY";
case 4:
return "CASINO_IAP_LEVEL5_PLAY";
default:
}
break;
case 3:
return "CASINO_LEVEL_END";
case 4:
return "CASINO_IAP_LEADERBOARD_START";
case 5:
return "CASINO_IAP_STAGE_CLEAR";
case 6:
return "CASINO_STOP_MUSIC";
case 7:
return "CASINO_STOP_NO_FADE";
}
return "INVALID MUSIC EVENT";
}


void func_14(var uParam0){
if(!AUDIO::HAS_SOUND_FINISHED(*uParam0)){
AUDIO::STOP_SOUND(*uParam0);
}
AUDIO::RELEASE_SOUND_ID(*uParam0);
*uParam0=-1;
}


void func_15(){
if(Local_138.f_2368.f_338 > -1){
AUDIO::STOP_SOUND(Local_138.f_2368.f_338);
AUDIO::RELEASE_SOUND_ID(Local_138.f_2368.f_338);
Local_138.f_2368.f_338=-1;
}
if(Local_138.f_2368.f_339 > -1){
AUDIO::STOP_SOUND(Local_138.f_2368.f_339);
AUDIO::RELEASE_SOUND_ID(Local_138.f_2368.f_339);
Local_138.f_2368.f_339=-1;
}
if(Local_138.f_2368.f_340 > -1){
AUDIO::STOP_SOUND(Local_138.f_2368.f_340);
AUDIO::RELEASE_SOUND_ID(Local_138.f_2368.f_340);
Local_138.f_2368.f_340=-1;
}
if(Local_138.f_2368.f_341 > -1){
AUDIO::STOP_SOUND(Local_138.f_2368.f_341);
AUDIO::RELEASE_SOUND_ID(Local_138.f_2368.f_341);
Local_138.f_2368.f_341=-1;
}
if(Local_138.f_2368.f_342 > -1){
AUDIO::STOP_SOUND(Local_138.f_2368.f_342);
AUDIO::RELEASE_SOUND_ID(Local_138.f_2368.f_342);
Local_138.f_2368.f_342=-1;
}
if(Local_138.f_2368.f_343 > -1){
AUDIO::STOP_SOUND(Local_138.f_2368.f_343);
AUDIO::RELEASE_SOUND_ID(Local_138.f_2368.f_343);
Local_138.f_2368.f_343=-1;
}}


char* func_16(){
if(func_17()){
return "MPInvPersPlayerGold";
}
return "MPInvPersPlayer";
}


bool func_17(){
return MISC::IS_BIT_SET(Local_138.f_2904, 0);
}


void func_18(){
Global_1648804=0;
func_40();
Global_4718592.f_165275=0;
func_39();
MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863), 16);
func_38(0, 1, 1, 0);
func_37();
if(func_35() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_20(PLAYER::PLAYER_ID(), 1, 0, 0);
}else{
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
}}
func_19(0, 0, -1);
func_19(1, 0, -1);
func_19(2, 0, -1);
func_19(3, 0, -1);
func_19(4, 0, -1);
func_19(6, 0, -1);
func_19(7, 0, -1);
func_19(8, 0, -1);
func_19(9, 0, -1);
func_19(10, 0, -1);
func_19(11, 0, -1);
func_19(12, 0, -1);
func_19(13, 0, -1);
func_19(14, 0, -1);
func_19(15, 0, -1);
func_19(16, 0, -1);
}


void func_19(bool bParam0, bool bParam1, int iParam2){
switch (iParam0){
case 5:
if(iParam2 > -1){
Global_1654054.f_137[iParam2]=bParam1;
}
break;
default:
if(bParam1){
MISC::SET_BIT(&(Global_1654054.f_1046), iParam0);
}else{
MISC::CLEAR_BIT(&(Global_1654054.f_1046), bParam0);
}
break;
}}


void func_20(int iParam0, bool bParam1, int iParam2, int iParam3){
var uVar0;
bool bVar1;
bool bVar2;
bool bVar3;
bool bVar4;
bool bVar5;
bool bVar6;
bool bVar7;
bool bVar8;
bool bVar9;
bool bVar10;
bool bVar11;
bool bVar12;
bool bVar13;
bool bVar14;
bool bVar15;
bool bVar16;
bool bVar17;
bool bVar18;
bool bVar19;
bool bVar20;
bool bVar21;
bool bVar22;
bool bVar23;
bool bVar24;
bool bVar25;
bool bVar26;
var uVar27;
int iVar28;
if(bParam1){
if(SCRIPT::GET_NO_LOADING_SCREEN()){
SCRIPT::SET_NO_LOADING_SCREEN(0);
}}
if(func_34()){
if(bParam1){
return;
}else{
iParam3=1;
}}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uVar0=iParam2;
PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
}else{
bVar1=true;
bVar2=iParam2 & 2 !=false;
bVar3=iParam2 & 4 !=false;
bVar4=iParam2 & 8 !=false;
bVar5=iParam2 & 16 !=false;
bVar6=iParam2 & 32 !=false;
bVar7=iParam2 & 64 !=false;
bVar8=iParam2 & 128 !=false;
bVar9=iParam2 & 256 !=false;
bVar10=iParam2 & 512 !=false;
bVar11=iParam2 & 1024 !=false;
bVar12=iParam2 & 2048 !=false;
bVar13=iParam2 & 4096 !=false;
bVar14=iParam2 & 8192 !=false;
bVar15=iParam2 & 16384 !=false;
bVar16=iParam2 & 32768 !=false;
bVar17=iParam2 & 65536 !=false;
bVar18=iParam2 & 131072 !=false;
bVar19=iParam2 & 262144 !=false;
bVar20=iParam2 & 524288 !=false;
bVar21=iParam2 & 1048576 !=false;
bVar22=iParam2 & 2097152 !=false;
bVar23=iParam2 & 4194304 !=false;
bVar24=iParam2 & 8388608 !=false;
bVar25=iParam2 & 16777216 !=false;
if(iParam2 & 33554432 !=0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
bVar1=false;
}
if(!func_35()){
bVar26=false;
if(bParam1==1){
bVar26=true;
}
if(bVar16==0 && !bVar21){
bVar26=true;
}
if(bVar10==1){
bVar26=true;
}
if(bVar26){
return;
}}
if(bVar18){
}
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3==1)){
if(iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0)){
return;
}
uVar27=PLAYER::GET_PLAYER_PED(iParam0);
if(!bVar20){
if((bVar19 && bParam1==0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
NETWORK::FADE_OUT_LOCAL_PLAYER(1);
}elseif(bVar14 || ((!func_30(PLAYER::PLAYER_ID(), 0) && !func_29()) && !func_28(PLAYER::PLAYER_ID()))){
ENTITY::SET_ENTITY_VISIBLE(uVar27, !bVar14, 0);
}
if(!bVar14){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19){
NETWORK::FADE_OUT_LOCAL_PLAYER(0);
}
Global_2657704[iParam0 /*463*/].f_254=0;
}}
if(bParam1){
if(bVar1){
func_25(0, 0, 0);
if(bVar25){
STREAMING::CLEAR_FOCUS();
}}
if(!func_24(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27)){
if(!bVar22){
ENTITY::SET_ENTITY_COLLISION(uVar27, true, 0);
}}
if(!ENTITY::IS_ENTITY_ATTACHED(uVar27)){
if(!bVar21){
ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
}
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uVar27, 1);
}elseif(!bVar21){
ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
}
PED::SET_PED_CAN_BE_TARGETTED(uVar27, true);
PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(iParam0, 0);
if(PED::HAS_PED_HEAD_BLEND_FINISHED(uVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uVar27)){
PED::FINALIZE_HEAD_BLEND(uVar27);
}
PED::SET_PED_CAN_RAGDOLL(uVar27, 1);
if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())==0){
func_23();
func_22();
}
if(PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
if(!bVar23){
}}
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
}
Global_2657704[iParam0 /*463*/].f_255=0;
if(!bVar24){
bVar3=true;
}
if(Global_2635560.f_2781){
Global_2635560.f_2781=0;
}}else{
if(!func_24(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27)){
if(!bVar22){
ENTITY::SET_ENTITY_COLLISION(uVar27, !bVar15, 0);
}
if(!ENTITY::IS_ENTITY_ATTACHED(uVar27)){
if(!bVar21){
ENTITY::FREEZE_ENTITY_POSITION(uVar27, bVar16);
}
if(!bVar16){
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uVar27, 1);
}}
if(func_21(Global_4718592.f_171044)){
ENTITY::FREEZE_ENTITY_POSITION(uVar27, true);
}}
if(Global_1575038){
bVar10=false;
}
if(bVar10){
PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
}else{
PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
}
PED::SET_PED_CAN_BE_TARGETTED(uVar27, bVar17);
if(bVar3){
if(!PED::IS_PED_FATALLY_INJURED(uVar27) && !PED::IS_PED_IN_ANY_VEHICLE(uVar27, 0)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(uVar27);
}}}
iVar28=0;
if(bVar2){
iVar28 |=2;
}
if(bVar3){
iVar28 |=4;
}
if(bVar4){
iVar28 |=8;
}
if(bVar5){
iVar28 |=16;
}
if(bVar6){
iVar28 |=32;
}
if(bVar7){
iVar28 |=64;
}
if(bVar8){
iVar28 |=128;
}
if(bVar9){
iVar28 |=256;
}
if(bVar10){
iVar28 |=512;
}
if(bVar11){
iVar28 |=1024;
}
if(bVar12){
iVar28 |=2048;
}
if(bVar13){
iVar28 |=4096;
}
PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
}}}


bool func_21(int iParam0){
return iParam0==17;
}


void func_22(){
struct<3> Var0;
Global_2672524.f_1024=0;
Global_2672524.f_1025=0;
Global_2672524.f_1026={
9999.9f, 9999.9f, 9999.9f 
};
Global_2672524.f_1031=-1;
Global_2672524.f_1032=0;
Global_2635560.f_2792={
Var0 
};
}


void func_23(){
Global_2635560.f_702=0;
Global_2635560.f_2835=0;
Global_2635560.f_515=0;
Global_2635560.f_606=0;
Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_217=0;
Global_2635560.f_2790=0;
}

int func_24(var uParam0){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1)){
return 1;
}else{
iVar0=TASK::GET_SCRIPT_TASK_STATUS(uParam0, joaat("script_task_enter_vehicle"));
if(iVar0==0){
return 1;
}}
return 0;
}


void func_25(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
if(ENTITY::IS_ENTITY_DEAD(iParam1, 0)){}
if(iParam0==1){
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
if(PED::IS_PED_A_PLAYER(iParam1)){
if(!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1))){
iVar0=1;
}}}}
if(iVar0==0){
if(iParam2==1){
if(iParam0==1){
func_27();
}elseif(!MISC::IS_BIT_SET(Global_2621446.f_67, 1)){
if(MISC::IS_BIT_SET(Global_2621446.f_67, 2)){
iVar1=0;
while (iVar1 < 8){
CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
iVar1++;
}}
MISC::SET_BIT(&(Global_2621446.f_67), true);
}}
if(func_30(PLAYER::PLAYER_ID(), 0)){
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
}else{
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
}
HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
func_26(joaat("mpply_is_char_spectating"), iParam0);
}}


void func_26(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
}}


void func_27(){
int iVar0;
if(!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
if(!MISC::IS_BIT_SET(Global_2621446.f_67, 2)){
iVar0=0;
while (iVar0 < 8){
Global_2621446.f_58[iVar0]=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
iVar0++;
}
MISC::SET_BIT(&(Global_2621446.f_67), 2);
MISC::SET_BIT(&(Global_2621446.f_67), false);
}}}

int func_28(int iParam0){
if(func_30(iParam0, 0)){
return 1;
}
if(func_29()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_29(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}


bool func_30(int iParam0, int iParam1){
bool bVar0;
if(!func_33(iParam0)){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_31(-1, 0)==8;
}else{
bVar0=Global_1853988[iParam0 /*867*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_31(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_32();
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

int func_32(){
return Global_1574918;
}

int func_33(var uParam0){
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

int func_34(){
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863, 2) && !Global_2684820.f_2846.f_216==-1){
return 1;
}
return 0;
}

int func_35(){
if(func_36()==0){
return 1;
}
return 0;
}

int func_36(){
return Global_1574632.f_18;
}


void func_37(){
if(Global_2672524.f_947.f_10){
Global_2672524.f_947.f_10=0;
}}

int func_38(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && iParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, iParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}


void func_39(){
if(Global_1936392){}
Global_1936392=0;
}


void func_40(){
if(!Global_1574747){
return;
}
func_41();
}


void func_41(){
Global_1574747=0;
StringCopy(&(Global_1574747.f_1), "", 32);
Global_1574747.f_9=0;
}


void func_42(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&Local_137)){
return;
}
if(Local_137.f_19==0){
return;
}
Local_137.f_19=(NETWORK::GET_NETWORK_TIME_ACCURATE() - Local_137.f_19);
STATS::PLAYSTATS_ARCADE_GAME(MISC::GET_HASH_KEY(&Local_137), Local_137.f_16, Local_137.f_17, Local_137.f_18, Local_137.f_19, Local_137.f_20, Local_137.f_21);
}

int func_43(){
if(PLAYER::PLAYER_ID() !=func_46()){
switch (func_44()){
case 17:
return 2003554330;
break;
case 15:
return 729976867;
break;
default:
return 0;
break;
}}
return 0;
}

int func_44(){
return func_45(Global_1950844.f_514);
}

int func_45(int iParam0){
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

int func_46(){
return -1;
}

int func_47(){
int iVar0;
iVar0=0;
iVar0=(iVar0 + Local_138.f_2712);
iVar0=(iVar0 + Local_138.f_2712.f_3);
iVar0=(iVar0 + Local_138.f_2712.f_7);
iVar0=(iVar0 + Local_138.f_2712.f_10);
iVar0=(iVar0 + Local_138.f_2712.f_12);
iVar0=(iVar0 + Local_138.f_2712.f_11);
return iVar0;
}


void func_48(){
func_360();
func_51();
func_49();
}


void func_49(){
if(!func_50()){
HUD::HIDE_HELP_TEXT_THIS_FRAME();
}
Local_138.f_2368.f_324=Local_138.f_2368.f_325;
}


bool func_50(){
return MISC::IS_BIT_SET(Local_138.f_2368.f_333, 2);
}


void func_51(){
switch (Local_138.f_2870){
case 0:
func_341();
break;
case 1:
func_336();
break;
case 2:
func_334();
break;
case 3:
func_332();
break;
case 4:
func_324();
break;
case 5:
func_317();
break;
case 6:
func_314();
break;
case 7:
func_274();
break;
case 8:
func_272();
break;
case 9:
func_102();
break;
case 10:
func_52();
break;
case 11:
func_3();
break;
case 12:
break;
}}


void func_52(){
func_84();
func_69();
func_64();
if(!func_63()){
return;
}
if(func_62() < 10){
Local_138.f_2912[func_62() /*3*/].f_2=0;
Local_138.f_2912[func_62() /*3*/]=Local_138.f_2944;
}
func_9();
func_61();
func_60();
func_54();
func_53("Frontend_Retry");
func_8(4);
}


void func_53(char* sParam0){
AUDIO::PLAY_SOUND_FRONTEND(-1, sParam0, "dlc_vw_am_ip_frontend_sounds", 0);
}


void func_54(){
Local_138.f_2871=0;
func_59();
Local_138.f_2943=0;
Local_138.f_2944=0;
Local_138.f_2945=-1;
if(func_58(&(Local_138.f_2898), 33)){
func_55(&(Local_138.f_2898), 33);
}}


void func_55(var uParam0, int iParam1){
MISC::CLEAR_BIT(uParam0[func_57(iParam1)], func_56(iParam1));
}

int func_56(int iParam0){
if(iParam0 < 31){
return iParam0;
}elseif(iParam0 < 62){
return (iParam0 - 31);
}
return (iParam0 - func_57(iParam0) * 31);
}

int func_57(int iParam0){
if(iParam0 < 31){
return 0;
}elseif(iParam0 < 62){
return 1;
}
return (iParam0 / 31);
}


bool func_58(var uParam0, int iParam1){
return MISC::IS_BIT_SET((*uParam0)[func_57(iParam1)], func_56(iParam1));
}


void func_59(){
Local_138.f_2712=0;
Local_138.f_2712.f_1=0;
Local_138.f_2712.f_2=0;
Local_138.f_2712.f_3=0;
Local_138.f_2712.f_4=0;
Local_138.f_2712.f_6=0;
Local_138.f_2712.f_5=0;
Local_138.f_2712.f_7=0;
Local_138.f_2712.f_8=0;
Local_138.f_2712.f_9=0;
Local_138.f_2712.f_10=0;
Local_138.f_2712.f_11=0;
Local_138.f_2712.f_12=0;
}


void func_60(){
Local_138.f_2880=GRAPHICS::SET_BINK_MOVIE("I&P_intro_16x9");
GRAPHICS::PLAY_BINK_MOVIE(Local_138.f_2880);
GRAPHICS::SET_BINK_SHOULD_SKIP(Local_138.f_2880, 1);
}


void func_61(){
GRAPHICS::STOP_BINK_MOVIE(Local_138.f_2881);
GRAPHICS::RELEASE_BINK_MOVIE(Local_138.f_2881);
}

int func_62(){
int iVar0;
if(Local_138.f_2945 !=-1){
return Local_138.f_2945;
}
iVar0=0;
while (iVar0 <=9){
if(Local_138.f_2912[iVar0 /*3*/].f_2){
Local_138.f_2945=iVar0;
return iVar0;
}
iVar0++;
}
return 99;
}

int func_63(){
int iVar0;
iVar0=199;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
iVar0=201;
}
if(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar0)){
return 1;
}
return 0;
}


void func_64(){
char cVar0[16];
MISC::SET_BIT(&(Local_138.f_2368.f_333), 2);
if(func_62()==99 || Local_138.f_2943 > 2){
StringCopy(&cVar0, "IAP_H_LBD0", 16);
if(func_68()){
StringConCat(&cVar0, "_PS4", 16);
}}elseif(Local_138.f_2943==2){
StringCopy(&cVar0, "IAP_H_LBD1", 16);
}else{
StringCopy(&cVar0, "IAP_H_LBD2", 16);
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
StringConCat(&cVar0, "_PC", 16);
}
if(func_67(&cVar0)){
return;
}
func_9();
func_65(&cVar0);
}


void func_65(char[4] cParam0){
Local_138.f_2947=MISC::GET_HASH_KEY(cParam0);
func_66(cParam0);
}


void func_66(var uParam0){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_67(char[4] cParam0){
if(Local_138.f_2947==MISC::GET_HASH_KEY(cParam0)){
return 1;
}
return 0;
}


bool func_68(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


void func_69(){
int iVar0[4];
int iVar1;
int iVar2;
int iVar3;
int iVar4;
char cVar5[0];
int iVar6;
if(func_62() >=10){
return;
}
if(SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(Local_138.f_2946)){
if(SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(Local_138.f_2946)){
return;
}
if(SOCIALCLUB::SC_PROFANITY_GET_STRING_PASSED(Local_138.f_2946)){
Local_138.f_2912[func_62() /*3*/]=Local_138.f_2944;
func_76(func_78(PLAYER::PLAYER_ID()), 1, func_62(), Local_138.f_2912[func_62() /*3*/], Local_138.f_2912[func_62() /*3*/].f_1, 0);
Local_138.f_2946=0;
}else{
func_53("Frontend_Change_Letter");
Local_138.f_2943=0;
Local_138.f_2944=0;
Local_138.f_2946=0;
}
return;
}
if(Local_138.f_2943 >=3){
return;
}
iVar1=227;
iVar2=226;
iVar3=191;
iVar4=194;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
iVar3=237;
iVar4=238;
iVar1=188;
iVar2=187;
}
if(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar3)){
Local_138.f_2943++;
if(Local_138.f_2943 >=3){
Local_138.f_2943=3;
func_74(Local_138.f_2944, &iVar0);
StringCopy(&cVar5, func_73(iVar0[0]), 4);
StringConCat(&cVar5, func_73(iVar0[1]), 4);
StringConCat(&cVar5, func_73(iVar0[2]), 4);
if(SOCIALCLUB::SC_PROFANITY_CHECK_STRING(&cVar5, &(Local_138.f_2946))){
func_53("Frontend_Entered_Score");
}}
return;
}
if(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar4)){
if(Local_138.f_2943 > 0){
Local_138.f_2943=(Local_138.f_2943 - 1);
}
return;
}
iVar6=0;
if(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar1)){
iVar6=1;
}elseif(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar2)){
iVar6=-1;
}
if(iVar6==0){
return;
}
func_53("Frontend_Change_Letter");
func_74(Local_138.f_2944, &iVar0);
iVar0[Local_138.f_2943]=(iVar0[Local_138.f_2943] + iVar6);
if(iVar0[Local_138.f_2943] >=36){
iVar0[Local_138.f_2943]=0;
}elseif(iVar0[Local_138.f_2943] < 0){
iVar0[Local_138.f_2943]=35;
}
Local_138.f_2944=func_70(&iVar0);
}


var func__70(int iParam0){
int iVar0;
var uVar1;
iVar0=0;
while (iVar0 <=3){
func_71(&uVar1, iVar0, 6, (*iParam0)[iVar0]);
iVar0++;
}
return uVar1;
}


void func_71(var uParam0, int iParam1, int iParam2, int iParam3){
var uVar0;
uVar0=func_72(iParam2, (iParam1 * iParam2));
*uParam0=(*uParam0 - (*uParam0 && uVar0));
*uParam0=(*uParam0 || shift_left(iParam3, (iParam1 * iParam2)));
}


var func__72(int iParam0, int iParam1){
var uVar0;
int iVar1;
iVar1=0;
while (iVar1 <=(iParam0 - 1)){
MISC::SET_BIT(&uVar0, (iParam1 + iVar1));
iVar1++;
}
return uVar0;
}


char* func_73(int iParam0){
switch (iParam0){
case 0:
return "A";
case 1:
return "B";
case 2:
return "C";
case 3:
return "D";
case 4:
return "E";
case 5:
return "F";
case 6:
return "G";
case 7:
return "H";
case 8:
return "I";
case 9:
return "J";
case 10:
return "K";
case 11:
return "L";
case 12:
return "M";
case 13:
return "N";
case 14:
return "O";
case 15:
return "P";
case 16:
return "Q";
case 17:
return "R";
case 18:
return "S";
case 19:
return "T";
case 20:
return "U";
case 21:
return "V";
case 22:
return "W";
case 23:
return "X";
case 24:
return "Y";
case 25:
return "Z";
case 26:
return "0";
case 27:
return "1";
case 28:
return "2";
case 29:
return "3";
case 30:
return "4";
case 31:
return "5";
case 32:
return "6";
case 33:
return "7";
case 34:
return "8";
case 35:
return "9";
default:
}
return "";
}


void func_74(int iParam0, var uParam1){
int iVar0;
iVar0=0;
while (iVar0 <=3){
(*uParam1)[iVar0]=func_75(iParam0, iVar0, 6);
iVar0++;
}}


var func__75(int iParam0, int iParam1, int iParam2){
var uVar0;
uVar0=func_72(iParam2, 0);
return (shift_right(iParam0, (iParam1 * iParam2)) && uVar0);
}


void func_76(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5){
struct<7> Var0;
int iVar1;
Var0.f_0=1953474326;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam1;
Var0.f_3=iParam2;
Var0.f_4=uParam3;
Var0.f_5=uParam4;
Var0.f_6=iParam5;
iVar1=func_77(iParam0);
if(!iVar1==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 7, iVar1);
}}


var func__77(bool bParam0){
var uVar0;
if(func_33(iParam0)){
MISC::SET_BIT(&uVar0, iParam0);
}
return uVar0;
}

int func_78(int iParam0){
int iVar0;
if(iParam0==func_46()){
return iParam0;
}
if(func_82(iParam0) !=-1){
iVar0=func_45(func_82(iParam0));
if(((iVar0==2 || iVar0==1) || iVar0==0) || iVar0==25){
if(func_80(iParam0, 0)){
return func_79(iParam0);
}
return iParam0;
}elseif(iVar0==3){
return func_46();
}
return Global_2657704[iParam0 /*463*/].f_321.f_10;
}
return func_46();
}

int func_79(int iParam0){
if(func_33(iParam0)){
return Global_1895156[iParam0 /*609*/].f_10;
}
return func_46();
}


bool func_80(int iParam0, bool bParam1){
if(!func_33(iParam0)){
return 0;
}
if(!bParam1){
if(func_81(iParam0)){
return 0;
}}
return Global_1895156[iParam0 /*609*/].f_10 !=func_46();
}

int func_81(int iParam0){
if(func_33(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_46()){
return Global_1895156[iParam0 /*609*/].f_10==iParam0;
}}
return 0;
}

int func_82(int iParam0){
if(iParam0 !=func_46()){
if(func_83(iParam0, 1, 1)){
return Global_2657704[iParam0 /*463*/].f_321.f_7;
}elseif(((Global_1575063 || Global_2635560.f_2780) && iParam0==PLAYER::PLAYER_ID()) && func_83(iParam0, 1, 0)){
return Global_2657704[iParam0 /*463*/].f_321.f_7;
}}
return -1;
}

int func_83(int iParam0, bool bParam1, bool bParam2){
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


void func_84(){
var uVar0[4];
float fVar1;
int iVar2;
int iVar3;
GRAPHICS::DRAW_BINK_MOVIE(Local_138.f_2881, 0.5f, 0.5f, (1f * fLocal_134), 1f, 0f, 255, 255, 255, 255);
fVar1=0.22f;
iVar2=0;
iVar2=0;
while (iVar2 <=9){
if(Local_138.f_2912[iVar2 /*3*/].f_2 && (Local_138.f_2943 < 3 || SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(Local_138.f_2946))){
func_74(Local_138.f_2944, &uVar0);
}else{
func_74(Local_138.f_2912[iVar2 /*3*/], &uVar0);
}
iVar3=255;
if(Local_138.f_2912[iVar2 /*3*/].f_2){
iVar3=round(MISC::ABSF((sin((to_float(NETWORK::GET_NETWORK_TIME()) * 0.5f)) * 80f))) + 175;
}
HUD::SET_TEXT_SCALE(1f, 1f);
HUD::SET_TEXT_COLOUR(0, 0, 0, iVar3);
HUD::SET_TEXT_RIGHT_JUSTIFY(1);
HUD::SET_TEXT_WRAP(func_101(0f), func_101((0.37f + 0.001041667f)));
HUD::SET_TEXT_FONT(7);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_100(iVar2));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_101(0.5f), (fVar1 + 0.003703704f), 0);
HUD::SET_TEXT_SCALE(1f, 1f);
HUD::SET_TEXT_COLOUR(255, 255, 255, iVar3);
HUD::SET_TEXT_RIGHT_JUSTIFY(1);
HUD::SET_TEXT_WRAP(func_101(0f), func_101(0.37f));
HUD::SET_TEXT_FONT(7);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_100(iVar2));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_101(0.5f), fVar1, 0);
HUD::SET_TEXT_SCALE(1f, 1f);
if(Local_138.f_2912[iVar2 /*3*/].f_2 && Local_138.f_2943==0){
HUD::SET_TEXT_COLOUR(Local_138.f_1765.f_24, Local_138.f_1765.f_24.f_1, Local_138.f_1765.f_24.f_2, 255);
}else{
HUD::SET_TEXT_COLOUR(0, 0, 0, iVar3);
}
HUD::SET_TEXT_RIGHT_JUSTIFY(1);
HUD::SET_TEXT_WRAP(func_101(0f), func_101((0.4135417f + 0.001041667f)));
HUD::SET_TEXT_FONT(7);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_73(uVar0[0]));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_101(0.5f), (fVar1 + 0.003703704f), 0);
HUD::SET_TEXT_SCALE(1f, 1f);
if(Local_138.f_2912[iVar2 /*3*/].f_2 && Local_138.f_2943==0){
HUD::SET_TEXT_COLOUR(Local_138.f_1765.f_28, Local_138.f_1765.f_28.f_1, Local_138.f_1765.f_28.f_2, 255);
}else{
HUD::SET_TEXT_COLOUR(255, 255, 255, iVar3);
}
HUD::SET_TEXT_RIGHT_JUSTIFY(1);
HUD::SET_TEXT_WRAP(func_101(0f), func_101(0.4135417f));
HUD::SET_TEXT_FONT(7);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_73(uVar0[0]));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_101(0.5f), fVar1, 0);
HUD::SET_TEXT_SCALE(1f, 1f);
if(Local_138.f_2912[iVar2 /*3*/].f_2 && Local_138.f_2943==1){
HUD::SET_TEXT_COLOUR(Local_138.f_1765.f_24, Local_138.f_1765.f_24.f_1, Local_138.f_1765.f_24.f_2, 255);
}else{
HUD::SET_TEXT_COLOUR(0, 0, 0, iVar3);
}
HUD::SET_TEXT_RIGHT_JUSTIFY(1);
HUD::SET_TEXT_WRAP(func_101(0f), func_101((0.4411458f + 0.001041667f)));
HUD::SET_TEXT_FONT(7);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_73(uVar0[1]));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_101(0.5f), (fVar1 + 0.003703704f), 0);
HUD::SET_TEXT_SCALE(1f, 1f);
if(Local_138.f_2912[iVar2 /*3*/].f_2 && Local_138.f_2943==1){
HUD::SET_TEXT_COLOUR(Local_138.f_1765.f_28, Local_138.f_1765.f_28.f_1, Local_138.f_1765.f_28.f_2, 255);
}else{
HUD::SET_TEXT_COLOUR(255, 255, 255, iVar3);
}
HUD::SET_TEXT_RIGHT_JUSTIFY(1);
HUD::SET_TEXT_WRAP(func_101(0f), func_101(0.4411458f));
HUD::SET_TEXT_FONT(7);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_73(uVar0[1]));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_101(0.5f), fVar1, 0);
HUD::SET_TEXT_SCALE(1f, 1f);
if(Local_138.f_2912[iVar2 /*3*/].f_2 && Local_138.f_2943==2){
HUD::SET_TEXT_COLOUR(Local_138.f_1765.f_24, Local_138.f_1765.f_24.f_1, Local_138.f_1765.f_24.f_2, 255);
}else{
HUD::SET_TEXT_COLOUR(0, 0, 0, iVar3);
}
HUD::SET_TEXT_RIGHT_JUSTIFY(1);
HUD::SET_TEXT_WRAP(func_101(0f), func_101((0.46875f + 0.001041667f)));
HUD::SET_TEXT_FONT(7);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_73(uVar0[2]));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_101(0.5f), (fVar1 + 0.003703704f), 0);
HUD::SET_TEXT_SCALE(1f, 1f);
if(Local_138.f_2912[iVar2 /*3*/].f_2 && Local_138.f_2943==2){
HUD::SET_TEXT_COLOUR(Local_138.f_1765.f_28, Local_138.f_1765.f_28.f_1, Local_138.f_1765.f_28.f_2, 255);
}else{
HUD::SET_TEXT_COLOUR(255, 255, 255, iVar3);
}
HUD::SET_TEXT_RIGHT_JUSTIFY(1);
HUD::SET_TEXT_WRAP(func_101(0f), func_101(0.46875f));
HUD::SET_TEXT_FONT(7);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_73(uVar0[2]));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_101(0.5f), fVar1, 0);
HUD::SET_TEXT_SCALE(1f, 1f);
HUD::SET_TEXT_COLOUR(0, 0, 0, iVar3);
HUD::SET_TEXT_RIGHT_JUSTIFY(1);
HUD::SET_TEXT_WRAP(func_101(0f), func_101((0.695f + 0.001041667f)));
HUD::SET_TEXT_FONT(7);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("IAP_SCR");
HUD::ADD_TEXT_COMPONENT_INTEGER(Local_138.f_2912[iVar2 /*3*/].f_1);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_101(0.5f), (fVar1 + 0.003703704f), 0);
HUD::SET_TEXT_SCALE(1f, 1f);
HUD::SET_TEXT_COLOUR(255, 255, 255, iVar3);
HUD::SET_TEXT_RIGHT_JUSTIFY(1);
HUD::SET_TEXT_WRAP(func_101(0f), func_101(0.695f));
HUD::SET_TEXT_FONT(7);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("IAP_SCR");
HUD::ADD_TEXT_COMPONENT_INTEGER(Local_138.f_2912[iVar2 /*3*/].f_1);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_101(0.5f), fVar1, 0);
fVar1=(fVar1 + 0.06f);
iVar2++;
}
func_87();
func_85();
}


void func_85(){
func_86("MPInvPersMessages", "facade", 0.5f, 0.5f, 1f, 1f, 0f, Local_138.f_1765);
}


void func_86(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, struct<4> Param7){
int iVar0;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
return;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return;
}
iVar0=round((fParam3 * IntToFloat(iLocal_136)));
fParam3=(to_float(iVar0) * (1f / IntToFloat(iLocal_136)));
iVar0=round(((fParam5 * IntToFloat(iLocal_136)) / 4f)) * 4;
fParam5=(to_float(iVar0) * (1f / IntToFloat(iLocal_136)));
GRAPHICS::DRAW_SPRITE_ARX(sParam0, sParam1, func_101(fParam2), fParam3, (fParam4 * fLocal_134), fParam5, fParam6, Param7.f_0, Param7.f_1, Param7.f_2, Param7.f_3, 0, 1);
}


void func_87(){
int iVar0;
iVar0=0;
while (iVar0 < 8){
func_88(iVar0);
iVar0++;
}}


void func_88(int iParam0){
struct<2> Var0;
struct<2> Var1;
struct<2> Var2;
struct<4> Var3;
float fVar4;
if(!Local_147[iParam0 /*17*/]){
return;
}
Var0={
func_99() 
};
Var3.f_3=255;
if(Local_147[iParam0 /*17*/].f_3){
Var0.f_0=-Var0.f_0;
}
Var1={
func_98() 
};
if(!Local_147[iParam0 /*17*/].f_2){
if(Local_147[iParam0 /*17*/].f_4 > 0){
Var1.f_1=(Var1.f_1 - ((Var0.f_1 * (IntToFloat(Local_147[iParam0 /*17*/].f_4) % (IntToFloat(Local_147[iParam0 /*17*/].f_6) * 1f))) / (IntToFloat(Local_147[iParam0 /*17*/].f_6) * 1f)));
Var2={
Var1 
};
Var2.f_1=(Var2.f_1 + Var0.f_1);
}elseif(Local_147[iParam0 /*17*/].f_7 > 0){
Local_147[iParam0 /*17*/].f_4=MISC::GET_RANDOM_INT_IN_RANGE(0, Local_147[iParam0 /*17*/].f_7);
Local_147[iParam0 /*17*/].f_2=1;
}}elseif(Local_147[iParam0 /*17*/].f_4 > 0){}else{
Local_147[iParam0 /*17*/].f_4=Local_147[iParam0 /*17*/].f_6;
Local_147[iParam0 /*17*/].f_2=0;
}
if(Local_147[iParam0 /*17*/].f_1){
fVar4=(to_float(Local_147[iParam0 /*17*/].f_5) / to_float(Local_147[iParam0 /*17*/].f_8));
Var3.f_0=func_97(Local_147[iParam0 /*17*/].f_9, Local_147[iParam0 /*17*/].f_13, fVar4);
Var3.f_1=func_97(Local_147[iParam0 /*17*/].f_9.f_1, Local_147[iParam0 /*17*/].f_13.f_1, fVar4);
Var3.f_2=func_97(Local_147[iParam0 /*17*/].f_9.f_2, Local_147[iParam0 /*17*/].f_13.f_2, fVar4);
Var3.f_3=func_97(Local_147[iParam0 /*17*/].f_9.f_3, Local_147[iParam0 /*17*/].f_13.f_3, fVar4);
}else{
Var3={
Local_147[iParam0 /*17*/].f_9 
};
}
if(MISC::IS_STRING_NULL_OR_EMPTY(func_96(iParam0))){
func_93(Var1, Var0, Var3);
}else{
func_89(func_92(iParam0), func_96(iParam0), Var1, Var0, 0f, Var3);
}
if(!Local_147[iParam0 /*17*/].f_2 && Local_147[iParam0 /*17*/].f_4 > 0){
if(MISC::IS_STRING_NULL_OR_EMPTY(func_96(0))){
func_93(Var2, Var0, Var3);
}else{
func_89(func_92(iParam0), func_96(iParam0), Var2, Var0, 0f, Var3);
}}
Local_147[iParam0 /*17*/].f_5=(Local_147[iParam0 /*17*/].f_5 - round((MISC::GET_FRAME_TIME() * 1000f)));
if(Local_147[iParam0 /*17*/].f_5 < 0){
Local_147[iParam0 /*17*/].f_5=(Local_147[iParam0 /*17*/].f_5 + Local_147[iParam0 /*17*/].f_8);
}
Local_147[iParam0 /*17*/].f_4=(Local_147[iParam0 /*17*/].f_4 - round((MISC::GET_FRAME_TIME() * 1000f)));
if(Local_147[iParam0 /*17*/].f_4 < 0){
Local_147[iParam0 /*17*/].f_4=0;
}}


void func_89(var uParam0, var uParam1, struct<2> Param2, struct<2> Param3, float fParam4, struct<4> Param5){
Param2={
func_90(Param2) 
};
Param3={
func_90(Param3) 
};
func_86(uParam0, uParam1, Param2.f_0, Param2.f_1, Param3.f_0, Param3.f_1, fParam4, Param5);
}


struct<2> func_90(struct<2> Param0){
return func_91((Param0.f_0 * (1f / 1920f)), (Param0.f_1 * (1f / 1080f)));
}


struct<2> func_91(float fParam0, float fParam1){
struct<2> Var0;
Var0.f_0=fParam0;
Var0.f_1=fParam1;
return Var0;
}


char* func_92(int iParam0){
switch (iParam0){
case 0:
return "MPArcadeGamesFX05";
break;
case 1:
return "MPArcadeGamesFX05";
break;
case 2:
return "";
break;
case 3:
return "MPArcadeGamesFX03";
break;
case 4:
return "MPArcadeGamesFX04";
break;
case 5:
return "MPArcadeGamesFX00";
break;
case 6:
return "MPArcadeGamesFX02";
break;
case 7:
return "MPArcadeGamesFX01";
break;
}
return "";
}


void func_93(struct<2> Param0, struct<2> Param1, struct<4> Param2){
Param0={
func_90(Param0) 
};
Param1={
func_90(Param1) 
};
func_94(Param0, Param1, Param2);
}


void func_94(struct<2> Param0, struct<2> Param1, struct<4> Param2){
Param0={
func_95(Param0) 
};
Param1.f_0=(Param1.f_0 * fLocal_134);
GRAPHICS::DRAW_RECT(Param0.f_0, Param0.f_1, Param1.f_0, Param1.f_1, Param2.f_0, Param2.f_1, Param2.f_2, Param2.f_3, 0);
}


struct<2> func_95(struct<2> Param0){
Param0.f_0=func_101(Param0.f_0);
return Param0;
}


char* func_96(int iParam0){
switch (iParam0){
case 0:
return "TV_LINE_OVERLAY_DEGENATRON";
break;
case 1:
return "SCREEN_GRAD_100_50";
break;
case 2:
return "";
break;
case 3:
return "Screen_Overlay_2";
break;
case 4:
return "Screen_Overlay_4";
break;
case 5:
return "Screen_Overlay_8";
break;
case 6:
return "Grid_1";
break;
case 7:
return "FlatScreen1";
break;
}
return "";
}

int func_97(int iParam0, int iParam1, float fParam2){
return round((((1f - fParam2) * IntToFloat(iParam0)) + (fParam2 * IntToFloat(iParam1))));
}


struct<2> func_98(){
return func_91((1920f / 2f), (1080f / 2f));
}


struct<2> func_99(){
return func_91(1920f, 1080f);
}


char* func_100(int iParam0){
switch (iParam0){
case 0:
return "IAP_1ST";
case 1:
return "IAP_2ND";
case 2:
return "IAP_3RD";
case 3:
return "IAP_4TH";
case 4:
return "IAP_5TH";
case 5:
return "IAP_6TH";
case 6:
return "IAP_7TH";
case 7:
return "IAP_8TH";
case 8:
return "IAP_9TH";
case 9:
return "IAP_10TH";
default:
}
return "";
}


float func_101(float fParam0){
fParam0=(((fParam0 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
fParam0=(0.5f - ((0.5f - fParam0) / fLocal_133));
return fParam0;
}


void func_102(){
func_236();
func_235();
func_231();
func_218();
func_217();
func_216();
func_215();
func_212();
func_209();
func_139();
if(func_137()){
if(!func_124()){
return;
}
if(!func_123(&(Local_138.f_2886))){
func_122(&(Local_138.f_2886), 0, 0);
}elseif(func_120(&(Local_138.f_2886), 7500, 0)){
Local_138.f_2871++;
if(Local_138.f_2871==5){
func_114();
}else{
func_104();
func_7(2);
func_12(func_13(1));
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_ip_in_gameplay_scene")){
AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_ip_in_gameplay_scene");
}
AUDIO::START_AUDIO_SCENE("dlc_vw_am_ip_in_menus_scene");
func_8(5);
}
func_103(&(Local_138.f_2886));
}elseif(!MISC::IS_BIT_SET(Local_138.f_2368.f_333, 8) && func_120(&(Local_138.f_2886), 5500, 0)){
MISC::SET_BIT(&(Local_138.f_2368.f_333), 8);
func_12(func_13(3));
}}}


void func_103(var uParam0){
uParam0->f_1=0;
}


void func_104(){
int iVar0;
Global_1935867.f_1=Local_138.f_2871;
func_110(Local_138.f_2871);
if(!MISC::IS_STRING_NULL_OR_EMPTY(Local_138.f_2895)){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(Local_138.f_2895);
}
Local_138.f_2895=Local_138.f_723;
Local_138.f_2712.f_1=0;
Local_138.f_2712.f_8=0;
Local_138.f_2712.f_4=0;
Local_138.f_2214.f_124=-1f;
Local_138.f_2214.f_125=-1;
iVar0=0;
while (iVar0 <=9){
Local_138.f_2214.f_113[iVar0]=0f;
iVar0++;
}
Local_138.f_2211=0;
Local_138.f_2210=0;
Local_138.f_2213=0;
Local_138.f_2212=0;
iVar0=0;
while (iVar0 <=13){
Local_138.f_1801[iVar0 /*14*/]=-1;
Local_138.f_1801[iVar0 /*14*/].f_10=0;
if(Local_138.f_1801[iVar0 /*14*/].f_12 > -1){
AUDIO::STOP_SOUND(Local_138.f_1801[iVar0 /*14*/].f_12);
AUDIO::RELEASE_SOUND_ID(Local_138.f_1801[iVar0 /*14*/].f_12);
Local_138.f_1801[iVar0 /*14*/].f_12=-1;
}
if(Local_138.f_1801[iVar0 /*14*/].f_13 > -1){
AUDIO::STOP_SOUND(Local_138.f_1801[iVar0 /*14*/].f_13);
AUDIO::RELEASE_SOUND_ID(Local_138.f_1801[iVar0 /*14*/].f_13);
Local_138.f_1801[iVar0 /*14*/].f_13=-1;
}
iVar0++;
}
func_14(&(Local_138.f_2729));
iVar0=0;
while (iVar0 <=19){
Local_138.f_2730[iVar0 /*4*/].f_1=-1;
iVar0++;
}
Local_138.f_2811=0;
iVar0=0;
while (iVar0 <=14){
Local_138.f_1998[iVar0 /*14*/].f_11=-2147483647;
iVar0++;
}
iVar0=0;
while (iVar0 <=19){
Local_138.f_2368.f_3[iVar0 /*14*/].f_11=-2147483647;
iVar0++;
}
Local_138.f_2872=0f;
Local_138.f_2873=Local_138.f_2;
func_108();
Local_138.f_2368.f_325=0;
Local_138.f_2368.f_324=0;
Local_138.f_2368.f_321.f_1=(-0.061111f + Local_138.f_3);
Local_138.f_2368.f_321=0f;
if(Local_138.f_2907){
Local_138.f_2368.f_330=99;
}else{
Local_138.f_2368.f_330=3;
}
Local_138.f_2368.f_331=20;
Local_138.f_2368.f_332=0;
Local_138.f_2368.f_334=-2147483647;
Local_138.f_2368.f_335=-2147483647;
Local_138.f_2368.f_333=0;
StringCopy(&(Local_138.f_2368.f_303), "tank_drive", 64);
func_107(0);
Local_138.f_2368.f_286=-2147483647;
Local_138.f_2368.f_320=0;
func_106(0);
func_105(0);
func_15();
Local_138.f_2878=0;
if(func_123(&(Local_138.f_2884))){
func_103(&(Local_138.f_2884));
}
if(func_123(&(Local_138.f_2886))){
func_103(&(Local_138.f_2886));
}
if(func_123(&(Local_138.f_2888))){
func_103(&(Local_138.f_2888));
}}


void func_105(int iParam0){
Local_138.f_2368.f_1=iParam0;
}


void func_106(int iParam0){
Local_138.f_2368=iParam0;
}


void func_107(int iParam0){
Local_138.f_2368.f_2=iParam0;
if(iParam0 !=0 && MISC::IS_BIT_SET(Local_138.f_2368.f_333, 1)){
MISC::SET_BIT(&(Local_138.f_2368.f_333), true);
}}


void func_108(){
int iVar0;
float fVar1;
Local_138.f_2340=(0.15625f + (Local_138.f_726 / 2f));
Local_138.f_2340.f_3=(0.15625f + (Local_138.f_741 / 2f));
Local_138.f_2340.f_2=(0.15625f + (Local_138.f_736 / 2f));
Local_138.f_2340.f_1=(0.15625f + (Local_138.f_731 / 2f));
fVar1=Local_138.f_746;
iVar0=0;
while (iVar0 <=(Local_138.f_745 - 1)){
Local_138.f_2340.f_4[iVar0]=((0.15625f + (fVar1 * IntToFloat(iVar0))) + (fVar1 / 2f));
Local_138.f_2340.f_12[iVar0]=0;
iVar0++;
}
if(func_109()){
Local_138.f_2896={
func_91((0.15625f - (0.25f / 2f)), (1f + (0.325926f / 2f))) 
};
}}

int func_109(){
if(Local_138.f_2871==3){
return 1;
}
return 0;
}


void func_110(int iParam0){
switch (iParam0){
case 0:
Local_138.f_0=100f;
Local_138.f_1=600247221;
Local_138.f_2=(1f + 0f);
Local_138.f_3=((0.798148f - 0.06944444f) + 0.02314815f);
Local_138.f_723="MPInvPersStage0";
Local_138.f_724="background";
Local_138.f_725=3;
Local_138.f_726={
func_91(0.658333f, 1f) 
};
Local_138.f_728=(0.5f - 0.06944444f);
Local_138.f_729="midground_3";
Local_138.f_730=3;
Local_138.f_731={
func_91(0.658333f, 0.214815f) 
};
Local_138.f_733=(0.470378f - 0.06944444f);
Local_138.f_734="midground_2";
Local_138.f_735=3;
Local_138.f_736={
func_91(0.658333f, 0.4f) 
};
Local_138.f_738=(0.483333f - 0.06944444f);
Local_138.f_739="midground_1";
Local_138.f_740=3;
Local_138.f_741={
func_91(0.658333f, 0.296296f) 
};
Local_138.f_743=(0.785183f - 0.06944444f);
Local_138.f_744="foreground";
Local_138.f_745=6;
Local_138.f_746={
func_91(0.191667f, 0.211111f) 
};
Local_138.f_748=((0.89444f - 0.06944444f) + 0.02314815f);
func_113(&(Local_138.f_749), 220, 169, 80, 255);
break;
case 1:
Local_138.f_0=150f;
Local_138.f_1=1179731900;
Local_138.f_2=(1f + 0.08f);
Local_138.f_3=((0.794444f - 0.06944444f) + 0.02314815f);
Local_138.f_723="MPInvPersStage2";
Local_138.f_724="background";
Local_138.f_725=3;
Local_138.f_726={
func_91(0.658333f, 0.5f) 
};
Local_138.f_728=(0.25f - 0.06944444f);
Local_138.f_729="midground_3";
Local_138.f_730=3;
Local_138.f_731={
func_91(0.658333f, 0.437037f) 
};
Local_138.f_733=0.2185185f;
Local_138.f_734="midground_2";
Local_138.f_735=3;
Local_138.f_736={
func_91(0.604167f, 0.466667f) 
};
Local_138.f_738=0.290741f;
Local_138.f_739="midground_1";
Local_138.f_740=4;
Local_138.f_741={
func_91(0.333333f, 0.52963f) 
};
Local_138.f_743=((0.735185f - 0.06944444f) + 0.02314815f);
Local_138.f_744="foreground";
Local_138.f_745=6;
Local_138.f_746={
func_91(0.216667f, 0.214815f) 
};
Local_138.f_748=((0.892593f - 0.06944444f) + 0.02314815f);
func_113(&(Local_138.f_749), 192, 135, 135, 255);
break;
case 2:
Local_138.f_0=250f;
Local_138.f_1=-42177296;
Local_138.f_2=(1f + 0.2f);
Local_138.f_3=((0.798148f - 0.06944444f) + 0.02314815f);
Local_138.f_723="MPInvPersStage1";
Local_138.f_724="background";
Local_138.f_725=3;
Local_138.f_726={
func_91(0.658333f, 1f) 
};
Local_138.f_728=(0.5f - 0.06944444f);
Local_138.f_729="midground_3";
Local_138.f_730=3;
Local_138.f_731={
func_91(0.658333f, 0.396296f) 
};
Local_138.f_733=(0.471296f - 0.06944444f);
Local_138.f_734="midground_2";
Local_138.f_735=3;
Local_138.f_736={
func_91(0.658333f, 0.518519f) 
};
Local_138.f_738=(0.4101845f - 0.06944444f);
Local_138.f_739="midground_1";
Local_138.f_740=4;
Local_138.f_741={
func_91(0.229167f, 0.396296f) 
};
Local_138.f_743=((0.801852f - 0.06944444f) + 0.02314815f);
Local_138.f_744="foreground";
Local_138.f_745=5;
Local_138.f_746={
func_91(0.3104167f, 0.2111111f) 
};
Local_138.f_748=((0.8944445f - 0.06944444f) + 0.02314815f);
func_113(&(Local_138.f_749), 207, 160, 154, 255);
break;
case 3:
Local_138.f_0=350f;
Local_138.f_1=714966858;
Local_138.f_2=(1f + 0.4f);
Local_138.f_3=((0.794444f - 0.06944444f) + 0.02314815f);
Local_138.f_723="MPInvPersStage3";
Local_138.f_724="background";
Local_138.f_725=3;
Local_138.f_726={
func_91(0.547917f, 0.444444f) 
};
Local_138.f_728=((0.222222f - 0.06944444f) + 0.018f);
Local_138.f_729="midground_3";
Local_138.f_730=3;
Local_138.f_731={
func_91(0.533333f, 0.251852f) 
};
Local_138.f_733=((0.515741f - 0.06944444f) + 0.018f);
Local_138.f_734="midground_2";
Local_138.f_735=3;
Local_138.f_736={
func_91(0.658333f, 0.52963f) 
};
Local_138.f_738=((0.415741f - 0.06944444f) + 0.052f);
Local_138.f_739="midground_1";
Local_138.f_740=3;
Local_138.f_741={
func_91(0.658333f, 0.888889f) 
};
Local_138.f_743=((0.555556f - 0.06944444f) + 0.043f);
Local_138.f_744="foreground";
Local_138.f_745=6;
Local_138.f_746={
func_91(0.172917f, 0.214815f) 
};
Local_138.f_748=((0.89444f - 0.06944444f) + 0.02314815f);
func_113(&(Local_138.f_749), 96, 122, 142, 255);
break;
case 4:
Local_138.f_0=-1f;
Local_138.f_1=-678704902;
Local_138.f_2=(1f + 0.6f);
Local_138.f_3=((0.807037f - 0.06944444f) + 0.02314815f);
Local_138.f_723="MPInvPersStage4";
Local_138.f_724="background";
Local_138.f_725=3;
Local_138.f_726={
func_91(0.6583334f, 0.4740741f) 
};
Local_138.f_728=0.25f;
Local_138.f_729="midground_3";
Local_138.f_730=3;
Local_138.f_731={
func_91(0.6583334f, 0.237037f) 
};
Local_138.f_733=((0.4712963f - 0.075f) + 0.018f);
Local_138.f_734="midground_2";
Local_138.f_735=3;
Local_138.f_736={
func_91(0.6583334f, 0.4740741f) 
};
Local_138.f_738=(0.3898148f + 0.036f);
Local_138.f_739="midground_1";
Local_138.f_740=3;
Local_138.f_741={
func_91(0.6583334f, 0.4481482f) 
};
Local_138.f_743=(0.7092593f + 0.052f);
Local_138.f_744="foreground";
Local_138.f_745=7;
Local_138.f_746={
func_91(0.16875f, (0.2222222f - 0.01111111f)) 
};
Local_138.f_748=((0.8333324f - (0.01111111f / 2f)) + 0.02314815f);
func_113(&(Local_138.f_749), 0, 0, 0, 255);
break;
}
func_112(iParam0);
func_111(iParam0);
}


void func_111(int iParam0){
switch (iParam0){
case 0:
case 1:
case 2:
case 3:
case 4:
Local_138.f_680[0 /*3*/]=31;
Local_138.f_680[0 /*3*/].f_1=2.15f;
Local_138.f_680[0 /*3*/].f_2=2;
Local_138.f_680[1 /*3*/]=31;
Local_138.f_680[1 /*3*/].f_1=2.9f;
Local_138.f_680[1 /*3*/].f_2=2;
Local_138.f_680[2 /*3*/]=31;
Local_138.f_680[2 /*3*/].f_1=3.75f;
Local_138.f_680[2 /*3*/].f_2=2;
Local_138.f_680[3 /*3*/]=30;
Local_138.f_680[3 /*3*/].f_1=1.75f;
Local_138.f_680[3 /*3*/].f_2=2;
Local_138.f_680[4 /*3*/]=30;
Local_138.f_680[4 /*3*/].f_1=2.5f;
Local_138.f_680[4 /*3*/].f_2=2;
Local_138.f_680[5 /*3*/]=32;
Local_138.f_680[5 /*3*/].f_1=1.75f;
Local_138.f_680[5 /*3*/].f_2=0;
Local_138.f_680[6 /*3*/]=32;
Local_138.f_680[6 /*3*/].f_1=2.5f;
Local_138.f_680[6 /*3*/].f_2=0;
Local_138.f_680[7 /*3*/]=32;
Local_138.f_680[7 /*3*/].f_1=3f;
Local_138.f_680[7 /*3*/].f_2=0;
Local_138.f_680[8 /*3*/]=32;
Local_138.f_680[8 /*3*/].f_1=3.75f;
Local_138.f_680[8 /*3*/].f_2=0;
Local_138.f_680[9 /*3*/]=30;
Local_138.f_680[9 /*3*/].f_1=1.75f;
Local_138.f_680[9 /*3*/].f_2=0;
Local_138.f_680[10 /*3*/]=30;
Local_138.f_680[10 /*3*/].f_1=3.5f;
Local_138.f_680[10 /*3*/].f_2=0;
Local_138.f_680[11 /*3*/]=29;
Local_138.f_680[11 /*3*/].f_1=2f;
Local_138.f_680[11 /*3*/].f_2=0;
Local_138.f_680[12 /*3*/]=29;
Local_138.f_680[12 /*3*/].f_1=3.25f;
Local_138.f_680[12 /*3*/].f_2=0;
Local_138.f_680[13 /*3*/]=29;
Local_138.f_680[13 /*3*/].f_1=4.25f;
Local_138.f_680[13 /*3*/].f_2=0;
break;
}}


void func_112(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=224){
Local_138.f_4[iVar0 /*3*/]=-1;
Local_138.f_4[iVar0 /*3*/].f_1=0f;
Local_138.f_4[iVar0 /*3*/].f_2=0;
iVar0++;
}
switch (iParam0){
case 0:
Local_138.f_4[0 /*3*/]=0;
Local_138.f_4[0 /*3*/].f_1=3f;
Local_138.f_4[1 /*3*/]=5;
Local_138.f_4[1 /*3*/].f_1=7f;
Local_138.f_4[2 /*3*/]=6;
Local_138.f_4[2 /*3*/].f_1=12f;
Local_138.f_4[3 /*3*/]=0;
Local_138.f_4[3 /*3*/].f_1=15f;
Local_138.f_4[4 /*3*/]=7;
Local_138.f_4[4 /*3*/].f_1=18f;
Local_138.f_4[5 /*3*/]=5;
Local_138.f_4[5 /*3*/].f_1=23f;
Local_138.f_4[6 /*3*/]=0;
Local_138.f_4[6 /*3*/].f_1=25f;
Local_138.f_4[7 /*3*/]=22;
Local_138.f_4[7 /*3*/].f_1=28f;
Local_138.f_4[8 /*3*/]=0;
Local_138.f_4[8 /*3*/].f_1=30f;
Local_138.f_4[9 /*3*/]=5;
Local_138.f_4[9 /*3*/].f_1=32f;
Local_138.f_4[10 /*3*/]=29;
Local_138.f_4[10 /*3*/].f_1=35f;
Local_138.f_4[11 /*3*/]=4;
Local_138.f_4[11 /*3*/].f_1=40f;
Local_138.f_4[12 /*3*/]=5;
Local_138.f_4[12 /*3*/].f_1=42f;
Local_138.f_4[13 /*3*/]=5;
Local_138.f_4[13 /*3*/].f_1=44f;
Local_138.f_4[14 /*3*/]=13;
Local_138.f_4[14 /*3*/].f_1=46f;
Local_138.f_4[15 /*3*/]=4;
Local_138.f_4[15 /*3*/].f_1=48f;
Local_138.f_4[16 /*3*/]=29;
Local_138.f_4[16 /*3*/].f_1=50f;
Local_138.f_4[17 /*3*/]=0;
Local_138.f_4[17 /*3*/].f_1=51.9f;
Local_138.f_4[18 /*3*/]=8;
Local_138.f_4[18 /*3*/].f_1=52f;
Local_138.f_4[19 /*3*/]=4;
Local_138.f_4[19 /*3*/].f_1=54f;
Local_138.f_4[20 /*3*/]=4;
Local_138.f_4[20 /*3*/].f_1=56f;
Local_138.f_4[21 /*3*/]=20;
Local_138.f_4[21 /*3*/].f_1=57f;
Local_138.f_4[22 /*3*/]=0;
Local_138.f_4[22 /*3*/].f_1=58f;
Local_138.f_4[23 /*3*/]=0;
Local_138.f_4[23 /*3*/].f_1=60f;
Local_138.f_4[24 /*3*/]=6;
Local_138.f_4[24 /*3*/].f_1=62f;
Local_138.f_4[25 /*3*/]=5;
Local_138.f_4[25 /*3*/].f_1=64f;
Local_138.f_4[26 /*3*/]=23;
Local_138.f_4[26 /*3*/].f_1=65f;
Local_138.f_4[27 /*3*/]=0;
Local_138.f_4[27 /*3*/].f_1=65.5f;
Local_138.f_4[28 /*3*/]=0;
Local_138.f_4[28 /*3*/].f_1=67f;
Local_138.f_4[29 /*3*/]=13;
Local_138.f_4[29 /*3*/].f_1=69f;
Local_138.f_4[30 /*3*/]=29;
Local_138.f_4[30 /*3*/].f_1=70.5f;
Local_138.f_4[31 /*3*/]=4;
Local_138.f_4[31 /*3*/].f_1=71f;
Local_138.f_4[32 /*3*/]=26;
Local_138.f_4[32 /*3*/].f_1=72.2f;
Local_138.f_4[33 /*3*/]=5;
Local_138.f_4[33 /*3*/].f_1=73f;
Local_138.f_4[34 /*3*/]=5;
Local_138.f_4[34 /*3*/].f_1=74f;
Local_138.f_4[35 /*3*/]=29;
Local_138.f_4[35 /*3*/].f_1=75f;
Local_138.f_4[36 /*3*/]=0;
Local_138.f_4[36 /*3*/].f_1=76f;
Local_138.f_4[37 /*3*/]=22;
Local_138.f_4[37 /*3*/].f_1=77f;
Local_138.f_4[38 /*3*/]=5;
Local_138.f_4[38 /*3*/].f_1=77.5f;
Local_138.f_4[39 /*3*/]=5;
Local_138.f_4[39 /*3*/].f_1=78f;
Local_138.f_4[40 /*3*/]=0;
Local_138.f_4[40 /*3*/].f_1=79f;
Local_138.f_4[41 /*3*/]=8;
Local_138.f_4[41 /*3*/].f_1=80f;
Local_138.f_4[42 /*3*/]=5;
Local_138.f_4[42 /*3*/].f_1=83f;
Local_138.f_4[43 /*3*/]=0;
Local_138.f_4[43 /*3*/].f_1=84.2f;
Local_138.f_4[44 /*3*/]=8;
Local_138.f_4[44 /*3*/].f_1=84.3f;
Local_138.f_4[45 /*3*/]=5;
Local_138.f_4[45 /*3*/].f_1=84.5f;
Local_138.f_4[46 /*3*/]=5;
Local_138.f_4[46 /*3*/].f_1=85f;
Local_138.f_4[47 /*3*/]=5;
Local_138.f_4[47 /*3*/].f_1=85.5f;
break;
case 1:
Local_138.f_4[0 /*3*/]=5;
Local_138.f_4[0 /*3*/].f_1=3f;
Local_138.f_4[1 /*3*/]=5;
Local_138.f_4[1 /*3*/].f_1=5f;
Local_138.f_4[2 /*3*/]=2;
Local_138.f_4[2 /*3*/].f_1=7f;
Local_138.f_4[3 /*3*/]=9;
Local_138.f_4[3 /*3*/].f_1=9f;
Local_138.f_4[4 /*3*/]=9;
Local_138.f_4[4 /*3*/].f_1=12f;
Local_138.f_4[5 /*3*/]=5;
Local_138.f_4[5 /*3*/].f_1=13f;
Local_138.f_4[6 /*3*/]=5;
Local_138.f_4[6 /*3*/].f_1=18f;
Local_138.f_4[7 /*3*/]=9;
Local_138.f_4[7 /*3*/].f_1=17f;
Local_138.f_4[8 /*3*/]=5;
Local_138.f_4[8 /*3*/].f_1=22f;
Local_138.f_4[9 /*3*/]=29;
Local_138.f_4[9 /*3*/].f_1=22.5f;
Local_138.f_4[10 /*3*/]=2;
Local_138.f_4[10 /*3*/].f_1=24f;
Local_138.f_4[11 /*3*/]=4;
Local_138.f_4[11 /*3*/].f_1=25.5f;
Local_138.f_4[12 /*3*/]=14;
Local_138.f_4[12 /*3*/].f_1=26f;
Local_138.f_4[13 /*3*/]=5;
Local_138.f_4[13 /*3*/].f_1=27f;
Local_138.f_4[14 /*3*/]=5;
Local_138.f_4[14 /*3*/].f_1=29f;
Local_138.f_4[15 /*3*/]=7;
Local_138.f_4[15 /*3*/].f_1=31f;
Local_138.f_4[16 /*3*/]=4;
Local_138.f_4[16 /*3*/].f_1=32f;
Local_138.f_4[17 /*3*/]=14;
Local_138.f_4[17 /*3*/].f_1=35f;
Local_138.f_4[18 /*3*/]=19;
Local_138.f_4[18 /*3*/].f_1=37.5f;
Local_138.f_4[19 /*3*/]=9;
Local_138.f_4[19 /*3*/].f_1=40f;
Local_138.f_4[20 /*3*/]=4;
Local_138.f_4[20 /*3*/].f_1=43f;
Local_138.f_4[21 /*3*/]=24;
Local_138.f_4[21 /*3*/].f_1=44f;
Local_138.f_4[22 /*3*/]=9;
Local_138.f_4[22 /*3*/].f_1=46f;
Local_138.f_4[23 /*3*/]=31;
Local_138.f_4[23 /*3*/].f_1=50f;
Local_138.f_4[24 /*3*/]=4;
Local_138.f_4[24 /*3*/].f_1=50.5f;
Local_138.f_4[25 /*3*/]=4;
Local_138.f_4[25 /*3*/].f_1=52f;
Local_138.f_4[26 /*3*/]=2;
Local_138.f_4[26 /*3*/].f_1=55f;
Local_138.f_4[27 /*3*/]=5;
Local_138.f_4[27 /*3*/].f_1=57f;
Local_138.f_4[28 /*3*/]=20;
Local_138.f_4[28 /*3*/].f_1=58f;
Local_138.f_4[29 /*3*/]=5;
Local_138.f_4[29 /*3*/].f_1=60f;
Local_138.f_4[30 /*3*/]=9;
Local_138.f_4[30 /*3*/].f_1=62f;
Local_138.f_4[31 /*3*/]=5;
Local_138.f_4[31 /*3*/].f_1=63f;
Local_138.f_4[32 /*3*/]=5;
Local_138.f_4[32 /*3*/].f_1=64f;
Local_138.f_4[33 /*3*/]=23;
Local_138.f_4[33 /*3*/].f_1=65.5f;
Local_138.f_4[34 /*3*/]=4;
Local_138.f_4[34 /*3*/].f_1=66f;
Local_138.f_4[35 /*3*/]=2;
Local_138.f_4[35 /*3*/].f_1=67f;
Local_138.f_4[36 /*3*/]=9;
Local_138.f_4[36 /*3*/].f_1=70f;
Local_138.f_4[37 /*3*/]=5;
Local_138.f_4[37 /*3*/].f_1=72f;
Local_138.f_4[38 /*3*/]=24;
Local_138.f_4[38 /*3*/].f_1=73f;
Local_138.f_4[39 /*3*/]=5;
Local_138.f_4[39 /*3*/].f_1=73.5f;
Local_138.f_4[40 /*3*/]=31;
Local_138.f_4[40 /*3*/].f_1=75f;
Local_138.f_4[41 /*3*/]=20;
Local_138.f_4[41 /*3*/].f_1=76.5f;
Local_138.f_4[42 /*3*/]=5;
Local_138.f_4[42 /*3*/].f_1=78f;
Local_138.f_4[43 /*3*/]=7;
Local_138.f_4[43 /*3*/].f_1=80f;
Local_138.f_4[44 /*3*/]=4;
Local_138.f_4[44 /*3*/].f_1=81f;
Local_138.f_4[45 /*3*/]=2;
Local_138.f_4[45 /*3*/].f_1=83f;
Local_138.f_4[46 /*3*/]=7;
Local_138.f_4[46 /*3*/].f_1=85f;
Local_138.f_4[47 /*3*/]=5;
Local_138.f_4[47 /*3*/].f_1=86f;
Local_138.f_4[48 /*3*/]=9;
Local_138.f_4[48 /*3*/].f_1=88f;
Local_138.f_4[49 /*3*/]=2;
Local_138.f_4[49 /*3*/].f_1=92f;
Local_138.f_4[50 /*3*/]=28;
Local_138.f_4[50 /*3*/].f_2=705;
Local_138.f_4[50 /*3*/].f_1=94f;
Local_138.f_4[51 /*3*/]=4;
Local_138.f_4[51 /*3*/].f_1=96f;
Local_138.f_4[52 /*3*/]=4;
Local_138.f_4[52 /*3*/].f_1=98f;
Local_138.f_4[53 /*3*/]=9;
Local_138.f_4[53 /*3*/].f_1=100f;
Local_138.f_4[54 /*3*/]=5;
Local_138.f_4[54 /*3*/].f_1=101f;
Local_138.f_4[55 /*3*/]=5;
Local_138.f_4[55 /*3*/].f_1=102f;
Local_138.f_4[56 /*3*/]=2;
Local_138.f_4[56 /*3*/].f_1=104f;
Local_138.f_4[57 /*3*/]=2;
Local_138.f_4[57 /*3*/].f_1=106f;
Local_138.f_4[58 /*3*/]=21;
Local_138.f_4[58 /*3*/].f_1=107f;
Local_138.f_4[59 /*3*/]=5;
Local_138.f_4[59 /*3*/].f_1=108f;
Local_138.f_4[60 /*3*/]=5;
Local_138.f_4[60 /*3*/].f_1=109f;
Local_138.f_4[61 /*3*/]=31;
Local_138.f_4[61 /*3*/].f_1=110f;
Local_138.f_4[62 /*3*/]=14;
Local_138.f_4[62 /*3*/].f_1=112f;
Local_138.f_4[63 /*3*/]=22;
Local_138.f_4[63 /*3*/].f_1=114.5f;
Local_138.f_4[64 /*3*/]=9;
Local_138.f_4[64 /*3*/].f_1=117f;
Local_138.f_4[65 /*3*/]=5;
Local_138.f_4[65 /*3*/].f_1=118f;
Local_138.f_4[66 /*3*/]=5;
Local_138.f_4[66 /*3*/].f_1=119f;
Local_138.f_4[67 /*3*/]=5;
Local_138.f_4[67 /*3*/].f_1=120f;
Local_138.f_4[68 /*3*/]=19;
Local_138.f_4[68 /*3*/].f_1=123f;
Local_138.f_4[69 /*3*/]=9;
Local_138.f_4[69 /*3*/].f_1=125f;
Local_138.f_4[70 /*3*/]=5;
Local_138.f_4[70 /*3*/].f_1=126f;
Local_138.f_4[71 /*3*/]=9;
Local_138.f_4[71 /*3*/].f_1=127f;
Local_138.f_4[72 /*3*/]=4;
Local_138.f_4[72 /*3*/].f_1=129.5f;
Local_138.f_4[73 /*3*/]=2;
Local_138.f_4[73 /*3*/].f_1=131.9f;
Local_138.f_4[74 /*3*/]=9;
Local_138.f_4[74 /*3*/].f_1=132f;
Local_138.f_4[75 /*3*/]=14;
Local_138.f_4[75 /*3*/].f_1=135.4f;
Local_138.f_4[76 /*3*/]=7;
Local_138.f_4[76 /*3*/].f_1=135.5f;
Local_138.f_4[77 /*3*/]=4;
Local_138.f_4[77 /*3*/].f_1=136f;
Local_138.f_4[80 /*3*/]=22;
Local_138.f_4[80 /*3*/].f_1=137.3f;
Local_138.f_4[81 /*3*/]=9;
Local_138.f_4[81 /*3*/].f_1=137.5f;
break;
case 2:
Local_138.f_4[0 /*3*/]=5;
Local_138.f_4[0 /*3*/].f_1=1f;
Local_138.f_4[1 /*3*/]=5;
Local_138.f_4[1 /*3*/].f_1=3f;
Local_138.f_4[2 /*3*/]=10;
Local_138.f_4[2 /*3*/].f_1=4f;
Local_138.f_4[3 /*3*/]=4;
Local_138.f_4[3 /*3*/].f_1=6.5f;
Local_138.f_4[4 /*3*/]=18;
Local_138.f_4[4 /*3*/].f_1=8.2f;
Local_138.f_4[5 /*3*/]=1;
Local_138.f_4[5 /*3*/].f_1=10f;
Local_138.f_4[6 /*3*/]=5;
Local_138.f_4[6 /*3*/].f_1=13f;
Local_138.f_4[7 /*3*/]=4;
Local_138.f_4[7 /*3*/].f_1=13f;
Local_138.f_4[8 /*3*/]=15;
Local_138.f_4[8 /*3*/].f_1=13.5f;
Local_138.f_4[9 /*3*/]=1;
Local_138.f_4[9 /*3*/].f_1=21f;
Local_138.f_4[10 /*3*/]=4;
Local_138.f_4[10 /*3*/].f_1=22f;
Local_138.f_4[11 /*3*/]=15;
Local_138.f_4[11 /*3*/].f_1=23f;
Local_138.f_4[12 /*3*/]=30;
Local_138.f_4[12 /*3*/].f_1=23.5f;
Local_138.f_4[13 /*3*/]=4;
Local_138.f_4[13 /*3*/].f_1=27f;
Local_138.f_4[14 /*3*/]=1;
Local_138.f_4[14 /*3*/].f_1=30f;
Local_138.f_4[15 /*3*/]=23;
Local_138.f_4[15 /*3*/].f_1=31f;
Local_138.f_4[16 /*3*/]=10;
Local_138.f_4[16 /*3*/].f_2=1;
Local_138.f_4[17 /*3*/].f_1=35f;
Local_138.f_4[17 /*3*/]=5;
Local_138.f_4[18 /*3*/].f_1=35.1f;
Local_138.f_4[18 /*3*/]=5;
Local_138.f_4[18 /*3*/].f_1=35.6f;
Local_138.f_4[19 /*3*/]=24;
Local_138.f_4[19 /*3*/].f_1=35.7f;
Local_138.f_4[20 /*3*/]=5;
Local_138.f_4[20 /*3*/].f_1=37f;
Local_138.f_4[21 /*3*/]=7;
Local_138.f_4[21 /*3*/].f_1=39f;
Local_138.f_4[22 /*3*/]=15;
Local_138.f_4[22 /*3*/].f_1=40f;
Local_138.f_4[23 /*3*/]=5;
Local_138.f_4[23 /*3*/].f_1=40.5f;
Local_138.f_4[24 /*3*/]=5;
Local_138.f_4[24 /*3*/].f_1=41f;
Local_138.f_4[25 /*3*/]=22;
Local_138.f_4[25 /*3*/].f_1=42.3f;
Local_138.f_4[26 /*3*/]=7;
Local_138.f_4[26 /*3*/].f_1=43.5f;
Local_138.f_4[27 /*3*/]=6;
Local_138.f_4[27 /*3*/].f_1=46.3f;
Local_138.f_4[28 /*3*/]=10;
Local_138.f_4[28 /*3*/].f_2=1;
Local_138.f_4[28 /*3*/].f_1=46.5f;
Local_138.f_4[29 /*3*/]=4;
Local_138.f_4[29 /*3*/].f_1=47f;
Local_138.f_4[30 /*3*/]=20;
Local_138.f_4[30 /*3*/].f_1=47.5f;
Local_138.f_4[31 /*3*/]=4;
Local_138.f_4[31 /*3*/].f_1=49f;
Local_138.f_4[32 /*3*/]=10;
Local_138.f_4[32 /*3*/].f_2=1;
Local_138.f_4[32 /*3*/].f_1=50f;
Local_138.f_4[33 /*3*/]=5;
Local_138.f_4[33 /*3*/].f_1=53f;
Local_138.f_4[34 /*3*/]=1;
Local_138.f_4[34 /*3*/].f_1=54.5f;
Local_138.f_4[35 /*3*/]=29;
Local_138.f_4[35 /*3*/].f_1=55.2f;
Local_138.f_4[36 /*3*/]=1;
Local_138.f_4[36 /*3*/].f_1=55.9f;
Local_138.f_4[37 /*3*/]=10;
Local_138.f_4[37 /*3*/].f_2=1;
Local_138.f_4[37 /*3*/].f_1=56f;
Local_138.f_4[38 /*3*/]=7;
Local_138.f_4[38 /*3*/].f_1=56.5f;
Local_138.f_4[39 /*3*/]=5;
Local_138.f_4[39 /*3*/].f_1=57.5f;
Local_138.f_4[40 /*3*/]=15;
Local_138.f_4[40 /*3*/].f_1=60f;
Local_138.f_4[41 /*3*/]=4;
Local_138.f_4[41 /*3*/].f_1=63f;
Local_138.f_4[42 /*3*/]=5;
Local_138.f_4[42 /*3*/].f_1=64f;
Local_138.f_4[43 /*3*/]=10;
Local_138.f_4[43 /*3*/].f_2=1;
Local_138.f_4[43 /*3*/].f_1=65f;
Local_138.f_4[44 /*3*/]=10;
Local_138.f_4[44 /*3*/].f_2=1;
Local_138.f_4[44 /*3*/].f_1=66f;
Local_138.f_4[45 /*3*/]=1;
Local_138.f_4[45 /*3*/].f_1=71.5f;
Local_138.f_4[46 /*3*/]=23;
Local_138.f_4[46 /*3*/].f_1=72f;
Local_138.f_4[47 /*3*/]=10;
Local_138.f_4[47 /*3*/].f_2=1;
Local_138.f_4[47 /*3*/].f_1=72f;
Local_138.f_4[48 /*3*/]=5;
Local_138.f_4[48 /*3*/].f_1=74f;
Local_138.f_4[49 /*3*/]=32;
Local_138.f_4[49 /*3*/].f_1=76f;
Local_138.f_4[50 /*3*/]=10;
Local_138.f_4[50 /*3*/].f_2=1;
Local_138.f_4[50 /*3*/].f_1=77f;
Local_138.f_4[51 /*3*/]=4;
Local_138.f_4[51 /*3*/].f_1=78f;
Local_138.f_4[52 /*3*/]=10;
Local_138.f_4[52 /*3*/].f_2=1;
Local_138.f_4[52 /*3*/].f_1=79f;
Local_138.f_4[53 /*3*/]=4;
Local_138.f_4[53 /*3*/].f_1=79f;
Local_138.f_4[54 /*3*/]=5;
Local_138.f_4[54 /*3*/].f_1=80f;
Local_138.f_4[55 /*3*/]=10;
Local_138.f_4[55 /*3*/].f_2=1;
Local_138.f_4[55 /*3*/].f_1=81f;
Local_138.f_4[56 /*3*/]=5;
Local_138.f_4[56 /*3*/].f_1=82f;
Local_138.f_4[57 /*3*/]=6;
Local_138.f_4[57 /*3*/].f_1=83f;
Local_138.f_4[58 /*3*/]=15;
Local_138.f_4[58 /*3*/].f_1=83.5f;
Local_138.f_4[59 /*3*/]=5;
Local_138.f_4[59 /*3*/].f_1=84f;
Local_138.f_4[60 /*3*/]=10;
Local_138.f_4[60 /*3*/].f_2=1;
Local_138.f_4[60 /*3*/].f_1=85f;
Local_138.f_4[61 /*3*/]=5;
Local_138.f_4[61 /*3*/].f_1=85.1f;
Local_138.f_4[62 /*3*/]=5;
Local_138.f_4[62 /*3*/].f_1=85.8f;
Local_138.f_4[63 /*3*/]=10;
Local_138.f_4[63 /*3*/].f_2=1;
Local_138.f_4[63 /*3*/].f_1=90f;
Local_138.f_4[64 /*3*/]=20;
Local_138.f_4[64 /*3*/].f_1=94f;
Local_138.f_4[65 /*3*/]=15;
Local_138.f_4[65 /*3*/].f_1=95f;
Local_138.f_4[66 /*3*/]=4;
Local_138.f_4[66 /*3*/].f_1=96f;
Local_138.f_4[67 /*3*/]=4;
Local_138.f_4[67 /*3*/].f_1=98f;
Local_138.f_4[68 /*3*/]=15;
Local_138.f_4[68 /*3*/].f_1=99f;
Local_138.f_4[69 /*3*/]=31;
Local_138.f_4[69 /*3*/].f_1=99.5f;
Local_138.f_4[70 /*3*/]=15;
Local_138.f_4[70 /*3*/].f_1=104f;
Local_138.f_4[71 /*3*/]=4;
Local_138.f_4[71 /*3*/].f_1=106f;
Local_138.f_4[72 /*3*/]=22;
Local_138.f_4[72 /*3*/].f_1=110f;
Local_138.f_4[73 /*3*/]=31;
Local_138.f_4[73 /*3*/].f_1=112.5f;
Local_138.f_4[74 /*3*/]=5;
Local_138.f_4[74 /*3*/].f_2=1;
Local_138.f_4[74 /*3*/].f_1=115f;
Local_138.f_4[75 /*3*/]=5;
Local_138.f_4[75 /*3*/].f_2=1;
Local_138.f_4[75 /*3*/].f_1=117f;
Local_138.f_4[76 /*3*/]=7;
Local_138.f_4[76 /*3*/].f_1=120f;
Local_138.f_4[77 /*3*/]=5;
Local_138.f_4[77 /*3*/].f_1=125f;
Local_138.f_4[78 /*3*/]=7;
Local_138.f_4[78 /*3*/].f_1=126f;
Local_138.f_4[79 /*3*/]=27;
Local_138.f_4[79 /*3*/].f_1=126.5f;
Local_138.f_4[80 /*3*/]=5;
Local_138.f_4[80 /*3*/].f_1=126.6f;
Local_138.f_4[81 /*3*/]=1;
Local_138.f_4[81 /*3*/].f_1=127.5f;
Local_138.f_4[82 /*3*/]=1;
Local_138.f_4[82 /*3*/].f_1=128.5f;
Local_138.f_4[83 /*3*/]=15;
Local_138.f_4[83 /*3*/].f_1=129f;
Local_138.f_4[84 /*3*/]=4;
Local_138.f_4[84 /*3*/].f_1=129.5f;
Local_138.f_4[85 /*3*/]=6;
Local_138.f_4[85 /*3*/].f_1=130f;
Local_138.f_4[86 /*3*/]=4;
Local_138.f_4[86 /*3*/].f_1=132f;
Local_138.f_4[87 /*3*/]=10;
Local_138.f_4[87 /*3*/].f_2=1;
Local_138.f_4[87 /*3*/].f_1=135f;
Local_138.f_4[88 /*3*/]=5;
Local_138.f_4[88 /*3*/].f_2=1;
Local_138.f_4[88 /*3*/].f_1=135.5f;
Local_138.f_4[89 /*3*/]=4;
Local_138.f_4[89 /*3*/].f_1=136f;
Local_138.f_4[90 /*3*/]=5;
Local_138.f_4[90 /*3*/].f_2=1;
Local_138.f_4[90 /*3*/].f_1=136.5f;
Local_138.f_4[91 /*3*/]=5;
Local_138.f_4[91 /*3*/].f_2=1;
Local_138.f_4[91 /*3*/].f_1=137f;
Local_138.f_4[92 /*3*/]=5;
Local_138.f_4[92 /*3*/].f_2=1;
Local_138.f_4[92 /*3*/].f_1=137.7f;
Local_138.f_4[93 /*3*/]=18;
Local_138.f_4[93 /*3*/].f_1=141f;
Local_138.f_4[94 /*3*/]=15;
Local_138.f_4[94 /*3*/].f_1=142f;
Local_138.f_4[95 /*3*/]=1;
Local_138.f_4[95 /*3*/].f_1=143f;
Local_138.f_4[96 /*3*/]=22;
Local_138.f_4[96 /*3*/].f_1=144f;
Local_138.f_4[97 /*3*/]=6;
Local_138.f_4[97 /*3*/].f_1=145f;
Local_138.f_4[98 /*3*/]=10;
Local_138.f_4[98 /*3*/].f_2=1;
Local_138.f_4[98 /*3*/].f_1=147f;
Local_138.f_4[99 /*3*/]=5;
Local_138.f_4[99 /*3*/].f_2=1;
Local_138.f_4[99 /*3*/].f_1=150f;
Local_138.f_4[100 /*3*/]=1;
Local_138.f_4[100 /*3*/].f_1=143f;
Local_138.f_4[101 /*3*/]=15;
Local_138.f_4[101 /*3*/].f_1=150f;
Local_138.f_4[102 /*3*/]=10;
Local_138.f_4[102 /*3*/].f_2=1;
Local_138.f_4[102 /*3*/].f_1=151f;
Local_138.f_4[103 /*3*/]=4;
Local_138.f_4[103 /*3*/].f_1=153f;
Local_138.f_4[104 /*3*/]=21;
Local_138.f_4[104 /*3*/].f_1=156f;
Local_138.f_4[105 /*3*/]=1;
Local_138.f_4[105 /*3*/].f_1=157f;
Local_138.f_4[106 /*3*/]=6;
Local_138.f_4[106 /*3*/].f_1=160f;
Local_138.f_4[107 /*3*/]=10;
Local_138.f_4[107 /*3*/].f_2=1;
Local_138.f_4[107 /*3*/].f_1=161f;
Local_138.f_4[108 /*3*/]=5;
Local_138.f_4[108 /*3*/].f_2=1;
Local_138.f_4[108 /*3*/].f_1=162f;
Local_138.f_4[109 /*3*/]=10;
Local_138.f_4[109 /*3*/].f_2=1;
Local_138.f_4[109 /*3*/].f_1=165f;
Local_138.f_4[110 /*3*/]=5;
Local_138.f_4[110 /*3*/].f_2=1;
Local_138.f_4[110 /*3*/].f_1=167f;
Local_138.f_4[111 /*3*/]=1;
Local_138.f_4[111 /*3*/].f_1=170f;
Local_138.f_4[112 /*3*/]=15;
Local_138.f_4[112 /*3*/].f_1=172f;
Local_138.f_4[113 /*3*/]=10;
Local_138.f_4[113 /*3*/].f_2=1;
Local_138.f_4[113 /*3*/].f_1=175f;
Local_138.f_4[114 /*3*/]=5;
Local_138.f_4[114 /*3*/].f_2=1;
Local_138.f_4[114 /*3*/].f_1=175.5f;
Local_138.f_4[115 /*3*/]=5;
Local_138.f_4[115 /*3*/].f_2=1;
Local_138.f_4[115 /*3*/].f_1=176f;
Local_138.f_4[116 /*3*/]=28;
Local_138.f_4[116 /*3*/].f_2=192;
Local_138.f_4[116 /*3*/].f_1=180f;
Local_138.f_4[117 /*3*/]=1;
Local_138.f_4[117 /*3*/].f_1=183f;
Local_138.f_4[118 /*3*/]=10;
Local_138.f_4[118 /*3*/].f_2=1;
Local_138.f_4[118 /*3*/].f_1=185f;
Local_138.f_4[119 /*3*/]=4;
Local_138.f_4[119 /*3*/].f_1=185.5f;
Local_138.f_4[120 /*3*/]=5;
Local_138.f_4[120 /*3*/].f_2=1;
Local_138.f_4[120 /*3*/].f_1=186f;
Local_138.f_4[121 /*3*/]=5;
Local_138.f_4[121 /*3*/].f_2=1;
Local_138.f_4[121 /*3*/].f_1=186.5f;
Local_138.f_4[122 /*3*/]=5;
Local_138.f_4[122 /*3*/].f_2=1;
Local_138.f_4[122 /*3*/].f_1=187f;
Local_138.f_4[123 /*3*/]=15;
Local_138.f_4[123 /*3*/].f_1=187.2f;
Local_138.f_4[124 /*3*/]=19;
Local_138.f_4[124 /*3*/].f_1=190f;
Local_138.f_4[125 /*3*/]=15;
Local_138.f_4[125 /*3*/].f_1=192f;
Local_138.f_4[126 /*3*/]=4;
Local_138.f_4[126 /*3*/].f_1=193f;
Local_138.f_4[127 /*3*/]=5;
Local_138.f_4[127 /*3*/].f_2=1;
Local_138.f_4[127 /*3*/].f_1=194f;
Local_138.f_4[128 /*3*/]=4;
Local_138.f_4[128 /*3*/].f_1=195f;
Local_138.f_4[129 /*3*/]=5;
Local_138.f_4[129 /*3*/].f_2=1;
Local_138.f_4[129 /*3*/].f_1=196f;
Local_138.f_4[130 /*3*/]=5;
Local_138.f_4[130 /*3*/].f_2=1;
Local_138.f_4[130 /*3*/].f_1=197f;
Local_138.f_4[131 /*3*/]=10;
Local_138.f_4[131 /*3*/].f_2=1;
Local_138.f_4[131 /*3*/].f_1=197.2f;
Local_138.f_4[132 /*3*/]=20;
Local_138.f_4[132 /*3*/].f_1=200f;
Local_138.f_4[133 /*3*/]=4;
Local_138.f_4[133 /*3*/].f_1=202f;
Local_138.f_4[134 /*3*/]=31;
Local_138.f_4[134 /*3*/].f_1=204f;
Local_138.f_4[135 /*3*/]=15;
Local_138.f_4[135 /*3*/].f_1=206.5f;
Local_138.f_4[136 /*3*/]=5;
Local_138.f_4[136 /*3*/].f_1=207f;
Local_138.f_4[137 /*3*/]=4;
Local_138.f_4[137 /*3*/].f_1=208f;
Local_138.f_4[138 /*3*/]=28;
Local_138.f_4[138 /*3*/].f_2=192;
Local_138.f_4[138 /*3*/].f_1=208.1f;
Local_138.f_4[139 /*3*/]=4;
Local_138.f_4[139 /*3*/].f_1=209f;
Local_138.f_4[140 /*3*/]=10;
Local_138.f_4[140 /*3*/].f_2=1;
Local_138.f_4[140 /*3*/].f_1=210f;
Local_138.f_4[141 /*3*/]=5;
Local_138.f_4[141 /*3*/].f_1=211f;
Local_138.f_4[142 /*3*/]=5;
Local_138.f_4[142 /*3*/].f_1=211.5f;
Local_138.f_4[143 /*3*/]=5;
Local_138.f_4[143 /*3*/].f_1=212f;
Local_138.f_4[144 /*3*/]=5;
Local_138.f_4[144 /*3*/].f_2=1;
Local_138.f_4[144 /*3*/].f_1=213f;
Local_138.f_4[145 /*3*/]=22;
Local_138.f_4[145 /*3*/].f_1=213.5f;
Local_138.f_4[146 /*3*/]=5;
Local_138.f_4[146 /*3*/].f_1=214f;
Local_138.f_4[147 /*3*/]=10;
Local_138.f_4[147 /*3*/].f_2=1;
Local_138.f_4[147 /*3*/].f_1=215f;
Local_138.f_4[148 /*3*/]=4;
Local_138.f_4[148 /*3*/].f_1=217f;
Local_138.f_4[149 /*3*/]=4;
Local_138.f_4[149 /*3*/].f_1=218f;
Local_138.f_4[150 /*3*/]=1;
Local_138.f_4[150 /*3*/].f_1=220f;
Local_138.f_4[151 /*3*/]=15;
Local_138.f_4[151 /*3*/].f_1=222f;
Local_138.f_4[152 /*3*/]=5;
Local_138.f_4[152 /*3*/].f_2=1;
Local_138.f_4[152 /*3*/].f_1=223f;
Local_138.f_4[153 /*3*/]=10;
Local_138.f_4[153 /*3*/].f_2=1;
Local_138.f_4[153 /*3*/].f_1=224f;
Local_138.f_4[154 /*3*/]=5;
Local_138.f_4[154 /*3*/].f_2=1;
Local_138.f_4[154 /*3*/].f_1=225f;
Local_138.f_4[155 /*3*/]=5;
Local_138.f_4[155 /*3*/].f_2=1;
Local_138.f_4[155 /*3*/].f_1=226f;
Local_138.f_4[156 /*3*/]=5;
Local_138.f_4[156 /*3*/].f_2=1;
Local_138.f_4[156 /*3*/].f_1=227f;
Local_138.f_4[157 /*3*/]=15;
Local_138.f_4[157 /*3*/].f_1=228f;
Local_138.f_4[158 /*3*/]=28;
Local_138.f_4[158 /*3*/].f_2=192;
Local_138.f_4[158 /*3*/].f_1=229f;
Local_138.f_4[159 /*3*/]=15;
Local_138.f_4[159 /*3*/].f_1=232f;
Local_138.f_4[160 /*3*/]=5;
Local_138.f_4[160 /*3*/].f_2=1;
Local_138.f_4[160 /*3*/].f_1=233f;
Local_138.f_4[161 /*3*/]=4;
Local_138.f_4[161 /*3*/].f_1=234f;
Local_138.f_4[162 /*3*/]=4;
Local_138.f_4[162 /*3*/].f_1=235f;
Local_138.f_4[163 /*3*/]=1;
Local_138.f_4[163 /*3*/].f_1=235.1f;
Local_138.f_4[164 /*3*/]=10;
Local_138.f_4[164 /*3*/].f_2=1;
Local_138.f_4[164 /*3*/].f_1=235.2f;
Local_138.f_4[165 /*3*/]=4;
Local_138.f_4[165 /*3*/].f_1=236.1f;
Local_138.f_4[166 /*3*/]=22;
Local_138.f_4[166 /*3*/].f_1=237.8f;
Local_138.f_4[167 /*3*/]=7;
Local_138.f_4[167 /*3*/].f_1=239.3f;
break;
case 3:
Local_138.f_4[0 /*3*/]=5;
Local_138.f_4[0 /*3*/].f_1=1f;
Local_138.f_4[1 /*3*/]=11;
Local_138.f_4[1 /*3*/].f_1=6f;
Local_138.f_4[2 /*3*/]=4;
Local_138.f_4[2 /*3*/].f_1=7f;
Local_138.f_4[3 /*3*/]=7;
Local_138.f_4[3 /*3*/].f_1=9f;
Local_138.f_4[4 /*3*/]=5;
Local_138.f_4[4 /*3*/].f_1=10f;
Local_138.f_4[5 /*3*/]=11;
Local_138.f_4[5 /*3*/].f_1=12f;
Local_138.f_4[6 /*3*/]=5;
Local_138.f_4[6 /*3*/].f_1=13f;
Local_138.f_4[7 /*3*/]=7;
Local_138.f_4[7 /*3*/].f_1=14.5f;
Local_138.f_4[8 /*3*/]=11;
Local_138.f_4[8 /*3*/].f_1=15f;
Local_138.f_4[9 /*3*/]=5;
Local_138.f_4[9 /*3*/].f_1=16f;
Local_138.f_4[10 /*3*/]=3;
Local_138.f_4[10 /*3*/].f_1=19f;
Local_138.f_4[11 /*3*/]=7;
Local_138.f_4[11 /*3*/].f_1=21f;
Local_138.f_4[12 /*3*/]=6;
Local_138.f_4[12 /*3*/].f_1=22f;
Local_138.f_4[13 /*3*/]=11;
Local_138.f_4[13 /*3*/].f_1=23f;
Local_138.f_4[14 /*3*/]=5;
Local_138.f_4[14 /*3*/].f_1=24f;
Local_138.f_4[15 /*3*/]=11;
Local_138.f_4[15 /*3*/].f_1=25f;
Local_138.f_4[16 /*3*/]=5;
Local_138.f_4[16 /*3*/].f_1=26f;
Local_138.f_4[17 /*3*/]=11;
Local_138.f_4[17 /*3*/].f_1=27f;
Local_138.f_4[18 /*3*/]=5;
Local_138.f_4[18 /*3*/].f_1=28f;
Local_138.f_4[19 /*3*/]=29;
Local_138.f_4[19 /*3*/].f_1=31f;
Local_138.f_4[20 /*3*/]=4;
Local_138.f_4[20 /*3*/].f_1=32f;
Local_138.f_4[21 /*3*/]=3;
Local_138.f_4[21 /*3*/].f_1=33f;
Local_138.f_4[22 /*3*/]=7;
Local_138.f_4[22 /*3*/].f_1=35f;
Local_138.f_4[23 /*3*/]=5;
Local_138.f_4[23 /*3*/].f_1=36f;
Local_138.f_4[24 /*3*/]=5;
Local_138.f_4[24 /*3*/].f_1=37f;
Local_138.f_4[25 /*3*/]=23;
Local_138.f_4[25 /*3*/].f_1=37.5f;
Local_138.f_4[26 /*3*/]=7;
Local_138.f_4[26 /*3*/].f_1=38f;
Local_138.f_4[27 /*3*/]=16;
Local_138.f_4[27 /*3*/].f_1=40f;
Local_138.f_4[28 /*3*/]=5;
Local_138.f_4[28 /*3*/].f_1=41f;
Local_138.f_4[29 /*3*/]=5;
Local_138.f_4[29 /*3*/].f_1=42f;
Local_138.f_4[30 /*3*/]=11;
Local_138.f_4[30 /*3*/].f_1=45f;
Local_138.f_4[31 /*3*/]=3;
Local_138.f_4[31 /*3*/].f_1=46.5f;
Local_138.f_4[32 /*3*/]=7;
Local_138.f_4[32 /*3*/].f_1=47.2f;
Local_138.f_4[33 /*3*/]=7;
Local_138.f_4[33 /*3*/].f_1=48.5f;
Local_138.f_4[34 /*3*/]=22;
Local_138.f_4[34 /*3*/].f_1=49.5f;
Local_138.f_4[35 /*3*/]=11;
Local_138.f_4[35 /*3*/].f_1=50f;
Local_138.f_4[36 /*3*/]=5;
Local_138.f_4[36 /*3*/].f_1=51f;
Local_138.f_4[37 /*3*/]=7;
Local_138.f_4[37 /*3*/].f_1=52.2f;
Local_138.f_4[38 /*3*/]=4;
Local_138.f_4[38 /*3*/].f_1=53f;
Local_138.f_4[39 /*3*/]=6;
Local_138.f_4[39 /*3*/].f_1=54f;
Local_138.f_4[40 /*3*/]=5;
Local_138.f_4[40 /*3*/].f_1=55f;
Local_138.f_4[41 /*3*/]=4;
Local_138.f_4[41 /*3*/].f_1=56f;
Local_138.f_4[42 /*3*/]=11;
Local_138.f_4[42 /*3*/].f_1=57f;
Local_138.f_4[43 /*3*/]=16;
Local_138.f_4[43 /*3*/].f_1=58f;
Local_138.f_4[44 /*3*/]=5;
Local_138.f_4[44 /*3*/].f_1=60f;
Local_138.f_4[45 /*3*/]=5;
Local_138.f_4[45 /*3*/].f_1=61f;
Local_138.f_4[46 /*3*/]=5;
Local_138.f_4[46 /*3*/].f_1=63f;
Local_138.f_4[47 /*3*/]=25;
Local_138.f_4[47 /*3*/].f_1=63.7f;
Local_138.f_4[48 /*3*/]=11;
Local_138.f_4[48 /*3*/].f_1=64f;
Local_138.f_4[49 /*3*/]=5;
Local_138.f_4[49 /*3*/].f_1=65f;
Local_138.f_4[50 /*3*/]=11;
Local_138.f_4[50 /*3*/].f_1=66f;
Local_138.f_4[51 /*3*/]=5;
Local_138.f_4[51 /*3*/].f_1=67f;
Local_138.f_4[52 /*3*/]=5;
Local_138.f_4[52 /*3*/].f_1=69f;
Local_138.f_4[53 /*3*/]=7;
Local_138.f_4[53 /*3*/].f_1=70f;
Local_138.f_4[54 /*3*/]=11;
Local_138.f_4[54 /*3*/].f_1=70.1f;
Local_138.f_4[55 /*3*/]=4;
Local_138.f_4[55 /*3*/].f_1=72f;
Local_138.f_4[56 /*3*/]=29;
Local_138.f_4[56 /*3*/].f_1=74.5f;
Local_138.f_4[57 /*3*/]=23;
Local_138.f_4[57 /*3*/].f_1=75f;
Local_138.f_4[58 /*3*/]=5;
Local_138.f_4[58 /*3*/].f_1=75.5f;
Local_138.f_4[59 /*3*/]=7;
Local_138.f_4[59 /*3*/].f_1=76f;
Local_138.f_4[60 /*3*/]=5;
Local_138.f_4[60 /*3*/].f_1=76.5f;
Local_138.f_4[61 /*3*/]=4;
Local_138.f_4[61 /*3*/].f_1=78.5f;
Local_138.f_4[62 /*3*/]=28;
Local_138.f_4[62 /*3*/].f_2=451;
Local_138.f_4[62 /*3*/].f_1=79f;
Local_138.f_4[63 /*3*/]=16;
Local_138.f_4[63 /*3*/].f_1=80f;
Local_138.f_4[64 /*3*/]=4;
Local_138.f_4[64 /*3*/].f_1=80.5f;
Local_138.f_4[65 /*3*/]=11;
Local_138.f_4[65 /*3*/].f_1=81f;
Local_138.f_4[66 /*3*/]=6;
Local_138.f_4[66 /*3*/].f_1=82f;
Local_138.f_4[67 /*3*/]=5;
Local_138.f_4[67 /*3*/].f_1=83f;
Local_138.f_4[68 /*3*/]=11;
Local_138.f_4[68 /*3*/].f_1=83.5f;
Local_138.f_4[69 /*3*/]=11;
Local_138.f_4[69 /*3*/].f_1=85f;
Local_138.f_4[70 /*3*/]=5;
Local_138.f_4[70 /*3*/].f_1=86f;
Local_138.f_4[71 /*3*/]=29;
Local_138.f_4[71 /*3*/].f_1=89.3f;
Local_138.f_4[72 /*3*/]=20;
Local_138.f_4[72 /*3*/].f_1=89.8f;
Local_138.f_4[73 /*3*/]=3;
Local_138.f_4[73 /*3*/].f_1=90.5f;
Local_138.f_4[74 /*3*/]=3;
Local_138.f_4[74 /*3*/].f_1=92f;
Local_138.f_4[75 /*3*/]=16;
Local_138.f_4[75 /*3*/].f_1=92.1f;
Local_138.f_4[76 /*3*/]=5;
Local_138.f_4[76 /*3*/].f_1=93f;
Local_138.f_4[77 /*3*/]=5;
Local_138.f_4[77 /*3*/].f_1=93.6f;
Local_138.f_4[78 /*3*/]=11;
Local_138.f_4[78 /*3*/].f_1=93.7f;
Local_138.f_4[79 /*3*/]=5;
Local_138.f_4[79 /*3*/].f_1=94.5f;
Local_138.f_4[80 /*3*/]=7;
Local_138.f_4[80 /*3*/].f_1=95f;
Local_138.f_4[81 /*3*/]=5;
Local_138.f_4[81 /*3*/].f_1=96f;
Local_138.f_4[82 /*3*/]=11;
Local_138.f_4[82 /*3*/].f_1=98f;
Local_138.f_4[83 /*3*/]=4;
Local_138.f_4[83 /*3*/].f_1=99f;
Local_138.f_4[84 /*3*/]=4;
Local_138.f_4[84 /*3*/].f_1=100f;
Local_138.f_4[85 /*3*/]=22;
Local_138.f_4[85 /*3*/].f_1=102f;
Local_138.f_4[86 /*3*/]=7;
Local_138.f_4[86 /*3*/].f_1=104f;
Local_138.f_4[87 /*3*/]=11;
Local_138.f_4[87 /*3*/].f_1=106f;
Local_138.f_4[88 /*3*/]=3;
Local_138.f_4[88 /*3*/].f_1=110f;
Local_138.f_4[89 /*3*/]=3;
Local_138.f_4[89 /*3*/].f_1=112f;
Local_138.f_4[90 /*3*/]=24;
Local_138.f_4[90 /*3*/].f_1=114f;
Local_138.f_4[91 /*3*/]=16;
Local_138.f_4[91 /*3*/].f_1=115f;
Local_138.f_4[92 /*3*/]=4;
Local_138.f_4[92 /*3*/].f_1=116f;
Local_138.f_4[93 /*3*/]=6;
Local_138.f_4[93 /*3*/].f_1=119f;
Local_138.f_4[94 /*3*/]=4;
Local_138.f_4[94 /*3*/].f_1=122f;
Local_138.f_4[95 /*3*/]=7;
Local_138.f_4[95 /*3*/].f_1=124f;
Local_138.f_4[96 /*3*/]=6;
Local_138.f_4[96 /*3*/].f_1=126f;
Local_138.f_4[97 /*3*/]=5;
Local_138.f_4[97 /*3*/].f_1=129f;
Local_138.f_4[98 /*3*/]=5;
Local_138.f_4[98 /*3*/].f_1=130f;
Local_138.f_4[99 /*3*/]=11;
Local_138.f_4[99 /*3*/].f_1=132f;
Local_138.f_4[100 /*3*/]=4;
Local_138.f_4[100 /*3*/].f_1=133f;
Local_138.f_4[101 /*3*/]=4;
Local_138.f_4[101 /*3*/].f_1=134f;
Local_138.f_4[102 /*3*/]=21;
Local_138.f_4[102 /*3*/].f_1=136f;
Local_138.f_4[103 /*3*/]=29;
Local_138.f_4[103 /*3*/].f_1=138f;
Local_138.f_4[104 /*3*/]=11;
Local_138.f_4[104 /*3*/].f_1=140f;
Local_138.f_4[105 /*3*/]=5;
Local_138.f_4[105 /*3*/].f_1=141f;
Local_138.f_4[106 /*3*/]=5;
Local_138.f_4[106 /*3*/].f_1=142f;
Local_138.f_4[107 /*3*/]=5;
Local_138.f_4[107 /*3*/].f_1=143f;
Local_138.f_4[108 /*3*/]=16;
Local_138.f_4[108 /*3*/].f_1=147f;
Local_138.f_4[109 /*3*/]=4;
Local_138.f_4[109 /*3*/].f_1=148f;
Local_138.f_4[110 /*3*/]=3;
Local_138.f_4[110 /*3*/].f_1=150f;
Local_138.f_4[111 /*3*/]=4;
Local_138.f_4[111 /*3*/].f_1=152f;
Local_138.f_4[112 /*3*/]=24;
Local_138.f_4[112 /*3*/].f_1=154f;
Local_138.f_4[113 /*3*/]=6;
Local_138.f_4[113 /*3*/].f_1=155f;
Local_138.f_4[114 /*3*/]=11;
Local_138.f_4[114 /*3*/].f_1=156f;
Local_138.f_4[115 /*3*/]=5;
Local_138.f_4[115 /*3*/].f_1=157f;
Local_138.f_4[116 /*3*/]=4;
Local_138.f_4[116 /*3*/].f_1=160f;
Local_138.f_4[117 /*3*/]=6;
Local_138.f_4[117 /*3*/].f_1=163f;
Local_138.f_4[118 /*3*/]=5;
Local_138.f_4[118 /*3*/].f_1=165f;
Local_138.f_4[119 /*3*/]=11;
Local_138.f_4[119 /*3*/].f_1=167f;
Local_138.f_4[120 /*3*/]=5;
Local_138.f_4[120 /*3*/].f_1=170f;
Local_138.f_4[121 /*3*/]=5;
Local_138.f_4[121 /*3*/].f_1=171f;
Local_138.f_4[122 /*3*/]=16;
Local_138.f_4[122 /*3*/].f_1=172f;
Local_138.f_4[123 /*3*/]=4;
Local_138.f_4[123 /*3*/].f_1=173f;
Local_138.f_4[124 /*3*/]=7;
Local_138.f_4[124 /*3*/].f_1=176f;
Local_138.f_4[125 /*3*/]=29;
Local_138.f_4[125 /*3*/].f_1=182f;
Local_138.f_4[126 /*3*/]=5;
Local_138.f_4[126 /*3*/].f_1=184f;
Local_138.f_4[127 /*3*/]=5;
Local_138.f_4[127 /*3*/].f_1=185f;
Local_138.f_4[128 /*3*/]=11;
Local_138.f_4[128 /*3*/].f_1=186f;
Local_138.f_4[129 /*3*/]=4;
Local_138.f_4[129 /*3*/].f_1=187f;
Local_138.f_4[130 /*3*/]=4;
Local_138.f_4[130 /*3*/].f_1=188f;
Local_138.f_4[131 /*3*/]=20;
Local_138.f_4[131 /*3*/].f_1=190f;
Local_138.f_4[132 /*3*/]=5;
Local_138.f_4[132 /*3*/].f_1=192f;
Local_138.f_4[133 /*3*/]=11;
Local_138.f_4[133 /*3*/].f_1=193f;
Local_138.f_4[134 /*3*/]=30;
Local_138.f_4[134 /*3*/].f_1=196f;
Local_138.f_4[135 /*3*/]=11;
Local_138.f_4[135 /*3*/].f_1=198f;
Local_138.f_4[136 /*3*/]=3;
Local_138.f_4[136 /*3*/].f_1=201f;
Local_138.f_4[137 /*3*/]=5;
Local_138.f_4[137 /*3*/].f_1=202f;
Local_138.f_4[138 /*3*/]=3;
Local_138.f_4[138 /*3*/].f_1=203f;
Local_138.f_4[139 /*3*/]=3;
Local_138.f_4[139 /*3*/].f_1=205f;
Local_138.f_4[140 /*3*/]=6;
Local_138.f_4[140 /*3*/].f_1=207f;
Local_138.f_4[141 /*3*/]=22;
Local_138.f_4[141 /*3*/].f_1=209f;
Local_138.f_4[142 /*3*/]=7;
Local_138.f_4[142 /*3*/].f_1=210f;
Local_138.f_4[143 /*3*/]=4;
Local_138.f_4[143 /*3*/].f_1=211f;
Local_138.f_4[144 /*3*/]=4;
Local_138.f_4[144 /*3*/].f_1=212f;
Local_138.f_4[145 /*3*/]=7;
Local_138.f_4[145 /*3*/].f_1=213f;
Local_138.f_4[146 /*3*/]=16;
Local_138.f_4[146 /*3*/].f_1=214f;
Local_138.f_4[147 /*3*/]=3;
Local_138.f_4[147 /*3*/].f_1=215f;
Local_138.f_4[148 /*3*/]=5;
Local_138.f_4[148 /*3*/].f_1=216f;
Local_138.f_4[149 /*3*/]=5;
Local_138.f_4[149 /*3*/].f_1=217f;
Local_138.f_4[150 /*3*/]=5;
Local_138.f_4[150 /*3*/].f_1=218f;
Local_138.f_4[151 /*3*/]=3;
Local_138.f_4[151 /*3*/].f_1=219.5f;
Local_138.f_4[152 /*3*/]=11;
Local_138.f_4[152 /*3*/].f_1=220f;
Local_138.f_4[153 /*3*/]=11;
Local_138.f_4[153 /*3*/].f_1=223f;
Local_138.f_4[154 /*3*/]=5;
Local_138.f_4[154 /*3*/].f_1=224f;
Local_138.f_4[155 /*3*/]=29;
Local_138.f_4[155 /*3*/].f_1=226f;
Local_138.f_4[156 /*3*/]=4;
Local_138.f_4[156 /*3*/].f_1=228f;
Local_138.f_4[157 /*3*/]=3;
Local_138.f_4[157 /*3*/].f_1=230f;
Local_138.f_4[158 /*3*/]=7;
Local_138.f_4[158 /*3*/].f_1=230.5f;
Local_138.f_4[159 /*3*/]=16;
Local_138.f_4[159 /*3*/].f_1=233f;
Local_138.f_4[160 /*3*/]=5;
Local_138.f_4[160 /*3*/].f_1=234f;
Local_138.f_4[161 /*3*/]=5;
Local_138.f_4[161 /*3*/].f_1=235f;
Local_138.f_4[162 /*3*/]=7;
Local_138.f_4[162 /*3*/].f_1=236f;
Local_138.f_4[163 /*3*/]=24;
Local_138.f_4[163 /*3*/].f_1=238f;
Local_138.f_4[164 /*3*/]=3;
Local_138.f_4[164 /*3*/].f_1=242f;
Local_138.f_4[165 /*3*/]=5;
Local_138.f_4[165 /*3*/].f_1=243f;
Local_138.f_4[166 /*3*/]=5;
Local_138.f_4[166 /*3*/].f_1=244f;
Local_138.f_4[167 /*3*/]=11;
Local_138.f_4[167 /*3*/].f_1=248f;
Local_138.f_4[168 /*3*/]=3;
Local_138.f_4[168 /*3*/].f_1=251f;
Local_138.f_4[169 /*3*/]=5;
Local_138.f_4[169 /*3*/].f_1=252f;
Local_138.f_4[170 /*3*/]=3;
Local_138.f_4[170 /*3*/].f_1=253f;
Local_138.f_4[171 /*3*/]=7;
Local_138.f_4[171 /*3*/].f_1=254f;
Local_138.f_4[172 /*3*/]=16;
Local_138.f_4[172 /*3*/].f_1=255f;
Local_138.f_4[173 /*3*/]=29;
Local_138.f_4[173 /*3*/].f_1=256f;
Local_138.f_4[174 /*3*/]=20;
Local_138.f_4[174 /*3*/].f_1=259f;
Local_138.f_4[175 /*3*/]=11;
Local_138.f_4[175 /*3*/].f_1=261f;
Local_138.f_4[176 /*3*/]=5;
Local_138.f_4[176 /*3*/].f_1=263f;
Local_138.f_4[177 /*3*/]=7;
Local_138.f_4[177 /*3*/].f_1=264f;
Local_138.f_4[178 /*3*/]=4;
Local_138.f_4[178 /*3*/].f_1=265f;
Local_138.f_4[179 /*3*/]=6;
Local_138.f_4[179 /*3*/].f_1=267f;
Local_138.f_4[180 /*3*/]=7;
Local_138.f_4[180 /*3*/].f_1=269f;
Local_138.f_4[181 /*3*/]=5;
Local_138.f_4[181 /*3*/].f_1=270f;
Local_138.f_4[182 /*3*/]=23;
Local_138.f_4[182 /*3*/].f_1=272f;
Local_138.f_4[183 /*3*/]=11;
Local_138.f_4[183 /*3*/].f_1=274f;
Local_138.f_4[184 /*3*/]=5;
Local_138.f_4[184 /*3*/].f_1=275f;
Local_138.f_4[185 /*3*/]=7;
Local_138.f_4[185 /*3*/].f_1=277f;
Local_138.f_4[186 /*3*/]=5;
Local_138.f_4[186 /*3*/].f_1=280f;
Local_138.f_4[187 /*3*/]=4;
Local_138.f_4[187 /*3*/].f_1=283f;
Local_138.f_4[188 /*3*/]=5;
Local_138.f_4[188 /*3*/].f_1=286f;
Local_138.f_4[189 /*3*/]=29;
Local_138.f_4[189 /*3*/].f_1=288f;
Local_138.f_4[190 /*3*/]=5;
Local_138.f_4[190 /*3*/].f_1=289f;
Local_138.f_4[191 /*3*/]=16;
Local_138.f_4[191 /*3*/].f_1=292f;
Local_138.f_4[192 /*3*/]=5;
Local_138.f_4[192 /*3*/].f_1=294f;
Local_138.f_4[193 /*3*/]=7;
Local_138.f_4[193 /*3*/].f_1=296f;
Local_138.f_4[194 /*3*/]=5;
Local_138.f_4[194 /*3*/].f_1=299f;
Local_138.f_4[195 /*3*/]=18;
Local_138.f_4[195 /*3*/].f_1=302f;
Local_138.f_4[196 /*3*/]=6;
Local_138.f_4[196 /*3*/].f_1=303f;
Local_138.f_4[197 /*3*/]=5;
Local_138.f_4[197 /*3*/].f_1=305f;
Local_138.f_4[198 /*3*/]=16;
Local_138.f_4[198 /*3*/].f_1=306f;
Local_138.f_4[199 /*3*/]=24;
Local_138.f_4[199 /*3*/].f_1=307f;
Local_138.f_4[200 /*3*/]=5;
Local_138.f_4[200 /*3*/].f_2=1;
Local_138.f_4[200 /*3*/].f_1=308f;
Local_138.f_4[201 /*3*/]=11;
Local_138.f_4[201 /*3*/].f_1=309f;
Local_138.f_4[202 /*3*/]=4;
Local_138.f_4[202 /*3*/].f_1=310f;
Local_138.f_4[203 /*3*/]=6;
Local_138.f_4[203 /*3*/].f_1=314f;
Local_138.f_4[204 /*3*/]=7;
Local_138.f_4[204 /*3*/].f_1=314.7f;
Local_138.f_4[205 /*3*/]=4;
Local_138.f_4[205 /*3*/].f_1=315.5f;
Local_138.f_4[206 /*3*/]=16;
Local_138.f_4[206 /*3*/].f_1=316f;
Local_138.f_4[207 /*3*/]=4;
Local_138.f_4[207 /*3*/].f_1=317f;
Local_138.f_4[208 /*3*/]=3;
Local_138.f_4[208 /*3*/].f_1=320f;
Local_138.f_4[209 /*3*/]=4;
Local_138.f_4[209 /*3*/].f_1=321f;
Local_138.f_4[210 /*3*/]=11;
Local_138.f_4[210 /*3*/].f_1=322f;
Local_138.f_4[211 /*3*/]=5;
Local_138.f_4[211 /*3*/].f_2=1;
Local_138.f_4[211 /*3*/].f_1=322.5f;
Local_138.f_4[212 /*3*/]=11;
Local_138.f_4[212 /*3*/].f_1=324f;
Local_138.f_4[213 /*3*/]=11;
Local_138.f_4[213 /*3*/].f_1=325f;
Local_138.f_4[214 /*3*/]=27;
Local_138.f_4[214 /*3*/].f_1=328.5f;
Local_138.f_4[215 /*3*/]=3;
Local_138.f_4[215 /*3*/].f_1=329.5f;
Local_138.f_4[216 /*3*/]=4;
Local_138.f_4[216 /*3*/].f_1=330f;
Local_138.f_4[217 /*3*/]=4;
Local_138.f_4[217 /*3*/].f_1=331f;
Local_138.f_4[218 /*3*/]=4;
Local_138.f_4[218 /*3*/].f_1=332f;
Local_138.f_4[219 /*3*/]=6;
Local_138.f_4[219 /*3*/].f_1=333f;
Local_138.f_4[220 /*3*/]=16;
Local_138.f_4[220 /*3*/].f_1=334f;
Local_138.f_4[221 /*3*/]=4;
Local_138.f_4[221 /*3*/].f_1=335f;
Local_138.f_4[222 /*3*/]=3;
Local_138.f_4[222 /*3*/].f_1=336f;
Local_138.f_4[223 /*3*/]=11;
Local_138.f_4[223 /*3*/].f_1=337f;
Local_138.f_4[224 /*3*/]=4;
Local_138.f_4[224 /*3*/].f_1=338f;
break;
case 4:
Local_138.f_4[0 /*3*/]=34;
Local_138.f_4[0 /*3*/].f_1=0f;
break;
}}


void func_113(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4){
*uParam0=iParam1;
uParam0->f_1=iParam2;
uParam0->f_2=iParam3;
uParam0->f_3=iParam4;
}


void func_114(){
if(!MISC::IS_BIT_SET(Local_138.f_2368.f_333, 7)){
Local_137.f_16=1;
Local_137.f_17=Local_138.f_2712.f_2;
Local_137.f_18=Local_138.f_2712.f_6;
Local_137.f_20=func_47();
MISC::SET_BIT(&(Local_138.f_2368.f_333), 7);
Local_137.f_21=func_43();
func_42();
}
AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_ip_in_gameplay_scene");
AUDIO::START_AUDIO_SCENE("dlc_vw_am_ip_in_menus_scene");
if(func_118()){
func_117();
func_12(func_13(4));
func_115();
func_8(10);
}else{
func_9();
func_60();
func_54();
func_53("Frontend_Retry");
func_8(4);
}}


void func_115(){
struct<3> Var0;
int iVar1;
Var0=11;
Var0.f_1.f_1=-1;
Var0.f_1.f_3.f_1=-1;
Var0.f_1.f_3.f_3.f_1=-1;
Var0.f_1.f_3.f_3.f_3.f_1=-1;
Var0.f_1.f_3.f_3.f_3.f_3.f_1=-1;
Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_1=-1;
Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1=-1;
Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1=-1;
Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1=-1;
Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1=-1;
Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1=-1;
iVar1=0;
while (iVar1 <=9){
Var0[iVar1 /*3*/]=Local_138.f_2912[iVar1 /*3*/];
Var0[iVar1 /*3*/].f_2=0;
Var0[iVar1 /*3*/].f_1=Local_138.f_2912[iVar1 /*3*/].f_1;
iVar1++;
}
if(!Local_138.f_2907){
Var0[10 /*3*/].f_2=1;
Var0[10 /*3*/].f_1=func_47();
Var0[10 /*3*/]=0;
}
func_116(&Var0, 0, 10);
iVar1=0;
while (iVar1 <=9){
Local_138.f_2912[iVar1 /*3*/]=Var0[iVar1 /*3*/];
Local_138.f_2912[iVar1 /*3*/].f_2=Var0[iVar1 /*3*/].f_2;
Local_138.f_2912[iVar1 /*3*/].f_1=Var0[iVar1 /*3*/].f_1;
func_76(func_78(PLAYER::PLAYER_ID()), 1, iVar1, Local_138.f_2912[iVar1 /*3*/], Local_138.f_2912[iVar1 /*3*/].f_1, 0);
iVar1++;
}}


void func_116(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
struct<3> Var3;
iVar2=(iParam0[((iParam1 + iParam2) / 2) /*3*/])->f_1;
Var3.f_1=-1;
iVar0=iParam1;
iVar1=iParam2;
while (iVar0 <=iVar1){
while ((iParam0[iVar0 /*3*/])->f_1 > iVar2 && iVar0 < iParam2){
iVar0++;
}
while (iVar2 > (iParam0[iVar1 /*3*/])->f_1 && iVar1 > iParam1){
iVar1=(iVar1 - 1);
}
if(iVar0 <=iVar1){
Var3.f_0=(*iParam0)[iVar0 /*3*/];
Var3.f_2=(iParam0[iVar0 /*3*/])->f_2;
Var3.f_1=(iParam0[iVar0 /*3*/])->f_1;
(*iParam0)[iVar0 /*3*/]=(*iParam0)[iVar1 /*3*/];
(iParam0[iVar0 /*3*/])->f_2=(iParam0[iVar1 /*3*/])->f_2;
(iParam0[iVar0 /*3*/])->f_1=(iParam0[iVar1 /*3*/])->f_1;
(*iParam0)[iVar1 /*3*/]=Var3.f_0;
(iParam0[iVar1 /*3*/])->f_2=Var3.f_2;
(iParam0[iVar1 /*3*/])->f_1=Var3.f_1;
iVar0++;
iVar1=(iVar1 - 1);
}}
if(iVar0 < iParam2){
func_116(iParam0, iVar0, iParam2);
}
if(iParam1 < iVar1){
func_116(iParam0, iParam1, iVar1);
}}


void func_117(){
Local_138.f_2881=GRAPHICS::SET_BINK_MOVIE("I&P_Leaderboard_loop_16x9");
GRAPHICS::PLAY_BINK_MOVIE(Local_138.f_2881);
}

int func_118(){
if(NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV()==0){
return 0;
}
if(func_68()){
if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1)){
if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()){
return 1;
}}}elseif(func_119()){
if(NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, 1)){
return 1;
}}elseif(MISC::IS_PC_VERSION()){
if(NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1)){
if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()){
return 1;
}}}
return 0;
}


bool func_119(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_120(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_121(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_121(var uParam0, bool bParam1, bool bParam2){
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


void func_122(var uParam0, bool bParam1, bool bParam2){
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


bool func_123(var uParam0){
return uParam0->f_1;
}

int func_124(){
int iVar0;
bool bVar1;
if(Local_138.f_2878 < func_136(3) + 60 + 10){
return 0;
}
iVar0=223;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
iVar0=237;
}
bVar1=PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar0);
if(bVar1){
Local_138.f_2725=func_47();
}
if(func_47() > Local_138.f_2725){
return 0;
}
if(!MISC::IS_BIT_SET(Local_138.f_2368.f_333, 6)){
MISC::SET_BIT(&(Local_138.f_2368.f_333), 6);
}
if(!MISC::IS_BIT_SET(Local_138.f_2368.f_333, 4)){
if(Local_138.f_2727==0){
MISC::SET_BIT(&(Local_138.f_2368.f_333), 4);
func_53("Frontend_Score_Tick_Total");
func_14(&(Local_138.f_2729));
}else{
if(bVar1){
func_126((500 * Local_138.f_2727), 4, func_91(-1f, -1f));
func_53("Frontend_Score_Tick_Large");
Local_138.f_2727=0;
Local_138.f_2725=func_47();
return 0;
}
Local_138.f_2727=(Local_138.f_2727 - 1);
func_125("Frontend_Score_Tick_Loop_Small", &(Local_138.f_2729));
func_126(500, 5, func_91(-1f, -1f));
}
return 0;
}
if(!MISC::IS_BIT_SET(Local_138.f_2368.f_333, 5)){
if(Local_138.f_2726 <=0){
MISC::SET_BIT(&(Local_138.f_2368.f_333), 5);
func_53("Frontend_Score_Tick_Total");
return 0;
}else{
if(bVar1){
func_126((10000 * Local_138.f_2726), 4, func_91(-1f, -1f));
func_53("Frontend_Score_Tick_Large");
Local_138.f_2726=0;
Local_138.f_2725=func_47();
return 0;
}
Local_138.f_2726=(Local_138.f_2726 - 1);
func_53("Frontend_Score_Tick_Large");
func_126(10000, 4, func_91(-1f, -1f));
}
return 0;
}
if(!MISC::IS_BIT_SET(Local_138.f_2368.f_333, 3)){
if(Local_138.f_2728==0){
MISC::SET_BIT(&(Local_138.f_2368.f_333), 3);
func_53("Frontend_Score_Tick_Total");
func_14(&(Local_138.f_2729));
}else{
if(bVar1){
func_126((round((0.164583f * 151.899f)) * Local_138.f_2728), 4, func_91(-1f, -1f));
func_53("Frontend_Score_Tick_Large");
Local_138.f_2728=0;
Local_138.f_2725=func_47();
return 0;
}
Local_138.f_2728=(Local_138.f_2728 - 1);
func_125("Frontend_Score_Tick_Loop_Small", &(Local_138.f_2729));
func_126(round((0.164583f * 151.899f)), 3, func_91(-1f, -1f));
}
return 0;
}
return 1;
}


void func_125(char* sParam0, var uParam1){
if(*uParam1==-1){
*uParam1=AUDIO::GET_SOUND_ID();
}
if(AUDIO::HAS_SOUND_FINISHED(*uParam1)){
AUDIO::PLAY_SOUND_FRONTEND(*uParam1, sParam0, "dlc_vw_am_ip_frontend_sounds", 0);
}}


void func_126(int iParam0, int iParam1, struct<2> Param2){
switch (iParam1){
case 0:
Local_138.f_2712.f_3=(Local_138.f_2712.f_3 + iParam0);
Local_138.f_2712.f_4++;
Local_138.f_2712.f_6++;
func_135(iParam0, Param2);
func_134();
break;
case 1:
Local_138.f_2712=(Local_138.f_2712 + iParam0);
break;
case 2:
Local_138.f_2712.f_7=(Local_138.f_2712.f_7 + iParam0);
Local_138.f_2712.f_8++;
Local_138.f_2712.f_9++;
func_135(iParam0, Param2);
func_127();
break;
case 3:
Local_138.f_2712.f_10=(Local_138.f_2712.f_10 + iParam0);
break;
case 5:
Local_138.f_2712.f_12=(Local_138.f_2712.f_12 + iParam0);
break;
case 4:
Local_138.f_2712.f_11=(Local_138.f_2712.f_11 + iParam0);
break;
}}


void func_127(){
if(MISC::IS_BIT_SET(Local_138.f_2904, 2)){
return;
}
if(Local_138.f_2712.f_9 < Global_262145.f_27446){
return;
}
func_131(249, 1, -1, 1);
func_130(27185, 1, -1);
MISC::SET_BIT(&(Local_138.f_2904), 2);
MISC::SET_BIT(&(Local_138.f_2904), 8);
func_129();
func_128("IAP_CH_1", Global_262145.f_27446, 7500);
}


void func_128(char* sParam0, var uParam1, int iParam2){
func_9();
Local_138.f_2901=(NETWORK::GET_NETWORK_TIME() + iParam2);
Local_138.f_2903=sParam0;
Local_138.f_2902=uParam1;
}


void func_129(){
if(MISC::IS_BIT_SET(Local_138.f_2904, 0)){
return;
}
if(MISC::IS_BIT_SET(Local_138.f_2904, 6)){
return;
}
if(Global_262145.f_27450 && !MISC::IS_BIT_SET(Local_138.f_2904, 1)){
return;
}
if(Global_262145.f_27451 && !MISC::IS_BIT_SET(Local_138.f_2904, 2)){
return;
}
if(Global_262145.f_27452 && !MISC::IS_BIT_SET(Local_138.f_2904, 3)){
return;
}
if(Global_262145.f_27453 && !MISC::IS_BIT_SET(Local_138.f_2904, 4)){
return;
}
if(Global_262145.f_27454 && !MISC::IS_BIT_SET(Local_138.f_2904, 5)){
return;
}
func_131(253, 1, -1, 1);
MISC::SET_BIT(&(Local_138.f_2904), 6);
}


void func_130(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_32();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}


void func_131(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_132(iParam0, iParam2);
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
}}


var func__132(var uParam0, var uParam1){
return unk_0xD69CE161FE614531(2, uParam0, func_133(uParam1));
}

int func_133(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_32();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}


void func_134(){
if(MISC::IS_BIT_SET(Local_138.f_2904, 1)){
return;
}
if(Local_138.f_2712.f_5 < Global_262145.f_27445){
return;
}
func_131(248, 1, -1, 1);
func_130(27184, 1, -1);
MISC::SET_BIT(&(Local_138.f_2904), true);
MISC::SET_BIT(&(Local_138.f_2904), 7);
func_129();
func_128("IAP_CH_0", Global_262145.f_27445, 7500);
}


void func_135(int iParam0, struct<2> Param1){
Local_138.f_2812[Local_138.f_2869 /*4*/]=NETWORK::GET_NETWORK_TIME();
Local_138.f_2812[Local_138.f_2869 /*4*/].f_1=iParam0;
Local_138.f_2812[Local_138.f_2869 /*4*/].f_2={
Param1 
};
Local_138.f_2869++;
if(Local_138.f_2869 >=14){
Local_138.f_2869=0;
}}

int func_136(int iParam0){
switch (iParam0){
case 0:
return 21;
case 1:
return 11;
case 2:
return 21;
case 3:
return 25;
default:
}
return -1;
}

int func_137(){
Local_138.f_2368.f_321=func_138(Local_138.f_2368.f_321, 0.15f);
if(Local_138.f_2368.f_321 < 1f){
return 0;
}
Local_138.f_2368.f_321=1f;
return 1;
}


float func_138(float fParam0, float fParam1){
return (fParam0 + ((fParam1 * Local_138.f_2873) * timestep()));
}


void func_139(){
func_207();
func_194();
func_188();
func_176();
func_175();
func_174();
func_162();
func_157();
func_150();
func_145();
func_140(3);
func_87();
func_85();
}


void func_140(int iParam0){
int iVar0;
struct<2> Var1;
struct<8> Var2;
float fVar3;
iVar0=func_136(iParam0);
if(Local_138.f_2878 > -1 && Local_138.f_2878 < func_136(iParam0)){
iVar0=Local_138.f_2878 + 1;
}
Var1={
func_144(iParam0) 
};
StringCopy(&Var2, func_143(iParam0), 64);
StringIntConCat(&Var2, iVar0, 64);
fVar3=0f;
if((iParam0==3 || iParam0==2) && Local_138.f_2878 >=func_136(iParam0) + 60 + 10){
fVar3=-0.118519f;
}
func_86(func_142(iParam0), &Var2, 0.5f, (0.5f + fVar3), Var1.f_0, Var1.f_1, 0f, Local_138.f_1765);
func_141();
}


void func_141(){
Local_138.f_2878=(Local_138.f_2878 + Local_138.f_2877);
}


char* func_142(int iParam0){
switch (iParam0){
case 0:
case 1:
return "MPInvPersMessages";
case 2:
case 3:
return "MPInvPersMessages2";
default:
}
return "INVALID SEQUENCE";
}


char* func_143(int iParam0){
switch (iParam0){
case 0:
return "get ready_";
case 1:
return "go_";
case 2:
return "gameover_";
case 3:
return "stageclear_";
default:
}
return "INVALID SEQUENCE";
}


struct<2> func_144(int iParam0){
switch (iParam0){
case 0:
return func_91(0.266667f, 0.118519f);
case 1:
return func_91(0.104167f, 0.118519f);
case 2:
return func_91(0.266667f, 0.118519f);
case 3:
return func_91(0.3125f, 0.118519f);
default:
}
return func_91(-1f, -1f);
}


void func_145(){
struct<2> Var0;
int iVar1;
bool bVar2;
float fVar3;
Var0={
func_91(1f, 0.01851852f) 
};
iVar1=func_136(3);
bVar2=false;
if(Local_138.f_2878 < iVar1){
Var0.f_1=(Var0.f_1 + (((0.1157407f - 0.01851852f) / IntToFloat(iVar1)) * IntToFloat(Local_138.f_2878)));
}elseif(Local_138.f_2878 < iVar1 + 60){
Var0.f_1=0.1157407f;
}elseif(Local_138.f_2878 < iVar1 + 60 + 10){
Var0.f_1=(0.1157407f + (((0.3472222f - 0.1157407f) / 10f) * IntToFloat(((Local_138.f_2878 - iVar1) - 60))));
}else{
Var0.f_1=0.3472222f;
bVar2=true;
}
func_94(func_91(0.5f, 0.5f), func_149(Var0, func_91(0f, 0.003703704f)), Local_138.f_1765.f_24);
func_94(func_91(0.5f, 0.5f), Var0, Local_138.f_1765.f_20);
if(!bVar2){
return;
}
fVar3=0.4675926f;
func_86("MpInvPersHud", "title_armour", (0.4947917f - (0.09583333f / 2f)), fVar3, 0.09583333f, 0.02962963f, 0f, Local_138.f_1765.f_28);
func_146(Local_138.f_2727, fVar3, 0, 99);
fVar3=(fVar3 + 0.03703704f);
func_86("MpInvPersHud", "title_lives", (0.4947917f - (0.09583333f / 2f)), fVar3, 0.09583333f, 0.02962963f, 0f, Local_138.f_1765.f_28);
func_146(Local_138.f_2726, fVar3, 0, 99);
fVar3=(fVar3 + 0.03703704f);
func_86("MpInvPersHud", "title_distance", (0.4947917f - (0.09583333f / 2f)), fVar3, 0.09583333f, 0.02962963f, 0f, Local_138.f_1765.f_28);
func_146(Local_138.f_2728 * 1000, fVar3, 0, 99);
fVar3=(fVar3 + (0.03703704f / 2f));
func_94(func_91((0.5f + 0.022f), (fVar3 + 0.0095f)), func_91(0.175f, 0.005555556f), Local_138.f_1765.f_28);
fVar3=(fVar3 + 0.03703704f);
func_86("MpInvPersHud", "title_total", (0.4947917f - (0.09583333f / 2f)), fVar3, 0.09583333f, 0.02962963f, 0f, Local_138.f_1765.f_28);
func_146(Local_138.f_2725, fVar3, 1, 99);
}


void func_146(int iParam0, float fParam1, bool bParam2, int iParam3){
func_147(iParam0, func_91(0.503f, fParam1), Local_138.f_1765, 0, bParam2, 0, iParam3);
}


void func_147(int iParam0, struct<2> Param1, struct<4> Param2, bool bParam3, bool bParam4, bool bParam5, int iParam6){
struct<4> Var0[10];
bool bVar1;
int iVar2;
var uVar3;
struct<2> Var4;
struct<2> Var5;
bool bVar6;
float fVar7;
iVar2=iParam0;
Var4={
func_91(func_148(bParam5, 0.005208333f, 0.01041667f), func_148(bParam5, 0.01481481f, 0.02962963f)) 
};
Var5={
func_91(func_148(bParam5, 0.004166667f, 0.008333333f), func_148(bParam5, 0.01481481f, 0.02962963f)) 
};
bVar6=iParam6==99;
if(bVar6){
iParam6=10;
}
bVar1=false;
while (bVar1 <=9){
StringCopy(&(Var0[bVar1 /*4*/]), "number_", 16);
StringIntConCat(&(Var0[bVar1 /*4*/]), (iVar2 % 10), 16);
iVar2=(iVar2 / 10);
if(iVar2 > 0 && (bVar1 + 1 % 3)==0){
MISC::SET_BIT(&uVar3, bVar1);
}
if(bVar6 && iVar2==0){
iParam6=bVar1 + 1;
}else{
bVar1++;
}}
fVar7=Param1.f_0;
if(bParam3){
fVar7=(fVar7 - (Var4.f_0 / 2f));
bVar1=false;
while (bVar1 <=(iParam6 - 1)){
func_86("MPInvPersHud", &(Var0[bVar1 /*4*/]), fVar7, Param1.f_1, Var4.f_0, Var4.f_1, 0f, Param2);
if(MISC::IS_BIT_SET(uVar3, bVar1)){
fVar7=(fVar7 - Var5.f_0);
func_86("MPInvPersHud", "comma", fVar7, Param1.f_1, Var5.f_0, Var5.f_1, 0f, Param2);
}
fVar7=(fVar7 - Var4.f_0);
bVar1++;
}
if(bParam4){
func_86("MPInvPersHud", "dollar", fVar7, Param1.f_1, Var4.f_0, Var4.f_1, 0f, Param2);
}}else{
fVar7=(fVar7 + (Var4.f_0 / 2f));
if(bParam4){
func_86("MPInvPersHud", "dollar", fVar7, Param1.f_1, Var4.f_0, Var4.f_1, 0f, Param2);
fVar7=(fVar7 + Var4.f_0);
}
bVar1=(iParam6 - 1);
while (bVar1 >=0){
if(MISC::IS_BIT_SET(uVar3, bVar1)){
func_86("MPInvPersHud", "comma", fVar7, Param1.f_1, Var5.f_0, Var5.f_1, 0f, Param2);
fVar7=(fVar7 + Var5.f_0);
}
func_86("MPInvPersHud", &(Var0[bVar1 /*4*/]), fVar7, Param1.f_1, Var4.f_0, Var4.f_1, 0f, Param2);
fVar7=(fVar7 + Var4.f_0);
bVar1=(bVar1 + -1);
}}}


float func_148(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}


struct<2> func_149(struct<2> Param0, struct<2> Param1){
struct<2> Var0;
Var0.f_0=(Param0.f_0 + Param1.f_0);
Var0.f_1=(Param0.f_1 + Param1.f_1);
return Var0;
}


void func_150(){
func_156();
func_154();
func_153();
func_151();
}


void func_151(){
struct<2> Var0;
struct<2> Var1;
struct<8> Var2;
int iVar3;
float fVar4;
float fVar5;
float fVar6;
struct<4> Var7;
Var0={
func_91(0.228125f, 0.059259f) 
};
Var1={
func_91(0.7026035f, 0.139444f) 
};
StringCopy(&Var2, "distance", 64);
if(Local_138.f_0==-1f){
StringConCat(&Var2, "_inf", 64);
}
func_86("MPInvPersHud", &Var2, Var1.f_0, Var1.f_1, Var0.f_0, Var0.f_1, 0f, Local_138.f_1765);
iVar3=floor((Local_138.f_2872 / 0.164583f));
if(Local_138.f_2871==4){
func_147(iVar3 * 1000, func_91((Var1.f_0 + 0.026f), (Var1.f_1 + 0.0085f)), Local_138.f_1765.f_32, 1, 0, 1, 99);
func_147(Local_138.f_2905 * 1000, func_91((Var1.f_0 + 0.098f), (Var1.f_1 + 0.0085f)), Local_138.f_1765.f_32, 1, 0, 1, 99);
}else{
func_147(iVar3 * 1000, func_91((Var1.f_0 + 0.098f), (Var1.f_1 + 0.0085f)), Local_138.f_1765.f_32, 1, 0, 1, 99);
}
if(Local_138.f_0 !=-1f){
fVar4=((Local_138.f_2872 / 0.164583f) / Local_138.f_0);
if(fVar4 > 1f){
fVar4=1f;
}
fVar5=func_152(((Var1.f_0 + -0.01945f) - (0.117708f / 2f)), (Var1.f_0 + -0.01945f), fVar4);
fVar6=func_152(0f, 0.117708f, fVar4);
func_86("MPInvPersHud", "distancearrow", (fVar5 + (fVar6 / 2f)), Var1.f_1, 0.00625f, 0.007407f, 0f, Local_138.f_1765);
Var7.f_3=255;
func_113(&Var7, 154, 255, 0, 125);
func_94(func_91(fVar5, (Var1.f_1 + 0.0095f)), func_91(fVar6, 0.011111f), Var7);
}}


float func_152(float fParam0, float fParam1, float fParam2){
return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}


void func_153(){
struct<2> Var0;
struct<2> Var1;
Var0={
func_91(0.161458f, 0.059259f) 
};
Var1={
func_91(0.498437f, 0.139444f) 
};
func_86("MPInvPersHud", "score", Var1.f_0, Var1.f_1, Var0.f_0, Var0.f_1, 0f, Local_138.f_1765);
func_147(Local_138.f_2725, func_91(0.571f, (Var1.f_1 + 0f)), Local_138.f_1765.f_32, 1, 0, 0, 99);
}


void func_154(){
struct<2> Var0;
struct<2> Var1;
int iVar2;
struct<4> Var3;
float fVar4;
Var0={
func_91(0.15f, 0.059259f) 
};
Var1={
func_91(0.333854f, 0.139444f) 
};
func_86("MPInvPersHud", "health", Var1.f_0, Var1.f_1, Var0.f_0, Var0.f_1, 0f, Local_138.f_1765);
if(Local_138.f_2368.f_332 < Local_138.f_2368.f_331){
Local_138.f_2368.f_332=func_155((Local_138.f_2368.f_332 + Local_138.f_2877), 0, Local_138.f_2368.f_331);
}elseif(Local_138.f_2368.f_332 > Local_138.f_2368.f_331){
Local_138.f_2368.f_332=func_155((Local_138.f_2368.f_332 - Local_138.f_2877), Local_138.f_2368.f_331, 20);
}
if(!MISC::IS_BIT_SET(Local_138.f_2368.f_333, 0)){
Var3.f_3=255;
if(Local_138.f_2368.f_332 > 1){
func_113(&Var3, 154, 255, 0, 255);
}else{
func_113(&Var3, 246, 8, 21, 255);
}
Var1.f_0=0.295312f;
Var0={
func_91(0.00625f, 0.02963f) 
};
iVar2=0;
while (iVar2 <=(Local_138.f_2368.f_332 - 1)){
fVar4=((Var1.f_0 + (IntToFloat(iVar2) * 0.005208f)) + (Var0.f_0 / 2f));
func_86("MPInvPersHud", "healthsegment", fVar4, Var1.f_1, Var0.f_0, Var0.f_1, 0f, Var3);
iVar2++;
}}else{
func_86("MPInvPersHud", "shield_ui", 0.346875f, Var1.f_1, 0.1125f, 0.044444f, 0f, Local_138.f_1765);
}}

int func_155(int iParam0, int iParam1, int iParam2){
if(iParam0 > iParam2){
return iParam2;
}elseif(iParam0 < iParam1){
return iParam1;
}
return iParam0;
}


void func_156(){
struct<2> Var0;
struct<2> Var1;
int iVar2;
Var0={
func_91(0.066667f, 0.059259f) 
};
Var1={
func_91(0.2166665f, 0.139444f) 
};
func_86("MPInvPersHud", "lives", Var1.f_0, Var1.f_1, Var0.f_0, Var0.f_1, 0f, Local_138.f_1765);
iVar2=Local_138.f_2368.f_330;
if(Local_138.f_2368.f_330 < 0){
iVar2=0;
}
func_147(iVar2, func_91((Var1.f_0 + 0.003f), (Var1.f_1 + 0f)), Local_138.f_1765.f_32, 0, 0, 0, 2);
}


void func_157(){
int iVar0;
float fVar1;
float fVar2;
iVar0=0;
while (iVar0 <=13){
if(NETWORK::GET_NETWORK_TIME() > Local_138.f_2812[iVar0 /*4*/] + 1000){
}else{
fVar1=(to_float((NETWORK::GET_NETWORK_TIME() - Local_138.f_2812[iVar0 /*4*/])) / 1000f);
fVar2=Local_138.f_2812[iVar0 /*4*/].f_2;
if(fVar2 < (0.15625f * 1.1f)){
}else{
func_158("IAP_SCORE", fVar2, func_160((Local_138.f_2812[iVar0 /*4*/].f_2.f_1 + 0f), (Local_138.f_2812[iVar0 /*4*/].f_2.f_1 + -0.05f), fVar1, 4), Local_138.f_2812[iVar0 /*4*/].f_1);
}}
iVar0++;
}}


void func_158(char* sParam0, float fParam1, float fParam2, int iParam3){
int iVar0;
iVar0=func_159();
HUD::SET_TEXT_SCALE(0.5f, 0.5f);
HUD::SET_TEXT_COLOUR(255, 255, 255, iVar0);
HUD::SET_TEXT_CENTRE(1);
HUD::SET_TEXT_FONT(7);
if(iVar0 > 200){
HUD::SET_TEXT_DROP_SHADOW();
}
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
if(iParam3 !=2147483647){
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam1, fParam2, 0);
}

int func_159(){
return round((MISC::ABSF(MISC::TAN(to_float(MISC::GET_GAME_TIMER()))) * 255f));
}


float func_160(float fParam0, float fParam1, float fParam2, int iParam3){
float fVar0;
switch (iParam3){
case 1:
case 6:
fParam2=pow(fParam2, 2f);
break;
case 2:
case 7:
fParam2=(1f - pow((1f - fParam2), 2f));
break;
case 3:
case 8:
fParam2=((-cos(func_161((3.141593f * fParam2))) / 2f) + 0.5f);
break;
case 4:
case 9:
fParam2=(pow(fParam2, 2f) * (3f - (2f * fParam2)));
break;
}
switch (iParam3){
case 0:
fVar0=(fParam0 + (fParam2 * (fParam1 - fParam0)));
break;
case 1:
case 2:
case 3:
case 4:
fVar0=func_160(fParam0, fParam1, fParam2, 0);
break;
case 5:
fVar0=(((1f - fParam2) * fParam0) + (fParam2 * fParam1));
break;
case 6:
case 7:
case 8:
case 9:
fVar0=func_160(fParam0, fParam1, fParam2, 5);
break;
}
return fVar0;
}


float func_161(float fParam0){
return (fParam0 * 57.29578f);
}


void func_162(){
float fVar0;
struct<4> Var1;
if(!func_173()){
return;
}
Var1.f_3=255;
if(!func_120(&(Local_138.f_2892), 650, 0)){
fVar0=(to_float(func_172(&(Local_138.f_2892), 0, 0)) / 650f);
Var1={
func_171(Local_138.f_1765.f_12, Local_138.f_1765, fVar0) 
};
Var1.f_3=round(func_160(0f, 255f, fVar0, 1));
func_170(&Var1);
func_163(fVar0);
}else{
fVar0=(to_float((func_172(&(Local_138.f_2892), 0, 0) - 650)) / 4000f);
Var1={
func_171(Local_138.f_1765, Local_138.f_1765.f_12, fVar0) 
};
Var1.f_3=round(func_160(255f, 0f, fVar0, 2));
func_170(&Var1);
func_163(1f);
}}


void func_163(float fParam0){
struct<2> Var0;
struct<8> Var1;
struct<2> Var2[10];
struct<2> Var3;
int iVar4;
struct<2> Var5;
if(fParam0 < 0.8f){
Local_138.f_2894=0;
}elseif(Local_138.f_2894 >=func_169(0)){
return;
}
Var0={
func_167(func_168(0), 2f) 
};
Var0.f_0=func_160(0f, Var0.f_0, fParam0, 1);
Var0.f_1=func_160(0f, Var0.f_1, fParam0, 1);
StringCopy(&Var1, func_166(0), 64);
StringIntConCat(&Var1, Local_138.f_2894 + 1, 64);
Var2[0 /*2*/]={
func_91((0.5f + (0f * (1f / 1920f))), (0.5f + (-460f * (1f / 1080f)))) 
};
Var2[1 /*2*/]={
func_91((0.5f + (120f * (1f / 1920f))), (0.5f + (-120f * (1f / 1080f)))) 
};
Var2[2 /*2*/]={
func_91((0.5f + (480f * (1f / 1920f))), (0.5f + (-110f * (1f / 1080f)))) 
};
Var2[3 /*2*/]={
func_91((0.5f + (195f * (1f / 1920f))), (0.5f + (90f * (1f / 1080f)))) 
};
Var2[4 /*2*/]={
func_91((0.5f + (300f * (1f / 1920f))), (0.5f + (460f * (1f / 1080f)))) 
};
Var2[5 /*2*/]={
func_91((0.5f + (0f * (1f / 1920f))), (0.5f + (255f * (1f / 1080f)))) 
};
Var2[6 /*2*/]={
func_91((0.5f + (-300f * (1f / 1920f))), (0.5f + (460f * (1f / 1080f)))) 
};
Var2[7 /*2*/]={
func_91((0.5f + (-195f * (1f / 1920f))), (0.5f + (90f * (1f / 1080f)))) 
};
Var2[8 /*2*/]={
func_91((0.5f + (-480f * (1f / 1920f))), (0.5f + (-110f * (1f / 1080f)))) 
};
Var2[9 /*2*/]={
func_91((0.5f + (-120f * (1f / 1920f))), (0.5f + (-120f * (1f / 1080f)))) 
};
Var3={
func_91(0.5f, 0.5f) 
};
iVar4=0;
while (iVar4 <=(Var2.f_0 - 1)){
Var5={
func_165(Var3, Var2[iVar4 /*2*/], fParam0) 
};
Var5.f_0=func_160(Var3.f_0, Var2[iVar4 /*2*/], func_164(fParam0, 0f, 0.75f), 2);
Var5.f_1=func_160(Var3.f_1, Var2[iVar4 /*2*/].f_1, func_164(fParam0, 0f, 0.75f), 2);
func_86("MPInvPersCommon", &Var1, Var5.f_0, Var5.f_1, Var0.f_0, Var0.f_1, 0f, Local_138.f_1765);
iVar4++;
}
if(fParam0 >=0.8f){
Local_138.f_2894=(Local_138.f_2894 + Local_138.f_2875);
}}


float func_164(float fParam0, float fParam1, float fParam2){
if(fParam0 > fParam2){
return fParam2;
}elseif(fParam0 < fParam1){
return fParam1;
}
return fParam0;
}


struct<2> func_165(struct<2> Param0, struct<2> Param1, float fParam2){
return func_149(func_167(Param0, (1f - fParam2)), func_167(Param1, fParam2));
}


char* func_166(int iParam0){
switch (iParam0){
case 0:
return "explosion_med";
case 1:
return "tank_smoke";
default:
}
return "INVALID EXPLOSION";
}


struct<2> func_167(struct<2> Param0, float fParam1){
struct<2> Var0;
Var0.f_0=(Param0.f_0 * fParam1);
Var0.f_1=(Param0.f_1 * fParam1);
return Var0;
}


struct<2> func_168(int iParam0){
switch (iParam0){
case 0:
return func_91((0.066667f / 2f), (0.118519f / 2f));
case 1:
return func_91(0.020833f, 0.037037f);
default:
}
return func_91(-1f, -1f);
}

int func_169(int iParam0){
switch (iParam0){
case 0:
return 6;
case 1:
return 7;
default:
}
return 0;
}


void func_170(var uParam0){
GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, *uParam0, uParam0->f_1, uParam0->f_2, uParam0->f_3, 0);
}


struct<4> func_171(struct<4> Param0, struct<4> Param1, float fParam2){
Param0.f_0=round(((to_float((Param1.f_0 - Param0.f_0)) * fParam2) + IntToFloat(Param0.f_0)));
Param0.f_1=round(((to_float((Param1.f_1 - Param0.f_1)) * fParam2) + IntToFloat(Param0.f_1)));
Param0.f_2=round(((to_float((Param1.f_2 - Param0.f_2)) * fParam2) + IntToFloat(Param0.f_2)));
Param0.f_3=round(((to_float((Param1.f_3 - Param0.f_3)) * fParam2) + IntToFloat(Param0.f_3)));
return Param0;
}

int func_172(var uParam0, bool bParam1, bool bParam2){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
}else{
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
}}
return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

int func_173(){
if(func_123(&(Local_138.f_2892))){
if(!func_120(&(Local_138.f_2892), 4000, 0)){
return 1;
}
func_103(&(Local_138.f_2892));
}
return 0;
}


void func_174(){
int iVar0;
int iVar1;
if(!func_109()){
return;
}
iVar0=0;
while (iVar0 <=4){
iVar1=0;
while (iVar1 <=5){
func_86(Local_138.f_2895, "blizzard", ((Local_138.f_2896 + (IntToFloat(iVar0) * 0.25f)) + (0.25f / 2f)), ((Local_138.f_2896.f_1 - (IntToFloat(iVar1) * 0.325926f)) - (0.325926f / 2f)), 0.25f, 0.325926f, 0f, Local_138.f_1765);
iVar1++;
}
iVar0++;
}}


void func_175(){
int iVar0;
struct<8> Var1;
struct<2> Var2;
int iVar3;
iVar0=0;
while (iVar0 <=19){
if(Local_138.f_2730[iVar0 /*4*/].f_1 <=-1){
}else{
StringCopy(&Var1, func_166(Local_138.f_2730[iVar0 /*4*/]), 64);
Var2={
func_168(Local_138.f_2730[iVar0 /*4*/]) 
};
iVar3=func_169(Local_138.f_2730[iVar0 /*4*/]);
StringIntConCat(&Var1, Local_138.f_2730[iVar0 /*4*/].f_1 + 1, 64);
func_86("MPInvPersCommon", &Var1, Local_138.f_2730[iVar0 /*4*/].f_2, Local_138.f_2730[iVar0 /*4*/].f_2.f_1, Var2.f_0, Var2.f_1, 0f, Local_138.f_1765);
Local_138.f_2730[iVar0 /*4*/].f_1=(Local_138.f_2730[iVar0 /*4*/].f_1 + Local_138.f_2875);
if(Local_138.f_2730[iVar0 /*4*/].f_1 >=iVar3){
Local_138.f_2730[iVar0 /*4*/].f_1=-1;
}}
iVar0++;
}}


void func_176(){
struct<4> Var0;
struct<2> Var1;
struct<8> Var2;
if(Local_138.f_2368==3){
func_187();
return;
}
Var0={
Local_138.f_1765 
};
if(Local_138.f_2368.f_334 + 750 > NETWORK::GET_NETWORK_TIME()){
func_186(Local_138.f_1765.f_12);
Var0={
Local_138.f_1765.f_12 
};
}elseif(Local_138.f_2368.f_335 + 500 > NETWORK::GET_NETWORK_TIME()){
func_186(Local_138.f_1765.f_8);
Var0={
Local_138.f_1765.f_8 
};
}
if(func_185()){
Var0.f_3=func_159();
}
if(MISC::IS_BIT_SET(Local_138.f_2368.f_333, 0)){
func_184(Var0);
}
func_179(Var0);
Var1={
func_177() 
};
Var2={
Local_138.f_2368.f_303 
};
StringIntConCat(&Var2, Local_138.f_2368.f_319 + 1, 64);
func_86(func_16(), &Var2, Local_138.f_2368.f_321, Local_138.f_2368.f_321.f_1, Var1.f_0, Var1.f_1, 0f, Var0);
}


struct<2> func_177(){
if(func_178()){
return func_91(0.104167f, 0.144444f);
}
return func_91(0.104167f, 0.12963f);
}


bool func_178(){
return ((Local_138.f_2368==1 || Local_138.f_2368==2) || Local_138.f_2368==4);
}


void func_179(struct<4> Param0){
float fVar0;
struct<2> Var1;
struct<2> Var2;
struct<16> Var3;
fVar0=func_148(func_178(), -0.007407f, 0f);
Var1={
func_91((Local_138.f_2368.f_321 + 0.0075f), ((Local_138.f_2368.f_321.f_1 + -0.055f) + fVar0)) 
};
Var1.f_0=(((Var1.f_0 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
Var2={
func_183(Var1, func_149(Var1, func_91(0.061f, 0f)), (IntToFloat(Local_138.f_2368.f_325) * -15f)) 
};
Var3={
func_182() 
};
func_180(func_16(), &Var3, Var2.f_0, Var2.f_1, 0.104167f, 0.059259f, (IntToFloat(Local_138.f_2368.f_325) * -15f), Param0);
}


void func_180(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, struct<4> Param7){
GRAPHICS::DRAW_SPRITE_ARX(sParam0, sParam1, func_181(fParam2), fParam3, (fParam4 * fLocal_134), fParam5, fParam6, Param7.f_0, Param7.f_1, Param7.f_2, Param7.f_3, 0, 1);
}


float func_181(float fParam0){
fParam0=(0.5f - ((0.5f - fParam0) / fLocal_133));
return fParam0;
}
struct<16> func_182(){
struct<16> Var0;
switch (Local_138.f_2368.f_2){
case 0:
StringCopy(&Var0, "turret_fire", 64);
StringIntConCat(&Var0, Local_138.f_2368.f_320 + 1, 64);
break;
case 1:
StringCopy(&Var0, "turret_flame", 64);
if(Local_138.f_2368.f_1==1){
StringConCat(&Var0, "2", 64);
}else{
StringConCat(&Var0, "1", 64);
}
break;
case 2:
StringCopy(&Var0, "turret_rocket", 64);
StringIntConCat(&Var0, Local_138.f_2368.f_320 + 1, 64);
break;
case 3:
StringConCat(&Var0, "turret_beam", 64);
if(Local_138.f_2368.f_1==1){
StringConCat(&Var0, "_fire", 64);
StringIntConCat(&Var0, Local_138.f_2368.f_320 + 1, 64);
}
break;
}
return Var0;
}


struct<2> func_183(struct<2> Param0, struct<2> Param1, float fParam2){
struct<2> Var0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
fVar1=sin(fParam2);
fVar2=cos(fParam2);
Var0.f_0=(Param1.f_0 - Param0.f_0);
Var0.f_1=(Param1.f_1 - Param0.f_1);
fVar3=((Var0.f_0 * fVar2) - (Var0.f_1 * fVar1));
fVar4=((Var0.f_0 * fVar1) + (Var0.f_1 * fVar2));
Var0.f_0=(fVar3 + Param0.f_0);
Var0.f_1=(fVar4 + Param0.f_1);
return Var0;
}


void func_184(struct<4> Param0){
struct<8> Var0;
float fVar1;
StringCopy(&Var0, "tank_shield", 64);
StringIntConCat(&Var0, Local_138.f_2368.f_319 + 1, 64);
fVar1=func_148(func_178(), -0.03575f, -0.025222f);
func_86("MPInvPersCommon", &Var0, (Local_138.f_2368.f_321 + 0f), (Local_138.f_2368.f_321.f_1 + fVar1), 0.110417f, 0.125926f, 0f, Param0);
}


bool func_185(){
return ((Local_138.f_2368.f_334 + 750 > NETWORK::GET_NETWORK_TIME() || Local_138.f_2368.f_335 + 500 > NETWORK::GET_NETWORK_TIME()) || Local_138.f_2368.f_337 + 2000 > NETWORK::GET_NETWORK_TIME());
}


void func_186(struct<4> Param0){
Param0.f_3=round((MISC::ABSF(MISC::TAN(to_float(MISC::GET_GAME_TIMER()))) * 50f)) + 150;
func_86("MpInvPersHud", "border", (0.5f + 0.002604167f), 0.5f, 1f, 1f, 0f, Param0);
}


void func_187(){
struct<8> Var0;
if(Local_138.f_2368.f_319 >=16){
return;
}
func_186(Local_138.f_1765.f_12);
StringCopy(&Var0, "tank_death", 64);
StringIntConCat(&Var0, Local_138.f_2368.f_319 + 1, 64);
func_86(func_16(), &Var0, Local_138.f_2368.f_321, (Local_138.f_2368.f_321.f_1 + -0.035185f), 0.166667f, 0.2f, 0f, Local_138.f_1765);
}


void func_188(){
int iVar0;
struct<8> Var1;
struct<2> Var2;
float fVar3;
float fVar4;
iVar0=0;
while (iVar0 <=19){
if(Local_138.f_2368.f_3[iVar0 /*14*/].f_11==-2147483647){
}elseif(NETWORK::GET_NETWORK_TIME() > (Local_138.f_2368.f_3[iVar0 /*14*/].f_11 + Local_138.f_1734[Local_138.f_2368.f_3[iVar0 /*14*/] /*5*/].f_2)){
}elseif(Local_138.f_2368.f_3[iVar0 /*14*/]==5){
func_189(iVar0);
}else{
StringCopy(&Var1, Local_138.f_1734[Local_138.f_2368.f_3[iVar0 /*14*/] /*5*/], 64);
if(Local_138.f_1734[Local_138.f_2368.f_3[iVar0 /*14*/] /*5*/].f_1 > 0){
StringIntConCat(&Var1, Local_138.f_2368.f_3[iVar0 /*14*/].f_12 + 1, 64);
}
Var2={
Local_138.f_1734[Local_138.f_2368.f_3[iVar0 /*14*/] /*5*/].f_3 
};
fVar3=Local_138.f_2368.f_3[iVar0 /*14*/].f_9;
if(Local_138.f_2368.f_3[iVar0 /*14*/]==3){
fVar4=(to_float((NETWORK::GET_NETWORK_TIME() - Local_138.f_2368.f_3[iVar0 /*14*/].f_11)) / (IntToFloat(Local_138.f_1734[Local_138.f_2368.f_3[iVar0 /*14*/] /*5*/].f_2) * 0.75f));
if(fVar4 > 1f){
fVar4=1f;
}
Var2.f_0=func_160((Var2.f_0 / 2f), Var2.f_0, fVar4, 1);
Var2.f_1=func_160((Var2.f_1 / 2f), Var2.f_1, fVar4, 1);
}
func_86("MPInvPersCommon", &Var1, Local_138.f_2368.f_3[iVar0 /*14*/].f_5, Local_138.f_2368.f_3[iVar0 /*14*/].f_5.f_1, Var2.f_0, Var2.f_1, fVar3, Local_138.f_1765);
}
iVar0++;
}}


void func_189(int iParam0){
struct<2> Var0;
struct<2> Var1;
struct<2> Var2;
struct<2> Var3;
float fVar4;
float fVar5;
struct<2> Var6;
float fVar7;
float fVar8;
struct<4> Var9;
struct<8> Var10;
Var0={
Local_138.f_1734[Local_138.f_2368.f_3[iParam0 /*14*/] /*5*/].f_3 
};
Var1={
func_193(Local_138.f_2368.f_3[iParam0 /*14*/].f_1) 
};
Var2={
func_193(Local_138.f_2368.f_3[iParam0 /*14*/].f_3) 
};
Var3={
func_90(func_192(func_149(Var1, Var2), 2f)) 
};
if(!func_191(Local_138.f_2368.f_3[iParam0 /*14*/].f_9, -0.0001f, 0.0001f)){
fVar4=sin(Local_138.f_2368.f_3[iParam0 /*14*/].f_9);
fVar5=cos(Local_138.f_2368.f_3[iParam0 /*14*/].f_9);
Var6={
func_190(Var1, Var2, -fVar4, fVar5) 
};
}else{
Var6={
Var2 
};
}
Var6={
func_90(Var6) 
};
Var3.f_0=(((Var3.f_0 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
Var6.f_0=(((Var6.f_0 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
fVar7=(((Local_138.f_2368.f_3[iParam0 /*14*/].f_1 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
fVar8=MISC::ABSF((Var6.f_0 - fVar7));
Var9={
Local_138.f_1765.f_16 
};
Var9.f_3=round((MISC::ABSF(((to_float(MISC::GET_GAME_TIMER()) * 0.1f) % 1f)) * 100f)) + 155;
func_180("MPInvPersCommon", "Beam_Glow_Tapered", Var3.f_0, Var3.f_1, (Var0.f_1 / 2f), fVar8, (Local_138.f_2368.f_3[iParam0 /*14*/].f_9 + 90f), Var9);
Var9.f_3=round((MISC::ABSF(MISC::TAN((to_float((NETWORK::GET_NETWORK_TIME() + Local_138.f_2368.f_3[iParam0 /*14*/].f_11)) * 0.5f))) * 180f)) + 75;
func_180("MPInvPersCommon", "beam_middle", Var3.f_0, Var3.f_1, Var0.f_1, fVar8, (Local_138.f_2368.f_3[iParam0 /*14*/].f_9 + 90f), Var9);
Var9={
Local_138.f_1765 
};
func_113(&Var9, 255, 255, 255, 255);
Var9.f_3=round((MISC::ABSF(sin(to_float((NETWORK::GET_NETWORK_TIME() + Local_138.f_2368.f_3[iParam0 /*14*/].f_11)))) * 155f)) + 100;
func_180("MPInvPersCommon", "beam_top", Var3.f_0, Var3.f_1, Var0.f_1, fVar8, (Local_138.f_2368.f_3[iParam0 /*14*/].f_9 + 90f), Var9);
Var9={
Local_138.f_1765 
};
if((Local_138.f_2368.f_3[iParam0 /*14*/].f_3 > 0.15625f && Local_138.f_2368.f_3[iParam0 /*14*/].f_3 < (1f - 0.15625f)) && Local_138.f_2368.f_3[iParam0 /*14*/].f_3.f_1 > 0f){
StringCopy(&Var10, Local_138.f_1734[Local_138.f_2368.f_3[iParam0 /*14*/] /*5*/], 64);
if(Local_138.f_1734[Local_138.f_2368.f_3[iParam0 /*14*/] /*5*/].f_1 > 0){
StringIntConCat(&Var10, Local_138.f_2368.f_3[iParam0 /*14*/].f_12 + 1, 64);
}
func_86("MPInvPersCommon", &Var10, Local_138.f_2368.f_3[iParam0 /*14*/].f_3, Local_138.f_2368.f_3[iParam0 /*14*/].f_3.f_1, Var0.f_0, Var0.f_1, 0f, Var9);
}}


struct<2> func_190(struct<2> Param0, struct<2> Param1, float fParam2, float fParam3){
struct<2> Var0;
float fVar1;
float fVar2;
Var0.f_0=(Param1.f_0 - Param0.f_0);
Var0.f_1=(Param1.f_1 - Param0.f_1);
fVar1=((Var0.f_0 * fParam3) - (Var0.f_1 * fParam2));
fVar2=((Var0.f_0 * fParam2) + (Var0.f_1 * fParam3));
Var0.f_0=(fVar1 + Param0.f_0);
Var0.f_1=(fVar2 + Param0.f_1);
return Var0;
}


bool func_191(float fParam0, float fParam1, float fParam2){
return (fParam0 >=fParam1 && fParam0 < fParam2);
}


struct<2> func_192(struct<2> Param0, float fParam1){
struct<2> Var0;
Var0.f_0=(Param0.f_0 / fParam1);
Var0.f_1=(Param0.f_1 / fParam1);
return Var0;
}


struct<2> func_193(struct<2> Param0){
return func_91((Param0.f_0 * 1920f), (Param0.f_1 * 1080f));
}


void func_194(){
float fVar0;
int iVar1;
char* sVar2;
struct<2> Var3;
struct<4> Var4;
struct<8> Var5;
float fVar6;
struct<2> Var7;
struct<2> Var8;
fVar0=sin((to_float(MISC::GET_GAME_TIMER()) * 0.5f));
iVar1=0;
while (iVar1 <=13){
if(Local_138.f_1801[iVar1 /*14*/]==-1){
}elseif(Local_138.f_753[Local_138.f_1801[iVar1 /*14*/] /*28*/]==4){
}elseif(Local_138.f_753[Local_138.f_1801[iVar1 /*14*/] /*28*/]==3){
if(Local_138.f_1801[iVar1 /*14*/].f_11 & 1==0){
}elseif(Local_138.f_1801[iVar1 /*14*/].f_1 >=func_206(iVar1)){
}elseif(!func_204(iVar1)){
}else{
sVar2=func_203(iVar1);
Var3={
func_201(iVar1) 
};
Var4={
func_199(iVar1) 
};
StringCopy(&Var5, func_198(iVar1), 64);
if(Local_138.f_753[Local_138.f_1801[iVar1 /*14*/] /*28*/]==6){
func_197(iVar1);
}elseif(func_206(iVar1) > 0){
StringIntConCat(&Var5, Local_138.f_1801[iVar1 /*14*/].f_1 + 1, 64);
}
fVar6=0f;
Var7={
Local_138.f_1801[iVar1 /*14*/].f_3 
};
if(Local_138.f_753[Local_138.f_1801[iVar1 /*14*/] /*28*/]==5 && Local_138.f_1801[iVar1 /*14*/].f_10==2){
fVar6=(fVar0 * 20f);
Var8={
Var7 
};
Var8.f_1=(Var8.f_1 - ((Var3.f_1 / 2f) + (0.037037f / 2f)));
Var8={
func_193(Var8) 
};
Var8={
func_183(func_193(Var7), Var8, fVar6) 
};
Var8={
func_90(Var8) 
};
func_86(sVar2, "parachute", Var8.f_0, Var8.f_1, 0.020833f, 0.037037f, fVar6, Var4);
}
if(Local_138.f_753[Local_138.f_1801[iVar1 /*14*/] /*28*/]==3 && Local_138.f_1801[iVar1 /*14*/].f_11 & 1 !=0){
Var7={
func_149(Var7, func_195()) 
};
}
func_86(sVar2, &Var5, Var7.f_0, Var7.f_1, Var3.f_0, Var3.f_1, fVar6, Var4);
}
iVar1++;
}


struct<2> func_195(){
switch (func_196()){
case 8:
return func_91(0f, 0f);
case 9:
return func_91(0f, 0f);
case 10:
return func_91(-0.011979f, 0f);
case 11:
return func_91(0f, 0f);
case 12:
return func_91(0f, 0f);
default:
}
return func_91(0f, 0f);
}

int func_196(){
return (8 + Local_138.f_2871);
}


void func_197(int iParam0){
struct<8> Var0;
struct<2> Var1;
if(Local_138.f_1801[iParam0 /*14*/].f_8==-2147483647){
return;
}
StringCopy(&Var0, "capture_flag", 64);
if(func_206(iParam0) > 0){
StringIntConCat(&Var0, Local_138.f_1801[iParam0 /*14*/].f_1 + 1, 64);
}
Var1={
func_201(iParam0) 
};
func_86("MpInvPersCommon", &Var0, (Local_138.f_1801[iParam0 /*14*/].f_3 + (0.045833f / 2f)), ((Local_138.f_1801[iParam0 /*14*/].f_3.f_1 - (Var1.f_1 / 2f)) - Local_138.f_1801[iParam0 /*14*/].f_5.f_1), 0.045833f, 0.088889f, 0f, Local_138.f_1765);
}


char* func_198(int iParam0){
if(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]==3 && Local_138.f_1801[iParam0 /*14*/].f_11 & 1 !=0){
return "pit_collapse";
}
if(Local_138.f_1801[iParam0 /*14*/].f_7==0){
if(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]==5){
return "crate_open";
}
return "explosion_med";
}
switch (Local_138.f_1801[iParam0 /*14*/].f_10){
case 1:
return Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_26;
case 0:
case 2:
return Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_24;
default:
}
return "INVALID STATE";
}


struct<4> func_199(int iParam0){
struct<4> Var0;
if(Local_138.f_1801[iParam0 /*14*/].f_7==0){
if(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]==5){
return func_200(Local_138.f_1801[iParam0 /*14*/]);
}
return Local_138.f_1765;
}
if(Local_138.f_1801[iParam0 /*14*/].f_8 + 500 > NETWORK::GET_NETWORK_TIME()){
Var0.f_3=255;
if(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]==6){
func_113(&Var0, 0, func_159(), 0, 255);
}else{
func_113(&Var0, 255, 0, 0, func_159());
}
return Var0;
}
return Local_138.f_1765;
}


struct<4> func_200(int iParam0){
struct<4> Var0;
Var0.f_3=255;
switch (iParam0){
case 18:
func_113(&Var0, 255, 139, 63, 255);
break;
case 19:
func_113(&Var0, 139, 0, 255, 255);
break;
case 20:
case 21:
case 22:
func_113(&Var0, 154, 255, 0, 255);
break;
case 25:
func_113(&Var0, 24, 203, 247, 255);
break;
case 24:
func_113(&Var0, 205, 0, 0, 255);
break;
case 28:
func_113(&Var0, 244, 11, 225, 255);
break;
case 23:
func_113(&Var0, 94, 250, 255, 255);
break;
case 26:
func_113(&Var0, 205, 0, 0, 255);
break;
case 27:
func_113(&Var0, 107, 150, 255, 255);
break;
}
return Var0;
}


struct<2> func_201(int iParam0){
if(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]==3 && Local_138.f_1801[iParam0 /*14*/].f_11 & 1 !=0){
return func_202();
}
if(Local_138.f_1801[iParam0 /*14*/].f_7==0){
if(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]==5){
return func_91(0.085417f, 0.092593f);
}
return func_91(0.066667f, 0.118519f);
}
return func_91(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_22, Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_22.f_1);
}


struct<2> func_202(){
switch (func_196()){
case 8:
return func_91(0f, 0f);
case 9:
return func_91(0f, 0f);
case 10:
return func_91(0.177083f, 0.211111f);
case 11:
return func_91(0f, 0f);
case 12:
return func_91(0f, 0f);
default:
}
return func_91(0f, 0f);
}


var func__203(int iParam0){
if(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]==3 && Local_138.f_1801[iParam0 /*14*/].f_11 & 1 !=0){
return Local_138.f_2895;
}
if(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]==5 || Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]==6){
return "MpInvPersCommon";
}
if(Local_138.f_1801[iParam0 /*14*/].f_7==0){
return "MPInvPersCommon";
}
return Local_138.f_2895;
}

int func_204(int iParam0){
if(Local_138.f_1801[iParam0 /*14*/].f_7==0 && Local_138.f_1801[iParam0 /*14*/].f_1 > func_206(iParam0)){
return 0;
}
if(func_205(Local_138.f_1801[iParam0 /*14*/].f_3, func_201(iParam0))){
return 0;
}
return 1;
}

int func_205(struct<2> Param0, struct<2> Param1){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
fVar0=(Param0.f_0 - (Param1.f_0 / 2f));
if(fVar0 > (1f - 0.15625f)){
return 1;
}
fVar1=(Param0.f_0 + (Param1.f_0 / 2f));
if(fVar1 < 0.15625f){
return 1;
}
fVar2=(Param0.f_1 - (Param1.f_1 / 2f));
if(fVar2 > (1f - 0.06944444f)){
return 1;
}
fVar3=(Param0.f_1 + (Param1.f_1 / 2f));
if(fVar3 < (0f + 0.06944444f)){
return 1;
}
return 0;
}

int func_206(int iParam0){
if(Local_138.f_1801[iParam0 /*14*/].f_7==0){
if(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]==5){
return 3;
}
return 6;
}
if(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]==3 && Local_138.f_1801[iParam0 /*14*/].f_11 & 1 !=0){
return 4;
}
switch (Local_138.f_1801[iParam0 /*14*/].f_10){
case 1:
return Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_27;
case 0:
case 2:
return Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_25;
default:
}
return 0;
}


void func_207(){
int iVar0;
float fVar1;
struct<2> Var2;
struct<2> Var3;
func_170(&(Local_138.f_749));
iVar0=0;
while (iVar0 <=(Local_138.f_725 - 1)){
fVar1=(Local_138.f_726 * IntToFloat(iVar0));
func_86(Local_138.f_2895, Local_138.f_724, (Local_138.f_2340 + fVar1), (Local_138.f_728 + 0f), Local_138.f_726, Local_138.f_726.f_1, 0f, Local_138.f_1765);
iVar0++;
}
iVar0=0;
while (iVar0 <=(Local_138.f_730 - 1)){
fVar1=(Local_138.f_731 * IntToFloat(iVar0));
func_86(Local_138.f_2895, Local_138.f_729, (Local_138.f_2340.f_1 + fVar1), (Local_138.f_733 + 0f), Local_138.f_731, Local_138.f_731.f_1, 0f, Local_138.f_1765);
iVar0++;
}
iVar0=0;
while (iVar0 <=(Local_138.f_735 - 1)){
fVar1=(Local_138.f_736 * IntToFloat(iVar0));
func_86(Local_138.f_2895, Local_138.f_734, (Local_138.f_2340.f_2 + fVar1), (Local_138.f_738 + 0f), Local_138.f_736, Local_138.f_736.f_1, 0f, Local_138.f_1765);
iVar0++;
}
iVar0=0;
while (iVar0 <=(Local_138.f_740 - 1)){
fVar1=(Local_138.f_741 * IntToFloat(iVar0));
func_86(Local_138.f_2895, Local_138.f_739, (Local_138.f_2340.f_3 + fVar1), (Local_138.f_743 + 0f), Local_138.f_741, Local_138.f_741.f_1, 0f, Local_138.f_1765);
iVar0++;
}
iVar0=0;
while (iVar0 <=(Local_138.f_745 - 1)){
if(Local_138.f_2340.f_12[iVar0]==1){
Var2={
Local_138.f_753[func_196() /*28*/].f_22 
};
if(func_205(func_91(Local_138.f_2340.f_4[iVar0], Local_138.f_748), Var2)){
}else{
func_86(Local_138.f_2895, Local_138.f_753[func_196() /*28*/].f_24, Local_138.f_2340.f_4[iVar0], Local_138.f_753[func_196() /*28*/].f_2, Var2.f_0, Var2.f_1, 0f, Local_138.f_1765);
Jump @720;
//curOff=499if(Local_138.f_2340.f_12[iVar0]==2){
Var3={
Local_138.f_753[func_208() /*28*/].f_22 
};
if(func_205(func_91(Local_138.f_2340.f_4[iVar0], Local_138.f_748), Var3)){
}else{
func_86(Local_138.f_2895, Local_138.f_753[func_208() /*28*/].f_24, Local_138.f_2340.f_4[iVar0], Local_138.f_753[func_208() /*28*/].f_2, Var3.f_0, Var3.f_1, 0f, Local_138.f_1765);
Jump @720;
//curOff=630if(func_205(func_91(Local_138.f_2340.f_4[iVar0], Local_138.f_748), Local_138.f_746)){
}
else{
func_86(Local_138.f_2895, Local_138.f_744, Local_138.f_2340.f_4[iVar0], Local_138.f_748, Local_138.f_746, Local_138.f_746.f_1, 0f, Local_138.f_1765);
}}
iVar0++;
}

int func_208(){
return (13 + Local_138.f_2871);
}


void func_209(){
char cVar0[16];
if(Local_138.f_2901==-2147483647){
return;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(Local_138.f_2903)){
return;
}
if(NETWORK::GET_NETWORK_TIME() > Local_138.f_2901){
func_9();
return;
}
MISC::SET_BIT(&(Local_138.f_2368.f_333), 2);
StringCopy(&cVar0, Local_138.f_2903, 16);
if(Local_138.f_2902==-1){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
StringConCat(&cVar0, "_PC", 16);
}}else{
if(func_67(&cVar0)){
return;
}
func_210(&cVar0, Local_138.f_2902);
return;
}
if(func_67(&cVar0)){
return;
}
func_65(&cVar0);
}


void func_210(char[4] cParam0, var uParam1){
Local_138.f_2947=MISC::GET_HASH_KEY(cParam0);
func_211(cParam0, uParam1, -1);
}


void func_211(var uParam0, int iParam1, int iParam2){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam2);
}


void func_212(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=func_47();
iVar1=(iVar0 - Local_138.f_2725);
if(iVar1==0){
return;
}
iVar2=round((MISC::GET_FRAME_TIME() * 1000f));
iVar3=(iVar2 * func_214(Local_138.f_2870==9, 12, 4));
if(Local_138.f_2870==9 && !MISC::IS_BIT_SET(Local_138.f_2368.f_333, 6)){
iVar3 *=5;
}
if(iVar3 > iVar1){
iVar3=iVar1;
}
Local_138.f_2725=(Local_138.f_2725 + iVar3);
func_213();
}


void func_213(){
if(MISC::IS_BIT_SET(Local_138.f_2904, 5)){
return;
}
if(Local_138.f_2725 < Global_262145.f_27449){
return;
}
func_131(252, 1, -1, 1);
func_130(27188, 1, -1);
MISC::SET_BIT(&(Local_138.f_2904), 5);
MISC::SET_BIT(&(Local_138.f_2904), 11);
func_129();
func_128("IAP_CH_4", Global_262145.f_27449, 7500);
}

int func_214(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}


void func_215(){
if(!func_109()){
return;
}
Local_138.f_2896=(Local_138.f_2896 + ((-0.25f / 4f) * timestep()));
Local_138.f_2896.f_1=(Local_138.f_2896.f_1 + ((0.325926f / 4f) * timestep()));
if(Local_138.f_2896 < (0.15625f - 0.25f) || Local_138.f_2896.f_1 > (1f + 0.325926f)){
Local_138.f_2896=(Local_138.f_2896 + 0.25f);
Local_138.f_2896.f_1=(Local_138.f_2896.f_1 - 0.325926f);
}}


void func_216(){
int iVar0;
iVar0=0;
while (iVar0 <=13){
if(NETWORK::GET_NETWORK_TIME() > Local_138.f_2812[iVar0 /*4*/] + 1000){
}elseif(Local_138.f_2870==7){
Local_138.f_2812[iVar0 /*4*/].f_2=func_138(Local_138.f_2812[iVar0 /*4*/].f_2, -0.15f);
}
iVar0++;
}}


void func_217(){
int iVar0;
iVar0=0;
while (iVar0 <=19){
if(Local_138.f_2730[iVar0 /*4*/].f_1 <=-1){
}else{
Local_138.f_2730[iVar0 /*4*/].f_2=func_138(Local_138.f_2730[iVar0 /*4*/].f_2, -0.15f);
}
iVar0++;
}}


void func_218(){
int iVar0;
int iVar1;
struct<2> Var2;
struct<2> Var3;
struct<4> Var4;
float fVar5;
struct<2> Var6;
float fVar7;
Var4.f_3=255;
func_113(&Var4, 255, 255, 255, 255);
iVar0=0;
while (iVar0 <=19){
if(Local_138.f_2368.f_3[iVar0 /*14*/]==5){
if(Local_138.f_1734[Local_138.f_2368.f_3[iVar0 /*14*/] /*5*/].f_1 > 0){
Local_138.f_2368.f_3[iVar0 /*14*/].f_12=(Local_138.f_2368.f_3[iVar0 /*14*/].f_12 + Local_138.f_2875);
if(Local_138.f_2368.f_3[iVar0 /*14*/].f_12 >=Local_138.f_1734[Local_138.f_2368.f_3[iVar0 /*14*/] /*5*/].f_1){
Local_138.f_2368.f_3[iVar0 /*14*/].f_12=0;
}}}elseif(Local_138.f_2368.f_3[iVar0 /*14*/].f_11==-2147483647){
}elseif(NETWORK::GET_NETWORK_TIME() > (Local_138.f_2368.f_3[iVar0 /*14*/].f_11 + Local_138.f_1734[Local_138.f_2368.f_3[iVar0 /*14*/] /*5*/].f_2)){
if(Local_138.f_2368.f_3[iVar0 /*14*/]==4){
Local_138.f_2368.f_3[iVar0 /*14*/].f_11=-2147483647;
if(!func_205(Local_138.f_2368.f_3[iVar0 /*14*/].f_5, func_91(0.0001f, 0.0001f))){
func_228(func_230(Local_138.f_2368.f_3[iVar0 /*14*/]), "dlc_vw_am_ip_tank_sounds", Local_138.f_2368.f_3[iVar0 /*14*/].f_5);
func_227(Local_138.f_2368.f_3[iVar0 /*14*/].f_5, 0);
}}}else{
fVar5=(to_float((NETWORK::GET_NETWORK_TIME() - Local_138.f_2368.f_3[iVar0 /*14*/].f_11)) / IntToFloat(Local_138.f_1734[Local_138.f_2368.f_3[iVar0 /*14*/] /*5*/].f_2));
Local_138.f_2368.f_3[iVar0 /*14*/].f_7={
Local_138.f_2368.f_3[iVar0 /*14*/].f_5 
};
if(Local_138.f_2368.f_3[iVar0 /*14*/]==4){
iVar1=0;
while (iVar1 <=13){
if(Local_138.f_1801[iVar1 /*14*/]==-1){
}elseif((((Local_138.f_753[Local_138.f_1801[iVar1 /*14*/] /*28*/]==5 || Local_138.f_753[Local_138.f_1801[iVar1 /*14*/] /*28*/]==3) || Local_138.f_753[Local_138.f_1801[iVar1 /*14*/] /*28*/]==4) || Local_138.f_753[Local_138.f_1801[iVar1 /*14*/] /*28*/]==6) || Local_138.f_753[Local_138.f_1801[iVar1 /*14*/] /*28*/]==8){
}elseif(Local_138.f_1801[iVar1 /*14*/].f_7==0){
}elseif(func_205(Local_138.f_1801[iVar1 /*14*/].f_3, Local_138.f_753[Local_138.f_1801[iVar1 /*14*/] /*28*/].f_22)){
}else{
Var6={
Local_138.f_1801[iVar1 /*14*/].f_3 
};
if(func_226(Var6, Local_138.f_2368.f_3[iVar0 /*14*/].f_5) < pow(0.35f, 2f)){
Local_138.f_2368.f_3[iVar0 /*14*/].f_3={
Var6 
};
}
else{
iVar1++;
}
Var3={
func_193(Local_138.f_2368.f_3[iVar0 /*14*/].f_3) 
};
Var2={
func_193(Local_138.f_2368.f_3[iVar0 /*14*/].f_5) 
};
Local_138.f_2368.f_3[iVar0 /*14*/].f_10=MISC::ATAN2((Var3.f_1 - Var2.f_1), (Var3.f_0 - Var2.f_0));
Local_138.f_2368.f_3[iVar0 /*14*/].f_10=(Local_138.f_2368.f_3[iVar0 /*14*/].f_10 + (sin(to_float((NETWORK::GET_NETWORK_TIME() - Local_138.f_2368.f_3[iVar0 /*14*/].f_11))) * 30f));
if(Local_138.f_2368.f_3[iVar0 /*14*/].f_9 > Local_138.f_2368.f_3[iVar0 /*14*/].f_10){
Local_138.f_2368.f_3[iVar0 /*14*/].f_9=func_164((Local_138.f_2368.f_3[iVar0 /*14*/].f_9 - (180f * timestep())), Local_138.f_2368.f_3[iVar0 /*14*/].f_10, Local_138.f_2368.f_3[iVar0 /*14*/].f_9);
}
elseif(Local_138.f_2368.f_3[iVar0 /*14*/].f_10 > Local_138.f_2368.f_3[iVar0 /*14*/].f_9){
Local_138.f_2368.f_3[iVar0 /*14*/].f_9=func_164((Local_138.f_2368.f_3[iVar0 /*14*/].f_9 + (180f * timestep())), Local_138.f_2368.f_3[iVar0 /*14*/].f_9, Local_138.f_2368.f_3[iVar0 /*14*/].f_10);
}
Var2={
func_90(func_183(Var2, func_149(Var2, func_91(1920f, 0f)), Local_138.f_2368.f_3[iVar0 /*14*/].f_9)) 
};
Local_138.f_2368.f_3[iVar0 /*14*/].f_5={
func_225(Local_138.f_2368.f_3[iVar0 /*14*/].f_5, Var2, 0.375f) 
};
Jump @1218;
//curOff=1164 Local_138.f_2368.f_3[iVar0 /*14*/].f_5={
func_165(Local_138.f_2368.f_3[iVar0 /*14*/].f_1, Local_138.f_2368.f_3[iVar0 /*14*/].f_3, fVar5) 
};
if(Local_138.f_2368.f_3[iVar0 /*14*/].f_3.f_1 >=Local_138.f_2368.f_3[iVar0 /*14*/].f_1.f_1){
fVar7=func_219(Local_138.f_2368.f_3[iVar0 /*14*/].f_5, 0);
if(Local_138.f_2368.f_3[iVar0 /*14*/].f_5.f_1 > fVar7){
Local_138.f_2368.f_3[iVar0 /*14*/].f_11=-2147483647;
if(!func_205(Local_138.f_2368.f_3[iVar0 /*14*/].f_5, func_91(0.0001f, 0.0001f))){
func_228(func_230(Local_138.f_2368.f_3[iVar0 /*14*/]), "dlc_vw_am_ip_tank_sounds", Local_138.f_2368.f_3[iVar0 /*14*/].f_5);
func_227(Local_138.f_2368.f_3[iVar0 /*14*/].f_5, 0);
}}
}
if(Local_138.f_1734[Local_138.f_2368.f_3[iVar0 /*14*/] /*5*/].f_1 > 0){
Local_138.f_2368.f_3[iVar0 /*14*/].f_12=(Local_138.f_2368.f_3[iVar0 /*14*/].f_12 + Local_138.f_2875);
if(Local_138.f_2368.f_3[iVar0 /*14*/].f_12 >=Local_138.f_1734[Local_138.f_2368.f_3[iVar0 /*14*/] /*5*/].f_1){
Local_138.f_2368.f_3[iVar0 /*14*/].f_12=0;
}
}
iVar0++;
}


float func_219(float fParam0, int iParam1){
float fVar0;
int iVar1;
fVar0=(Local_138.f_2340.f_4[0] - (func_223(0) / 2f));
iVar1=0;
while (iVar1 <=(Local_138.f_745 - 1)){
fVar0=(fVar0 + func_223(iVar1));
if(fParam0 < fVar0){
if(Local_138.f_2340.f_12[iVar1]==1 && (iParam1 || Local_138.f_1801[Local_138.f_2340.f_20[iVar1] /*14*/].f_11 & 1==0)){
if(fParam0 > ((fVar0 - func_222()) + func_221()) && fParam0 < (fVar0 - func_220())){
return 1.2f;
}}
if(Local_138.f_2340.f_12[iVar1]==2){
return (((1f - 0.06944444f) - Local_138.f_753[func_208() /*28*/].f_22.f_1) + 0.03240715f);
}
return Local_138.f_3;
}
iVar1++;
}
return Local_138.f_3;
}


float func_220(){
switch (func_196()){
case 8:
return 0.09635416f;
case 9:
return 0.0390625f;
case 10:
return 0.0765625f;
case 11:
return 0.05833333f;
case 12:
return 0.053125f;
default:
}
return 0f;
}


float func_221(){
switch (func_196()){
case 8:
return 0.109375f;
case 9:
return 0.03645833f;
case 10:
return 0.06822917f;
case 11:
return 0.03072917f;
case 12:
return 0.04322917f;
default:
}
return 0f;
}


float func_222(){
return Local_138.f_753[func_196() /*28*/].f_22;
}


float func_223(int iParam0){
if(Local_138.f_2340.f_12[iParam0]==1){
return func_222();
}
if(Local_138.f_2340.f_12[iParam0]==2){
return func_224();
}
return Local_138.f_746;
}


var func__224(){
return Local_138.f_753[func_208() /*28*/].f_22;
}


struct<2> func_225(struct<2> Param0, struct<2> Param1, float fParam2){
struct<2> Var0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
fVar1=(fParam2 * 1920f);
fVar1=(0f + (fVar1 * timestep()));
fVar2=(fParam2 * 1080f);
fVar2=(0f + (fVar2 * timestep()));
Param0={
func_193(Param0) 
};
Param1={
func_193(Param1) 
};
fVar3=sqrt((pow((Param1.f_0 - Param0.f_0), 2f) + pow((Param1.f_1 - Param0.f_1), 2f)));
fVar4=(Param1.f_0 - Param0.f_0);
fVar5=(Param1.f_1 - Param0.f_1);
if(fVar3 !=0f){
fVar4=(fVar4 / fVar3);
fVar5=(fVar5 / fVar3);
}
Var0.f_0=(Param0.f_0 + (fVar1 * fVar4));
Var0.f_1=(Param0.f_1 + (fVar2 * fVar5));
return func_90(Var0);
}


float func_226(struct<2> Param0, struct<2> Param1){
return (pow((Param1.f_0 - Param0.f_0), 2f) + pow((Param1.f_1 - Param0.f_1), 2f));
}


void func_227(struct<2> Param0, int iParam1){
Local_138.f_2730[Local_138.f_2811 /*4*/].f_1=0;
Local_138.f_2730[Local_138.f_2811 /*4*/].f_2={
Param0 
};
Local_138.f_2730[Local_138.f_2811 /*4*/]=iParam1;
Local_138.f_2811++;
if(Local_138.f_2811 >=20){
Local_138.f_2811=0;
}}


void func_228(char* sParam0, char* sParam1, struct<2> Param2){
float fVar0;
int iVar1;
fVar0=func_229(Param2);
if(fVar0 > 1f || fVar0 < 0f){}
iVar1=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(iVar1, sParam0, sParam1, 0);
AUDIO::SET_VARIABLE_ON_SOUND(iVar1, "Screen_Position", fVar0);
AUDIO::RELEASE_SOUND_ID(iVar1);
}


float func_229(float fParam0, var uParam1){
return func_164(((fParam0 - 0.15625f) / 0.658333f), 0f, 1f);
}


char* func_230(int iParam0){
switch (iParam0){
case 0:
return "Tank_Weapon_Main_Cannon_Hit";
case 3:
return "Tank_Weapon_Flamethrower_Fire_Hit";
case 4:
return "Tank_Weapon_Rocket_Hit";
default:
}
return "";
}


void func_231(){
int iVar0;
float fVar1;
float fVar2;
float fVar3;
struct<2> Var4;
float fVar5;
iVar0=NETWORK::GET_NETWORK_TIME();
Var4={
Local_138.f_2368.f_321 
};
fVar5=func_219((Local_138.f_2368.f_321 + 0.011458f), 0);
func_234();
switch (Local_138.f_2368){
case 0:
StringCopy(&(Local_138.f_2368.f_303), "tank_drive", 64);
Local_138.f_2368.f_319=(Local_138.f_2368.f_319 + Local_138.f_2875);
if(Local_138.f_2368.f_319 >=4){
Local_138.f_2368.f_319=0;
}
if(Local_138.f_2368.f_321.f_1 < (-0.061111f + fVar5) && (Local_138.f_2368.f_337==-2147483647 || (iVar0 - Local_138.f_2368.f_337) > round((500f * 1.5f)))){
func_106(2);
Local_138.f_2368.f_327=iVar0;
}elseif((Local_138.f_2368.f_321.f_1 - (-0.061111f / 2f)) > fVar5){
func_233("Tank_Collision", &(Local_138.f_2368.f_343));
Local_138.f_2368.f_330=(Local_138.f_2368.f_330 - 1);
Local_138.f_2368.f_331=0;
if(Local_138.f_2368.f_2 !=0){
func_107(0);
}
Local_138.f_2368.f_319=0;
func_106(3);
func_233("Tank_Destroyed", &(Local_138.f_2368.f_343));
if(Local_138.f_2368.f_330 >=0){
func_53("Frontend_Player_Death");
}
Local_138.f_2368.f_327=iVar0;
return;
}
break;
case 1:
StringCopy(&(Local_138.f_2368.f_303), "tank_jump", 64);
Local_138.f_2368.f_319=(Local_138.f_2368.f_319 + Local_138.f_2875);
if(Local_138.f_2368.f_319 >=4){
Local_138.f_2368.f_319=0;
}
fVar1=(to_float((iVar0 - Local_138.f_2368.f_327)) / 600f);
if(fVar1 >=1f){
fVar1=1f;
func_106(2);
Local_138.f_2368.f_327=iVar0;
}
Local_138.f_2368.f_321.f_1=func_160(Local_138.f_2368.f_328, Local_138.f_2368.f_329, fVar1, 2);
if((Local_138.f_2368.f_321.f_1 - (-0.061111f / 2f)) > fVar5){
func_233("Tank_Collision", &(Local_138.f_2368.f_343));
Local_138.f_2368.f_330=(Local_138.f_2368.f_330 - 1);
Local_138.f_2368.f_331=0;
if(Local_138.f_2368.f_2 !=0){
func_107(0);
}
Local_138.f_2368.f_319=0;
func_106(3);
func_233("Tank_Destroyed", &(Local_138.f_2368.f_343));
if(Local_138.f_2368.f_330 >=0){
func_53("Frontend_Player_Death");
}
Local_138.f_2368.f_327=iVar0;
return;
}
break;
case 2:
StringCopy(&(Local_138.f_2368.f_303), "tank_jump", 64);
Local_138.f_2368.f_319=(Local_138.f_2368.f_319 + Local_138.f_2875);
if(Local_138.f_2368.f_319 >=4){
Local_138.f_2368.f_319=0;
}
if((Local_138.f_2368.f_321.f_1 - (-0.061111f / 2f)) > fVar5){
func_233("Tank_Collision", &(Local_138.f_2368.f_343));
Local_138.f_2368.f_330=(Local_138.f_2368.f_330 - 1);
Local_138.f_2368.f_331=0;
if(Local_138.f_2368.f_2 !=0){
func_107(0);
}
Local_138.f_2368.f_319=0;
func_106(3);
func_233("Tank_Destroyed", &(Local_138.f_2368.f_343));
if(Local_138.f_2368.f_330 >=0){
func_53("Frontend_Player_Death");
}
Local_138.f_2368.f_327=iVar0;
return;
}
if(Local_138.f_2368.f_321.f_1 > Local_138.f_3){
Local_138.f_2368.f_321=func_138(Local_138.f_2368.f_321, -0.15f);
}
Local_138.f_2368.f_321.f_1=(Local_138.f_2368.f_321.f_1 + (func_160(0f, 0.5f, (to_float((iVar0 - Local_138.f_2368.f_327)) / 500f), 1) * timestep()));
if(Local_138.f_2368.f_321.f_1 > (-0.061111f + fVar5)){
Local_138.f_2368.f_321.f_1=(-0.061111f + fVar5);
if(Local_138.f_2368.f_321.f_1 > Local_138.f_3){
func_233("Tank_Collision", &(Local_138.f_2368.f_343));
Local_138.f_2368.f_330=(Local_138.f_2368.f_330 - 1);
Local_138.f_2368.f_331=0;
if(Local_138.f_2368.f_2 !=0){
func_107(0);
}
Local_138.f_2368.f_319=0;
func_106(3);
func_233("Tank_Destroyed", &(Local_138.f_2368.f_343));
if(Local_138.f_2368.f_330 >=0){
func_53("Frontend_Player_Death");
}
Local_138.f_2368.f_327=iVar0;
return;
}else{
func_106(0);
func_233("Tank_Jump_Land", &(Local_138.f_2368.f_343));
Local_138.f_2368.f_327=iVar0;
}}
break;
case 3:
Local_138.f_2368.f_319=(Local_138.f_2368.f_319 + Local_138.f_2875);
if(Local_138.f_2870==7){
Local_138.f_2368.f_321=func_138(Local_138.f_2368.f_321, -0.15f);
}
if(Local_138.f_2368.f_321.f_1 < (-0.061111f + fVar5)){
Local_138.f_2368.f_321.f_1=(Local_138.f_2368.f_321.f_1 + (func_160(0f, 0.5f, (to_float((iVar0 - Local_138.f_2368.f_327)) / 500f), 1) * timestep()));
if(Local_138.f_2368.f_321.f_1 >=(-0.061111f + fVar5)){
Local_138.f_2368.f_321.f_1=(-0.061111f + fVar5);
}}
if(Local_138.f_2368.f_319 > 16 && Local_138.f_2870==7){
func_232();
}
break;
case 4:
fVar1=(to_float((iVar0 - Local_138.f_2368.f_337)) / 500f);
fVar2=func_219(((Local_138.f_2368.f_321 + 0.011458f) + (((0.15f * Local_138.f_2873) / 1000f) * (500f * (1f - fVar1)))), 1);
if(Local_138.f_2368.f_321.f_1 < 0f){
if(fVar2 > Local_138.f_3){
Local_138.f_2368.f_337=iVar0;
Local_138.f_2368.f_321.f_1=-0.2f;
return;
}else{
fVar3=func_219(((Local_138.f_2368.f_321 + 0.104167f) + (((0.15f * Local_138.f_2873) / 1000f) * (500f * (1f - fVar1)))), 1);
if(!func_191((fVar3 - fVar2), -0.0001f, 0.0001f)){
Local_138.f_2368.f_337=iVar0;
Local_138.f_2368.f_321.f_1=-0.2f;
return;
}}}
StringCopy(&(Local_138.f_2368.f_303), "tank_jump", 64);
Local_138.f_2368.f_319=(Local_138.f_2368.f_319 + Local_138.f_2875);
if(Local_138.f_2368.f_319 >=4){
Local_138.f_2368.f_319=0;
}
if(fVar1 >=1f){
fVar1=1f;
Local_138.f_2368.f_319=0;
func_233("Tank_Jump_Land", &(Local_138.f_2368.f_343));
func_106(0);
Local_138.f_2368.f_321.f_1=(-0.061111f + fVar5);
}else{
Local_138.f_2368.f_321.f_1=func_160(-0.2f, (-0.061111f + fVar2), fVar1, 1);
}
break;
}
if(Local_138.f_2368.f_331==1){
if(iVar0 > Local_138.f_2368.f_336 + 150){
Var4.f_0=(Var4.f_0 + MISC::GET_RANDOM_FLOAT_IN_RANGE((-0.104167f / 2f), (0.104167f / 2f)));
Var4.f_1=(Var4.f_1 + MISC::GET_RANDOM_FLOAT_IN_RANGE((-0.12963f / 2f), (0.12963f / 2f)));
func_227(Var4, 1);
Local_138.f_2368.f_336=iVar0;
}}}


void func_232(){
if(Local_138.f_2368.f_330 < 0){
return;
}
Local_138.f_2368.f_321=0.3f;
Local_138.f_2368.f_321.f_1=-0.2f;
Local_138.f_2368.f_337=NETWORK::GET_NETWORK_TIME();
Local_138.f_2368.f_331=20;
Local_138.f_2368.f_332=0;
Local_138.f_2368.f_333=0;
Local_138.f_2368.f_325=0;
Local_138.f_2368.f_319=0;
func_106(4);
}


void func_233(char* sParam0, var uParam1){
float fVar0;
if(*uParam1==-1){
*uParam1=AUDIO::GET_SOUND_ID();
}
fVar0=func_229(Local_138.f_2368.f_321);
AUDIO::PLAY_SOUND_FRONTEND(*uParam1, sParam0, "dlc_vw_am_ip_tank_sounds", 0);
AUDIO::SET_VARIABLE_ON_SOUND(*uParam1, "Screen_Position", fVar0);
}


void func_234(){
var uVar0;
bool bVar1;
float fVar2;
var uVar3;
float fVar4;
if(Local_138.f_2368.f_339==-1){
Local_138.f_2368.f_339=AUDIO::GET_SOUND_ID();
}
uVar0=func_205(Local_138.f_2368.f_321, func_91(0.166667f, 0.2f));
bVar1=Local_138.f_2368==3;
if(!AUDIO::HAS_SOUND_FINISHED(Local_138.f_2368.f_339) && (uVar0 || bVar1)){
AUDIO::STOP_SOUND(Local_138.f_2368.f_339);
if(Local_138.f_2368.f_340 > -1 && !AUDIO::HAS_SOUND_FINISHED(Local_138.f_2368.f_340)){
AUDIO::STOP_SOUND(Local_138.f_2368.f_340);
}
return;
}
if(uVar0 || bVar1){
return;
}
if(AUDIO::HAS_SOUND_FINISHED(Local_138.f_2368.f_339)){
AUDIO::PLAY_SOUND_FRONTEND(Local_138.f_2368.f_339, "Tank_Engine_Loop", "dlc_vw_am_ip_tank_sounds", 0);
}
fVar2=func_229(Local_138.f_2368.f_321);
AUDIO::SET_VARIABLE_ON_SOUND(Local_138.f_2368.f_339, "Screen_Position", fVar2);
uVar3=func_148(func_178(), 1f, 0f);
AUDIO::SET_VARIABLE_ON_SOUND(Local_138.f_2368.f_339, "IsJumping", uVar3);
fVar4=(to_float(Local_138.f_2368.f_331) / to_float(20));
AUDIO::SET_VARIABLE_ON_SOUND(Local_138.f_2368.f_339, "DamageLevel", fVar4);
if(Local_138.f_2368.f_331==1){
if(Local_138.f_2368.f_340==-1){
Local_138.f_2368.f_340=AUDIO::GET_SOUND_ID();
}
if(AUDIO::HAS_SOUND_FINISHED(Local_138.f_2368.f_340)){
AUDIO::PLAY_SOUND_FRONTEND(Local_138.f_2368.f_340, "Tank_Critical_Damage_Loop", "dlc_vw_am_ip_tank_sounds", 0);
}
AUDIO::SET_VARIABLE_ON_SOUND(Local_138.f_2368.f_340, "Screen_Position", fVar2);
}elseif(Local_138.f_2368.f_340 > -1 && !AUDIO::HAS_SOUND_FINISHED(Local_138.f_2368.f_340)){
AUDIO::STOP_SOUND(Local_138.f_2368.f_340);
}}


void func_235(){
switch (Local_138.f_2368.f_1){
case 0:
if(Local_138.f_2368.f_320 !=0){
Local_138.f_2368.f_320=0;
}
break;
case 1:
Local_138.f_2368.f_320=(Local_138.f_2368.f_320 + Local_138.f_2875);
if(Local_138.f_2368.f_320 >=4){
Local_138.f_2368.f_320=0;
func_105(0);
}
break;
}}


void func_236(){
int iVar0;
func_263();
iVar0=0;
while (iVar0 <=13){
if(Local_138.f_1801[iVar0 /*14*/]==-1){
}else{
func_254(iVar0);
if(Local_138.f_1801[iVar0 /*14*/]==-1){
}elseif(func_173()){
func_248(iVar0);
}else{
func_237(iVar0);
}}
iVar0++;
}}


void func_237(int iParam0){
struct<2> Var0;
struct<2> Var1;
if(Local_138.f_2870 !=7){
return;
}
if(Local_138.f_1801[iParam0 /*14*/].f_7 <=0){
return;
}
if(func_205(Local_138.f_1801[iParam0 /*14*/].f_3, Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_22)){
return;
}
if(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_14==0){
return;
}
if(NETWORK::GET_NETWORK_TIME() < (Local_138.f_1801[iParam0 /*14*/].f_9 + func_247(iParam0))){
return;
}
func_246(iParam0, &Var0, &Var1);
if(func_205(Var0, func_91(0.0001f, 0.0001f))){
Local_138.f_1801[iParam0 /*14*/].f_9=NETWORK::GET_NETWORK_TIME();
return;
}
Local_138.f_1998[Local_138.f_2209 /*14*/]=func_245(iParam0);
Local_138.f_1998[Local_138.f_2209 /*14*/].f_1={
Var0 
};
Local_138.f_1998[Local_138.f_2209 /*14*/].f_3={
Var1 
};
Local_138.f_1998[Local_138.f_2209 /*14*/].f_5={
Var0 
};
Local_138.f_1998[Local_138.f_2209 /*14*/].f_7={
Var0 
};
Local_138.f_1998[Local_138.f_2209 /*14*/].f_9=func_244(iParam0);
Local_138.f_1998[Local_138.f_2209 /*14*/].f_11=NETWORK::GET_NETWORK_TIME();
Local_138.f_1998[Local_138.f_2209 /*14*/].f_13=func_243(iParam0);
Local_138.f_1998[Local_138.f_2209 /*14*/].f_12=func_242(iParam0);
Local_138.f_2209++;
if(Local_138.f_2209 >=15){
Local_138.f_2209=0;
}
if(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_27 > 0 && Local_138.f_2870==7){
Local_138.f_1801[iParam0 /*14*/].f_10=1;
Local_138.f_1801[iParam0 /*14*/].f_1=0;
}
Local_138.f_1801[iParam0 /*14*/].f_9=NETWORK::GET_NETWORK_TIME();
if(func_241(iParam0) && Local_138.f_1801[iParam0 /*14*/].f_12 > -1){
func_238(func_240(iParam0), func_239(iParam0), iParam0);
}}


void func_238(char* sParam0, char* sParam1, int iParam2){
int iVar0;
float fVar1;
iVar0=Local_138.f_1801[iParam2 /*14*/].f_12;
if(iVar0==-1){
return;
}
fVar1=func_229(Local_138.f_1801[iParam2 /*14*/].f_3);
AUDIO::PLAY_SOUND_FRONTEND(iVar0, sParam0, sParam1, 0);
AUDIO::SET_VARIABLE_ON_SOUND(iVar0, "Screen_Position", fVar1);
}


char* func_239(int iParam0){
switch (Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]){
case 0:
case 1:
case 2:
case 7:
return "dlc_vw_am_ip_enemy_sounds";
case 5:
return "dlc_vw_am_ip_powerup_sounds";
default:
}
return "";
}


char* func_240(int iParam0){
switch (Local_138.f_1801[iParam0 /*14*/]){
case 2:
return "Enemy_Bear_Fire";
case 0:
return "Enemy_Camel_Fire";
case 3:
return "Enemy_Moose_Fire";
case 1:
return "Enemy_Panda_Fire";
case 5:
return "Enemy_Drone_Fire";
case 4:
return "Enemy_Jet_Bomb_Barrel_Drop";
default:
}
return "";
}

int func_241(int iParam0){
if(((((Local_138.f_1801[iParam0 /*14*/]==2 || Local_138.f_1801[iParam0 /*14*/]==0) || Local_138.f_1801[iParam0 /*14*/]==3) || Local_138.f_1801[iParam0 /*14*/]==1) || Local_138.f_1801[iParam0 /*14*/]==5) || Local_138.f_1801[iParam0 /*14*/]==4){
return 1;
}
return 0;
}

int func_242(int iParam0){
switch (Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]){
case 0:
case 2:
return -1;
case 1:
return 0;
default:
}
return 2147483647;
}


var func__243(int iParam0){
return Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_15;
}


float func_244(int iParam0){
switch (Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]){
case 0:
case 1:
return 0f;
case 2:
return -45f;
default:
}
return 0f;
}

int func_245(int iParam0){
switch (Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]){
case 0:
case 2:
return 2;
case 1:
return 1;
default:
}
return -1;
}


void func_246(int iParam0, var uParam1, var uParam2){
*uParam1={
func_193(func_91((Local_138.f_1801[iParam0 /*14*/].f_3 + Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_3), (Local_138.f_1801[iParam0 /*14*/].f_3.f_1 + Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_3.f_1))) 
};
switch (Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]){
case 0:
*uParam2={
func_183(*uParam1, func_149(*uParam1, func_193(func_91(1f, 0f))), -180f) 
};
break;
case 2:
*uParam2={
func_183(*uParam1, func_149(*uParam1, func_193(func_91(1f, 0f))), 135f) 
};
break;
case 1:
*uParam2={
func_183(*uParam1, func_149(*uParam1, func_193(func_91(1f, 0f))), 85f) 
};
break;
}
*uParam1={
func_90(*uParam1) 
};
*uParam2={
func_90(*uParam2) 
};
}

int func_247(int iParam0){
int iVar0;
iVar0=Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_14;
if(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]==1){
iVar0=round((IntToFloat(iVar0) / Local_138.f_2873));
}
return iVar0;
}


void func_248(int iParam0){
if(func_253(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/])){
return;
}
if(Local_138.f_1801[iParam0 /*14*/].f_7 <=0){
return;
}
if(!func_120(&(Local_138.f_2892), 650, 0)){
Local_138.f_1801[iParam0 /*14*/].f_8=NETWORK::GET_NETWORK_TIME();
}else{
func_249(iParam0, -Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_17);
}}


void func_249(bool bParam0, int iParam1){
if(iParam1==0){
return;
}
if(Local_138.f_1801[bParam0 /*14*/].f_7 <=0){
return;
}
Local_138.f_1801[bParam0 /*14*/].f_7=func_155((Local_138.f_1801[bParam0 /*14*/].f_7 + iParam1), 0, Local_138.f_753[Local_138.f_1801[bParam0 /*14*/] /*28*/].f_17);
Local_138.f_1801[bParam0 /*14*/].f_8=NETWORK::GET_NETWORK_TIME();
if(Local_138.f_1801[bParam0 /*14*/].f_7 > 0){
return;
}
if(Local_138.f_753[Local_138.f_1801[bParam0 /*14*/] /*28*/].f_16 > 0){
func_126(Local_138.f_753[Local_138.f_1801[bParam0 /*14*/] /*28*/].f_16, 0, Local_138.f_1801[bParam0 /*14*/].f_3);
if(func_252(bParam0)){
Local_138.f_2712.f_5++;
}}
if(func_251(bParam0) && Local_138.f_1801[bParam0 /*14*/].f_12 !=-1){
func_238(func_250(bParam0), func_239(bParam0), bParam0);
}}


char* func_250(int iParam0){
switch (Local_138.f_1801[iParam0 /*14*/]){
case 2:
return "Enemy_Bear_Die";
case 0:
return "Enemy_Camel_Die";
case 3:
return "Enemy_Moose_Die";
case 1:
return "Enemy_Panda_Die";
case 5:
return "Enemy_Drone_Destroyed";
case 4:
return "Enemy_Jet_Explode";
default:
}
if(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]==7){
return "Enemy_Drone_Destroyed";
}
return "";
}

int func_251(int iParam0){
if(((((Local_138.f_1801[iParam0 /*14*/]==2 || Local_138.f_1801[iParam0 /*14*/]==0) || Local_138.f_1801[iParam0 /*14*/]==3) || Local_138.f_1801[iParam0 /*14*/]==1) || Local_138.f_1801[iParam0 /*14*/]==5) || Local_138.f_1801[iParam0 /*14*/]==4){
return 1;
}
if(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]==7){
return 1;
}
return 0;
}

int func_252(int iParam0){
if(((Local_138.f_1801[iParam0 /*14*/]==0 || Local_138.f_1801[iParam0 /*14*/]==2) || Local_138.f_1801[iParam0 /*14*/]==1) || Local_138.f_1801[iParam0 /*14*/]==3){
return 1;
}
return 0;
}

int func_253(int iParam0){
if((((iParam0==8 || iParam0==3) || iParam0==4) || iParam0==5) || iParam0==6){
return 1;
}
return 0;
}


void func_254(int iParam0){
float fVar0;
struct<2> Var1;
float fVar2;
struct<2> Var3;
float fVar4;
float fVar5;
struct<2> Var6;
float fVar7;
if(Local_138.f_1801[iParam0 /*14*/].f_3 < (0.15625f - (Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_22 / 2f))){
func_262(iParam0);
return;
}
if(Local_138.f_1801[iParam0 /*14*/].f_12==-1 || Local_138.f_1801[iParam0 /*14*/].f_13==-1){
if(!func_205(Local_138.f_1801[iParam0 /*14*/].f_3, Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_22)){
Local_138.f_1801[iParam0 /*14*/].f_12=AUDIO::GET_SOUND_ID();
Local_138.f_1801[iParam0 /*14*/].f_13=AUDIO::GET_SOUND_ID();
if(func_261(iParam0)){
func_238(func_260(iParam0), func_239(iParam0), iParam0);
}}}
if(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]==3 && Local_138.f_1801[iParam0 /*14*/].f_11 & 1 !=0){
func_259(iParam0);
}else{
Local_138.f_1801[iParam0 /*14*/].f_1=(Local_138.f_1801[iParam0 /*14*/].f_1 + Local_138.f_2875);
if(Local_138.f_1801[iParam0 /*14*/].f_7 > 0){
switch (Local_138.f_1801[iParam0 /*14*/].f_10){
case 0:
case 2:
if(Local_138.f_1801[iParam0 /*14*/].f_1 >=Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_25){
Local_138.f_1801[iParam0 /*14*/].f_1=0;
}
break;
case 1:
if(Local_138.f_1801[iParam0 /*14*/].f_1 >=Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_27){
Local_138.f_1801[iParam0 /*14*/].f_1=0;
Local_138.f_1801[iParam0 /*14*/].f_10=0;
}
break;
}}elseif(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]==5){
if(Local_138.f_1801[iParam0 /*14*/].f_1 > 3){
func_262(iParam0);
return;
}}elseif(Local_138.f_1801[iParam0 /*14*/].f_1 > 6){
func_262(iParam0);
return;
}}
if(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]==6){
func_256(iParam0);
}
if(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]==2){
fVar2=Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_1;
if((NETWORK::GET_NETWORK_TIME() - Local_138.f_1801[iParam0 /*14*/].f_2) > 6500 || Local_138.f_2870 > 7){
if(Local_138.f_1801[iParam0 /*14*/].f_11 & 1 !=0 && Local_138.f_2870==7){
Var1={
Local_138.f_2368.f_321 
};
}else{
Var1.f_0=-1f;
Var1.f_1=0f;
}
fVar2=(fVar2 * 1.25f);
}else{
Var1={
func_91((Local_138.f_2368.f_321 + 0.125f), (Local_138.f_2368.f_321.f_1 + -0.225f)) 
};
if(Var1.f_1 > (Local_138.f_3 + -0.225f)){
Var1.f_1=(Local_138.f_3 + -0.225f);
}}
Var3={
func_193(func_149(Var1, func_91(0.15f, 0f))) 
};
Var1={
func_193(Var1) 
};
fVar4=sin(((Local_138.f_2872 * 2000f) + IntToFloat(iParam0 * 100)));
fVar5=(30f + (fVar4 * 15f));
Var6={
func_90(func_183(Var1, Var3, (180f + fVar5))) 
};
Local_138.f_1801[iParam0 /*14*/].f_5={
func_165(func_90(Var1), Var6, sin(((Local_138.f_2872 * 650f) + IntToFloat(iParam0 * 100)))) 
};
Local_138.f_1801[iParam0 /*14*/].f_3={
func_225(Local_138.f_1801[iParam0 /*14*/].f_3, Local_138.f_1801[iParam0 /*14*/].f_5, fVar2) 
};
if(Local_138.f_1801[iParam0 /*14*/].f_13 > -1){
if(Local_138.f_1801[iParam0 /*14*/].f_7 > 0){
func_255("Enemy_Drone_Loop", iParam0);
}}
return;
}
if(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]==5 && Local_138.f_1801[iParam0 /*14*/].f_10==2){
fVar0=func_219(Local_138.f_1801[iParam0 /*14*/].f_3, 0);
if(Local_138.f_1801[iParam0 /*14*/].f_3.f_1 < (Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_2 + fVar0)){
Local_138.f_1801[iParam0 /*14*/].f_3.f_1=(Local_138.f_1801[iParam0 /*14*/].f_3.f_1 + (0.45f * timestep()));
if(Local_138.f_1801[iParam0 /*14*/].f_3.f_1 >=(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_2 + fVar0)){
Local_138.f_1801[iParam0 /*14*/].f_3.f_1=(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_2 + fVar0);
Local_138.f_1801[iParam0 /*14*/].f_10=0;
if(Local_138.f_1801[iParam0 /*14*/].f_12 !=-1){
func_238("Powerup_Crate_Land", func_239(iParam0), iParam0);
}}}}
if(Local_138.f_2870 !=7 && Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/] !=1){
return;
}
if(Local_138.f_1801[iParam0 /*14*/]==33){
fVar0=func_219((Local_138.f_1801[iParam0 /*14*/].f_3 - (Local_138.f_753[33 /*28*/].f_22 / 2f)), 0);
fVar7=func_219((Local_138.f_1801[iParam0 /*14*/].f_3 + (Local_138.f_753[33 /*28*/].f_22 / 2f)), 0);
if((fVar0 > Local_138.f_3 || !func_191(fVar0, (fVar7 - 0.0001f), (fVar7 + 0.0001f))) || !func_191((fVar0 + Local_138.f_753[33 /*28*/].f_2), (Local_138.f_1801[iParam0 /*14*/].f_3.f_1 - 0.0001f), (Local_138.f_1801[iParam0 /*14*/].f_3.f_1 + 0.0001f))){
Local_138.f_1801[iParam0 /*14*/].f_3=func_138(Local_138.f_1801[iParam0 /*14*/].f_3, Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_1);
return;
}}
Local_138.f_1801[iParam0 /*14*/].f_3=func_138(Local_138.f_1801[iParam0 /*14*/].f_3, -Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_1);
if(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]==1){
if(Local_138.f_1801[iParam0 /*14*/].f_7 > 0){
if(Local_138.f_1801[iParam0 /*14*/].f_13 > -1){
func_255("Enemy_Jet_Flyover", iParam0);
}}}}


void func_255(char* sParam0, int iParam1){
int iVar0;
float fVar1;
iVar0=Local_138.f_1801[iParam1 /*14*/].f_13;
if(iVar0==-1){
return;
}
fVar1=func_229(Local_138.f_1801[iParam1 /*14*/].f_3);
if(AUDIO::HAS_SOUND_FINISHED(iVar0)){
AUDIO::PLAY_SOUND_FRONTEND(iVar0, sParam0, "dlc_vw_am_ip_enemy_sounds", 0);
}
AUDIO::SET_VARIABLE_ON_SOUND(iVar0, "Screen_Position", fVar1);
}


void func_256(int iParam0){
if(Local_138.f_1801[iParam0 /*14*/].f_8 !=-2147483647){
Local_138.f_1801[iParam0 /*14*/].f_5.f_1=(Local_138.f_1801[iParam0 /*14*/].f_5.f_1 + (0.177778f * timestep()));
if(Local_138.f_1801[iParam0 /*14*/].f_5.f_1 > 0.040404f){
Local_138.f_1801[iParam0 /*14*/].f_5.f_1=0.040404f;
}
return;
}
if(Local_138.f_1801[iParam0 /*14*/].f_3 < Local_138.f_2368.f_321){
Local_138.f_1801[iParam0 /*14*/].f_8=NETWORK::GET_NETWORK_TIME();
Local_138.f_1801[iParam0 /*14*/].f_5.f_1=0f;
func_126(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/].f_16, 2, Local_138.f_1801[iParam0 /*14*/].f_3);
if(Local_138.f_1801[iParam0 /*14*/].f_11 & 1==0){
func_238("Tank_Raise_Flag", "dlc_vw_am_ip_tank_sounds", iParam0);
}
if(Local_138.f_2870==7 && Local_138.f_2212 < 1){
if(Local_138.f_2873 < 2f){
func_258("IAP_SPD_UP");
}
func_53("Frontend_Player_Oil_Collect");
Local_138.f_2873=(Local_138.f_2873 + func_257(Local_138.f_1801[iParam0 /*14*/]));
if(Local_138.f_2873 > 2f){
Local_138.f_2873=2f;
}}}}


float func_257(int iParam0){
switch (iParam0){
case 29:
return 0.02f;
case 31:
case 30:
return 0.04f;
case 32:
return 0.06f;
default:
}
return 0f;
}


void func_258(char* sParam0){
Local_138.f_2368.f_286=NETWORK::GET_NETWORK_TIME();
StringCopy(&(Local_138.f_2368.f_286.f_1), sParam0, 64);
}


void func_259(int iParam0){
if(Local_138.f_1801[iParam0 /*14*/].f_7==0){
Local_138.f_1801[iParam0 /*14*/].f_1=(Local_138.f_1801[iParam0 /*14*/].f_1 + round((IntToFloat(Local_138.f_2875) / 1.25f)));
if(Local_138.f_1801[iParam0 /*14*/].f_1 >=4){
Local_138.f_1801[iParam0 /*14*/].f_11 &=-2;
Local_138.f_1801[iParam0 /*14*/].f_7=1;
}}elseif(Local_138.f_1801[iParam0 /*14*/].f_3 < (Local_138.f_2368.f_321 + func_222())){
Local_138.f_1801[iParam0 /*14*/].f_7=0;
Local_138.f_1801[iParam0 /*14*/].f_1=0;
if(Local_138.f_1801[iParam0 /*14*/].f_12 !=-1){
func_238("Enemy_Hazard_Wall_Collapse", "dlc_vw_am_ip_enemy_sounds", iParam0);
}}}


char* func_260(int iParam0){
switch (Local_138.f_1801[iParam0 /*14*/]){
case 2:
return "Enemy_Bear_Spawn";
case 0:
return "Enemy_Camel_Spawn";
case 3:
return "Enemy_Moose_Spawn";
case 1:
return "Enemy_Panda_Spawn";
default:
}
if(Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]==5){
return "Powerup_Crate_Parachute_Open";
}
return "";
}

int func_261(int iParam0){
switch (Local_138.f_753[Local_138.f_1801[iParam0 /*14*/] /*28*/]){
case 0:
case 5:
return 1;
default:
}
return 0;
}


void func_262(int iParam0){
if(Local_138.f_1801[iParam0 /*14*/].f_12 > -1){
AUDIO::RELEASE_SOUND_ID(Local_138.f_1801[iParam0 /*14*/].f_12);
Local_138.f_1801[iParam0 /*14*/].f_12=-1;
}
if(Local_138.f_1801[iParam0 /*14*/].f_13 > -1){
AUDIO::STOP_SOUND(Local_138.f_1801[iParam0 /*14*/].f_13);
AUDIO::RELEASE_SOUND_ID(Local_138.f_1801[iParam0 /*14*/].f_13);
Local_138.f_1801[iParam0 /*14*/].f_13=-1;
}
Local_138.f_1801[iParam0 /*14*/]=-1;
}


void func_263(){
float fVar0;
int iVar1;
if(Local_138.f_2870 !=7){
return;
}
if(Local_138.f_2871==4 && !func_58(&(Local_138.f_2898), 33)){
if(Local_138.f_2905 < 1){
func_271(&(Local_138.f_2898), 33);
}elseif(Local_138.f_2872 / 0.164583f) >=IntToFloat((Local_138.f_2905 - 1)){
func_268(33, to_float(Local_138.f_2905));
}}
if(Local_138.f_2210 >=225 || Local_138.f_4[Local_138.f_2210 /*3*/]==-1){
if(Local_138.f_0==-1f){
return;
}
if(Local_138.f_2212 >=14){
return;
}
iVar1=Local_138.f_680[Local_138.f_2212 /*3*/];
fVar0=(Local_138.f_0 - Local_138.f_680[Local_138.f_2212 /*3*/].f_1);
if(Local_138.f_2872 / 0.164583f) >=(Local_138.f_0 - 5f){
func_267(Local_138.f_2213, iVar1, Local_138.f_680[Local_138.f_2212 /*3*/].f_2, fVar0);
Local_138.f_2212++;
Local_138.f_2213++;
if(Local_138.f_2213 >=14){
Local_138.f_2213=0;
}}
return;
}
if(Local_138.f_2870 !=7){
return;
}
if(Local_138.f_4[Local_138.f_2210 /*3*/]==34){
func_264();
return;
}
iVar1=Local_138.f_4[Local_138.f_2210 /*3*/];
fVar0=Local_138.f_4[Local_138.f_2210 /*3*/].f_1;
if((Local_138.f_2872 / 0.164583f) >=fVar0){
if(func_268(iVar1, fVar0)){
Local_138.f_2210++;
}}}


void func_264(){
float fVar0;
int iVar1;
if(Local_138.f_0 !=-1f && (Local_138.f_2872 / 0.164583f) >=(Local_138.f_0 - 12.5f)){
Local_138.f_2210++;
return;
}
fVar0=((Local_138.f_2872 / 0.164583f) / 1250f);
if(fVar0 > 1f){
fVar0=1f;
}
Local_138.f_2214=func_160(0.25f, 0f, fVar0, 2);
Local_138.f_2214.f_1=func_160(3f, 1.75f, fVar0, 2);
if((Local_138.f_2872 / 0.164583f) > Local_138.f_2214.f_124){
iVar1=Local_138.f_2214.f_125;
if(iVar1==-1){
if(Local_138.f_2214.f_124 < 0f){
MISC::SET_RANDOM_SEED(Local_138.f_1);
}else{
MISC::SET_RANDOM_SEED(floor((sin(Local_138.f_2214.f_124) * Local_138.f_2214.f_124)));
}
Local_138.f_2214.f_124=(Local_138.f_2214.f_124 + func_266());
Local_138.f_2214.f_125=func_265();
return;
}
if((Local_138.f_2872 / 0.164583f) >=Local_138.f_2214.f_124){
if(func_268(Local_138.f_2214.f_125, Local_138.f_2214.f_124)){
Local_138.f_2214.f_125=-1;
}}}}

int func_265(){
int iVar0[35];
int iVar1;
int iVar2;
int iVar3;
var uVar4;
int iVar5;
iVar1=0;
while (iVar1 <=9){
iVar2=0;
while (iVar2 <=9){
if((Local_138.f_2214.f_124 - Local_138.f_2214.f_113[iVar1]) < Local_138.f_2214.f_2[iVar1 /*11*/][iVar2]){
MISC::SET_BIT(&uVar4, iVar2);
}
bVar2++;
}
iVar1++;
}
iVar1=0;
while (iVar1 <=34){
if(!MISC::IS_BIT_SET(Local_138.f_753[iVar1 /*28*/].f_19, Local_138.f_2871)){
}elseif(!MISC::IS_BIT_SET(uVar4, Local_138.f_753[iVar1 /*28*/].f_18)){
iVar0[iVar3]=iVar1;
iVar3++;
}
iVar1++;
}
if(iVar3==0){
Local_138.f_2214.f_124=(Local_138.f_2214.f_124 + func_266());
return -1;
}
iVar5=iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar3)];
Local_138.f_2214.f_113[Local_138.f_753[iVar5 /*28*/].f_18]=Local_138.f_2214.f_124;
return iVar5;
}


float func_266(){
return MISC::GET_RANDOM_FLOAT_IN_RANGE(Local_138.f_2214, Local_138.f_2214.f_1);
}


void func_267(int iParam0, int iParam1, int iParam2, float fParam3){
float fVar0;
float fVar1;
float fVar2;
Local_138.f_1801[iParam0 /*14*/]=iParam1;
Local_138.f_1801[iParam0 /*14*/].f_11=iParam2;
Local_138.f_1801[iParam0 /*14*/].f_1=0;
if(Local_138.f_1801[iParam0 /*14*/].f_12 > -1){
AUDIO::STOP_SOUND(Local_138.f_1801[iParam0 /*14*/].f_12);
AUDIO::RELEASE_SOUND_ID(Local_138.f_1801[iParam0 /*14*/].f_12);
Local_138.f_1801[iParam0 /*14*/].f_12=-1;
}
if(Local_138.f_1801[iParam0 /*14*/].f_13 > -1){
AUDIO::STOP_SOUND(Local_138.f_1801[iParam0 /*14*/].f_13);
AUDIO::RELEASE_SOUND_ID(Local_138.f_1801[iParam0 /*14*/].f_13);
Local_138.f_1801[iParam0 /*14*/].f_13=-1;
}
Local_138.f_1801[iParam0 /*14*/].f_8=-2147483647;
Local_138.f_1801[iParam0 /*14*/].f_7=Local_138.f_753[iParam1 /*28*/].f_17;
fVar0=((fParam3 * 0.164583f) - Local_138.f_2872);
fVar1=(fVar0 * ((-0.15f * Local_138.f_2873) / (Local_138.f_753[iParam1 /*28*/].f_1 * Local_138.f_2873)));
Local_138.f_1801[iParam0 /*14*/].f_3={
func_91((1f - fVar1), Local_138.f_753[iParam1 /*28*/].f_2) 
};
if(((Local_138.f_753[iParam1 /*28*/] !=3 && Local_138.f_753[iParam1 /*28*/] !=4) && Local_138.f_753[iParam1 /*28*/] !=1) && Local_138.f_753[iParam1 /*28*/] !=2){
Local_138.f_1801[iParam0 /*14*/].f_3.f_1=(Local_138.f_1801[iParam0 /*14*/].f_3.f_1 + func_219(Local_138.f_1801[iParam0 /*14*/].f_3, 0));
}
if(Local_138.f_753[iParam1 /*28*/]==5){
fVar2=(fVar0 * 0.45f);
Local_138.f_1801[iParam0 /*14*/].f_3.f_1=(Local_138.f_1801[iParam0 /*14*/].f_3.f_1 - (0.9f - fVar2));
Local_138.f_1801[iParam0 /*14*/].f_10=2;
}
if(Local_138.f_753[iParam1 /*28*/]==3){
Local_138.f_2340.f_12[(Local_138.f_745 - 1)]=1;
Local_138.f_2340.f_20[(Local_138.f_745 - 1)]=iParam0;
Local_138.f_1801[iParam0 /*14*/].f_3=func_138((Local_138.f_2340.f_4[(Local_138.f_745 - 1)] + ((func_222() - Local_138.f_746) / 2f)), 0.15f);
}elseif(Local_138.f_753[iParam1 /*28*/]==4){
Local_138.f_2340.f_12[(Local_138.f_745 - 1)]=2;
Local_138.f_2340.f_20[(Local_138.f_745 - 1)]=iParam0;
Local_138.f_1801[iParam0 /*14*/].f_3=func_138((Local_138.f_2340.f_4[(Local_138.f_745 - 1)] + ((func_222() - Local_138.f_746) / 2f)), 0.15f);
}
if(Local_138.f_753[iParam1 /*28*/]==6){
if(iParam2 & 2 !=0){
Local_138.f_1801[iParam0 /*14*/].f_3.f_1=(Local_138.f_1801[iParam0 /*14*/].f_3.f_1 - (Local_138.f_753[iParam1 /*28*/].f_22.f_1 / 2f));
}}
Local_138.f_1801[iParam0 /*14*/].f_2=NETWORK::GET_NETWORK_TIME_ACCURATE();
}

int func_268(int iParam0, float fParam1){
int iVar0;
if(Local_138.f_753[iParam0 /*28*/]==3 || Local_138.f_753[iParam0 /*28*/]==4){
if((Local_138.f_2340.f_12[(Local_138.f_745 - 1)]==1 || Local_138.f_2340.f_12[(Local_138.f_745 - 1)]==2) || !func_205(func_91((Local_138.f_2340.f_4[(Local_138.f_745 - 1)] + ((func_222() - Local_138.f_746) / 2f)), Local_138.f_753[iParam0 /*28*/].f_2), Local_138.f_753[iParam0 /*28*/].f_22)){
return 0;
}elseif(Local_138.f_2214.f_124 > -1f && iParam0 !=33){
Local_138.f_2214.f_124=(Local_138.f_2214.f_124 + ((((Local_138.f_2872 / 0.164583f) - Local_138.f_2214.f_124) + ((Local_138.f_753[iParam0 /*28*/].f_22 / 2f) / 0.164583f)) + (((1f - Local_138.f_2340.f_4[(Local_138.f_745 - 1)]) + ((func_222() - Local_138.f_746) / 2f)) / -0.164583f)));
Local_138.f_2214.f_113[Local_138.f_753[iParam0 /*28*/].f_18]=Local_138.f_2214.f_124;
}}
if(!func_173() || func_253(Local_138.f_753[iParam0 /*28*/])){
func_270(&iParam0);
iVar0=0;
if(Local_138.f_4[Local_138.f_2210 /*3*/] !=34){
iVar0=Local_138.f_4[Local_138.f_2210 /*3*/].f_2;
}
func_267(Local_138.f_2211, iParam0, iVar0, fParam1);
Local_138.f_2211++;
if(Local_138.f_2211 >=14){
Local_138.f_2211=0;
}}
if(!func_58(&(Local_138.f_2898), iParam0)){
func_271(&(Local_138.f_2898), iParam0);
if(!MISC::IS_STRING_NULL_OR_EMPTY(Local_138.f_753[iParam0 /*28*/].f_20)){
func_269(Local_138.f_753[iParam0 /*28*/].f_20, Local_138.f_753[iParam0 /*28*/].f_21);
}}
return 1;
}


void func_269(var uParam0, int iParam1){
func_9();
Local_138.f_2901=(NETWORK::GET_NETWORK_TIME() + iParam1);
Local_138.f_2903=uParam0;
Local_138.f_2902=-1;
}


void func_270(int iParam0){
if(*iParam0==26 && Local_138.f_2368.f_2 !=0){
*iParam0=22;
}}


void func_271(var uParam0, int iParam1){
MISC::SET_BIT(uParam0[func_57(iParam1)], func_56(iParam1));
}


void func_272(){
if(!func_123(&(Local_138.f_2888))){
func_122(&(Local_138.f_2888), 0, 0);
}
func_236();
func_235();
func_231();
func_215();
func_217();
func_216();
func_212();
func_209();
func_273();
if(!func_124()){
return;
}
if(!MISC::IS_BIT_SET(Local_138.f_2368.f_333, 8) && func_120(&(Local_138.f_2888), 5500, 0)){
func_12(func_13(3));
MISC::SET_BIT(&(Local_138.f_2368.f_333), 8);
}
if(!func_120(&(Local_138.f_2888), 7500, 0)){
return;
}
func_7(5);
func_114();
}


void func_273(){
func_207();
func_194();
func_176();
func_157();
func_174();
func_162();
func_157();
func_150();
func_145();
func_140(2);
func_87();
func_85();
}


void func_274(){
if(!func_123(&(Local_138.f_2884))){
func_122(&(Local_138.f_2884), 0, 0);
Local_138.f_2878=0;
}
func_312();
func_308();
func_236();
func_231();
func_235();
func_297();
func_218();
func_296();
func_217();
func_216();
func_215();
func_282();
func_212();
func_209();
func_279();
if(Local_138.f_2368.f_331==0 && Local_138.f_2368.f_330 < 0){
func_278();
Local_138.f_2878=0;
func_276(8359, Local_138.f_2905, -1, 1);
func_8(8);
Local_138.f_2368.f_319=0;
func_103(&(Local_138.f_2884));
Local_138.f_2726=0;
MISC::SET_BIT(&(Local_138.f_2368.f_333), 5);
Local_138.f_2727=0;
MISC::SET_BIT(&(Local_138.f_2368.f_333), 4);
Local_138.f_2728=floor((Local_138.f_2872 / 0.164583f));
func_7(4);
func_53("Frontend_Game_Over");
func_12(func_13(5));
return;
}
if(Local_138.f_0 !=-1f && (Local_138.f_2872 / 0.164583f) >=Local_138.f_0){
func_278();
func_7(6);
Local_138.f_2878=0;
func_105(0);
func_276(8359, Local_138.f_2905, -1, 1);
func_275();
Local_138.f_2726=Local_138.f_2368.f_330;
Local_138.f_2727=Local_138.f_2368.f_331;
Local_138.f_2728=floor((Local_138.f_2872 / 0.164583f));
func_8(9);
func_53("Frontend_Stage_Clear");
func_12(func_13(5));
func_103(&(Local_138.f_2884));
}}


void func_275(){
if(Local_138.f_2907){
return;
}
if(MISC::IS_BIT_SET(Local_138.f_2904, 4)){
return;
}
if(Local_138.f_2368.f_330 < Global_262145.f_27448){
return;
}
func_131(251, 1, -1, 1);
func_130(27187, 1, -1);
MISC::SET_BIT(&(Local_138.f_2904), 4);
MISC::SET_BIT(&(Local_138.f_2904), 10);
func_129();
func_128("IAP_CH_3", Global_262145.f_27448, 7500);
}


void func_276(int iParam0, var uParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_277(iParam0, iParam2);
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, uParam1, iParam3);
}}


var func__277(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_133(uParam1));
}


void func_278(){
if(Local_138.f_2368.f_338 > -1){
if(!AUDIO::HAS_SOUND_FINISHED(Local_138.f_2368.f_338)){
AUDIO::STOP_SOUND(Local_138.f_2368.f_338);
AUDIO::RELEASE_SOUND_ID(Local_138.f_2368.f_338);
Local_138.f_2368.f_338=-1;
}}}


void func_279(){
func_207();
func_194();
func_281();
func_188();
func_176();
func_175();
func_174();
func_162();
func_280();
func_157();
func_150();
if(func_123(&(Local_138.f_2884)) && !func_120(&(Local_138.f_2884), 1750, 0)){
func_140(1);
}
func_87();
func_85();
}


void func_280(){
float fVar0;
if(NETWORK::GET_NETWORK_TIME() > Local_138.f_2368.f_286 + 1000){
return;
}
fVar0=(to_float((NETWORK::GET_NETWORK_TIME() - Local_138.f_2368.f_286)) / 1000f);
func_158(&(Local_138.f_2368.f_286.f_1), (Local_138.f_2368.f_321 + 0.0075f), func_160((Local_138.f_2368.f_321.f_1 + -0.125f), (Local_138.f_2368.f_321.f_1 + -0.2f), fVar0, 4), 2147483647);
}


void func_281(){
int iVar0;
struct<8> Var1;
iVar0=0;
while (iVar0 <=14){
if(Local_138.f_1998[iVar0 /*14*/].f_11==-2147483647){
}elseif(NETWORK::GET_NETWORK_TIME() > (Local_138.f_1998[iVar0 /*14*/].f_11 + Local_138.f_1734[Local_138.f_1998[iVar0 /*14*/] /*5*/].f_2)){
}else{
StringCopy(&Var1, Local_138.f_1734[Local_138.f_1998[iVar0 /*14*/] /*5*/], 64);
if(Local_138.f_2871==4 && Local_138.f_1998[iVar0 /*14*/]==1){
StringConCat(&Var1, "_moon", 64);
}
if(Local_138.f_1734[Local_138.f_1998[iVar0 /*14*/] /*5*/].f_1 > 0){
StringIntConCat(&Var1, Local_138.f_1998[iVar0 /*14*/].f_12 + 1, 64);
}
func_86("MPInvPersCommon", &Var1, Local_138.f_1998[iVar0 /*14*/].f_5, Local_138.f_1998[iVar0 /*14*/].f_5.f_1, Local_138.f_1734[Local_138.f_1998[iVar0 /*14*/] /*5*/].f_3, Local_138.f_1734[Local_138.f_1998[iVar0 /*14*/] /*5*/].f_3.f_1, Local_138.f_1998[iVar0 /*14*/].f_9, Local_138.f_1765);
}
iVar0++;
}}


void func_282(){
float fVar0;
float fVar1;
struct<2> Var2[4];
float fVar3;
struct<2> Var4[3];
struct<2> Var5;
struct<9> Var6;
struct<2> Var7;
struct<2> Var8;
int iVar9;
struct<2> Var10;
struct<2> Var11;
struct<2> Var12;
struct<2> Var13;
struct<9> Var14;
struct<2> Var15;
struct<2> Var16;
struct<2> Var17;
struct<2> Var18;
struct<2> Var19[4];
struct<2> Var20;
bool bVar21;
int iVar22;
int iVar23;
float fVar24;
float fVar25;
struct<2> Var26;
bool bVar27;
int iVar28;
int iVar29;
bool bVar30;
int iVar31;
int iVar32;
bool bVar33;
int iVar34;
float fVar35;
struct<2> Var36;
struct<2> Var37;
int iVar38;
float fVar39;
struct<2> Var40;
struct<2> Var41;
bool bVar42;
struct<2> Var43;
float fVar44;
struct<2> Var45;
struct<2> Var46;
int iVar47;
float fVar48;
bool bVar49;
int iVar50;
bool bVar51;
int iVar52;
int iVar53;
struct<2> Var54;
struct<2> Var55;
Var2[0 /*2*/]={
func_91((Local_138.f_2368.f_321 + -0.056f), (Local_138.f_2368.f_321.f_1 + 0.047f)) 
};
Var2[1 /*2*/]={
func_91((Local_138.f_2368.f_321 + -0.034f), (Local_138.f_2368.f_321.f_1 + -0.036f)) 
};
Var2[2 /*2*/]={
func_91((Local_138.f_2368.f_321 + 0.046f), (Local_138.f_2368.f_321.f_1 + -0.026f)) 
};
Var2[3 /*2*/]={
func_91((Local_138.f_2368.f_321 + 0.039f), (Local_138.f_2368.f_321.f_1 + 0.047f)) 
};
fVar3=0f;
if((Local_138.f_2368==1 || Local_138.f_2368==2) || Local_138.f_2368==4){
fVar3=-((0.144444f - 0.12963f) / 2f);
}
Var5={
func_193(func_91((Local_138.f_2368.f_321 + 0.0075f), ((Local_138.f_2368.f_321.f_1 + -0.055f) + fVar3))) 
};
Var4[0 /*2*/]={
func_149(Var5, func_193(func_91(-0.01f, 0.032f))) 
};
Var4[1 /*2*/]={
func_149(Var5, func_193(func_91(-0.01f, -0.032f))) 
};
Var4[2 /*2*/]={
func_149(Var5, func_193(func_91(0.059f, 0f))) 
};
if(Local_138.f_2368.f_325 !=0){
fVar1=sin((IntToFloat(Local_138.f_2368.f_325) * -15f));
fVar0=cos((IntToFloat(Local_138.f_2368.f_325) * -15f));
Var4[0 /*2*/]={
func_190(Var5, Var4[0 /*2*/], fVar1, fVar0) 
};
Var4[1 /*2*/]={
func_190(Var5, Var4[1 /*2*/], fVar1, fVar0) 
};
Var4[2 /*2*/]={
func_190(Var5, Var4[2 /*2*/], fVar1, fVar0) 
};
}
Var4[0 /*2*/]={
func_90(Var4[0 /*2*/]) 
};
Var4[1 /*2*/]={
func_90(Var4[1 /*2*/]) 
};
Var4[2 /*2*/]={
func_90(Var4[2 /*2*/]) 
};
Var6=20;
Var6.f_1=4;
Var6.f_1.f_9=4;
Var6.f_1.f_9.f_9=4;
Var6.f_1.f_9.f_9.f_9=4;
Var6.f_1.f_9.f_9.f_9.f_9=4;
Var6.f_1.f_9.f_9.f_9.f_9.f_9=4;
Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9=4;
Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9=4;
Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9=4;
Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9=4;
Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9=4;
Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9=4;
Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9=4;
Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9=4;
Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9=4;
Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9=4;
Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9=4;
Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9=4;
Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9=4;
Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9=4;
iVar9=0;
iVar9=0;
while (iVar9 <=19){
if(Local_138.f_2368.f_3[iVar9 /*14*/].f_11==-2147483647){
}elseif(NETWORK::GET_NETWORK_TIME() > (Local_138.f_2368.f_3[iVar9 /*14*/].f_11 + Local_138.f_1734[Local_138.f_2368.f_3[iVar9 /*14*/] /*5*/].f_2)){
}elseif(func_205(Local_138.f_2368.f_3[iVar9 /*14*/].f_5, func_91(0.0001f, 0.0001f))){
}elseif(Local_138.f_2368.f_3[iVar9 /*14*/]==5){
}else{
Var10={
func_193(Local_138.f_2368.f_3[iVar9 /*14*/].f_5) 
};
Var11={
func_193(Local_138.f_2368.f_3[iVar9 /*14*/].f_7) 
};
Var12={
func_192(func_149(Var10, Var11), 2f) 
};
if(!func_191(Local_138.f_2368.f_3[iVar9 /*14*/].f_9, -0.0001f, 0.0001f)){
fVar1=sin(Local_138.f_2368.f_3[iVar9 /*14*/].f_9);
fVar0=cos(Local_138.f_2368.f_3[iVar9 /*14*/].f_9);
Var7={
func_190(Var12, Var10, -fVar1, fVar0) 
};
Var8={
func_190(Var12, Var11, -fVar1, fVar0) 
};
}else{
Var7={
Var10 
};
Var8={
Var11 
};
}
Var13={
func_193(func_192(Local_138.f_1734[Local_138.f_2368.f_3[iVar9 /*14*/] /*5*/].f_3, 2f)) 
};
Var6[iVar9 /*9*/][0 /*2*/]=(Var8.f_0 - Var13.f_0);
Var6[iVar9 /*9*/][1 /*2*/]=Var6[iVar9 /*9*/][0 /*2*/];
Var6[iVar9 /*9*/][2 /*2*/]=(Var7.f_0 + Var13.f_0);
Var6[iVar9 /*9*/][3 /*2*/]=Var6[iVar9 /*9*/][2 /*2*/];
Var6[iVar9 /*9*/][0 /*2*/].f_1=(Var8.f_1 + Var13.f_1);
Var6[iVar9 /*9*/][1 /*2*/].f_1=(Var7.f_1 - Var13.f_1);
Var6[iVar9 /*9*/][2 /*2*/].f_1=Var6[iVar9 /*9*/][1 /*2*/].f_1;
Var6[iVar9 /*9*/][3 /*2*/].f_1=Var6[iVar9 /*9*/][0 /*2*/].f_1;
if(!func_191(Local_138.f_2368.f_3[iVar9 /*14*/].f_9, -0.0001f, 0.0001f)){
Var6[iVar9 /*9*/][0 /*2*/]={
func_190(Var12, Var6[iVar9 /*9*/][0 /*2*/], fVar1, fVar0) 
};
Var6[iVar9 /*9*/][1 /*2*/]={
func_190(Var12, Var6[iVar9 /*9*/][1 /*2*/], fVar1, fVar0) 
};
Var6[iVar9 /*9*/][2 /*2*/]={
func_190(Var12, Var6[iVar9 /*9*/][2 /*2*/], fVar1, fVar0) 
};
Var6[iVar9 /*9*/][3 /*2*/]={
func_190(Var12, Var6[iVar9 /*9*/][3 /*2*/], fVar1, fVar0) 
};
}
Var6[iVar9 /*9*/][0 /*2*/]={
func_90(Var6[iVar9 /*9*/][0 /*2*/]) 
};
Var6[iVar9 /*9*/][1 /*2*/]={
func_90(Var6[iVar9 /*9*/][1 /*2*/]) 
};
Var6[iVar9 /*9*/][2 /*2*/]={
func_90(Var6[iVar9 /*9*/][2 /*2*/]) 
};
Var6[iVar9 /*9*/][3 /*2*/]={
func_90(Var6[iVar9 /*9*/][3 /*2*/]) 
};
}
iVar9++;
}
Var14=15;
Var14.f_1=4;
Var14.f_1.f_9=4;
Var14.f_1.f_9.f_9=4;
Var14.f_1.f_9.f_9.f_9=4;
Var14.f_1.f_9.f_9.f_9.f_9=4;
Var14.f_1.f_9.f_9.f_9.f_9.f_9=4;
Var14.f_1.f_9.f_9.f_9.f_9.f_9.f_9=4;
Var14.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9=4;
Var14.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9=4;
Var14.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9=4;
Var14.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9=4;
Var14.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9=4;
Var14.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9=4;
Var14.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9=4;
Var14.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9=4;
iVar9=0;
while (iVar9 <=14){
if(Local_138.f_1998[iVar9 /*14*/].f_11==-2147483647){
}elseif(NETWORK::GET_NETWORK_TIME() > (Local_138.f_1998[iVar9 /*14*/].f_11 + Local_138.f_1734[Local_138.f_1998[iVar9 /*14*/] /*5*/].f_2)){
}elseif(func_205(Local_138.f_1998[iVar9 /*14*/].f_5, func_91(0.0001f, 0.0001f))){
}else{
Var15={
func_193(Local_138.f_1998[iVar9 /*14*/].f_5) 
};
Var16={
func_193(Local_138.f_1998[iVar9 /*14*/].f_7) 
};
Var17={
func_192(func_149(Var15, Var16), 2f) 
};
if(!func_191(Local_138.f_1998[iVar9 /*14*/].f_9, -0.0001f, 0.0001f)){
fVar1=sin(Local_138.f_1998[iVar9 /*14*/].f_9);
fVar0=cos(Local_138.f_1998[iVar9 /*14*/].f_9);
Var7={
func_190(Var17, Var15, -fVar1, fVar0) 
};
Var8={
func_190(Var17, Var16, -fVar1, fVar0) 
};
}else{
Var7={
Var15 
};
Var8={
Var16 
};
}
Var18={
func_193(func_192(Local_138.f_1734[Local_138.f_1998[iVar9 /*14*/] /*5*/].f_3, 2f)) 
};
Var14[iVar9 /*9*/][0 /*2*/]=(Var7.f_0 - Var18.f_0);
Var14[iVar9 /*9*/][1 /*2*/]=Var14[iVar9 /*9*/][0 /*2*/];
Var14[iVar9 /*9*/][2 /*2*/]=(Var8.f_0 + Var18.f_0);
Var14[iVar9 /*9*/][3 /*2*/]=Var14[iVar9 /*9*/][2 /*2*/];
Var14[iVar9 /*9*/][0 /*2*/].f_1=(Var8.f_1 + Var18.f_1);
Var14[iVar9 /*9*/][1 /*2*/].f_1=(Var7.f_1 - Var18.f_1);
Var14[iVar9 /*9*/][2 /*2*/].f_1=Var14[iVar9 /*9*/][1 /*2*/].f_1;
Var14[iVar9 /*9*/][3 /*2*/].f_1=Var14[iVar9 /*9*/][0 /*2*/].f_1;
if(!func_191(Local_138.f_1998[iVar9 /*14*/].f_9, -0.0001f, 0.0001f)){
Var14[iVar9 /*9*/][0 /*2*/]={
func_190(Var17, Var14[iVar9 /*9*/][0 /*2*/], fVar1, fVar0) 
};
Var14[iVar9 /*9*/][1 /*2*/]={
func_190(Var17, Var14[iVar9 /*9*/][1 /*2*/], fVar1, fVar0) 
};
Var14[iVar9 /*9*/][2 /*2*/]={
func_190(Var17, Var14[iVar9 /*9*/][2 /*2*/], fVar1, fVar0) 
};
Var14[iVar9 /*9*/][3 /*2*/]={
func_190(Var17, Var14[iVar9 /*9*/][3 /*2*/], fVar1, fVar0) 
};
}
Var14[iVar9 /*9*/][0 /*2*/]={
func_90(Var14[iVar9 /*9*/][0 /*2*/]) 
};
Var14[iVar9 /*9*/][1 /*2*/]={
func_90(Var14[iVar9 /*9*/][1 /*2*/]) 
};
Var14[iVar9 /*9*/][2 /*2*/]={
func_90(Var14[iVar9 /*9*/][2 /*2*/]) 
};
Var14[iVar9 /*9*/][3 /*2*/]={
func_90(Var14[iVar9 /*9*/][3 /*2*/]) 
};
}
iVar9++;
}
Var20={
func_91(-1f, -1f) 
};
bVar21=false;
while (bVar21 <=13){
if(Local_138.f_1801[bVar21 /*14*/]==-1){
}elseif(Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/]==6){
}elseif(Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/]==3){
}elseif(Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/]==4){
}elseif(Local_138.f_1801[bVar21 /*14*/].f_7==0){
}elseif(Local_138.f_1801[bVar21 /*14*/].f_3 - (Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/].f_22 / 2f)) > (1f - 0.15625f){
}elseif(func_205(Local_138.f_1801[bVar21 /*14*/].f_3, Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/].f_22)){
}else{
Var26={
Local_138.f_1801[bVar21 /*14*/].f_3 
};
iVar22=0;
while (iVar22 <=3){
Var19[iVar22 /*2*/]={
func_149(Var26, Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/].f_5[iVar22 /*2*/]) 
};
iVar22++;
}
if(Local_138.f_2368.f_331 > 0 && Local_138.f_2368 !=3){
fVar24=MISC::ABSF((Var26.f_0 - Local_138.f_2368.f_321));
fVar25=MISC::ABSF((Var26.f_1 - Local_138.f_2368.f_321.f_1));
if(fVar24 <=func_295(Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/].f_22, 0.104167f) && fVar25 <=func_295(Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/].f_22.f_1, 0.12963f)){
bVar27=false;
iVar22=0;
while (iVar22 <=3){
iVar28=iVar22 + 1;
if(iVar28 >=4){
iVar28=0;
}
iVar23=0;
while (iVar23 <=3){
iVar29=iVar23 + 1;
if(iVar29 >=4){
iVar29=0;
}
if(func_293(Var2[iVar22 /*2*/], Var2[iVar28 /*2*/], Var19[iVar23 /*2*/], Var19[iVar29 /*2*/], &Var20)){
if(Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/]==5){
func_288(bVar21, 0);
Local_138.f_1801[bVar21 /*14*/].f_7=0;
}else{
if(Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/] !=8){
func_249(bVar21, -Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/].f_17);
}
if(Local_138.f_2368.f_334 + 750 < NETWORK::GET_NETWORK_TIME() && Local_138.f_2368.f_337 + 2000 < NETWORK::GET_NETWORK_TIME()){
func_233("Tank_Collision", &(Local_138.f_2368.f_343));
}
func_287(-4);
}
bVar27=true;
}else{
iVar23++;
}
}
if(bVar27){
}
else{
iVar22++;
}}
if(bVar27){
}elseif((Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/]==5 || Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/]==3) || Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/]==4){
}else{
iVar9=0;
while (iVar9 <=19){
if(Local_138.f_2368.f_3[iVar9 /*14*/].f_11==-2147483647){
}elseif(Local_138.f_2368.f_3[iVar9 /*14*/]==5){
}elseif(NETWORK::GET_NETWORK_TIME() > (Local_138.f_2368.f_3[iVar9 /*14*/].f_11 + Local_138.f_1734[Local_138.f_2368.f_3[iVar9 /*14*/] /*5*/].f_2)){
}elseif(func_205(Local_138.f_2368.f_3[iVar9 /*14*/].f_5, func_91(0.0001f, 0.0001f))){
}else{
fVar24=MISC::ABSF((Var26.f_0 - Local_138.f_2368.f_3[iVar9 /*14*/].f_5));
fVar25=MISC::ABSF((Var26.f_1 - Local_138.f_2368.f_3[iVar9 /*14*/].f_5.f_1));
if(fVar24 <=(Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/].f_22 + Local_138.f_1734[Local_138.f_2368.f_3[iVar9 /*14*/] /*5*/].f_3) && fVar25 <=(Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/].f_22.f_1 + Local_138.f_1734[Local_138.f_2368.f_3[iVar9 /*14*/] /*5*/].f_3.f_1)){
bVar30=false;
iVar22=0;
while (iVar22 <=3){
iVar31=iVar22 + 1;
if(iVar31 >=4){
iVar31=0;
}
if(func_293(Var6[iVar9 /*9*/][0 /*2*/], Var6[iVar9 /*9*/][2 /*2*/], Var19[iVar22 /*2*/], Var19[iVar31 /*2*/], &Var20) || func_293(Var6[iVar9 /*9*/][1 /*2*/], Var6[iVar9 /*9*/][3 /*2*/], Var19[iVar22 /*2*/], Var19[iVar31 /*2*/], &Var20)){
if(Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/] !=8){
func_249(bVar21, -Local_138.f_2368.f_3[iVar9 /*14*/].f_13);
}
func_228(func_230(Local_138.f_2368.f_3[iVar9 /*14*/]), "dlc_vw_am_ip_tank_sounds", Local_138.f_2368.f_3[iVar22 /*14*/].f_5);
func_227(Var20, 0);
Local_138.f_2368.f_3[iVar9 /*14*/].f_11=-2147483647;
bVar30=true;
}
else{
iVar22++;
}
}
if(bVar30){
}}}
iVar9++;
}}
bVar21++;
if(((Local_138.f_2368.f_2==3 && Local_138.f_2368.f_3[0 /*14*/].f_11 !=-2147483647) && Local_138.f_2368.f_3[0 /*14*/]==5) && NETWORK::GET_NETWORK_TIME() <=(Local_138.f_2368.f_3[0 /*14*/].f_11 + Local_138.f_1734[Local_138.f_2368.f_3[0 /*14*/] /*5*/].f_2)){
iVar32=0;
bVar33=-1;
iVar34=0;
fVar35=3.402823E+38f;
Var36={
func_91(-1f, -1f) 
};
bVar21=false;
while (bVar21 <=13){
if(Local_138.f_1801[bVar21 /*14*/]==-1){
}elseif(((Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/]==5 || Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/]==3) || Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/]==4) || Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/]==6){
}elseif(Local_138.f_1801[bVar21 /*14*/].f_7==0){
}elseif(func_205(Local_138.f_1801[bVar21 /*14*/].f_3, Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/].f_22)){
}else{
Var37={
Local_138.f_1801[bVar21 /*14*/].f_3 
};
iVar22=0;
while (iVar22 <=3){
Var19[iVar22 /*2*/]={
func_149(Var37, Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/].f_5[iVar22 /*2*/]) 
};
iVar22++;
}
iVar22=0;
while (iVar22 <=3){
iVar38=iVar22 + 1;
if(iVar38 >=4){
iVar38=0;
}
if(func_293(Local_138.f_2368.f_3[0 /*14*/].f_1, Local_138.f_2368.f_3[0 /*14*/].f_3, Var19[iVar22 /*2*/], Var19[iVar38 /*2*/], &Var20)){
fVar39=func_226(Local_138.f_2368.f_3[0 /*14*/].f_1, Var20);
if(fVar39 < fVar35){
fVar35=fVar39;
bVar33=bVar21;
Var36={
Var20 
};
}
}
iVar22++;
}}
bVar21++;
}
if(bVar33 !=-1){
iVar34++;
MISC::SET_BIT(&iVar32, bVar33);
Local_138.f_2368.f_3[0 /*14*/].f_3={
Var36 
};
if(Local_138.f_753[Local_138.f_1801[bVar33 /*14*/] /*28*/] !=8){
if(IntToFloat(NETWORK::GET_NETWORK_TIME()) > (IntToFloat(Local_138.f_1801[bVar33 /*14*/].f_8) + (62f * func_286()))){
func_249(bVar33, -Local_138.f_2368.f_3[0 /*14*/].f_13);
}
iVar22=0;
while (iVar22 <=2){
bVar42=false;
bVar21=false;
while (bVar21 <=13){
if(MISC::IS_BIT_SET(iVar32, bVar21)){
}
elseif(Local_138.f_1801[bVar21 /*14*/]==-1){
}
elseif((((Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/]==5 || Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/]==3) || Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/]==4) || Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/]==6) || Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/]==8){
}
elseif(Local_138.f_1801[bVar21 /*14*/].f_7==0){
}
elseif(func_205(Local_138.f_1801[bVar21 /*14*/].f_3, Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/].f_22)){
}
else{
Var43={
Local_138.f_1801[bVar21 /*14*/].f_3 
};
if(func_226(Local_138.f_2368.f_3[iVar22 /*14*/].f_3, Var43) < pow(0.35f, 2f)){
MISC::SET_BIT(&iVar32, bVar21);
bVar42=true;
iVar34++;
Var40={
func_193(Local_138.f_2368.f_3[iVar22 /*14*/].f_3) 
};
Var41={
func_193(Var43) 
};
Local_138.f_2368.f_3[iVar22 + 1 /*14*/]=5;
Local_138.f_2368.f_3[iVar22 + 1 /*14*/].f_1={
Local_138.f_2368.f_3[iVar22 /*14*/].f_3 
};
Local_138.f_2368.f_3[iVar22 + 1 /*14*/].f_3={
Var43 
};
Local_138.f_2368.f_3[iVar22 + 1 /*14*/].f_5={
Local_138.f_2368.f_3[iVar22 + 1 /*14*/].f_1 
};
Local_138.f_2368.f_3[iVar22 + 1 /*14*/].f_9=MISC::ATAN2((Var41.f_1 - Var40.f_1), (Var41.f_0 - Var40.f_0));
Local_138.f_2368.f_3[iVar22 + 1 /*14*/].f_11=NETWORK::GET_NETWORK_TIME();
Local_138.f_2368.f_3[iVar22 + 1 /*14*/].f_13=2;
Local_138.f_2368.f_3[iVar22 + 1 /*14*/].f_12=func_285();
if(IntToFloat(NETWORK::GET_NETWORK_TIME()) > (IntToFloat(Local_138.f_1801[bVar21 /*14*/].f_8) + (62f * func_286()))){
func_249(bVar21, -Local_138.f_2368.f_3[0 /*14*/].f_13);
}}else{
bVar21++;
}
if(!bVar42){
}else{
iVar22++;
}
func_284(Local_138.f_2368.f_3[0 /*14*/].f_3, iVar34);
if(Local_138.f_2368.f_324 !=Local_138.f_2368.f_325){
fVar44=0f;
if(Local_138.f_2368.f_324 > Local_138.f_2368.f_325){
fVar44=(-15f / 2f);
}else{
fVar44=(15f / 2f);
}
Var45={
func_90(func_183(func_193(Local_138.f_2368.f_3[0 /*14*/].f_1), func_193(Local_138.f_2368.f_3[0 /*14*/].f_3), fVar44)) 
};
bVar33=-1;
fVar35=3.402823E+38f;
bVar21=false;
while (bVar21 <=13){
if(MISC::IS_BIT_SET(iVar32, bVar21)){
}
elseif(Local_138.f_1801[bVar21 /*14*/]==-1){
}
elseif(((Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/]==5 || Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/]==3) || Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/]==4) || Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/]==6){
}
elseif(Local_138.f_1801[bVar21 /*14*/].f_7==0){
}
elseif(func_205(Local_138.f_1801[bVar21 /*14*/].f_3, Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/].f_22)){
}
else{
Var46={
Local_138.f_1801[bVar21 /*14*/].f_3 
};
iVar22=0;
while (iVar22 <=3){
Var19[iVar22 /*2*/]={
func_149(Var46, Local_138.f_753[Local_138.f_1801[bVar21 /*14*/] /*28*/].f_5[iVar22 /*2*/]) 
};
iVar22++;
}
iVar22=0;
while (iVar22 <=3){
iVar47=iVar22 + 1;
if(iVar47 >=4){
iVar47=0;
}
if(func_293(Local_138.f_2368.f_3[0 /*14*/].f_1, Var45, Var19[iVar22 /*2*/], Var19[iVar47 /*2*/], &Var20)){
fVar48=func_226(Local_138.f_2368.f_3[0 /*14*/].f_1, Var20);
if(fVar48 < fVar35){
fVar35=fVar48;
bVar33=bVar21;
Var36={
Var20 
};
}
}
iVar22++;
}
}
bVar21++;
}
if(bVar33 !=-1){
Var45={
Var36 
};
if(Local_138.f_753[Local_138.f_1801[bVar33 /*14*/] /*28*/] !=8){
if(IntToFloat(NETWORK::GET_NETWORK_TIME()) > (IntToFloat(Local_138.f_1801[bVar33 /*14*/].f_8) + (62f * func_286()))){
func_249(bVar33, -Local_138.f_2368.f_3[0 /*14*/].f_13);
}
}}}
iVar9=0;
while (iVar9 <=14){
if(Local_138.f_1998[iVar9 /*14*/].f_11==-2147483647){
}elseif(NETWORK::GET_NETWORK_TIME() > (Local_138.f_1998[iVar9 /*14*/].f_11 + Local_138.f_1734[Local_138.f_1998[iVar9 /*14*/] /*5*/].f_2)){
}elseif(func_205(Local_138.f_1998[iVar9 /*14*/].f_5, func_91(0.0001f, 0.0001f))){
}else{
fVar24=MISC::ABSF((Local_138.f_2368.f_321 - Local_138.f_1998[iVar9 /*14*/].f_5));
fVar25=MISC::ABSF((Local_138.f_2368.f_321.f_1 - Local_138.f_1998[iVar9 /*14*/].f_5.f_1));
if(fVar24 <=(0.104167f + Local_138.f_1734[Local_138.f_1998[iVar9 /*14*/] /*5*/].f_3) && fVar25 <=(0.12963f + Local_138.f_1734[Local_138.f_1998[iVar9 /*14*/] /*5*/].f_3.f_1)){
bVar49=false;
iVar22=0;
while (iVar22 <=3){
iVar50=iVar22 + 1;
if(iVar50 >=4){
iVar50=0;
}
if(func_293(Var14[iVar9 /*9*/][0 /*2*/], Var14[iVar9 /*9*/][2 /*2*/], Var2[iVar22 /*2*/], Var2[iVar50 /*2*/], &Var20) || func_293(Var14[iVar9 /*9*/][1 /*2*/], Var14[iVar9 /*9*/][3 /*2*/], Var2[iVar22 /*2*/], Var2[iVar50 /*2*/], &Var20)){
func_287(-Local_138.f_1998[iVar9 /*14*/].f_13);
func_227(Var20, 0);
Local_138.f_1998[iVar9 /*14*/].f_11=-2147483647;
if(Local_138.f_1998[iVar9 /*14*/]==1){
func_228("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_138.f_1998[iVar9 /*14*/].f_5);
}
else{
func_228("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_138.f_1998[iVar9 /*14*/].f_5);
}
bVar49=true;
}
else{
iVar22++;
}
}
if(bVar49){
}
else{
fVar24=MISC::ABSF(((Local_138.f_2368.f_321 + 0.0075f) - Local_138.f_1998[iVar9 /*14*/].f_5));
fVar25=MISC::ABSF(((Local_138.f_2368.f_321.f_1 + -0.055f) - Local_138.f_1998[iVar9 /*14*/].f_5.f_1));
if(fVar24 <=(0.104167f + Local_138.f_1734[Local_138.f_1998[iVar9 /*14*/] /*5*/].f_3) && fVar25 <=(0.059259f + Local_138.f_1734[Local_138.f_1998[iVar9 /*14*/] /*5*/].f_3.f_1)){
bVar51=false;
iVar22=0;
while (iVar22 <=2){
iVar52=iVar22 + 1;
if(iVar52 > 2){
iVar52=0;
}
if(func_293(Var14[iVar9 /*9*/][0 /*2*/], Var14[iVar9 /*9*/][2 /*2*/], Var4[iVar22 /*2*/], Var4[iVar52 /*2*/], &Var20) || func_293(Var14[iVar9 /*9*/][1 /*2*/], Var14[iVar9 /*9*/][3 /*2*/], Var4[iVar22 /*2*/], Var4[iVar52 /*2*/], &Var20)){
func_287(-Local_138.f_1998[iVar9 /*14*/].f_13);
func_227(Var20, 0);
Local_138.f_1998[iVar9 /*14*/].f_11=-2147483647;
if(Local_138.f_1998[iVar9 /*14*/]==1){
func_228("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_138.f_1998[iVar9 /*14*/].f_5);
}
else{
func_228("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_138.f_1998[iVar9 /*14*/].f_5);
}
bVar51=true;
}
else{
iVar22++;
}
}
if(bVar51){
}
else{
iVar53=0;
iVar53=0;
while (iVar53 <=19){
if(Local_138.f_2368.f_3[iVar53 /*14*/].f_11==-2147483647){
}
elseif(NETWORK::GET_NETWORK_TIME() > (Local_138.f_2368.f_3[iVar53 /*14*/].f_11 + Local_138.f_1734[Local_138.f_2368.f_3[iVar53 /*14*/] /*5*/].f_2)){
}
elseif(Local_138.f_2368.f_3[iVar53 /*14*/]==5){
if(func_293(Local_138.f_2368.f_3[iVar53 /*14*/].f_1, Local_138.f_2368.f_3[iVar53 /*14*/].f_3, Var14[iVar9 /*9*/][0 /*2*/], Var14[iVar9 /*9*/][2 /*2*/], &Var20) || func_293(Local_138.f_2368.f_3[iVar53 /*14*/].f_1, Local_138.f_2368.f_3[iVar53 /*14*/].f_3, Var14[iVar9 /*9*/][1 /*2*/], Var14[iVar9 /*9*/][3 /*2*/], &Var20)){
Local_138.f_1998[iVar9 /*14*/].f_11=-2147483647;
func_227(Var20, 0);
if(Local_138.f_1998[iVar9 /*14*/]==1){
func_228("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_138.f_1998[iVar9 /*14*/].f_5);
}
else{
func_228("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_138.f_1998[iVar9 /*14*/].f_5);
}
}
else{
Jump @7678;
//curOff=7009if(func_205(Local_138.f_2368.f_3[iVar53 /*14*/].f_5, func_91(0.0001f, 0.0001f))){
}
else{
fVar24=MISC::ABSF((Local_138.f_1998[iVar9 /*14*/].f_5 - Local_138.f_2368.f_3[iVar53 /*14*/].f_5));
fVar25=MISC::ABSF((Local_138.f_1998[iVar9 /*14*/].f_5.f_1 - Local_138.f_2368.f_3[iVar53 /*14*/].f_5.f_1));
Var54={
func_283(Local_138.f_2368.f_3[iVar53 /*14*/].f_5, Local_138.f_2368.f_3[iVar53 /*14*/].f_7, Local_138.f_1734[Local_138.f_2368.f_3[iVar53 /*14*/] /*5*/].f_3) 
};
Var55={
func_283(Local_138.f_1998[iVar9 /*14*/].f_5, Local_138.f_1998[iVar9 /*14*/].f_7, Local_138.f_1734[Local_138.f_1998[iVar9 /*14*/] /*5*/].f_3) 
};
if(((fVar24 <=Var54.f_0 && fVar25 <=Var54.f_1) && fVar24 <=Var55.f_0) && fVar25 <=Var55.f_1){
if(((func_293(Var6[iVar53 /*9*/][0 /*2*/], Var6[iVar53 /*9*/][2 /*2*/], Var14[iVar9 /*9*/][0 /*2*/], Var14[iVar9 /*9*/][2 /*2*/], &Var20) || func_293(Var6[iVar53 /*9*/][1 /*2*/], Var6[iVar53 /*9*/][3 /*2*/], Var14[iVar9 /*9*/][1 /*2*/], Var14[iVar9 /*9*/][3 /*2*/], &Var20)) || func_293(Var6[iVar53 /*9*/][0 /*2*/], Var6[iVar53 /*9*/][2 /*2*/], Var14[iVar9 /*9*/][1 /*2*/], Var14[iVar9 /*9*/][3 /*2*/], &Var20)) || func_293(Var6[iVar53 /*9*/][1 /*2*/], Var6[iVar53 /*9*/][3 /*2*/], Var14[iVar9 /*9*/][0 /*2*/], Var14[iVar9 /*9*/][2 /*2*/], &Var20)){
Local_138.f_2368.f_3[iVar53 /*14*/].f_11=-2147483647;
Local_138.f_1998[iVar9 /*14*/].f_11=-2147483647;
func_227(Var20, 0);
if(Local_138.f_1998[iVar9 /*14*/]==1){
func_228("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_138.f_1998[iVar9 /*14*/].f_5);
}
else{
func_228("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_138.f_1998[iVar9 /*14*/].f_5);
}
func_228(func_230(Local_138.f_2368.f_3[iVar53 /*14*/]), "dlc_vw_am_ip_tank_sounds", Local_138.f_2368.f_3[iVar53 /*14*/].f_5);
}
else{
iVar53++;
}
iVar9++;
}


struct<2> func_283(struct<2> Param0, struct<2> Param1, struct<2> Param2){
struct<2> Var0;
float fVar1;
float fVar2;
fVar1=MISC::ABSF((Param0.f_0 - Param1.f_0));
fVar2=MISC::ABSF((Param0.f_1 - Param1.f_1));
Var0={
func_91((fVar1 + Param2.f_0), (fVar2 + Param2.f_1)) 
};
return Var0;
}


void func_284(struct<2> Param0, int iParam1){
float fVar0;
fVar0=func_229(Param0);
if(AUDIO::HAS_SOUND_FINISHED(Local_138.f_2368.f_341)){
AUDIO::PLAY_SOUND_FRONTEND(Local_138.f_2368.f_341, "Tank_Weapon_Lightning_Gun_Fire_Hit", "dlc_vw_am_ip_tank_sounds", 0);
}
AUDIO::SET_VARIABLE_ON_SOUND(Local_138.f_2368.f_341, "Screen_Position", fVar0);
AUDIO::SET_VARIABLE_ON_SOUND(Local_138.f_2368.f_341, "TargetsHit", to_float(iParam1));
}

int func_285(){
switch (Local_138.f_2368.f_2){
case 0:
return -1;
case 1:
return MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
case 2:
return 0;
case 3:
if(Local_138.f_2368.f_3[0 /*14*/].f_12 >=Local_138.f_1734[Local_138.f_2368.f_3[0 /*14*/] /*5*/].f_1 || Local_138.f_2368.f_3[0 /*14*/].f_12 < 0){
Local_138.f_2368.f_3[0 /*14*/].f_12=0;
}
return Local_138.f_2368.f_3[0 /*14*/].f_12;
default:
}
return 2147483647;
}


float func_286(){
if(Local_138.f_2871==4){
return 0.75f;
}
return 1f;
}


void func_287(int iParam0){
int iVar0;
int iVar1;
if(Local_138.f_2368==3 || Local_138.f_2368==4){
return;
}
if(iParam0 < 0){
if(Local_138.f_2368.f_334 + 750 > NETWORK::GET_NETWORK_TIME() || Local_138.f_2368.f_337 + 2000 > NETWORK::GET_NETWORK_TIME()){
return;
}
if(MISC::IS_BIT_SET(Local_138.f_2368.f_333, 0)){
MISC::CLEAR_BIT(&(Local_138.f_2368.f_333), false);
return;
}}
iVar0=func_214(Local_138.f_2368.f_331 > 1, 1, 0);
iVar1=func_155((Local_138.f_2368.f_331 + iParam0), iVar0, 20);
Local_138.f_2368.f_332=Local_138.f_2368.f_331;
Local_138.f_2368.f_331=iVar1;
if(iParam0 < 0){
Local_138.f_2368.f_321=(Local_138.f_2368.f_321 - 0.004166667f);
if(Local_138.f_2368.f_321 < 0.225f){
Local_138.f_2368.f_321=0.225f;
}
Local_138.f_2368.f_334=NETWORK::GET_NETWORK_TIME();
}elseif(iParam0 > 0){
Local_138.f_2368.f_335=NETWORK::GET_NETWORK_TIME();
}
if(iVar1==0){
Local_138.f_2368.f_330=(Local_138.f_2368.f_330 - 1);
Local_138.f_2368.f_319=0;
func_106(3);
func_233("Tank_Destroyed", &(Local_138.f_2368.f_343));
if(Local_138.f_2368.f_330 >=0){
func_53("Frontend_Player_Death");
}
Local_138.f_2368.f_327=NETWORK::GET_NETWORK_TIME();
func_107(0);
}}


void func_288(int iParam0, bool bParam1){
switch (Local_138.f_1801[iParam0 /*14*/]){
case 18:
if(Local_138.f_2368.f_2 !=1){
func_258("IAP_PU_FLAME");
func_107(1);
func_233("Tank_Weapon_Change", &(Local_138.f_2368.f_343));
}else{
func_258("IAP_PU_WAO");
func_126(1000, 1, func_91(-1f, -1f));
}
break;
case 19:
if(Local_138.f_2368.f_2 !=2){
func_258("IAP_PU_ROCKETS");
func_107(2);
func_233("Tank_Weapon_Change", &(Local_138.f_2368.f_343));
}else{
func_258("IAP_PU_WAO");
func_126(1000, 1, func_91(-1f, -1f));
}
break;
case 25:
if(Local_138.f_2368.f_2 !=3){
func_258("IAP_PU_PLASMA");
func_107(3);
func_233("Tank_Weapon_Change", &(Local_138.f_2368.f_343));
}else{
func_258("IAP_PU_WAO");
func_126(1000, 1, func_91(-1f, -1f));
}
break;
case 20:
if(Local_138.f_2368.f_331==20){
func_258("IAP_PU_HPO");
Local_138.f_2368.f_330++;
}else{
func_258("IAP_PU_HP");
func_287(4);
}
break;
case 21:
func_258("IAP_PU_1UP");
Local_138.f_2368.f_330++;
break;
case 24:
func_258("IAP_PU_ARMOR");
func_287(-4);
break;
case 22:
func_258("IAP_PU_SCORE");
func_126(10000, 1, func_91(-1f, -1f));
break;
case 28:
func_228(func_292(Local_138.f_1801[iParam0 /*14*/]), "dlc_vw_am_ip_powerup_sounds", Local_138.f_1801[iParam0 /*14*/].f_3);
Local_138.f_1801[iParam0 /*14*/]=func_291(iParam0);
func_288(iParam0, 1);
return;
case 23:
func_258("IAP_PU_SHIELD");
if(!MISC::IS_BIT_SET(Local_138.f_2368.f_333, 0)){
MISC::SET_BIT(&(Local_138.f_2368.f_333), false);
}else{
func_258("IAP_PU_SAO");
func_126(1000, 1, func_91(-1f, -1f));
}
break;
case 26:
if(Local_138.f_2368.f_2==0 && !func_290()){
func_258("IAP_PU_TRIPLE");
MISC::SET_BIT(&(Local_138.f_2368.f_333), true);
func_233("Tank_Weapon_Change", &(Local_138.f_2368.f_343));
}else{
func_258("IAP_PU_WAO");
func_126(1000, 1, func_91(-1f, -1f));
}
break;
case 27:
func_258("IAP_PU_NUKE");
func_289();
break;
}
Local_138.f_2712.f_1++;
Local_138.f_2712.f_2++;
if(Local_138.f_2368.f_330 > 99){
Local_138.f_2368.f_330=99;
}
if(!bParam1){
func_228(func_292(Local_138.f_1801[iParam0 /*14*/]), "dlc_vw_am_ip_powerup_sounds", Local_138.f_1801[iParam0 /*14*/].f_3);
}}


void func_289(){
func_228("Tank_Weapon_Nuke_Blast", "dlc_vw_am_ip_tank_sounds", func_91(0.5f, 0.5f));
func_122(&(Local_138.f_2892), 0, 0);
}

int func_290(){
if(func_17()){
return 1;
}
return MISC::IS_BIT_SET(Local_138.f_2368.f_333, 1);
}


var func__291(int iParam0){
int iVar0[11];
int iVar1;
var uVar2;
iVar1=0;
if(Local_138.f_1801[iParam0 /*14*/].f_11 & 1==0 && Local_138.f_2368.f_2 !=1){
iVar0[iVar1]=18;
iVar1++;
}
if(Local_138.f_1801[iParam0 /*14*/].f_11 & 2==0 && Local_138.f_2368.f_2 !=2){
iVar0[iVar1]=19;
iVar1++;
}
if(Local_138.f_1801[iParam0 /*14*/].f_11 & 4==0 && Local_138.f_2368.f_331 < 20){
iVar0[iVar1]=20;
iVar1++;
}
if(Local_138.f_1801[iParam0 /*14*/].f_11 & 8==0){
iVar0[iVar1]=21;
iVar1++;
}
if(Local_138.f_1801[iParam0 /*14*/].f_11 & 16==0){
iVar0[iVar1]=22;
iVar1++;
}
if(Local_138.f_1801[iParam0 /*14*/].f_11 & 32==0 && !MISC::IS_BIT_SET(Local_138.f_2368.f_333, 0)){
iVar0[iVar1]=23;
iVar1++;
}
if(Local_138.f_1801[iParam0 /*14*/].f_11 & 64==0){
iVar0[iVar1]=24;
iVar1++;
}
if(Local_138.f_1801[iParam0 /*14*/].f_11 & 128==0 && Local_138.f_2368.f_2 !=3){
iVar0[iVar1]=25;
iVar1++;
}
if((Local_138.f_1801[iParam0 /*14*/].f_11 & 256==0 && Local_138.f_2368.f_2==0) && !func_290()){
iVar0[iVar1]=26;
iVar1++;
}
if(Local_138.f_1801[iParam0 /*14*/].f_11 & 512==0 && !func_173()){
iVar0[iVar1]=27;
iVar1++;
}
uVar2=iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1)];
return uVar2;
}


char* func_292(int iParam0){
switch (iParam0){
case 18:
return "Powerup_Crate_Collect_Flamethrower";
case 19:
return "Powerup_Crate_Collect_Rockets";
case 25:
return "Powerup_Crate_Collect_Beam";
case 26:
return "Powerup_Crate_Collect_Triple_Shot";
case 20:
case 21:
return "Powerup_Crate_Collect_Armour";
case 24:
return "Powerup_Crate_Collect_Negative";
case 27:
return "Powerup_Crate_Collect_Nuke";
case 23:
return "Powerup_Crate_Collect_Shield";
case 22:
case 28:
return "Powerup_Crate_Collect_Other";
default:
}
return "";
}

int func_293(struct<2> Param0, struct<2> Param1, struct<2> Param2, struct<2> Param3, var uParam4){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
struct<2> Var9;
fVar0=(Param1.f_1 - Param0.f_1);
fVar1=(Param0.f_0 - Param1.f_0);
fVar2=((fVar0 * Param0.f_0) + (fVar1 * Param0.f_1));
fVar3=(Param3.f_1 - Param2.f_1);
fVar4=(Param2.f_0 - Param3.f_0);
fVar5=((fVar3 * Param2.f_0) + (fVar4 * Param2.f_1));
fVar6=((fVar0 * fVar4) - (fVar3 * fVar1));
if(!func_191(fVar6, (0f - 0.0001f), (0f + 0.0001f))){
fVar7=(((fVar4 * fVar2) - (fVar1 * fVar5)) / fVar6);
fVar8=(((fVar0 * fVar5) - (fVar3 * fVar2)) / fVar6);
Var9={
func_91(fVar7, fVar8) 
};
if(((((((func_294((Param0.f_0 - 0.001f), (Param1.f_0 - 0.001f)) <=Var9.f_0 && Var9.f_0 <=func_295((Param0.f_0 + 0.001f), (Param1.f_0 + 0.001f))) && func_294((Param0.f_1 - 0.001f), (Param1.f_1 - 0.001f)) <=Var9.f_1) && Var9.f_1 <=func_295((Param0.f_1 + 0.001f), (Param1.f_1 + 0.001f))) && func_294((Param2.f_0 - 0.001f), (Param3.f_0 - 0.001f)) <=Var9.f_0) && Var9.f_0 <=func_295((Param2.f_0 + 0.001f), (Param3.f_0 + 0.001f))) && func_294((Param2.f_1 - 0.001f), (Param3.f_1 - 0.001f)) <=Var9.f_1) && Var9.f_1 <=func_295((Param2.f_1 + 0.001f), (Param3.f_1 + 0.001f))){
*uParam4={
Var9 
};
return 1;
}}
*uParam4={
func_91(3.402823E+38f, 3.402823E+38f) 
};
return 0;
}


float func_294(float fParam0, float fParam1){
if(fParam0 > fParam1){
return fParam1;
}
return fParam0;
}


float func_295(float fParam0, float fParam1){
if(fParam0 > fParam1){
return fParam0;
}
return fParam1;
}


void func_296(){
int iVar0;
float fVar1;
float fVar2;
iVar0=0;
while (iVar0 <=14){
if(Local_138.f_1998[iVar0 /*14*/].f_11==-2147483647){
}elseif(NETWORK::GET_NETWORK_TIME() > (Local_138.f_1998[iVar0 /*14*/].f_11 + Local_138.f_1734[Local_138.f_1998[iVar0 /*14*/] /*5*/].f_2)){
}else{
if(func_173()){
func_227(Local_138.f_1998[iVar0 /*14*/].f_5, 0);
if(Local_138.f_1998[iVar0 /*14*/]==1){
func_228("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_138.f_1998[iVar0 /*14*/].f_5);
}else{
func_228("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_138.f_1998[iVar0 /*14*/].f_5);
}
Local_138.f_1998[iVar0 /*14*/].f_11=-2147483647;
}
if(Local_138.f_1734[Local_138.f_1998[iVar0 /*14*/] /*5*/].f_1 > 0){
Local_138.f_1998[iVar0 /*14*/].f_12=(Local_138.f_1998[iVar0 /*14*/].f_12 + Local_138.f_2875);
if(Local_138.f_1998[iVar0 /*14*/].f_12 >=Local_138.f_1734[Local_138.f_1998[iVar0 /*14*/] /*5*/].f_1){
Local_138.f_1998[iVar0 /*14*/].f_12=0;
}}
fVar1=(to_float((NETWORK::GET_NETWORK_TIME() - Local_138.f_1998[iVar0 /*14*/].f_11)) / IntToFloat(Local_138.f_1734[Local_138.f_1998[iVar0 /*14*/] /*5*/].f_2));
Local_138.f_1998[iVar0 /*14*/].f_7={
Local_138.f_1998[iVar0 /*14*/].f_5 
};
Local_138.f_1998[iVar0 /*14*/].f_5={
func_165(Local_138.f_1998[iVar0 /*14*/].f_1, Local_138.f_1998[iVar0 /*14*/].f_3, fVar1) 
};
if(Local_138.f_1998[iVar0 /*14*/].f_3.f_1 >=Local_138.f_1998[iVar0 /*14*/].f_1.f_1){
fVar2=func_219(Local_138.f_1998[iVar0 /*14*/].f_5, 0);
if(Local_138.f_1998[iVar0 /*14*/].f_5.f_1 > fVar2){
func_227(Local_138.f_1998[iVar0 /*14*/].f_5, 0);
if(Local_138.f_1998[iVar0 /*14*/]==1){
func_228("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_138.f_1998[iVar0 /*14*/].f_5);
}else{
func_228("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_138.f_1998[iVar0 /*14*/].f_5);
}
Local_138.f_1998[iVar0 /*14*/].f_11=-2147483647;
}}}
iVar0++;
}}


void func_297(){
int iVar0;
int iVar1;
if(func_307()){
func_278();
return;
}
iVar0=223;
iVar1=229;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
iVar0=237;
iVar1=70;
}
if(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar0) || (iVar1 !=363 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar1))){
func_298(Local_138.f_2368.f_2==0);
}elseif(PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar0) || (iVar1 !=363 && PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar1))){
func_298(0);
}elseif(Local_138.f_2368.f_338 > -1){
func_278();
}}


void func_298(bool bParam0){
struct<2> Var0;
struct<2> Var1;
if(func_306()){
func_305();
}
if(!bParam0 && NETWORK::GET_NETWORK_TIME() < (Local_138.f_2368.f_285 + func_304())){
return;
}
if(Local_138.f_2368.f_2==3){
Local_138.f_2368.f_284=0;
}
func_302(&Var0, &Var1);
Local_138.f_2368.f_3[Local_138.f_2368.f_284 /*14*/]=func_301();
Local_138.f_2368.f_3[Local_138.f_2368.f_284 /*14*/].f_1={
Var0 
};
Local_138.f_2368.f_3[Local_138.f_2368.f_284 /*14*/].f_3={
Var1 
};
Local_138.f_2368.f_3[Local_138.f_2368.f_284 /*14*/].f_5={
Var0 
};
Local_138.f_2368.f_3[Local_138.f_2368.f_284 /*14*/].f_9=(IntToFloat(Local_138.f_2368.f_325) * -15f);
Local_138.f_2368.f_3[Local_138.f_2368.f_284 /*14*/].f_13=func_300();
Local_138.f_2368.f_3[Local_138.f_2368.f_284 /*14*/].f_12=func_285();
Local_138.f_2368.f_3[Local_138.f_2368.f_284 /*14*/].f_11=NETWORK::GET_NETWORK_TIME();
Local_138.f_2368.f_285=NETWORK::GET_NETWORK_TIME();
if(Local_138.f_2368.f_2==1){
Local_138.f_2368.f_285=(Local_138.f_2368.f_285 + MISC::GET_RANDOM_INT_IN_RANGE(-10, 10));
}
func_105(1);
if(!func_306()){
func_233(func_299(), &(Local_138.f_2368.f_341));
}
Local_138.f_2368.f_284++;
if(Local_138.f_2368.f_284 >=20){
Local_138.f_2368.f_284=0;
}}


char* func_299(){
switch (Local_138.f_2368.f_2){
case 0:
return "Tank_Weapon_Main_Cannon_Fire";
case 1:
return "Tank_Weapon_Flamethrower_Fire_Loop";
case 2:
return "Tank_Weapon_Rocket_Fire";
case 3:
return "Tank_Weapon_Lightning_Gun_Fire_Loop";
default:
}
return "";
}

int func_300(){
switch (Local_138.f_2368.f_2){
case 0:
return 4;
case 1:
return 1;
case 2:
return 8;
case 3:
return 2;
default:
}
return 0;
}

int func_301(){
switch (Local_138.f_2368.f_2){
case 0:
return 0;
case 1:
return 3;
case 2:
return 4;
case 3:
return 5;
default:
}
return -1;
}


void func_302(var uParam0, var uParam1){
float fVar0;
fVar0=func_148(func_178(), -0.007407f, 0f);
switch (Local_138.f_2368.f_2){
case 0:
case 2:
*uParam0={
func_193(func_91((Local_138.f_2368.f_321 + 0.0075f), ((Local_138.f_2368.f_321.f_1 + -0.055f) + fVar0))) 
};
*uParam0={
func_183(*uParam0, func_149(*uParam0, func_193(func_91(0.061f, 0f))), (IntToFloat(Local_138.f_2368.f_325) * -15f)) 
};
*uParam1={
func_183(*uParam0, func_149(*uParam0, func_193(func_91(1f, 0f))), (IntToFloat(Local_138.f_2368.f_325) * -15f)) 
};
break;
case 1:
*uParam0={
func_193(func_91(((Local_138.f_2368.f_321 + 0.0075f) + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.0005f, 0.0005f)), (((Local_138.f_2368.f_321.f_1 + -0.055f) + fVar0) + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.0005f, 0.0005f)))) 
};
*uParam0={
func_183(*uParam0, func_149(*uParam0, func_193(func_91(0.061f, 0f))), ((IntToFloat(Local_138.f_2368.f_325) * -15f) + IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-5, 5)))) 
};
*uParam1={
func_183(*uParam0, func_149(*uParam0, func_193(func_91((0.15f + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.1f)), 0f))), (IntToFloat(Local_138.f_2368.f_325) * -15f)) 
};
break;
case 3:
*uParam0={
func_193(func_91((Local_138.f_2368.f_321 + 0.0075f), ((Local_138.f_2368.f_321.f_1 + -0.055f) + fVar0))) 
};
*uParam0={
func_183(*uParam0, func_149(*uParam0, func_193(func_91((0.061f / 1.5f), 0f))), (IntToFloat(Local_138.f_2368.f_325) * -15f)) 
};
*uParam1={
func_183(*uParam0, func_149(*uParam0, func_193(func_91(1f, 0f))), (IntToFloat(Local_138.f_2368.f_325) * -15f)) 
};
break;
}
*uParam0={
func_90(*uParam0) 
};
*uParam1={
func_90(*uParam1) 
};
if(Local_138.f_2368.f_2==3){
func_303(*uParam0, uParam1);
}}


void func_303(struct<2> Param0, var uParam1){
struct<2> Var0;
struct<2> Var1;
struct<2> Var2;
int iVar3;
float fVar4;
if(Local_138.f_2368.f_325 > 0){
return;
}
if(Param0.f_1 > func_219(Param0.f_0, 0)){
*uParam1={
Param0 
};
func_284(*uParam1, 1);
return;
}
Var0.f_0=(Local_138.f_2340.f_4[0] - (func_223(0) / 2f));
Var0.f_1=Local_138.f_3;
Var1={
Var0 
};
iVar3=0;
while (iVar3 <=(Local_138.f_745 - 1)){
if(Local_138.f_2340.f_12[iVar3]==1 && Local_138.f_1801[Local_138.f_2340.f_20[iVar3] /*14*/].f_11 & 1==0){
fVar4=Var1.f_0;
Var1.f_0=(Var1.f_0 + func_221());
if(func_293(Param0, *uParam1, Var0, Var1, &Var2)){
*uParam1={
Var2 
};
func_284(*uParam1, 1);
return;
}
Var0.f_1=1f;
Var1.f_0=(Var1.f_0 + ((func_222() - func_221()) - func_220()));
Var0.f_0=Var1.f_0;
Var1.f_1=Local_138.f_3;
if(func_293(Param0, *uParam1, Var0, Var1, &Var2)){
*uParam1={
Var2 
};
func_284(*uParam1, 1);
return;
}
Var0={
Var1 
};
Var1.f_0=(fVar4 + func_222());
Var0.f_0=(Var1.f_0 - func_220());
}elseif(Local_138.f_2340.f_12[iVar3]==2){
if(func_293(Param0, *uParam1, Var0, Var1, &Var2)){
*uParam1={
Var2 
};
func_284(*uParam1, 1);
return;
}
Var0={
Var1 
};
Var1.f_1=(((1f - 0.06944444f) - Local_138.f_753[func_208() /*28*/].f_22.f_1) + 0.03240715f);
if(func_293(Param0, *uParam1, Var0, Var1, &Var2)){
*uParam1={
Var2 
};
func_284(*uParam1, 1);
return;
}
Var0={
Var1 
};
Var1.f_0=(Var1.f_0 + func_223(iVar3));
if(func_293(Param0, *uParam1, Var0, Var1, &Var2)){
*uParam1={
Var2 
};
func_284(*uParam1, 1);
return;
}
Var1.f_1=Local_138.f_3;
Var0={
Var1 
};
}else{
Var1.f_0=(Var1.f_0 + func_223(iVar3));
}
iVar3++;
}
if(func_293(Param0, *uParam1, Var0, Var1, &Var2)){
*uParam1={
Var2 
};
func_284(*uParam1, 1);
}}

int func_304(){
switch (Local_138.f_2368.f_2){
case 0:
if(func_290()){
return 83;
}
return round((250f * func_286()));
case 1:
return round((50f * func_286()));
case 2:
return round((500f * func_286()));
case 3:
return 0;
default:
}
return 2147483647;
}


void func_305(){
float fVar0;
if(!func_306()){
if(!AUDIO::HAS_SOUND_FINISHED(Local_138.f_2368.f_338)){
AUDIO::STOP_SOUND(Local_138.f_2368.f_338);
AUDIO::RELEASE_SOUND_ID(Local_138.f_2368.f_338);
Local_138.f_2368.f_338=-1;
}
return;
}
if(Local_138.f_2368.f_338==-1){
Local_138.f_2368.f_338=AUDIO::GET_SOUND_ID();
}
if(AUDIO::HAS_SOUND_FINISHED(Local_138.f_2368.f_338)){
AUDIO::PLAY_SOUND_FRONTEND(Local_138.f_2368.f_338, func_299(), "dlc_vw_am_ip_tank_sounds", 0);
}
fVar0=func_229(Local_138.f_2368.f_321);
AUDIO::SET_VARIABLE_ON_SOUND(Local_138.f_2368.f_338, "Screen_Position", fVar0);
}

int func_306(){
switch (Local_138.f_2368.f_2){
case 1:
case 3:
return 1;
default:
}
return 0;
}

int func_307(){
if(Local_138.f_0 !=-1f && (Local_138.f_2872 / 0.164583f) >=Local_138.f_0){
return 1;
}
if(Local_138.f_2368.f_331 <=0){
return 1;
}
if(Local_138.f_2368==3){
return 1;
}
if(Local_138.f_2368==4){
return 1;
}
return 0;
}


void func_308(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
float fVar7;
float fVar8;
float fVar9;
float fVar10;
if(func_307()){
return;
}
iVar0=234;
iVar1=235;
iVar2=224;
iVar3=226;
iVar4=227;
iVar5=228;
iVar6=363;
fVar7=1f;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
iVar0=234;
iVar1=235;
iVar5=238;
iVar6=187;
iVar3=189;
iVar4=190;
iVar2=203;
fVar7=0.3f;
}
fVar8=PAD::GET_DISABLED_CONTROL_NORMAL(2, 218);
if(fVar8 < (-0.65f * fVar7) || (iVar0 !=363 && PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar0))){
func_311(0);
}elseif(fVar8 > (0.65f * fVar7) || (iVar1 !=363 && PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar1))){
func_311(1);
}elseif(Local_138.f_2368.f_323 > 0){
Local_138.f_2368.f_323=0;
fVar9=(Local_138.f_2873 / 10f);
if(Local_138.f_2368.f_339 > -1 && !AUDIO::HAS_SOUND_FINISHED(Local_138.f_2368.f_339)){
AUDIO::SET_VARIABLE_ON_SOUND(Local_138.f_2368.f_339, "TankSpeed", fVar9);
}}
if(PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar2)){
func_310();
}
fVar10=PAD::GET_DISABLED_CONTROL_NORMAL(2, 220);
if(iVar3 !=363 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar3)){
func_309(1, 1, 0);
}elseif(iVar4 !=363 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar4)){
func_309(-1, 1, 0);
}elseif((iVar3 !=363 && PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar3)) || fVar10 < (-0.65f * fVar7)){
func_309(1, 0, fVar10);
}elseif((iVar4 !=363 && PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar4)) || fVar10 > (0.65f * fVar7)){
func_309(-1, 0, fVar10);
}
if(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar5) || (iVar6 !=363 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar6))){
if(Local_138.f_2368.f_325 !=0){
func_233("Tank_Turret_Move", &(Local_138.f_2368.f_342));
}
Local_138.f_2368.f_325=0;
Local_138.f_2368.f_324=0;
}}


void func_309(int iParam0, bool bParam1, float fParam2){
int iVar0;
iVar0=100;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2) && (fParam2 > (0.65f * 0.3f) || fParam2 < (-0.65f * 0.3f))){
iVar0=50;
}
if(!bParam1){
if(NETWORK::GET_NETWORK_TIME() < (Local_138.f_2368.f_326 + iVar0)){
return;
}}
if(iParam0==0){
return;
}
Local_138.f_2368.f_324=Local_138.f_2368.f_325;
Local_138.f_2368.f_325=(Local_138.f_2368.f_325 + iParam0);
if(Local_138.f_2368.f_325 > 9){
Local_138.f_2368.f_325=9;
}elseif(Local_138.f_2368.f_325 < -1){
Local_138.f_2368.f_325=-1;
}else{
func_233("Tank_Turret_Move", &(Local_138.f_2368.f_342));
}
Local_138.f_2368.f_326=NETWORK::GET_NETWORK_TIME();
}


void func_310(){
if(Local_138.f_2368 !=0){
return;
}
if(NETWORK::GET_NETWORK_TIME() < Local_138.f_2368.f_327 + 100){
return;
}
func_106(1);
func_233("Tank_Jump", &(Local_138.f_2368.f_343));
Local_138.f_2368.f_327=NETWORK::GET_NETWORK_TIME();
Local_138.f_2368.f_328=Local_138.f_2368.f_321.f_1;
Local_138.f_2368.f_329=(Local_138.f_2368.f_321.f_1 + -0.25f);
}


void func_311(bool bParam0){
float fVar0;
float fVar1;
float fVar2;
if(Local_138.f_2368==2 && Local_138.f_2368.f_321.f_1 > Local_138.f_3){
return;
}
Local_138.f_2368.f_323=(Local_138.f_2368.f_323 + round((MISC::GET_FRAME_TIME() * 1000f)));
fVar0=(to_float(Local_138.f_2368.f_323) / 250f);
if(fVar0 > 1f){
fVar0=1f;
}
if(func_178()){
fVar0=1f;
}
fVar1=(0.15f * func_160(0f, 1f, fVar0, 1));
if(!bParam0){
fVar1=(fVar1 * -1f);
}
Local_138.f_2368.f_321=func_138(Local_138.f_2368.f_321, fVar1);
if(Local_138.f_2368.f_321 > 0.775f){
Local_138.f_2368.f_321=0.775f;
}elseif(Local_138.f_2368.f_321 < 0.225f){
Local_138.f_2368.f_321=0.225f;
}
fVar2=(Local_138.f_2873 / 10f);
if(bParam0){
fVar2=(fVar2 + func_164(fVar0, fVar2, 0.9f));
}else{
fVar2=(fVar2 - func_164(fVar0, fVar2, 0.9f));
}
if(Local_138.f_2368.f_339 > -1 && !AUDIO::HAS_SOUND_FINISHED(Local_138.f_2368.f_339)){
AUDIO::SET_VARIABLE_ON_SOUND(Local_138.f_2368.f_339, "TankSpeed", fVar2);
}}


void func_312(){
int iVar0;
float fVar1;
float fVar2;
float fVar3;
if(Local_138.f_2871 !=4){
Local_138.f_2340=func_138(Local_138.f_2340, -0.005f);
if(Local_138.f_2340 < (0.15625f - (Local_138.f_726 / 2f))){
Local_138.f_2340=(Local_138.f_2340 + Local_138.f_726);
}}
Local_138.f_2340.f_1=func_138(Local_138.f_2340.f_1, -0.01f);
if(Local_138.f_2340.f_1 < (0.15625f - (Local_138.f_731 / 2f))){
Local_138.f_2340.f_1=(Local_138.f_2340.f_1 + Local_138.f_731);
}
Local_138.f_2340.f_2=func_138(Local_138.f_2340.f_2, -0.02f);
if(Local_138.f_2340.f_2 < (0.15625f - (Local_138.f_736 / 2f))){
Local_138.f_2340.f_2=(Local_138.f_2340.f_2 + Local_138.f_736);
}
Local_138.f_2340.f_3=func_138(Local_138.f_2340.f_3, -0.04f);
if(Local_138.f_2340.f_3 < (0.15625f - (Local_138.f_741 / 2f))){
Local_138.f_2340.f_3=(Local_138.f_2340.f_3 + Local_138.f_741);
}
Local_138.f_2340.f_4[0]=func_138(Local_138.f_2340.f_4[0], -0.15f);
fVar1=func_223(0);
if(Local_138.f_2340.f_4[0] < (0.15625f - (fVar1 / 2f))){
Local_138.f_2340.f_4[0]=(Local_138.f_2340.f_4[0] + fVar1);
iVar0=0;
while (iVar0 <=(Local_138.f_745 - 1)){
if(iVar0 < (Local_138.f_745 - 1)){
if(Local_138.f_2340.f_12[iVar0] !=0 && Local_138.f_2340.f_12[iVar0 + 1]==0){
Local_138.f_2340.f_4[iVar0]=(Local_138.f_2340.f_4[iVar0] - ((func_222() - Local_138.f_746) / 2f));
}elseif(Local_138.f_2340.f_12[iVar0]==0 && Local_138.f_2340.f_12[iVar0 + 1] !=0){
Local_138.f_2340.f_4[iVar0]=(Local_138.f_2340.f_4[iVar0] + ((func_222() - Local_138.f_746) / 2f));
}
Local_138.f_2340.f_12[iVar0]=Local_138.f_2340.f_12[iVar0 + 1];
Local_138.f_2340.f_20[iVar0]=Local_138.f_2340.f_20[iVar0 + 1];
}else{
if(Local_138.f_2340.f_12[iVar0] !=0){
Local_138.f_2340.f_4[iVar0]=(Local_138.f_2340.f_4[iVar0] - ((func_222() - Local_138.f_746) / 2f));
}
Local_138.f_2340.f_12[iVar0]=0;
Local_138.f_2340.f_20[iVar0]=-1;
}
iVar0++;
}}
iVar0=1;
while (iVar0 <=(Local_138.f_745 - 1)){
fVar2=func_223(iVar0);
fVar3=func_223((iVar0 - 1));
Local_138.f_2340.f_4[iVar0]=((Local_138.f_2340.f_4[(iVar0 - 1)] + (fVar3 / 2f)) + (fVar2 / 2f));
iVar0++;
}
if(Local_138.f_2870 !=7){
return;
}
Local_138.f_2872=func_138(Local_138.f_2872, 0.15f);
func_313();
}


void func_313(){
int iVar0;
if(Local_138.f_2871 !=4){
return;
}
iVar0=floor((Local_138.f_2872 / 0.164583f));
if(iVar0 > Local_138.f_2905){
Local_138.f_2905=iVar0;
}
if(MISC::IS_BIT_SET(Local_138.f_2904, 3)){
return;
}
if(iVar0 < Global_262145.f_27447){
return;
}
func_130(27186, 1, -1);
func_131(250, 1, -1, 1);
MISC::SET_BIT(&(Local_138.f_2904), 3);
MISC::SET_BIT(&(Local_138.f_2904), 9);
func_129();
func_128("IAP_CH_2", Global_262145.f_27447, 7500);
}


void func_314(){
func_231();
func_215();
func_209();
func_316();
if(!func_315()){
return;
}
func_7(3);
func_8(7);
func_53("Frontend_Go");
}

int func_315(){
Local_138.f_2368.f_321=func_138(Local_138.f_2368.f_321, 0.15f);
if(Local_138.f_2368.f_321 < 0.3f){
return 0;
}
Local_138.f_2368.f_321=0.3f;
return 1;
}


void func_316(){
func_207();
func_176();
func_174();
func_140(0);
func_87();
func_85();
}


void func_317(){
if(!func_123(&(Local_138.f_2882))){
func_122(&(Local_138.f_2882), 0, 0);
}
func_209();
func_319();
if(!func_318()){
return;
}
if(!func_120(&(Local_138.f_2882), 10000, 0)){
return;
}
func_103(&(Local_138.f_2882));
func_12(func_13(2));
func_8(6);
AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_ip_in_menus_scene");
AUDIO::START_AUDIO_SCENE("dlc_vw_am_ip_in_gameplay_scene");
func_53("Frontend_Get_Ready");
}

int func_318(){
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(Local_138.f_2895, 0);
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(Local_138.f_2895)){
return 0;
}
return 1;
}


void func_319(){
func_170(&(Local_138.f_1765.f_4));
func_86(func_323(), func_322(), 0.5f, 0.5f, 0.6875f, 0.9481481f, 0f, Local_138.f_1765);
func_320();
func_87();
func_85();
}


void func_320(){
struct<2> Var0;
struct<2> Var1;
struct<4> Var2;
char cVar3[16];
switch (Local_138.f_2871){
case 0:
Var0={
func_91(0.016667f, 0.02963f) 
};
Var1={
func_91(0.542708f, 0.32963f) 
};
break;
case 1:
Var0={
func_91(0.158333f, 0.088889f) 
};
Var1={
func_91(0.602083f, 0.266667f) 
};
break;
case 2:
Var0={
func_91(0.075f, 0.088889f) 
};
Var1={
func_91(0.617708f, 0.322222f) 
};
break;
case 3:
Var0={
func_91(0.1f, 0.096296f) 
};
Var1={
func_91(0.384375f, 0.257407f) 
};
break;
case 4:
Var0={
func_91(0.208333f, 0.37037f) 
};
Var1={
func_91((0.504167f + (0.000520833f * 2f)), 0.416667f) 
};
break;
}
Var1={
func_149(Var1, func_91(-0.004166667f, 0.005555556f)) 
};
Var2={
Local_138.f_1765 
};
Var2.f_3=round(func_160(25f, 255f, MISC::ABSF(sin((to_float(MISC::GET_GAME_TIMER()) * 0.4f))), 4));
func_86(func_323(), func_321(), Var1.f_0, Var1.f_1, Var0.f_0, Var0.f_1, 0f, Var2);
if(LOCALIZATION::GET_CURRENT_LANGUAGE() !=0){
StringCopy(&cVar3, "IAP_STAGE_D_", 16);
StringIntConCat(&cVar3, Local_138.f_2871, 16);
HUD::BEGIN_TEXT_COMMAND_PRINT(&cVar3);
HUD::END_TEXT_COMMAND_PRINT(1, 1);
}}


char* func_321(){
switch (Local_138.f_2871){
case 0:
return "country_1";
case 1:
return "country_2";
case 2:
return "country_3";
case 3:
return "country_4";
case 4:
return "country_5";
default:
}
return "INVALID STAGE";
}


char* func_322(){
switch (Local_138.f_2871){
case 0:
return "mission_select_screen1";
case 1:
return "mission_select_screen2";
case 2:
return "mission_select_screen3";
case 3:
return "mission_select_screen4";
case 4:
return "mission_select_screen5";
default:
}
return "INVALID STAGE";
}


char* func_323(){
switch (Local_138.f_2871){
case 0:
case 1:
case 2:
case 3:
return "MpInvPersHud";
case 4:
return "MPInvPersCommon";
default:
}
return "INVALID STAGE";
}


void func_324(){
func_331();
func_330();
func_329();
func_327();
if(!func_63()){
return;
}
MISC::CLEAR_BIT(&(Local_138.f_2368.f_333), 9);
MISC::CLEAR_BIT(&(Local_138.f_2368.f_333), 10);
func_104();
func_12(func_13(6));
func_53("Frontend_Start");
func_7(2);
func_12(func_13(1));
func_326();
func_325(0);
func_8(5);
}


void func_325(bool bParam0){
if(bParam0){
StringCopy(&Local_137, "Street Crime:
Gang Wars Edition.", 64);
}else{
StringCopy(&Local_137, "Invade and Persuade II.", 64);
}
Local_137.f_16=0;
Local_137.f_17=0;
Local_137.f_18=0;
Local_137.f_19=NETWORK::GET_NETWORK_TIME_ACCURATE();
Local_137.f_20=0;
Local_137.f_21=0;
}


void func_326(){
GRAPHICS::STOP_BINK_MOVIE(Local_138.f_2880);
GRAPHICS::RELEASE_BINK_MOVIE(Local_138.f_2880);
}


void func_327(){
int iVar0;
if(Local_138.f_2908 !=-2147483647 && NETWORK::GET_NETWORK_TIME() > Local_138.f_2908){
Local_138.f_2908=-2147483647;
Local_138.f_2909=0;
}
iVar0=func_328();
if(iVar0==363){
return;
}
if(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar0)){
Local_138.f_2908=NETWORK::GET_NETWORK_TIME() + 600;
Local_138.f_2909++;
}
if(Local_138.f_2909 >=10){
Local_138.f_2907=1;
Local_138.f_2368.f_330=99;
func_53("Frontend_Retry");
Local_138.f_2908=-2147483647;
Local_138.f_2909=0;
}}

int func_328(){
switch (Local_138.f_2909){
case 0:
case 1:
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
return 188;
}else{
return 232;
}
break;
case 2:
case 3:
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
return 187;
}else{
return 233;
}
break;
case 4:
case 6:
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
return 189;
}else{
return 234;
}
break;
case 5:
case 7:
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
return 190;
}else{
return 235;
}
break;
case 8:
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
return 238;
}else{
return 225;
}
break;
case 9:
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
return 237;
}else{
return 223;
}
break;
}
return 363;
}


void func_329(){
if(MISC::IS_BIT_SET(Local_138.f_2368.f_333, 9)){
if(GRAPHICS::GET_BINK_MOVIE_TIME(Local_138.f_2880) >=95f){
func_12(func_13(6));
MISC::SET_BIT(&(Local_138.f_2368.f_333), 10);
MISC::CLEAR_BIT(&(Local_138.f_2368.f_333), 9);
}else{
MISC::CLEAR_BIT(&(Local_138.f_2368.f_333), 10);
}}
if(!MISC::IS_BIT_SET(Local_138.f_2368.f_333, 9) && MISC::IS_BIT_SET(Local_138.f_2368.f_333, 10)){
if(GRAPHICS::GET_BINK_MOVIE_TIME(Local_138.f_2880) >=99f || GRAPHICS::GET_BINK_MOVIE_TIME(Local_138.f_2880) <=1f){
func_12(func_13(0));
MISC::SET_BIT(&(Local_138.f_2368.f_333), 9);
}}}


void func_330(){
char cVar0[16];
MISC::SET_BIT(&(Local_138.f_2368.f_333), 2);
StringCopy(&cVar0, "IAP_H_TITLE", 16);
if(func_68()){
StringConCat(&cVar0, "_PS4", 16);
}elseif(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
StringConCat(&cVar0, "_PC", 16);
}
if(func_67(&cVar0)){
return;
}
func_9();
func_65(&cVar0);
}


void func_331(){
GRAPHICS::DRAW_BINK_MOVIE(Local_138.f_2880, 0.5f, 0.5f, (1f * fLocal_134), 1f, 0f, 255, 255, 255, 255);
if(LOCALIZATION::GET_CURRENT_LANGUAGE() !=0){
if(GRAPHICS::GET_BINK_MOVIE_TIME(Local_138.f_2880) < 30f){
HUD::BEGIN_TEXT_COMMAND_PRINT("IAP_INTRO");
HUD::END_TEXT_COMMAND_PRINT(1, 1);
}}
func_87();
func_85();
}


void func_332(){
float fVar0;
int iVar1;
if(!func_123(&(Local_138.f_2890))){
func_122(&(Local_138.f_2890), 0, 0);
}
if(!func_120(&(Local_138.f_2890), 3000, 0)){
fVar0=(to_float(func_172(&(Local_138.f_2890), 0, 0)) / 3000f);
iVar1=round(func_160(0f, 255f, fVar0, 4));
func_333(iVar1);
}else{
func_333(255);
}
if(!func_120(&(Local_138.f_2890), 4000, 0)){
return;
}
func_12(func_13(0));
MISC::SET_BIT(&(Local_138.f_2368.f_333), 9);
func_60();
func_8(4);
}


void func_333(int iParam0){
struct<4> Var0;
Var0.f_3=255;
func_170(&(Local_138.f_1765.f_4));
func_113(&Var0, 236, 109, 0, iParam0);
func_170(&Var0);
func_94(func_91(0.5f, 0.5f), func_91(0.658333f, 1f), Local_138.f_1765.f_4);
Var0={
Local_138.f_1765 
};
Var0.f_3=iParam0;
func_86("MpInvPersCommon", "ron_splash", 0.5f, 0.5f, 0.658333f, 1f, 0f, Var0);
func_87();
func_85();
}


void func_334(){
if(!func_335()){
return;
}
func_8(3);
}

int func_335(){
GRAPHICS::DRAW_BINK_MOVIE(Local_138.f_2879, 0.5f, 0.5f, (1f * fLocal_134), 1f, 0f, 255, 255, 255, 255);
func_87();
func_85();
if(GRAPHICS::GET_BINK_MOVIE_TIME(Local_138.f_2879) >=99f){
GRAPHICS::STOP_BINK_MOVIE(Local_138.f_2879);
GRAPHICS::RELEASE_BINK_MOVIE(Local_138.f_2879);
return 1;
}
return 0;
}


void func_336(){
if(!func_338()){
return;
}
func_337();
AUDIO::START_AUDIO_SCENE("dlc_vw_am_ip_in_menus_scene");
func_8(2);
}


void func_337(){
Local_138.f_2879=GRAPHICS::SET_BINK_MOVIE("_1992_DegenatronLogo_720_auto");
GRAPHICS::PLAY_BINK_MOVIE(Local_138.f_2879);
GRAPHICS::SET_BINK_SHOULD_SKIP(Local_138.f_2879, 1);
func_53("Frontend_Degenatron_Screen");
}

int func_338(){
if(!func_339()){
return 0;
}
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_16(), 0);
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(func_16())){
return 0;
}
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPInvPersHud", 0);
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPInvPersHud")){
return 0;
}
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPInvPersMessages", 0);
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPInvPersMessages")){
return 0;
}
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPInvPersMessages2", 0);
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPInvPersMessages2")){
return 0;
}
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MpInvPersCommon", 0);
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MpInvPersCommon")){
return 0;
}
HUD::REQUEST_ADDITIONAL_TEXT("IAP", 3);
if(!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("IAP", 3)){
return 0;
}
if(!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_VINEWOOD/DLC_VW_AM_IP", 0, -1)){
return 0;
}
return 1;
}


bool func_339(){
return ((((((func_340(0) && func_340(6)) && func_340(1)) && func_340(3)) && func_340(4)) && func_340(5)) && func_340(7));
}

int func_340(int iParam0){
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_92(iParam0), 0);
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(func_92(iParam0))){
return 0;
}
return 1;
}


void func_341(){
func_351();
func_350(1);
func_348();
func_347();
func_346();
func_345();
func_342();
func_7(1);
func_8(1);
}


void func_342(){
if(func_344(253, -1)){
MISC::SET_BIT(&(Local_138.f_2904), false);
}
if(func_344(248, -1)){
MISC::SET_BIT(&(Local_138.f_2904), true);
}
if(func_344(249, -1)){
MISC::SET_BIT(&(Local_138.f_2904), 2);
}
if(func_344(250, -1)){
MISC::SET_BIT(&(Local_138.f_2904), 3);
}
if(func_344(251, -1)){
MISC::SET_BIT(&(Local_138.f_2904), 4);
}
if(func_344(252, -1)){
MISC::SET_BIT(&(Local_138.f_2904), 5);
}
Local_138.f_2905=func_343(8359, -1);
}

int func_343(int iParam0, int iParam1){
var uVar0;
var uVar1;
if(iParam0 !=14385){
uVar0=func_277(iParam0, iParam1);
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_344(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=func_132(iParam0, iParam1);
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


void func_345(){
func_113(&(Local_138.f_1765), 255, 255, 255, 255);
func_113(&(Local_138.f_1765.f_4), 0, 0, 0, 255);
func_113(&(Local_138.f_1765.f_8), 0, 255, 0, 255);
func_113(&(Local_138.f_1765.f_12), 255, 0, 0, 255);
func_113(&(Local_138.f_1765.f_16), 24, 203, 247, 255);
func_113(&(Local_138.f_1765.f_20), 27, 37, 27, 255);
func_113(&(Local_138.f_1765.f_24), 255, 240, 127, 255);
func_113(&(Local_138.f_1765.f_28), 103, 115, 87, 255);
func_113(&(Local_138.f_1765.f_32), 154, 255, 0, 255);
}


void func_346(){
Local_138.f_2214.f_2[0 /*11*/][0]=1.5f;
Local_138.f_2214.f_2[0 /*11*/][1]=1f;
Local_138.f_2214.f_2[0 /*11*/][2]=0f;
Local_138.f_2214.f_2[0 /*11*/][3]=0f;
Local_138.f_2214.f_2[0 /*11*/][4]=1f;
Local_138.f_2214.f_2[0 /*11*/][5]=1f;
Local_138.f_2214.f_2[0 /*11*/][6]=1.5f;
Local_138.f_2214.f_2[0 /*11*/][7]=2f;
Local_138.f_2214.f_2[0 /*11*/][8]=2.5f;
Local_138.f_2214.f_2[0 /*11*/][9]=0.5f;
Local_138.f_2214.f_2[1 /*11*/][0]=1f;
Local_138.f_2214.f_2[1 /*11*/][1]=1.5f;
Local_138.f_2214.f_2[1 /*11*/][2]=0f;
Local_138.f_2214.f_2[1 /*11*/][3]=0f;
Local_138.f_2214.f_2[1 /*11*/][4]=0f;
Local_138.f_2214.f_2[1 /*11*/][5]=0f;
Local_138.f_2214.f_2[1 /*11*/][6]=0.75f;
Local_138.f_2214.f_2[1 /*11*/][7]=1.5f;
Local_138.f_2214.f_2[1 /*11*/][8]=2f;
Local_138.f_2214.f_2[1 /*11*/][9]=1f;
Local_138.f_2214.f_2[2 /*11*/][0]=0f;
Local_138.f_2214.f_2[2 /*11*/][1]=0.25f;
Local_138.f_2214.f_2[2 /*11*/][2]=0.75f;
Local_138.f_2214.f_2[2 /*11*/][3]=0f;
Local_138.f_2214.f_2[2 /*11*/][4]=0f;
Local_138.f_2214.f_2[2 /*11*/][5]=0f;
Local_138.f_2214.f_2[2 /*11*/][6]=0f;
Local_138.f_2214.f_2[2 /*11*/][7]=0f;
Local_138.f_2214.f_2[2 /*11*/][8]=0f;
Local_138.f_2214.f_2[2 /*11*/][9]=0f;
Local_138.f_2214.f_2[3 /*11*/][0]=0f;
Local_138.f_2214.f_2[3 /*11*/][1]=0.75f;
Local_138.f_2214.f_2[3 /*11*/][2]=0f;
Local_138.f_2214.f_2[3 /*11*/][3]=0.6f;
Local_138.f_2214.f_2[3 /*11*/][4]=0f;
Local_138.f_2214.f_2[3 /*11*/][5]=0f;
Local_138.f_2214.f_2[3 /*11*/][6]=0f;
Local_138.f_2214.f_2[3 /*11*/][7]=0f;
Local_138.f_2214.f_2[3 /*11*/][8]=0f;
Local_138.f_2214.f_2[3 /*11*/][9]=0f;
Local_138.f_2214.f_2[4 /*11*/][0]=0f;
Local_138.f_2214.f_2[4 /*11*/][1]=1f;
Local_138.f_2214.f_2[4 /*11*/][2]=0f;
Local_138.f_2214.f_2[4 /*11*/][3]=0f;
Local_138.f_2214.f_2[4 /*11*/][4]=40f;
Local_138.f_2214.f_2[4 /*11*/][5]=20f;
Local_138.f_2214.f_2[4 /*11*/][6]=1f;
Local_138.f_2214.f_2[4 /*11*/][7]=1.5f;
Local_138.f_2214.f_2[4 /*11*/][8]=2f;
Local_138.f_2214.f_2[4 /*11*/][9]=0f;
Local_138.f_2214.f_2[5 /*11*/][0]=0f;
Local_138.f_2214.f_2[5 /*11*/][1]=1f;
Local_138.f_2214.f_2[5 /*11*/][2]=0f;
Local_138.f_2214.f_2[5 /*11*/][3]=0f;
Local_138.f_2214.f_2[5 /*11*/][4]=20f;
Local_138.f_2214.f_2[5 /*11*/][5]=20f;
Local_138.f_2214.f_2[5 /*11*/][6]=1f;
Local_138.f_2214.f_2[5 /*11*/][7]=1.5f;
Local_138.f_2214.f_2[5 /*11*/][8]=2f;
Local_138.f_2214.f_2[5 /*11*/][9]=0f;
Local_138.f_2214.f_2[6 /*11*/][0]=1f;
Local_138.f_2214.f_2[6 /*11*/][1]=1f;
Local_138.f_2214.f_2[6 /*11*/][2]=0f;
Local_138.f_2214.f_2[6 /*11*/][3]=0f;
Local_138.f_2214.f_2[6 /*11*/][4]=2.5f;
Local_138.f_2214.f_2[6 /*11*/][5]=2.5f;
Local_138.f_2214.f_2[6 /*11*/][6]=50f;
Local_138.f_2214.f_2[6 /*11*/][7]=50f;
Local_138.f_2214.f_2[6 /*11*/][8]=50f;
Local_138.f_2214.f_2[6 /*11*/][9]=0.5f;
Local_138.f_2214.f_2[7 /*11*/][0]=1f;
Local_138.f_2214.f_2[7 /*11*/][1]=2f;
Local_138.f_2214.f_2[7 /*11*/][2]=0f;
Local_138.f_2214.f_2[7 /*11*/][3]=0f;
Local_138.f_2214.f_2[7 /*11*/][4]=2.5f;
Local_138.f_2214.f_2[7 /*11*/][5]=2.5f;
Local_138.f_2214.f_2[7 /*11*/][6]=50f;
Local_138.f_2214.f_2[7 /*11*/][7]=50f;
Local_138.f_2214.f_2[7 /*11*/][8]=50f;
Local_138.f_2214.f_2[7 /*11*/][9]=1f;
Local_138.f_2214.f_2[8 /*11*/][0]=1.5f;
Local_138.f_2214.f_2[8 /*11*/][1]=2f;
Local_138.f_2214.f_2[8 /*11*/][2]=0f;
Local_138.f_2214.f_2[8 /*11*/][3]=0f;
Local_138.f_2214.f_2[8 /*11*/][4]=2.5f;
Local_138.f_2214.f_2[8 /*11*/][5]=2.5f;
Local_138.f_2214.f_2[8 /*11*/][6]=40f;
Local_138.f_2214.f_2[8 /*11*/][7]=50f;
Local_138.f_2214.f_2[8 /*11*/][8]=60f;
Local_138.f_2214.f_2[8 /*11*/][9]=1.5f;
Local_138.f_2214.f_2[9 /*11*/][0]=0.5f;
Local_138.f_2214.f_2[9 /*11*/][1]=1.5f;
Local_138.f_2214.f_2[9 /*11*/][2]=0f;
Local_138.f_2214.f_2[9 /*11*/][3]=0f;
Local_138.f_2214.f_2[9 /*11*/][4]=0f;
Local_138.f_2214.f_2[9 /*11*/][5]=0f;
Local_138.f_2214.f_2[9 /*11*/][6]=1f;
Local_138.f_2214.f_2[9 /*11*/][7]=1.5f;
Local_138.f_2214.f_2[9 /*11*/][8]=2f;
Local_138.f_2214.f_2[9 /*11*/][9]=1.5f;
}


void func_347(){
Local_138.f_1734[0 /*5*/].f_1=0;
Local_138.f_1734[0 /*5*/].f_2=2000;
Local_138.f_1734[0 /*5*/]="tank_fire_blast";
Local_138.f_1734[0 /*5*/].f_3={
func_91(0.020833f, 0.011111f) 
};
Local_138.f_1734[1 /*5*/].f_1=8;
Local_138.f_1734[1 /*5*/].f_2=5000;
Local_138.f_1734[1 /*5*/]="oil_drum";
Local_138.f_1734[1 /*5*/].f_3={
func_91(0.054167f, 0.092593f) 
};
Local_138.f_1734[2 /*5*/].f_1=0;
Local_138.f_1734[2 /*5*/].f_2=2000;
Local_138.f_1734[2 /*5*/]="enemy_blast";
Local_138.f_1734[2 /*5*/].f_3={
func_91(0.027083f, 0.022222f) 
};
Local_138.f_1734[3 /*5*/].f_1=9;
Local_138.f_1734[3 /*5*/].f_2=800;
Local_138.f_1734[3 /*5*/]="fire_ball";
Local_138.f_1734[3 /*5*/].f_3={
func_91(0.035417f, 0.062963f) 
};
Local_138.f_1734[4 /*5*/].f_1=2;
Local_138.f_1734[4 /*5*/].f_2=6000;
Local_138.f_1734[4 /*5*/]="homing_rocket";
Local_138.f_1734[4 /*5*/].f_3={
func_91(0.0375f, 0.018519f) 
};
Local_138.f_1734[5 /*5*/].f_1=4;
Local_138.f_1734[5 /*5*/].f_2=0;
Local_138.f_1734[5 /*5*/]="plasma";
Local_138.f_1734[5 /*5*/].f_3={
func_91(0.025f, 0.044444f) 
};
}


void func_348(){
Local_138.f_753[0 /*28*/]=0;
Local_138.f_753[0 /*28*/].f_24="camel_idle";
Local_138.f_753[0 /*28*/].f_25=4;
Local_138.f_753[0 /*28*/].f_1=0.15f;
Local_138.f_753[0 /*28*/].f_2=-0.075926f;
Local_138.f_753[0 /*28*/].f_22={
func_91(0.108333f, 0.151852f) 
};
Local_138.f_753[0 /*28*/].f_3={
func_91(-0.017708f, -0.043f) 
};
Local_138.f_753[0 /*28*/].f_14=950;
Local_138.f_753[0 /*28*/].f_15=4;
Local_138.f_753[0 /*28*/].f_17=16;
Local_138.f_753[0 /*28*/].f_16=2000;
Local_138.f_753[0 /*28*/].f_5[0 /*2*/]={
func_91(-0.003f, 0.069f) 
};
Local_138.f_753[0 /*28*/].f_5[1 /*2*/]={
func_91(-0.054f, -0.019f) 
};
Local_138.f_753[0 /*28*/].f_5[2 /*2*/]={
func_91(0.027f, -0.074f) 
};
Local_138.f_753[0 /*28*/].f_5[3 /*2*/]={
func_91(0.051f, 0.047f) 
};
Local_138.f_753[0 /*28*/].f_27=2;
Local_138.f_753[0 /*28*/].f_26="camel_fire";
Local_138.f_753[0 /*28*/].f_18=1;
func_349(0, 1, 0, 0, 0, 1);
Local_138.f_753[0 /*28*/].f_20="IAP_H_SHOOT";
Local_138.f_753[0 /*28*/].f_21=7500;
Local_138.f_753[1 /*28*/]=0;
Local_138.f_753[1 /*28*/].f_24="panda_idle";
Local_138.f_753[1 /*28*/].f_25=4;
Local_138.f_753[1 /*28*/].f_1=0.15f;
Local_138.f_753[1 /*28*/].f_2=-0.094444f;
Local_138.f_753[1 /*28*/].f_22={
func_91(0.089583f, 0.185185f) 
};
Local_138.f_753[1 /*28*/].f_3={
func_91(-0.026042f, -0.02037f) 
};
Local_138.f_753[1 /*28*/].f_14=950;
Local_138.f_753[1 /*28*/].f_15=4;
Local_138.f_753[1 /*28*/].f_17=16;
Local_138.f_753[1 /*28*/].f_16=2000;
Local_138.f_753[1 /*28*/].f_5[0 /*2*/]={
func_91(-0.03125f, 0.080556f) 
};
Local_138.f_753[1 /*28*/].f_5[1 /*2*/]={
func_91(0f, -0.08f) 
};
Local_138.f_753[1 /*28*/].f_5[2 /*2*/]={
func_91(0.035938f, -0.08f) 
};
Local_138.f_753[1 /*28*/].f_5[3 /*2*/]={
func_91(0.035938f, 0.080556f) 
};
Local_138.f_753[1 /*28*/].f_27=2;
Local_138.f_753[1 /*28*/].f_26="panda_fire";
Local_138.f_753[1 /*28*/].f_18=1;
func_349(1, 0, 0, 1, 0, 1);
Local_138.f_753[1 /*28*/].f_20=func_10();
Local_138.f_753[1 /*28*/].f_21=7500;
Local_138.f_753[2 /*28*/]=0;
Local_138.f_753[2 /*28*/].f_24="bear_idle";
Local_138.f_753[2 /*28*/].f_25=4;
Local_138.f_753[2 /*28*/].f_1=0.15f;
Local_138.f_753[2 /*28*/].f_2=-0.07037f;
Local_138.f_753[2 /*28*/].f_22={
func_91(0.104167f, 0.144444f) 
};
Local_138.f_753[2 /*28*/].f_3={
func_91(-0.032813f, -0.050926f) 
};
Local_138.f_753[2 /*28*/].f_14=950;
Local_138.f_753[2 /*28*/].f_15=4;
Local_138.f_753[2 /*28*/].f_17=16;
Local_138.f_753[2 /*28*/].f_16=2000;
Local_138.f_753[2 /*28*/].f_5[0 /*2*/]={
func_91(-0.046875f, 0.003704f) 
};
Local_138.f_753[2 /*28*/].f_5[1 /*2*/]={
func_91(0.005208f, -0.072222f) 
};
Local_138.f_753[2 /*28*/].f_5[2 /*2*/]={
func_91(0.05625f, 0.02037f) 
};
Local_138.f_753[2 /*28*/].f_5[3 /*2*/]={
func_91(-0.029167f, 0.07037f) 
};
Local_138.f_753[2 /*28*/].f_27=2;
Local_138.f_753[2 /*28*/].f_26="bear_fire";
Local_138.f_753[2 /*28*/].f_18=1;
func_349(2, 0, 1, 0, 0, 1);
Local_138.f_753[2 /*28*/].f_20=func_10();
Local_138.f_753[2 /*28*/].f_21=7500;
Local_138.f_753[3 /*28*/]=0;
Local_138.f_753[3 /*28*/].f_24="moose_idle";
Local_138.f_753[3 /*28*/].f_25=3;
Local_138.f_753[3 /*28*/].f_1=0.15f;
Local_138.f_753[3 /*28*/].f_2=-0.092593f;
Local_138.f_753[3 /*28*/].f_22={
func_91(0.108333f, 0.185185f) 
};
Local_138.f_753[3 /*28*/].f_3={
func_91(-0.025521f, -0.02037f) 
};
Local_138.f_753[3 /*28*/].f_14=950;
Local_138.f_753[3 /*28*/].f_15=4;
Local_138.f_753[3 /*28*/].f_17=16;
Local_138.f_753[3 /*28*/].f_16=2000;
Local_138.f_753[3 /*28*/].f_5[0 /*2*/]={
func_91(-0.053646f, -0.017593f) 
};
Local_138.f_753[3 /*28*/].f_5[1 /*2*/]={
func_91(-0.020313f, -0.092593f) 
};
Local_138.f_753[3 /*28*/].f_5[2 /*2*/]={
func_91(0.053646f, 0.013889f) 
};
Local_138.f_753[3 /*28*/].f_5[3 /*2*/]={
func_91(-0.020313f, 0.092593f) 
};
Local_138.f_753[3 /*28*/].f_27=2;
Local_138.f_753[3 /*28*/].f_26="moose_fire";
Local_138.f_753[3 /*28*/].f_18=1;
func_349(3, 0, 0, 0, 1, 1);
Local_138.f_753[3 /*28*/].f_20=func_10();
Local_138.f_753[3 /*28*/].f_21=7500;
Local_138.f_753[4 /*28*/]=1;
Local_138.f_753[4 /*28*/].f_24="jet_idle";
Local_138.f_753[4 /*28*/].f_25=4;
Local_138.f_753[4 /*28*/].f_1=0.25f;
Local_138.f_753[4 /*28*/].f_2=(0.15f + 0.06944444f);
Local_138.f_753[4 /*28*/].f_22={
func_91(0.16875f, 0.111111f) 
};
Local_138.f_753[4 /*28*/].f_3={
func_91(0.05f, 0.05f) 
};
Local_138.f_753[4 /*28*/].f_14=350;
Local_138.f_753[4 /*28*/].f_15=4;
Local_138.f_753[4 /*28*/].f_17=8;
Local_138.f_753[4 /*28*/].f_16=2500;
Local_138.f_753[4 /*28*/].f_5[0 /*2*/]={
func_91(-0.082f, 0.021f) 
};
Local_138.f_753[4 /*28*/].f_5[1 /*2*/]={
func_91(-0.04f, -0.022f) 
};
Local_138.f_753[4 /*28*/].f_5[2 /*2*/]={
func_91(0.089f, 0.003f) 
};
Local_138.f_753[4 /*28*/].f_5[3 /*2*/]={
func_91(0.038f, 0.049f) 
};
Local_138.f_753[4 /*28*/].f_18=2;
func_349(4, 1, 1, 1, 1, 1);
Local_138.f_753[4 /*28*/].f_20=func_10();
Local_138.f_753[4 /*28*/].f_21=7500;
Local_138.f_753[5 /*28*/]=2;
Local_138.f_753[5 /*28*/].f_24="pod_idle";
Local_138.f_753[5 /*28*/].f_25=4;
Local_138.f_753[5 /*28*/].f_1=0.175f;
Local_138.f_753[5 /*28*/].f_2=(0f + 0.06944444f);
Local_138.f_753[5 /*28*/].f_22={
func_91(0.089583f, 0.1f) 
};
Local_138.f_753[5 /*28*/].f_3={
func_91(-0.025f, 0.035185f) 
};
Local_138.f_753[5 /*28*/].f_14=700;
Local_138.f_753[5 /*28*/].f_15=4;
Local_138.f_753[5 /*28*/].f_17=4;
Local_138.f_753[5 /*28*/].f_16=1250;
Local_138.f_753[5 /*28*/].f_5[0 /*2*/]={
func_91((-0.16875f / 5f), (0.111111f / 4f)) 
};
Local_138.f_753[5 /*28*/].f_5[1 /*2*/]={
func_91((-0.16875f / 5f), (-0.111111f / 3f)) 
};
Local_138.f_753[5 /*28*/].f_5[2 /*2*/]={
func_91((0.16875f / 6f), (-0.111111f / 3f)) 
};
Local_138.f_753[5 /*28*/].f_5[3 /*2*/]={
func_91((0.16875f / 6f), (0.111111f / 4f)) 
};
Local_138.f_753[5 /*28*/].f_27=4;
Local_138.f_753[5 /*28*/].f_26="pod_fire";
Local_138.f_753[5 /*28*/].f_18=3;
func_349(5, 1, 1, 1, 1, 1);
Local_138.f_753[5 /*28*/].f_20="IAP_H_ROT";
Local_138.f_753[5 /*28*/].f_21=7500;
Local_138.f_753[18 /*28*/]=5;
Local_138.f_753[18 /*28*/].f_24="pickup_flame";
Local_138.f_753[18 /*28*/].f_25=0;
Local_138.f_753[18 /*28*/].f_1=0.15f;
Local_138.f_753[18 /*28*/].f_2=-0.031f;
Local_138.f_753[18 /*28*/].f_22={
func_91(0.04375f, 0.066667f) 
};
Local_138.f_753[18 /*28*/].f_17=1;
Local_138.f_753[18 /*28*/].f_5[0 /*2*/]={
func_91(-0.0238f, 0.035f) 
};
Local_138.f_753[18 /*28*/].f_5[1 /*2*/]={
func_91(-0.0238f, -0.035f) 
};
Local_138.f_753[18 /*28*/].f_5[2 /*2*/]={
func_91(0.0238f, -0.035f) 
};
Local_138.f_753[18 /*28*/].f_5[3 /*2*/]={
func_91(0.0238f, 0.035f) 
};
Local_138.f_753[18 /*28*/].f_18=4;
func_349(18, 1, 1, 1, 1, 1);
Local_138.f_753[18 /*28*/].f_20=func_10();
Local_138.f_753[18 /*28*/].f_21=7500;
Local_138.f_753[19 /*28*/]=5;
Local_138.f_753[19 /*28*/].f_24="pickup_rocket";
Local_138.f_753[19 /*28*/].f_25=0;
Local_138.f_753[19 /*28*/].f_1=0.15f;
Local_138.f_753[19 /*28*/].f_2=-0.031f;
Local_138.f_753[19 /*28*/].f_22={
func_91(0.04375f, 0.066667f) 
};
Local_138.f_753[19 /*28*/].f_17=1;
Local_138.f_753[19 /*28*/].f_5[0 /*2*/]={
func_91(-0.0238f, 0.035f) 
};
Local_138.f_753[19 /*28*/].f_5[1 /*2*/]={
func_91(-0.0238f, -0.035f) 
};
Local_138.f_753[19 /*28*/].f_5[2 /*2*/]={
func_91(0.0238f, -0.035f) 
};
Local_138.f_753[19 /*28*/].f_5[3 /*2*/]={
func_91(0.0238f, 0.035f) 
};
Local_138.f_753[19 /*28*/].f_18=4;
func_349(19, 1, 1, 1, 1, 1);
Local_138.f_753[19 /*28*/].f_20=func_10();
Local_138.f_753[19 /*28*/].f_21=7500;
Local_138.f_753[20 /*28*/]=5;
Local_138.f_753[20 /*28*/].f_24="pickup_health";
Local_138.f_753[20 /*28*/].f_25=0;
Local_138.f_753[20 /*28*/].f_1=0.15f;
Local_138.f_753[20 /*28*/].f_2=-0.031f;
Local_138.f_753[20 /*28*/].f_22={
func_91(0.04375f, 0.066667f) 
};
Local_138.f_753[20 /*28*/].f_17=1;
Local_138.f_753[20 /*28*/].f_5[0 /*2*/]={
func_91(-0.0238f, 0.035f) 
};
Local_138.f_753[20 /*28*/].f_5[1 /*2*/]={
func_91(-0.0238f, -0.035f) 
};
Local_138.f_753[20 /*28*/].f_5[2 /*2*/]={
func_91(0.0238f, -0.035f) 
};
Local_138.f_753[20 /*28*/].f_5[3 /*2*/]={
func_91(0.0238f, 0.035f) 
};
Local_138.f_753[20 /*28*/].f_18=5;
func_349(20, 1, 1, 1, 1, 1);
Local_138.f_753[20 /*28*/].f_20=func_10();
Local_138.f_753[20 /*28*/].f_21=7500;
Local_138.f_753[21 /*28*/]=5;
Local_138.f_753[21 /*28*/].f_24="pickup_life";
Local_138.f_753[21 /*28*/].f_25=0;
Local_138.f_753[21 /*28*/].f_1=0.15f;
Local_138.f_753[21 /*28*/].f_2=-0.031f;
Local_138.f_753[21 /*28*/].f_22={
func_91(0.04375f, 0.066667f) 
};
Local_138.f_753[21 /*28*/].f_17=1;
Local_138.f_753[21 /*28*/].f_5[0 /*2*/]={
func_91(-0.0238f, 0.035f) 
};
Local_138.f_753[21 /*28*/].f_5[1 /*2*/]={
func_91(-0.0238f, -0.035f) 
};
Local_138.f_753[21 /*28*/].f_5[2 /*2*/]={
func_91(0.0238f, -0.035f) 
};
Local_138.f_753[21 /*28*/].f_5[3 /*2*/]={
func_91(0.0238f, 0.035f) 
};
Local_138.f_753[21 /*28*/].f_18=4;
func_349(21, 1, 1, 1, 1, 1);
Local_138.f_753[21 /*28*/].f_20=func_10();
Local_138.f_753[21 /*28*/].f_21=7500;
Local_138.f_753[22 /*28*/]=5;
Local_138.f_753[22 /*28*/].f_24="pickup_score";
Local_138.f_753[22 /*28*/].f_25=0;
Local_138.f_753[22 /*28*/].f_1=0.15f;
Local_138.f_753[22 /*28*/].f_2=-0.031f;
Local_138.f_753[22 /*28*/].f_22={
func_91(0.04375f, 0.066667f) 
};
Local_138.f_753[22 /*28*/].f_17=1;
Local_138.f_753[22 /*28*/].f_5[0 /*2*/]={
func_91(-0.0238f, 0.035f) 
};
Local_138.f_753[22 /*28*/].f_5[1 /*2*/]={
func_91(-0.0238f, -0.035f) 
};
Local_138.f_753[22 /*28*/].f_5[2 /*2*/]={
func_91(0.0238f, -0.035f) 
};
Local_138.f_753[22 /*28*/].f_5[3 /*2*/]={
func_91(0.0238f, 0.035f) 
};
Local_138.f_753[22 /*28*/].f_18=5;
func_349(22, 1, 1, 1, 1, 1);
Local_138.f_753[22 /*28*/].f_20="IAP_H_PICKUP";
Local_138.f_753[22 /*28*/].f_21=7500;
Local_138.f_753[23 /*28*/]=5;
Local_138.f_753[23 /*28*/].f_24="pickup_shield";
Local_138.f_753[23 /*28*/].f_25=0;
Local_138.f_753[23 /*28*/].f_1=0.15f;
Local_138.f_753[23 /*28*/].f_2=-0.031f;
Local_138.f_753[23 /*28*/].f_22={
func_91(0.04375f, 0.066667f) 
};
Local_138.f_753[23 /*28*/].f_17=1;
Local_138.f_753[23 /*28*/].f_5[0 /*2*/]={
func_91(-0.0238f, 0.035f) 
};
Local_138.f_753[23 /*28*/].f_5[1 /*2*/]={
func_91(-0.0238f, -0.035f) 
};
Local_138.f_753[23 /*28*/].f_5[2 /*2*/]={
func_91(0.0238f, -0.035f) 
};
Local_138.f_753[23 /*28*/].f_5[3 /*2*/]={
func_91(0.0238f, 0.035f) 
};
Local_138.f_753[23 /*28*/].f_18=5;
func_349(23, 1, 1, 1, 1, 1);
Local_138.f_753[23 /*28*/].f_20=func_10();
Local_138.f_753[23 /*28*/].f_21=7500;
Local_138.f_753[24 /*28*/]=5;
Local_138.f_753[24 /*28*/].f_24="pickup_enemy";
Local_138.f_753[24 /*28*/].f_25=0;
Local_138.f_753[24 /*28*/].f_1=0.15f;
Local_138.f_753[24 /*28*/].f_2=-0.031f;
Local_138.f_753[24 /*28*/].f_22={
func_91(0.04375f, 0.066667f) 
};
Local_138.f_753[24 /*28*/].f_17=1;
Local_138.f_753[24 /*28*/].f_5[0 /*2*/]={
func_91(-0.0238f, 0.035f) 
};
Local_138.f_753[24 /*28*/].f_5[1 /*2*/]={
func_91(-0.0238f, -0.035f) 
};
Local_138.f_753[24 /*28*/].f_5[2 /*2*/]={
func_91(0.0238f, -0.035f) 
};
Local_138.f_753[24 /*28*/].f_5[3 /*2*/]={
func_91(0.0238f, 0.035f) 
};
Local_138.f_753[24 /*28*/].f_18=5;
func_349(24, 1, 1, 1, 1, 1);
Local_138.f_753[24 /*28*/].f_20=func_10();
Local_138.f_753[24 /*28*/].f_21=7500;
Local_138.f_753[25 /*28*/]=5;
Local_138.f_753[25 /*28*/].f_24="pickup_plasma";
Local_138.f_753[25 /*28*/].f_25=0;
Local_138.f_753[25 /*28*/].f_1=0.15f;
Local_138.f_753[25 /*28*/].f_2=-0.031f;
Local_138.f_753[25 /*28*/].f_22={
func_91(0.04375f, 0.066667f) 
};
Local_138.f_753[25 /*28*/].f_17=1;
Local_138.f_753[25 /*28*/].f_5[0 /*2*/]={
func_91(-0.0238f, 0.035f) 
};
Local_138.f_753[25 /*28*/].f_5[1 /*2*/]={
func_91(-0.0238f, -0.035f) 
};
Local_138.f_753[25 /*28*/].f_5[2 /*2*/]={
func_91(0.0238f, -0.035f) 
};
Local_138.f_753[25 /*28*/].f_5[3 /*2*/]={
func_91(0.0238f, 0.035f) 
};
Local_138.f_753[25 /*28*/].f_18=4;
func_349(25, 1, 1, 1, 1, 1);
Local_138.f_753[25 /*28*/].f_20=func_10();
Local_138.f_753[25 /*28*/].f_21=7500;
Local_138.f_753[26 /*28*/]=5;
Local_138.f_753[26 /*28*/].f_24="pickup_triple";
Local_138.f_753[26 /*28*/].f_25=0;
Local_138.f_753[26 /*28*/].f_1=0.15f;
Local_138.f_753[26 /*28*/].f_2=-0.031f;
Local_138.f_753[26 /*28*/].f_22={
func_91(0.04375f, 0.066667f) 
};
Local_138.f_753[26 /*28*/].f_17=1;
Local_138.f_753[26 /*28*/].f_5[0 /*2*/]={
func_91(-0.0238f, 0.035f) 
};
Local_138.f_753[26 /*28*/].f_5[1 /*2*/]={
func_91(-0.0238f, -0.035f) 
};
Local_138.f_753[26 /*28*/].f_5[2 /*2*/]={
func_91(0.0238f, -0.035f) 
};
Local_138.f_753[26 /*28*/].f_5[3 /*2*/]={
func_91(0.0238f, 0.035f) 
};
Local_138.f_753[26 /*28*/].f_18=4;
func_349(26, 1, 1, 1, 1, 1);
Local_138.f_753[26 /*28*/].f_20=func_10();
Local_138.f_753[26 /*28*/].f_21=7500;
Local_138.f_753[27 /*28*/]=5;
Local_138.f_753[27 /*28*/].f_24="pickup_nuke";
Local_138.f_753[27 /*28*/].f_25=0;
Local_138.f_753[27 /*28*/].f_1=0.15f;
Local_138.f_753[27 /*28*/].f_2=-0.031f;
Local_138.f_753[27 /*28*/].f_22={
func_91(0.04375f, 0.066667f) 
};
Local_138.f_753[27 /*28*/].f_17=1;
Local_138.f_753[27 /*28*/].f_5[0 /*2*/]={
func_91(-0.0238f, 0.035f) 
};
Local_138.f_753[27 /*28*/].f_5[1 /*2*/]={
func_91(-0.0238f, -0.035f) 
};
Local_138.f_753[27 /*28*/].f_5[2 /*2*/]={
func_91(0.0238f, -0.035f) 
};
Local_138.f_753[27 /*28*/].f_5[3 /*2*/]={
func_91(0.0238f, 0.035f) 
};
Local_138.f_753[27 /*28*/].f_18=4;
func_349(27, 1, 1, 1, 1, 1);
Local_138.f_753[27 /*28*/].f_20=func_10();
Local_138.f_753[27 /*28*/].f_21=7500;
Local_138.f_753[28 /*28*/]=5;
Local_138.f_753[28 /*28*/].f_24="pickup_random";
Local_138.f_753[28 /*28*/].f_25=0;
Local_138.f_753[28 /*28*/].f_1=0.15f;
Local_138.f_753[28 /*28*/].f_2=-0.031f;
Local_138.f_753[28 /*28*/].f_22={
func_91(0.04375f, 0.066667f) 
};
Local_138.f_753[28 /*28*/].f_17=1;
Local_138.f_753[28 /*28*/].f_5[0 /*2*/]={
func_91(-0.0238f, 0.035f) 
};
Local_138.f_753[28 /*28*/].f_5[1 /*2*/]={
func_91(-0.0238f, -0.035f) 
};
Local_138.f_753[28 /*28*/].f_5[2 /*2*/]={
func_91(0.0238f, -0.035f) 
};
Local_138.f_753[28 /*28*/].f_5[3 /*2*/]={
func_91(0.0238f, 0.035f) 
};
Local_138.f_753[28 /*28*/].f_18=4;
func_349(28, 1, 1, 1, 1, 1);
Local_138.f_753[28 /*28*/].f_20=func_10();
Local_138.f_753[28 /*28*/].f_21=7500;
Local_138.f_753[6 /*28*/]=7;
Local_138.f_753[6 /*28*/].f_24="jet_crash";
Local_138.f_753[6 /*28*/].f_25=0;
Local_138.f_753[6 /*28*/].f_1=0.15f;
Local_138.f_753[6 /*28*/].f_2=-0.1f;
Local_138.f_753[6 /*28*/].f_22={
func_91(0.13125f, 0.207407f) 
};
Local_138.f_753[6 /*28*/].f_17=12;
Local_138.f_753[6 /*28*/].f_16=1000;
Local_138.f_753[6 /*28*/].f_5[0 /*2*/]={
func_91(-0.0625f, 0.097222f) 
};
Local_138.f_753[6 /*28*/].f_5[1 /*2*/]={
func_91(-0.005208f, -0.014815f) 
};
Local_138.f_753[6 /*28*/].f_5[2 /*2*/]={
func_91(0.028646f, -0.101852f) 
};
Local_138.f_753[6 /*28*/].f_5[3 /*2*/]={
func_91(0.056771f, 0.037037f) 
};
Local_138.f_753[6 /*28*/].f_18=1;
func_349(6, 1, 1, 1, 1, 1);
Local_138.f_753[6 /*28*/].f_20=func_10();
Local_138.f_753[6 /*28*/].f_21=7500;
Local_138.f_753[33 /*28*/]=7;
Local_138.f_753[33 /*28*/].f_24="crashed_tank";
Local_138.f_753[33 /*28*/].f_25=0;
Local_138.f_753[33 /*28*/].f_1=0.15f;
Local_138.f_753[33 /*28*/].f_2=-0.07f;
Local_138.f_753[33 /*28*/].f_22={
func_91(0.10625f, 0.1444445f) 
};
Local_138.f_753[33 /*28*/].f_17=12;
Local_138.f_753[33 /*28*/].f_16=1000;
Local_138.f_753[33 /*28*/].f_5[0 /*2*/]={
func_91(-0.053125f, 0.07222223f) 
};
Local_138.f_753[33 /*28*/].f_5[1 /*2*/]={
func_91(0f, -0.07222223f) 
};
Local_138.f_753[33 /*28*/].f_5[2 /*2*/]={
func_91(0.03802083f, -0.07222223f) 
};
Local_138.f_753[33 /*28*/].f_5[3 /*2*/]={
func_91(0.053125f, 0.07222223f) 
};
Local_138.f_753[33 /*28*/].f_18=1;
func_349(33, 0, 0, 0, 0, 0);
Local_138.f_753[33 /*28*/].f_20=func_10();
Local_138.f_753[33 /*28*/].f_21=7500;
Local_138.f_753[7 /*28*/]=8;
Local_138.f_753[7 /*28*/].f_24="anti_tank_barrier";
Local_138.f_753[7 /*28*/].f_25=0;
Local_138.f_753[7 /*28*/].f_1=0.15f;
Local_138.f_753[7 /*28*/].f_2=-0.055556f;
Local_138.f_753[7 /*28*/].f_22={
func_91(0.066667f, 0.122222f) 
};
Local_138.f_753[7 /*28*/].f_17=1;
Local_138.f_753[7 /*28*/].f_5[0 /*2*/]={
func_91(-0.03f, 0.055f) 
};
Local_138.f_753[7 /*28*/].f_5[1 /*2*/]={
func_91(-0.03f, -0.05f) 
};
Local_138.f_753[7 /*28*/].f_5[2 /*2*/]={
func_91(0.03f, -0.05f) 
};
Local_138.f_753[7 /*28*/].f_5[3 /*2*/]={
func_91(0.03f, 0.055f) 
};
Local_138.f_753[7 /*28*/].f_18=1;
func_349(7, 1, 1, 1, 1, 1);
Local_138.f_753[7 /*28*/].f_20="IAP_H_JUMP";
Local_138.f_753[7 /*28*/].f_21=7500;
Local_138.f_753[8 /*28*/]=3;
Local_138.f_753[8 /*28*/].f_24="pitfall";
Local_138.f_753[8 /*28*/].f_25=0;
Local_138.f_753[8 /*28*/].f_1=0.15f;
Local_138.f_753[8 /*28*/].f_2=((0.89444f - 0.06944444f) + 0.02314815f);
Local_138.f_753[8 /*28*/].f_22={
func_91(0.422917f, 0.211111f) 
};
Local_138.f_753[8 /*28*/].f_17=1;
Local_138.f_753[8 /*28*/].f_5[0 /*2*/]={
func_91(-0.015f, -0.075f) 
};
Local_138.f_753[8 /*28*/].f_5[1 /*2*/]={
func_91(-0.015f, -0.14f) 
};
Local_138.f_753[8 /*28*/].f_5[2 /*2*/]={
func_91(0.015f, -0.14f) 
};
Local_138.f_753[8 /*28*/].f_5[3 /*2*/]={
func_91(0.015f, -0.075f) 
};
Local_138.f_753[8 /*28*/].f_18=0;
func_349(8, 1, 0, 0, 0, 0);
Local_138.f_753[8 /*28*/].f_20=func_10();
Local_138.f_753[8 /*28*/].f_21=7500;
Local_138.f_753[9 /*28*/]=3;
Local_138.f_753[9 /*28*/].f_24="pitfall";
Local_138.f_753[9 /*28*/].f_25=0;
Local_138.f_753[9 /*28*/].f_1=0.15f;
Local_138.f_753[9 /*28*/].f_2=((0.892592f - 0.06944444f) + 0.02314815f);
Local_138.f_753[9 /*28*/].f_22={
func_91(0.308333f, 0.214815f) 
};
Local_138.f_753[9 /*28*/].f_17=1;
Local_138.f_753[9 /*28*/].f_5[0 /*2*/]={
func_91(-0.015f, -0.075f) 
};
Local_138.f_753[9 /*28*/].f_5[1 /*2*/]={
func_91(-0.015f, -0.14f) 
};
Local_138.f_753[9 /*28*/].f_5[2 /*2*/]={
func_91(0.015f, -0.14f) 
};
Local_138.f_753[9 /*28*/].f_5[3 /*2*/]={
func_91(0.015f, -0.075f) 
};
Local_138.f_753[9 /*28*/].f_18=0;
func_349(9, 0, 1, 0, 0, 0);
Local_138.f_753[9 /*28*/].f_20=func_10();
Local_138.f_753[9 /*28*/].f_21=7500;
Local_138.f_753[10 /*28*/]=3;
Local_138.f_753[10 /*28*/].f_24="pitfall";
Local_138.f_753[10 /*28*/].f_25=0;
Local_138.f_753[10 /*28*/].f_1=0.15f;
Local_138.f_753[10 /*28*/].f_2=((0.89444f - 0.06944444f) + 0.02314815f);
Local_138.f_753[10 /*28*/].f_22={
func_91(0.308333f, 0.211111f) 
};
Local_138.f_753[10 /*28*/].f_17=1;
Local_138.f_753[10 /*28*/].f_5[0 /*2*/]={
func_91(-0.015f, -0.075f) 
};
Local_138.f_753[10 /*28*/].f_5[1 /*2*/]={
func_91(-0.015f, -0.14f) 
};
Local_138.f_753[10 /*28*/].f_5[2 /*2*/]={
func_91(0.015f, -0.14f) 
};
Local_138.f_753[10 /*28*/].f_5[3 /*2*/]={
func_91(0.015f, -0.075f) 
};
Local_138.f_753[10 /*28*/].f_18=0;
func_349(10, 0, 0, 1, 0, 0);
Local_138.f_753[10 /*28*/].f_20=func_10();
Local_138.f_753[10 /*28*/].f_21=7500;
Local_138.f_753[11 /*28*/]=3;
Local_138.f_753[11 /*28*/].f_24="pitfall";
Local_138.f_753[11 /*28*/].f_25=0;
Local_138.f_753[11 /*28*/].f_1=0.15f;
Local_138.f_753[11 /*28*/].f_2=((0.892592f - 0.06944444f) + 0.02314815f);
Local_138.f_753[11 /*28*/].f_22={
func_91(0.30625f, 0.214815f) 
};
Local_138.f_753[11 /*28*/].f_17=1;
Local_138.f_753[11 /*28*/].f_5[0 /*2*/]={
func_91(-0.015f, -0.075f) 
};
Local_138.f_753[11 /*28*/].f_5[1 /*2*/]={
func_91(-0.015f, -0.14f) 
};
Local_138.f_753[11 /*28*/].f_5[2 /*2*/]={
func_91(0.015f, -0.14f) 
};
Local_138.f_753[11 /*28*/].f_5[3 /*2*/]={
func_91(0.015f, -0.075f) 
};
Local_138.f_753[11 /*28*/].f_18=0;
func_349(11, 0, 0, 0, 1, 0);
Local_138.f_753[11 /*28*/].f_20=func_10();
Local_138.f_753[11 /*28*/].f_21=7500;
Local_138.f_753[12 /*28*/]=3;
Local_138.f_753[12 /*28*/].f_24="pitfall";
Local_138.f_753[12 /*28*/].f_25=0;
Local_138.f_753[12 /*28*/].f_1=0.15f;
Local_138.f_753[12 /*28*/].f_2=((0.8333324f - (0.01111111f / 2f)) + 0.02314815f);
Local_138.f_753[12 /*28*/].f_22={
func_91(0.30625f, (0.2222222f - 0.01111111f)) 
};
Local_138.f_753[12 /*28*/].f_17=1;
Local_138.f_753[12 /*28*/].f_5[0 /*2*/]={
func_91(-0.015f, -0.075f) 
};
Local_138.f_753[12 /*28*/].f_5[1 /*2*/]={
func_91(-0.015f, -0.14f) 
};
Local_138.f_753[12 /*28*/].f_5[2 /*2*/]={
func_91(0.015f, -0.14f) 
};
Local_138.f_753[12 /*28*/].f_5[3 /*2*/]={
func_91(0.015f, -0.075f) 
};
Local_138.f_753[12 /*28*/].f_18=0;
func_349(12, 0, 0, 0, 0, 1);
Local_138.f_753[12 /*28*/].f_20=func_10();
Local_138.f_753[12 /*28*/].f_21=7500;
Local_138.f_753[13 /*28*/]=4;
Local_138.f_753[13 /*28*/].f_24="ledge";
Local_138.f_753[13 /*28*/].f_25=0;
Local_138.f_753[13 /*28*/].f_1=0.15f;
Local_138.f_753[13 /*28*/].f_2=((0.8129629f - 0.06944444f) + 0.02314815f);
Local_138.f_753[13 /*28*/].f_22={
func_91(0.422917f, 0.374074f) 
};
Local_138.f_753[13 /*28*/].f_17=1;
Local_138.f_753[13 /*28*/].f_18=9;
func_349(13, 1, 0, 0, 0, 0);
Local_138.f_753[13 /*28*/].f_20=func_10();
Local_138.f_753[13 /*28*/].f_21=7500;
Local_138.f_753[14 /*28*/]=4;
Local_138.f_753[14 /*28*/].f_24="ledge";
Local_138.f_753[14 /*28*/].f_25=0;
Local_138.f_753[14 /*28*/].f_1=0.15f;
Local_138.f_753[14 /*28*/].f_2=((0.8129629f - 0.06944444f) + 0.02314815f);
Local_138.f_753[14 /*28*/].f_22={
func_91(0.308333f, 0.374074f) 
};
Local_138.f_753[14 /*28*/].f_17=1;
Local_138.f_753[14 /*28*/].f_18=9;
func_349(14, 0, 1, 0, 0, 0);
Local_138.f_753[14 /*28*/].f_20=func_10();
Local_138.f_753[14 /*28*/].f_21=7500;
Local_138.f_753[15 /*28*/]=4;
Local_138.f_753[15 /*28*/].f_24="ledge";
Local_138.f_753[15 /*28*/].f_25=0;
Local_138.f_753[15 /*28*/].f_1=0.15f;
Local_138.f_753[15 /*28*/].f_2=((0.8129629f - 0.06944444f) + 0.02314815f);
Local_138.f_753[15 /*28*/].f_22={
func_91(0.308333f, 0.374074f) 
};
Local_138.f_753[15 /*28*/].f_17=1;
Local_138.f_753[15 /*28*/].f_18=9;
func_349(15, 0, 0, 1, 0, 0);
Local_138.f_753[15 /*28*/].f_20=func_10();
Local_138.f_753[15 /*28*/].f_21=7500;
Local_138.f_753[16 /*28*/]=4;
Local_138.f_753[16 /*28*/].f_24="ledge";
Local_138.f_753[16 /*28*/].f_25=0;
Local_138.f_753[16 /*28*/].f_1=0.15f;
Local_138.f_753[16 /*28*/].f_2=((0.8129629f - 0.06944444f) + 0.02314815f);
Local_138.f_753[16 /*28*/].f_22={
func_91(0.30625f, 0.374074f) 
};
Local_138.f_753[16 /*28*/].f_17=1;
Local_138.f_753[16 /*28*/].f_18=9;
func_349(16, 0, 0, 0, 1, 0);
Local_138.f_753[16 /*28*/].f_20=func_10();
Local_138.f_753[16 /*28*/].f_21=7500;
Local_138.f_753[17 /*28*/]=4;
Local_138.f_753[17 /*28*/].f_24="ledge";
Local_138.f_753[17 /*28*/].f_25=0;
Local_138.f_753[17 /*28*/].f_1=0.15f;
Local_138.f_753[17 /*28*/].f_2=((0.7574074f - (0.01111111f / 2f)) + 0.02314815f);
Local_138.f_753[17 /*28*/].f_22={
func_91(0.30625f, (0.3740741f - 0.01111111f)) 
};
Local_138.f_753[17 /*28*/].f_17=1;
Local_138.f_753[17 /*28*/].f_18=9;
func_349(17, 0, 0, 0, 0, 1);
Local_138.f_753[17 /*28*/].f_20=func_10();
Local_138.f_753[17 /*28*/].f_21=7500;
Local_138.f_753[29 /*28*/]=6;
Local_138.f_753[29 /*28*/].f_24="oil_drum_1";
Local_138.f_753[29 /*28*/].f_25=4;
Local_138.f_753[29 /*28*/].f_1=0.15f;
Local_138.f_753[29 /*28*/].f_2=-0.075926f;
Local_138.f_753[29 /*28*/].f_22={
func_91(0.054167f, 0.151852f) 
};
Local_138.f_753[29 /*28*/].f_17=1;
Local_138.f_753[29 /*28*/].f_16=5000;
Local_138.f_753[29 /*28*/].f_5[0 /*2*/]={
func_91((-0.054167f / 2f), (0.151852f / 2f)) 
};
Local_138.f_753[29 /*28*/].f_5[1 /*2*/]={
func_91((-0.054167f / 2f), (-0.151852f / 2f)) 
};
Local_138.f_753[29 /*28*/].f_5[2 /*2*/]={
func_91((0.054167f / 2f), (-0.151852f / 2f)) 
};
Local_138.f_753[29 /*28*/].f_5[3 /*2*/]={
func_91((0.054167f / 2f), (0.151852f / 2f)) 
};
Local_138.f_753[29 /*28*/].f_18=6;
func_349(29, 1, 1, 1, 1, 1);
Local_138.f_753[29 /*28*/].f_20="IAP_H_OIL";
Local_138.f_753[29 /*28*/].f_21=7500;
Local_138.f_753[30 /*28*/]=6;
Local_138.f_753[30 /*28*/].f_24="stock_pile1";
Local_138.f_753[30 /*28*/].f_25=4;
Local_138.f_753[30 /*28*/].f_1=0.15f;
Local_138.f_753[30 /*28*/].f_2=-0.122222f;
Local_138.f_753[30 /*28*/].f_22={
func_91(0.116667f, 0.244444f) 
};
Local_138.f_753[30 /*28*/].f_17=1;
Local_138.f_753[30 /*28*/].f_16=12500;
Local_138.f_753[30 /*28*/].f_5[0 /*2*/]={
func_91((-0.116667f / 2f), (0.244444f / 2f)) 
};
Local_138.f_753[30 /*28*/].f_5[1 /*2*/]={
func_91((-0.116667f / 2f), (-0.244444f / 2f)) 
};
Local_138.f_753[30 /*28*/].f_5[2 /*2*/]={
func_91((0.116667f / 2f), (-0.244444f / 2f)) 
};
Local_138.f_753[30 /*28*/].f_5[3 /*2*/]={
func_91((0.116667f / 2f), (0.244444f / 2f)) 
};
Local_138.f_753[30 /*28*/].f_18=7;
func_349(30, 1, 1, 1, 1, 1);
Local_138.f_753[30 /*28*/].f_20=func_10();
Local_138.f_753[30 /*28*/].f_21=7500;
Local_138.f_753[31 /*28*/]=6;
Local_138.f_753[31 /*28*/].f_24="stock_pile2";
Local_138.f_753[31 /*28*/].f_25=4;
Local_138.f_753[31 /*28*/].f_1=0.15f;
Local_138.f_753[31 /*28*/].f_2=-0.122222f;
Local_138.f_753[31 /*28*/].f_22={
func_91(0.116667f, 0.244444f) 
};
Local_138.f_753[31 /*28*/].f_17=1;
Local_138.f_753[31 /*28*/].f_16=12500;
Local_138.f_753[31 /*28*/].f_5[0 /*2*/]={
func_91((-0.116667f / 2f), (0.244444f / 2f)) 
};
Local_138.f_753[31 /*28*/].f_5[1 /*2*/]={
func_91((-0.116667f / 2f), (-0.244444f / 2f)) 
};
Local_138.f_753[31 /*28*/].f_5[2 /*2*/]={
func_91((0.116667f / 2f), (-0.244444f / 2f)) 
};
Local_138.f_753[31 /*28*/].f_5[3 /*2*/]={
func_91((0.116667f / 2f), (0.244444f / 2f)) 
};
Local_138.f_753[31 /*28*/].f_18=7;
func_349(31, 0, 0, 0, 0, 0);
Local_138.f_753[31 /*28*/].f_20=func_10();
Local_138.f_753[31 /*28*/].f_21=7500;
Local_138.f_753[32 /*28*/]=6;
Local_138.f_753[32 /*28*/].f_24="stock_pile3";
Local_138.f_753[32 /*28*/].f_25=4;
Local_138.f_753[32 /*28*/].f_1=0.15f;
Local_138.f_753[32 /*28*/].f_2=-0.087037f;
Local_138.f_753[32 /*28*/].f_22={
func_91(0.160417f, 0.174074f) 
};
Local_138.f_753[32 /*28*/].f_17=1;
Local_138.f_753[32 /*28*/].f_16=25000;
Local_138.f_753[32 /*28*/].f_5[0 /*2*/]={
func_91((-0.160417f / 2f), (0.174074f / 2f)) 
};
Local_138.f_753[32 /*28*/].f_5[1 /*2*/]={
func_91((-0.160417f / 2f), (-0.174074f / 2f)) 
};
Local_138.f_753[32 /*28*/].f_5[2 /*2*/]={
func_91((0.160417f / 2f), (-0.174074f / 2f)) 
};
Local_138.f_753[32 /*28*/].f_5[3 /*2*/]={
func_91((0.160417f / 2f), (0.174074f / 2f)) 
};
Local_138.f_753[32 /*28*/].f_18=8;
func_349(32, 1, 1, 1, 1, 1);
Local_138.f_753[32 /*28*/].f_20=func_10();
Local_138.f_753[32 /*28*/].f_21=7500;
}


void func_349(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5){
if(bParam1){
MISC::SET_BIT(&(Local_138.f_753[iParam0 /*28*/].f_19), false);
}
if(bParam2){
MISC::SET_BIT(&(Local_138.f_753[iParam0 /*28*/].f_19), true);
}
if(bParam3){
MISC::SET_BIT(&(Local_138.f_753[iParam0 /*28*/].f_19), 2);
}
if(bParam4){
MISC::SET_BIT(&(Local_138.f_753[iParam0 /*28*/].f_19), 3);
}
if(bParam5){
MISC::SET_BIT(&(Local_138.f_753[iParam0 /*28*/].f_19), 4);
}}


void func_350(int iParam0){
Local_147.f_137=iParam0;
func_113(&(Local_147[0 /*17*/].f_9), 255, 255, 255, 255);
Local_147[1 /*17*/].f_6=1000;
Local_147[1 /*17*/].f_7=10000;
Local_147[2 /*17*/].f_1=1;
Local_147[2 /*17*/].f_8=40;
func_113(&(Local_147[2 /*17*/].f_9), 0, 0, 0, 0);
func_113(&(Local_147[3 /*17*/].f_9), 255, 255, 255, 127);
func_113(&(Local_147[4 /*17*/].f_9), 255, 255, 255, 127);
func_113(&(Local_147[5 /*17*/].f_9), 255, 255, 255, 127);
func_113(&(Local_147[7 /*17*/].f_9), 255, 255, 255, 255);
switch (Local_147.f_137){
case 2:
func_113(&(Local_147[6 /*17*/].f_9), 255, 255, 255, 30);
func_113(&(Local_147[1 /*17*/].f_9), 255, 255, 255, 20);
func_113(&(Local_147[2 /*17*/].f_13), 0, 0, 0, 30);
func_113(&(Local_147[4 /*17*/].f_9), 255, 255, 255, 127);
Local_147[0 /*17*/]=1;
Local_147[6 /*17*/]=1;
Local_147[1 /*17*/]=1;
Local_147[2 /*17*/]=1;
Local_147[3 /*17*/]=1;
break;
case 3:
func_113(&(Local_147[6 /*17*/].f_9), 255, 255, 255, 30);
func_113(&(Local_147[1 /*17*/].f_9), 255, 255, 255, 20);
func_113(&(Local_147[2 /*17*/].f_13), 0, 0, 0, 30);
func_113(&(Local_147[4 /*17*/].f_9), 255, 255, 255, 255);
Local_147[0 /*17*/]=1;
Local_147[6 /*17*/]=1;
Local_147[1 /*17*/]=1;
Local_147[2 /*17*/]=1;
Local_147[4 /*17*/]=1;
break;
case 4:
func_113(&(Local_147[6 /*17*/].f_9), 255, 255, 255, 30);
func_113(&(Local_147[1 /*17*/].f_9), 255, 255, 255, 20);
func_113(&(Local_147[2 /*17*/].f_13), 0, 0, 0, 30);
func_113(&(Local_147[5 /*17*/].f_9), 255, 255, 255, 184);
Local_147[0 /*17*/]=1;
Local_147[6 /*17*/]=1;
Local_147[1 /*17*/]=1;
Local_147[2 /*17*/]=1;
Local_147[5 /*17*/]=1;
break;
case 1:
func_113(&(Local_147[6 /*17*/].f_9), 255, 255, 255, 30);
func_113(&(Local_147[1 /*17*/].f_9), 255, 255, 255, 20);
func_113(&(Local_147[2 /*17*/].f_13), 0, 0, 0, 10);
Local_147[0 /*17*/]=1;
Local_147[6 /*17*/]=1;
Local_147[1 /*17*/]=1;
Local_147[2 /*17*/]=1;
Local_147[3 /*17*/]=1;
break;
case 0:
func_113(&(Local_147[6 /*17*/].f_9), 255, 255, 255, 30);
func_113(&(Local_147[1 /*17*/].f_9), 255, 255, 255, 20);
func_113(&(Local_147[2 /*17*/].f_13), 0, 0, 0, 10);
func_113(&(Local_147[5 /*17*/].f_9), 255, 255, 255, 255);
Local_147[0 /*17*/]=1;
Local_147[6 /*17*/]=1;
Local_147[1 /*17*/]=1;
Local_147[2 /*17*/]=1;
Local_147[5 /*17*/]=1;
break;
case 6:
func_113(&(Local_147[1 /*17*/].f_9), 255, 255, 255, 10);
func_113(&(Local_147[2 /*17*/].f_13), 0, 0, 0, 8);
func_113(&(Local_147[7 /*17*/].f_9), 255, 255, 255, 100);
Local_147[0 /*17*/]=1;
Local_147[1 /*17*/]=1;
Local_147[2 /*17*/]=1;
Local_147[7 /*17*/]=1;
break;
case 7:
func_113(&(Local_147[2 /*17*/].f_13), 0, 0, 0, 8);
Local_147[2 /*17*/]=1;
Local_147[0 /*17*/]=1;
func_113(&(Local_147[3 /*17*/].f_9), 255, 255, 255, 180);
Local_147[3 /*17*/]=1;
func_113(&(Local_147[6 /*17*/].f_9), 255, 255, 255, 30);
Local_147[6 /*17*/]=1;
break;
case 5:
func_113(&(Local_147[6 /*17*/].f_9), 255, 255, 255, 30);
func_113(&(Local_147[1 /*17*/].f_9), 255, 255, 255, 20);
func_113(&(Local_147[2 /*17*/].f_13), 0, 0, 0, 10);
Local_147[0 /*17*/]=1;
Local_147[6 /*17*/]=1;
Local_147[1 /*17*/]=1;
Local_147[2 /*17*/]=1;
Local_147[3 /*17*/]=1;
break;
case 8:
Local_147[1 /*17*/]=0;
Local_147[2 /*17*/]=0;
Local_147[0 /*17*/]=1;
func_113(&(Local_147[0 /*17*/].f_9), 0, 0, 255, 90);
Local_147[6 /*17*/]=1;
func_113(&(Local_147[6 /*17*/].f_9), 255, 0, 0, 15);
Local_147[7 /*17*/]=1;
func_113(&(Local_147[7 /*17*/].f_9), 255, 255, 255, 115);
break;
case 9:
Local_147[1 /*17*/]=0;
Local_147[2 /*17*/]=0;
Local_147[0 /*17*/]=1;
func_113(&(Local_147[0 /*17*/].f_9), 0, 0, 255, 90);
Local_147[6 /*17*/]=1;
func_113(&(Local_147[6 /*17*/].f_9), 255, 0, 0, 15);
Local_147[7 /*17*/]=1;
func_113(&(Local_147[7 /*17*/].f_9), 255, 255, 255, 115);
break;
case 10:
Local_147[1 /*17*/]=0;
Local_147[2 /*17*/]=0;
Local_147[0 /*17*/]=1;
func_113(&(Local_147[0 /*17*/].f_9), 0, 0, 255, 90);
Local_147[6 /*17*/]=1;
func_113(&(Local_147[6 /*17*/].f_9), 255, 0, 0, 15);
Local_147[7 /*17*/]=1;
func_113(&(Local_147[7 /*17*/].f_9), 255, 255, 255, 115);
break;
case 11:
func_113(&(Local_147[6 /*17*/].f_9), 255, 255, 255, 15);
func_113(&(Local_147[1 /*17*/].f_9), 255, 255, 255, 10);
func_113(&(Local_147[2 /*17*/].f_13), 0, 0, 0, 5);
Local_147[0 /*17*/]=1;
Local_147[6 /*17*/]=1;
Local_147[1 /*17*/]=1;
Local_147[3 /*17*/]=1;
break;
case 12:
func_113(&(Local_147[1 /*17*/].f_9), 255, 255, 255, 3);
func_113(&(Local_147[2 /*17*/].f_13), 0, 0, 0, 15);
func_113(&(Local_147[0 /*17*/].f_9), 0, 0, 255, 90);
func_113(&(Local_147[6 /*17*/].f_9), 255, 255, 255, 15);
Local_147[1 /*17*/]=1;
Local_147[2 /*17*/]=0;
Local_147[0 /*17*/]=1;
Local_147[6 /*17*/]=1;
break;
}}


void func_351(){
MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863), 16);
Global_4718592.f_165275=1;
Global_1648804=1;
func_353();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_20(PLAYER::PLAYER_ID(), 0, 0, 0);
func_352();
}else{
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
}
func_38(1, 0, 1, 0);
func_19(0, 1, -1);
func_19(1, 1, -1);
func_19(2, 1, -1);
func_19(3, 1, -1);
func_19(4, 1, -1);
func_19(6, 1, -1);
func_19(7, 1, -1);
func_19(8, 1, -1);
func_19(9, 1, -1);
func_19(10, 1, -1);
func_19(11, 1, -1);
func_19(12, 1, -1);
func_19(13, 1, -1);
func_19(14, 1, -1);
func_19(15, 1, -1);
func_19(16, 1, -1);
}


void func_352(){
if(!Global_2672524.f_947.f_10){
Global_2672524.f_947.f_10=1;
}}


void func_353(){
if(func_359() || func_358()){
func_357();
func_354();
}}


void func_354(){
if((!func_356() && !func_355()) && Global_2684819){
Global_4718592.f_117591=0;
}}


bool func_355(){
return Global_2683883.f_691;
}


bool func_356(){
return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192 !=0;
}


void func_357(){
Global_2683883.f_756=1;
}


var func__358(){
return Global_2683883.f_735;
}


var func__359(){
return MISC::IS_BIT_SET(Global_2683883.f_2, 11);
}


void func_360(){
bool bVar0;
if(Local_138.f_2870 >=11){
return;
}
if(!func_35()){
func_8(11);
return;
}
if(func_385()){
if(func_384(PLAYER::PLAYER_ID())){
Local_138.f_2948.f_4=0;
Local_138.f_2948.f_3=0;
func_383(&(Local_138.f_2948), 11);
}
func_8(11);
return;
}
func_379();
if(!Local_138.f_2910 && (Local_138.f_2911==-2147483647 || (NETWORK::GET_NETWORK_TIME() - Local_138.f_2911) > 5000)){
func_378(func_78(PLAYER::PLAYER_ID()), 1);
Local_138.f_2911=NETWORK::GET_NETWORK_TIME();
}
func_377();
MISC::CLEAR_BIT(&(Local_138.f_2368.f_333), 2);
bVar0=Local_138.f_2870 >=2;
func_361(bVar0);
}


void func_361(bool bParam0){
func_374();
PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOU(0);
PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOU(2);
if(MISC::IS_PC_VERSION()){
PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
}
PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
func_373(1);
func_372(4, -1);
HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
func_371();
func_370();
HUD::THEFEED_HIDE_THIS_FRAME();
if(bParam0){
func_363(0);
if(!HUD::IS_PAUSE_MENU_ACTIVE()){
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
}}
func_362();
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
}


void func_362(){
Global_23251.f_134=1;
}


void func_363(int iParam0){
if(func_369()){
return;
}
if(!Global_20500.f_1==1){
if(func_368(0)){
func_364(iParam0);
}
MISC::SET_BIT(&Global_8371, 2);
}}


void func_364(int iParam0){
if(func_369()){
return;
}
if(Global_20704){
if(func_367()){
func_366(1, 1);
}else{
func_366(0, 0);
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
if(!func_365()){
Global_20500.f_1=3;
}}

int func_365(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}


void func_366(bool bParam0, bool bParam1){
if(bParam0){
if(func_368(0)){
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


bool func_367(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}

int func_368(int iParam0){
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


bool func_369(){
return MISC::IS_BIT_SET(Global_1963795, 19);
}


void func_370(){
Global_23251.f_6=1;
}


void func_371(){
Global_1574747=1;
StringCopy(&(Global_1574747.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
Global_1574747.f_9=MISC::GET_HASH_KEY(&(Global_1574747.f_1));
}


void func_372(bool bParam0, int iParam1){
MISC::SET_BIT(&(Global_1654054.f_1047), iParam0);
switch (bParam0){
case 5:
if(iParam1 > -1){
Global_1654054.f_170[iParam1]=1;
}
break;
}}


void func_373(int iParam0){
Global_1655612.f_1163=iParam0;
}


void func_374(){
fLocal_133=func_376();
fLocal_134=func_375();
}


float func_375(){
return (1.778f / fLocal_133);
}


float func_376(){
GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&uLocal_135, &iLocal_136);
fLocal_133=GRAPHICS::GET_ASPECT_RATIO(0);
if(MISC::IS_PC_VERSION()){
if(fLocal_133 >=4f){
fLocal_133=(fLocal_133 / 3f);
}}
return fLocal_133;
}


void func_377(){
Local_138.f_2874=(Local_138.f_2874 + round((MISC::GET_FRAME_TIME() * 1000f)));
Local_138.f_2875=floor((IntToFloat(Local_138.f_2874) / 66f));
Local_138.f_2874=(Local_138.f_2874 - round((66f * IntToFloat(Local_138.f_2875))));
Local_138.f_2876=(Local_138.f_2876 + round((MISC::GET_FRAME_TIME() * 1000f)));
Local_138.f_2877=floor((IntToFloat(Local_138.f_2876) / 33f));
Local_138.f_2876=(Local_138.f_2876 - round((33f * IntToFloat(Local_138.f_2877))));
}


void func_378(int iParam0, int iParam1){
struct<3> Var0;
int iVar1;
Var0.f_0=457347143;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam1;
iVar1=func_77(iParam0);
if(!iVar1==0 && func_83(iParam0, 0, 1)){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 3, iVar1);
}}


void func_379(){
int iVar0;
struct<15> Var1;
if(Local_138.f_2910){
return;
}
Var1.f_3=10;
Var1.f_14=10;
iVar0=0;
while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1)){
if(SCRIPT::GET_EVENT_AT_INDEX(1, iVar0) !=174){
}elseif(SCRIPT::GET_EVENT_DATA(1, iVar0, &Var1, 25)){
if(Var1.f_0==-2031658982){
if(Var1.f_2 !=1){
}else{
func_380(&(Var1.f_3), &(Var1.f_14));
}}}
iVar0++;
}}


void func_380(var uParam0, var uParam1){
int iVar0;
iVar0=0;
while (iVar0 <=9){
if((*uParam1)[iVar0] <=0){
Local_138.f_2912[iVar0 /*3*/].f_1=func_382(iVar0);
Local_138.f_2912[iVar0 /*3*/]=func_381(iVar0);
func_76(func_78(PLAYER::PLAYER_ID()), 1, iVar0, Local_138.f_2912[iVar0 /*3*/], Local_138.f_2912[iVar0 /*3*/].f_1, 0);
}else{
Local_138.f_2912[iVar0 /*3*/].f_1=(*uParam1)[iVar0];
Local_138.f_2912[iVar0 /*3*/]=(*uParam0)[iVar0];
}
iVar0++;
}
Local_138.f_2910=1;
}

int func_381(int iParam0){
switch (iParam0){
case 0:
return 54161;
case 1:
return 1172;
case 2:
return 45582;
case 3:
return 70801;
case 4:
return 5199;
case 5:
return 12994;
case 6:
return 4613;
case 7:
return 73734;
case 8:
return 8256;
case 9:
return 13078;
default:
}
return 0;
}

int func_382(int iParam0){
switch (iParam0){
case 0:
return 2273775;
case 1:
return 2000000;
case 2:
return 1900000;
case 3:
return 1800000;
case 4:
return 1700000;
case 5:
return 1600000;
case 6:
return 1500000;
case 7:
return 1400000;
case 8:
return 1200000;
case 9:
return 1000000;
default:
}
return 0;
}


void func_383(var uParam0, int iParam1){
struct<8> Var0;
bool bVar1;
bool bVar2;
int iVar3;
Var0.f_5=1073741824;
Var0.f_6=-1073741824;
Var0.f_0=66206781;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam1;
Var0.f_3=uParam0->f_3;
Var0.f_4=uParam0->f_4;
Var0.f_5=uParam0->f_6;
Var0.f_6=uParam0->f_7;
Var0.f_7=uParam0->f_8;
bVar1=false;
if(iParam1==11){
if(MISC::IS_BIT_SET(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_436, 1)){
MISC::CLEAR_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_436), true);
bVar1=true;
}}
uParam0->f_5=0;
if(!func_123(&(uParam0->f_1))){
func_121(&(uParam0->f_1), 0, 0);
}
bVar2=true;
if(*uParam0==iParam1 && !bVar1){
if(func_123(&(uParam0->f_1)) && !func_120(&(uParam0->f_1), 1000, 0)){
bVar2=false;
}else{
func_103(&(uParam0->f_1));
}}else{
*uParam0=iParam1;
func_103(&(uParam0->f_1));
}
if(bVar2){
iVar3=func_77(PLAYER::PLAYER_ID());
if(iVar3 !=-1){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 8, iVar3);
uParam0->f_5=1;
}}}

int func_384(int iParam0){
if(iParam0 !=func_46()){
if(func_83(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_45(Global_2657704[iParam0 /*463*/].f_321.f_7)==17;
}}}
return 0;
}

int func_385(){
int iVar0;
if(Global_1935871){
return 1;
}
if(func_397()){
return 1;
}
if(func_396(PLAYER::GET_PLAYER_INDEX())){
return 1;
}
if(!func_394()){
return 1;
}
if(func_389()){
return 1;
}
if(Local_138.f_2870 < 2){
return 0;
}
iVar0=202;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
iVar0=214;
}
if(PAD::IS_CONTROL_PRESSED(2, iVar0) || PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar0)){
func_386((1000 - MISC::ABSI((NETWORK::GET_NETWORK_TIME() - Local_138.f_2906))), 1000, "DEG_GAME_QUIT", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
}else{
func_386(0, 1000, "DEG_GAME_QUIT", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
}
if(PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar0)){
if(Local_138.f_2906==-2147483647){
Local_138.f_2906=NETWORK::GET_NETWORK_TIME() + 1000;
}
if(NETWORK::GET_NETWORK_TIME() > Local_138.f_2906){
return 1;
}}elseif(Local_138.f_2906 !=-2147483647){
Local_138.f_2906=-2147483647;
}
if(func_384(PLAYER::PLAYER_ID())){
if(func_389()){
return 1;
}}
return 0;
}


void func_386(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36){
int iVar0;
int iVar1;
iVar0=-1;
iVar1=0;
while (iVar1 <=9){
if(iVar0==-1){
if(func_388(0, iVar1)==0){
iVar0=iVar1;
}}
iVar1++;
}
if(iVar0 > -1){
Global_1655612.f_1=1;
func_387(0, iVar0);
Global_1655612.f_1177[iVar0]=iParam0;
Global_1655612.f_1177.f_11[iVar0]=iParam1;
StringCopy(&(Global_1655612.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
Global_1655612.f_1177.f_194[iVar0]=iParam3;
Global_1655612.f_1177.f_183[iVar0]=iParam4;
Global_1655612.f_1177.f_216[iVar0]=iParam5;
Global_1655612.f_1177.f_227[iVar0 /*3*/]=iParam6;
Global_1655612.f_1177.f_227[iVar0 /*3*/].f_1=iParam7;
Global_1655612.f_1177.f_258[iVar0]=iParam8;
Global_1655612.f_1177.f_269[iVar0]=iParam9;
Global_1655612.f_1177.f_312[iVar0]=iParam10;
Global_1655612.f_1177.f_323[iVar0]=iParam11;
Global_1655612.f_1177.f_334[iVar0]=iParam12;
Global_1655612.f_1177.f_345[iVar0]=iParam13;
Global_1655612.f_1172=1;
Global_1655612.f_1177.f_356[iVar0]=iParam14;
Global_1655612.f_1177.f_367[iVar0]=iParam15;
Global_1655612.f_1177.f_378[iVar0]=iParam16;
Global_1655612.f_1177.f_389[iVar0]=iParam17;
Global_1655612.f_1177.f_400[iVar0]=iParam18;
Global_1655612.f_1177.f_411[iVar0]=iParam19;
Global_1655612.f_1177.f_422[iVar0]=iParam20;
Global_1655612.f_1177.f_433[iVar0]=iParam21;
Global_1655612.f_1177.f_444[iVar0]=iParam22;
Global_1655612.f_1177.f_455[iVar0]=iParam23;
Global_1655612.f_1177.f_466[iVar0]=iParam24;
Global_1655612.f_1177.f_205[iVar0]=iParam25;
Global_1655612.f_1177.f_477[iVar0]=iParam26;
Global_1655612.f_1177.f_488[iVar0]=iParam27;
Global_1655612.f_1177.f_499[iVar0]=iParam28;
Global_1655612.f_1177.f_510[iVar0]=iParam29;
Global_1655612.f_1177.f_521[iVar0]=iParam30;
Global_1655612.f_1177.f_532[iVar0]=iParam31;
Global_1655612.f_1177.f_543[iVar0]=iParam32;
Global_1655612.f_1177.f_554[iVar0]=iParam33;
Global_1655612.f_1177.f_565[iVar0]=iParam34;
Global_1655612.f_1177.f_576[iVar0]=iParam35;
Global_1655612.f_1177.f_587[iVar0]=iParam36;
}}


void func_387(int iParam0, bool bParam1){
MISC::SET_BIT(&(Global_1655612.f_7009[iParam0]), iParam1);
}

int func_388(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1655612.f_7009[iParam0], iParam1);
}

int func_389(){
if(func_384(PLAYER::PLAYER_ID())){
if(func_28(PLAYER::PLAYER_ID())){
return 1;
}
if(func_393(PLAYER::PLAYER_ID(), 0) && func_391(PLAYER::PLAYER_ID())){
return 1;
}}
if(func_390()){
return 1;
}
if(Global_1579621.f_5){
return 1;
}
return 0;
}


bool func_390(){
return MISC::IS_BIT_SET(Global_1978241, 14);
}


var func__391(int iParam0){
return func_392(iParam0, 20);
}


var func__392(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_393(int iParam0, int iParam1){
if(func_33(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10.f_33 !=-1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 !=-1)){
return 1;
}}
return 0;
}

int func_394(){
if(func_395(PLAYER::GET_PLAYER_INDEX())){
return 1;
}
if(func_384(PLAYER::GET_PLAYER_INDEX())){
return 1;
}
return 0;
}

int func_395(int iParam0){
if(iParam0 !=func_46()){
if(func_83(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_45(Global_2657704[iParam0 /*463*/].f_321.f_7)==15;
}}}
return 0;
}

int func_396(int iParam0){
if(iParam0 !=func_46()){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_514, 3);
}
return 0;
}


bool func_397(){
return Global_1950844.f_4789.f_1 !=-1;
}


void func_398(){
wait(0);
}


void func_399(struct<21> Param0){
Param0={
Param0 
};
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
}