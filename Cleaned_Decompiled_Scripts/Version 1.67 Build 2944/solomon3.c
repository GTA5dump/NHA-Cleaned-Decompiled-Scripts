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
var uLocal_28=-1;
var uLocal_29=0;
var uLocal_30=0;
var uLocal_31=0;
var uLocal_32=0;
var uLocal_33=0;
var uLocal_34=0;
var uLocal_35=1000;
var uLocal_36=1000;
var uLocal_37=0;
bool bLocal_38=0;
bool bLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
int iLocal_42=0;
int iLocal_43=0;
int iLocal_44=0;
int iLocal_45=0;
int iLocal_46=0;
int iLocal_47=0;
int iLocal_48=0;
float fLocal_49=0f;
float fLocal_50=0f;
float fLocal_51=0f;
var uLocal_52=0;
int iLocal_53=0;
var uLocal_54=0;
var uLocal_55=0;
float fLocal_56=0f;
float fLocal_57=0f;
float fLocal_58=0f;
var uLocal_59=0;
var uLocal_60=0;
var uLocal_61=0;
var uLocal_62=0;
var uLocal_63=0;
int iLocal_64=0;
int iLocal_65=0;
int iLocal_66=0;
int iLocal_67=0;
var uLocal_68=0;
var uLocal_69=0;
var uLocal_70=0;
var uLocal_71=0;
var uLocal_72=0;
int iLocal_73=0;
int iLocal_74=0;
bool bLocal_75=0;
bool bLocal_76=0;
bool bLocal_77=0;
bool bLocal_78=0;
bool bLocal_79=0;
int iLocal_80=0;
int iLocal_81=0;
bool bLocal_82=0;
bool bLocal_83=0;
int iLocal_84=0;
bool bLocal_85=0;
bool bLocal_86=0;
int iLocal_87=0;
int iLocal_88=0;
int iLocal_89=0;
int iLocal_90=0;
bool bLocal_91=0;
bool bLocal_92=0;
bool bLocal_93=0;
int iLocal_94=0;
bool bLocal_95=0;
var uLocal_96=0;
bool bLocal_97=0;
bool bLocal_98=0;
bool bLocal_99=0;
bool bLocal_100=0;
bool bLocal_101=0;
bool bLocal_102=0;
bool bLocal_103=0;
bool bLocal_104=0;
bool bLocal_105=0;
bool bLocal_106=0;
float fLocal_107[175]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_108[175]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_109[175]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_110[175]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_111[175]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_112=0f;
float fLocal_113=0f;
float fLocal_114=0f;
float fLocal_115=0f;
float fLocal_116[35]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_117[35]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_118[35]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_119[35]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_120[35]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_121[35]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_122[15]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_123[15]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_124[15]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_125[15]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_126=0f;
float fLocal_127=0f;
float fLocal_128=0f;
float fLocal_129=0f;
float fLocal_130=0f;
float fLocal_131=0f;
float fLocal_132=0f;
float fLocal_133=0f;
float fLocal_134=0f;
float fLocal_135=0f;
float fLocal_136=0f;
float fLocal_137=0f;
float fLocal_138=0f;
float fLocal_139=0f;
float fLocal_140=0f;
float fLocal_141=0f;
float fLocal_142=0f;
float fLocal_143=0f;
float fLocal_144=0f;
float fLocal_145=0f;
float fLocal_146=0f;
int iLocal_147[175]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_148[175]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_149[175]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_150[35]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_151[35]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_152[35]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_153[15]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_154=0;
int iLocal_155=0;
int iLocal_156=0;
int iLocal_157=0;
int iLocal_158=0;
int iLocal_159=0;
int iLocal_160=0;
int iLocal_161=0;
int iLocal_162=0;
int iLocal_163=0;
int iLocal_164=0;
int iLocal_165=0;
int iLocal_166=0;
int iLocal_167=0;
int iLocal_168=0;
int iLocal_169=0;
int iLocal_170=0;
struct<3> Local_171[175];
struct<3> Local_172[15];
struct<3> Local_173[35];
struct<3> Local_174={
0, 0, 0 
};
struct<3> Local_175={
0, 0, 0 
};
struct<3> Local_176={
0, 0, 0 
};
struct<3> Local_177={
0, 0, 0 
};
struct<3> Local_178={
0, 0, 0 
};
struct<3> Local_179={
0, 0, 0 
};
struct<3> Local_180={
0, 0, 0 
};
struct<3> Local_181={
0, 0, 0 
};
struct<3> Local_182={
0, 0, 0 
};
char cLocal_183[64]="";
var uLocal_184=0;
var uLocal_185=0;
var uLocal_186=0;
var uLocal_187=0;
var uLocal_188=0;
var uLocal_189=0;
var uLocal_190=0;
var uLocal_191=0;
int iLocal_192=0;
int iLocal_193[175]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_194[15]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_195[35]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_196=0;
int iLocal_197=0;
int iLocal_198=0;
int iLocal_199[175]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_200[12]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_201[15]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_202[35]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_203[6]={
0, 0, 0, 0, 0, 0 
};
int iLocal_204=0;
int iLocal_205=0;
int iLocal_206=0;
var uLocal_207=12;
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
int iLocal_220=0;
int iLocal_221=0;
int iLocal_222=0;
int iLocal_223=0;
var uLocal_224=0;
int iLocal_225=0;
int iLocal_226=0;
int iLocal_227=0;
int iLocal_228=0;
int iLocal_229=0;
int iLocal_230=0;
int iLocal_231=0;
int iLocal_232=0;
int iLocal_233=0;
int iLocal_234=0;
int iLocal_235=0;
int iLocal_236=0;
int iLocal_237=0;
int iLocal_238=0;
int iLocal_239=0;
int iLocal_240=0;
int iLocal_241=0;
int iLocal_242=0;
int iLocal_243=0;
int iLocal_244=0;
int iLocal_245=0;
int iLocal_246=0;
int iLocal_247=0;
var uLocal_248=0;
var uLocal_249=0;
var uLocal_250=0;
int iLocal_251=0;
int iLocal_252=0;
int iLocal_253=0;
int iLocal_254=0;
int iLocal_255=0;
int iLocal_256=0;
int iLocal_257=0;
int iLocal_258=0;
int iLocal_259=0;
int iLocal_260=0;
var uLocal_261=0;
int iLocal_262=0;
int iLocal_263[4]={
0, 0, 0, 0 
};
int iLocal_264=0;
var uLocal_265[3]={
0, 0, 0 
};
int iLocal_266[11]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_267=0;
int iLocal_268=0;
int iLocal_269=0;
int iLocal_270=0;
int iLocal_271=0;
int iLocal_272=0;
int iLocal_273[2]={
0, 0 
};
int iLocal_274[2]={
0, 0 
};
int iLocal_275=0;
int iLocal_276=0;
int iLocal_277=0;
int iLocal_278[2]={
0, 0 
};
int iLocal_279=0;
int iLocal_280=0;
int iLocal_281=0;
int iLocal_282=0;
int iLocal_283=0;
int iLocal_284[2]={
0, 0 
};
int iLocal_285=0;
int iLocal_286[2]={
0, 0 
};
int iLocal_287=0;
int iLocal_288=0;
int iLocal_289=0;
int iLocal_290=0;
int iLocal_291[2]={
0, 0 
};
int iLocal_292=0;
int iLocal_293=0;
int iLocal_294=0;
var uLocal_295=0;
var uLocal_296=0;
var uLocal_297=0;
var uLocal_298=0;
var uLocal_299=0;
var uLocal_300=0;
var uLocal_301=0;
var uLocal_302=0;
var uLocal_303=0;
struct<3> Local_304={
0, 0, 0 
};
struct<3> Local_305={
0, 0, 0 
};
struct<3> Local_306={
0, 0, 0 
};
struct<3> Local_307={
0, 0, 0 
};
var uLocal_308=0;
var uLocal_309=0;
var uLocal_310=0;
var uLocal_311=0;
var uLocal_312=0;
var uLocal_313=0;
struct<3> Local_314={
0, 0, 0 
};
struct<3> Local_315={
0, 0, 0 
};
struct<3> Local_316={
0, 0, 0 
};
float fLocal_317=0f;
float fLocal_318=0f;
float fLocal_319=0f;
float fLocal_320=0f;
float fLocal_321=0f;
float fLocal_322=0f;
int iLocal_323=0;
int iLocal_324=0;
var uLocal_325=0;
int iLocal_326=0;
int iLocal_327=0;
int iLocal_328=0;
int iLocal_329=0;
int iLocal_330=0;
int iLocal_331=0;
int iLocal_332=0;
int iLocal_333=0;
int iLocal_334=0;
int iLocal_335=0;
int iLocal_336=0;
int iLocal_337=0;
int iLocal_338=0;
int iLocal_339=0;
int iLocal_340=0;
int iLocal_341=0;
int iLocal_342=0;
int iLocal_343=0;
int iLocal_344=0;
int iLocal_345=0;
int iLocal_346=0;
int iLocal_347=0;
int iLocal_348=0;
int iLocal_349=0;
int iLocal_350=0;
int iLocal_351=0;
int iLocal_352=0;
int iLocal_353=0;
int iLocal_354=0;
int iLocal_355=0;
int iLocal_356=0;
int iLocal_357=0;
int iLocal_358=0;
int iLocal_359=0;
int iLocal_360=0;
int iLocal_361[3]={
0, 0, 0 
};
int iLocal_362[2]={
0, 0 
};
int iLocal_363=0;
int iLocal_364=0;
int iLocal_365=0;
int iLocal_366=0;
int iLocal_367=0;
int iLocal_368=0;
int iLocal_369=0;
int iLocal_370=0;
int iLocal_371=0;
int iLocal_372=0;
int iLocal_373=0;
int iLocal_374=0;
int iLocal_375=0;
int iLocal_376=0;
int iLocal_377=0;
int iLocal_378=0;
int iLocal_379=0;
int iLocal_380=0;
int iLocal_381=0;
int iLocal_382=0;
int iLocal_383=0;
int iLocal_384=0;
int iLocal_385=0;
int iLocal_386=0;
int iLocal_387=0;
int iLocal_388=0;
int iLocal_389=0;
int iLocal_390=0;
var uLocal_391=0;
int iLocal_392=0;
int iLocal_393=0;
int iLocal_394=0;
int iLocal_395[25]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_396=0;
int iLocal_397=0;
int iLocal_398=0;
int iLocal_399=0;
int iLocal_400=0;
int iLocal_401=0;
int iLocal_402=0;
int iLocal_403=0;
int iLocal_404=0;
int iLocal_405=0;
int iLocal_406=0;
int iLocal_407=0;
int iLocal_408=0;
int iLocal_409=0;
int iLocal_410=0;
int iLocal_411[19]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_412=0;
int iLocal_413=0;
int iLocal_414=0;
int iLocal_415=0;
int iLocal_416=0;
int iLocal_417=0;
int iLocal_418=0;
int iLocal_419=0;
int iLocal_420=0;
int iLocal_421=0;
int iLocal_422=0;
int iLocal_423=0;
int iLocal_424=0;
int iLocal_425=0;
int iLocal_426=0;
int iLocal_427[2]={
0, 0 
};
int iLocal_428[2]={
0, 0 
};
int iLocal_429=0;
int iLocal_430=0;
int iLocal_431=0;
int iLocal_432=0;
int iLocal_433[7]={
0, 0, 0, 0, 0, 0, 0 
};
int iLocal_434[7]={
0, 0, 0, 0, 0, 0, 0 
};
int iLocal_435=0;
int iLocal_436=0;
int iLocal_437=0;
int iLocal_438=0;
int iLocal_439=0;
int iLocal_440=0;
int iLocal_441=0;
int iLocal_442=0;
int iLocal_443=0;
int iLocal_444=0;
int iLocal_445[3]={
0, 0, 0 
};
int iLocal_446[2]={
0, 0 
};
int iLocal_447=0;
int iLocal_448[4]={
0, 0, 0, 0 
};
int iLocal_449=0;
int iLocal_450=0;
int iLocal_451=0;
int iLocal_452=0;
int iLocal_453=0;
int iLocal_454=0;
int iLocal_455=0;
int iLocal_456=0;
int iLocal_457=0;
int iLocal_458=0;
int iLocal_459=0;
int iLocal_460=0;
int iLocal_461=0;
int iLocal_462=0;
int iLocal_463[3]={
0, 0, 0 
};
int iLocal_464[3]={
0, 0, 0 
};
int iLocal_465=0;
int iLocal_466=0;
int iLocal_467=0;
int iLocal_468=0;
int iLocal_469=0;
int iLocal_470=0;
int iLocal_471=0;
int iLocal_472=0;
int iLocal_473=0;
int iLocal_474=0;
int iLocal_475=0;
int iLocal_476=0;
int iLocal_477=0;
int iLocal_478=0;
int iLocal_479=0;
int iLocal_480=0;
int iLocal_481=0;
int iLocal_482=0;
int iLocal_483=0;
int iLocal_484=0;
int iLocal_485[4]={
0, 0, 0, 0 
};
int iLocal_486=0;
char* sLocal_487=NULL;
var uLocal_488=16;
var uLocal_489=0;
var uLocal_490=0;
var uLocal_491=0;
var uLocal_492=0;
var uLocal_493=0;
var uLocal_494=0;
var uLocal_495=0;
var uLocal_496=0;
var uLocal_497=0;
var uLocal_498=0;
var uLocal_499=0;
var uLocal_500=0;
var uLocal_501=0;
var uLocal_502=0;
var uLocal_503=0;
var uLocal_504=0;
var uLocal_505=0;
var uLocal_506=0;
var uLocal_507=0;
var uLocal_508=0;
var uLocal_509=0;
var uLocal_510=0;
var uLocal_511=0;
var uLocal_512=0;
var uLocal_513=0;
var uLocal_514=0;
var uLocal_515=0;
var uLocal_516=0;
var uLocal_517=0;
var uLocal_518=0;
var uLocal_519=0;
var uLocal_520=0;
var uLocal_521=0;
var uLocal_522=0;
var uLocal_523=0;
var uLocal_524=0;
var uLocal_525=0;
var uLocal_526=0;
var uLocal_527=0;
var uLocal_528=0;
var uLocal_529=0;
var uLocal_530=0;
var uLocal_531=0;
var uLocal_532=0;
var uLocal_533=0;
var uLocal_534=0;
var uLocal_535=0;
var uLocal_536=0;
var uLocal_537=0;
var uLocal_538=0;
var uLocal_539=0;
var uLocal_540=0;
var uLocal_541=0;
var uLocal_542=0;
var uLocal_543=0;
var uLocal_544=0;
var uLocal_545=0;
var uLocal_546=0;
var uLocal_547=0;
var uLocal_548=0;
var uLocal_549=0;
var uLocal_550=0;
var uLocal_551=0;
var uLocal_552=0;
var uLocal_553=0;
var uLocal_554=0;
var uLocal_555=0;
var uLocal_556=0;
var uLocal_557=0;
var uLocal_558=0;
var uLocal_559=0;
var uLocal_560=0;
var uLocal_561=0;
var uLocal_562=0;
var uLocal_563=0;
var uLocal_564=0;
var uLocal_565=0;
var uLocal_566=0;
var uLocal_567=0;
var uLocal_568=0;
var uLocal_569=0;
var uLocal_570=0;
var uLocal_571=0;
var uLocal_572=0;
var uLocal_573=0;
var uLocal_574=0;
var uLocal_575=0;
var uLocal_576=0;
var uLocal_577=0;
var uLocal_578=0;
var uLocal_579=0;
var uLocal_580=0;
var uLocal_581=0;
var uLocal_582=0;
var uLocal_583=0;
var uLocal_584=0;
var uLocal_585=0;
var uLocal_586=0;
var uLocal_587=0;
var uLocal_588=0;
var uLocal_589=0;
var uLocal_590=0;
var uLocal_591=0;
var uLocal_592=0;
var uLocal_593=0;
var uLocal_594=0;
var uLocal_595=0;
var uLocal_596=0;
var uLocal_597=0;
var uLocal_598=0;
var uLocal_599=0;
var uLocal_600=0;
var uLocal_601=0;
var uLocal_602=0;
var uLocal_603=0;
var uLocal_604=0;
var uLocal_605=0;
var uLocal_606=0;
var uLocal_607=0;
var uLocal_608=0;
var uLocal_609=0;
var uLocal_610=0;
var uLocal_611=0;
var uLocal_612=0;
var uLocal_613=0;
var uLocal_614=0;
var uLocal_615=0;
var uLocal_616=0;
var uLocal_617=0;
var uLocal_618=0;
var uLocal_619=0;
var uLocal_620=0;
var uLocal_621=0;
var uLocal_622=0;
var uLocal_623=0;
var uLocal_624=0;
var uLocal_625=0;
var uLocal_626=0;
var uLocal_627=0;
var uLocal_628=0;
var uLocal_629=0;
var uLocal_630=0;
var uLocal_631=0;
var uLocal_632=0;
var uLocal_633=0;
var uLocal_634=0;
var uLocal_635=0;
var uLocal_636=0;
var uLocal_637=0;
var uLocal_638=0;
var uLocal_639=0;
var uLocal_640=0;
var uLocal_641=0;
var uLocal_642=0;
var uLocal_643=0;
var uLocal_644=0;
var uLocal_645=0;
var uLocal_646=0;
var uLocal_647=0;
var uLocal_648=0;
var uLocal_649=0;
var uLocal_650=0;
var uLocal_651=0;
var uLocal_652=0;
var uLocal_653=0;
var uLocal_654=0;
var uLocal_655=0;
var uLocal_656=0;
var uLocal_657=0;
var uLocal_658=0;
var uLocal_659=0;
var uLocal_660=21;
var uLocal_661=6;
var uLocal_662=0;
var uLocal_663=0;
var uLocal_664=0;
var uLocal_665[3]={
0, 0, 0 
};
var uLocal_666=0;
var uLocal_667=0;
var uLocal_668=0;
var uLocal_669=0;
var uLocal_670=0;
var uLocal_671=0;
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
iLocal_53=3;
fLocal_56=80f;
fLocal_57=140f;
fLocal_58=180f;
iLocal_64=1;
iLocal_65=65;
iLocal_66=49;
iLocal_67=64;
uLocal_71=HUD::GET_STANDARD_BLIP_ENUM_ID();
uLocal_72=HUD::GET_WAYPOINT_BLIP_ENUM_ID();
bLocal_76=true;
bLocal_83=true;
bLocal_105=true;
fLocal_126=120f;
fLocal_127=0f;
fLocal_129=1f;
fLocal_130=0f;
fLocal_131=1f;
fLocal_132=30f;
fLocal_134=1f;
fLocal_135=5f;
fLocal_136=1f;
fLocal_137=1f;
fLocal_138=100f;
fLocal_139=100f;
fLocal_140=0f;
fLocal_141=7000f;
fLocal_142=0f;
fLocal_143=0f;
fLocal_144=0.3f;
fLocal_145=0.5f;
fLocal_146=50f;
iLocal_157=-1;
iLocal_165=-1;
iLocal_166=-1;
Local_304={
-1024.1f, -485.3321f, 35.9816f 
};
Local_305={
-428.0263f, -2153.577f, 9.2997f 
};
Local_306={
-498.7f, -2136.5f, 8.4f 
};
Local_314={
-272.8615f, -2186.932f, 9.3174f 
};
fLocal_317=209.7233f;
fLocal_318=90.947f;
fLocal_321=46.7161f;
if(func_453(0)){
func_446(24, 0);
}
AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 20f);
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3)){
func_444(PLAYER::PLAYER_PED_ID(), 0);
AUDIO::TRIGGER_MUSIC_EVENT("TRV4_FAIL");
func_442();
func_440();
}
func_439(1);
MISC::SET_MISSION_FLAG(1);
iLocal_221=0;
iLocal_220=0;
while (true){
RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_LegalTrouble", 0);
if(iLocal_247 > MISC::GET_GAME_TIMER()){
RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
}
func_435();
func_434();
func_432();
func_428();
func_427();
switch (iLocal_220){
case 0:
func_423();
break;
case 1:
func_378();
break;
case 2:
func_372();
break;
case 3:
func_369();
break;
case 4:
func_269();
break;
case 5:
func_257();
break;
case 6:
func_251();
break;
case 7:
func_241();
break;
case 8:
func_5();
break;
case 9:
break;
case 10:
break;
case 11:
break;
}
wait(0);
func_1();
}}


void func_1(){
if(iLocal_409==0){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_4(PLAYER::PLAYER_PED_ID(), 476);
iLocal_409=1;
}}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(iLocal_410==0){
iLocal_287=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_287)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_287, 0)){
func_3(iLocal_287, -1);
func_4(iLocal_287, 479);
iLocal_410=1;
}}}}else{
func_4(0, 479);
func_3(0, -1);
if(iLocal_410==1){
iLocal_410=0;
}}}
if(iLocal_411[0]==0){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_265[0])){
if(PED::IS_PED_INJURED(uLocal_265[0])){
iLocal_231++;
iLocal_411[0]=1;
}}}
if(iLocal_411[1]==0){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_265[1])){
if(PED::IS_PED_INJURED(uLocal_265[1])){
iLocal_231++;
iLocal_411[1]=1;
}}}
if(iLocal_411[2]==0){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_265[2])){
if(PED::IS_PED_INJURED(uLocal_265[2])){
iLocal_231++;
iLocal_411[2]=1;
}}}
if(iLocal_411[3]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[0])){
if(PED::IS_PED_INJURED(iLocal_266[0])){
iLocal_231++;
iLocal_411[3]=1;
}}}
if(iLocal_411[4]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[1])){
if(PED::IS_PED_INJURED(iLocal_266[1])){
iLocal_231++;
iLocal_411[4]=1;
}}}
if(iLocal_411[5]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[2])){
if(PED::IS_PED_INJURED(iLocal_266[2])){
iLocal_231++;
iLocal_411[5]=1;
}}}
if(iLocal_411[6]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[3])){
if(PED::IS_PED_INJURED(iLocal_266[3])){
iLocal_231++;
iLocal_411[6]=1;
}}}
if(iLocal_411[7]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[4])){
if(PED::IS_PED_INJURED(iLocal_266[4])){
iLocal_231++;
iLocal_411[7]=1;
}}}
if(iLocal_411[8]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[5])){
if(PED::IS_PED_INJURED(iLocal_266[5])){
iLocal_231++;
iLocal_411[8]=1;
}}}
if(iLocal_411[9]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[6])){
if(PED::IS_PED_INJURED(iLocal_266[6])){
iLocal_231++;
iLocal_411[9]=1;
}}}
if(iLocal_411[10]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[7])){
if(PED::IS_PED_INJURED(iLocal_266[7])){
iLocal_231++;
iLocal_411[10]=1;
}}}
if(iLocal_411[11]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[8])){
if(PED::IS_PED_INJURED(iLocal_266[8])){
iLocal_231++;
iLocal_411[11]=1;
}}}
if(iLocal_411[12]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[9])){
if(PED::IS_PED_INJURED(iLocal_266[9])){
iLocal_231++;
iLocal_411[12]=1;
}}}
if(iLocal_411[13]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[10])){
if(PED::IS_PED_INJURED(iLocal_266[10])){
iLocal_231++;
iLocal_411[13]=1;
}}}
if(iLocal_411[14]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_270)){
if(PED::IS_PED_INJURED(iLocal_270)){
iLocal_231++;
iLocal_411[14]=1;
}}}
if(iLocal_411[15]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_271)){
if(PED::IS_PED_INJURED(iLocal_271)){
iLocal_231++;
iLocal_411[15]=1;
}}}
if(iLocal_411[16]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_272)){
if(PED::IS_PED_INJURED(iLocal_272)){
iLocal_231++;
iLocal_411[16]=1;
}}}
if(iLocal_411[17]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_273[0])){
if(PED::IS_PED_INJURED(iLocal_273[0])){
iLocal_231++;
iLocal_411[17]=1;
}}}
if(iLocal_220==8){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) !=0){
if(iLocal_412==0){
func_2(482, 0);
iLocal_412=1;
}}}}


void func_2(int iParam0, bool bParam1){
int iVar0;
Global_63495=iParam0;
if(!Global_63493){
Global_63493=1;
}
if(bParam1){
iVar0=0;
while (iVar0 < Global_75580){
if(Global_75581[iVar0 /*9*/]==iParam0){
Global_75581[iVar0 /*9*/].f_1=0;
}
iVar0++;
}}}


void func_3(int iParam0, int iParam1){
Global_63496=iParam0;
Global_63497=iParam1;
}


void func_4(int iParam0, int iParam1){
int iVar0;
Global_63498=iParam0;
iVar0=0;
while (iVar0 < Global_75580){
if(iParam1==-1 || Global_75581[iVar0 /*9*/]==iParam1){
if(Global_75581[iVar0 /*9*/].f_6 !=iParam0){
Global_75581[iVar0 /*9*/].f_6=iParam0;
Global_75581[iVar0 /*9*/].f_7=1;
Global_75581[iVar0 /*9*/].f_8=0;
}}
iVar0++;
}}


void func_5(){
if(CAM::IS_SCREEN_FADED_OUT()){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_283)){
VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_283, 0, 0, 1);
}}
if(iLocal_221 > 0){
func_239();
}
if(iLocal_221==0){
if(iLocal_341==1){
func_127();
iLocal_341=0;
}
func_25(3, "STAGE_EVADE_POLICE", 1, 0, 0, 1);
iLocal_365=0;
iLocal_366=0;
iLocal_367=0;
iLocal_342=0;
iLocal_343=0;
iLocal_344=0;
iLocal_396=0;
iLocal_397=0;
iLocal_398=0;
iLocal_416=0;
iLocal_417=0;
iLocal_421=0;
iLocal_424=0;
iLocal_225=0;
STREAMING::REQUEST_ANIM_DICT("Misssolomon_3");
STREAMING::REQUEST_MODEL(joaat("oracle2"));
STREAMING::REQUEST_MODEL(joaat("baller2"));
if(HUD::DOES_BLIP_EXIST(uLocal_295)){
HUD::REMOVE_BLIP(&uLocal_295);
}
if(TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5")){
TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Trev4_5", 0, 1f, 1f);
TASK::REMOVE_WAYPOINT_RECORDING("Trev4_5");
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_277)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_277);
}
settimera(0);
if(CAM::IS_SCREEN_FADED_OUT()){
if(!func_24()){
STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
}
func_21(0, -1, 1);
}
if(!CAM::IS_SCREEN_FADED_IN()){
CAM::DO_SCREEN_FADE_IN(800);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_264)){
if(!PED::IS_PED_INJURED(iLocal_264)){
PED::SET_PED_CAN_BE_TARGETTED(iLocal_264, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_264, 0);
}}
AUDIO::TRIGGER_MUSIC_EVENT("TRV4_LOSE_COPS");
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS")){
AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS");
}
HUD::CLEAR_PRINTS();
func_20("TRV4_END1", 7500, 1);
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ENGINE_DEATH_SCENE")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_ENGINE_DEATH_SCENE");
}
if(func_19(2)){
func_18(2, 0);
}
uLocal_261=PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-948.4f, -2992.6f, 13.3f, 6f, 5f, 4f, 60f, 0, 7);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_282)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_282, 0)){
VEHICLE::SET_VEHICLE_ACTIVE_FOR_PED_NAVIGATION(iLocal_282, 0);
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_283)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_283, 0)){
VEHICLE::SET_VEHICLE_ACTIVE_FOR_PED_NAVIGATION(iLocal_283, 0);
}}
PLAYER::SET_MAX_WANTED_LEVEL(5);
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
func_17(&uLocal_488, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", 0);
iLocal_221=1;
}
if(iLocal_221==1){
if(iLocal_416==0){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_291[0])){
if(STREAMING::HAS_MODEL_LOADED(joaat("oracle2"))){
iLocal_291[0]=VEHICLE::CREATE_VEHICLE(joaat("oracle2"), -1025.596f, -2869.237f, 12.9585f, 241.0686f, 1, 1, 0);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_291[0], 1, 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_291[0], 1084227584);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("oracle2"));
iLocal_416=1;
}}}
if(iLocal_417==0){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_291[1])){
if(STREAMING::HAS_MODEL_LOADED(joaat("baller2"))){
iLocal_291[1]=VEHICLE::CREATE_VEHICLE(joaat("baller2"), -971.4223f, -2903.354f, 12.9652f, 61.0213f, 1, 1, 0);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_291[1], 1, 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_291[1], 1084227584);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("baller2"));
iLocal_417=1;
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_291[0])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_291[0], 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_291[0], 0)){
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_VEHICLE")){
AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS_VEHICLE");
}}}
if(func_16(PLAYER::PLAYER_PED_ID(), iLocal_291[0], 1) > 200f || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_291[0], 0)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_291[0]));
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_291[1])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_291[1], 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_291[1], 0)){
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_VEHICLE")){
AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS_VEHICLE");
}}}
if(func_16(PLAYER::PLAYER_PED_ID(), iLocal_291[1], 1) > 200f || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_291[1], 0)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_291[1]));
}}
if(iLocal_396==0){
if(!PED::IS_PED_INJURED(iLocal_266[0])){
func_14(iLocal_266[0], "SURROUNDED", 24);
iLocal_396=1;
}}
if(iLocal_365==0){
if(timera() > 8000){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_284[0], 0)){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_284[0], 68, "BB_Chase", 1);
VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_284[0], 0f, 0f, 0.15f);
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_284[1], 0)){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_284[1], 69, "BB_Chase", 1);
VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_284[1], 0f, 0f, 0.15f);
}
iLocal_365=1;
}}else{
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_284[0], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_284[0])){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_284[0]) > 5000f){
if(VEHICLE::IS_VEHICLE_STOPPED(iLocal_284[0])){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_284[0]);
}}}elseif(iLocal_366==0){
if(!PED::IS_PED_INJURED(iLocal_266[6])){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_266[6], 0);
}
if(!PED::IS_PED_INJURED(iLocal_266[7])){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_266[7], 0);
}
iLocal_366=1;
}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_284[1], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_284[1])){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_284[1]) > 5000f){
if(VEHICLE::IS_VEHICLE_STOPPED(iLocal_284[1])){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_284[1]);
}}}elseif(iLocal_367==0){
if(!PED::IS_PED_INJURED(iLocal_266[8])){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_266[8], 0);
}
if(!PED::IS_PED_INJURED(iLocal_266[9])){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_266[9], 0);
}
iLocal_367=1;
}}}
func_12();
if(iLocal_421==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_283)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_283, 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_283, 0)){
AUDIO::TRIGGER_MUSIC_EVENT("TRV4_JET_ENTERED");
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_PLANE")){
AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS_PLANE");
}
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 15f, 4);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_283);
iLocal_421=1;
}elseif(func_16(PLAYER::PLAYER_PED_ID(), iLocal_283, 1) > 200f){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_283);
}}}}
if(iLocal_421==1){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_283)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_283, 0)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_283, 0)){
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_PLANE")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_PLANE");
}
AUDIO::TRIGGER_MUSIC_EVENT("TRV4_LOSE_COPS");
iLocal_421=0;
}}}}
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
if(iLocal_424==0){
iLocal_233=MISC::GET_GAME_TIMER();
iLocal_424=1;
}}
if(iLocal_424==1){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
if(MISC::GET_GAME_TIMER() > iLocal_233 + 3500){
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_PLANE")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_PLANE");
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS");
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_VEHICLE")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_VEHICLE");
}
AUDIO::TRIGGER_MUSIC_EVENT("TRV4_COPS_LOST");
func_11(0, -1);
func_6();
}}else{
iLocal_424=0;
}}}}


void func_6(){
func_10(481, iLocal_231, 0);
func_7(0, 0);
func_440();
}


void func_7(bool bParam0, int iParam1){
int iVar0;
int iVar1;
var uVar2;
if(!Global_63487){
Global_63487=iParam1;
}
if(bParam0){
if((func_453(0) && Global_78936.f_1==1) && func_9(Global_78936)){
}else{
Global_63485=1;
}}
if(Global_113810.f_9088 || func_453(0)){
iVar0=func_8();
iVar1=Global_91565[iVar0 /*5*/];
uVar2=Global_78960.f_109[iVar1 /*4*/];
if(iVar0==-1){
if(Global_113810.f_9088){
}
return;
}
if(MISC::IS_BIT_SET(Global_91565[iVar0 /*5*/].f_1, 4)){
return;
}
if(MISC::IS_BIT_SET(Global_91565[iVar0 /*5*/].f_1, 5)){
return;
}
MISC::SET_BIT(&(Global_91565[iVar0 /*5*/].f_1), 4);
MISC::SET_BIT(&Global_78938, true);
Global_78954=uVar2;
Global_78955=MISC::GET_GAME_TIMER();
}}

int func_8(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 7){
if(MISC::IS_BIT_SET(Global_91565[iVar0 /*5*/].f_1, 2)){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_9(int iParam0){
switch (iParam0){
case 71:
return 1;
break;
case 86:
return 1;
break;
case 91:
return 1;
break;
default:
return 0;
break;
}
return 0;
}


void func_10(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < Global_75580){
if(Global_75581[iVar0 /*9*/]==iParam0){
if(bParam2){
Global_75581[iVar0 /*9*/].f_1=iParam1;
}else{
Global_75581[iVar0 /*9*/].f_1=(Global_75581[iVar0 /*9*/].f_1 + iParam1);
}
return;
}
iVar0++;
}
if(Global_75581[iVar0 /*9*/] !=-1){
if(Global_63710[Global_75581[iVar0 /*9*/] /*13*/]==3){
if(Global_75581[iVar0 /*9*/].f_1 > 1){
Global_75581[iVar0 /*9*/].f_1=1;
}
if(Global_75581[iVar0 /*9*/].f_1 < 0){
Global_75581[iVar0 /*9*/].f_1=0;
}}}}


void func_11(bool bParam0, int iParam1){
int iVar0;
if(Global_63493){}
Global_63493=0;
if(bParam0){
Global_63494=1;
}
iVar0=0;
if(iParam1==-1){
iVar0=0;
while (iVar0 < Global_75580){
if(Global_63710[Global_75581[iVar0 /*9*/] /*13*/]==4){
Global_75581[iVar0 /*9*/].f_5=0;
return;
}
iVar0++;
}}else{
iVar0=0;
while (iVar0 < Global_75580){
if(Global_75581[iVar0 /*9*/] > 0){
if(Global_75581[iVar0 /*9*/]==iParam1){
Global_75581[iVar0 /*9*/].f_5=0;
return;
}}
iVar0++;
}}}


void func_12(){
iLocal_229=0;
while (iLocal_229 <=9){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[iLocal_229])){
if(!PED::IS_PED_INJURED(iLocal_266[iLocal_229])){
if(!PED::IS_PED_IN_ANY_VEHICLE(iLocal_266[iLocal_229], 0)){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(func_13(PLAYER::PLAYER_PED_ID(), iLocal_266[iLocal_229]) > 200f){
TASK::CLEAR_PED_TASKS(iLocal_266[iLocal_229]);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_266[iLocal_229]));
}
elseif(func_13(PLAYER::PLAYER_PED_ID(), iLocal_266[iLocal_229]) > 20f){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_266[iLocal_229], joaat("script_task_go_to_entity_while_aiming_at_entity")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_266[iLocal_229], joaat("script_task_go_to_entity_while_aiming_at_entity")) !=0){
TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_266[iLocal_229], PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 2f, 1, 15f, 20f, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
}
}
elseif(TASK::GET_SCRIPT_TASK_STATUS(iLocal_266[iLocal_229], joaat("script_task_combat")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_266[iLocal_229], joaat("script_task_combat")) !=0){
TASK::TASK_COMBAT_PED(iLocal_266[iLocal_229], PLAYER::PLAYER_PED_ID(), 0, 16);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_266[iLocal_229], 50, 1);
}}elseif(func_13(PLAYER::PLAYER_PED_ID(), iLocal_266[iLocal_229]) > 200f){
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_266[iLocal_229]));
}elseif(func_13(PLAYER::PLAYER_PED_ID(), iLocal_266[iLocal_229]) > 5f){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_266[iLocal_229], joaat("script_task_go_to_entity_while_aiming_at_entity")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_266[iLocal_229], joaat("script_task_go_to_entity_while_aiming_at_entity")) !=0){
TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_266[iLocal_229], PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 2f, 1, 15f, 20f, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
}}elseif(TASK::GET_SCRIPT_TASK_STATUS(iLocal_266[iLocal_229], joaat("script_task_combat")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_266[iLocal_229], joaat("script_task_combat")) !=0){
TASK::TASK_COMBAT_PED(iLocal_266[iLocal_229], PLAYER::PLAYER_PED_ID(), 0, 16);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_266[iLocal_229], 50, 1);
}}}}
iLocal_229++;
}
if(iLocal_365==1){
if(iLocal_342==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_284[0])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_284[0], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_284[0])){
}else{
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[6])){
if(!PED::IS_PED_INJURED(iLocal_266[6])){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_266[6], 0);
TASK::CLEAR_PED_TASKS(iLocal_266[6]);
TASK::OPEN_SEQUENCE_TASK(&uLocal_302);
TASK::TASK_LEAVE_VEHICLE(0, iLocal_284[0], 256);
TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
TASK::CLOSE_SEQUENCE_TASK(uLocal_302);
TASK::TASK_PERFORM_SEQUENCE(iLocal_266[6], uLocal_302);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_302);
}
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[7])){
if(!PED::IS_PED_INJURED(iLocal_266[7])){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_266[7], 0);
TASK::CLEAR_PED_TASKS(iLocal_266[7]);
TASK::OPEN_SEQUENCE_TASK(&uLocal_302);
TASK::TASK_LEAVE_VEHICLE(0, iLocal_284[0], 256);
TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
TASK::CLOSE_SEQUENCE_TASK(uLocal_302);
TASK::TASK_PERFORM_SEQUENCE(iLocal_266[7], uLocal_302);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_302);
}
}
iLocal_342=1;
}}}}elseif(iLocal_397==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_284[0])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_284[0], 0)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[6])){
if(!PED::IS_PED_INJURED(iLocal_266[6])){
if(!PED::IS_PED_IN_VEHICLE(iLocal_266[6], iLocal_284[0], 0)){
if(func_13(PLAYER::PLAYER_PED_ID(), iLocal_266[6]) < 20f){
func_14(iLocal_266[6], "DRAW_GUN", 24);
iLocal_397=1;
}}
}}}}}
if(iLocal_343==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_284[1])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_284[1], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_284[1])){
}else{
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[8])){
if(!PED::IS_PED_INJURED(iLocal_266[8])){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_266[8], 0);
TASK::CLEAR_PED_TASKS(iLocal_266[8]);
TASK::OPEN_SEQUENCE_TASK(&uLocal_302);
TASK::TASK_LEAVE_VEHICLE(0, iLocal_284[1], 256);
TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
TASK::CLOSE_SEQUENCE_TASK(uLocal_302);
TASK::TASK_PERFORM_SEQUENCE(iLocal_266[8], uLocal_302);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_302);
}
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[9])){
if(!PED::IS_PED_INJURED(iLocal_266[9])){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_266[9], 0);
TASK::CLEAR_PED_TASKS(iLocal_266[9]);
TASK::OPEN_SEQUENCE_TASK(&uLocal_302);
TASK::TASK_LEAVE_VEHICLE(0, iLocal_284[1], 256);
TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
TASK::CLOSE_SEQUENCE_TASK(uLocal_302);
TASK::TASK_PERFORM_SEQUENCE(iLocal_266[9], uLocal_302);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_302);
}
}
iLocal_343=1;
}}}}}
if(iLocal_344==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[10])){
if(!PED::IS_PED_INJURED(iLocal_266[10])){
if(func_13(PLAYER::PLAYER_PED_ID(), iLocal_266[10]) > 200f){
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_266[iLocal_229]));
STREAMING::REMOVE_ANIM_DICT("misssolomon_3");
}elseif(STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_3")){
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -923.2303f, -2948.004f, 12.9451f, 2f, 2f, 2f, 0, 1, 0)){
if(!PED::IS_PED_INJURED(iLocal_266[10])){
TASK::CLEAR_PED_TASKS(iLocal_266[10]);
TASK::OPEN_SEQUENCE_TASK(&uLocal_302);
TASK::TASK_PLAY_ANIM(0, "misssolomon_3", "plyr_roll_left", 8f, -8f, -1, 0, 0, 0, 0, 0);
TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
TASK::CLOSE_SEQUENCE_TASK(uLocal_302);
TASK::TASK_PERFORM_SEQUENCE(iLocal_266[10], uLocal_302);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_302);
iLocal_344=1;
}}}}}}}


float func_13(int iParam0, int iParam1){
return func_16(iParam0, iParam1, 1);
}


void func_14(var uParam0, char* sParam1, int iParam2){
AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0, sParam1, func_15(iParam2), 1);
}

int func_15(int iParam0){
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


float func_16(int iParam0, int iParam1, int iParam2){
struct<3> Var0;
struct<3> Var1;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
}else{
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 0) 
};
}
if(!ENTITY::IS_ENTITY_DEAD(iParam1, 0)){
Var1={
ENTITY::GET_ENTITY_COORDS(iParam1, 1) 
};
}else{
Var1={
ENTITY::GET_ENTITY_COORDS(iParam1, 0) 
};
}
return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, iParam2);
}


void func_17(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
if((uParam0[iParam1 /*10*/])->f_7==1){}
(*uParam0)[iParam1 /*10*/]=iParam2;
StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
(uParam0[iParam1 /*10*/])->f_7=1;
(uParam0[iParam1 /*10*/])->f_8=iParam4;
(uParam0[iParam1 /*10*/])->f_9=iParam5;
if(!Global_78689){
if(!PED::IS_PED_INJURED(iParam2)){
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


void func_18(bool bParam0, bool bParam1){
if(MISC::IS_BIT_SET(Global_32443, bParam0)){
if(!bParam1){
MISC::CLEAR_BIT(&Global_32443, bParam0);
StringCopy(&(Global_32444[bParam0 /*6*/]), "NULL", 24);
Global_32499[bParam0]=bParam1;
}}}

int func_19(bool bParam0){
if(MISC::IS_BIT_SET(Global_32443, bParam0)){
return 1;
}
return 0;
}


void func_20(char* sParam0, int iParam1, int iParam2){
iParam2=iParam2;
HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}


void func_21(int iParam0, int iParam1, int iParam2){
if(func_23() && func_24()){
while (Global_100828 !=6){
wait(0);
}
MISC::SET_GAME_PAUSED(0);
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
}}
if(iParam0 !=0){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0)){
PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
wait(0);
}}}}}
if(iParam2==1){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
}}
GRAPHICS::ANIMPOSTFX_STOP_ALL();
func_22(0);
}}


void func_22(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&(Global_100833.f_20), 13);
}else{
MISC::CLEAR_BIT(&(Global_100833.f_20), 13);
}}

int func_23(){
if(Global_100833==10 || Global_100833==9){
return 1;
}
return 0;
}


bool func_24(){
return MISC::IS_BIT_SET(Global_100833.f_20, 13);
}


void func_25(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5){
int iVar0;
int iVar1;
var uVar2;
char[] cVar3[8];
int iVar4;
var uVar5;
int iVar6;
if(iParam3==1){
if(!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME())){
}}
iVar0=0;
if(iParam3==1){
if(iParam0 !=Global_100870){
iVar0=1;
}}elseif(iParam0 > Global_100870){
iVar0=1;
}
if(iVar0==1){
func_126(1);
if(iParam0 <=Global_100870){
}
iVar1=func_124(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
if(iVar1 !=-1 && iVar1 !=94){
Global_113810.f_9088.f_330[iVar1 /*6*/].f_1=0;
uVar2=func_122(iVar1);
cVar3={
Global_91601[iVar1 /*34*/].f_8 
};
if(iVar1==90){
switch (Global_113810.f_9088.f_99.f_205[7]){
case 1:
StringConCat(&cVar3, "A", 8);
break;
case 2:
StringConCat(&cVar3, "B", 8);
break;
}}
STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, uVar2, Global_100870, iParam0);
}else{
iVar4=func_117(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
if(iVar4 !=-1){
Global_113810.f_18577[iVar4 /*6*/].f_4=0;
MemCopy(&uVar5,{
func_116(iVar4)
}
, 4);
STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar5, 0, Global_100870, iParam0);
}else{
iVar6=func_115(&(Global_100833.f_3));
if(iVar6 > -1){
Global_113810.f_24989.f_4[iVar6]=0;
}}}
Global_94991=iParam2;
Global_100870=iParam0;
func_26(iParam0, sParam1, iParam4, iParam5);
if(MISC::ARE_STRINGS_EQUAL(sParam1, "")){
}}elseif(iParam0 < Global_100870){}}


void func_26(int iParam0, var uParam1, int iParam2, int iParam3){
func_27(&Global_107357, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}


void func_27(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5){
int iVar0;
int iVar1;
*uParam0=func_114();
uParam0->f_1=func_103();
MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_70(&(uParam0->f_2884), 0);
func_69(PLAYER::PLAYER_PED_ID());
func_62(PLAYER::PLAYER_PED_ID(), 0);
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), 1);
if(uParam0->f_2==0 || uParam0->f_2==joaat("object")){
uParam0->f_2=joaat("weapon_unarmed");
}}
iVar1=0;
while (iVar1 < 3){
uParam0->f_17[iVar1]=Global_113810.f_2366.f_539.f_294[iVar1];
if(iVar1==func_59()){
func_50(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
}else{
iVar0=0;
while (iVar0 < 12){
uParam0->f_616[iVar1 /*65*/][iVar0]=Global_100558[iVar1 /*65*/][iVar0];
uParam0->f_616[iVar1 /*65*/].f_13[iVar0]=Global_100558[iVar1 /*65*/].f_13[iVar0];
iVar0++;
}
uParam0->f_616[iVar1 /*65*/].f_59=Global_100558[iVar1 /*65*/].f_59;
uParam0->f_616[iVar1 /*65*/].f_60=Global_100558[iVar1 /*65*/].f_60;
uParam0->f_616[iVar1 /*65*/].f_61=Global_100558[iVar1 /*65*/].f_61;
uParam0->f_616[iVar1 /*65*/].f_62=Global_100558[iVar1 /*65*/].f_62;
uParam0->f_616[iVar1 /*65*/].f_63=Global_100558[iVar1 /*65*/].f_63;
uParam0->f_616[iVar1 /*65*/].f_64=Global_100558[iVar1 /*65*/].f_64;
iVar0=0;
while (iVar0 < 9){
uParam0->f_616[iVar1 /*65*/].f_39[iVar0]=Global_100558[iVar1 /*65*/].f_39[iVar0];
uParam0->f_616[iVar1 /*65*/].f_49[iVar0]=Global_100558[iVar1 /*65*/].f_49[iVar0];
iVar0++;
}}
iVar0=0;
while (iVar0 < 44){
uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/]={
Global_113810.f_2366.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] 
};
iVar0++;
}
iVar0=0;
while (iVar0 < 51){
uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/]={
Global_113810.f_2366.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] 
};
iVar0++;
}
switch (iVar1){
case 0:
STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
break;
case 1:
STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
break;
case 2:
STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
break;
}
uParam0->f_9[iVar1]=Global_113810.f_20567.f_233[iVar1 /*69*/].f_1;
uParam0->f_13[iVar1]=Global_60659[iVar1];
uParam0->f_25[0 /*295*/][iVar1 /*98*/]={
Global_113810.f_2366.f_539.f_2407[0 /*295*/][iVar1 /*98*/] 
};
uParam0->f_25[1 /*295*/][iVar1 /*98*/]={
Global_113810.f_2366.f_539.f_2407[1 /*295*/][iVar1 /*98*/] 
};
iVar0=0;
while (iVar0 <=3){
uParam0->f_2838[iVar1 /*15*/][iVar0]=Global_113810.f_2366.f_493[iVar1 /*15*/][iVar0];
uParam0->f_2838[iVar1 /*15*/].f_5[iVar0]=Global_113810.f_2366.f_493[iVar1 /*15*/].f_5[iVar0];
uParam0->f_2838[iVar1 /*15*/].f_10[iVar0]=Global_113810.f_2366.f_493[iVar1 /*15*/].f_10[iVar0];
iVar0++;
}
iVar0=0;
while (iVar0 <=2){
uParam0->f_2345[iVar1 /*164*/][iVar0]=Global_113810.f_2366[iVar1 /*164*/][iVar0];
uParam0->f_2345[iVar1 /*164*/].f_4[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_4[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_8[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_8[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_12[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_12[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_16[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_16[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_20[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_20[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_24[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_24[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_28[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_28[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_32[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_32[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_36[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_36[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_40[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_40[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_44[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_44[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_48[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_48[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_52[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_52[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_56[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_56[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_60[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_60[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_64[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_64[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_68[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_68[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_72[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_72[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_76[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_76[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_80[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_80[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_84[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_84[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_88[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_88[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_92[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_92[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_96[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_96[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_100[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_100[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_104[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_104[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_108[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_108[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_112[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_112[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_116[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_116[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_120[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_120[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_124[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_124[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_128[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_128[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_132[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_132[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_136[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_136[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_140[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_140[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_144[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_144[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_148[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_148[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_152[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_152[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_156[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_156[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_160[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_160[iVar0];
iVar0++;
}
iVar1++;
}
STATS::STAT_GET_INT(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
STATS::STAT_GET_INT(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
STATS::STAT_GET_INT(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
uParam0->f_5=145;
if(iParam4==1){
func_29(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
}
func_28(&(uParam0->f_2980));
uParam3=uParam3;
uParam2=uParam2;
}

int func_28(var uParam0){
*uParam0=Global_96662;
uParam0->f_1=Global_96663;
uParam0->f_2=0;
uParam0->f_3=0;
return 1;
}


void func_29(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5){
int iVar0;
if(iParam2==0){
iParam2=PLAYER::PLAYER_PED_ID();
}
if(ENTITY::DOES_ENTITY_EXIST(iParam2)){
uParam1->f_5=func_47(iParam2);
}
if(func_44(iParam2, &iVar0, iParam3, iParam5)){
func_30(uParam0, uParam1, iVar0, iParam4);
}elseif(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0)){
func_30(uParam0, uParam1, iVar0, iParam4);
}}}}

int func_30(var uParam0, var uParam1, int iParam2, int iParam3){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0)){
func_32(uParam0, iParam2, iParam3);
uParam1->f_4=iParam2;
if(func_31(iParam2)){
uParam1->f_3=1;
}else{
uParam1->f_3=0;
}
return 1;
}
return 0;
}

int func_31(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=6){
if(Global_100833.f_22[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


void func_32(var uParam0, int iParam1, int iParam2){
func_39(iParam1, &(uParam0->f_12));
uParam0->f_7=func_35(iParam1, 145, 0);
uParam0->f_11=func_34(iParam1);
if(!uParam0->f_7){
if(!uParam0->f_10){
uParam0->f_10=func_33(iParam1);
}}
if(iParam2==1){
*uParam0={
ENTITY::GET_ENTITY_COORDS(iParam1, 1) 
};
uParam0->f_6=ENTITY::GET_ENTITY_HEADING(iParam1);
uParam0->f_3={
ENTITY::GET_ENTITY_VELOCITY(iParam1) 
};
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0)){
*uParam0={
-1160.095f, -1515.407f, 3.1496f 
};
uParam0->f_6=305.6424f;
}
if(Global_78384==iParam1){
uParam0->f_9=1;
}}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uParam0->f_8=1;
}else{
uParam0->f_8=0;
}}

int func_33(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 68){
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[iVar0])){
if(iParam0==Global_77479.f_484[iVar0]){
return 1;
}}
iVar0++;
}
return 0;
}

int func_34(int iParam0){
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

int func_35(int iParam0, int iParam1, int iParam2){
int iVar0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0])){
if(Global_98144[iVar0]==iParam0){
if(iParam1==145 || iParam1==Global_98154[iVar0]){
if(iParam2==0 || ENTITY::GET_ENTITY_MODEL(iParam0)==func_36(iParam1, iParam2)){
return 1;
}}}}
iVar0++;
}
return 0;
}

int func_36(int iParam0, int iParam1){
struct<82> Var0;
if(func_38(iParam0)){
Var0.f_11=12;
Var0.f_31=49;
Var0.f_81=2;
func_37(iParam0, &Var0, iParam1);
return Var0.f_0;
}elseif(iParam0 !=145){}
return 0;
}


void func_37(int iParam0, var uParam1, int iParam2){
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


bool func_38(int iParam0){
return iParam0 < 3;
}


void func_39(int iParam0, var uParam1){
int iVar0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_43(uParam1);
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
if(uParam1->f_65==-1 && !func_42(uParam1->f_66)){
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
func_41(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
iVar0=0;
while (iVar0 <=11){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1)){
MISC::SET_BIT(&(uParam1->f_77), func_40(iVar0 + 1));
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

int func_40(int iParam0){
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

int func_41(int iParam0, var uParam1, var uParam2){
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

int func_42(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}


void func_43(var uParam0){
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

int func_44(int iParam0, var uParam1, int iParam2, int iParam3){
char* sVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!PED::IS_PED_INJURED(iParam0)){
if(iParam0==PLAYER::PLAYER_PED_ID()){
*uParam1=PLAYER::GET_PLAYERS_LAST_VEHICLE();
}else{
*uParam1=PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
}
if(ENTITY::DOES_ENTITY_EXIST(*uParam1)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0)){
if(iParam2==0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1) < 100f){
if(VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi"))){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0) !=iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0) !=0){
return 0;
}
}
if(func_45(*uParam1, func_114(), 1)){
sVar0=SCRIPT::GET_THIS_SCRIPT_NAME();
if(!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere")){
return 0;
}elseif(!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1)){
return 0;
}
}
if(iParam3==1){
if(DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave")){
if(DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave")){
return 0;
}}
}
elseif(VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp"))){
return 0;
}
return 1;
}}}}}
return 0;
}

int func_45(int iParam0, int iParam1, bool bParam2){
int iVar0;
char* sVar1;
int iVar2;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
iVar0=0;
while (func_46(iParam1, iVar0, &sVar1, &iVar2)){
if(!bParam2 || MISC::IS_BIT_SET(Global_113810.f_7232[iVar2], 0)){
if(VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_46(int iParam0, int iParam1, char* sParam2, var uParam3){
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

int func_47(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_48(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_48(int iParam0){
if(func_38(iParam0)){
return func_49(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__49(int iParam0){
return Global_2058[iParam0 /*29*/];
}


void func_50(int iParam0, var uParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
if(!PED::IS_PED_INJURED(iParam0)){
iVar0=func_47(iParam0);
iVar1=0;
while (iVar1 < 12){
func_58(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
iVar1++;
}
iVar1=0;
while (iVar1 < 9){
func_57(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
iVar1++;
}
if(func_38(iVar0)){
uParam1->f_59=Global_113810.f_2366.f_539[iVar0 /*65*/].f_59;
uParam1->f_60=Global_113810.f_2366.f_539[iVar0 /*65*/].f_60;
uParam1->f_61=Global_113810.f_2366.f_539[iVar0 /*65*/].f_61;
uParam1->f_62=Global_113810.f_2366.f_539[iVar0 /*65*/].f_62;
uParam1->f_63=Global_113810.f_2366.f_539[iVar0 /*65*/].f_63;
uParam1->f_64=Global_113810.f_2366.f_539[iVar0 /*65*/].f_64;
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0)==ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
if(func_55(161, iParam3)){
uParam1->f_59=func_51(2053, iParam3);
}else{
uParam1->f_59=func_51(753, iParam3);
}
uParam1->f_60=func_51(754, iParam3);
uParam1->f_61=func_51(755, iParam3);
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0==PLAYER::PLAYER_PED_ID()){
if(func_55(161, iParam3)){
uParam1->f_59=func_51(2053, iParam3);
}else{
uParam1->f_59=func_51(753, iParam3);
}}}}

int func_51(int iParam0, int iParam1){
int iVar0;
var uVar1;
if(iParam0 !=14385){
iVar0=func_52(iParam0, iParam1);
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


var func__52(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_53(uParam1));
}

int func_53(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_54();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}

int func_54(){
return Global_1574918;
}

int func_55(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=func_56(iParam0, iParam1);
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


var func__56(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(2, uParam0, func_53(uParam1));
}


void func_57(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5){
int iVar0;
iVar0=func_47(iParam0);
if(iParam0 !=0){
*uParam2=PED::GET_PED_PROP_INDEX(iParam0, iParam1, 1);
*uParam3=PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
}else{
iVar0=iParam5;
}
if(iParam4==0){
return;
}
if(iParam1==0){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
if(iParam0 !=0){
if(PED::IS_PED_WEARING_HELMET(iParam0) && PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0) !=-1){
*uParam2=PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0);
*uParam3=PED::GET_PED_HELMET_STORED_HAT_TEX_INDEX(iParam0);
}}}}
switch (iVar0){
case 0:
if(iParam1==0){
if(*uParam2==7){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==11){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==21){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 16 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==23){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==27){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==28){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2 >=14 && *uParam2 <=20){
if(iParam4 & 2 !=0 || iParam4 & 4 !=0){
*uParam2=-1;
*uParam3=-1;
}}}elseif(iParam1==1){
if(*uParam2==1){
if(iParam4 & 2 !=0 || iParam4 & 64 !=0){
*uParam2=-1;
*uParam3=-1;
}}}
break;
case 1:
if(iParam1==0){
if(*uParam2==2){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==4){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 16 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==6){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==17){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==20){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==21){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2 >=8 && *uParam2 <=14){
if(iParam4 & 2 !=0 || iParam4 & 4 !=0){
*uParam2=-1;
*uParam3=-1;
}}}
break;
case 2:
if(iParam1==0){
if(*uParam2==9){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==11){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==12){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==21){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==23){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==27){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif((*uParam2 >=14 && *uParam2 <=20) || *uParam2==2){
if(iParam4 & 2 !=0 || iParam4 & 4 !=0){
*uParam2=-1;
*uParam3=-1;
}}}
break;
}}


void func_58(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6){
int iVar0;
iVar0=func_47(iParam0);
if(iParam0 !=0){
*uParam2=PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
*uParam3=PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
*uParam4=PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
}else{
iVar0=iParam6;
}
if(iParam5==0){
return;
}
switch (iVar0){
case 0:
if(iParam1==8){
if((iParam5 & 1 !=0 || iParam5 & 2 !=0) || iParam5 & 32 !=0){
if(*uParam2==15){
*uParam2=0;
*uParam3=0;
}}
if(iParam5 & 2 !=0 || iParam5 & 64 !=0){
if(*uParam2==3 || *uParam2==22){
*uParam2=0;
*uParam3=0;
}}}elseif(iParam1==9){
if((iParam5 & 1 !=0 || iParam5 & 2 !=0) || iParam5 & 32 !=0){
if(*uParam2==5){
*uParam2=0;
*uParam3=0;
}}
if(iParam5 & 2 !=0 || iParam5 & 4 !=0){
if(*uParam2==8){
*uParam2=0;
*uParam3=0;
}}}
break;
case 1:
if(iParam1==8){
if((iParam5 & 1 !=0 || iParam5 & 2 !=0) || iParam5 & 32 !=0){
if(*uParam2==1 || *uParam2==10){
*uParam2=14;
*uParam3=0;
}}
if(iParam5 & 2 !=0 || iParam5 & 64 !=0){
if(*uParam2==19){
*uParam2=14;
*uParam3=0;
}}}elseif(iParam1==9){
if(iParam5 & 2 !=0 || iParam5 & 4 !=0){
if(*uParam2==5){
*uParam2=0;
*uParam3=0;
}}}
break;
case 2:
if(iParam1==8){
if((iParam5 & 1 !=0 || iParam5 & 2 !=0) || iParam5 & 32 !=0){
if(*uParam2==3){
*uParam2=14;
*uParam3=0;
}}}elseif(iParam1==9){
if(*uParam2 >=5 && *uParam2 <=7){
if(iParam5 & 2 !=0 || iParam5 & 4 !=0){
*uParam2=0;
*uParam3=0;
}}}
break;
}}

int func_59(){
func_60();
return Global_113810.f_2366.f_539.f_4321;
}


void func_60(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_48(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_47(PLAYER::PLAYER_PED_ID());
if(func_38(iVar0) && (!func_61(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_38(Global_113810.f_2366.f_539.f_4321)){
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


bool func_61(int iParam0){
return Global_43377==iParam0;
}


void func_62(int iParam0, bool bParam1){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
iVar0=func_47(iParam0);
if(func_38(iVar0) && !PED::IS_PED_INJURED(iParam0)){
if(iParam0==PLAYER::PLAYER_PED_ID()){
func_63(iParam0, &(Global_113810.f_2366.f_539.f_298[iVar0 /*477*/]));
iVar2=0;
while (iVar2 <=(8 - 1)){
Global_113810.f_2366.f_539.f_1730[iVar2 /*4*/][iVar0]=HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(iVar2);
if(bParam1){
iVar1=HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED();
if(Global_113810.f_2366.f_539.f_1730[iVar2 /*4*/][iVar0]==iVar1){
Global_113810.f_2366.f_539.f_1763=iVar2;
}}
iVar2++;
}
PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &uVar3);
if(iVar0==0){
STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), uVar3, 1);
}elseif(iVar0==1){
STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), uVar3, 1);
}elseif(iVar0==2){
STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), uVar3, 1);
}}}}


void func_63(int iParam0, var uParam1){
int iVar0;
bool bVar1;
int iVar2;
int iVar3;
struct<5> Var4;
int iVar5;
int iVar6;
struct<2> Var7;
struct<4> Var8;
int iVar9;
bool bVar10;
if(!PED::IS_PED_INJURED(iParam0)){
iVar0=0;
while (iVar0 <=(44 - 1)){
(uParam1[iVar0 /*5*/])->f_1=0;
iVar0++;
}
iVar0=0;
while (iVar0 <=(44 - 1)){
iVar3=func_68(iVar0);
if(iVar3 !=0){
Var4.f_0=WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_68(iVar0));
Var4.f_1=0;
Var4.f_2=0;
Var4.f_3=0;
Var4.f_4=0;
if(Var4.f_0 !=0 && Var4.f_0 !=joaat("weapon_unarmed")){
Var4.f_1=WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
if(Var4.f_0==joaat("gadget_parachute")){
Var4.f_1=1;
}
Var4.f_3=WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
Var4.f_4=WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
if(Var4.f_1==-1){
if(!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1))){
Var4.f_1=0;
}}
(uParam1[iVar0 /*5*/])->f_1=Var4.f_1;
bVar1=false;
iVar2=func_66(Var4.f_0, bVar1);
while (iVar2 !=0){
if(WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, iVar2)){
MISC::SET_BIT(&(Var4.f_2), bVar1);
}
bVar1++;
iVar2=func_66(Var4.f_0, bVar1);
}}
*(uParam1[iVar0 /*5*/])={
Var4 
};
}
iVar0++;
}
iVar0=0;
while (iVar0 <=50){
uParam1->f_221[iVar0 /*5*/].f_1=0;
iVar0++;
}
iVar6=FILES::GET_NUM_DLC_WEAPONS_SP();
iVar5=0;
while (iVar5 < iVar6){
if((FILES::GET_DLC_WEAPON_DATA_SP(iVar5, &Var7) && !func_65(Var7.f_1)) && iVar9 < 51){
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var7.f_0)){
Var4.f_0=Var7.f_1;
Var4.f_1=0;
Var4.f_2=0;
Var4.f_3=0;
Var4.f_4=0;
Var4.f_1=WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
if(WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, 0)){
Var4.f_3=WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
Var4.f_4=WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
}
if(Var4.f_1==-1){
if(!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1))){
Var4.f_1=0;
}}
uParam1->f_221[iVar9 /*5*/].f_1=Var4.f_1;
bVar10=false;
bVar1=false;
while (bVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS_SP(iVar5)){
if(FILES::GET_DLC_WEAPON_COMPONENT_DATA_SP(iVar5, bVar1, &Var8)){
if(!func_64(Var8.f_3)){
if(WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, Var8.f_3)){
MISC::SET_BIT(&(Var4.f_2), bVar10);
}
bVar10++;
}
}
bVar1++;
}}
if(Var4.f_0 !=0){
if(!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, 0)){
Var4.f_0=0;
Var4.f_1=0;
}}
uParam1->f_221[iVar9 /*5*/]={
Var4 
};
iVar9++;
}
iVar5++;
}}}

int func_64(int iParam0){
switch (iParam0){
case joaat("component_pistol_mk2_camo_slide"):
case joaat("component_pistol_mk2_camo_02_slide"):
case joaat("component_pistol_mk2_camo_03_slide"):
case joaat("component_pistol_mk2_camo_04_slide"):
case joaat("component_pistol_mk2_camo_05_slide"):
case joaat("component_pistol_mk2_camo_06_slide"):
case joaat("component_pistol_mk2_camo_07_slide"):
case joaat("component_pistol_mk2_camo_08_slide"):
case joaat("component_pistol_mk2_camo_09_slide"):
case joaat("component_pistol_mk2_camo_10_slide"):
case joaat("component_pistol_mk2_camo_ind_01_slide"):
case joaat("component_snspistol_mk2_camo_slide"):
case joaat("component_snspistol_mk2_camo_02_slide"):
case joaat("component_snspistol_mk2_camo_03_slide"):
case joaat("component_snspistol_mk2_camo_04_slide"):
case joaat("component_snspistol_mk2_camo_05_slide"):
case joaat("component_snspistol_mk2_camo_06_slide"):
case joaat("component_snspistol_mk2_camo_07_slide"):
case joaat("component_snspistol_mk2_camo_08_slide"):
case joaat("component_snspistol_mk2_camo_09_slide"):
case joaat("component_snspistol_mk2_camo_10_slide"):
case joaat("component_snspistol_mk2_camo_ind_01_slide"):
case joaat("component_pistol_mk2_varmod_xm3_slide"):
return 1;
break;
}
return 0;
}

int func_65(int iParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){}else{
switch (iParam0){
case joaat("weapon_pistol50"):
case joaat("weapon_bullpupshotgun"):
case joaat("weapon_assaultsmg"):
return 0;
break;
case joaat("weapon_bottle"):
case joaat("weapon_snspistol"):
case joaat("weapon_gusenberg"):
return 0;
break;
case joaat("weapon_heavypistol"):
case joaat("weapon_specialcarbine"):
return 0;
break;
case joaat("weapon_bullpuprifle"):
return 0;
break;
case joaat("weapon_dagger"):
case joaat("weapon_vintagepistol"):
return 0;
break;
case joaat("weapon_firework"):
case joaat("weapon_musket"):
return 0;
break;
case joaat("weapon_heavyshotgun"):
case joaat("weapon_marksmanrifle"):
return 0;
break;
case joaat("weapon_hominglauncher"):
case joaat("weapon_proxmine"):
return 0;
break;
case joaat("weapon_combatpdw"):
case joaat("weapon_knuckle"):
case joaat("weapon_marksmanpistol"):
return 0;
break;
case joaat("weapon_heavyrifle"):
case -572349828:
case 392730790:
case -1523701417:
case -2112826155:
case -664359727:
case -1887867191:
case -837150131:
case -344484024:
case joaat("weapon_flaregun"):
case joaat("weapon_handcuffs"):
case joaat("weapon_snowball"):
case joaat("weapon_garbagebag"):
case joaat("weapon_flashlight"):
case joaat("weapon_switchblade"):
case joaat("weapon_revolver"):
case joaat("weapon_dbshotgun"):
case joaat("weapon_compactrifle"):
case joaat("weapon_autoshotgun"):
case joaat("weapon_minismg"):
case joaat("weapon_compactlauncher"):
case joaat("weapon_battleaxe"):
case joaat("weapon_pipebomb"):
case joaat("weapon_poolcue"):
case joaat("weapon_wrench"):
case joaat("weapon_doubleaction"):
case joaat("weapon_raycarbine"):
case joaat("weapon_rayminigun"):
case joaat("weapon_raypistol"):
case joaat("weapon_navyrevolver"):
case joaat("weapon_ceramicpistol"):
case joaat("weapon_gadgetpistol"):
case joaat("weapon_militaryrifle"):
case joaat("weapon_combatshotgun"):
case joaat("weapon_emplauncher"):
case joaat("weapon_fertilizercan"):
case joaat("weapon_stungun_mp"):
case joaat("weapon_metaldetector"):
case joaat("weapon_precisionrifle"):
case joaat("weapon_tacticalrifle"):
case joaat("weapon_pistolxm3"):
case joaat("weapon_candycane"):
case joaat("weapon_railgunxm3"):
case 350597077:
return 1;
break;
}}
return 0;
}

int func_66(int iParam0, bool bParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
struct<4> Var5;
iVar0=0;
switch (iParam0){
case joaat("weapon_pistol"):
switch (bParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_pistol_clip_01");
break;
case 2:
iVar0=joaat("component_pistol_clip_02");
break;
case 3:
iVar0=joaat("component_at_pi_flsh");
break;
case 4:
iVar0=joaat("component_at_pi_supp_02");
break;
case 5:
iVar0=joaat("component_pistol_varmod_luxe");
break;
}
break;
case joaat("weapon_combatpistol"):
switch (bParam1){
case 0:
iVar0=joaat("component_combatpistol_clip_01");
break;
case 1:
iVar0=joaat("component_combatpistol_clip_02");
break;
case 2:
iVar0=joaat("component_at_pi_flsh");
break;
case 3:
iVar0=joaat("component_at_pi_supp");
break;
case 4:
iVar0=joaat("component_combatpistol_varmod_lowrider");
break;
}
break;
case joaat("weapon_appistol"):
switch (bParam1){
case 0:
iVar0=joaat("component_appistol_clip_01");
break;
case 1:
iVar0=joaat("component_appistol_clip_02");
break;
case 2:
iVar0=joaat("component_at_pi_flsh");
break;
case 3:
iVar0=joaat("component_at_pi_supp");
break;
case 4:
iVar0=joaat("component_appistol_varmod_luxe");
break;
case 5:
iVar0=joaat("component_appistol_varmod_security");
break;
}
break;
case joaat("weapon_microsmg"):
switch (bParam1){
case 0:
iVar0=joaat("component_microsmg_clip_01");
break;
case 1:
iVar0=joaat("component_microsmg_clip_02");
break;
case 2:
iVar0=joaat("component_at_pi_flsh");
break;
case 3:
iVar0=joaat("component_at_scope_macro");
break;
case 4:
iVar0=joaat("component_at_ar_supp_02");
break;
case 5:
iVar0=joaat("component_microsmg_varmod_luxe");
break;
case 6:
iVar0=joaat("component_microsmg_varmod_security");
break;
case 7:
iVar0=joaat("component_microsmg_varmod_xm3");
break;
case 8:
iVar0=1694268374;
break;
}
break;
case joaat("weapon_smg"):
switch (bParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_smg_clip_01");
break;
case 2:
iVar0=joaat("component_smg_clip_02");
break;
case 3:
iVar0=joaat("component_smg_clip_03");
break;
case 4:
iVar0=joaat("component_at_ar_flsh");
break;
case 5:
iVar0=joaat("component_at_pi_supp");
break;
case 6:
iVar0=joaat("component_at_scope_macro_02");
break;
case 7:
iVar0=joaat("component_at_ar_afgrip");
break;
case 8:
iVar0=joaat("component_smg_varmod_luxe");
break;
}
break;
case joaat("weapon_assaultrifle"):
switch (bParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_assaultrifle_clip_01");
break;
case 2:
iVar0=joaat("component_assaultrifle_clip_02");
break;
case 3:
iVar0=joaat("component_assaultrifle_clip_03");
break;
case 4:
iVar0=joaat("component_at_ar_afgrip");
break;
case 5:
iVar0=joaat("component_at_ar_flsh");
break;
case 6:
iVar0=joaat("component_at_scope_macro");
break;
case 7:
iVar0=joaat("component_at_ar_supp_02");
break;
case 8:
iVar0=joaat("component_assaultrifle_varmod_luxe");
break;
}
break;
case joaat("weapon_carbinerifle"):
switch (bParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_carbinerifle_clip_01");
break;
case 2:
iVar0=joaat("component_carbinerifle_clip_02");
break;
case 3:
iVar0=joaat("component_carbinerifle_clip_03");
break;
case 4:
iVar0=joaat("component_at_railcover_01");
break;
case 5:
iVar0=joaat("component_at_ar_afgrip");
break;
case 6:
iVar0=joaat("component_at_ar_flsh");
break;
case 7:
iVar0=joaat("component_at_scope_medium");
break;
case 8:
iVar0=joaat("component_at_ar_supp");
break;
case 9:
iVar0=joaat("component_carbinerifle_varmod_luxe");
break;
case 10:
iVar0=1605520746;
break;
}
break;
case joaat("weapon_advancedrifle"):
switch (bParam1){
case 0:
iVar0=joaat("component_advancedrifle_clip_01");
break;
case 1:
iVar0=joaat("component_advancedrifle_clip_02");
break;
case 2:
iVar0=joaat("component_at_ar_flsh");
break;
case 3:
iVar0=joaat("component_at_scope_small");
break;
case 4:
iVar0=joaat("component_at_ar_supp");
break;
case 5:
iVar0=joaat("component_advancedrifle_varmod_luxe");
break;
}
break;
case joaat("weapon_mg"):
switch (bParam1){
case 0:
iVar0=joaat("component_mg_clip_01");
break;
case 1:
iVar0=joaat("component_mg_clip_02");
break;
case 2:
iVar0=joaat("component_at_scope_small_02");
break;
case 3:
iVar0=joaat("component_at_ar_afgrip");
break;
case 4:
iVar0=joaat("component_mg_varmod_lowrider");
break;
}
break;
case joaat("weapon_combatmg"):
switch (bParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_combatmg_clip_01");
break;
case 2:
iVar0=joaat("component_combatmg_clip_02");
break;
case 3:
iVar0=joaat("component_at_ar_afgrip");
break;
case 4:
iVar0=joaat("component_at_scope_medium");
break;
case 5:
iVar0=joaat("component_combatmg_varmod_lowrider");
break;
}
break;
case joaat("weapon_pumpshotgun"):
switch (bParam1){
case 0:
iVar0=joaat("component_at_sr_supp");
break;
case 1:
iVar0=joaat("component_at_ar_flsh");
break;
case 2:
iVar0=joaat("component_pumpshotgun_varmod_lowrider");
break;
case 3:
iVar0=joaat("component_pumpshotgun_varmod_security");
break;
case 4:
iVar0=joaat("component_pumpshotgun_varmod_xm3");
break;
}
break;
case joaat("weapon_assaultshotgun"):
switch (bParam1){
case 0:
iVar0=joaat("component_assaultshotgun_clip_01");
break;
case 1:
iVar0=joaat("component_assaultshotgun_clip_02");
break;
case 2:
iVar0=joaat("component_at_ar_afgrip");
break;
case 3:
iVar0=joaat("component_at_ar_flsh");
break;
case 4:
iVar0=joaat("component_at_ar_supp");
break;
}
break;
case joaat("weapon_sniperrifle"):
switch (bParam1){
case 0:
iVar0=joaat("component_sniperrifle_clip_01");
break;
case 1:
iVar0=joaat("component_at_scope_large");
break;
case 2:
iVar0=joaat("component_at_scope_max");
break;
case 3:
iVar0=joaat("component_at_ar_supp_02");
break;
case 4:
iVar0=joaat("component_sniperrifle_varmod_luxe");
break;
}
break;
case joaat("weapon_heavysniper"):
switch (bParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_heavysniper_clip_01");
break;
case 2:
iVar0=joaat("component_at_scope_large");
break;
case 3:
iVar0=joaat("component_at_scope_max");
break;
}
break;
case joaat("weapon_grenadelauncher"):
switch (bParam1){
case 0:
iVar0=joaat("component_at_ar_afgrip");
break;
case 1:
iVar0=joaat("component_at_ar_flsh");
break;
case 2:
iVar0=joaat("component_at_scope_small");
break;
}
break;
case joaat("weapon_minigun"):
switch (bParam1){
case 0:
iVar0=joaat("component_minigun_clip_01");
break;
}
break;
case joaat("weapon_assaultsmg"):
switch (bParam1){
case 0:
iVar0=joaat("component_assaultsmg_clip_01");
break;
case 1:
iVar0=joaat("component_assaultsmg_clip_02");
break;
case 2:
iVar0=joaat("component_at_ar_flsh");
break;
case 3:
iVar0=joaat("component_at_scope_macro");
break;
case 4:
iVar0=joaat("component_at_ar_supp_02");
break;
case 5:
iVar0=joaat("component_assaultsmg_varmod_lowrider");
break;
}
break;
case joaat("weapon_bullpupshotgun"):
switch (bParam1){
case 0:
iVar0=joaat("component_at_ar_afgrip");
break;
case 1:
iVar0=joaat("component_at_ar_flsh");
break;
case 2:
iVar0=joaat("component_at_ar_supp_02");
break;
}
break;
case joaat("weapon_pistol50"):
switch (bParam1){
case 0:
iVar0=joaat("component_pistol50_clip_01");
break;
case 1:
iVar0=joaat("component_pistol50_clip_02");
break;
case 2:
iVar0=joaat("component_at_pi_flsh");
break;
case 3:
iVar0=joaat("component_at_ar_supp_02");
break;
case 4:
iVar0=joaat("component_pistol50_varmod_luxe");
break;
}
break;
case joaat("weapon_combatpdw"):
switch (bParam1){
case 0:
iVar0=joaat("component_combatpdw_clip_01");
break;
case 1:
iVar0=joaat("component_combatpdw_clip_02");
break;
case 2:
iVar0=joaat("component_combatpdw_clip_03");
break;
case 3:
iVar0=joaat("component_at_ar_flsh");
break;
case 4:
iVar0=joaat("component_at_scope_small");
break;
case 5:
iVar0=joaat("component_at_ar_afgrip");
break;
}
break;
case joaat("weapon_sawnoffshotgun"):
switch (bParam1){
case 0:
iVar0=joaat("component_sawnoffshotgun_varmod_luxe");
break;
}
break;
case joaat("weapon_bullpuprifle"):
switch (bParam1){
case 0:
iVar0=joaat("component_bullpuprifle_clip_01");
break;
case 1:
iVar0=joaat("component_bullpuprifle_clip_02");
break;
case 2:
iVar0=joaat("component_at_ar_flsh");
break;
case 3:
iVar0=joaat("component_at_scope_small");
break;
case 4:
iVar0=joaat("component_at_ar_supp");
break;
case 5:
iVar0=joaat("component_at_ar_afgrip");
break;
case 6:
iVar0=joaat("component_bullpuprifle_varmod_low");
break;
}
break;
case joaat("weapon_snspistol"):
switch (bParam1){
case 0:
iVar0=joaat("component_snspistol_clip_01");
break;
case 1:
iVar0=joaat("component_snspistol_clip_02");
break;
case 2:
iVar0=joaat("component_snspistol_varmod_lowrider");
break;
}
break;
case joaat("weapon_specialcarbine"):
switch (bParam1){
case 0:
iVar0=joaat("component_specialcarbine_clip_01");
break;
case 1:
iVar0=joaat("component_specialcarbine_clip_02");
break;
case 2:
iVar0=joaat("component_specialcarbine_clip_03");
break;
case 3:
iVar0=joaat("component_at_ar_flsh");
break;
case 4:
iVar0=joaat("component_at_scope_medium");
break;
case 5:
iVar0=joaat("component_at_ar_supp_02");
break;
case 6:
iVar0=joaat("component_at_ar_afgrip");
break;
case 7:
iVar0=joaat("component_specialcarbine_varmod_lowrider");
break;
}
break;
case joaat("weapon_knuckle"):
switch (bParam1){
case 0:
iVar0=joaat("component_knuckle_varmod_pimp");
break;
case 1:
iVar0=joaat("component_knuckle_varmod_ballas");
break;
case 2:
iVar0=joaat("component_knuckle_varmod_dollar");
break;
case 3:
iVar0=joaat("component_knuckle_varmod_diamond");
break;
case 4:
iVar0=joaat("component_knuckle_varmod_hate");
break;
case 5:
iVar0=joaat("component_knuckle_varmod_love");
break;
case 6:
iVar0=joaat("component_knuckle_varmod_player");
break;
case 7:
iVar0=joaat("component_knuckle_varmod_king");
break;
case 8:
iVar0=joaat("component_knuckle_varmod_vagos");
break;
}
break;
case joaat("weapon_machinepistol"):
switch (bParam1){
case 0:
iVar0=joaat("component_machinepistol_clip_01");
break;
case 1:
iVar0=joaat("component_machinepistol_clip_02");
break;
case 2:
iVar0=joaat("component_machinepistol_clip_03");
break;
case 3:
iVar0=joaat("component_at_pi_supp");
break;
}
break;
case joaat("weapon_switchblade"):
switch (bParam1){
case 0:
iVar0=joaat("component_switchblade_varmod_var1");
break;
case 1:
iVar0=joaat("component_switchblade_varmod_var2");
break;
}
break;
case joaat("weapon_revolver"):
switch (bParam1){
case 0:
iVar0=joaat("component_revolver_clip_01");
break;
case 1:
iVar0=joaat("component_revolver_varmod_boss");
break;
case 2:
iVar0=joaat("component_revolver_varmod_goon");
break;
}
break;
case joaat("weapon_minismg"):
switch (bParam1){
case 0:
iVar0=joaat("component_minismg_clip_01");
break;
case 1:
iVar0=joaat("component_minismg_clip_02");
break;
}
break;
case joaat("weapon_bat"):
switch (bParam1){
case 0:
iVar0=joaat("component_bat_varmod_xm3");
break;
case 1:
iVar0=joaat("component_bat_varmod_xm3_01");
break;
case 2:
iVar0=joaat("component_bat_varmod_xm3_02");
break;
case 3:
iVar0=joaat("component_bat_varmod_xm3_03");
break;
case 4:
iVar0=joaat("component_bat_varmod_xm3_04");
break;
case 5:
iVar0=joaat("component_bat_varmod_xm3_05");
break;
case 6:
iVar0=joaat("component_bat_varmod_xm3_06");
break;
case 7:
iVar0=joaat("component_bat_varmod_xm3_07");
break;
case 8:
iVar0=joaat("component_bat_varmod_xm3_08");
break;
case 9:
iVar0=joaat("component_bat_varmod_xm3_09");
break;
}
break;
case joaat("weapon_rpg"):
switch (bParam1){
case 0:
iVar0=-1240142720;
break;
}
break;
default:
if(iParam0 !=0){
iVar1=func_67(iParam0, &uVar4);
if(iVar1 !=-1){
iVar2=0;
while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1)){
if(FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var5)){
if(!func_64(Var5.f_3)){
if(iVar3==bParam1){
return Var5.f_3;
}
iVar3++;
}
}
iVar2++;
}}}
break;
}
return iVar0;
}

int func_67(int iParam0, var uParam1){
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

int func_68(int iParam0){
int iVar0;
iVar0=0;
switch (iParam0){
case 0:
iVar0=1993361168;
break;
case 1:
iVar0=1277010230;
break;
case 2:
iVar0=932043479;
break;
case 3:
iVar0=-690654591;
break;
case 4:
iVar0=-1459198205;
break;
case 5:
iVar0=195782970;
break;
case 6:
iVar0=-438797331;
break;
case 7:
iVar0=896793492;
break;
case 8:
iVar0=495159329;
break;
case 9:
iVar0=-1155528315;
break;
case 10:
iVar0=-515636489;
break;
case 11:
iVar0=-871913299;
break;
case 12:
iVar0=-1352759032;
break;
case 13:
iVar0=-542958961;
break;
case 14:
iVar0=1682645887;
break;
case 15:
iVar0=-859470162;
break;
case 16:
iVar0=-2125426402;
break;
case 17:
iVar0=2067210266;
break;
case 18:
iVar0=-538172856;
break;
case 19:
iVar0=1783244476;
break;
case 20:
iVar0=439844898;
break;
case 21:
iVar0=-24829327;
break;
case 22:
iVar0=1949306232;
break;
case 23:
iVar0=-1941230881;
break;
case 24:
iVar0=-1033554448;
break;
case 25:
iVar0=320513715;
break;
case 26:
iVar0=-695165975;
break;
case 27:
iVar0=-281028447;
break;
case 28:
iVar0=-686713772;
break;
case 29:
iVar0=347509793;
break;
case 30:
iVar0=1769089473;
break;
case 31:
iVar0=189935548;
break;
case 33:
iVar0=248801358;
break;
case 34:
iVar0=386596758;
break;
case 35:
iVar0=-157212362;
break;
case 36:
iVar0=436985596;
break;
case 37:
iVar0=-47957369;
break;
case 38:
iVar0=575938238;
break;
}
return iVar0;
}


void func_69(int iParam0){
int iVar0;
iVar0=func_47(iParam0);
if(func_38(iVar0) && !PED::IS_PED_INJURED(iParam0)){
Global_113810.f_2366.f_539.f_294[iVar0]=PED::GET_PED_ARMOUR(iParam0);
}}


void func_70(var uParam0, int iParam1){
int iVar0;
struct<3> Var1;
var uVar2;
int iVar3;
*uParam0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
uParam0->f_3=ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
uParam0->f_5=PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
uParam0->f_4=PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
}
if(vdist(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f){
*uParam0={
301.2162f, 202.1357f, 103.3797f 
};
uParam0->f_3=156.5144f;
}elseif(vdist(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f){
*uParam0={
394.2567f, -713.5439f, 28.2853f 
};
uParam0->f_3=276.6273f;
}elseif(vdist(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f){
*uParam0={
-1423.472f, -214.2539f, 45.5004f 
};
uParam0->f_3=353.8757f;
}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0){
*uParam0={
4.2587f, 525.0214f, 173.6281f 
};
uParam0->f_3=203.6746f;
}elseif(MISC::IS_BIT_SET(Global_78938, 4)){
*uParam0={
452.0255f, 5571.85f, 780.1859f 
};
uParam0->f_3=78.9858f;
}elseif(MISC::IS_BIT_SET(Global_78938, 5)){
*uParam0={
-745.4462f, 5595.146f, 40.6594f 
};
uParam0->f_3=261.747f;
}elseif(MISC::IS_BIT_SET(Global_78938, 6)){
*uParam0={
-1675.521f, -1125.59f, 12.091f 
};
uParam0->f_3=271.8208f;
}elseif(MISC::IS_BIT_SET(Global_78938, 7)){
*uParam0={
-1631.219f, -1112.805f, 12.0212f 
};
uParam0->f_3=316.8879f;
}elseif(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.659f, -1715.467f, 53.7715f, "v_lesters")){
*uParam0={
1276.956f, -1725.189f, 53.6551f 
};
uParam0->f_3=204.1703f;
}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0)){
*uParam0={
-601.59f, 2099.197f, 128.8928f 
};
uParam0->f_3=204.7498f;
}elseif(vdist(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f){
*uParam0={
-1018.376f, -483.9436f, 36.0964f 
};
uParam0->f_3=114.7664f;
}elseif(vdist(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f){
*uParam0={
497.7238f, -1310.932f, 28.2372f 
};
uParam0->f_3=289.3663f;
}elseif(vdist(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f){
*uParam0={
2316.93f, 2594.153f, 45.7199f 
};
uParam0->f_3=348.1325f;
}
if(iParam1==1){
if(func_74(&iVar0)){
if(func_72(iVar0, &Var1, &uVar2)){
Var1.f_2=(Var1.f_2 + 1f);
*uParam0={
Var1 
};
uParam0->f_3=uVar2;
}}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0)){
iVar3=func_114();
if(iVar3==0){
*uParam0={
-65.1234f, 81.2517f, 70.5644f 
};
uParam0->f_3=71.6237f;
}elseif(iVar3==1){
*uParam0={
-68.5531f, -1824.377f, 25.9424f 
};
uParam0->f_3=215.8295f;
}elseif(iVar3==2){
*uParam0={
-220.8189f, -1162.302f, 22.0242f 
};
uParam0->f_3=70.2711f;
}}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0)){
*uParam0={
495.4108f, -1306.08f, 29.2883f 
};
uParam0->f_3=213.6273f;
}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0)){
*uParam0={
-1160.095f, -1515.407f, 3.1496f 
};
uParam0->f_3=305.6424f;
}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0)){
*uParam0={
431.8853f, -1013.133f, 28.7907f 
};
uParam0->f_3=186.6814f;
}elseif(func_71(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f)){
*uParam0={
279.4137f, -585.8815f, 43.2502f 
};
uParam0->f_3=48.8028f;
}}}

int func_71(struct<3> Param0, char* sParam1, struct<3> Param2){
int iVar0;
int iVar1;
if(!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0)){
iVar0=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param2, sParam1);
if(!INTERIOR::IS_VALID_INTERIOR(iVar0)){
return 0;
}
iVar1=INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
if(iVar1==iVar0){
return 1;
}}
return 0;
}


bool func_72(int iParam0, var uParam1, var uParam2){
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
switch (iParam0){
case 0:
*uParam1={
-829.842f, -191.7454f, 36.4386f 
};
*uParam2=29.5061f;
break;
case 1:
*uParam1={
129.8484f, -1716.528f, 28.0702f 
};
*uParam2=50.3483f;
break;
case 2:
*uParam1={
-1296.913f, -1120.999f, 5.3951f 
};
*uParam2=0.9933f;
break;
case 3:
*uParam1={
1938.028f, 3718.736f, 31.3154f 
};
*uParam2=118.2305f;
break;
case 4:
*uParam1={
1197.866f, -469.3809f, 65.0885f 
};
*uParam2=346.4477f;
break;
case 5:
*uParam1={
-32.2161f, -135.8212f, 56.0532f 
};
*uParam2=186.0052f;
break;
case 6:
*uParam1={
-287.7696f, 6238.081f, 30.2902f 
};
*uParam2=316.1349f;
break;
case 7:
*uParam1={
99.2876f, -1395.16f, 28.2759f 
};
*uParam2=320.2739f;
break;
case 8:
*uParam1={
1679.445f, 4819.056f, 41.0035f 
};
*uParam2=4.6192f;
break;
case 9:
*uParam1={
411.3063f, -809.1863f, 28.1554f 
};
*uParam2=1.8972f;
break;
case 10:
*uParam1={
-1088.054f, 2699.167f, 19.2748f 
};
*uParam2=129.7382f;
break;
case 11:
*uParam1={
1194.163f, 2695.644f, 36.9225f 
};
*uParam2=1.1454f;
break;
case 12:
*uParam1={
-821.2829f, -1088.027f, 10.0499f 
};
*uParam2=120.5883f;
break;
case 13:
*uParam1={
-3.3416f, 6521.303f, 30.2961f 
};
*uParam2=316.4451f;
break;
case 14:
*uParam1={
-1208.417f, -785.9635f, 16.0139f 
};
*uParam2=36.3181f;
break;
case 15:
*uParam1={
623.1845f, 2739.191f, 40.9588f 
};
*uParam2=3.5411f;
break;
case 16:
*uParam1={
130.9555f, -198.2084f, 53.41f 
};
*uParam2=251.3506f;
break;
case 17:
*uParam1={
-3164.065f, 1067.317f, 19.6778f 
};
*uParam2=101.2229f;
break;
case 18:
*uParam1={
-713.2797f, -174.2767f, 35.8962f 
};
*uParam2=29.8138f;
break;
case 19:
*uParam1={
-147.0616f, -306.4322f, 37.7912f 
};
*uParam2=160.4526f;
break;
case 20:
*uParam1={
-1461.355f, -230.6092f, 48.3064f 
};
*uParam2=318.7851f;
break;
case 21:
*uParam1={
-1347.739f, -1278.573f, 3.8952f 
};
*uParam2=17.9365f;
break;
case 22:
*uParam1={
325.6833f, 164.3263f, 102.4425f 
};
*uParam2=68.6407f;
break;
case 23:
*uParam1={
1858.774f, 3742.393f, 32.0779f 
};
*uParam2=301.2329f;
break;
case 24:
*uParam1={
-286.3272f, 6202.802f, 30.3323f 
};
*uParam2=225.1334f;
break;
case 25:
*uParam1={
-1161.596f, -1417.7f, 3.712f 
};
*uParam2=246.9161f;
break;
case 26:
*uParam1={
1308.952f, -1660.611f, 50.2362f 
};
*uParam2=163.5456f;
break;
case 27:
*uParam1={
-3161.585f, 1074.214f, 19.6847f 
};
*uParam2=98.6092f;
break;
case 28:
*uParam1={
28.423f, -1110.814f, 28.2848f 
};
*uParam2=85.2495f;
break;
case 29:
*uParam1={
1704.966f, 3749.709f, 33.0188f 
};
*uParam2=45.6778f;
break;
case 30:
*uParam1={
223.949f, -38.7894f, 68.6483f 
};
*uParam2=159.4265f;
break;
case 31:
*uParam1={
837.7854f, -1017.963f, 26.3045f 
};
*uParam2=181.0445f;
break;
case 32:
*uParam1={
-313.1914f, 6093.351f, 30.4625f 
};
*uParam2=315.8405f;
break;
case 33:
*uParam1={
-663.4631f, -952.8069f, 20.3143f 
};
*uParam2=92.6796f;
break;
case 34:
*uParam1={
-1323.06f, -392.8577f, 35.4596f 
};
*uParam2=210.7398f;
break;
case 35:
*uParam1={
-1106.102f, 2684.35f, 18.0953f 
};
*uParam2=127.0383f;
break;
case 36:
*uParam1={
-3157.932f, 1081.309f, 19.6953f 
};
*uParam2=100.2942f;
break;
case 37:
*uParam1={
2562.882f, 312.8641f, 107.4612f 
};
*uParam2=179.205f;
break;
case 38:
*uParam1={
822.48f, -2142.875f, 27.8496f 
};
*uParam2=355.0598f;
break;
case 39:
*uParam1={
-1137.053f, -1993.916f, 12.1677f 
};
*uParam2=43.1213f;
break;
case 40:
*uParam1={
717.8107f, -1084.081f, 21.3094f 
};
*uParam2=93.2649f;
break;
case 41:
*uParam1={
-387.6789f, -128.2568f, 37.6796f 
};
*uParam2=119.1085f;
break;
case 42:
*uParam1={
117.8835f, 6599.415f, 31.0134f 
};
*uParam2=90.7225f;
break;
case 43:
*uParam1={
1201.709f, 2664.813f, 36.8102f 
};
*uParam2=133.9002f;
break;
case 44:
*uParam1={
-200.1521f, -1297.502f, 30.296f 
};
*uParam2=269.0687f;
break;
case 45:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 46:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 47:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 48:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 49:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 52:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 50:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 51:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 53:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 54:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 55:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 56:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 57:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
}
return !func_73(*uParam1, 0f, 0f, 0f, 0);
}


bool func_73(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}

int func_74(var uParam0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_102()){
*uParam0=func_80(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 6, -1, 0, 1, -1);
if(func_79(*uParam0) && !func_75(*uParam0)){
return 1;
}}}
return 0;
}


bool func_75(int iParam0){
return func_76(iParam0, 0, 1);
}

int func_76(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100885.f_1414[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_78()==0){
return MISC::IS_BIT_SET(func_51(func_77(iParam0), -1), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113810.f_668[iParam0], iParam1);
}
return 0;
}

int func_77(int iParam0){
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
return 12514;
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
case 58:
return 11433;
break;
case 59:
return 11844;
break;
case 60:
return 11901;
break;
default:
break;
}
return 14385;
}

int func_78(){
return Global_32283;
}

int func_79(int iParam0){
return func_76(iParam0, 5, 1);
}

int func_80(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
fVar2=1000000f;
iVar3=-1;
iVar0=0;
while (iVar0 <=60){
if(iParam1==6 || iParam1==func_101(iVar0)){
if(!bParam3 || func_100(iVar0)){
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_81(iVar0, 0), 1);
if(((fVar1 < fVar2 && (fVar1 <=IntToFloat(iParam2) || iParam2==-1)) && (iParam4 || iVar0 !=21)) && iVar0 !=iParam5){
fVar2=fVar1;
iVar3=iVar0;
}}}
iVar0++;
}
return iVar3;
}


Vector3 func__81(int iParam0, bool bParam1){
switch (iParam0){
case -1:
return 0f, 0f, 0f;
break;
case 0:
return -821.9946f, -187.1776f, 36.5689f;
break;
case 1:
return 133.5702f, -1710.918f, 28.2916f;
break;
case 2:
return -1287.082f, -1116.558f, 5.9901f;
break;
case 3:
return 1933.119f, 3726.079f, 31.8444f;
break;
case 4:
return 1208.333f, -470.917f, 65.208f;
break;
case 5:
return -30.7448f, -148.4921f, 56.0765f;
break;
case 6:
return -280.8165f, 6231.771f, 30.6955f;
break;
case 7:
return 80.665f, -1391.669f, 28.3761f;
break;
case 8:
return 1687.881f, 4820.55f, 41.0096f;
break;
case 9:
return 419.531f, -807.5787f, 28.4896f;
break;
case 10:
return -1094.049f, 2704.171f, 18.0873f;
break;
case 11:
return 1197.972f, 2704.22f, 37.1572f;
break;
case 12:
return -818.6218f, -1077.533f, 10.3282f;
break;
case 13:
return -0.2361f, 6516.045f, 30.8684f;
break;
case 14:
return -1199.809f, -776.6886f, 16.3237f;
break;
case 15:
return 618.1857f, 2752.567f, 41.0881f;
break;
case 16:
return 126.6853f, -212.5027f, 53.5578f;
break;
case 17:
return -3168.966f, 1055.287f, 19.8632f;
break;
case 18:
return -715.3598f, -155.7742f, 36.4105f;
break;
case 19:
return -158.2199f, -304.9663f, 38.735f;
break;
case 20:
return -1455.005f, -233.1862f, 48.7936f;
break;
case 21:
return -1335.973f, -1278.555f, 3.8598f;
break;
case 22:
return 321.6098f, 179.4165f, 102.5865f;
break;
case 23:
return 1861.685f, 3750.08f, 32.0318f;
break;
case 24:
return -290.1603f, 6199.095f, 30.4871f;
break;
case 25:
return -1153.948f, -1425.019f, 3.9544f;
break;
case 26:
return 1322.455f, -1651.125f, 51.1885f;
break;
case 27:
return -3169.42f, 1074.727f, 19.8343f;
break;
case 28:
return 17.6804f, -1114.288f, 28.797f;
break;
case 29:
return 1697.979f, 3753.2f, 33.7053f;
break;
case 30:
return 245.2711f, -45.8126f, 68.941f;
break;
case 31:
return 844.1248f, -1025.571f, 27.1948f;
break;
case 32:
return -325.8904f, 6077.026f, 30.4548f;
break;
case 33:
return -664.2178f, -943.3646f, 20.8292f;
break;
case 34:
return -1313.948f, -390.9637f, 35.592f;
break;
case 35:
return -1111.238f, 2688.463f, 17.6131f;
break;
case 36:
return -3165.231f, 1082.855f, 19.8438f;
break;
case 37:
return 2569.612f, 302.576f, 107.7349f;
break;
case 38:
return 811.8699f, -2149.102f, 28.6363f;
break;
case 39:
return -1147.314f, -1992.434f, 12.1803f;
break;
case 40:
return 724.524f, -1089.081f, 21.1692f;
break;
case 41:
return -354.5272f, -135.4011f, 38.185f;
break;
case 42:
return 113.2615f, 6624.28f, 30.7871f;
break;
case 43:
return 1174.707f, 2644.45f, 36.7552f;
break;
case 44:
if(bParam1){
return -211.5f, -1324.2f, 30.296f;
}else{
return -205.6654f, -1311.113f, 30.296f;
}
break;
case 45:
return func_97(Global_102986);
break;
case 46:
if(Global_1853823 !=func_96()){
if(func_95(Global_1853823)){
return func_88(2, 2);
}elseif(func_87(Global_1853823)){
return func_88(45, 3);
}else{
return 1000000f, 1000000f, 1000000f;
}}else{
return 1000000f, 1000000f, 1000000f;
}
break;
case 47:
return func_85(-9.9f, -0.5f, 1f);
break;
case 48:
return -1422.197f, -3015.803f, -79.1603f;
break;
case 49:
return 203.0799f, 5200.189f, -89.6f;
break;
case 52:
return 2714.547f, -354.2701f, -55.1867f;
break;
case 50:
return Global_1971274;
break;
case 51:
return 1100f, 220f, -50f;
break;
case 53:
return 1560f, 400f, -50f;
break;
case 54:
return -2159.901f, 1075.213f, -25.36174f;
break;
case 55:
return -2194.123f, 1103.805f, -24.2451f;
break;
case 56:
switch (Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_7){
case 155:
return 379.4285f, -53.6067f, 111.7088f;
break;
case 156:
return -1029.166f, -426.3766f, 72.2069f;
break;
case 157:
return -581.9924f, -721.3945f, 121.3509f;
break;
case 158:
return -1013.718f, -768.3539f, 69.4942f;
break;
}
return 1000000f, 1000000f, 1000000f;
break;
case 57:
return -1010f, -70f, -100f;
break;
case 58:
return func_82();
break;
case 59:
return 560f, -405f, -69.6591f;
break;
case 60:
return -1299.691f, -3017.165f, -48.2612f;
break;
}
return 1000000f, 1000000f, 1000000f;
}


Vector3 func__82(){
if(!func_84(Global_1956855)){
return Global_1956855;
}
switch (func_83()){
case 0:
return -29.532f, 6435.136f, 31.162f;
case 1:
return 1705.214f, 4819.167f, 41.75f;
case 2:
return 1795.522f, 3899.753f, 33.869f;
case 3:
return 1335.536f, 2758.746f, 51.099f;
case 4:
return 795.583f, 1210.78f, 338.962f;
case 5:
return -3192.67f, 1077.205f, 20.594f;
case 6:
return -789.719f, 5400.921f, 33.915f;
case 7:
return -24.384f, 3048.167f, 40.703f;
case 8:
return 2666.786f, 1469.324f, 24.237f;
case 9:
return -1454.966f, 2667.503f, 3.2f;
case 10:
return 2340.418f, 3054.188f, 47.888f;
case 11:
return 1509.183f, -2146.795f, 76.853f;
case 12:
return 1137.404f, -1358.654f, 34.322f;
case 13:
return -57.208f, -2658.793f, 5.737f;
case 14:
return 1905.017f, 565.222f, 175.558f;
case 15:
return 974.484f, -1718.798f, 30.296f;
case 16:
return 779.077f, -3266.297f, 5.719f;
case 17:
return -587.728f, -1637.208f, 19.611f;
case 18:
return 733.99f, -736.803f, 26.165f;
case 19:
return -1694.632f, -454.082f, 40.712f;
case 20:
return -1330.726f, -1163.948f, 4.313f;
case 21:
return -496.618f, 40.231f, 52.316f;
case 22:
return 275.527f, 66.509f, 94.108f;
case 23:
return 260.928f, -763.35f, 30.559f;
case 24:
return -478.025f, -741.45f, 30.299f;
case 25:
return 894.94f, 3603.911f, 32.56f;
case 26:
return -2166.511f, 4289.503f, 48.733f;
case 27:
return 1465.633f, 6553.67f, 13.771f;
case 28:
return 1101.032f, -335.172f, 66.944f;
case 29:
return 149.683f, -1655.674f, 29.028f;
default:
}
return 0f, 0f, 0f;
}

int func_83(){
return Global_2652364.f_2650;
}

int func_84(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


Vector3 func__85(struct<3> Param0){
return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_86(), 0f, Param0);
}


Vector3 func__86(){
return -880f, -2770f, -50f;
}

int func_87(int iParam0){
if(iParam0 !=func_96()){
if((MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 0) || MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 1)) || MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 2)){
return 1;
}}
return 0;
}


Vector3 func__88(int iParam0, int iParam1){
struct<3> Var0;
struct<3> Var1;
Var1={
1000000f, 1000000f, 1000000f 
};
if(Global_1853823 !=func_96()){
if(iParam1==3){
if(func_89(iParam0, 1, &Var0, 0, 0)){
Var1={
Var0 
};
}}elseif(iParam1==2){
if(MISC::IS_BIT_SET(Global_1853988[Global_1853823 /*867*/].f_267.f_288, 4)){
if(func_89(iParam0, 1, &Var0, 0, 0)){
Var1={
Var0 
};
}}elseif(MISC::IS_BIT_SET(Global_1853988[Global_1853823 /*867*/].f_267.f_288, 5)){
if(func_89(iParam0, 2, &Var0, 0, 0)){
Var1={
Var0 
};
}}}}
return Var1;
}

int func_89(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4){
struct<4> Var0;
struct<3> Var1;
struct<4> Var2;
struct<3> Var3;
if(!func_94(iParam3, &Var0)){
return 0;
}
if(!func_94(iParam1, &Var1)){
return 0;
}
if(!bParam4){
Var2={
func_92(iParam0) 
};
}else{
Var2={
func_91(iParam0) 
};
}
Var3={
Var2 - Var0 
};
Var3={
func_90(Var3, -Var0.f_3.f_2) 
};
Var3={
func_90(Var3, Var1.f_3.f_2) 
};
*uParam2={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, 0f, Var3) 
};
uParam2->f_3={
Var2.f_3 
};
return 1;
}


Vector3 func__90(struct<3> Param0, float fParam1){
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


struct<6> func_91(int iParam0){
struct<6> Var0;
switch (iParam0){
case 0:
Var0={
1102.1f, -3010.2f, -39.35f 
};
Var0.f_3={
0f, 0f, 115.92f 
};
break;
case 1:
Var0={
1105.05f, -3010.2f, -39.35f 
};
Var0.f_3={
0f, 0f, -103.32f 
};
break;
case 2:
Var0={
1105.05f, -3008.75f, -39.35f 
};
Var0.f_3={
0f, 0f, -77.76f 
};
break;
case 3:
Var0={
1102.1f, -3002.1f, -39.35f 
};
Var0.f_3={
0f, 0f, 102.96f 
};
break;
case 4:
Var0={
1105.05f, -3002.1f, -39.35f 
};
Var0.f_3={
0f, 0f, -101.88f 
};
break;
case 5:
Var0={
1105.05f, -3000.65f, -39.35f 
};
Var0.f_3={
0f, 0f, -81.36f 
};
break;
case 6:
Var0={
1102.1f, -2994.2f, -39.35f 
};
Var0.f_3={
0f, 0f, 103.32f 
};
break;
case 7:
Var0={
1105.05f, -2994.2f, -39.35f 
};
Var0.f_3={
0f, 0f, -109.8f 
};
break;
case 8:
Var0={
1105.05f, -2992.65f, -39.35f 
};
Var0.f_3={
0f, 0f, -84.96f 
};
break;
}
return Var0;
}


struct<6> func_92(int iParam0){
return func_93(iParam0);
}


struct<6> func_93(int iParam0){
struct<6> Var0;
switch (iParam0){
case 0:
Var0={
1105.22f, -3013.985f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 1:
Var0={
1104.105f, -3013.985f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 19:
Var0={
1105.22f, -3005.985f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 20:
Var0={
1104.105f, -3005.985f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 2:
Var0={
1102f, -3011.925f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 3:
Var0={
1103f, -3010f, -38.125f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 4:
Var0={
1103.213f, -3013.483f, -39.03f 
};
Var0.f_3={
0f, 0f, 31.32f 
};
break;
case 5:
Var0.f_3={
0f, 0f, 0f 
};
Var0={
1101.408f, -3012.32f, -38.45339f 
};
break;
case 6:
Var0.f_3={
0f, 0f, 0f 
};
Var0={
1103.037f, -3012.318f, -39.99874f 
};
break;
case 7:
Var0={
1105.645f, -3012.04f, -39.542f 
};
Var0.f_3={
0f, 0f, -86.04f 
};
break;
case 8:
Var0.f_3={
0f, 0f, 0f 
};
Var0={
1104.063f, -3012.368f, -39.99875f 
};
break;
case 9:
Var0={
1105.665f, -3012.334f, -38.50835f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 10:
Var0={
1102.504f, -3012.35f, -39.341f 
};
Var0.f_3={
0f, 0f, -96.48f 
};
break;
case 11:
Var0={
1102.928f, -3012.693f, -39.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 12:
Var0={
1102.942f, -3011.315f, -37.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 61:
Var0={
1101.994f, -3012.878f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 62:
Var0={
1103.152f, -3013.032f, -38.24946f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 13:
Var0={
1102.465f, -3009.515f, -39.341f 
};
Var0.f_3={
0f, 0f, -12.96f 
};
break;
case 14:
Var0={
1102.917f, -3009.525f, -39.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 15:
Var0={
1102.922f, -3010.887f, -37.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 63:
Var0={
1101.682f, -3009.227f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 64:
Var0={
1102.453f, -3008.51f, -38.2f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 16:
Var0={
1104.684f, -3009.561f, -39.341f 
};
Var0.f_3={
0f, 0f, 169.56f 
};
break;
case 17:
Var0={
1104.34f, -3008.698f, -39.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 18:
Var0={
1104.344f, -3009.618f, -37.98172f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 65:
Var0={
1105.459f, -3009.793f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 66:
Var0={
1104.783f, -3010.433f, -38.2f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 44:
Var0={
1104.025f, -3007.316f, -39.9987f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 21:
Var0={
1103.562f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 22:
Var0={
1103.562f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 23:
Var0={
1102.1f, -3010.2f, -39.35f 
};
Var0.f_3={
0f, 0f, 115.92f 
};
break;
case 24:
Var0={
1105.05f, -3010.2f, -39.35f 
};
Var0.f_3={
0f, 0f, -103.32f 
};
break;
case 25:
Var0={
1105.05f, -3008.75f, -39.35f 
};
Var0.f_3={
0f, 0f, -77.76f 
};
break;
case 26:
Var0={
1102.05f, -3011.717f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 27:
Var0={
1102.05f, -3012.653f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 28:
Var0={
1105.05f, -3012.653f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 29:
Var0={
1105.05f, -3011.717f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 30:
Var0={
1102.1f, -3002.1f, -39.35f 
};
Var0.f_3={
0f, 0f, 102.96f 
};
break;
case 31:
Var0={
1105.05f, -3002.1f, -39.35f 
};
Var0.f_3={
0f, 0f, -101.88f 
};
break;
case 32:
Var0={
1105.05f, -3000.65f, -39.35f 
};
Var0.f_3={
0f, 0f, -81.36f 
};
break;
case 33:
Var0={
1102.05f, -3003.592f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 34:
Var0={
1102.05f, -3004.541f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 35:
Var0={
1105.05f, -3004.541f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 36:
Var0={
1105.05f, -3003.592f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 37:
Var0={
1102.1f, -2994.2f, -39.35f 
};
Var0.f_3={
0f, 0f, 103.32f 
};
break;
case 38:
Var0={
1105.05f, -2994.2f, -39.35f 
};
Var0.f_3={
0f, 0f, -109.8f 
};
break;
case 39:
Var0={
1105.05f, -2992.65f, -39.35f 
};
Var0.f_3={
0f, 0f, -84.96f 
};
break;
case 40:
Var0={
1102.05f, -2995.582f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 41:
Var0={
1102.05f, -2996.501f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 42:
Var0={
1105.05f, -2996.501f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 43:
Var0={
1105.05f, -2995.582f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 45:
Var0={
1101f, -3011.9f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 46:
Var0={
1102f, -3010f, -38.115f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 47:
Var0={
1105.174f, -3004.16f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 48:
Var0={
1105.175f, -3005.818f, -37.91948f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 49:
Var0={
1106.6f, -3000.847f, -39.89988f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 50:
Var0={
1106.601f, -3002.171f, -37.89988f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 51:
Var0={
1101.95f, -3011.9f, -39.2f 
};
Var0.f_3={
0f, 0f, 49.5f 
};
break;
case 52:
Var0={
1101.95f, -3010f, -39.2f 
};
Var0.f_3={
0f, 0f, 130.32f 
};
break;
case 53:
Var0={
1105.16f, -3009.06f, -39.2f 
};
Var0.f_3={
0f, 0f, -44.64f 
};
break;
case 54:
Var0={
1102.476f, -3008.508f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 55:
Var0={
1099f, -3008.508f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 56:
Var0={
1103.593f, -3008.27f, -39.9987f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 57:
Var0={
1103.565f, -3014f, -39.988f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 58:
Var0={
1103.565f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 59:
Var0={
1103.565f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 60:
Var0={
1103.55f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 67:
Var0={
1103.55f, -3013.762f, -40f 
};
Var0.f_3={
0f, 0f, 180f 
};
break;
case 68:
Var0={
1103.55f, -3006.186f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 71:
case 69:
case 70:
case 73:
case 72:
case 74:
Var0={
1103.6f, -3013.933f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
}
return Var0;
}

int func_94(int iParam0, var uParam1){
switch (iParam0){
case 0:
*uParam1={
1103.562f, -3014f, -40f 
};
uParam1->f_3={
0f, 0f, 0f 
};
return 1;
case 1:
*uParam1={
1103.562f, -3006f, -40f 
};
uParam1->f_3={
0f, 0f, 0f 
};
return 1;
case 2:
*uParam1={
1103.562f, -2998f, -40f 
};
uParam1->f_3={
0f, 0f, 0f 
};
return 1;
default:
}
return 0;
}

int func_95(int iParam0){
if(iParam0 !=func_96()){
if((MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 3) || MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 4)) || MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 5)){
return 1;
}}
return 0;
}

int func_96(){
return -1;
}


Vector3 func__97(int iParam0){
switch (iParam0){
case 1:
return 1060f, -2990f, -35f;
break;
case 2:
return 1060f, -2990f, -35f;
break;
case 3:
return 974.9542f, -3000.091f, -35f;
break;
case 6:
return -1586.36f, -566.6f, 106.17f;
break;
case 7:
return -1389.87f, -465.17f, 82.68f;
break;
case 8:
return -145.81f, -590.2f, 171.13f;
break;
case 9:
return -62.49f, -823.55f, 288.74f;
break;
case 4:
return 1102.515f, -3158.888f, -38.5186f;
break;
case 5:
return 1005.861f, -3156.162f, -39.907f;
break;
case 10:
return 1103.562f, -3000f, -40f;
break;
case 11:
return 938.3077f, -3196.112f, -100f;
break;
case 12:
return -1266.802f, -3014.836f, -49.4895f;
break;
case 13:
return func_86();
break;
case 14:
return 345.0041f, 4842.001f, -59.9997f;
break;
case 15:
return -1604.664f, -3012.583f, -79.9999f;
break;
case 16:
return -1421.015f, -3012.587f, -80f;
break;
case 17:
if(func_98()==0){
return 205f, 5180f, -90f;
}else{
return 170f, 5190f, 10f;
}
break;
case 18:
return -2000f, 1250f, 50f;
break;
case 19:
return -1350f, 160f, -100f;
break;
case 20:
return -1070f, -70f, -100f;
break;
case 21:
return 570f, -415f, -70f;
break;
default:
return 0f, 0f, -200f;
break;
}
return 0f, 0f, -200f;
}

int func_98(){
return func_99(PLAYER::PLAYER_ID());
}


var func__99(int iParam0){
return MISC::GET_BITS_IN_RANGE(Global_2657704[iParam0 /*463*/].f_321.f_3, 28, 31);
}

int func_100(int iParam0){
return func_76(iParam0, 0, 0);
}

int func_101(int iParam0){
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
case 58:
return 3;
break;
case 59:
return 3;
break;
case 60:
return 3;
break;
}
return 6;
}


bool func_102(){
return Global_100885.f_393 > 0;
}


var func__103(){
var uVar0;
func_113(&uVar0, CLOCK::GET_CLOCK_SECONDS());
func_112(&uVar0, CLOCK::GET_CLOCK_MINUTES());
func_111(&uVar0, CLOCK::GET_CLOCK_HOURS());
func_106(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_105(&uVar0, CLOCK::GET_CLOCK_MONTH());
func_104(&uVar0, CLOCK::GET_CLOCK_YEAR());
return uVar0;
}


void func_104(var uParam0, int iParam1){
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


void func_105(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 11){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15);
*uParam0=(*uParam0 || iParam1);
}


void func_106(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_110(*uParam0);
iVar1=func_108(*uParam0);
if(iParam1 < 1 || iParam1 > func_107(iVar0, iVar1)){
return;
}
*uParam0=(*uParam0 - *uParam0 & 496);
*uParam0=(*uParam0 || shift_left(iParam1, 4));
}

int func_107(int iParam0, int iParam1){
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

int func_108(int iParam0){
return (shift_right(iParam0, 26) & 31 * func_109(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_109(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}

int func_110(int iParam0){
return iParam0 & 15;
}


void func_111(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 24){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15872);
*uParam0=(*uParam0 || shift_left(iParam1, 9));
}


void func_112(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 1032192);
*uParam0=(*uParam0 || shift_left(iParam1, 14));
}


void func_113(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 66060288);
*uParam0=(*uParam0 || shift_left(iParam1, 20));
}

int func_114(){
func_60();
return Global_113810.f_2366.f_539.f_4321;
}

int func_115(char* sParam0){
if(MISC::ARE_STRINGS_EQUAL("BailBond1", sParam0)){
return 0;
}elseif(MISC::ARE_STRINGS_EQUAL("BailBond2", sParam0)){
return 1;
}elseif(MISC::ARE_STRINGS_EQUAL("BailBond3", sParam0)){
return 2;
}elseif(MISC::ARE_STRINGS_EQUAL("BailBond4", sParam0)){
return 3;
}
return -1;
}


struct<2> func_116(int iParam0){
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

int func_117(char* sParam0, int iParam1){
int iVar0;
char* sVar1;
int iVar2;
int iVar3;
iVar2=MISC::GET_HASH_KEY(sParam0);
iVar3=0;
iVar3=0;
while (iVar3 < 63){
iVar0=iVar3;
func_118(iVar0, &sVar1);
if(MISC::GET_HASH_KEY(sVar1)==iVar2){
return iVar0;
}
iVar3++;
}
if(iParam1==0){}
return -1;
}


void func_118(int iParam0, var uParam1){
switch (iParam0){
case 0:
func_119(uParam1, "Abigail1", func_121(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_120(iParam0), 1, 0);
break;
case 1:
func_119(uParam1, "Abigail2", func_121(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_120(iParam0), 1, 0);
break;
case 2:
func_119(uParam1, "Barry1", func_121(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_120(iParam0), 1, 0);
break;
case 3:
func_119(uParam1, "Barry2", func_121(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_120(iParam0), 1, 1);
break;
case 4:
func_119(uParam1, "Barry3", func_121(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_120(iParam0), 0, 0);
break;
case 5:
func_119(uParam1, "Barry3A", func_121(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
break;
case 6:
func_119(uParam1, "Barry3C", func_121(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
break;
case 7:
func_119(uParam1, "Barry4", func_121(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_120(iParam0), 0, 0);
break;
case 8:
func_119(uParam1, "Dreyfuss1", func_121(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_120(iParam0), 0, 0);
break;
case 9:
func_119(uParam1, "Epsilon1", func_121(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_120(iParam0), 0, 0);
break;
case 10:
func_119(uParam1, "Epsilon2", func_121(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_120(iParam0), 1, 0);
break;
case 11:
func_119(uParam1, "Epsilon3", func_121(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_120(iParam0), 0, 0);
break;
case 12:
func_119(uParam1, "Epsilon4", func_121(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_120(iParam0), 0, 0);
break;
case 13:
func_119(uParam1, "Epsilon5", func_121(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_120(iParam0), 1, 0);
break;
case 14:
func_119(uParam1, "Epsilon6", func_121(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_120(iParam0), 0, 1);
break;
case 15:
func_119(uParam1, "Epsilon7", func_121(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_120(iParam0), 0, 0);
break;
case 16:
func_119(uParam1, "Epsilon8", func_121(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_120(iParam0), 1, 0);
break;
case 17:
func_119(uParam1, "Extreme1", func_121(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
break;
case 18:
func_119(uParam1, "Extreme2", func_121(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
break;
case 19:
func_119(uParam1, "Extreme3", func_121(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
break;
case 20:
func_119(uParam1, "Extreme4", func_121(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_120(iParam0), 0, 0);
break;
case 21:
func_119(uParam1, "Fanatic1", func_121(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_120(iParam0), 1, 0);
break;
case 22:
func_119(uParam1, "Fanatic2", func_121(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_120(iParam0), 1, 0);
break;
case 23:
func_119(uParam1, "Fanatic3", func_121(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_120(iParam0), 0, 1);
break;
case 24:
func_119(uParam1, "Hao1", func_121(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_120(iParam0), 0, 1);
break;
case 25:
func_119(uParam1, "Hunting1", func_121(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_120(iParam0), 0, 1);
break;
case 26:
func_119(uParam1, "Hunting2", func_121(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_120(iParam0), 0, 1);
break;
case 27:
func_119(uParam1, "Josh1", func_121(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_120(iParam0), 1, 0);
break;
case 28:
func_119(uParam1, "Josh2", func_121(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_120(iParam0), 1, 1);
break;
case 29:
func_119(uParam1, "Josh3", func_121(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_120(iParam0), 1, 1);
break;
case 30:
func_119(uParam1, "Josh4", func_121(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_120(iParam0), 1, 0);
break;
case 31:
func_119(uParam1, "Maude1", func_121(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_120(iParam0), 0, 1);
break;
case 32:
func_119(uParam1, "Minute1", func_121(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_120(iParam0), 0, 1);
break;
case 33:
func_119(uParam1, "Minute2", func_121(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_120(iParam0), 0, 1);
break;
case 34:
func_119(uParam1, "Minute3", func_121(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_120(iParam0), 0, 1);
break;
case 35:
func_119(uParam1, "MrsPhilips1", func_121(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_120(iParam0), 0, 0);
break;
case 36:
func_119(uParam1, "MrsPhilips2", func_121(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_120(iParam0), 0, 0);
break;
case 37:
func_119(uParam1, "Nigel1", func_121(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_120(iParam0), 1, 0);
break;
case 38:
func_119(uParam1, "Nigel1A", func_121(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_120(iParam0), 1, 1);
break;
case 39:
func_119(uParam1, "Nigel1B", func_121(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_120(iParam0), 1, 1);
break;
case 40:
func_119(uParam1, "Nigel1C", func_121(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_120(iParam0), 1, 1);
break;
case 41:
func_119(uParam1, "Nigel1D", func_121(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_120(iParam0), 1, 1);
break;
case 42:
func_119(uParam1, "Nigel2", func_121(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_120(iParam0), 1, 1);
break;
case 43:
func_119(uParam1, "Nigel3", func_121(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_120(iParam0), 1, 1);
break;
case 44:
func_119(uParam1, "Omega1", func_121(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_120(iParam0), 0, 0);
break;
case 45:
func_119(uParam1, "Omega2", func_121(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_120(iParam0), 0, 0);
break;
case 46:
func_119(uParam1, "Paparazzo1", func_121(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
break;
case 47:
func_119(uParam1, "Paparazzo2", func_121(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
break;
case 48:
func_119(uParam1, "Paparazzo3", func_121(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_120(iParam0), 0, 0);
break;
case 49:
func_119(uParam1, "Paparazzo3A", func_121(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
break;
case 50:
func_119(uParam1, "Paparazzo3B", func_121(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
break;
case 51:
func_119(uParam1, "Paparazzo4", func_121(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_120(iParam0), 0, 0);
break;
case 52:
func_119(uParam1, "Rampage1", func_121(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_120(iParam0), 0, 0);
break;
case 54:
func_119(uParam1, "Rampage3", func_121(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_120(iParam0), 1, 0);
break;
case 55:
func_119(uParam1, "Rampage4", func_121(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_120(iParam0), 1, 0);
break;
case 56:
func_119(uParam1, "Rampage5", func_121(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_120(iParam0), 0, 0);
break;
case 53:
func_119(uParam1, "Rampage2", func_121(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_120(iParam0), 1, 0);
break;
case 57:
func_119(uParam1, "TheLastOne", func_121(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
break;
case 58:
func_119(uParam1, "Tonya1", func_121(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
break;
case 59:
func_119(uParam1, "Tonya2", func_121(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
break;
case 60:
func_119(uParam1, "Tonya3", func_121(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
break;
case 61:
func_119(uParam1, "Tonya4", func_121(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
break;
case 62:
func_119(uParam1, "Tonya5", func_121(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
break;
default:
break;
}}


void func_119(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21){
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

int func_120(int iParam0){
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


struct<2> func_121(int iParam0){
struct<2> Var0;
char[] cVar1[8];
StringCopy(&Var0, "", 8);
cVar1={
func_116(iParam0) 
};
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1)){}else{
StringCopy(&Var0, "RC_", 8);
StringConCat(&Var0, &cVar1, 8);
}
return Var0;
}

int func_122(int iParam0){
switch (iParam0){
case 69:
case 70:
return func_123(Global_113810.f_9088.f_99.f_205[10]);
break;
case 74:
case 75:
return func_123(Global_113810.f_9088.f_99.f_205[8]);
break;
case 84:
case 85:
return func_123(Global_113810.f_9088.f_99.f_205[11]);
break;
case 90:
return func_123(Global_113810.f_9088.f_99.f_205[7]);
break;
case 93:
return func_123(Global_113810.f_9088.f_99.f_205[9]);
break;
}
return 0;
}

int func_123(int iParam0){
switch (iParam0){
case 1:
case 3:
case 5:
case 6:
case 8:
return 0;
break;
case 2:
case 4:
case 7:
case 9:
return 1;
break;
}
return -1;
}

int func_124(char* sParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=MISC::GET_HASH_KEY(sParam0);
iVar1=func_125(iVar0, 1);
if(iVar1==-1 && !bParam1){}
return iVar1;
}

int func_125(int iParam0, bool bParam1){
int iVar0;
iVar0=0;
while (iVar0 < 94){
if(Global_91601[iVar0 /*34*/].f_6==iParam0){
return iVar0;
}
iVar0++;
}
if(!bParam1){}
return -1;
}


void func_126(bool bParam0){
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


void func_127(){
MISC::SET_WEATHER_TYPE_NOW("EXTRASUNNY");
func_238();
func_210();
func_129();
if(!func_24()){
func_128();
}
iLocal_347=1;
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}


void func_128(){
switch (iLocal_220){
case 2:
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1019.579f, -484.872f, 36.0795f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 93.7701f);
break;
case 3:
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_277, 0)){
PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_277, -1);
}
ENTITY::SET_ENTITY_HEALTH(iLocal_277, 3000, 0);
ENTITY::SET_ENTITY_PROOFS(iLocal_277, 0, 1, 0, 0, 0, 0, 0, 0);
}
break;
case 5:
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -935.4413f, -2928.061f, 12.9451f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 178.466f);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(PLAYER::PLAYER_PED_ID(), 1, 1);
break;
case 8:
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -937.5466f, -2968.713f, 12.9451f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 111.5016f);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(PLAYER::PLAYER_PED_ID(), 1, 1);
break;
}}


void func_129(){
switch (iLocal_220){
case 2:
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
MISC::CLEAR_AREA(-1026.8f, -492.1f, 36f, 18f, 1, 0, 0, 0);
VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0, 1);
VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0);
STREAMING::REQUEST_MODEL(joaat("rapidgt"));
STREAMING::REQUEST_MODEL(joaat("surano"));
STREAMING::REQUEST_MODEL(joaat("carbonizzare"));
while ((!STREAMING::HAS_MODEL_LOADED(joaat("rapidgt")) || !STREAMING::HAS_MODEL_LOADED(joaat("surano"))) || !STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare"))){
wait(0);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_277)){
MISC::CLEAR_AREA(Local_304, 5f, 1, 0, 0, 0);
iLocal_277=VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_304, fLocal_317, 1, 1, 0);
VEHICLE::SET_VEHICLE_COLOURS(iLocal_277, 112, 112);
ENTITY::SET_ENTITY_HEALTH(iLocal_277, 3000, 0);
VEHICLE::SET_VEHICLE_STRONG(iLocal_277, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rapidgt"), 1);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_277, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_277, 1);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_288)){
if(STREAMING::HAS_MODEL_LOADED(joaat("surano"))){
MISC::CLEAR_AREA(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, 0);
iLocal_288=VEHICLE::CREATE_VEHICLE(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, 1, 1, 0);
VEHICLE::SET_VEHICLE_COLOURS(iLocal_288, 0, 0);
ENTITY::SET_ENTITY_HEALTH(iLocal_288, 3000, 0);
VEHICLE::SET_VEHICLE_STRONG(iLocal_288, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("surano"));
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("surano"), 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_288, 1);
}}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_289)){
if(STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare"))){
MISC::CLEAR_AREA(Local_304, 5f, 1, 0, 0, 0);
iLocal_289=VEHICLE::CREATE_VEHICLE(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, 1, 1, 0);
VEHICLE::SET_VEHICLE_COLOURS(iLocal_289, 89, 89);
ENTITY::SET_ENTITY_HEALTH(iLocal_289, 3000, 0);
VEHICLE::SET_VEHICLE_STRONG(iLocal_289, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("carbonizzare"));
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("carbonizzare"), 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_289, 1);
}}
break;
case 3:
AUDIO::PREPARE_MUSIC_EVENT("TRV4_CHASE");
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
func_207();
MISC::CLEAR_AREA(Local_305, 200f, 1, 0, 0, 0);
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
iLocal_276=VEHICLE::CREATE_VEHICLE(joaat("cogcabrio"), Local_305, fLocal_318, 1, 1, 0);
ENTITY::SET_ENTITY_PROOFS(iLocal_276, 1, 1, 1, 1, 1, 0, 0, 0);
VEHICLE::SET_VEHICLE_COLOURS(iLocal_276, 27, 27);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_276, "SOL_3_MOLLY_CAR_Group", 0);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_262)){
iLocal_262=PED::CREATE_PED_INSIDE_VEHICLE(iLocal_276, 26, joaat("ig_molly"), -1, 1, 1);
ENTITY::SET_ENTITY_PROOFS(iLocal_262, 1, 1, 1, 1, 1, 0, 0, 0);
ENTITY::SET_ENTITY_INVINCIBLE(iLocal_262, 1);
PED::SET_PED_CAN_BE_TARGETTED(iLocal_262, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_molly"));
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_262, joaat("player"));
}
if(func_23()){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_277)){
if(func_206()){
if(!VEHICLE::IS_THIS_MODEL_A_HELI(func_205()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(func_205())){
iLocal_277=func_153(Local_314, fLocal_321);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_205());
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_277, 1);
}
else{
iLocal_277=VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_314, fLocal_321, 1, 1, 0);
VEHICLE::SET_VEHICLE_COLOURS(iLocal_277, 112, 112);
}}else{
iLocal_277=VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_314, fLocal_321, 1, 1, 0);
VEHICLE::SET_VEHICLE_COLOURS(iLocal_277, 112, 112);
}
ENTITY::SET_ENTITY_HEALTH(iLocal_277, 3000, 0);
VEHICLE::SET_VEHICLE_STRONG(iLocal_277, 1);
ENTITY::SET_ENTITY_PROOFS(iLocal_277, 0, 1, 0, 0, 0, 0, 0, 0);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_277, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_277, 1);
}}elseif(!ENTITY::DOES_ENTITY_EXIST(iLocal_277)){
iLocal_277=VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_314, fLocal_321, 1, 1, 0);
VEHICLE::SET_VEHICLE_COLOURS(iLocal_277, 112, 112);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
ENTITY::SET_ENTITY_HEALTH(iLocal_277, 3000, 0);
VEHICLE::SET_VEHICLE_STRONG(iLocal_277, 1);
ENTITY::SET_ENTITY_PROOFS(iLocal_277, 0, 1, 0, 0, 0, 0, 0, 0);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_277, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_277, 1);
}
break;
case 5:
iLocal_348=0;
MISC::CLEAR_AREA(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, 0);
settimera(0);
STREAMING::REQUEST_MODEL(joaat("jet"));
STREAMING::REQUEST_MODEL(joaat("shamal"));
TASK::REQUEST_WAYPOINT_RECORDING("BB_MOLLY_2");
STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
STREAMING::REQUEST_MODEL(joaat("police3"));
STREAMING::REQUEST_MODEL(joaat("ig_molly"));
STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
STREAMING::REQUEST_MODEL(joaat("rapidgt"));
STREAMING::REQUEST_MODEL(joaat("prop_cs_film_reel_01"));
VEHICLE::REQUEST_VEHICLE_RECORDING(68, "BB_Chase");
VEHICLE::REQUEST_VEHICLE_RECORDING(69, "BB_Chase");
TASK::REQUEST_WAYPOINT_RECORDING("Trev4_5");
STREAMING::REQUEST_PTFX_ASSET();
STREAMING::REQUEST_ANIM_DICT("move_f@film_reel_arms");
STREAMING::REQUEST_ANIM_DICT("misssolomon_3");
while (((((((((((((((!STREAMING::HAS_MODEL_LOADED(joaat("jet")) || !STREAMING::HAS_MODEL_LOADED(joaat("shamal"))) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("BB_MOLLY_2")) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_airworker"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("police3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("ig_molly"))) || !STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio"))) || !STREAMING::HAS_MODEL_LOADED(joaat("rapidgt"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_film_reel_01"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(68, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(69, "BB_Chase")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5")) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !STREAMING::HAS_ANIM_DICT_LOADED("move_f@film_reel_arms")) || !STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_3")){
wait(0);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_262)){
iLocal_262=PED::CREATE_PED(26, joaat("ig_molly"), -920.5093f, -2943.93f, 12.9451f, 157.6203f, 1, 1);
ENTITY::SET_ENTITY_INVINCIBLE(iLocal_262, 1);
PED::SET_PED_CAN_BE_TARGETTED(iLocal_262, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_262, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_molly"));
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_262, 1, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_262, joaat("player"));
}
iLocal_293=OBJECT::CREATE_OBJECT(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, 1, 1, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_293, iLocal_262, PED::GET_PED_BONE_INDEX(iLocal_262, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_282)){
iLocal_282=VEHICLE::CREATE_VEHICLE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1, 0);
VEHICLE::SET_VEHICLE_LIVERY(iLocal_282, 2);
VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_282, 0);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_282, 1);
ENTITY::SET_ENTITY_PROOFS(iLocal_282, 1, 1, 1, 1, 1, 0, 0, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
ENTITY::SET_ENTITY_LOD_DIST(iLocal_282, 500);
}
if(func_23()){
if(func_206()){
func_151();
while (!func_135()){
wait(0);
}}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_277)){
if(func_206()){
iLocal_277=func_153(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_277, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_205());
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_277, 1);
}else{
iLocal_277=VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1, 0);
VEHICLE::SET_VEHICLE_COLOURS(iLocal_277, 112, 112);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_277, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_277, 1);
}}}elseif(!ENTITY::DOES_ENTITY_EXIST(iLocal_277)){
iLocal_277=VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1, 0);
VEHICLE::SET_VEHICLE_COLOURS(iLocal_277, 112, 112);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_277, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_277, 1);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
iLocal_276=VEHICLE::CREATE_VEHICLE(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, 1, 1, 0);
VEHICLE::SET_VEHICLE_COLOURS(iLocal_276, 27, 27);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_279)){
iLocal_279=VEHICLE::CREATE_VEHICLE(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, 1, 1, 0);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_270)){
iLocal_270=PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_270, joaat("weapon_pistol"), 1000, 1, 1);
func_134(iLocal_270, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
}
settimera(0);
func_133(2, 1);
iLocal_356=1;
break;
case 8:
MISC::CLEAR_AREA(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, 0);
settimera(0);
iLocal_348=0;
iLocal_356=0;
iLocal_335=0;
STREAMING::REQUEST_MODEL(joaat("jet"));
STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
STREAMING::REQUEST_MODEL(joaat("shamal"));
STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
STREAMING::REQUEST_MODEL(joaat("police3"));
STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
STREAMING::REQUEST_MODEL(joaat("rapidgt"));
STREAMING::REQUEST_MODEL(joaat("prop_jet_bloodsplat_01"));
VEHICLE::REQUEST_VEHICLE_RECORDING(68, "BB_Chase");
VEHICLE::REQUEST_VEHICLE_RECORDING(69, "BB_Chase");
STREAMING::REQUEST_PTFX_ASSET();
while ((((((((((!STREAMING::HAS_MODEL_LOADED(joaat("jet")) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_airworker"))) || !STREAMING::HAS_MODEL_LOADED(joaat("shamal"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("police3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio"))) || !STREAMING::HAS_MODEL_LOADED(joaat("rapidgt"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_jet_bloodsplat_01"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(68, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(69, "BB_Chase")) || !STREAMING::HAS_PTFX_ASSET_LOADED()){
wait(0);
}
func_132();
if(func_23()){
if(func_206()){
func_151();
while (!func_135()){
wait(0);
}}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_277)){
if(func_206()){
iLocal_277=func_153(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_277, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_205());
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_277, 1);
}else{
iLocal_277=VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1, 0);
VEHICLE::SET_VEHICLE_COLOURS(iLocal_277, 112, 112);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_277, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_277, 1);
}}}elseif(!ENTITY::DOES_ENTITY_EXIST(iLocal_277)){
iLocal_277=VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1, 0);
VEHICLE::SET_VEHICLE_COLOURS(iLocal_277, 112, 112);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_277, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_277, 1);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
iLocal_276=VEHICLE::CREATE_VEHICLE(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, 1, 1, 0);
VEHICLE::SET_VEHICLE_COLOURS(iLocal_276, 27, 27);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_279)){
iLocal_279=VEHICLE::CREATE_VEHICLE(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, 1, 1, 0);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_270)){
iLocal_270=PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_270, joaat("weapon_pistol"), 1000, 1, 1);
func_134(iLocal_270, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_292)){
iLocal_292=OBJECT::CREATE_OBJECT(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
ENTITY::SET_ENTITY_ROTATION(iLocal_292, 0f, 0f, -121.5948f, 2, 1);
ENTITY::SET_ENTITY_QUATERNION(iLocal_292, 0f, 0f, 0.8729f, -0.4879f);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_jet_bloodsplat_01"));
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_282)){
iLocal_282=VEHICLE::CREATE_VEHICLE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1, 0);
VEHICLE::SET_VEHICLE_LIVERY(iLocal_282, 2);
VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_282, 0);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_282, 1);
ENTITY::SET_ENTITY_PROOFS(iLocal_282, 1, 1, 1, 1, 1, 0, 0, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
uLocal_670=GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_damage", iLocal_282, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1065353216, 0, 0, 0);
ENTITY::SET_ENTITY_LOD_DIST(iLocal_282, 500);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_264)){
iLocal_264=PED::CREATE_PED(26, joaat("s_m_y_airworker"), -933.8942f, -2965.785f, 12.9451f, 331.7339f, 1, 1);
func_17(&uLocal_488, 4, iLocal_264, "HangerWorker", 0, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_airworker"));
PED::SET_PED_CAN_BE_TARGETTED(iLocal_264, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_264, 1);
TASK::TASK_SMART_FLEE_PED(iLocal_264, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
PED::SET_PED_KEEP_TASK(iLocal_264, 1);
ENTITY::SET_ENTITY_PROOFS(iLocal_264, 0, 0, 0, 0, 0, 0, 0, 0);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_264);
}
if(func_131(0)==0 || func_131(0)==joaat("weapon_unarmed")){
func_130(1);
}
break;
}}


void func_130(int iParam0){
int iVar0;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar0=WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 0);
if(iVar0 !=joaat("weapon_unarmed")){
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, iParam0);
}}}

int func_131(int iParam0){
if(Global_100870 > 0){
return Global_107357.f_21[iParam0];
}
return Global_104373.f_21[iParam0];
}


void func_132(){
if(iLocal_335==0){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_284[0])){
iLocal_284[0]=VEHICLE::CREATE_VEHICLE(joaat("police3"), -994.5278f, -2903.285f, 12.9447f, 158.7951f, 1, 1, 0);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iLocal_284[0], 0);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_266[0])){
iLocal_266[0]=PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_266[0], joaat("weapon_pistol"), 1000, 1, 1);
PED::SET_PED_ACCURACY(iLocal_266[0], 20);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_266[0], 1, 1);
TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_266[0], PLAYER::PLAYER_PED_ID(), -1, 1);
func_134(iLocal_266[0], 0);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_283)){
iLocal_283=VEHICLE::CREATE_VEHICLE(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, 1, 1, 0);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_283, 1084227584);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("shamal"));
ENTITY::SET_ENTITY_HEALTH(iLocal_283, 2000, 0);
VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_283, 0, 0, 1);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_266[6])){
iLocal_266[6]=PED::CREATE_PED_INSIDE_VEHICLE(iLocal_284[0], 6, joaat("s_m_y_cop_01"), 0, 1, 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_266[6], joaat("weapon_pistol"), 1000, 1, 1);
PED::SET_PED_ACCURACY(iLocal_266[6], 20);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_266[6], 1, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_266[6], 1);
func_134(iLocal_266[6], 0);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_266[7])){
iLocal_266[7]=PED::CREATE_PED_INSIDE_VEHICLE(iLocal_284[0], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_266[7], joaat("weapon_pistol"), 1000, 1, 1);
PED::SET_PED_ACCURACY(iLocal_266[7], 20);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_266[7], 1, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_266[7], 1);
func_134(iLocal_266[7], 0);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_284[1])){
iLocal_284[1]=VEHICLE::CREATE_VEHICLE(joaat("police3"), -962.2432f, -2864.16f, 12.9447f, 149.5586f, 1, 1, 0);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iLocal_284[1], 0);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_266[8])){
iLocal_266[8]=PED::CREATE_PED_INSIDE_VEHICLE(iLocal_284[1], 6, joaat("s_m_y_cop_01"), 0, 1, 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_266[8], joaat("weapon_pistol"), 1000, 1, 1);
PED::SET_PED_ACCURACY(iLocal_266[8], 20);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_266[8], 1, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_266[8], 1);
func_134(iLocal_266[8], 0);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_266[9])){
iLocal_266[9]=PED::CREATE_PED_INSIDE_VEHICLE(iLocal_284[1], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_266[9], joaat("weapon_pistol"), 1000, 1, 1);
PED::SET_PED_ACCURACY(iLocal_266[9], 20);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_266[9], 1, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_266[9], 1);
func_134(iLocal_266[9], 0);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_266[10])){
iLocal_266[10]=PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -922.1185f, -2939.595f, 12.9451f, 156.1408f, 1, 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_266[10], joaat("weapon_pistol"), 1000, 1, 1);
PED::SET_PED_ACCURACY(iLocal_266[10], 20);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_266[10], 1, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_266[10], 1);
func_134(iLocal_266[10], 0);
PED::SET_PED_DUCKING(iLocal_266[10], 1);
}
iLocal_335=1;
}}


void func_133(bool bParam0, int iParam1){
MISC::SET_BIT(&Global_32443, bParam0);
StringCopy(&(Global_32444[bParam0 /*6*/]), SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
Global_32499[bParam0]=iParam1;
}


void func_134(int iParam0, bool bParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
if(bParam1){
iVar0=0;
while (iVar0 < 64){
if(Global_63515[iVar0 /*2*/] !=0){
if(Global_63515[iVar0 /*2*/]==iParam0){
return;
}}
iVar0++;
}}
if(64==Global_63514){
return;
}
iVar1=-1;
iVar2=0;
while (iVar1==-1 && iVar2 !=64){
if(Global_63515[iVar2 /*2*/]==0){
iVar1=iVar2;
}
iVar2++;
}
if(iVar1==-1){
return;
}
Global_63515[iVar1 /*2*/]=iParam0;
Global_63515[iVar1 /*2*/].f_1=7;
Global_63514++;
}


bool func_135(){
return func_136(&(Global_107357.f_2890));
}

int func_136(var uParam0){
if(func_137(uParam0)){
if(STREAMING::HAS_MODEL_LOADED(uParam0->f_12.f_66)){
return 1;
}else{
return 0;
}
return 1;
}else{
return 0;
}
return 1;
}

int func_137(var uParam0){
if(uParam0->f_12.f_66==0){
return 0;
}
if(!func_139(uParam0->f_12.f_66, 0, -1)){
return 0;
}
if(uParam0->f_12.f_66==joaat("stunt") && func_138(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0)){
return 0;
}
return 1;
}

int func_138(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3){
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

int func_139(int iParam0, bool bParam1, int iParam2){
int iVar0;
struct<2> Var1;
if(iParam0==0){
return 0;
}
if(!STREAMING::IS_MODEL_A_VEHICLE(iParam0)){
return 0;
}
if(((((iParam0==joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0==joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0==joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0==joaat("blimp2")) || (iParam0==joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())){
if(!func_150()){
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
if((((!func_149() && !func_148()) && !func_147()) && !func_146()) && !func_150()){
return 0;
}}
if((iParam0==joaat("hotknife") || iParam0==joaat("carbonrs")) || iParam0==joaat("khamelion")){
if((func_145() || MISC::IS_PC_VERSION()) || func_144()){
}elseif(!func_147()){
return 0;
}}
if(bParam1){
if(!func_142(iParam0, iParam2)){
return 0;
}}
if(!func_140(iParam0)){
return 0;
}
return 1;
}

int func_140(int iParam0){
int iVar0;
var uVar1;
char cVar2[64];
if(!func_141()){
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

int func_141(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}

int func_142(int iParam0, int iParam1){
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
}}elseif(iParam0==func_143(1)){
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

int func_143(bool bParam0){
if(bParam0){
return -426933872;
}
return joaat("avenger");
}


var func__144(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


var func__145(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_146(){
return 0;
}

int func_147(){
return 1;
}

int func_148(){
return 1;
}

int func_149(){
if(DLC::IS_DLC_PRESENT(-1226939934)){
return 1;
}
return 0;
}

int func_150(){
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
uVar0=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&uVar0, false);
STATS::SET_HAS_SPECIALEDITION_CONTENT(uVar0);
}
return 1;
}}}
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
if(MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0)){
return 1;
}}
return 0;
}


void func_151(){
func_152(&(Global_107357.f_2890));
}


void func_152(var uParam0){
if(func_137(uParam0)){
STREAMING::REQUEST_MODEL(uParam0->f_12.f_66);
}}

int func_153(struct<3> Param0, float fParam1){
return func_154(&(Global_107357.f_2890), Param0, fParam1, 0);
}

int func_154(var uParam0, struct<3> Param1, float fParam2, bool bParam3){
int iVar0;
struct<3> Var1;
bool bVar2;
var uVar3;
int iVar4;
if(func_137(uParam0)){
if(func_73(Param1, 0f, 0f, 0f, 0)){
Param1={
*uParam0 
};
fParam2=uParam0->f_6;
}
if(uParam0->f_12.f_66==joaat("monster") || uParam0->f_12.f_66==joaat("marshall")){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1)){
Param1={
-850.93f, 158.82f, 65.7f 
};
fParam2=89.5f;
}}
if(func_136(uParam0)){
MISC::CLEAR_AREA(Param1, 5f, 1, 0, 0, 0);
func_204(Param1, 5f, 0);
iVar0=VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_66, Param1, fParam2, 1, 1, 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
Var1={
ENTITY::GET_ENTITY_COORDS(iVar0, 1) 
};
if(vdist2(Var1, -1151.15f, -1530.32f, 7.48925f) <=3f){
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, 0, 0, 1);
}
func_175(iVar0, &(uParam0->f_12), 0, 1);
bVar2=true;
if(VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_66)){
if(!WATER::TEST_PROBE_AGAINST_WATER(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar3)){
bVar2=false;
}}
if(bVar2){
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
}
if(uParam0->f_7==1){
if(bParam3){
if(VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0))){
func_174(uParam0->f_11, 1);
}
elseif(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0))){
func_174(uParam0->f_11, 2);
}}
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar0, 0);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, 1);
func_173(iVar0, uParam0->f_11);
}elseif((!func_171(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning")){
iVar4=func_170(iVar0);
if(iVar4==-1){
uParam0->f_10=0;
}else{
func_165(iVar4);
}}
if(((Global_100833 !=13 && Global_100833 !=10) && Global_100833 !=11) && Global_100833 !=12){
if(MISC::GET_HASH_KEY(&(Global_100833.f_3))==Global_78467){
if(uParam0->f_12.f_66==Global_113810.f_32752.f_69[21 /*78*/].f_66){
func_162(24, 0);
func_165(24);
}}}
if(uParam0->f_9==1){
func_155(iVar0, uParam0->f_11);
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_66);
Var1={
ENTITY::GET_ENTITY_COORDS(iVar0, 1) 
};
}
return iVar0;
}}
return iVar0;
}


void func_155(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(!func_156(iParam0)){
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
func_39(iParam0, &(Global_113810.f_32752.f_5510));
}

int func_156(int iParam0){
if((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_45(iParam0, 0, 0)) || func_45(iParam0, 1, 0)) || func_45(iParam0, 2, 0)) || func_34(iParam0) !=145) || func_161(iParam0)) || func_160(iParam0)) || func_159(iParam0)) || func_158(iParam0)) || !func_157(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(func_160(iParam0)){
}
if(func_160(iParam0)){
}
if(func_45(iParam0, 0, 0)){
}
if(func_45(iParam0, 1, 0)){
}
if(func_45(iParam0, 2, 0)){
}
if(func_34(iParam0) !=145){
}
return 0;
}
return 1;
}

int func_157(int iParam0){
if(iParam0==0){
return 0;
}
if(!func_139(iParam0, 0, -1)){
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

int func_158(int iParam0){
int iVar0;
char* sVar1;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
sVar1=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
if(iVar0==joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G ")){
return 1;
}
if(!func_139(iVar0, 0, -1)){
return 1;
}
return 0;
}

int func_159(int iParam0){
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

int func_160(int iParam0){
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

int func_161(int iParam0){
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


void func_162(int iParam0, bool bParam1){
if(iParam0==-1){
return;
}
if(bParam1){
if(!func_164(iParam0, 0)){
func_163(iParam0, 1, 0);
func_163(iParam0, 2, 0);
func_163(iParam0, 3, 0);
func_163(iParam0, 4, 0);
func_163(iParam0, 0, 1);
Global_77479[iParam0]=1;
}}else{
func_163(iParam0, 0, 0);
}}


void func_163(int iParam0, bool bParam1, bool bParam2){
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113810.f_32752[iParam0]), bParam1);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_32752[iParam0]), bParam1);
}}

int func_164(int iParam0, int iParam1){
if(iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113810.f_32752[iParam0], iParam1);
}


void func_165(int iParam0){
bool bVar0;
if(iParam0==-1){
return;
}
if(func_169(&(Global_77479.f_555[0 /*21*/]), iParam0)){
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
if(((((iParam0==24 && func_164(iParam0, 0)) && Global_78388.f_66==0) && Global_113810.f_32752.f_1958[Global_77479.f_555[0 /*21*/].f_14] !=0) && Global_113810.f_32752.f_1958[Global_77479.f_555[0 /*21*/].f_14] > 3) && (!func_167(0, Global_77479.f_555[0 /*21*/].f_12) || !func_167(1, Global_77479.f_555[0 /*21*/].f_12))){
func_166(&(Global_113810.f_32752.f_69[Global_77479.f_555[0 /*21*/].f_14 /*78*/]), &Global_78388);
Global_78466=Global_113810.f_32752.f_5591;
}
func_162(iParam0, 0);
}}}


void func_166(var uParam0, var uParam1){
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

int func_167(int iParam0, int iParam1){
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
if(iParam0 < 0 || iParam0 >=func_168(&(Global_113810.f_32752.f_5038[iVar0 /*157*/]))){
return 0;
}
return func_139(Global_113810.f_32752.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0, -1);
}

int func_168(var uParam0){
return *uParam0;
}

int func_169(var uParam0, int iParam1){
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
uParam0->f_4=func_36(0, 1);
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
uParam0->f_4=func_36(0, 1);
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
uParam0->f_4=func_36(1, 1);
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
uParam0->f_4=func_36(1, 2);
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
uParam0->f_4=func_36(1, 1);
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
uParam0->f_4=func_36(1, 2);
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
uParam0->f_4=func_36(2, 1);
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
uParam0->f_4=func_36(2, 1);
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
uParam0->f_4=func_36(2, 1);
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
if(func_150()){
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
if(func_150()){
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
if(!func_73(Global_113810.f_32752.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113810.f_32752.f_1864[uParam0->f_14 /*3*/] 
};
}
if(Global_113810.f_32752.f_1934[uParam0->f_14] !=-1f){
uParam0->f_3=Global_113810.f_32752.f_1934[uParam0->f_14];
}}
if(MISC::IS_BIT_SET(uParam0->f_9, 19)){
if(!func_73(Global_113810.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113810.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113810.f_2366.f_539.f_3609[1 /*4*/][uParam0->f_12];
}}elseif(MISC::IS_BIT_SET(uParam0->f_9, 20)){
if(!func_73(Global_113810.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113810.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113810.f_2366.f_539.f_3609[0 /*4*/][uParam0->f_12];
}}
return iVar0;
}

int func_170(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
iVar0=0;
while (iVar0 < 68){
if((ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_77479.f_484[iVar0], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[iVar0], 0)){
VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar1, &iVar2);
VEHICLE::GET_VEHICLE_COLOURS(Global_77479.f_484[iVar0], &iVar3, &iVar4);
if(((ENTITY::GET_ENTITY_MODEL(iParam0)==ENTITY::GET_ENTITY_MODEL(Global_77479.f_484[iVar0]) && VEHICLE::GET_VEHICLE_LIVERY(iParam0)==VEHICLE::GET_VEHICLE_LIVERY(Global_77479.f_484[iVar0])) && iVar1==iVar2) && iVar3==iVar4){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_171(int iParam0, struct<3> Param1, bool bParam2){
int iVar0;
var uVar1[3];
int iVar2;
int iVar3;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
switch (iVar0){
case joaat("cargobob"):
if(func_172(iParam0, Global_77479.f_139[38], 0)){
func_165(38);
return 1;
}
break;
case joaat("firetruk"):
if(func_172(iParam0, Global_77479.f_139[43], 1)){
func_165(43);
return 1;
}
break;
case joaat("cuban800"):
iVar2=PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
iVar3=0;
while (iVar3 <=(iVar2 - 1)){
if(func_172(iParam0, uVar1[iVar3], 1) && func_138(ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0)){
if((!bParam2 || func_73(Param1, 0f, 0f, 0f, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], 1), 1) < 10f){
VEHICLE::DELETE_VEHICLE(&iParam0);
return 1;
}else{
return 0;
}}
iVar3++;
}
break;
case joaat("luxor2"):
if((ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[14]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[14], 0)){
if(ENTITY::GET_ENTITY_MODEL(Global_77479.f_484[14])==joaat("luxor2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0)==VEHICLE::GET_VEHICLE_LIVERY(Global_77479.f_484[14])){
func_165(14);
return 1;
}}
break;
case joaat("swift2"):
if((ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[20]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[20], 0)){
if(ENTITY::GET_ENTITY_MODEL(Global_77479.f_484[20])==joaat("swift2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0)==VEHICLE::GET_VEHICLE_LIVERY(Global_77479.f_484[20])){
func_165(20);
return 1;
}}
break;
}
return 0;
}

int func_172(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
if(bParam2){
VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar0, &iVar1);
VEHICLE::GET_VEHICLE_COLOURS(iParam1, &iVar2, &iVar3);
if(iVar0==iVar2 && iVar1==iVar3){
return 1;
}}else{
return 1;
}}
return 0;
}


void func_173(int iParam0, int iParam1){
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


void func_174(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0])){
if(iParam0==145 || Global_98154[iVar0]==iParam0){
if(iParam1==0 || ENTITY::GET_ENTITY_MODEL(Global_98144[iVar0])==func_36(iParam0, iParam1)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_98144[iVar0], 0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98144[iVar0], 0, 1);
VEHICLE::DELETE_VEHICLE(&(Global_98144[iVar0]));
Global_98154[iVar0]=145;
}}}}
iVar0++;
}}


void func_175(int iParam0, var uParam1, bool bParam2, bool bParam3){
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
if(!func_195(iParam0)){
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
if(MISC::IS_BIT_SET(uParam1->f_77, func_40(iVar0 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_40(iVar0 + 1));
}}elseif(uParam1->f_66==joaat("sandking") || uParam1->f_66==joaat("sandking2")){
iVar1=1;
if(MISC::IS_BIT_SET(uParam1->f_77, func_40(iVar1 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_40(iVar1 + 1));
}}elseif(uParam1->f_66==joaat("formula") || uParam1->f_66==joaat("formula2")){
iVar2=1;
while (iVar2 <=9){
if(MISC::IS_BIT_SET(uParam1->f_77, func_40(iVar2))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_40(iVar2));
}
iVar2++;
}}elseif(uParam1->f_66==joaat("openwheel1")){
iVar3=1;
while (iVar3 <=6){
if(MISC::IS_BIT_SET(uParam1->f_77, func_40(iVar3))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_40(iVar3));
}
iVar3++;
}}elseif(uParam1->f_66==joaat("openwheel2")){
iVar4=1;
while (iVar4 <=11){
if(iVar4 !=9 && iVar4 !=10){
if(MISC::IS_BIT_SET(uParam1->f_77, func_40(iVar4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_40(iVar4));
}}
iVar4++;
}}elseif(uParam1->f_66==joaat("surfer3")){
iVar5=1;
while (iVar5 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_40(iVar5))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_40(iVar5));
}
iVar5++;
}}elseif(uParam1->f_66==joaat("dinghy5")){
if(MISC::IS_BIT_SET(uParam1->f_77, func_40(4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_40(4));
}}elseif(uParam1->f_66==joaat("coquette4")){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 10) !=0){
MISC::SET_BIT(&(uParam1->f_77), false);
}}elseif(uParam1->f_66==joaat("yosemite2")){
MISC::SET_BIT(&(uParam1->f_77), func_40(1));
}elseif(uParam1->f_66==joaat("hotknife")){
iVar6=1;
while (iVar6 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_40(iVar6))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_40(iVar6));
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
if(func_193(uParam1->f_5) || func_193(uParam1->f_6)){
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
if(((MISC::IS_BIT_SET(uParam1->f_77, 15) || func_192(iParam0)) || (((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0) && uParam1->f_9[20] > 0)) && func_191()){
uParam1->f_62=0;
uParam1->f_63=0;
uParam1->f_64=0;
}elseif((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0){
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
if(uParam1->f_65==-1 && !func_42(uParam1->f_66)){
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
func_190(iParam0, uParam1->f_69);
}}else{
func_190(iParam0, uParam1->f_69);
}}}
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0)){
if((uParam1->f_68==0 || uParam1->f_68==3) || uParam1->f_68==5){
VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
}else{
VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
}}
if(bParam3){
func_182(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
}
if(!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66)){
iVar7=0;
while (iVar7 <=11){
if(MISC::IS_BIT_SET(uParam1->f_77, func_40(iVar7 + 1))){
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
if((((func_176() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, func_143(1))){
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

int func_176(){
if((((Global_4718592.f_108230==6 || Global_4718592.f_108230==7) || Global_4718592.f_108230==18) || Global_4718592.f_108230==19) && Global_4718592.f_2==20){
return 0;
}
if(func_180(7)){
if(func_178(Global_2672524.f_4.f_16) || func_177(Global_2672524.f_4.f_16)){
return 0;
}}
return 1;
}

int func_177(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return Global_1890739[iVar0 /*138*/].f_77.f_60 !=0;
}
return 0;
}

int func_178(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_179(iParam0, 9);
}
return 0;
}


var func__179(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}


bool func_180(int iParam0){
return func_181(&(Global_2672524.f_184), iParam0);
}


var func__181(var uParam0, var uParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=uParam1;
iVar1=(iVar0 / 32);
iVar2=(iVar0 % 32);
return MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2);
}

int func_182(int iParam0, var uParam1, var uParam2){
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
}elseif(func_188(*iParam0, iVar1, ((*uParam1)[iVar0] - 1))){
}else{
VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
}}}
iVar0++;
}
if(func_187(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) !=func_185(*iParam0, ((*uParam1)[38] - 1))){
VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_185(*iParam0, ((*uParam1)[38] - 1)), false);
}
func_184(iParam0);
if(func_183(*iParam0)){
VEHICLE::SET_VEHICLE_STRONG(*iParam0, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
}
return 1;
}

int func_183(int iParam0){
int iVar0;
int iVar1;
int iVar2;
char cVar3[32];
if((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0){
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


void func_184(var uParam0){
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

int func_185(int iParam0, int iParam1){
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
iVar0=func_186(iParam0, 38) + 1;
iVar1=func_186(iParam0, 24) + 1;
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

int func_186(int iParam0, int iParam1){
int iVar0;
if((STREAMING::IS_MODEL_VALID(Global_152698) && VEHICLE::IS_VEHICLE_MODEL(iParam0, Global_152698)) && Global_152699==iParam1){
return Global_152700;
}
iVar0=(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
while (iVar0 >=0 && func_188(iParam0, iParam1, iVar0)){
iVar0=(iVar0 - 1);
}
return iVar0;
}

int func_187(int iParam0, int iParam1){
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

int func_188(var uParam0, int iParam1, int iParam2){
if(!func_189() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(uParam0, iParam1, iParam2)){
return 1;
}
return 0;
}

int func_189(){
return 0;
}


void func_190(int iParam0, var uParam1){
int iVar0;
int iVar1;
if(VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0){
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


bool func_191(){
return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_192(int iParam0){
var uVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
uVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
}
return MISC::IS_BIT_SET(uVar0, 4);
}}}
return 0;
}

int func_193(int iParam0){
if(!func_189() && func_194(iParam0)){
return 1;
}
return 0;
}

int func_194(int iParam0){
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

int func_195(int iParam0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!func_202(PLAYER::PLAYER_ID(), -1)){
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
if(func_197(PLAYER::PLAYER_ID())==3){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(func_196(iParam0) !=-1){
return 1;
}}}
return 0;
}

int func_196(int iParam0){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID")){
return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
}}
return -1;
}

int func_197(int iParam0){
if(func_201(iParam0)==233){
return func_198(iParam0);
}
return -1;
}

int func_198(int iParam0){
if(func_199(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_182;
}
return -1;
}

int func_199(int iParam0, int iParam1){
if(func_200(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10.f_33 !=-1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 !=-1)){
return 1;
}}
return 0;
}

int func_200(var uParam0){
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

int func_201(int iParam0){
if(func_200(iParam0)){
if(func_199(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_33;
}}
return -1;
}

int func_202(int iParam0, int iParam1){
int iVar0;
if(func_203(iParam0, 1, 1)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(PLAYER::PLAYER_PED_ID()==VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, 0)){
return 1;
}}}}
return 0;
}

int func_203(int iParam0, bool bParam1, bool bParam2){
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


void func_204(struct<3> Param0, float fParam1, int iParam2){
int iVar0;
iVar0=0;
while (iVar0 < 68){
if(func_169(&(Global_77479.f_555[0 /*21*/]), iVar0)){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_77479.f_555[0 /*21*/], iParam2) <=fParam1){
func_165(iVar0);
}}
iVar0++;
}}


var func__205(){
return Global_107357.f_2890.f_12.f_66;
}


bool func_206(){
return func_137(&(Global_107357.f_2890));
}


void func_207(){
uLocal_303=GRAPHICS::REQUEST_SCALEFORM_MOVIE("BREAKING_NEWS");
STREAMING::REQUEST_MODEL(joaat("jet"));
STREAMING::REQUEST_MODEL(joaat("police3"));
STREAMING::REQUEST_MODEL(joaat("maverick"));
STREAMING::REQUEST_MODEL(joaat("bison"));
STREAMING::REQUEST_MODEL(joaat("blista"));
STREAMING::REQUEST_MODEL(joaat("ig_molly"));
STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
STREAMING::REQUEST_MODEL(joaat("rapidgt"));
VEHICLE::REQUEST_VEHICLE_RECORDING(45, "BB_Chase");
VEHICLE::REQUEST_VEHICLE_RECORDING(35, "BB_Chase");
VEHICLE::REQUEST_VEHICLE_RECORDING(2, "BB_Chase");
VEHICLE::REQUEST_VEHICLE_RECORDING(54, "BB_Chase");
VEHICLE::REQUEST_VEHICLE_RECORDING(55, "BB_Chase");
VEHICLE::REQUEST_VEHICLE_RECORDING(67, "BB_Chase");
func_209(1, "BB_Chase");
if(func_23()){
if(func_206()){
if(!VEHICLE::IS_THIS_MODEL_A_HELI(func_205()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(func_205())){
func_151();
while (!func_135()){
wait(0);
}}}}
while (((((((!STREAMING::HAS_MODEL_LOADED(joaat("jet")) || !STREAMING::HAS_MODEL_LOADED(joaat("police3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("maverick"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bison"))) || !STREAMING::HAS_MODEL_LOADED(joaat("blista"))) || !STREAMING::HAS_MODEL_LOADED(joaat("ig_molly"))) || !STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio"))) || !STREAMING::HAS_MODEL_LOADED(joaat("rapidgt"))){
wait(0);
}
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_303) || !func_208(1, "BB_Chase")){
wait(0);
}
while (((((!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(45, "BB_Chase") || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(35, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(54, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(55, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(67, "BB_Chase")){
wait(0);
}}


bool func_208(int iParam0, char* sParam1){
return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, sParam1);
}


void func_209(int iParam0, char* sParam1){
VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, sParam1);
}


void func_210(){
func_236();
func_234();
HUD::CLEAR_PRINTS();
MISC::SET_INSTANCE_PRIORITY_HINT(0);
PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_260)){
OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_260, 0);
}
if(PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_261)){
PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_261);
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1019.579f, -484.872f, 36.0795f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 93.7701f);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_277)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_277)){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_277);
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_276, 0);
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_276);
}}}
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_666)){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_666, 0);
}
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_667)){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_667, 0);
}
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_668)){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_668, 0);
}
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_669)){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_669, 0);
}
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_670)){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_670, 0);
}
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_665[0])){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_665[0], 0);
}
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_665[1])){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_665[1], 0);
}
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_665[2])){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_665[2], 0);
}
STREAMING::REMOVE_PTFX_ASSET();
if(ENTITY::DOES_ENTITY_EXIST(iLocal_262)){
PED::DELETE_PED(&iLocal_262);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_264)){
PED::DELETE_PED(&iLocal_264);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_267)){
PED::DELETE_PED(&iLocal_267);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_268)){
PED::DELETE_PED(&iLocal_268);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_269)){
PED::DELETE_PED(&iLocal_269);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_270)){
PED::DELETE_PED(&iLocal_270);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_271)){
PED::DELETE_PED(&iLocal_271);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_272)){
PED::DELETE_PED(&iLocal_272);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_263[0])){
PED::DELETE_PED(&(iLocal_263[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_263[1])){
PED::DELETE_PED(&(iLocal_263[1]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_263[2])){
PED::DELETE_PED(&(iLocal_263[2]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_263[3])){
PED::DELETE_PED(&(iLocal_263[3]));
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_265[0])){
PED::DELETE_PED(&(uLocal_265[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_265[1])){
PED::DELETE_PED(&(uLocal_265[1]));
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_265[2])){
PED::DELETE_PED(&(uLocal_265[2]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[0])){
PED::DELETE_PED(&(iLocal_266[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[1])){
PED::DELETE_PED(&(iLocal_266[1]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[2])){
PED::DELETE_PED(&(iLocal_266[2]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[3])){
PED::DELETE_PED(&(iLocal_266[3]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[4])){
PED::DELETE_PED(&(iLocal_266[4]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[5])){
PED::DELETE_PED(&(iLocal_266[5]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[6])){
PED::DELETE_PED(&(iLocal_266[6]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[7])){
PED::DELETE_PED(&(iLocal_266[7]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[8])){
PED::DELETE_PED(&(iLocal_266[8]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[9])){
PED::DELETE_PED(&(iLocal_266[9]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[10])){
PED::DELETE_PED(&(iLocal_266[10]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_273[0])){
PED::DELETE_PED(&(iLocal_273[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_274[0])){
PED::DELETE_PED(&(iLocal_274[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_274[1])){
PED::DELETE_PED(&(iLocal_274[1]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
VEHICLE::DELETE_VEHICLE(&iLocal_276);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_277)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_277)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_277, 1, 0);
}
VEHICLE::DELETE_VEHICLE(&iLocal_277);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_280)){
VEHICLE::DELETE_VEHICLE(&iLocal_280);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_281)){
VEHICLE::DELETE_VEHICLE(&iLocal_281);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_282)){
VEHICLE::DELETE_VEHICLE(&iLocal_282);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_283)){
VEHICLE::DELETE_VEHICLE(&iLocal_283);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_285)){
VEHICLE::DELETE_VEHICLE(&iLocal_285);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_287)){
VEHICLE::DELETE_VEHICLE(&iLocal_287);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_291[0])){
VEHICLE::DELETE_VEHICLE(&(iLocal_291[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_291[1])){
VEHICLE::DELETE_VEHICLE(&(iLocal_291[1]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_278[0])){
VEHICLE::DELETE_VEHICLE(&(iLocal_278[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_278[1])){
VEHICLE::DELETE_VEHICLE(&(iLocal_278[1]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_291[0])){
VEHICLE::DELETE_VEHICLE(&(iLocal_291[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_291[1])){
VEHICLE::DELETE_VEHICLE(&(iLocal_291[1]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_284[0])){
VEHICLE::DELETE_VEHICLE(&(iLocal_284[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_284[1])){
VEHICLE::DELETE_VEHICLE(&(iLocal_284[1]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_286[0])){
VEHICLE::DELETE_VEHICLE(&(iLocal_286[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_279)){
VEHICLE::DELETE_VEHICLE(&iLocal_279);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_292)){
OBJECT::DELETE_OBJECT(&iLocal_292);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_293)){
OBJECT::DELETE_OBJECT(&iLocal_293);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_294)){
OBJECT::DELETE_OBJECT(&iLocal_294);
}
AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_DRIVE_TO_AIRPORT")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_DRIVE_TO_AIRPORT");
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_MAIN_CHASE")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_MAIN_CHASE");
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_HELI_TAKEOFF")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_HELI_TAKEOFF");
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_TANKER_CRASH")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_TANKER_CRASH");
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_PLANE_ON_FIRE")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_PLANE_ON_FIRE");
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_JET_LANDING")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_JET_LANDING");
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ARRIVE_AT_HANGAR")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_ARRIVE_AT_HANGAR");
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ON_FOOT_CHASE")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_ON_FOOT_CHASE");
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS");
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_PLANE")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_PLANE");
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_VEHICLE")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_VEHICLE");
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ENGINE_DEATH_SCENE")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_ENGINE_DEATH_SCENE");
}
AUDIO::STOP_SOUND(iLocal_251);
AUDIO::STOP_SOUND(iLocal_253);
AUDIO::STOP_SOUND(iLocal_254);
AUDIO::STOP_SOUND(iLocal_255);
AUDIO::STOP_SOUND(iLocal_256);
AUDIO::STOP_SOUND(iLocal_257);
AUDIO::STOP_SOUND(iLocal_258);
AUDIO::STOP_SOUND(iLocal_259);
AUDIO::STOP_SOUND(iLocal_252);
func_232(&uLocal_26, 0, 0);
if(CAM::DOES_CAM_EXIST(uLocal_299)){
CAM::DESTROY_CAM(uLocal_299, 0);
}
if(CAM::DOES_CAM_EXIST(uLocal_300)){
CAM::DESTROY_CAM(uLocal_300, 0);
}
if(CAM::DOES_CAM_EXIST(uLocal_301)){
CAM::DESTROY_CAM(uLocal_301, 0);
}
func_211(1, 1);
STREAMING::REMOVE_ANIM_DICT("misssolomon_3");
STREAMING::REMOVE_ANIM_DICT("amb@world_human_clipboard@male@base");
STREAMING::REMOVE_ANIM_DICT("missheist_agency3aig_lift_waitped_a");
VEHICLE::REMOVE_VEHICLE_RECORDING(1, "BB_CHASE");
VEHICLE::REMOVE_VEHICLE_RECORDING(2, "BB_Chase");
VEHICLE::REMOVE_VEHICLE_RECORDING(9, "BB_CHASE");
VEHICLE::REMOVE_VEHICLE_RECORDING(35, "BB_Chase");
VEHICLE::REMOVE_VEHICLE_RECORDING(45, "BB_Chase");
VEHICLE::REMOVE_VEHICLE_RECORDING(54, "BB_Chase");
VEHICLE::REMOVE_VEHICLE_RECORDING(55, "BB_Chase");
VEHICLE::REMOVE_VEHICLE_RECORDING(61, "BB_CHASE");
VEHICLE::REMOVE_VEHICLE_RECORDING(63, "BB_CHASE");
VEHICLE::REMOVE_VEHICLE_RECORDING(64, "BB_CHASE");
VEHICLE::REMOVE_VEHICLE_RECORDING(67, "BB_Chase");
VEHICLE::REMOVE_VEHICLE_RECORDING(68, "BB_CHASE");
VEHICLE::REMOVE_VEHICLE_RECORDING(69, "BB_Chase");
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_303);
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("digitalOverlay");
}


void func_211(bool bParam0, bool bParam1){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_183)){
iLocal_89=0;
func_231();
PED::REMOVE_RELATIONSHIP_GROUP(iLocal_192);
PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
PED::SET_CREATE_RANDOM_COPS(1);
}
if(bLocal_105){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_230());
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_229());
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_228());
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_227());
if(!CAM::IS_SCREEN_FADED_OUT() && !bParam0){
func_226();
func_225();
func_222();
}else{
func_218();
func_217();
}
if(bParam1){
func_212(0);
}}}


void func_212(bool bParam0){
int iVar0;
iVar0=0;
while (iVar0 < 61){
func_213(iVar0, bParam0);
iVar0++;
}}


void func_213(int iParam0, bool bParam1){
if(bParam1){
if(!func_76(iParam0, 2, 1)){
func_216(iParam0, 2, 1);
}}elseif(func_76(iParam0, 2, 1)){
func_214(iParam0, 2, 1);
}}


void func_214(int iParam0, bool bParam1, bool bParam2){
var uVar0;
if(iParam0==-1){
return;
}
if(bParam2){
MISC::CLEAR_BIT(&(Global_100885.f_1414[iParam0]), bParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_78()==0){
uVar0=func_51(func_77(iParam0), -1);
MISC::CLEAR_BIT(&uVar0, bParam1);
func_215(func_77(iParam0), uVar0, -1, 1);
}}else{
MISC::CLEAR_BIT(&(Global_113810.f_668[iParam0]), bParam1);
}}


void func_215(int iParam0, var uParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_52(iParam0, iParam2);
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, uParam1, iParam3);
}}


void func_216(int iParam0, bool bParam1, bool bParam2){
var uVar0;
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_100885.f_1414[iParam0]), iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_78()==0){
uVar0=func_51(func_77(iParam0), -1);
MISC::SET_BIT(&uVar0, bParam1);
func_215(func_77(iParam0), uVar0, -1, 1);
}}else{
MISC::SET_BIT(&(Global_113810.f_668[iParam0]), bParam1);
}}


void func_217(){
int iVar0;
iVar0=0;
while (iVar0 < 175){
iLocal_199[iVar0]=0;
Local_171[iVar0 /*3*/]={
0f, 0f, 0f 
};
fLocal_107[iVar0]=0f;
fLocal_108[iVar0]=0f;
fLocal_109[iVar0]=0f;
fLocal_110[iVar0]=0f;
iLocal_147[iVar0]=0;
fLocal_111[iVar0]=0f;
iLocal_148[iVar0]=0;
iLocal_193[iVar0]=0;
iLocal_149[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 12){
iLocal_200[iVar0]=0;
iVar0++;
}
iLocal_154=0;
iVar0=0;
while (iVar0 < 15){
iLocal_201[iVar0]=0;
Local_172[iVar0 /*3*/]={
0f, 0f, 0f 
};
fLocal_122[iVar0]=0f;
fLocal_123[iVar0]=0f;
fLocal_124[iVar0]=0f;
fLocal_125[iVar0]=0f;
iLocal_153[iVar0]=0;
iLocal_194[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 6){
iLocal_203[iVar0]=0;
iVar0++;
}
iLocal_156=0;
iVar0=0;
while (iVar0 < 35){
iLocal_202[iVar0]=0;
Local_173[iVar0 /*3*/]={
0f, 0f, 0f 
};
fLocal_116[iVar0]=0f;
fLocal_117[iVar0]=0f;
fLocal_118[iVar0]=0f;
fLocal_119[iVar0]=0f;
iLocal_150[iVar0]=0;
fLocal_120[iVar0]=0f;
iLocal_151[iVar0]=0;
iLocal_195[iVar0]=0;
iLocal_152[iVar0]=0;
iVar0++;
}
iLocal_155=0;
iLocal_158=0;
iLocal_161=0;
iLocal_162=0;
iLocal_163=0;
}


void func_218(){
func_221();
func_220();
func_219();
}


void func_219(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 35){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[iVar0])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[iVar0], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_202[iVar0])){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_202[iVar0]);
}
iVar1=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_202[iVar0], -1, 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 !=PLAYER::PLAYER_PED_ID()){
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1)){
PED::DELETE_PED(&iVar1);
}}}
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_202[iVar0])){
VEHICLE::DELETE_VEHICLE(&(iLocal_202[iVar0]));
}}
iLocal_151[iVar0]=0;
if(!bLocal_85 && !bLocal_98){
if(iLocal_150[iVar0] > 0){
VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_150[iVar0], &cLocal_183);
}}
iVar0++;
}
iVar0=0;
while (iVar0 < 35){
if(!iLocal_195[iVar0]==0){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_195[iVar0]);
}
iVar0++;
}}


void func_220(){
int iVar0;
iVar0=0;
while (iVar0 < 15){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_201[iVar0])){
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_201[iVar0])){
VEHICLE::DELETE_VEHICLE(&(iLocal_201[iVar0]));
}}
iLocal_153[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 15){
if(!iLocal_194[iVar0]==0){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_194[iVar0]);
}
iVar0++;
}
iLocal_159=0;
iLocal_156=0;
}


void func_221(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 175){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_199[iVar0])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[iVar0], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_199[iVar0])){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_199[iVar0]);
}
iVar1=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_199[iVar0], -1, 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 !=PLAYER::PLAYER_PED_ID()){
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1)){
PED::DELETE_PED(&iVar1);
}}}
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_199[iVar0])){
VEHICLE::DELETE_VEHICLE(&(iLocal_199[iVar0]));
}}
if(!bLocal_85 && !bLocal_98){
if(iLocal_147[iVar0] > 0){
VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_147[iVar0], &cLocal_183);
}}
iLocal_148[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 175){
if(!iLocal_193[iVar0]==0){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_193[iVar0]);
}
iVar0++;
}
iLocal_158=0;
iLocal_154=0;
}


void func_222(){
int iVar0;
iVar0=0;
while (iVar0 < 35){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[iVar0])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[iVar0], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_202[iVar0])){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_202[iVar0]);
}}
func_224(iLocal_202[iVar0]);
func_223(iLocal_202[iVar0]);
}
iLocal_151[iVar0]=0;
iLocal_152[iVar0]=0;
if(!bLocal_85 && !bLocal_98){
if(iLocal_150[iVar0] > 0){
VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_150[iVar0], &cLocal_183);
}}
iVar0++;
}
iVar0=0;
while (iVar0 < 35){
if(!iLocal_195[iVar0]==0){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_195[iVar0]);
}
iVar0++;
}
iLocal_160=0;
}


void func_223(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
}}


void func_224(int iParam0){
float fVar0;
int iVar1;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
iVar1=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
if(!PED::IS_PED_INJURED(iVar1)){
if(!iVar1==PLAYER::PLAYER_PED_ID()){
fVar0=ENTITY::GET_ENTITY_SPEED(iParam0);
if(fVar0 < 8f){
fVar0=8f;
}
if(fVar0 > 62.9f){
fVar0=62.9f;
}
TASK::TASK_VEHICLE_MISSION(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, 1);
PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 8192, 1);
if(bLocal_106){
PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, 1);
PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, 0);
}
PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, 0);
}}}}


void func_225(){
int iVar0;
iVar0=0;
while (iVar0 < 15){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_201[iVar0])){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_201[iVar0], 0)){
ENTITY::SET_ENTITY_COLLISION(iLocal_201[iVar0], 1, 0);
}
func_223(iLocal_201[iVar0]);
}
iVar0++;
}
iVar0=0;
while (iVar0 < 15){
if(!iLocal_194[iVar0]==0){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_194[iVar0]);
}
iVar0++;
}
iLocal_159=0;
iLocal_156=0;
}


void func_226(){
int iVar0;
iVar0=0;
while (iVar0 < 175){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_199[iVar0])){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_199[iVar0], 0)){
ENTITY::SET_ENTITY_COLLISION(iLocal_199[iVar0], 1, 0);
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[iVar0], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_199[iVar0])){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_199[iVar0]);
}}
func_224(iLocal_199[iVar0]);
func_223(iLocal_199[iVar0]);
}
iLocal_148[iVar0]=0;
iLocal_149[iVar0]=0;
if(!bLocal_85 && !bLocal_98){
if(iLocal_147[iVar0] > 0){
VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_147[iVar0], &cLocal_183);
}}
iVar0++;
}
iVar0=0;
while (iVar0 < 175){
if(!iLocal_193[iVar0]==0){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_193[iVar0]);
}
iVar0++;
}
iLocal_158=0;
iLocal_154=0;
}

int func_227(){
return joaat("s_m_y_cop_01");
}

int func_228(){
return joaat("police");
}

int func_229(){
return joaat("sultan");
}

int func_230(){
if(iLocal_196==0){
return joaat("a_m_y_business_01");
}
return iLocal_196;
}


void func_231(){
VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(-1);
VEHICLE::SET_GARBAGE_TRUCKS(1);
VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(1);
VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
STREAMING::SET_PED_POPULATION_BUDGET(3);
}


void func_232(var uParam0, int iParam1, int iParam2){
char* sVar0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(MISC::IS_BIT_SET(Global_2794162.f_4697, 26)){
return;
}}
if(CAM::IS_GAMEPLAY_HINT_ACTIVE()){
CAM::STOP_GAMEPLAY_HINT(iParam2);
GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
if(uParam0->f_11){
GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
uParam0->f_11=0;
}}
CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
uParam0->f_1=0;
*uParam0=0;
uParam0->f_2=-1;
uParam0->f_8=0;
uParam0->f_5=0;
uParam0->f_6=0;
sVar0=iParam1;
if(MISC::IS_STRING_NULL(sVar0)){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
sVar0="CMN_HINT";
}else{
sVar0="FM_IHELP_HNT";
}}
if(!MISC::IS_STRING_NULL(uParam0->f_3)){
if(func_233(uParam0->f_3)){
HUD::CLEAR_HELP(1);
}}
if(!MISC::IS_STRING_NULL(sVar0)){
if(func_233(sVar0)){
HUD::CLEAR_HELP(1);
}}}


bool func_233(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_234(){
Global_20711=0;
func_235();
}


void func_235(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22856=0;
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=6;
}}


void func_236(){
Global_20711=0;
func_237();
}


void func_237(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22856=0;
if((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20500.f_1==9) || Global_20499==1){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=6;
Global_20500.f_1=3;
return;
}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(1);
Global_21845=6;
return;
}}


void func_238(){
if(HUD::DOES_BLIP_EXIST(uLocal_295)){
HUD::REMOVE_BLIP(&uLocal_295);
}
if(HUD::DOES_BLIP_EXIST(uLocal_296)){
HUD::REMOVE_BLIP(&uLocal_296);
}
if(HUD::DOES_BLIP_EXIST(uLocal_297)){
HUD::REMOVE_BLIP(&uLocal_297);
}
if(HUD::DOES_BLIP_EXIST(uLocal_298)){
HUD::REMOVE_BLIP(&uLocal_298);
}}


void func_239(){
if(iLocal_484==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_264)){
if(!PED::IS_PED_INJURED(iLocal_264)){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_264, PLAYER::PLAYER_PED_ID(), 0)){
iLocal_484=1;
}}}}
if(iLocal_484==0){
if(iLocal_454==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_264)){
if(!PED::IS_PED_INJURED(iLocal_264)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_262)){
if(!PED::IS_PED_INJURED(iLocal_262)){
if(TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_262)){
if(TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_262) > 18){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_294)){
if(ENTITY::IS_ENTITY_ATTACHED(iLocal_294)){
ENTITY::DETACH_ENTITY(iLocal_294, 1, 1);
}
}
uLocal_250=PED::CREATE_SYNCHRONIZED_SCENE(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
TASK::TASK_SYNCHRONIZED_SCENE(iLocal_264, uLocal_250, "misssolomon_3", "_action", 1000f, -1000f, 4, 0, 1148846080, 0);
TASK::TASK_LOOK_AT_ENTITY(iLocal_264, PLAYER::PLAYER_PED_ID(), 9000, 1024, 3);
iLocal_454=1;
iLocal_455=0;
}}
}}}}}
if(iLocal_454==1 && iLocal_456==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_264)){
if(!PED::IS_PED_INJURED(iLocal_264)){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_250)){
if(!iLocal_455){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_250) > 0.25f){
func_17(&uLocal_488, 4, iLocal_264, "HangerWorker", 0, 1);
func_240(iLocal_264, "T1M4_BCAA", "HangerWorker", 11);
iLocal_455=1;
}
}
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_250) > 0.99f){
uLocal_250=PED::CREATE_SYNCHRONIZED_SCENE(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
TASK::TASK_SYNCHRONIZED_SCENE(iLocal_264, uLocal_250, "misssolomon_3", "_react_to_death", 1000f, -1.5f, 3, 16, 1148846080, 0);
iLocal_456=1;
}}}}}
if(iLocal_456==1 && iLocal_459==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_264)){
if(!PED::IS_PED_INJURED(iLocal_264)){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_250)){
if(ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_264, MISC::GET_HASH_KEY("ENDS_IN_RUN"))){
TASK::OPEN_SEQUENCE_TASK(&uLocal_302);
TASK::TASK_FORCE_MOTION_STATE(0, joaat("MotionState_Sprint"), 0);
TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_302);
TASK::TASK_PERFORM_SEQUENCE(iLocal_264, uLocal_302);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_302);
PED::FORCE_PED_MOTION_STATE(iLocal_264, joaat("MotionState_Sprint"), 0, 0, 0);
iLocal_459=1;
}}}}}}elseif(iLocal_459==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_264)){
if(!PED::IS_PED_INJURED(iLocal_264)){
TASK::OPEN_SEQUENCE_TASK(&uLocal_302);
TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_302);
TASK::TASK_PERFORM_SEQUENCE(iLocal_264, uLocal_302);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_302);
iLocal_459=1;
}}}}


void func_240(int iParam0, char* sParam1, char* sParam2, int iParam3){
AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iParam0, sParam1, sParam2, func_15(iParam3), 0);
}


void func_241(){
if(iLocal_221==0){
iLocal_223=0;
iLocal_251=AUDIO::GET_SOUND_ID();
CUTSCENE::REQUEST_CUTSCENE("TRV_4_MCS_2", 8);
STREAMING::REQUEST_MODEL(joaat("prop_jet_bloodsplat_01"));
if(TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5")){
TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Trev4_5", 0, 0.5f, 1f);
}
if(!CAM::IS_SCREEN_FADED_IN()){
CAM::DO_SCREEN_FADE_IN(800);
}
iLocal_221=1;
}
if(iLocal_221==1){
switch (iLocal_223){
case 0:
while (!CUTSCENE::HAS_CUTSCENE_LOADED()){
wait(0);
}
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
if(!PED::IS_PED_INJURED(iLocal_262)){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_262, "Molly", 1, joaat("ig_molly"), 0);
}
if(!PED::IS_PED_INJURED(iLocal_264)){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_264, "Airworker_Tackle_trevor", 0, joaat("s_m_y_airworker"), 0);
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_282, 0)){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_282, "JET_TRV4", 0, joaat("jet"), 0);
}
func_242(1, 1, 1, 0, 0, 0, 0);
AUDIO::TRIGGER_MUSIC_EVENT("TRV4_SUCK_CS");
CUTSCENE::START_CUTSCENE(0);
iLocal_223++;
break;
case 1:
func_132();
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("JET_TRV4", joaat("jet"))){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_282, 0)){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_282, 0)){
ENTITY::FREEZE_ENTITY_POSITION(iLocal_282, 1);
}}}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Airworker_Tackle_trevor", joaat("s_m_y_airworker"))){
if(!PED::IS_PED_INJURED(iLocal_264)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_264, 1);
TASK::TASK_SMART_FLEE_PED(iLocal_264, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
ENTITY::SET_ENTITY_INVINCIBLE(iLocal_264, 0);
PED::SET_PED_CAN_BE_TARGETTED(iLocal_264, 1);
ENTITY::SET_ENTITY_PROOFS(iLocal_264, 0, 0, 0, 0, 0, 0, 0, 0);
}}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0)){
func_132();
func_130(1);
}
if(!CUTSCENE::IS_CUTSCENE_ACTIVE()){
iLocal_334=1;
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_292)){
if(STREAMING::HAS_MODEL_LOADED(joaat("prop_jet_bloodsplat_01"))){
iLocal_292=OBJECT::CREATE_OBJECT(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
ENTITY::SET_ENTITY_ROTATION(iLocal_292, 0f, 0f, -121.5948f, 2, 1);
ENTITY::SET_ENTITY_QUATERNION(iLocal_292, 0f, 0f, 0.8729f, -0.4879f);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_jet_bloodsplat_01"));
}}
CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(0);
func_242(0, 1, 1, 0, 0, 0, 0);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
if(!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), 0, 2)){
WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_smg"), 150, 1, 1);
}
iLocal_221=2;
}
break;
}}
if(iLocal_221==2){
iLocal_221=0;
iLocal_220=8;
}}


void func_242(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
if(bParam0){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
func_250(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20500.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
if(!func_249()){
Global_20500.f_1=3;
}
Global_21845=5;
}
func_248(1, iParam3, iParam2, 0);
Global_63491=1;
Global_75819=1;
Global_78687=1;
}else{
func_250(0);
HUD::THEFEED_RESUME();
Global_63491=0;
if(bParam1){
GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
func_248(0, iParam3, iParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_246(PLAYER::PLAYER_ID())) && !func_244(PLAYER::PLAYER_ID(), 0)) && !func_243()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}}elseif(((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_246(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}
Global_78687=0;
}}


bool func_243(){
return MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}


bool func_244(int iParam0, int iParam1){
bool bVar0;
if(!func_200(iParam0)){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_245(-1, 0)==8;
}else{
bVar0=Global_1853988[iParam0 /*867*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_245(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_54();
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

int func_246(int iParam0){
if(func_244(iParam0, 0)){
return 1;
}
if(func_247()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_247(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_248(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && iParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, iParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}

int func_249(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}


void func_250(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8370, 13);
}else{
MISC::CLEAR_BIT(&Global_8370, 13);
}}


void func_251(){
if(iLocal_440==0){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0, 1, 0)){
iLocal_440=1;
}}elseif(iLocal_444==0){
PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -938.5178f, -2972.022f, 12.46715f, -934.1034f, -2974.613f, 15.96715f, 5.25f, 0, 1, 0)){
PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
}else{
if(fLocal_322 < 1f){
fLocal_322=1f;
}
fLocal_322=(fLocal_322 * 0.975f);
PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), fLocal_322);
}}
if(iLocal_221 > 0){
func_239();
}
if(iLocal_221==0){
iLocal_335=0;
iLocal_336=0;
iLocal_337=0;
iLocal_338=0;
iLocal_340=0;
iLocal_356=0;
iLocal_418=0;
iLocal_419=0;
iLocal_420=0;
iLocal_426=0;
iLocal_441=0;
iLocal_442=0;
iLocal_443=0;
iLocal_444=0;
iLocal_445[0]=0;
iLocal_446[0]=0;
iLocal_445[1]=0;
iLocal_446[1]=0;
iLocal_445[2]=0;
iLocal_454=0;
iLocal_456=0;
iLocal_457=0;
iLocal_458=0;
iLocal_459=0;
iLocal_462=0;
iLocal_482=0;
iLocal_484=0;
iLocal_485[3]=0;
STREAMING::REQUEST_MODEL(joaat("prop_jet_bloodsplat_01"));
INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME("V_60_HangerRm");
PLAYER::SET_MAX_WANTED_LEVEL(5);
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_262)){
if(!PED::IS_PED_INJURED(iLocal_262)){
if(TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_262)){
TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_262, 3f, 1);
}}}
if(!CAM::IS_SCREEN_FADED_IN()){
CAM::DO_SCREEN_FADE_IN(800);
}
iLocal_221=1;
}
if(iLocal_221==1){
if(iLocal_426==0){
if(AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Trv_4_747", 0, -1)){
iLocal_426=1;
}}
if(iLocal_418==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_262)){
if(!PED::IS_PED_INJURED(iLocal_262)){
if(TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_262)){
if(TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_262) > 20){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_282)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_282, 0)){
func_256(&iLocal_282);
AUDIO::PLAY_SOUND_FROM_COORD(iLocal_251, "Trevor_4_747_Jet_Engine", -937.77f, -2981.36f, 15.44f, 0, 0, 0, 0);
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_282, 1, 0, 0);
iLocal_418=1;
}}
}}}}}
if(iLocal_441==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_262)){
if(!PED::IS_PED_INJURED(iLocal_262)){
if(TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_262)){
if(TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_262) > 23){
TASK::CLEAR_PED_TASKS(iLocal_262);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_282)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_282, 0)){
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ENGINE_DEATH_SCENE")){
AUDIO::START_AUDIO_SCENE("SOL_3_ENGINE_DEATH_SCENE");
}
uLocal_249=PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_249, iLocal_282, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_282, "chassis_Control"));
TASK::TASK_SYNCHRONIZED_SCENE(iLocal_262, uLocal_249, "MISSSOLOMON_3", "molly_death", 1.5f, -8f, 4, 0, 1148846080, 0);
PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_249, 1);
iLocal_441=1;
}}
}}}}}
if(iLocal_442==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_262)){
if(!PED::IS_PED_INJURED(iLocal_262)){
if(iLocal_441==1){
Local_316={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
if(Local_316.f_1 < -2965f){
CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_262, 0f, 0f, 0f, 1, 6000, 1000, 2000, 0);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_262, 0);
TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_262, 4000, 48, 4);
iLocal_442=1;
}}}}}elseif(iLocal_443==0){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_262)){
CAM::STOP_GAMEPLAY_HINT(0);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[0])){
if(!PED::IS_PED_INJURED(iLocal_266[0])){
TASK::CLEAR_PED_TASKS(iLocal_266[0]);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_266[0], 0);
}}
iLocal_443=1;
}}
if(iLocal_420==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_262)){
if(!PED::IS_PED_INJURED(iLocal_262)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_293)){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_293, iLocal_262)){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_262, "MISSSOLOMON_3", "molly_death", 3)){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_249) > 0.59f){
ENTITY::DETACH_ENTITY(iLocal_293, 1, 1);
if(HUD::DOES_BLIP_EXIST(uLocal_295)){
HUD::REMOVE_BLIP(&uLocal_295);
}
if(!HUD::DOES_BLIP_EXIST(uLocal_298)){
func_240(iLocal_262, "HIGH_FALL", "WAVELOAD_PAIN_FEMALE", 11);
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ON_FOOT_CHASE")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_ON_FOOT_CHASE");
}
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS")){
AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS");
}
settimerb(0);
iLocal_420=1;
}}}
}}}}}
if(iLocal_444==0){
if(iLocal_420==1 && timerb() > 2500){
uLocal_298=func_253(iLocal_293);
func_20("SOL3_GOD1", 7500, -1);
settimerb(0);
iLocal_444=1;
}}
if(iLocal_485[3]==0){
if(iLocal_444==1 && iLocal_443==1){
if(timerb() > 2500){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 2f, 3);
iLocal_485[3]=1;
}}}
if(iLocal_419==0){
if(!PED::IS_PED_INJURED(iLocal_262)){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_262, "MISSSOLOMON_3", "molly_death", 3)){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_249) > 0.89f){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_282)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_282, 0)){
PED::DELETE_PED(&iLocal_262);
GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_trev4_747_blood_impact", iLocal_282, -12.5793f, 12.2f, -7.09421f, 0f, 0f, 0f, 1f, 0, 0, 0);
uLocal_671=GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_exhaust_plane_misfire", iLocal_282, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
AUDIO::PLAY_SOUND_FROM_COORD(iLocal_252, "Trevor_4_747_Man_Sucked_In", -938.6f, -2984.13f, 15.47f, 0, 0, 0, 0);
iLocal_232=MISC::GET_GAME_TIMER();
iLocal_419=1;
}
}}}}}else{
if(MISC::GET_GAME_TIMER() > iLocal_232 + 574){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_292)){
if(STREAMING::HAS_MODEL_LOADED(joaat("prop_jet_bloodsplat_01"))){
iLocal_292=OBJECT::CREATE_OBJECT(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
ENTITY::SET_ENTITY_ROTATION(iLocal_292, 0f, 0f, -121.5948f, 2, 1);
ENTITY::SET_ENTITY_QUATERNION(iLocal_292, 0f, 0f, 0.8729f, -0.4879f);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_jet_bloodsplat_01"));
}}
if(iLocal_482==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_282)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_282, 0)){
GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_trev4_747_engine_debris", iLocal_282, -12.6286f, 6.85353f, -7.13622f, 180f, 0f, 0f, 1f, 0, 0, 0);
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_282, 0, 0, 0);
func_252();
AUDIO::STOP_SOUND(iLocal_251);
iLocal_482=1;
}}}}
if(iLocal_445[0]==0){
if(MISC::GET_GAME_TIMER() > iLocal_232 + 300){
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_671)){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_671, 0);
}
iLocal_445[0]=1;
}}elseif(iLocal_446[0]==0){
if(MISC::GET_GAME_TIMER() > iLocal_232 + 700){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_282)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_282, 0)){
uLocal_671=GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_exhaust_plane_misfire", iLocal_282, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
iLocal_446[0]=1;
}}}}elseif(iLocal_445[1]==0){
if(MISC::GET_GAME_TIMER() > iLocal_232 + 1000){
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_671)){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_671, 0);
}
iLocal_445[1]=1;
}}elseif(iLocal_446[1]==0){
if(MISC::GET_GAME_TIMER() > iLocal_232 + 1400){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_282)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_282, 0)){
uLocal_671=GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_exhaust_plane_misfire", iLocal_282, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
uLocal_670=GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_damage", iLocal_282, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1065353216, 0, 0, 0);
iLocal_446[1]=1;
}}}}elseif(iLocal_445[2]==0){
if(MISC::GET_GAME_TIMER() > iLocal_232 + 3500){
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_671)){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_671, 0);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_282)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_282, 0)){
ENTITY::SET_ENTITY_PROOFS(iLocal_282, 0, 0, 0, 0, 0, 0, 0, 0);
}}
iLocal_445[2]=1;
}}}
if(iLocal_457==0){
if(iLocal_420==1){
if(iLocal_458==0){
if(!ENTITY::IS_ENTITY_IN_AIR(iLocal_293)){
iLocal_242=MISC::GET_GAME_TIMER();
iLocal_458=1;
}}elseif(MISC::GET_GAME_TIMER() > iLocal_242 + 2000){
ENTITY::FREEZE_ENTITY_POSITION(iLocal_293, 1);
iLocal_457=1;
}}}
if(iLocal_462==0){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_262)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_282)){
ENTITY::FREEZE_ENTITY_POSITION(iLocal_282, 0);
iLocal_462=1;
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_293)){
if(HUD::DOES_BLIP_EXIST(uLocal_298)){
if(func_16(PLAYER::PLAYER_PED_ID(), iLocal_293, 1) < 1.5f && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "PICK_UP", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
HUD::REMOVE_BLIP(&uLocal_298);
OBJECT::DELETE_OBJECT(&iLocal_293);
func_132();
iLocal_221=0;
iLocal_220=8;
}}}}}


void func_252(){
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_666)){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_666, 0);
}
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_667)){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_667, 0);
}
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_668)){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_668, 0);
}
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_669)){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_669, 0);
}}

int func_253(int iParam0){
return func_254(iParam0, 1, 0);
}

int func_254(int iParam0, int iParam1, bool bParam2){
var uVar0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
uVar0=HUD::ADD_BLIP_FOR_ENTITY(iParam0);
if(ENTITY::IS_ENTITY_A_VEHICLE(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_255(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
if(!bParam2){
HUD::SET_BLIP_AS_FRIENDLY(uVar0, iParam1);
}else{
HUD::SET_BLIP_COLOUR(uVar0, 2);
}}elseif(ENTITY::IS_ENTITY_A_PED(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_255(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
HUD::SET_BLIP_AS_FRIENDLY(uVar0, iParam1);
}elseif(ENTITY::IS_ENTITY_AN_OBJECT(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_255(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
}
return uVar0;
}


float func_255(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}


void func_256(int iParam0){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
if(!ENTITY::IS_ENTITY_DEAD(*iParam0, 0)){
Var0={
22.6057f, -2.10018f, -6.22841f 
};
Var1={
12.6349f, 7.89711f, -7.09742f 
};
Var2={
-22.5879f, -2.2931f, -6.22542f 
};
Var3={
-12.6675f, 8.15519f, -6.98833f 
};
Var4={
180f, 0f, 0f 
};
uLocal_666=GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_heathaze", *iParam0, Var0, Var4, 1065353216, 0, 0, 0);
uLocal_667=GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_heathaze", *iParam0, Var1, Var4, 1065353216, 0, 0, 0);
uLocal_668=GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_heathaze", *iParam0, Var2, Var4, 1065353216, 0, 0, 0);
uLocal_669=GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_heathaze", *iParam0, Var3, Var4, 1065353216, 0, 0, 0);
}}


void func_257(){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_262)){
if(!PED::IS_PED_INJURED(iLocal_262)){
if(TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_262)){
if(func_16(PLAYER::PLAYER_PED_ID(), iLocal_262, 1) < 17f){
TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_262, 3f, 1);
}
if(func_16(PLAYER::PLAYER_PED_ID(), iLocal_262, 1) < 22f && func_16(PLAYER::PLAYER_PED_ID(), iLocal_262, 1) > 17f){
TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_262, 2f, 1);
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -921.7f, -2946.4f, 13.4f, 1) > 8f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_262)){
if(func_16(PLAYER::PLAYER_PED_ID(), iLocal_262, 1) > 22f){
TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_262, 1f, 1);
}}elseif(func_16(PLAYER::PLAYER_PED_ID(), iLocal_262, 1) > 22f){
TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_262, 2f, 1);
}}}}
if(iLocal_221 > 0){
if(iLocal_440==0){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0, 1, 0)){
iLocal_440=1;
}}else{
PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
if(fLocal_322 < 1f){
fLocal_322=1f;
}
fLocal_322=(fLocal_322 * 0.98f);
PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), fLocal_322);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_282)){
STREAMING::REQUEST_MODEL(joaat("jet"));
if(STREAMING::HAS_MODEL_LOADED(joaat("jet"))){
iLocal_282=VEHICLE::CREATE_VEHICLE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1, 0);
VEHICLE::SET_VEHICLE_LIVERY(iLocal_282, 2);
VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_282, 0);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_282, 1);
ENTITY::SET_ENTITY_PROOFS(iLocal_282, 1, 1, 1, 1, 1, 0, 0, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
ENTITY::SET_ENTITY_LOD_DIST(iLocal_282, 500);
}}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_264)){
STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
STREAMING::REQUEST_ANIM_DICT("misssolomon_3");
STREAMING::REQUEST_MODEL(joaat("p_amb_clipboard_01"));
if((STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_airworker")) && STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_3")) && STREAMING::HAS_MODEL_LOADED(joaat("p_amb_clipboard_01"))){
iLocal_264=PED::CREATE_PED(26, joaat("s_m_y_airworker"), -932.1812f, -2967.947f, 12.9451f, 170.7182f, 1, 1);
ENTITY::SET_ENTITY_PROOFS(iLocal_264, 0, 0, 0, 0, 0, 0, 0, 0);
PED::SET_PED_CAN_BE_TARGETTED(iLocal_264, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_264, 1);
func_17(&uLocal_488, 4, iLocal_264, "HangerWorker", 0, 1);
iLocal_294=OBJECT::CREATE_OBJECT(joaat("p_amb_clipboard_01"), -932.1812f, -2967.947f, 12.9451f, 1, 1, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_294, iLocal_264, PED::GET_PED_BONE_INDEX(iLocal_262, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
uLocal_250=PED::CREATE_SYNCHRONIZED_SCENE(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
TASK::TASK_SYNCHRONIZED_SCENE(iLocal_264, uLocal_250, "misssolomon_3", "_start_loop", 1000f, -8f, 68, 0, 1148846080, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_airworker"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_amb_clipboard_01"));
}}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_266[0])){
STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
if(STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))){
iLocal_266[0]=PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_266[0], joaat("weapon_pistol"), 1000, 1, 1);
PED::SET_PED_ACCURACY(iLocal_266[0], 20);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_266[0], 1, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_266[0], 1);
TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_266[0], PLAYER::PLAYER_PED_ID(), -1, 1);
func_134(iLocal_266[0], 0);
}}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_283)){
STREAMING::REQUEST_MODEL(joaat("shamal"));
if(STREAMING::HAS_MODEL_LOADED(joaat("shamal"))){
iLocal_283=VEHICLE::CREATE_VEHICLE(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, 1, 1, 0);
VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_283, 0, 0, 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_283, 1084227584);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("shamal"));
ENTITY::SET_ENTITY_HEALTH(iLocal_283, 2000, 0);
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_283)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_283, 0)){
if(func_16(PLAYER::PLAYER_PED_ID(), iLocal_283, 1) > 5f){
VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_283, 0, 0, 0);
}}}}
if(iLocal_221==0){
func_25(2, "STAGE_ON_FOOT_CHASE", 0, 0, 0, 1);
if(iLocal_341==1){
if(!CAM::IS_SCREEN_FADED_OUT()){
CAM::DO_SCREEN_FADE_OUT(0);
}
func_127();
func_17(&uLocal_488, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
iLocal_341=0;
}
iLocal_398=0;
iLocal_399=0;
iLocal_440=0;
fLocal_322=3f;
iLocal_225=0;
func_211(0, 1);
VEHICLE::REMOVE_VEHICLE_RECORDING(45, "BB_CHASE");
VEHICLE::REMOVE_VEHICLE_RECORDING(35, "BB_CHASE");
VEHICLE::REMOVE_VEHICLE_RECORDING(2, "BB_CHASE");
VEHICLE::REMOVE_VEHICLE_RECORDING(54, "BB_CHASE");
VEHICLE::REMOVE_VEHICLE_RECORDING(1, "BB_CHASE");
VEHICLE::REMOVE_VEHICLE_RECORDING(9, "BB_CHASE");
VEHICLE::REMOVE_VEHICLE_RECORDING(61, "BB_CHASE");
VEHICLE::REMOVE_VEHICLE_RECORDING(63, "BB_CHASE");
VEHICLE::REMOVE_VEHICLE_RECORDING(64, "BB_CHASE");
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_303);
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("digitalOverlay");
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_276, 0);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_276);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_285)){
VEHICLE::DELETE_VEHICLE(&iLocal_285);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_274[0])){
PED::DELETE_PED(&(iLocal_274[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_278[0])){
VEHICLE::DELETE_VEHICLE(&(iLocal_278[0]));
}
MISC::SET_FAKE_WANTED_LEVEL(0);
AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
if(!PED::IS_PED_INJURED(iLocal_262)){
if(!HUD::DOES_BLIP_EXIST(uLocal_295)){
uLocal_295=HUD::ADD_BLIP_FOR_ENTITY(iLocal_262);
HUD::SET_BLIP_AS_FRIENDLY(uLocal_295, 1);
}}
AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", 1);
if(iLocal_361[2]==1){
if(!AUDIO::HAS_SOUND_FINISHED(iLocal_259)){
AUDIO::STOP_SOUND(iLocal_259);
}
AUDIO::RELEASE_SOUND_ID(iLocal_259);
iLocal_388=0;
iLocal_361[2]=0;
}
PLAYER::SET_MAX_WANTED_LEVEL(5);
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
AUDIO::TRIGGER_MUSIC_EVENT("TRV4_RUN");
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_282)){
STREAMING::REQUEST_MODEL(joaat("jet"));
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_264)){
STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
}
STREAMING::REQUEST_MODEL(joaat("shamal"));
STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
STREAMING::REQUEST_MODEL(joaat("police3"));
STREAMING::REQUEST_MODEL(joaat("p_amb_clipboard_01"));
VEHICLE::REQUEST_VEHICLE_RECORDING(68, "BB_Chase");
VEHICLE::REQUEST_VEHICLE_RECORDING(69, "BB_Chase");
STREAMING::REQUEST_ANIM_DICT("misssolomon_3");
settimera(0);
if(TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5")){
TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Trev4_5", 1, 1f, 1f);
}
if(CAM::IS_SCREEN_FADED_OUT()){
if(!func_24()){
STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
}
func_21(0, -1, 1);
func_20("TRV4_CHASE1", 7500, 1);
}
if(!CAM::IS_SCREEN_FADED_IN()){
CAM::DO_SCREEN_FADE_IN(800);
}
iLocal_221=1;
}
if(iLocal_221==1){
iLocal_221=2;
}
if(iLocal_221==2){
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -880.365f, -2942.26f, 14f, 9.55f, 15.69f, 5f, 0, 1, 0)){
func_258("TRV4_FAIL1");
}
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -945.725f, -2893.15f, 14f, 4.5f, 9.56f, 5f, 0, 1, 0)){
func_258("TRV4_FAIL1");
}
if(timera() > 15000){
func_258("TRV4_FAIL1");
}
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -932.1196f, -2934.317f, 12.9448f, 2f, 2f, 2f, 0, 1, 0)){
if(!PED::IS_PED_INJURED(iLocal_262)){
if(!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_262)){
TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_262, "BB_MOLLY_2", 10, 4, -1);
TASK::TASK_PLAY_ANIM(iLocal_262, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
}}
settimera(0);
iLocal_221=3;
}}
if(iLocal_221==3){
if(!PED::IS_PED_INJURED(iLocal_262)){
if(TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_262)){
if(TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_262) > 18 && iLocal_403==0){
iLocal_348=0;
TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_262, 3f, 1);
iLocal_221=0;
iLocal_220=6;
}}}
if(timera() > 50000){
if(!PED::IS_PED_INJURED(iLocal_262)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_262);
ENTITY::SET_ENTITY_COORDS(iLocal_262, -932.5f, -2964.1f, 13.4f, 1, 0, 0, 1);
TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_262, "BB_MOLLY_2", 18, 4, -1);
TASK::TASK_PLAY_ANIM(iLocal_262, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
iLocal_348=0;
iLocal_221=0;
iLocal_220=6;
}}}}


void func_258(char* sParam0){
if(iLocal_403==0){
if(iLocal_332){
func_248(0, 1, 1, 0);
CAM::SET_CAM_ACTIVE(uLocal_299, 0);
CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
HUD::DISPLAY_RADAR(1);
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
}
AUDIO::STOP_SOUND(iLocal_259);
func_268();
AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
iLocal_361[2]=0;
iLocal_332=0;
}
AUDIO::TRIGGER_MUSIC_EVENT("TRV4_FAIL");
sLocal_487=sParam0;
HUD::CLEAR_PRINTS();
func_236();
func_234();
func_259(sLocal_487);
iLocal_403=1;
}}


void func_259(char* sParam0){
func_267(sParam0);
func_260(0);
}


void func_260(int iParam0){
int iVar0;
if(Global_113810.f_9088 || func_453(0)){
iVar0=func_8();
if(!func_261(iVar0)){
return;
}
MISC::SET_BIT(&(Global_91565[iVar0 /*5*/].f_1), 5);
Global_100869=iParam0;
}}

int func_261(int iParam0){
int iVar0;
int iVar1;
func_266();
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::START_FIRING_AMNESTY(5000);
}
iVar0=Global_91565[iParam0 /*5*/];
iVar1=Global_78960.f_109[iVar0 /*4*/];
func_265(iVar1, 1);
PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
func_262(&(Global_113810.f_2366.f_539), iVar1);
if(Global_94988==Global_100870){
Global_113810.f_9088.f_330[iVar1 /*6*/].f_1++;
}
if(!MISC::IS_BIT_SET(Global_91601[iVar1 /*34*/].f_15, 1)){
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
}}
Global_113810.f_9088.f_330[iVar1 /*6*/].f_2++;
Global_94988=Global_100870;
if(iParam0==-1){
if(Global_113810.f_9088){
}
return 0;
}
if(MISC::IS_BIT_SET(Global_91565[iParam0 /*5*/].f_1, 4)){
return 0;
}
if(MISC::IS_BIT_SET(Global_91565[iParam0 /*5*/].f_1, 5)){
return 0;
}
return 1;
}


void func_262(var uParam0, int iParam1){
int iVar0;
int iVar1;
struct<3> Var2;
float fVar3;
if(iParam1==94){
return;
}
iVar0=0;
while (iVar0 < 3){
iVar1=Global_113810.f_18536[iVar0];
if((((iVar1==8 || iVar1==9) || iVar1==10) || (((iVar1==11 || iVar1==34) || iVar1==72) || iVar1==73)) && !MISC::IS_BIT_SET(Global_113810.f_9088.f_99.f_219[0], 9)){
}else{
Var2={
0f, 0f, 0f 
};
fVar3=0f;
if(!func_264(Global_113810.f_18536[iVar0], &Var2, &fVar3)){
Global_113810.f_18536[iVar0]=318;
func_263(&(uParam0->f_2296[iVar0]));
uParam0->f_2300[iVar0 /*3*/]={
0f, 0f, 0f 
};
uParam0->f_2310[iVar0]=0f;
uParam0->f_2314[iVar0]=0;
uParam0->f_2318[iVar0 /*3*/]={
0f, 0f, 0f 
};
uParam0->f_2328[iVar0]=0;
Global_98203[iVar0 /*29*/]={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_9=0f;
Global_98203[iVar0 /*29*/].f_12=0f;
Global_98203[iVar0 /*29*/].f_3={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_10=0f;
Global_98203[iVar0 /*29*/].f_13=0f;
Global_98203[iVar0 /*29*/].f_6={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_11=0f;
Global_98203[iVar0 /*29*/].f_14=0f;
Global_98203[iVar0 /*29*/].f_17={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_26=0f;
Global_98203[iVar0 /*29*/].f_20={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_27=0f;
Global_98203[iVar0 /*29*/].f_23={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_28=0f;
}}
iVar0++;
}}


void func_263(var uParam0){
*uParam0=-15;
}

int func_264(int iParam0, var uParam1, float fParam2){
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
return func_264(8, uParam1, fParam2);
break;
case 10:
return func_264(8, uParam1, fParam2);
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


void func_265(int iParam0, bool bParam1){
if(bParam1){
if((iParam0 !=88 && iParam0 !=89) && iParam0 !=92){
Global_94798[iParam0 /*2*/]=1;
}}else{
Global_94798[iParam0 /*2*/]=0;
}}


void func_266(){
Global_100868=1;
if(PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_78922)){
switch (func_114()){
case 0:
StringCopy(&Global_78922, "CMN_MARRE", 16);
break;
case 1:
StringCopy(&Global_78922, "CMN_FARRE", 16);
break;
case 2:
StringCopy(&Global_78922, "CMN_TARRE", 16);
break;
}
StringCopy(&Global_78926, "", 16);
}
Global_100868=0;
}elseif(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_78922)){
switch (func_114()){
case 0:
StringCopy(&Global_78922, "CMN_MDIED", 16);
break;
case 1:
StringCopy(&Global_78922, "CMN_FDIED", 16);
break;
case 2:
StringCopy(&Global_78922, "CMN_TDIED", 16);
break;
}
StringCopy(&Global_78926, "", 16);
}
Global_100868=0;
MISC::SET_BIT(&(Global_100833.f_20), 25);
}}


void func_267(char* sParam0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
if(HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <=16){
StringCopy(&Global_78922, sParam0, 16);
StringCopy(&Global_78926, "", 16);
if(RECORDING::IS_REPLAY_RECORDING()){
RECORDING::STOP_REPLAY_RECORDING();
}}}}


void func_268(){
Global_63492=0;
}


void func_269(){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_282)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 30000f){
STREAMING::REQUEST_MODEL(joaat("jet"));
if(STREAMING::HAS_MODEL_LOADED(joaat("jet"))){
iLocal_282=VEHICLE::CREATE_VEHICLE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1, 0);
VEHICLE::SET_VEHICLE_LIVERY(iLocal_282, 2);
VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_282, 0);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_282, 1);
ENTITY::SET_ENTITY_PROOFS(iLocal_282, 1, 1, 1, 1, 1, 0, 0, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
ENTITY::SET_ENTITY_LOD_DIST(iLocal_282, 500);
}}}}}}
func_368();
if(HUD::DOES_BLIP_EXIST(uLocal_295)){
func_367(uLocal_295, iLocal_262, 300f, 0.9f, 0);
}
if(iLocal_221==0){
if(iLocal_222 < 2){
PED::SET_PED_CAN_HEAD_IK(PLAYER::PLAYER_PED_ID(), 0);
}
func_366();
func_334();
if(iLocal_393==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[20])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[20], 0)){
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_202[20], 1, 1, 0);
VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_202[20]);
iLocal_393=1;
}}}
func_333();
func_332();
if(iLocal_345==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
func_331(uLocal_299, iLocal_285, "BB_Chase", 1);
iLocal_345=1;
}}}}elseif(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
func_330(uLocal_299, iLocal_285, fLocal_319);
CAM::SET_CAM_FOV(uLocal_299, 45f);
}}
if(iLocal_333==0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 15000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 125464f) && func_322(1, 0, 0)){
iLocal_348=1;
if(iLocal_403==0){
HUD::CLEAR_HELP(1);
func_321("TRV4_HELP1", -1);
func_314(1);
func_232(&uLocal_26, 0, 0);
CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
iLocal_333=1;
}}}}}elseif(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_303) && func_208(1, "BB_Chase")){
if(((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 15000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 125464f) && iLocal_403==0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
func_292();
}
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 125464f || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(iLocal_332){
HUD::CLEAR_HELP(1);
func_248(0, 1, 1, 0);
CAM::SET_CAM_ACTIVE(uLocal_299, 0);
CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
HUD::DISPLAY_RADAR(1);
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
}
AUDIO::STOP_SOUND(iLocal_259);
func_268();
AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
iLocal_361[2]=0;
iLocal_332=0;
}}}}}
switch (iLocal_222){
case 0:
if(iLocal_485[0]==0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 44255f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1187.3f, -2847.8f, 13.6f, 1) < 100f){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 2f, 3);
iLocal_485[0]=1;
}
}}}
if(iLocal_485[1]==0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 52875f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1349f, -2720f, 14f, 1) < 50f){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 2f, 3);
iLocal_485[1]=1;
}
}}}
if(iLocal_485[2]==0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 87085f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1507f, -2520f, 14f, 1) < 70f){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 2f, 3);
iLocal_485[2]=1;
}
}}}
func_291();
func_290();
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_PLANE_ON_FIRE")){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 64280f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 72000f){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(-1149.6f, -2323.7f, 22.5f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 130f){
AUDIO::START_AUDIO_SCENE("SOL_3_PLANE_ON_FIRE");
}}}
}}}elseif(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 72500f){
AUDIO::STOP_AUDIO_SCENE("SOL_3_PLANE_ON_FIRE");
}
}}}
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_JET_LANDING")){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 78000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 85000f){
AUDIO::START_AUDIO_SCENE("SOL_3_EVENT_JET_LANDING");
}}
}}}elseif(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 85500f){
AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_JET_LANDING");
}
}}}
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION")){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 100000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 107000f){
AUDIO::START_AUDIO_SCENE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
}}
}}}elseif(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 107500f){
AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
}
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 10000f){
func_289();
}
}}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 30000f){
func_288(iLocal_276, VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276));
}}}
if(iLocal_406==0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 22000f){
AUDIO::PREPARE_MUSIC_EVENT("TRV4_AIRPORT_ENTERED");
iLocal_406=1;
}
}}}elseif(iLocal_407==0){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -940.8253f, -2858.602f, 11.94482f, -1001.272f, -2823.764f, 21.00674f, 5.75f, 0, 1, 0)){
AUDIO::TRIGGER_MUSIC_EVENT("TRV4_AIRPORT_ENTERED");
iLocal_407=1;
}}
if(iLocal_339==0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(func_16(iLocal_276, PLAYER::PLAYER_PED_ID(), 1) < 170f && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_276)){
if(HUD::DOES_BLIP_EXIST(uLocal_297)){
HUD::REMOVE_BLIP(&uLocal_297);
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_DRIVE_TO_AIRPORT")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_DRIVE_TO_AIRPORT");
}
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_MAIN_CHASE")){
AUDIO::START_AUDIO_SCENE("SOL_3_MAIN_CHASE");
}
if(!HUD::DOES_BLIP_EXIST(uLocal_295)){
if(!PED::IS_PED_INJURED(iLocal_262)){
uLocal_295=HUD::ADD_BLIP_FOR_ENTITY(iLocal_262);
HUD::SET_BLIP_AS_FRIENDLY(uLocal_295, 1);
}}
HUD::CLEAR_GPS_MULTI_ROUTE();
if(!HUD::IS_MESSAGE_BEING_DISPLAYED()){
func_20("TRV4_CHASE2", 7500, 1);
func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
AUDIO::TRIGGER_MUSIC_EVENT("TRV4_CHASE");
iLocal_339=1;
}
}}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -536.0366f, -2102.793f, 5.672412f, -464.5755f, -2165.133f, 14.75182f, 65.25f, 0, 1, 0)){
if(HUD::DOES_BLIP_EXIST(uLocal_297)){
HUD::REMOVE_BLIP(&uLocal_297);
}
if(!HUD::DOES_BLIP_EXIST(uLocal_295)){
if(!PED::IS_PED_INJURED(iLocal_262)){
uLocal_295=HUD::ADD_BLIP_FOR_ENTITY(iLocal_262);
HUD::SET_BLIP_AS_FRIENDLY(uLocal_295, 1);
}
}
HUD::CLEAR_GPS_MULTI_ROUTE();
if(!HUD::IS_MESSAGE_BEING_DISPLAYED()){
func_20("TRV4_CHASE2", 7500, 1);
func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
AUDIO::TRIGGER_MUSIC_EVENT("TRV4_CHASE");
iLocal_339=1;
}}}elseif(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 15000f){
}}}
if(iLocal_324==0){
STREAMING::REQUEST_MODEL(joaat("jet"));
if(STREAMING::HAS_MODEL_LOADED(joaat("jet"))){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 18490f){
iLocal_278[1]=VEHICLE::CREATE_VEHICLE(joaat("jet"), -441.3117f, -3435.736f, 409.9454f, 148.3975f, 1, 1, 0);
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_278[1], 2, "BB_Chase", 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
iLocal_324=1;
}}
}}}elseif(ENTITY::DOES_ENTITY_EXIST(iLocal_278[1])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278[1], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278[1])){
VEHICLE::SET_PLAYBACK_SPEED(iLocal_278[1], fLocal_319);
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278[1]) > 20000f){
if(func_16(PLAYER::PLAYER_PED_ID(), iLocal_278[1], 1) > 200f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_278[1])){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_278[1]);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_274[1])){
PED::DELETE_PED(&(iLocal_274[1]));
}
VEHICLE::DELETE_VEHICLE(&(iLocal_278[1]));
iLocal_247=MISC::GET_GAME_TIMER() + 1000;
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_278[1])){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278[1]) > 31543f){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_278[1]);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_278[1], 1);
}}
}
elseif(func_16(PLAYER::PLAYER_PED_ID(), iLocal_278[1], 1) > 200f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_278[1])){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_274[1])){
PED::DELETE_PED(&(iLocal_274[1]));
}
VEHICLE::DELETE_VEHICLE(&(iLocal_278[1]));
iLocal_247=MISC::GET_GAME_TIMER() + 1000;
}}}
if(iLocal_430==0){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_281)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 23000f){
STREAMING::REQUEST_MODEL(joaat("tanker"));
if(STREAMING::HAS_MODEL_LOADED(joaat("tanker"))){
iLocal_281=VEHICLE::CREATE_VEHICLE(joaat("tanker"), -1325f, -2779f, 14f, 233.9563f, 1, 1, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tanker"));
VEHICLE::SET_VEHICLE_COLOURS(iLocal_281, 57, 57);
iLocal_430=1;
}}}
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[1])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[1], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_202[1])){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_202[1]) > 13000f){
if(iLocal_368==0){
fLocal_121[1]=0.5f;
iLocal_267=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_202[1], -1, 0);
iLocal_368=1;
}}
}}}
if(iLocal_330==0){
STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(-1325f, -2779f, 14f);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[1])){
if(iLocal_359==0){
VEHICLE::SET_VEHICLE_COLOURS(iLocal_202[1], 57, 57);
iLocal_359=1;
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_281)){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_202[1], 0)){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_281, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_202[1])){
VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_202[1], iLocal_281, 1065353216);
}}}
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_281)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 41430f){
ENTITY::DETACH_ENTITY(iLocal_281, 1, 1);
iLocal_330=1;
}}}
}}}elseif(iLocal_371==0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[1], 0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 42700f){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_267)){
if(!PED::IS_PED_INJURED(iLocal_267)){
ENTITY::SET_ENTITY_HEALTH(iLocal_267, 0, 0);
}
}
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_202[1])){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_202[1]);
iLocal_371=1;
}}}
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(iLocal_465==0){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 38000f){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[1], 0)){
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Trevor_4_747_Tanker_Horn", iLocal_202[1], 0, 0, 0);
iLocal_465=1;
}}}
if(iLocal_361[1]==0){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 39000f){
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_TANKER_CRASH")){
AUDIO::START_AUDIO_SCENE("SOL_3_EVENT_TANKER_CRASH");
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
ENTITY::SET_ENTITY_PROOFS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0, 1, 1, 0, 0, 0, 0, 0);
}
iLocal_361[1]=1;
}}
if(iLocal_401==0){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 41611f){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_281)){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_281, 0)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[7])){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_202[7], 0)){
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Trevor_4_747_Tanker_Explosion", iLocal_281, 0, 0, 0);
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_202[7]);
VEHICLE::EXPLODE_VEHICLE(iLocal_202[7], 1, 0);
VEHICLE::EXPLODE_VEHICLE(iLocal_281, 1, 0);
FIRE::ADD_EXPLOSION(-1221f, -2852f, 17f, 14, 1f, 1, 0, 1065353216, 0);
FIRE::ADD_EXPLOSION(-1212f, -2855f, 14.34f, 14, 1f, 1, 0, 1065353216, 0);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_281);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_202[1]));
iLocal_401=1;
}}
}
}}}
if(iLocal_362[1]==0){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 43204f){
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_TANKER_CRASH")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_TANKER_CRASH");
}
AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Tanker_Explosion");
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
ENTITY::SET_ENTITY_PROOFS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0, 0, 0, 0, 0, 0, 0, 0);
}
iLocal_362[1]=1;
}}
}}}
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_HELI_TAKEOFF")){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[0])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[0], 0)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 36000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 40000f){
AUDIO::START_AUDIO_SCENE("SOL_3_HELI_TAKEOFF");
}
}}}
}}}elseif(ENTITY::DOES_ENTITY_EXIST(iLocal_202[0])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[0], 0)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 43204f){
AUDIO::STOP_AUDIO_SCENE("SOL_3_HELI_TAKEOFF");
}}}
}}}
if(iLocal_323==0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 60500f){
STREAMING::REQUEST_MODEL(joaat("jet"));
}
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 66500f){
if(STREAMING::HAS_MODEL_LOADED(joaat("jet"))){
iLocal_278[0]=VEHICLE::CREATE_VEHICLE(joaat("jet"), -1119.072f, -1864.548f, -8.2205f, 148.3975f, 1, 1, 0);
ENTITY::SET_ENTITY_INVINCIBLE(iLocal_278[0], 1);
VEHICLE::SET_VEHICLE_LIVERY(iLocal_278[0], 2);
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_278[0], 35, "BB_Chase", 1);
VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_278[0], 3491f);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
iLocal_323=1;
}}
}}}elseif(ENTITY::DOES_ENTITY_EXIST(iLocal_278[0])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278[0], 0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278[0])){
VEHICLE::SET_PLAYBACK_SPEED(iLocal_278[0], fLocal_319);
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 80000f){
if(func_16(iLocal_278[0], PLAYER::PLAYER_PED_ID(), 1) > 200f){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_278[0]);
}
}}elseif(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 80000f){
if(func_16(iLocal_278[0], PLAYER::PLAYER_PED_ID(), 1) > 200f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_278[0])){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_274[0])){
PED::DELETE_PED(&(iLocal_274[0]));
}
VEHICLE::DELETE_VEHICLE(&(iLocal_278[0]));
iLocal_247=MISC::GET_GAME_TIMER() + 1000;
}}}
}}}
if(iLocal_390==0){
if(iLocal_389==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 50000f){
STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
STREAMING::REQUEST_ANIM_DICT("misstrevor4");
if(STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_airworker"))){
iLocal_268=PED::CREATE_PED(26, joaat("s_m_y_airworker"), -1170.541f, -2507.111f, 12.9455f, 218.3035f, 1, 1);
iLocal_269=PED::CREATE_PED(26, joaat("s_m_y_airworker"), -1168.264f, -2508.715f, 12.9455f, 70.7735f, 1, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_268, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_269, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_airworker"));
iLocal_389=1;
}
}}}
}}elseif(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 58000f){
if(!PED::IS_PED_INJURED(iLocal_268)){
if(STREAMING::HAS_ANIM_DICT_LOADED("misstrevor4")){
if(!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_268, "misstrevor4", "dive_clear_goon1", 3)){
TASK::TASK_PLAY_ANIM(iLocal_268, "misstrevor4", "dive_clear_goon1", 8f, -8f, -1, 0, 0, 0, 0, 0);
}
}
}
if(!PED::IS_PED_INJURED(iLocal_269)){
if(STREAMING::HAS_ANIM_DICT_LOADED("misstrevor4")){
if(!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_269, "misstrevor4", "dive_clear_goon2", 3)){
TASK::TASK_PLAY_ANIM(iLocal_269, "misstrevor4", "dive_clear_goon2", 8f, -8f, -1, 0, 0, 0, 0, 0);
}
}
}
iLocal_390=1;
}}
}}}elseif(ENTITY::DOES_ENTITY_EXIST(iLocal_268)){
if(!PED::IS_PED_INJURED(iLocal_268)){
if(!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_268, "misstrevor4", "dive_clear_goon1", 3)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_269)){
if(!PED::IS_PED_INJURED(iLocal_269)){
if(!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_269, "misstrevor4", "dive_clear_goon2", 3)){
STREAMING::REMOVE_ANIM_DICT("misstrevor4");
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_268);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_269);
}}}
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[8])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[8], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_202[8])){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 50200f){
if(iLocal_326==0){
VEHICLE::SET_PLAYBACK_SPEED(iLocal_202[8], 1f);
if(func_16(PLAYER::PLAYER_PED_ID(), iLocal_202[8], 1) < 100f){
MISC::SET_TIME_SCALE(0.3f);
iLocal_364=0;
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE")){
AUDIO::START_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
}
CAM::SET_GAMEPLAY_VEHICLE_HINT(iLocal_202[8], 0f, 0f, 0f, 1, 1500, 500, 100);
}
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_202[8], 1, 1);
VEHICLE::SET_VEHICLE_DOOR_BROKEN(iLocal_202[8], 1, 0);
AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_253, "Trevor_4_747_Flying_Car", iLocal_202[8], 0, 0, 0);
settimerb(0);
iLocal_326=1;
}
}
if(iLocal_326==1){
if(timerb() > 662){
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
}
MISC::SET_TIME_SCALE(1f);
iLocal_364=1;
}
if(timerb() > 1872){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_202[8]);
}
}
}}}
}
elseif(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 50200f){
if(!ENTITY::IS_ENTITY_IN_AIR(iLocal_202[8])){
if(iLocal_376==0){
AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_253, "Trevor_4_747_Carsplosion", iLocal_202[8], 0, 0, 0);
VEHICLE::EXPLODE_VEHICLE(iLocal_202[8], 1, 0);
iLocal_376=1;
}
}
}}}
}}elseif(iLocal_364==0){
if(iLocal_326==1){
if(timerb() > 662){
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
}
MISC::SET_TIME_SCALE(1f);
iLocal_364=1;
}
}}}elseif(iLocal_364==0){
if(iLocal_326==1){
if(timerb() > 662){
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
}
MISC::SET_TIME_SCALE(1f);
iLocal_364=1;
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[11])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[11], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_202[11])){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 82683f){
if(iLocal_327==0){
AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_255, "Trevor_4_747_Flying_Car", iLocal_202[11], 0, 0, 0);
iLocal_327=1;
settimerb(0);
}
if(iLocal_327==1){
if(timerb() > 1872){
if(!ENTITY::IS_ENTITY_IN_AIR(iLocal_202[11])){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_202[11]);
}}}
}
}}}
}
elseif(iLocal_327==1){
if(iLocal_377==0){
if(!ENTITY::IS_ENTITY_IN_AIR(iLocal_202[11])){
AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_255, "Trevor_4_747_Carsplosion", iLocal_202[11], 0, 0, 0);
VEHICLE::EXPLODE_VEHICLE(iLocal_202[11], 1, 0);
iLocal_377=1;
}}
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[12])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[12], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_202[12])){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 82463f){
if(iLocal_328==0){
AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_256, "Trevor_4_747_Flying_Car", iLocal_202[12], 0, 0, 0);
iLocal_328=1;
settimerb(0);
}
if(iLocal_328==1){
if(timerb() > 1000){
if(!ENTITY::IS_ENTITY_IN_AIR(iLocal_202[12])){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_202[12]);
}}}
}
}}}
if(iLocal_461==0){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_202[12])){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_202[12]) > 22216f && func_16(iLocal_277, iLocal_202[12], 1) < 90f){
MISC::SET_TIME_SCALE(0.3f);
CAM::SET_GAMEPLAY_VEHICLE_HINT(iLocal_202[12], 0f, 0f, 0f, 1, 2000, 1000, 500);
iLocal_243=MISC::GET_GAME_TIMER();
iLocal_461=1;
}}}
}
elseif(iLocal_328==1){
if(iLocal_378==0){
if(!ENTITY::IS_ENTITY_IN_AIR(iLocal_202[12])){
AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_256, "Trevor_4_747_Carsplosion", iLocal_202[12], 0, 0, 0);
VEHICLE::EXPLODE_VEHICLE(iLocal_202[12], 1, 0);
iLocal_378=1;
}}
}}}
if(iLocal_461==1){
}
if(iLocal_460==0 && iLocal_461==1){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[12])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[12], 0)){
Local_315={
ENTITY::GET_ENTITY_COORDS(iLocal_202[12], 1) 
};
}}
Local_316={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
if(MISC::GET_GAME_TIMER() > iLocal_243 + 1579 || Local_316.f_1 < Local_315.f_1){
MISC::SET_TIME_SCALE(1f);
CAM::STOP_GAMEPLAY_HINT(0);
iLocal_460=1;
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 105000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 113000f){
STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(-1172.3f, -3027.5f, 13.3f);
}
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[13])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[13], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_202[13])){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 108830f){
VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_202[13], 0);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_202[13], 1, 1);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_202[13], 0);
settimera(0);
iLocal_429=1;
}
}}}
}
elseif(iLocal_429==1){
ENTITY::SET_ENTITY_HEALTH(iLocal_202[13], 0, 0);
VEHICLE::SET_VEHICLE_UNDRIVEABLE(iLocal_202[13], 1);
ENTITY::SET_ENTITY_HEALTH(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_202[13], -1, 0), 0, 0);
}}}
if(iLocal_425==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[5])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[5], 0)){
VEHICLE::SET_VEHICLE_LIVERY(iLocal_202[5], 0);
ENTITY::SET_ENTITY_INVINCIBLE(iLocal_202[5], 1);
iLocal_425=1;
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[15])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[15], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_202[15])){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 104989f){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_202[15]);
func_286(iLocal_202[15], -0.04f, -2.21f, 0.887f, 0f, -1f, 0f, 5f, 1);
func_286(iLocal_202[15], 0.44f, -0.802f, 15.303f, 0f, 0f, 0f, 12f, 1);
VEHICLE::EXPLODE_VEHICLE(iLocal_202[15], 1, 0);
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Trevor_4_747_Carsplosion", iLocal_202[15], 0, 0, 0);
AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Cop_Cars");
}
}}}
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 112000f){
TASK::REQUEST_WAYPOINT_RECORDING("BB_MOLLY_2");
STREAMING::REQUEST_ANIM_DICT("misssolomon_3");
STREAMING::REQUEST_ANIM_DICT("move_f@film_reel_arms");
iLocal_222=1;
}
}}}
break;
case 1:
if(iLocal_437==0){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0, 1, 0)){
iLocal_437=1;
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_286[0])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_286[0], 0)){
AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_286[0], 0);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_286[0]));
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_273[0])){
if(!PED::IS_PED_INJURED(iLocal_273[0])){
TASK::CLEAR_PED_TASKS(iLocal_273[0]);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_273[0]));
}}
if(iLocal_392==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 115000f){
TASK::REQUEST_WAYPOINT_RECORDING("Trev4_5");
STREAMING::REQUEST_MODEL(joaat("prop_cs_film_reel_01"));
if(!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
STREAMING::NEW_LOAD_SCENE_START_SPHERE(-930.7f, -2916.9f, 13.4f, 10f, 0);
}
iLocal_392=1;
}}
}}}
if(iLocal_403==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 120000f){
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ARRIVE_AT_HANGAR")){
AUDIO::START_AUDIO_SCENE("SOL_3_ARRIVE_AT_HANGAR");
}
VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_276);
}
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 125513f){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_276);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_276, 1);
func_285();
PED::CLEAR_PED_NON_CREATION_AREA();
PATHFIND::SET_PED_PATHS_IN_AREA(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, 1, 0);
AUDIO::STOP_AUDIO_SCENE("TREVOR_4_MAIN_CHASE");
if(!CAM::DOES_CAM_EXIST(uLocal_301)){
uLocal_301=CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
}
if(!CAM::DOES_CAM_EXIST(uLocal_300)){
uLocal_300=CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
}
iLocal_234=MISC::GET_GAME_TIMER();
CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
MISC::SET_INSTANCE_PRIORITY_HINT(0);
iLocal_222=2;
}}
}}}
break;
case 2:
Local_316={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_276);
if(iLocal_437==0){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0, 1, 0)){
iLocal_437=1;
}}
if(iLocal_403==0){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_316, -930.7f, -2916.9f, 13.4f, 1) < 45f){
iLocal_222=3;
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(ENTITY::IS_ENTITY_ON_SCREEN(iLocal_276)){
if(iLocal_437==1){
iLocal_222=3;
}
}}
if(MISC::GET_GAME_TIMER() > iLocal_234 + 5000 && iLocal_437==1){
iLocal_222=3;
}}
break;
case 3:
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
STREAMING::NEW_LOAD_SCENE_STOP();
}
VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_276);
if(!PED::IS_PED_INJURED(iLocal_262)){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_262, "misssolomon_3", "molly_escapes_car_mol", 3)){
}}
if(iLocal_413==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_3")){
if(!PED::IS_PED_INJURED(iLocal_262)){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_293)){
if(STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_film_reel_01"))){
iLocal_293=OBJECT::CREATE_OBJECT(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, 1, 1, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_293, iLocal_262, PED::GET_PED_BONE_INDEX(iLocal_262, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
}
}
if(!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_262, "misssolomon_3", "molly_escapes_car_mol", 3)){
ENTITY::FREEZE_ENTITY_POSITION(iLocal_276, 0);
uLocal_248=PED::CREATE_SYNCHRONIZED_SCENE(-929.492f, -2913.472f, 14.16f, 0f, 0f, -28.96f, 2);
ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_276, uLocal_248, "molly_escapes_car_car", "misssolomon_3", 8f, -8f, 0, 1000f);
TASK::TASK_SYNCHRONIZED_SCENE(iLocal_262, uLocal_248, "misssolomon_3", "molly_escapes_car_mol", 1000f, -1000f, 5, 0, 1148846080, 0);
PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_248, 0);
AUDIO::TRIGGER_MUSIC_EVENT("TRV4_EXIT_CARS");
}
else{
iLocal_413=1;
}
}}}
}}}
if(iLocal_415==0){
if(iLocal_413==1){
if(!PED::IS_PED_INJURED(iLocal_262)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_262, -937.6656f, -2927.864f, 12.77007f, -934.8479f, -2929.484f, 14.46523f, 1.5f, 0, 1, 0)){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_262, "misssolomon_3", "molly_escapes_car_mol", 3)){
ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_262, -1000f, 1);
}
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_262);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_262, 1);
ENTITY::SET_ENTITY_COORDS(iLocal_262, -934.8388f, -2932.831f, 12.9649f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iLocal_262, 236.5739f);
TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_262, "BB_MOLLY_2", 1, 4, -1);
if(STREAMING::HAS_ANIM_DICT_LOADED("move_f@film_reel_arms")){
TASK::TASK_PLAY_ANIM(iLocal_262, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
}
iLocal_415=1;
}
}}}
if(iLocal_403==0){
if(iLocal_423==0){
if(iLocal_422==0){
if(!PED::IS_PED_INJURED(iLocal_262)){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_262, "misssolomon_3", "molly_escapes_car_mol", 3)){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_248) > 0.18f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -930.7f, -2916.9f, 13.4f, 1) < 10f){
iLocal_223=0;
iLocal_422=1;
}}}
}
while (iLocal_422==1){
RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_LegalTrouble", 0);
switch (iLocal_223){
case 0:
CAM::SET_CAM_PARAMS(uLocal_301, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294743f, 28.05799f, 34.66404f, 0, 1, 1, 2);
CAM::SET_CAM_PARAMS(uLocal_300, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294742f, 32.59915f, 34.66404f, 0, 1, 1, 2);
CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_300, uLocal_301, 4000, 1, 1);
HUD::DISPLAY_RADAR(0);
HUD::DISPLAY_HUD(0);
CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_285)){
VEHICLE::DELETE_VEHICLE(&iLocal_285);
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
ENTITY::SET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -918.6157f, -2926.646f, 12.9667f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 47.9465f);
}
else{
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -918.6157f, -2926.646f, 12.9667f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 47.9465f);
}
if(!PED::IS_PED_INJURED(iLocal_262)){
func_17(&uLocal_488, 2, iLocal_262, "MOLLY", 0, 1);
PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_262, 1);
}
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 0f, 3);
RECORDING::REPLAY_START_EVENT(4);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
iLocal_449=0;
iLocal_223++;
break;
case 1:
if(!PED::IS_PED_INJURED(iLocal_262)){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_262, "misssolomon_3", "molly_escapes_car_mol", 3)){
if(iLocal_449==0){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_248) > 0.3f){
if(func_284(&uLocal_488, "T1M4AUD", "SOL3_GETOUT", 7, 0, 0, 0)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 7f, 4);
iLocal_449=1;
}}}
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_248) > 0.5f){
CAM::SET_CAM_PARAMS(uLocal_301, -926.0932f, -2916.891f, 14.47074f, -3.471637f, 1.294743f, 125.8315f, 34.66404f, 0, 1, 1, 2);
CAM::SET_CAM_PARAMS(uLocal_300, -926.0932f, -2916.891f, 14.47074f, -3.471636f, 1.294743f, 135.4584f, 34.66404f, 0, 1, 1, 2);
CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_300, uLocal_301, 4000, 1, 1);
iLocal_246=MISC::GET_GAME_TIMER();
iLocal_223++;
}
}
}
break;
case 2:
if(!PED::IS_PED_INJURED(iLocal_262)){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_262, "misssolomon_3", "molly_escapes_car_mol", 3)){
if((iLocal_246 !=-1 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0)==4) && (MISC::GET_GAME_TIMER() - iLocal_246) >=2230){
GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
iLocal_246=-1;
}
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_248) > 0.85f){
HUD::DISPLAY_HUD(1);
HUD::DISPLAY_RADAR(1);
CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
iLocal_260=346732587;
OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_260, joaat("v_ilev_ss_door5_r"), -935.641f, -2927.185f, 14.0945f, 1, 1, 0);
OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_260, 1f, 0, 1);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) !=4 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0)==4){
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
}}
PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_262, 0);
RECORDING::REPLAY_STOP_EVENT();
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 4f, 3);
iLocal_235=MISC::GET_GAME_TIMER();
iLocal_422=0;
iLocal_423=1;
iLocal_223++;
}
}
}
break;
}
wait(0);
}}}
if(iLocal_423==1){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_260, 5, 0, 1);
if(iLocal_466==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_262)){
if(!PED::IS_PED_INJURED(iLocal_262)){
if(ENTITY::IS_ENTITY_AT_COORD(iLocal_262, -935.3f, -2927.3f, 13f, 1.5f, 1.5f, 2f, 0, 1, 0)){
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Trevor_4_747_Molly_Open_Doors", -935.1f, -2927.6f, 13.2f, 0, 0, 0, 0);
iLocal_466=1;
}}
}}}
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_MAIN_CHASE")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_MAIN_CHASE");
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ARRIVE_AT_HANGAR")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_ARRIVE_AT_HANGAR");
}
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ON_FOOT_CHASE")){
AUDIO::START_AUDIO_SCENE("SOL_3_ON_FOOT_CHASE");
}}
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
func_270();
}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -929.7908f, -2928.213f, 12.19499f, -935.7283f, -2924.685f, 15.44832f, 4.75f, 0, 1, 1)){
if(iLocal_415==0){
if(!PED::IS_PED_INJURED(iLocal_262)){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_262, "misssolomon_3", "molly_escapes_car_mol", 3)){
ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_262, -1000f, 1);
}
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_262);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_262, 1);
ENTITY::SET_ENTITY_COORDS(iLocal_262, -934.8388f, -2932.831f, 12.9649f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iLocal_262, 236.5739f);
TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_262, "BB_MOLLY_2", 1, 4, -1);
if(STREAMING::HAS_ANIM_DICT_LOADED("move_f@film_reel_arms")){
TASK::TASK_PLAY_ANIM(iLocal_262, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
}
iLocal_415=1;
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_282)){
VEHICLE::DELETE_VEHICLE(&iLocal_282);
}
iLocal_221=0;
iLocal_223=0;
iLocal_220=5;
}
break;
}}}


void func_270(){
if(iLocal_399==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[14])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[14], 0)){
iLocal_270=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_202[14], -1, 0);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_270, joaat("weapon_pistol"), 1000, 1, 1);
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_270, 1, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_270, 1);
PED::SET_PED_ACCURACY(iLocal_270, 5);
ENTITY::SET_ENTITY_HEALTH(iLocal_270, 150, 0);
func_17(&uLocal_488, 3, iLocal_270, "TREV4POLICE3", 0, 1);
}}
iLocal_399=1;
}elseif(iLocal_398==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_270)){
if(!PED::IS_PED_INJURED(iLocal_270)){
TASK::CLEAR_PED_TASKS(iLocal_270);
PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_270, ENTITY::GET_ENTITY_COORDS(iLocal_270, 1), 5f, 0, 0);
TASK::OPEN_SEQUENCE_TASK(&uLocal_302);
TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), 5000, 1);
TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
TASK::CLOSE_SEQUENCE_TASK(uLocal_302);
TASK::TASK_PERFORM_SEQUENCE(iLocal_270, uLocal_302);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_302);
iLocal_398=1;
}}}elseif(iLocal_432==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_270)){
if(!PED::IS_PED_INJURED(iLocal_270)){
if(!PED::IS_PED_IN_ANY_VEHICLE(iLocal_270, 0) && func_13(PLAYER::PLAYER_PED_ID(), iLocal_270) < 20f){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
func_17(&uLocal_488, 4, iLocal_270, "SOL3COP", 0, 1);
if(func_271(&uLocal_488, "T1M4AUD", "SOL3_MOLPOL", "SOL3_MOLPOL_2", 7, 0, 0)){
iLocal_432=1;
}
}}}}}}}


bool func_271(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6){
func_282(uParam0, 145, sParam1, iParam5, iParam6, 0);
if(iParam4 > 7){
if(iParam4 < 12){
iParam4=7;
}}
Global_21852=0;
Global_21859=0;
Global_21854=0;
Global_22836=1;
Global_22838=0;
Global_22842=0;
StringCopy(&Global_22849, sParam3, 24);
Global_2883585=0;
return func_272(sParam2, iParam4, 0);
}

int func_272(char* sParam0, int iParam1, bool bParam2){
Global_21846=0;
if(Global_21845==0 || Global_21847==2){
if(Global_21845 !=0){
if(iParam1 > Global_21847){
if(Global_21852==0){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_20500.f_1=3;
Global_21845=0;
Global_21846=1;
Global_21898=0;
Global_21841=0;
Global_21842=0;
Global_21856=0;
Global_21855=0;
Global_20499=0;
}else{
func_237();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_281(8, -1)){
return 0;
}
Global_21921={
Global_21915 
};
func_280();
Global_21134={
Global_21299 
};
Global_21851=Global_21852;
Global_21858=Global_21859;
Global_2883586=Global_2883585;
Global_21860={
Global_21876 
};
Global_21853=Global_21854;
Global_22835=Global_22836;
Global_22843={
Global_22849 
};
Global_22837=Global_22838;
Global_22839=Global_22840;
Global_22841=Global_22842;
Global_21464.f_370=Global_22834;
Global_21464.f_368=Global_22832;
Global_21464.f_369=Global_22833;
Global_21841=Global_21842;
if(Global_21851){
MISC::CLEAR_BIT(&Global_8370, 20);
MISC::CLEAR_BIT(&Global_8371, 17);
MISC::CLEAR_BIT(&Global_8372, false);
if(bParam2){
func_279();
if(Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259==2){
if(iParam1==13){
}else{
return 0;
}}
if(Global_20500.f_1 > 3){
return 0;
}}
if(Global_20466==1){
return 0;
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(func_278()){
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
if(!Global_78689){
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
if(func_249()){
return 0;
}else{
switch (Global_20500.f_1){
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
if(MISC::IS_BIT_SET(Global_8370, 9)){
return 0;
}}
func_277();
Global_21855=bParam2;
}
Global_21847=iParam1;
StringCopy(&Global_21464, sParam0, 24);
Global_20711=0;
func_276();
func_273();
return 1;
}
if(Global_21845==5){
return 0;
}
if(iParam1 < Global_21847 || iParam1==Global_21847){
return 0;
}
if(iParam1==2){}else{
func_237();
}
return 0;
}


void func_273(){
if(!func_274()){
return;
}
if(Global_21851){
MemCopy(&(Global_1978312.f_1),{
Global_21464
}
, 4);
Global_1978312=Global_7685;
Global_1978312.f_6=Global_21855;
}}

int func_274(){
if(!Global_262145.f_29085){
return 0;
}
if(!Global_78689){
return 0;
}
if(PLAYER::PLAYER_ID()==func_96()){
return 0;
}
if(func_275(PLAYER::PLAYER_ID())){
return 0;
}
if(MISC::IS_BIT_SET(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 7)){
return 0;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 0;
}
return 1;
}


bool func_275(int iParam0){
return func_179(iParam0, 20);
}


void func_276(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20713[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=1;
}


void func_277(){
Global_21898=Global_21897;
Global_21892=Global_21893;
Global_21939={
Global_21927 
};
Global_21945={
Global_21933 
};
Global_21900=Global_21899;
Global_21969={
Global_21951 
};
Global_21975={
Global_21957 
};
Global_21981={
Global_21963 
};
Global_21987={
Global_21993 
};
Global_7685=Global_7686;
Global_7687=Global_7688;
Global_21856=Global_21857;
Global_21858=Global_21859;
Global_21860={
Global_21876 
};
Global_21849=Global_21850;
Global_22861=0;
Global_21894=0;
Global_21895=0;
MISC::CLEAR_BIT(&Global_8371, 16);
}

int func_278(){
int iVar0;
int iVar1;
if(Global_78689){
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


void func_279(){
if(func_61(14)){
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
Global_20500=func_114();
if(Global_20500==145){
Global_20500=3;
}
if(Global_78689){
Global_20500=3;
}
if(Global_20500 > 3){
Global_20500=3;
}}}


void func_280(){
int iVar0;
iVar0=0;
while (iVar0 <=15){
Global_21134[iVar0 /*10*/]=0;
StringCopy(&(Global_21134[iVar0 /*10*/].f_1), "", 24);
Global_21134[iVar0 /*10*/].f_7=0;
Global_21134[iVar0 /*10*/].f_8=0;
iVar0++;
}
Global_21134.f_161=-99;
Global_21134.f_162={
0f, 0f, 0f 
};
}


bool func_281(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}


void func_282(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
Global_21299={
*uParam0 
};
Global_7686=iParam1;
StringCopy(&Global_21915, sParam2, 24);
Global_22834=iParam5;
if(iParam3==0){
Global_22832=1;
Global_22830=0;
}else{
Global_22832=0;
Global_22830=1;
}
if(iParam4==0){
Global_22833=1;
Global_22831=0;
}else{
Global_22833=0;
Global_22831=1;
}}

int func_283(){
if(Global_21845 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}


bool func_284(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_282(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
if(iParam3 > 7){
if(iParam3 < 12){
iParam3=7;
}}
Global_21852=0;
Global_21854=0;
Global_21859=0;
Global_22836=0;
Global_22838=0;
Global_22842=0;
Global_2883585=0;
return func_272(sParam2, iParam3, 0);
}


void func_285(){
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_665[0])){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_665[0], 0);
}
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_665[1])){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_665[1], 0);
}
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_665[2])){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_665[2], 0);
}
if(iLocal_379==1){
AUDIO::RELEASE_SOUND_ID(iLocal_257);
iLocal_387=0;
}}


void func_286(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3, bool bParam4){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0)){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0);
}
Var1={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
if(bParam4){
Var0={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Param1) 
};
}else{
Var0={
Param1 
};
}
Var2={
func_287(Var0 - Var1) 
};
Var2={
Var2 * Vector(fParam3, fParam3, fParam3) 
};
ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 3, Var2, Param2, 0, 0, 1, 1, 0, 1);
}}


Vector3 func__287(struct<3> Param0){
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


void func_288(int iParam0, float fParam1){
int iVar0;
struct<3> Var1;
if(iLocal_164 < 15){
if(iLocal_164==0){
Local_179={
99999.9f, 99999.9f, 99999.9f 
};
Local_180={
-99999.9f, -99999.9f, -99999.9f 
};
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0)){
iVar0=VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
Var1={
VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, (fParam1 + (to_float((iLocal_164 - 1)) * 2000f))) 
};
if(Var1.f_0 < Local_179.f_0){
Local_179.f_0=Var1.f_0;
}
if(Var1.f_1 < Local_179.f_1){
Local_179.f_1=Var1.f_1;
}
if(Var1.f_2 < Local_179.f_2){
Local_179.f_2=Var1.f_2;
}
if(Var1.f_0 > Local_180.f_0){
Local_180.f_0=Var1.f_0;
}
if(Var1.f_1 > Local_180.f_1){
Local_180.f_1=Var1.f_1;
}
if(Var1.f_2 > Local_180.f_2){
Local_180.f_2=Var1.f_2;
}}}
iLocal_164++;
}elseif(!bLocal_104){
PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999.9f, -9999.9f, -9999.9f, 9999.9f, 9999.9f, 9999.9f, 1);
Local_179={
Local_179 + Vector((fLocal_146 * -1f), (fLocal_146 * -1f), (fLocal_146 * -1f)) 
};
Local_180={
Local_180 + Vector(fLocal_146, fLocal_146, fLocal_146) 
};
Local_177={
Local_179 
};
Local_178={
Local_180 
};
PATHFIND::SET_ROADS_IN_AREA(Local_177, Local_178, 0, 0);
iLocal_164=0;
}}


void func_289(){
iLocal_87=1;
}


void func_290(){
if(iLocal_329==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 55000f){
STREAMING::REQUEST_MODEL(joaat("firetruk"));
STREAMING::REQUEST_MODEL(joaat("s_m_y_fireman_01"));
STREAMING::REQUEST_ANIM_DICT("missheist_agency3aig_lift_waitped_a");
if((STREAMING::HAS_MODEL_LOADED(joaat("firetruk")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_fireman_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("missheist_agency3aig_lift_waitped_a")){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_280)){
MISC::CLEAR_AREA(-1129.566f, -2319.888f, 12.9445f, 10f, 0, 0, 0, 0);
iLocal_280=VEHICLE::CREATE_VEHICLE(joaat("firetruk"), -1129.566f, -2319.888f, 12.9445f, 16.5423f, 1, 1, 0);
}
uLocal_665[0]=GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_trev4_trailer_fire", -1151f, -2311f, 15f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
if(iLocal_379==0){
AUDIO::PLAY_SOUND_FROM_COORD(iLocal_257, "Trevor_4_747_Loud_Fire", -1151f, -2311f, 15f, 0, 0, 0, 0);
iLocal_379=1;
}
uLocal_665[1]=GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_trev4_trailer_fire", -1140f, -2328f, 18f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
uLocal_665[2]=GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_trev4_trailer_fire", -1150f, -2327f, 19f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_263[0])){
iLocal_263[0]=PED::CREATE_PED_INSIDE_VEHICLE(iLocal_280, 21, joaat("s_m_y_fireman_01"), -1, 1, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_263[0], 1);
PED::SET_PED_KEEP_TASK(iLocal_263[0], 1);
TASK::TASK_VEHICLE_SHOOT_AT_COORD(iLocal_263[0], -1147.07f, -2320.65f, 18.93f, 1101004800);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_263[1])){
iLocal_263[1]=PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), -1138.313f, -2313.277f, 12.9445f, 155.4271f, 1, 1);
TASK::TASK_PLAY_ANIM(iLocal_263[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 8f, -8f, -1, 9, 0, 0, 0, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_263[1], 1);
PED::SET_PED_KEEP_TASK(iLocal_263[1], 1);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_263[2])){
iLocal_263[2]=PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), -1145.362f, -2309.387f, 12.9445f, 96.0786f, 1, 1);
TASK::TASK_PLAY_ANIM(iLocal_263[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 8f, -8f, -1, 9, 0, 0, 0, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_263[2], 1);
PED::SET_PED_KEEP_TASK(iLocal_263[2], 1);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_263[3])){
iLocal_263[3]=PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), -1147.461f, -2314.511f, 13.1518f, 57.8707f, 1, 1);
TASK::TASK_PLAY_ANIM(iLocal_263[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 8f, -8f, -1, 9, 0, 0, 0, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_263[3], 1);
PED::SET_PED_KEEP_TASK(iLocal_263[3], 1);
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_fireman_01"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("firetruk"));
iLocal_329=1;
}}}}}
if(iLocal_329==1){
if(iLocal_463[0]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_263[1])){
if(!PED::IS_PED_INJURED(iLocal_263[1])){
if(iLocal_464[0]==0){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_263[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3)){
iLocal_464[0]=1;
}}
if(iLocal_464[0]==1){
if(!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_263[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3)){
TASK::TASK_COWER(iLocal_263[1], -1);
PED::SET_PED_KEEP_TASK(iLocal_263[1], 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_263[1], 0);
iLocal_463[0]=1;
}}}}}
if(iLocal_463[1]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_263[2])){
if(!PED::IS_PED_INJURED(iLocal_263[2])){
if(iLocal_464[1]==0){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_263[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3)){
iLocal_464[1]=1;
}}
if(iLocal_464[1]==1){
if(!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_263[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3)){
TASK::TASK_COWER(iLocal_263[2], -1);
PED::SET_PED_KEEP_TASK(iLocal_263[2], 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_263[2], 0);
iLocal_463[1]=1;
}}}}}
if(iLocal_463[2]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_263[3])){
if(!PED::IS_PED_INJURED(iLocal_263[3])){
if(iLocal_464[2]==0){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_263[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3)){
iLocal_464[2]=1;
}}
if(iLocal_464[2]==1){
if(!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_263[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3)){
TASK::TASK_COWER(iLocal_263[3], -1);
PED::SET_PED_KEEP_TASK(iLocal_263[3], 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_263[3], 0);
iLocal_463[2]=1;
}}}}}}}


void func_291(){
if(iLocal_400==0){
STREAMING::REQUEST_MODEL(joaat("police3"));
STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
VEHICLE::REQUEST_VEHICLE_RECORDING(1, "BB_AIChase");
if(STREAMING::HAS_MODEL_LOADED(joaat("police3")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 15500f){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
iLocal_286[0]=VEHICLE::CREATE_VEHICLE(joaat("police3"), -847.2593f, -2379.987f, 15.9304f, 196.4921f, 1, 1, 0);
iLocal_273[0]=PED::CREATE_PED_INSIDE_VEHICLE(iLocal_286[0], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_273[0], 1);
AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_286[0], "SOL_3_POLICE_CARS_Group", 0);
func_134(iLocal_273[0], 0);
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_286[0], 1, 1, 0);
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_286[0], 1, "BB_AIChase", 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_273[0], joaat("weapon_pistol"), 1000, 1, 1);
VEHICLE::SET_VEHICLE_SIREN(iLocal_286[0], 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
iLocal_400=1;
}}}}}
if(iLocal_400==1){
if(iLocal_427[0]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_286[0])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_286[0], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_286[0])){
VEHICLE::SET_PLAYBACK_SPEED(iLocal_286[0], fLocal_319);
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_286[0]) > 13000f){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_286[0]);
}}elseif(ENTITY::DOES_ENTITY_EXIST(iLocal_273[0])){
if(!PED::IS_PED_INJURED(iLocal_273[0])){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_273[0], 1);
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
TASK::TASK_VEHICLE_CHASE(iLocal_273[0], PLAYER::PLAYER_PED_ID());
PED::SET_PED_KEEP_TASK(iLocal_273[0], 1);
}else{
TASK::TASK_COMBAT_PED(iLocal_273[0], PLAYER::PLAYER_PED_ID(), 0, 16);
PED::SET_PED_KEEP_TASK(iLocal_273[0], 1);
}
VEHICLE::REMOVE_VEHICLE_RECORDING(1, "BB_AIChase");
iLocal_236=MISC::GET_GAME_TIMER();
iLocal_427[0]=1;
}}}}}
if(iLocal_428[0]==0){
if(iLocal_427[0]==1){
if(MISC::GET_GAME_TIMER() > iLocal_236 + 500){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_273[0])){
if(!PED::IS_PED_INJURED(iLocal_273[0])){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
TASK::SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(iLocal_273[0], 16, 1);
TASK::SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(iLocal_273[0], 1, 1);
iLocal_428[0]=1;
}else{
iLocal_428[0]=1;
}
}}}}}}}


void func_292(){
if(!iLocal_331){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[20], 0)){
uLocal_299=CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
CAM::SET_CAM_ACTIVE(uLocal_299, 1);
iLocal_332=0;
iLocal_331=1;
}}elseif(func_307(&uLocal_26, 1, 0, 0) && iLocal_403==0){
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
HUD::CLEAR_HELP(1);
}
if(func_283()){
HUD::CLEAR_PRINTS();
func_234();
}
if(iLocal_361[2]==0){
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM")){
AUDIO::START_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
}
AUDIO::PLAY_SOUND_FRONTEND(iLocal_259, "Trevor_4_747_TV", 0, 1);
iLocal_361[2]=1;
}
func_298(1, 1, 30, 5, 0);
if(iLocal_350==0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "SET_TEXT");
func_297("TRV4_NEWS1");
func_297("");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iLocal_350=1;
}
if(iLocal_351==0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "SET_SCROLL_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
func_297("TRV4_NEWS2");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "SET_SCROLL_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
func_297("TRV4_NEWS6");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "SET_SCROLL_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
func_297("TRV4_NEWS7");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "SET_SCROLL_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(2f);
func_297("TRV4_NEWS8");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "SET_SCROLL_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(3f);
func_297("TRV4_NEWS9");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "SET_SCROLL_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(4f);
func_297("TRV4_NEWS10");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "DISPLAY_SCROLL_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iLocal_241=(MISC::GET_GAME_TIMER() - 5000);
iLocal_351=1;
}
if(MISC::GET_GAME_TIMER() > iLocal_241 + 5000){
func_296();
iLocal_241=MISC::GET_GAME_TIMER();
}
if(iLocal_352==0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 25000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 50000f){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "SET_SCROLL_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
func_297("TRV4_NEWS5");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "DISPLAY_SCROLL_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iLocal_352=1;
}}}}
if(iLocal_353==0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 77600f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 115000f){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "SET_SCROLL_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(2f);
func_297("TRV4_NEWS3");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "DISPLAY_SCROLL_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(2f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iLocal_353=1;
}}}}
if(iLocal_354==0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 115000f){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "SET_SCROLL_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(3f);
func_297("TRV4_NEWS4");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "DISPLAY_SCROLL_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(3f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iLocal_354=1;
}}}}
HUD::SET_TEXT_RENDER_ID(uLocal_224);
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_303, 255, 255, 255, 0, 0);
if(iLocal_332==0){
func_248(1, 1, 1, 0);
CAM::SHAKE_CAM(uLocal_299, "ROAD_VIBRATION_SHAKE", 1f);
CAM::SET_CAM_ACTIVE(uLocal_299, 1);
CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
HUD::DISPLAY_RADAR(0);
PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
func_295();
iLocal_332=1;
}
func_293();
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
PAD::DISABLE_CONTROL_ACTION(0, 85, 1);
AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
}elseif(iLocal_332){
func_248(0, 1, 1, 0);
CAM::SET_CAM_ACTIVE(uLocal_299, 0);
CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
HUD::DISPLAY_RADAR(1);
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM")){
AUDIO::STOP_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
}
AUDIO::STOP_SOUND(iLocal_259);
func_268();
AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
iLocal_361[2]=0;
iLocal_332=0;
}}


void func_293(){
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
func_294();
}


void func_294(){
Global_23251.f_134=1;
}


void func_295(){
Global_63492=1;
}


void func_296(){
if(iLocal_226 > 4){
iLocal_226=0;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "DISPLAY_SCROLL_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_226);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iLocal_226++;
}


void func_297(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_298(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4){
if(!func_306()){
func_306();
}elseif(bParam0){
if(iParam4==1){
if(iLocal_48 <=225 && iLocal_42==0){
iLocal_48 +=30;
if(iLocal_48 >=225){
iLocal_42=1;
}}elseif(iLocal_48 >=30){
iLocal_48=(iLocal_48 - 30);
if(iLocal_48 <=30){
iLocal_42=0;
}}}
func_305(1, 200);
if(iLocal_46 <=iParam2 && iLocal_41==0){
iLocal_46++;
func_302(1, iLocal_46);
if(iLocal_46==iParam2){
iLocal_41=1;
iLocal_47=MISC::GET_RANDOM_INT_IN_RANGE(iParam3, iParam2);
}}elseif(iLocal_46 > 0){
if(iLocal_46 > iLocal_47){
iLocal_46=(iLocal_46 - 1);
func_302(1, iLocal_46);
if(iLocal_46==iLocal_47){
iLocal_41=0;
}}}
if(bParam1){
func_299(1, 40, 1, 1, 1);
}}}


void func_299(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
if(!func_306()){
func_306();
}elseif(bParam0){
if(bParam2){
if(!func_301(0)){
func_300(0);
}else{
GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscuzz1", 0.5f, fLocal_49, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0, 0);
}
if(fLocal_49 < 1f){
fLocal_49=(fLocal_49 + 0.01f);
}else{
fLocal_49=0f;
}}
if(bParam3){
if(!func_301(1)){
func_300(1);
}else{
GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscuzz2", 0.5f, fLocal_50, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0, 0);
}
if(fLocal_50 < 1f){
fLocal_50=(fLocal_50 + 0.02f);
}else{
fLocal_50=0f;
}}
if(bParam4){
if(!func_301(2)){
func_300(2);
}else{
GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscuzz3", 0.5f, fLocal_51, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0, 0);
}
if(fLocal_51 < 1f){
fLocal_51=(fLocal_51 + 0.028f);
}else{
fLocal_51=0f;
}}}}


void func_300(bool bParam0){
if(bParam0 < 32){
MISC::SET_BIT(&uLocal_52, bParam0);
}}

int func_301(bool bParam0){
if(MISC::IS_BIT_SET(uLocal_52, bParam0)){
return 1;
}
return 0;
}


void func_302(bool bParam0, int iParam1){
if(!func_306()){
func_306();
}elseif(bParam0){
iLocal_44=func_304(5);
iLocal_43=MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
while (iLocal_45==iLocal_44){
iLocal_44=func_304(5);
}
if(iLocal_44==0){
if(!func_301(3)){
func_300(3);
}else{
GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static1", 0.5f, 0.5f, (1f * func_303(bLocal_38)), (1f * func_303(bLocal_39)), 0f, 255, 255, 255, iParam1, 0, 0);
}}
if(iLocal_44==1){
if(!func_301(4)){
func_300(4);
}else{
GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static2", 0.5f, 0.5f, (1f * func_303(bLocal_38)), (1f * func_303(bLocal_39)), 0f, 255, 255, 255, iParam1, 0, 0);
}}
if(iLocal_44==2){
if(!func_301(5)){
func_300(5);
}else{
GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static3", 0.5f, 0.5f, (1f * func_303(bLocal_38)), (1f * func_303(bLocal_39)), 0f, 255, 255, 255, iParam1, 0, 0);
}}
if(iLocal_44==3){
if(!func_301(6)){
func_300(6);
}else{
GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static4", 0.5f, 0.5f, (1f * func_303(bLocal_38)), (1f * func_303(bLocal_39)), 0f, 255, 255, 255, iParam1, 0, 0);
}}
if(iLocal_44==4){
if(!func_301(7)){
func_300(7);
}else{
GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static5", 0.5f, 0.5f, (1f * func_303(bLocal_38)), (1f * func_303(bLocal_39)), 0f, 255, 255, 255, iParam1, 0, 0);
}}}}


float func_303(bool bParam0){
if(bParam0){
return -1f;
}else{
return 1f;
}
return 1f;
}

int func_304(int iParam0){
if(MISC::GET_RANDOM_INT_IN_RANGE(0, 50) > 25){
bLocal_38=true;
}else{
bLocal_38=false;
}
if(MISC::GET_RANDOM_INT_IN_RANGE(0, 50) > 25){
bLocal_39=true;
}else{
bLocal_39=false;
}
return MISC::GET_RANDOM_INT_IN_RANGE(0, iParam0);
}


void func_305(bool bParam0, int iParam1){
if(!func_306()){
func_306();
}elseif(bParam0){
if(iLocal_40){
if(!func_301(8)){
func_300(8);
}else{
GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscanline1", 0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, iParam1, 0, 0);
}
iLocal_40=0;
}else{
if(!func_301(8)){
func_300(8);
}else{
GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscanline1", 0.5f, 0.5f, -1f, -1f, 0f, 255, 255, 255, iParam1, 0, 0);
}
iLocal_40=1;
}}}

int func_306(){
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("digitalOverlay", 0);
if(GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("digitalOverlay")){
return 1;
}
return 0;
}

int func_307(var uParam0, bool bParam1, bool bParam2, bool bParam3){
if(uParam0->f_1){
if(MISC::GET_GAME_TIMER() >=(uParam0->f_8 + uParam0->f_9)){
uParam0->f_1=0;
}}
switch (uParam0->f_5){
case 0:
uParam0->f_7=0;
if(uParam0->f_6==0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(func_313(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=1;
uParam0->f_7=1;
}}elseif(func_312(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=1;
uParam0->f_7=1;
}}elseif(uParam0->f_6==1){
if(func_312(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=1;
uParam0->f_7=1;
}}elseif(uParam0->f_6==2){
if(func_313(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=1;
uParam0->f_7=1;
}}
if(func_311(uParam0)){
uParam0->f_7=1;
uParam0->f_5=4;
}
break;
case 1:
if((MISC::GET_GAME_TIMER() - uParam0->f_4) <=500){
if(uParam0->f_6==0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(!func_313(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=3;
}}elseif(!func_312(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=3;
}}elseif(uParam0->f_6==1){
if(!func_312(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=3;
}}elseif(uParam0->f_6==2){
if(!func_313(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=3;
}}}else{
uParam0->f_5=2;
}
break;
case 2:
if(uParam0->f_6==0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(!func_313(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}elseif(!func_312(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}elseif(uParam0->f_6==1){
if(!func_312(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
uParam0->f_5=0;
}}elseif(uParam0->f_6==2){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2)){
uParam0->f_5=0;
}elseif(!func_313(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}
break;
case 3:
if((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500){
if(uParam0->f_6==0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(func_310(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}elseif(func_309(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}elseif(uParam0->f_6==1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_309(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}elseif(uParam0->f_6==2){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2)){
uParam0->f_5=0;
}elseif(func_310(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}}
break;
case 4:
if(!func_311(uParam0)){
uParam0->f_5=0;
}
break;
}
if(!func_322(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
uParam0->f_7=0;
}
if(uParam0->f_7){
func_308();
return 1;
}else{
return 0;
}
return 0;
}


void func_308(){
MISC::SET_BIT(&Global_8371, 4);
}

int func_309(bool bParam0, bool bParam1, bool bParam2){
if(!func_322(bParam0, bParam1, bParam2)){
return 0;
}
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())){
PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
if(PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80)){
return 1;
}}}
return 0;
}

int func_310(bool bParam0, bool bParam1, bool bParam2){
if(!func_322(bParam0, bParam1, bParam2)){
return 0;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
if(CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE()){
if(PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80)){
CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
return 1;
}}}
return 0;
}

int func_311(var uParam0){
int iVar0;
if(uParam0->f_2 > 0){
iVar0=(uParam0->f_10 / 2);
if(uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER(){
return 1;
}}
return 0;
}

int func_312(bool bParam0, bool bParam1, bool bParam2){
if(!func_322(bParam0, bParam1, bParam2)){
return 0;
}
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())){
PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
if(PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116){
return 1;
}}}
return 0;
}

int func_313(bool bParam0, bool bParam1, bool bParam2){
if(!func_322(bParam0, bParam1, bParam2)){
return 0;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
if(CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE()){
if(PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116){
CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
return 1;
}}}
return 0;
}


void func_314(bool bParam0){
if(bParam0){
func_320();
if(Global_20500.f_1==10 || Global_20500.f_1==9){
MISC::SET_BIT(&Global_8371, 16);
}
Global_20500.f_1=1;
if(func_319(0)){
func_315(0);
}}elseif(Global_20500.f_1==1){
if(!Global_20500.f_1==0){
Global_20500.f_1=3;
}}}


void func_315(int iParam0){
if(func_318()){
return;
}
if(Global_20704){
if(func_317()){
func_316(1, 1);
}else{
func_316(0, 0);
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
if(!func_249()){
Global_20500.f_1=3;
}}


void func_316(bool bParam0, bool bParam1){
if(bParam0){
if(func_319(0)){
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


bool func_317(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}


bool func_318(){
return MISC::IS_BIT_SET(Global_1963795, 19);
}

int func_319(int iParam0){
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


void func_320(){
if(Global_20500.f_1==9 || Global_20500.f_1==10){
Global_21898=0;
Global_21894=1;
}}


void func_321(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_322(bool bParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
if(bParam0){
if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
return 0;
}}
if(bParam2){
return 1;
}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
return 0;
}
if(func_319(0)){
return 0;
}
if(func_329()){
return 0;
}
if(NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return 0;
}
if(Global_75816){
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0){
return 0;
}
if(Global_60666){
return 0;
}
if(bParam1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3)==4){
return 0;
}}elseif(PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6)==4){
return 0;
}}elseif(PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4)==4){
return 0;
}}elseif(PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5)==4){
return 0;
}}elseif(PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2)==4){
return 0;
}}elseif(CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE()==3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE()==4){
return 0;
}
if(CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND()){
return 0;
}}}
if((func_328() || func_327(Global_4718592.f_171044)) || func_326()){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
iVar1=func_325(PLAYER::PLAYER_PED_ID(), 0);
if(((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("apc") && iVar1 !=-1)) || (ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("akula") && iVar1 !=-1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("riot2") && iVar1==0) && func_324(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) !=-1)){
return 0;
}}}
if(Global_1962809){
return 0;
}
if(func_323(PLAYER::PLAYER_ID())){
return 0;
}
return 1;
}

int func_323(int iParam0){
if(iParam0 !=func_96()){
if(func_203(iParam0, 1, 1)){
return Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1;
}elseif((Global_1575063 && iParam0==PLAYER::PLAYER_ID()) && func_203(iParam0, 1, 0)){
return Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1;
}}
return 0;
}

int func_324(int iParam0, int iParam1){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0){
switch (iParam1){
case 17:
case 18:
case 19:
case 20:
case 21:
case 22:
return 1;
break;
default:
if(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0){
return 1;
}
break;
}}}
return 0;
}

int func_325(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(!PED::IS_PED_INJURED(iParam0)){
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
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


var func__326(){
return Global_2683883.f_19;
}


bool func_327(int iParam0){
return iParam0==51;
}


var func__328(){
return Global_2683883.f_18;
}


bool func_329(){
return MISC::GET_GAME_TIMER() <=Global_23390.f_6321 + 100;
}


void func_330(var uParam0, int iParam1, float fParam2){
struct<3> Var0;
struct<3> Var1;
if(!ENTITY::IS_ENTITY_DEAD(iParam1, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam1)){
VEHICLE::SET_PLAYBACK_SPEED(iParam1, fParam2);
Var0={
ENTITY::GET_ENTITY_COORDS(iParam1, 1) 
};
Var1={
ENTITY::GET_ENTITY_ROTATION(iParam1, 2) 
};
CAM::SET_CAM_COORD(uParam0, Var0);
CAM::SET_CAM_ROT(uParam0, Var1, 2);
}}}


void func_331(var uParam0, int iParam1, char* sParam2, int iParam3){
struct<3> Var0;
if(!ENTITY::IS_ENTITY_DEAD(iParam1, 0)){
ENTITY::SET_ENTITY_VISIBLE(iParam1, 0, 0);
ENTITY::SET_ENTITY_COLLISION(iParam1, 0, 0);
ENTITY::SET_ENTITY_INVINCIBLE(iParam1, 1);
ENTITY::SET_ENTITY_PROOFS(iParam1, 1, 1, 1, 1, 1, 0, 0, 0);
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam1, iParam3, sParam2, 1);
Var0={
ENTITY::GET_ENTITY_COORDS(iParam1, 1) 
};
CAM::SET_CAM_COORD(uParam0, Var0);
CAM::SET_CAM_ROT(uParam0, ENTITY::GET_ENTITY_ROTATION(iParam1, 2), 2);
}}


void func_332(){
if(iLocal_258 !=-1){
if(iLocal_380==1){
if(iLocal_372==0){
AUDIO::RELEASE_SOUND_ID(iLocal_258);
iLocal_382=0;
iLocal_372=1;
}}}
if(iLocal_253 !=-1){
if(iLocal_376==1){
if(iLocal_374==0){
AUDIO::RELEASE_SOUND_ID(iLocal_253);
iLocal_383=0;
iLocal_374=1;
}}}
if(iLocal_254 !=-1){
if(iLocal_381==1){
if(iLocal_363==0){
AUDIO::RELEASE_SOUND_ID(iLocal_254);
iLocal_384=0;
iLocal_363=1;
}}}
if(iLocal_255 !=-1){
if(iLocal_377==1){
if(iLocal_373==0){
AUDIO::RELEASE_SOUND_ID(iLocal_255);
iLocal_385=0;
iLocal_373=1;
}}}
if(iLocal_256 !=-1){
if(iLocal_378==1){
if(iLocal_375==0){
AUDIO::RELEASE_SOUND_ID(iLocal_256);
iLocal_386=0;
iLocal_375=1;
}}}}


void func_333(){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[19])){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_202[19], 0)){
if(!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_202[19])){
VEHICLE::SET_VEHICLE_SIREN(iLocal_202[19], 1);
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[7])){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_202[7], 0)){
if(!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_202[7])){
VEHICLE::SET_VEHICLE_SIREN(iLocal_202[7], 1);
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[8])){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_202[8], 0)){
if(!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_202[8])){
VEHICLE::SET_VEHICLE_SIREN(iLocal_202[8], 1);
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[9])){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_202[9], 0)){
if(!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_202[9])){
VEHICLE::SET_VEHICLE_SIREN(iLocal_202[9], 1);
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[10])){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_202[10], 0)){
if(!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_202[10])){
VEHICLE::SET_VEHICLE_SIREN(iLocal_202[10], 1);
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[11])){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_202[11], 0)){
if(!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_202[11])){
VEHICLE::SET_VEHICLE_SIREN(iLocal_202[11], 1);
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[13])){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_202[13], 0)){
if(!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_202[13])){
VEHICLE::SET_VEHICLE_SIREN(iLocal_202[13], 1);
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[14])){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_202[14], 0)){
if(!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_202[14])){
VEHICLE::SET_VEHICLE_SIREN(iLocal_202[14], 1);
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[15])){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_202[15], 0)){
if(!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_202[15])){
VEHICLE::SET_VEHICLE_SIREN(iLocal_202[15], 1);
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[16])){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_202[16], 0)){
if(!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_202[16])){
VEHICLE::SET_VEHICLE_SIREN(iLocal_202[16], 1);
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[17])){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_202[17], 0)){
if(!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_202[17])){
VEHICLE::SET_VEHICLE_SIREN(iLocal_202[17], 1);
}}}}


void func_334(){
if(func_365()){
fLocal_320=0.5f;
}elseif(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) > 40f){
fLocal_320=0.85f;
}else{
fLocal_320=0.9f;
}}else{
fLocal_320=0.9f;
}
if(!ENTITY::IS_ENTITY_DEAD(iLocal_276, 0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(iLocal_355==0){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 10000f){
if(func_16(PLAYER::PLAYER_PED_ID(), iLocal_276, 1) < 100f || ENTITY::IS_ENTITY_ON_SCREEN(iLocal_276)){
func_361(iLocal_276, PLAYER::PLAYER_PED_ID(), &fLocal_319, 1f, 40f, 55f, 100f, 1.7f, 1f, fLocal_320, 0);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}
else{
func_361(iLocal_276, PLAYER::PLAYER_PED_ID(), &fLocal_319, 0.6f, 40f, 50f, 60f, 1.7f, 1f, fLocal_320, 0);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}}}elseif(func_16(PLAYER::PLAYER_PED_ID(), iLocal_276, 1) > 175f){
fLocal_319=0.6f;
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}elseif(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 10000f){
func_361(iLocal_276, PLAYER::PLAYER_PED_ID(), &fLocal_319, 1f, 25f, 40f, 180f, 1.7f, 1f, fLocal_320, 0);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 10000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 23000f){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[8], 0)){
func_361(iLocal_202[8], PLAYER::PLAYER_PED_ID(), &fLocal_319, 1f, 25f, 30f, 50f, 1.7f, 0.5f, fLocal_320, 1);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}else{
func_361(iLocal_276, PLAYER::PLAYER_PED_ID(), &fLocal_319, 1f, 25f, 35f, 180f, 1.7f, 0.5f, fLocal_320, 1);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}}
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 23000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 32000f){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[7])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[7], 0)){
func_361(iLocal_202[7], PLAYER::PLAYER_PED_ID(), &fLocal_319, 1f, 20f, 30f, 100f, 1.8f, 1f, fLocal_320, 0);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}
elseif(ENTITY::DOES_ENTITY_EXIST(iLocal_202[8])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[8], 0)){
func_361(iLocal_202[8], PLAYER::PLAYER_PED_ID(), &fLocal_319, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_320, 0);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}else{
func_361(iLocal_276, PLAYER::PLAYER_PED_ID(), &fLocal_319, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_320, 0);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}
}
else{
func_361(iLocal_276, PLAYER::PLAYER_PED_ID(), &fLocal_319, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_320, 0);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}}elseif(ENTITY::DOES_ENTITY_EXIST(iLocal_202[8])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[8], 0)){
func_361(iLocal_202[8], PLAYER::PLAYER_PED_ID(), &fLocal_319, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_320, 0);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}
else{
func_361(iLocal_276, PLAYER::PLAYER_PED_ID(), &fLocal_319, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_320, 0);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}}else{
func_361(iLocal_276, PLAYER::PLAYER_PED_ID(), &fLocal_319, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_320, 0);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}}
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 32000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 39000f){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[7])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[7], 0)){
func_361(iLocal_202[7], PLAYER::PLAYER_PED_ID(), &fLocal_319, 1f, 22f, 25f, 100f, 1.8f, 0.5f, fLocal_320, 1);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}
else{
func_361(iLocal_276, PLAYER::PLAYER_PED_ID(), &fLocal_319, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_320, 1);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}}else{
func_361(iLocal_276, PLAYER::PLAYER_PED_ID(), &fLocal_319, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_320, 1);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}}
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 39000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 56000f){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[8], 0)){
func_361(iLocal_202[8], PLAYER::PLAYER_PED_ID(), &fLocal_319, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_320, 0);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}else{
func_361(iLocal_276, PLAYER::PLAYER_PED_ID(), &fLocal_319, 1f, 25f, 35f, 150f, 1.8f, 1f, fLocal_320, 0);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}}
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 56000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 65000f){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[11], 0)){
func_361(iLocal_202[11], PLAYER::PLAYER_PED_ID(), &fLocal_319, 1f, 25f, 30f, 100f, 1.8f, 1f, fLocal_320, 0);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}else{
func_361(iLocal_276, PLAYER::PLAYER_PED_ID(), &fLocal_319, 1f, 25f, 35f, 100f, 1.8f, 1f, fLocal_320, 0);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}}
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 65000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 90000f){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[13])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[13], 0)){
func_361(iLocal_202[13], PLAYER::PLAYER_PED_ID(), &fLocal_319, 1f, 30f, 35f, 50f, 1.8f, 1f, fLocal_320, 0);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}
else{
func_361(iLocal_276, PLAYER::PLAYER_PED_ID(), &fLocal_319, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_320, 0);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}}else{
func_361(iLocal_276, PLAYER::PLAYER_PED_ID(), &fLocal_319, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_320, 0);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}}
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 90000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 110000f){
func_361(iLocal_276, PLAYER::PLAYER_PED_ID(), &fLocal_319, 1f, 60f, 70f, 150f, 1.5f, 0.5f, fLocal_320, 1);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 110000f){
func_361(iLocal_276, PLAYER::PLAYER_PED_ID(), &fLocal_319, 1f, 100f, 120f, 150f, 1.6f, 1f, fLocal_320, 0);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_276, fLocal_319);
func_335(iLocal_276, fLocal_319);
}}}}}


void func_335(int iParam0, float fParam1){
float fVar0;
struct<3> Var1;
int iVar2;
fVar0=MISC::GET_FRAME_TIME();
fVar0=(fVar0 * 1000f);
bLocal_104=false;
if(!bLocal_86){
if(bLocal_85){
func_360();
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
MISC::CLEAR_AREA(Var1, 1000f, 1, 0, 0, 0);
}
bLocal_86=true;
}}elseif(!bLocal_85){
func_231();
bLocal_86=false;
}
if(bLocal_85){
fParam1=1f;
VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
}
if(!bLocal_79){
if(iLocal_74){
fLocal_131=0f;
}else{
fLocal_131=1f;
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0)){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(func_359(PLAYER::PLAYER_PED_ID(), iParam0)){
iLocal_84=1;
}else{
iLocal_84=0;
}}
fLocal_128=VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_129) * fLocal_131));
if(bLocal_83){
func_358(iParam0, fLocal_128);
func_357(iParam0, fLocal_138);
if(fLocal_133 > 1000f){
if(iLocal_170==0){
func_356(iParam0, fLocal_138);
}
fVar0=((fLocal_128 + 4000f) + (to_float(iLocal_170) * 2000f));
func_355(iParam0, fVar0, fLocal_132);
iLocal_170++;
if(iLocal_170 > 2){
fLocal_133=0f;
}}else{
iLocal_170=0;
fLocal_133=(fLocal_133 + (MISC::GET_FRAME_TIME() * 1000f));
}}}}
iVar2=0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0)){
iVar2=1;
}}
if(fLocal_128==0f || CAM::IS_SCREEN_FADED_OUT()){
iVar2=1;
}
if(iVar2 && !bLocal_91){
if(!iLocal_73){
func_352(iParam0, ((fParam1 * fLocal_129) * fLocal_131), 0);
if(!iLocal_94){
}
iLocal_94=0;
}
if(bLocal_76){
func_351(iParam0);
}
if(!iLocal_73){
func_338(iParam0, ((fParam1 * fLocal_129) * fLocal_131), 0);
}}
if(iLocal_81){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iLocal_204=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
Local_174={
ENTITY::GET_ENTITY_COORDS(iLocal_204, 1) 
};
ENTITY::GET_ENTITY_QUATERNION(iLocal_204, &fLocal_112, &fLocal_113, &fLocal_114, &fLocal_115);
}}
iLocal_81=0;
}
if(iLocal_80){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_204)){
func_223(iLocal_205);
iLocal_205=iLocal_204;
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_205, 0)){
ENTITY::SET_ENTITY_COORDS(iLocal_205, Local_174, 1, 0, 0, 1);
ENTITY::SET_ENTITY_QUATERNION(iLocal_205, fLocal_112, fLocal_113, fLocal_114, fLocal_115);
}
fLocal_127=fLocal_130;
iLocal_73=1;
iLocal_80=0;
}
if(iLocal_73){
while (!func_336(&iParam0, fLocal_127)){
wait(0);
}
iLocal_74=1;
}
if(iLocal_87){
iLocal_87=0;
}}}

int func_336(int iParam0, float fParam1){
if(!iLocal_88){
iLocal_73=1;
func_218();
if(VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0)){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
VEHICLE::SET_VEHICLE_FIXED(*iParam0);
}
if(!iLocal_157==-1){
while (!func_337(iParam0, iLocal_157, fParam1, 1, 0, 0, 0, 0)){
wait(0);
}
if(!bLocal_78){
iLocal_74=1;
fLocal_131=0f;
iLocal_158=0;
iLocal_160=0;
iLocal_159=0;
iLocal_154=0;
iLocal_155=0;
iLocal_156=0;
iLocal_161=0;
iLocal_162=0;
iLocal_163=0;
}}}
iLocal_88=1;
}else{
if(VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0)){
VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_129) * fLocal_131));
func_337(iParam0, iLocal_157, fParam1, 1, 0, 0, 0, 0);
}}
fLocal_128=fParam1;
iLocal_164=0;
iLocal_167=0;
fLocal_143=0f;
fLocal_142=0f;
func_338(*iParam0, ((1f * fLocal_129) * fLocal_131), 1);
func_352(*iParam0, ((1f * fLocal_129) * fLocal_131), 1);
func_351(*iParam0);
if((iLocal_161==0 && iLocal_162==0) && iLocal_163==0){
iLocal_74=0;
iLocal_73=0;
iLocal_88=0;
return 1;
}}
return 0;
}

int func_337(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7){
float fVar0;
if(iParam1 > 0){
VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_183);
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_183)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0)){
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0)){
ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
if(bParam4){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_183, 1092616192, 786603);
}else{
if(iParam1 !=iLocal_165 && iParam1 !=iLocal_166){
if(bParam7){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_183, 2 | 4, 0, 786603);
}elseif(bParam6){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_183, 1 | 4, 0, 786603);
}else{
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_183, 1);
}
}
else{
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_183, 1);
}
VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
if(bParam5){
VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
}
return 1;
}}elseif(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*uParam0)==VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_183)){
fVar0=VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam0);
VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, (fParam2 - fVar0));
if(!bParam3){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_183);
}
if(bParam5){
VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
}
return 1;
}else{
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
if(bParam4){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_183, 1092616192, 786603);
}elseif(iParam1 !=iLocal_165 && iParam1 !=iLocal_166){
if(bParam7){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_183, 2 | 4, 0, 786603);
}
elseif(bParam6){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_183, 1 | 4, 0, 786603);
}
else{
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_183, 1);
}}else{
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_183, 1);
}
VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
if(bParam5){
VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
}
return 1;
}}}}
return 0;
}


void func_338(int iParam0, float fParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
struct<3> Var3;
struct<3> Var4;
struct<3> Var5;
float fVar6;
float fVar7;
bool bVar8;
bool bVar9;
var uVar10;
var uVar11;
bool bVar12;
int iVar13;
int iVar14;
bVar9=PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
uVar10=PED::CAN_CREATE_RANDOM_DRIVER();
uVar11=PED::CAN_CREATE_RANDOM_BIKE_RIDER();
bVar12=false;
if(bVar9){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
}
Var5={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
iVar0=iLocal_160;
while (iVar0 < 35){
if(iLocal_151[iVar0] !=99){
if(iLocal_151[iVar0]==0){
if(iLocal_150[iVar0] > 0){
if(!iLocal_73){
if(fLocal_128 > (fLocal_120[iVar0] - (7000f * fParam1))){
if(func_350(iLocal_195[iVar0])){
MISC::SET_BIT(&(iLocal_152[iVar0]), false);
}elseif(VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_195[iVar0])){
MISC::SET_BIT(&(iLocal_152[iVar0]), 2);
}
MISC::CLEAR_BIT(&(iLocal_152[iVar0]), true);
iLocal_151[iVar0]++;
iLocal_162++;
}
}
else{
fVar6=(fLocal_128 - fLocal_120[iVar0]);
fVar6=(fVar6 * fLocal_121[iVar0]);
if(fVar6 >=0f){
if(fVar6 < func_349(iLocal_150[iVar0])){
if(func_350(iLocal_195[iVar0])){
MISC::SET_BIT(&(iLocal_152[iVar0]), false);
}
elseif(VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_195[iVar0])){
MISC::SET_BIT(&(iLocal_152[iVar0]), 2);
}
MISC::CLEAR_BIT(&(iLocal_152[iVar0]), true);
iLocal_151[iVar0]++;
iLocal_162++;
}else{
iLocal_151[iVar0]=99;
}}
}}else{
iLocal_151[iVar0]=99;
}}elseif(iLocal_151[iVar0]==1){
bVar8=false;
VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_150[iVar0], &cLocal_183);
if(MISC::IS_BIT_SET(iLocal_152[iVar0], 0)){
STREAMING::REQUEST_MODEL(func_227());
bVar8=STREAMING::HAS_MODEL_LOADED(func_227());
}elseif(!bLocal_100 && ((!MISC::IS_BIT_SET(iLocal_152[iVar0], 2) && uVar10) || (MISC::IS_BIT_SET(iLocal_152[iVar0], 2) && uVar11))){
bVar8=true;
}else{
STREAMING::REQUEST_MODEL(func_230());
bVar8=STREAMING::HAS_MODEL_LOADED(func_230());
}
if(bVar8){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_202[iVar0])){
STREAMING::REQUEST_MODEL(iLocal_195[iVar0]);
if(STREAMING::HAS_MODEL_LOADED(iLocal_195[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_150[iVar0], &cLocal_183)){
if(fLocal_128 >=(fLocal_120[iVar0] - (fLocal_141 * fParam1))){
if((iLocal_87 || bParam2) || (!bLocal_104 && !func_348(Local_173[iVar0 /*3*/], Var5, 5f, fLocal_139))){
if(bLocal_83){
func_347(Local_173[iVar0 /*3*/], Var5, fLocal_132);
}
iLocal_202[iVar0]=VEHICLE::CREATE_VEHICLE(iLocal_195[iVar0], Local_173[iVar0 /*3*/], 0f, 0, 0, 0);
if(iLocal_195[iVar0]==joaat("polmav")){
VEHICLE::SET_VEHICLE_LIVERY(iLocal_202[iVar0], 0);
}
if(uLocal_96 && !MISC::IS_BIT_SET(iLocal_152[iVar0], 0)){
func_346(iLocal_202[iVar0]);
}
if(MISC::IS_BIT_SET(iLocal_152[iVar0], 3)){
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_202[iVar0], 1);
}
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_202[iVar0], Local_173[iVar0 /*3*/], 0, 0, 1);
ENTITY::SET_ENTITY_QUATERNION(iLocal_202[iVar0], fLocal_116[iVar0], fLocal_117[iVar0], fLocal_118[iVar0], fLocal_119[iVar0]);
if(VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_195[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_195[iVar0])){
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_202[iVar0], 1084227584);
}
if(!MISC::IS_BIT_SET(iLocal_152[iVar0], 0)){
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_202[iVar0], 1, 1, 0);
if(CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7){
VEHICLE::SET_VEHICLE_LIGHTS(iLocal_202[iVar0], 3);
}
}
ENTITY::FREEZE_ENTITY_POSITION(iLocal_202[iVar0], 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_195[iVar0]);
iLocal_162=(iLocal_162 - 1);
iLocal_151[iVar0]++;
bLocal_104=true;
}}}
}
elseif(!ENTITY::IS_ENTITY_DEAD(iLocal_202[iVar0], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[iVar0], 0)){
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_202[iVar0], Local_173[iVar0 /*3*/], 0, 0, 1);
ENTITY::SET_ENTITY_QUATERNION(iLocal_202[iVar0], fLocal_116[iVar0], fLocal_117[iVar0], fLocal_118[iVar0], fLocal_119[iVar0]);
if(VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_195[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_195[iVar0])){
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_202[iVar0], 1084227584);
}
ENTITY::FREEZE_ENTITY_POSITION(iLocal_202[iVar0], 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_195[iVar0]);
iLocal_162=(iLocal_162 - 1);
iLocal_151[iVar0]++;
}}}elseif(iLocal_151[iVar0]==2){
VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_150[iVar0], &cLocal_183);
if(!MISC::IS_BIT_SET(iLocal_152[iVar0], 1)){
bVar8=false;
if(MISC::IS_BIT_SET(iLocal_152[iVar0], 0)){
STREAMING::REQUEST_MODEL(func_227());
bVar8=STREAMING::HAS_MODEL_LOADED(func_227());
iVar13=2;
}
elseif(!bLocal_100 && ((!MISC::IS_BIT_SET(iLocal_152[iVar0], 2) && uVar10) || (MISC::IS_BIT_SET(iLocal_152[iVar0], 2) && uVar11))){
bVar8=true;
iVar13=1;
}
else{
STREAMING::REQUEST_MODEL(func_230());
bVar8=STREAMING::HAS_MODEL_LOADED(func_230());
iVar13=0;
}
if(!ENTITY::IS_ENTITY_DEAD(iLocal_202[iVar0], 0)){
if(!bLocal_104 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_202[iVar0], -1, 0)){
if(bVar8){
if((vdist2(ENTITY::GET_ENTITY_COORDS(iLocal_202[iVar0], 1), Var5) < 10000f || bParam2) || iLocal_87){
func_344(&(iLocal_202[iVar0]), iVar13, 1);
MISC::SET_BIT(&(iLocal_152[iVar0]), true);
}}}
}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[iVar0], 0)){
if(fLocal_128 >=fLocal_120[iVar0]){
if(14 > iLocal_155){
fVar6=(fLocal_128 - fLocal_120[iVar0]);
fVar6=(fVar6 * fLocal_121[iVar0]);
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_150[iVar0], &cLocal_183)){
if(fVar6 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_150[iVar0], &cLocal_183)){
Var3={
ENTITY::GET_ENTITY_COORDS(iLocal_202[iVar0], 1) 
};
Var4={
VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_150[iVar0], fVar6, &cLocal_183) 
};
if(((!func_348(Var3, Var5, 5f, fLocal_139) && func_348(Var4, Var5, 5f, fLocal_139)) && !iLocal_87) && !bParam2){
if(!MISC::IS_BIT_SET(iLocal_152[iVar0], 1)){
func_344(&(iLocal_202[iVar0]), iVar13, 1);
}
iLocal_155++;
iLocal_151[iVar0]++;
}
elseif(((!bLocal_104 || MISC::IS_BIT_SET(iLocal_152[iVar0], 1)) || iLocal_87) || bParam2){
if(func_337(&(iLocal_202[iVar0]), iLocal_150[iVar0], fVar6, 1, 0, 0, bLocal_102, bLocal_101)){
VEHICLE::SET_PLAYBACK_SPEED(iLocal_202[iVar0], (fParam1 * fLocal_121[iVar0]));
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[iVar0], 0)){
if(MISC::IS_BIT_SET(iLocal_152[iVar0], 0)){
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_202[iVar0], 1, 1, 0);
VEHICLE::SET_VEHICLE_SIREN(iLocal_202[iVar0], 1);
VEHICLE::SET_VEHICLE_LIGHTS(iLocal_202[iVar0], 2);
if(!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_195[iVar0])){
AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_202[iVar0], 1);
}
}}
if(!MISC::IS_BIT_SET(iLocal_152[iVar0], 1)){
func_344(&(iLocal_202[iVar0]), iVar13, 1);
}
iLocal_155++;
iLocal_151[iVar0]++;
}
}
}
else{
if(!MISC::IS_BIT_SET(iLocal_152[iVar0], 1)){
func_344(&(iLocal_202[iVar0]), iVar13, 1);
}
iLocal_155++;
iLocal_151[iVar0]++;
}}}else{
if(!MISC::IS_BIT_SET(iLocal_152[iVar0], 1)){
func_344(&(iLocal_202[iVar0]), iVar13, 1);
}
iLocal_155++;
iLocal_151[iVar0]++;
}
}}else{
if(!MISC::IS_BIT_SET(iLocal_152[iVar0], 1)){
func_344(&(iLocal_202[iVar0]), iVar13, 1);
}
iLocal_155++;
iLocal_151[iVar0]++;
}}elseif(iLocal_151[iVar0]==3){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[iVar0], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_202[iVar0])){
iVar1=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_202[iVar0], -1, 0);
if(!PED::IS_PED_INJURED(iVar1)){
if(bVar9){
if(((!bLocal_77 && !iLocal_74) && !bLocal_93) && (((!bLocal_102 && !bLocal_101) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_202[iVar0])) || func_343(iLocal_202[iVar0]))){
if(ENTITY::DOES_ENTITY_EXIST(iVar2)){
bVar8=false;
if(bLocal_95){
bVar8=true;
}else{
fVar7=ENTITY::GET_ENTITY_SPEED(iVar2);
if(fVar7 < 1f){
bVar8=true;
}elseif(MISC::ABSF((fVar7 - ENTITY::GET_ENTITY_SPEED(iLocal_202[iVar0]))) > 15f){
bVar8=true;
}elseif(!func_342(iLocal_202[iVar0], iVar2, 45f)){
bVar8=true;
}elseif(func_340(iVar2, iLocal_202[iVar0], 0)){
bVar8=true;
}}
if(bVar8){
func_339(iLocal_202[iVar0]);
iLocal_151[iVar0]++;
}
}
}
else{
VEHICLE::SET_PLAYBACK_SPEED(iLocal_202[iVar0], (fParam1 * fLocal_121[iVar0]));
}}}else{
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_202[iVar0]);
}
}
else{
iLocal_151[iVar0]++;
}}else{
iLocal_151[iVar0]++;
}}elseif(iLocal_151[iVar0]==4){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[iVar0], 0)){
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_202[iVar0])){
iLocal_151[iVar0]++;
}
else{
iVar1=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_202[iVar0], -1, 0);
if(!PED::IS_PED_INJURED(iVar1)){
VEHICLE::SET_PLAYBACK_SPEED(iLocal_202[iVar0], (fParam1 * fLocal_121[iVar0]));
}else{
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_202[iVar0]);
}
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_150[iVar0], &cLocal_183)){
if(fLocal_128 > (fLocal_120[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_150[iVar0], &cLocal_183))){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_202[iVar0]);
}}else{
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_202[iVar0]);
}
}}else{
iLocal_151[iVar0]++;
}}elseif(iLocal_151[iVar0]==5){
if(!iLocal_202[iVar0]==iLocal_206){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[iVar0], 0)){
iVar1=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_202[iVar0], -1, 0);
if(!PED::IS_PED_INJURED(iVar1)){
iVar14=TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("script_task_perform_sequence"));
if(iVar14==7){
fVar7=ENTITY::GET_ENTITY_SPEED(iLocal_202[iVar0]);
if(fVar7 < 8f){
fVar7=8f;
}
if(fVar7 > 62.9f){
fVar7=62.9f;
}
TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar1, fVar7);
}}
}
if(!bLocal_85 && !bLocal_98){
if(iLocal_150[iVar0] > 0){
VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_150[iVar0], &cLocal_183);
}
}
if(!bLocal_75){
if(!bLocal_103){
func_223(iLocal_202[iVar0]);
}
}
elseif(ENTITY::DOES_ENTITY_EXIST(iLocal_202[iVar0])){
VEHICLE::DELETE_VEHICLE(&(iLocal_202[iVar0]));
}}
iLocal_155=(iLocal_155 - 1);
iLocal_151[iVar0]=99;
}
if(!bVar12){
iLocal_160=iVar0;
bVar12=true;
}}
iVar0++;
}}else{
func_222();
}}


void func_339(int iParam0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_224(iParam0);
VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
}}

int func_340(int iParam0, int iParam1, bool bParam2){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
struct<3> Var5;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
Var1={
ENTITY::GET_ENTITY_COORDS(iParam1, 1) 
};
if(bParam2){
Var5={
ENTITY::GET_ENTITY_VELOCITY(iParam1) 
};
Var4={
Var5 / FtoV(vmag(Var5)) 
};
}else{
Var2={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 5f, 0f) 
};
Var4={
Var2 - Var1 
};
}}
Var3={
Var1 - Var0 
};
Var3.f_2=0f;
Var4.f_2=0f;
if(func_341(Var3, Var4) < 0f){
return 1;
}
return 0;
}


float func_341(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

int func_342(int iParam0, int iParam1, float fParam2){
struct<3> Var0;
struct<3> Var1;
float fVar2;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
Var0={
ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0, 0) 
};
}else{
return 0;
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
Var1={
ENTITY::GET_ENTITY_SPEED_VECTOR(iParam1, 0) 
};
}else{
return 0;
}
Var0.f_2=0f;
Var1.f_2=0f;
fVar2=func_341(Var0, Var1);
if(fVar2 < 0f){
return 0;
}
fVar2=MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1);
if(!fVar2 < fParam2){
return 0;
}
return 1;
}

int func_343(var uParam0){
int iVar0;
int iVar1;
int iVar2;
if(bLocal_99){
iVar1=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(!ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
iVar2=ENTITY::GET_ENTITY_MODEL(iVar1);
if(iVar2==joaat("phantom")){
if(VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar1)){
if(VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iVar1, &iVar0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, uParam0)){
return 1;
}
}}}}}}
return 0;
}

int func_344(var uParam0, int iParam1, bool bParam2){
int iVar0;
if(!ENTITY::IS_ENTITY_DEAD(*uParam0, 0)){
if(VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1, 0)){
if(iParam1==2){
iVar0=PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, func_227(), -1, 0, 0);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_192);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_227());
}elseif(iParam1==1){
iVar0=PED::CREATE_RANDOM_PED_AS_DRIVER(*uParam0, 1);
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0))){
PED::GIVE_PED_HELMET(iVar0, 1, 4096, -1);
}}else{
iVar0=PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_230(), -1, 0, 0);
if(bLocal_105){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_230());
}}
if(bParam2){
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, 1);
PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, 0);
PED::SET_PED_CONFIG_FLAG(iVar0, 32, 0);
}
if(bLocal_106){
PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, 1);
}
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
func_345(iVar0);
bLocal_104=true;
return 1;
}else{
return 1;
}}
return 0;
}


void func_345(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
}}


void func_346(int iParam0){
int iVar0;
int iVar1;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
if(iLocal_197 >=-1 && iLocal_198 >=-1){
while (iVar0==iLocal_197 || iVar0==iLocal_198){
iVar0++;
}}elseif(iLocal_197 >=-1){
if(iVar0==iLocal_197){
iVar0++;
}}
iVar1=iVar0;
switch (iVar1){
case 0:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 0, 0);
break;
case 1:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 2, 2);
break;
case 2:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 4, 4);
break;
case 3:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 27, 27);
break;
case 4:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 7, 7);
break;
case 5:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 73, 73);
break;
case 6:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 68, 68);
break;
case 7:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 62, 62);
break;
case 8:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 132, 132);
break;
case 9:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 117, 0);
break;
case 10:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 52, 52);
break;
case 11:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 88, 88);
break;
case 12:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 1, 1);
break;
case 13:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 36, 36);
break;
case 14:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 95, 95);
break;
default:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 73, 73);
break;
}}


void func_347(struct<3> Param0, struct<3> Param1, float fParam2){
bool bVar0;
int iVar1;
bVar0=true;
if(!bLocal_86){
if(!func_348(Param0, Param1, fParam2, 200f)){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
iVar1=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(!ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
if(ENTITY::IS_ENTITY_AT_COORD(iVar1, Param0, fParam2, fParam2, fParam2, 0, 1, 0)){
bVar0=false;
}}}
if(bVar0){
MISC::CLEAR_AREA_OF_VEHICLES(Param0, fParam2, 0, 0, 0, 0, 0, 0, 0);
}}}}

int func_348(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3){
if(!CAM::IS_SCREEN_FADED_OUT()){
if(!bLocal_86){
if(!iLocal_73){
if(vmag2(Param1 - Param0) - fParam2) < (fParam3 * fParam3){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam2)){
return 1;
}}}}}
return 0;
}


float func_349(int iParam0){
var uVar0;
VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_183);
while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_183)){
wait(0);
}
uVar0=VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_183);
VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_183);
return uVar0;
}

int func_350(int iParam0){
if(((((((iParam0==joaat("police") || iParam0==joaat("police2")) || iParam0==joaat("police3")) || iParam0==joaat("policeb")) || iParam0==joaat("policet")) || iParam0==joaat("polmav")) || iParam0==joaat("pranger")) || iParam0==joaat("sheriff")){
return 1;
}
return 0;
}


void func_351(int iParam0){
int iVar0;
struct<3> Var1;
struct<3> Var2;
bool bVar3;
bool bVar4;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
bVar3=false;
bVar4=false;
iVar0=iLocal_159;
while (iVar0 < 15){
switch (iLocal_153[iVar0]){
case 0:
if(!iLocal_194[iVar0]==0){
if(ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_172[iVar0 /*3*/], fLocal_126, fLocal_126, fLocal_126, 0, 1, 0)){
iLocal_161++;
iLocal_153[iVar0]++;
}}else{
iLocal_153[iVar0]=99;
}
break;
case 1:
if(6 > iLocal_156){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_201[iVar0])){
STREAMING::REQUEST_MODEL(iLocal_194[iVar0]);
if(STREAMING::HAS_MODEL_LOADED(iLocal_194[iVar0])){
if((iLocal_73 || iLocal_87) || (!bLocal_104 && !func_348(Local_172[iVar0 /*3*/], Var1, 5f, fLocal_139))){
if(bLocal_83){
func_347(Local_172[iVar0 /*3*/], Var1, fLocal_132);
}
iLocal_201[iVar0]=VEHICLE::CREATE_VEHICLE(iLocal_194[iVar0], Local_172[iVar0 /*3*/], 0f, 0, 0, 0);
if(iLocal_194[iVar0]==joaat("polmav")){
VEHICLE::SET_VEHICLE_LIVERY(iLocal_201[iVar0], 0);
}
ENTITY::SET_ENTITY_QUATERNION(iLocal_201[iVar0], fLocal_122[iVar0], fLocal_123[iVar0], fLocal_124[iVar0], fLocal_125[iVar0]);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_194[iVar0]);
if(VEHICLE::IS_VEHICLE_MODEL(iLocal_201[iVar0], func_228())){
VEHICLE::SET_VEHICLE_SIREN(iLocal_201[iVar0], 1);
if(!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_194[iVar0])){
AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_201[iVar0], 1);
}
}
if(VEHICLE::IS_VEHICLE_MODEL(iLocal_201[iVar0], func_229())){
VEHICLE::SET_VEHICLE_COLOURS(iLocal_201[iVar0], 0, 0);
}
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_201[iVar0], 1);
iLocal_161=(iLocal_161 - 1);
iLocal_156++;
iLocal_153[iVar0]++;
bLocal_104=true;
}}
}
else{
iLocal_161=(iLocal_161 - 1);
iLocal_156++;
iLocal_153[iVar0]++;
}}
break;
case 2:
if(!bVar3){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_201[iVar0], 0)){
Var2={
ENTITY::GET_ENTITY_COORDS(iLocal_201[iVar0], 1) 
};
}
if(fLocal_140==0f || vdist2(Var1, Var2) < (fLocal_140 * fLocal_140)){
if(!func_340(iLocal_201[iVar0], iParam0, 0)){
if(!bLocal_75){
func_223(iLocal_201[iVar0]);
}else{
VEHICLE::DELETE_VEHICLE(&(iLocal_201[iVar0]));
}
iLocal_156=(iLocal_156 - 1);
iLocal_153[iVar0]=99;
bVar3=true;
}
}}
break;
}
if(iLocal_153[iVar0] !=99){
if(!bVar4){
iLocal_159=iVar0;
bVar4=true;
}}
iVar0++;
}}else{
func_225();
}}


void func_352(int iParam0, float fParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
struct<3> Var6;
struct<3> Var7;
struct<3> Var8;
float fVar9;
float fVar10;
bool bVar11;
bool bVar12;
var uVar13;
var uVar14;
int iVar15;
int iVar16;
bool bVar17;
bool bVar18;
struct<3> Var19;
iVar5=0;
bVar12=PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
uVar13=PED::CAN_CREATE_RANDOM_DRIVER();
uVar14=PED::CAN_CREATE_RANDOM_BIKE_RIDER();
if(bVar12){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar5=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
}
Var8={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
iVar1=0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0)){
fLocal_128=VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
}
iVar16=-1;
bVar17=false;
bVar18=false;
iVar0=iLocal_158;
while (iVar0 < 175 && !bVar17){
if(iLocal_148[iVar0] !=99){
if(iLocal_148[iVar0]==0){
if(iLocal_147[iVar0] > 0 && iLocal_193[iVar0] !=0){
if(!iLocal_73){
if(fLocal_128 < (fLocal_111[iVar0] + 20000f)){
if(fLocal_128 >=(fLocal_111[iVar0] - (7000f * fParam1))){
if(func_350(iLocal_193[iVar0])){
MISC::SET_BIT(&(iLocal_149[iVar0]), false);
}
elseif(VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_193[iVar0])){
MISC::SET_BIT(&(iLocal_149[iVar0]), 2);
}
MISC::CLEAR_BIT(&(iLocal_149[iVar0]), true);
iLocal_163++;
iLocal_148[iVar0]++;
}elseif(iVar1 > 2){
bVar17=true;
}else{
iVar1++;
}}else{
func_354(iVar0, 1090519040);
}
}
else{
fVar9=(fLocal_128 - fLocal_111[iVar0]);
if(fVar9 >=0f){
if(fVar9 < func_349(iLocal_147[iVar0])){
if(func_350(iLocal_193[iVar0])){
MISC::SET_BIT(&(iLocal_149[iVar0]), false);
}
elseif(VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_193[iVar0])){
MISC::SET_BIT(&(iLocal_149[iVar0]), 2);
}
MISC::CLEAR_BIT(&(iLocal_149[iVar0]), true);
iLocal_163++;
iLocal_148[iVar0]++;
}else{
func_354(iVar0, 1090519040);
}}
}}else{
func_354(iVar0, 1090519040);
}}elseif(iLocal_148[iVar0]==1){
VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_147[iVar0], &cLocal_183);
bVar11=false;
if(MISC::IS_BIT_SET(iLocal_149[iVar0], 0)){
STREAMING::REQUEST_MODEL(func_227());
if(STREAMING::HAS_MODEL_LOADED(func_227())){
bVar11=true;
}}elseif(!bLocal_100 && ((!MISC::IS_BIT_SET(iLocal_149[iVar0], 2) && uVar13) || (MISC::IS_BIT_SET(iLocal_149[iVar0], 2) && uVar14))){
bVar11=true;
}else{
STREAMING::REQUEST_MODEL(func_230());
bVar11=STREAMING::HAS_MODEL_LOADED(func_230());
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_199[iVar0])){
STREAMING::REQUEST_MODEL(iLocal_193[iVar0]);
if((STREAMING::HAS_MODEL_LOADED(iLocal_193[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_147[iVar0], &cLocal_183)) && bVar11){
if(fLocal_128 >=(fLocal_111[iVar0] - (fLocal_141 * fParam1))){
if((iLocal_87 || iParam2) || (!bLocal_104 && !func_348(Local_171[iVar0 /*3*/], Var8, 5f, fLocal_139))){
if(bLocal_83){
func_347(Local_171[iVar0 /*3*/], Var8, fLocal_132);
}
iLocal_199[iVar0]=VEHICLE::CREATE_VEHICLE(iLocal_193[iVar0], Local_171[iVar0 /*3*/], 0f, 0, 0, 0);
if(iLocal_193[iVar0]==joaat("polmav")){
VEHICLE::SET_VEHICLE_LIVERY(iLocal_199[iVar0], 0);
}
if(uLocal_96 && !MISC::IS_BIT_SET(iLocal_149[iVar0], 0)){
func_346(iLocal_199[iVar0]);
}
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_199[iVar0], Local_171[iVar0 /*3*/], 0, 0, 1);
ENTITY::SET_ENTITY_QUATERNION(iLocal_199[iVar0], fLocal_107[iVar0], fLocal_108[iVar0], fLocal_109[iVar0], fLocal_110[iVar0]);
if(VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_193[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_193[iVar0])){
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_199[iVar0], 1084227584);
}
if(MISC::IS_BIT_SET(iLocal_149[iVar0], 3)){
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_199[iVar0], 1);
}
if(!MISC::IS_BIT_SET(iLocal_149[iVar0], 0)){
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_199[iVar0], 1, 1, 0);
if(CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7){
VEHICLE::SET_VEHICLE_LIGHTS(iLocal_199[iVar0], 3);
}
}
ENTITY::FREEZE_ENTITY_POSITION(iLocal_199[iVar0], 1);
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_199[iVar0], 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_193[iVar0]);
iLocal_163=(iLocal_163 - 1);
iLocal_148[iVar0]++;
bLocal_104=true;
}elseif(fLocal_128 > fLocal_111[iVar0]){
iLocal_163=(iLocal_163 - 1);
func_354(iVar0, 1090519040);
}}
}}}elseif(iLocal_148[iVar0]==2){
bVar11=false;
if(((iVar3 < 8 && (iVar0 > iLocal_169 || iLocal_169==0)) || iLocal_87) || iParam2){
if(!MISC::IS_BIT_SET(iLocal_149[iVar0], 1)){
if(MISC::IS_BIT_SET(iLocal_149[iVar0], 0)){
STREAMING::REQUEST_MODEL(func_227());
bVar11=STREAMING::HAS_MODEL_LOADED(func_227());
iVar15=2;
}elseif(!bLocal_100 && ((!MISC::IS_BIT_SET(iLocal_149[iVar0], 2) && uVar13) || (MISC::IS_BIT_SET(iLocal_149[iVar0], 2) && uVar14))){
bVar11=true;
iVar15=1;
}else{
STREAMING::REQUEST_MODEL(func_230());
bVar11=STREAMING::HAS_MODEL_LOADED(func_230());
iVar15=0;
}
if(!ENTITY::IS_ENTITY_DEAD(iLocal_199[iVar0], 0)){
if(!bLocal_104 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_199[iVar0], -1, 0)){
if(bVar11){
if((vdist2(ENTITY::GET_ENTITY_COORDS(iLocal_199[iVar0], 1), Var8) < 10000f || iParam2) || iLocal_87){
func_344(&(iLocal_199[iVar0]), iVar15, 0);
MISC::SET_BIT(&(iLocal_149[iVar0]), true);
}
}}}
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[iVar0], 0)){
VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_147[iVar0], &cLocal_183);
if(fLocal_128 >=fLocal_111[iVar0]){
if(12 > iLocal_154){
fVar9=(fLocal_128 - fLocal_111[iVar0]);
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_147[iVar0], &cLocal_183)){
if(fVar9 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_147[iVar0], &cLocal_183)){
Var6={
ENTITY::GET_ENTITY_COORDS(iLocal_199[iVar0], 1) 
};
Var7={
VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_147[iVar0], fVar9, &cLocal_183) 
};
if(!func_348(Var6, Var8, 5f, fLocal_139) && func_348(Var7, Var8, 5f, fLocal_139)){
if(!MISC::IS_BIT_SET(iLocal_149[iVar0], 1)){
func_344(&(iLocal_199[iVar0]), iVar15, 0);
}
func_354(iVar0, 1090519040);
}elseif(((!bLocal_104 || MISC::IS_BIT_SET(iLocal_149[iVar0], 1)) || iLocal_87) || iParam2){
if(func_337(&(iLocal_199[iVar0]), iLocal_147[iVar0], fVar9, 1, 0, 0, 1, bLocal_101)){
if(!MISC::IS_BIT_SET(iLocal_149[iVar0], 1)){
func_344(&(iLocal_199[iVar0]), iVar15, 0);
}
ENTITY::SET_ENTITY_COLLISION(iLocal_199[iVar0], 1, 0);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_199[iVar0], fParam1);
iLocal_154++;
iLocal_148[iVar0]++;
}}
}
else{
if(!MISC::IS_BIT_SET(iLocal_149[iVar0], 1)){
func_344(&(iLocal_199[iVar0]), iVar15, 0);
}
func_354(iVar0, 1090519040);
}
}
elseif(fVar9 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_147[iVar0], &cLocal_183)){
if(!MISC::IS_BIT_SET(iLocal_149[iVar0], 1)){
func_344(&(iLocal_199[iVar0]), iVar15, 0);
}
func_354(iVar0, 1090519040);
}}else{
if(!MISC::IS_BIT_SET(iLocal_149[iVar0], 1)){
func_344(&(iLocal_199[iVar0]), iVar15, 0);
}
func_354(iVar0, 1090519040);
}}elseif(iLocal_84 && !bLocal_92){
if(!MISC::IS_BIT_SET(iLocal_149[iVar0], 1)){
func_344(&(iLocal_199[iVar0]), iVar15, 0);
}
func_354(iVar0, 1090519040);
}
}
else{
if(!MISC::IS_BIT_SET(iLocal_149[iVar0], 1)){
func_344(&(iLocal_199[iVar0]), iVar15, 0);
}
func_354(iVar0, 1090519040);
}
iVar3++;
iLocal_169=iVar0;
}}elseif(iLocal_148[iVar0]==3){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[iVar0], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_199[iVar0])){
iVar4=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_199[iVar0], -1, 0);
if(!PED::IS_PED_INJURED(iVar4)){
if(bVar12){
bVar18=false;
if(!bLocal_82){
if((!bLocal_77 && !iLocal_74) && func_343(iLocal_199[iVar0])){
if(iVar2 < 3 && (iVar0 > iLocal_168 || iLocal_168==0)){
if(!ENTITY::IS_ENTITY_DEAD(iVar5, 0)){
bVar11=false;
if(!func_353(iLocal_199[iVar0], iVar5) || func_340(iVar5, iLocal_199[iVar0], 0)){
bVar18=true;
}}
iLocal_168=iVar0;
iVar2++;
}
}
elseif(((!bLocal_97 && !MISC::IS_BIT_SET(iLocal_149[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_168 || iLocal_168==0)){
Var19={
ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_199[iVar0], 1)) 
};
if(Var19.f_1 < 0f){
if(MISC::ABSF(Var19.f_1) > MISC::ABSF(Var19.f_0)){
bVar18=true;
}}
iVar2++;
iLocal_168=iVar0;
}
}
if(bVar18){
func_339(iLocal_199[iVar0]);
iLocal_148[iVar0]++;
}
else{
VEHICLE::SET_PLAYBACK_SPEED(iLocal_199[iVar0], fParam1);
}}}else{
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_199[iVar0]);
}
}
else{
iLocal_148[iVar0]++;
}}else{
iLocal_148[iVar0]++;
}}elseif(iLocal_148[iVar0]==4){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[iVar0], 0)){
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_199[iVar0])){
iLocal_148[iVar0]++;
}
else{
iVar4=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_199[iVar0], -1, 0);
if(!PED::IS_PED_INJURED(iVar4)){
VEHICLE::SET_PLAYBACK_SPEED(iLocal_199[iVar0], fParam1);
}else{
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_199[iVar0]);
}
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_147[iVar0], &cLocal_183)){
if(fLocal_128 > (fLocal_111[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_147[iVar0], &cLocal_183))){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_199[iVar0]);
}}else{
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_199[iVar0]);
}
}}else{
iLocal_148[iVar0]++;
}}elseif(iLocal_148[iVar0]==5){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_199[iVar0], 0)){
fVar10=ENTITY::GET_ENTITY_SPEED(iLocal_199[iVar0]);
}
iLocal_154=(iLocal_154 - 1);
func_354(iVar0, fVar10);
}
if(iVar16==-1){
iVar16=iVar0;
}}
iVar0++;
}
if(iVar16 !=-1){
iLocal_158=iVar16;
}
if(iVar2 < 3){
iLocal_168=0;
}
if(iVar3 < 8){
iLocal_169=0;
}}else{
func_226();
}}

int func_353(int iParam0, int iParam1){
struct<3> Var0;
struct<3> Var1;
float fVar2;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
Var0={
ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0, 0) 
};
}else{
return 0;
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
Var1={
ENTITY::GET_ENTITY_SPEED_VECTOR(iParam1, 0) 
};
}else{
return 0;
}
Var0.f_2=0f;
Var1.f_2=0f;
fVar2=func_341(Var0, Var1);
if(fVar2 < 0f){
return 0;
}
return 1;
}


void func_354(int iParam0, float fParam1){
int iVar0;
if(!iLocal_193[iParam0]==0){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_193[iParam0]);
}
if(!ENTITY::IS_ENTITY_DEAD(iLocal_199[iParam0], 0)){
ENTITY::SET_ENTITY_COLLISION(iLocal_199[iParam0], 1, 0);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_199[iParam0], 0);
iVar0=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_199[iParam0], -1, 0);
if(!PED::IS_PED_INJURED(iVar0) && iVar0 !=PLAYER::PLAYER_PED_ID()){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 0);
if(fParam1 < 8f){
fParam1=8f;
}
if(fParam1 > 62.9f){
fParam1=62.9f;
}
TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_199[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
if(bLocal_106){
PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
}
PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
}}
if(!bLocal_75){
if(!bLocal_103){
func_345(iVar0);
func_223(iLocal_199[iParam0]);
}}else{
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
PED::DELETE_PED(&iVar0);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_199[iParam0])){
VEHICLE::DELETE_VEHICLE(&(iLocal_199[iParam0]));
}}
if(!bLocal_85 && !bLocal_98){
if(iLocal_147[iParam0] > 0){
VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_147[iParam0], &cLocal_183);
}}
iLocal_148[iParam0]=99;
}


void func_355(int iParam0, float fParam1, float fParam2){
var uVar0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
float fVar5;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
Var4={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0)){
uVar0=VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
Var1={
VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fParam1) 
};
Var2={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
Var3={
Var2 - Var1 
};
fVar5=vmag(Var3);
if(fVar5 > fParam2){
fVar5=fParam2;
}
func_347(Var1, Var4, fVar5);
}}}


void func_356(int iParam0, float fParam1){
if(!bLocal_86){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(vdist2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > (fParam1 * fParam1)){
STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
}else{
STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
}}}}}


void func_357(int iParam0, float fParam1){
if(!bLocal_86){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(vdist2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > (fParam1 * fParam1)){
VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
}else{
VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
}}}}}


void func_358(int iParam0, float fParam1){
var uVar0;
float fVar1;
float fVar2;
float fVar3;
bool bVar4;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0)){
fVar1=(fLocal_142 + 2000f);
fVar2=(fLocal_143 + 2000f);
bVar4=false;
if(fVar1 < (fParam1 + 25000f)){
uVar0=VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
if(fVar1 <=VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uVar0)){
if(iLocal_164==0){
Local_179={
VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_142) 
};
iLocal_164++;
}elseif(iLocal_164==1){
Local_180={
VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) 
};
iLocal_164++;
}elseif(!bLocal_104){
if(Local_179.f_0 > Local_180.f_0){
fVar3=Local_179.f_0;
Local_179.f_0=Local_180.f_0;
Local_180.f_0=fVar3;
}
if(Local_179.f_1 > Local_180.f_1){
fVar3=Local_179.f_1;
Local_179.f_1=Local_180.f_1;
Local_180.f_1=fVar3;
}
if(Local_179.f_2 > Local_180.f_2){
fVar3=Local_179.f_2;
Local_179.f_2=Local_180.f_2;
Local_180.f_2=fVar3;
}
Local_179={
Local_179 - Vector(fLocal_146, fLocal_146, fLocal_146) 
};
Local_180={
Local_180 + Vector(fLocal_146, fLocal_146, fLocal_146) 
};
PATHFIND::SET_ROADS_IN_AREA(Local_179, Local_180, 0, 0);
fLocal_142=fVar1;
iLocal_164=0;
}}}
if(fVar2 < (fParam1 - 8000f)){
iVar0=VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
if(iLocal_167==0){
Local_181={
VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_143) 
};
iLocal_167++;
}elseif(iLocal_167==1){
Local_182={
VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) 
};
iLocal_167++;
}elseif(!bLocal_104 && !bVar4){
if(Local_181.f_0 > Local_182.f_0){
fVar3=Local_181.f_0;
Local_181.f_0=Local_182.f_0;
Local_182.f_0=fVar3;
}
if(Local_181.f_1 > Local_182.f_1){
fVar3=Local_181.f_1;
Local_181.f_1=Local_182.f_1;
Local_182.f_1=fVar3;
}
if(Local_181.f_2 > Local_182.f_2){
fVar3=Local_181.f_2;
Local_181.f_2=Local_182.f_2;
Local_182.f_2=fVar3;
}
Local_181={
Local_181 - Vector(fLocal_146, fLocal_146, fLocal_146) 
};
Local_182={
Local_182 + Vector(fLocal_146, fLocal_146, fLocal_146) 
};
PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_181, Local_182, 1);
fLocal_143=fVar2;
iLocal_167=0;
}}}}

int func_359(int iParam0, int iParam1){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
float fVar5;
if(!PED::IS_PED_INJURED(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam1, 0)){
if(PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0)){
return 0;
}}}
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
Var1={
ENTITY::GET_ENTITY_COORDS(iParam1, 1) 
};
Var2={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 5f, 0f) 
};
Var4={
Var2 - Var1 
};
}
Var3={
Var1 - Var0 
};
Var3.f_2=0f;
Var4.f_2=0f;
fVar5=func_341(Var3, Var4);
if(fVar5 < 0f){
return 1;
}
return 0;
}


void func_360(){
VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
VEHICLE::SET_GARBAGE_TRUCKS(0);
VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(0);
VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
STREAMING::SET_PED_POPULATION_BUDGET(3);
}


void func_361(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
int iVar9;
int iVar10;
if(iLocal_89==0){
if(*fParam2 < fParam3){
*fParam2=fParam3;
iLocal_89=1;
}}
if(fParam8 < 0f){
fParam8=fLocal_137;
}
fVar0=(fParam3 * fParam7);
if(!fVar0 > fParam3){
fVar0=(fParam3 + 0.1f);
}
fVar5=(fParam3 * fParam9);
fVar6=(((fParam6 - fParam5) * 0.4f) + fParam5);
fVar2=func_364(iParam0, iParam1);
if(fVar2 < 0f){
fVar2=(fVar2 * -1f);
}
fVar3=fVar2;
if(fVar3 < fParam4){
fVar3=fParam4;
}
if(fVar3 > fVar6){
fVar3=fVar6;
}
fVar4=fParam3;
if(!ENTITY::IS_ENTITY_DEAD(iParam1, 0)){
if(func_359(iParam1, iParam0)){
if(PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0)){
fVar4=fVar0;
}elseif(fVar2 < 50f){
fVar4=fParam3;
}else{
fVar4=fVar0;
}}elseif(fVar2 < fParam5){
if(func_363(iParam0, iParam1) < fParam5){
fVar1=func_362(iParam0, iParam1);
fVar1=(fVar1 + -15f);
if(fVar1 < 0f){
fVar1=0f;
}
if(fVar1 > 75f){
fVar1=75f;
}
fVar7=((75f - fVar1) / 75f);
}else{
fVar7=1f;
}
fVar4=((((((fParam5 - fParam4) - (fVar3 - fParam4)) / (fParam5 - fParam4)) * (fVar0 - fParam3)) * fVar7) + fParam3);
}elseif(fVar2 > fParam6){
fVar4=fVar5;
iLocal_90=1;
}elseif(iLocal_90){
if(fVar2 < fVar6){
fVar4=fParam3;
iLocal_90=0;
}else{
fVar4=fVar5;
}}else{
fVar4=fParam3;
}}
fVar1=(fVar4 - *fParam2);
if(fVar1 > 0f){
fVar1=MISC::GET_FRAME_TIME();
fVar8=((fLocal_144 * fParam3) * fVar1);
fVar1=(fVar4 - *fParam2);
if(fVar1 > fVar8){
fVar1=fVar8;
}
*fParam2=(*fParam2 + fVar1);
}else{
fVar1=MISC::GET_FRAME_TIME();
fVar8=((fLocal_145 * fParam3) * fVar1);
fVar1=(fVar4 - *fParam2);
if(fVar1 < (fVar8 * -1f)){
fVar1=(fVar8 * -1f);
}
*fParam2=(*fParam2 + fVar1);
}
if(bParam10){
if(!PED::IS_PED_INJURED(iParam1)){
if(PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0)){
iVar9=PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
if(!ENTITY::IS_ENTITY_DEAD(iVar9, 0)){
iVar10=ENTITY::GET_ENTITY_MODEL(iVar9);
if(VEHICLE::IS_THIS_MODEL_A_CAR(iVar10) || VEHICLE::IS_THIS_MODEL_A_BIKE(iVar10)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar9, 0)){
fVar1=fVar4;
if(fVar1 < fParam3){
fVar1=fParam3;
}
fVar1=(fVar1 - fParam3);
fVar1=(fVar1 / (fVar0 - fParam3));
fVar1=(fVar1 * fParam8);
fVar1=(fVar1 * (fLocal_135 - fLocal_136));
fVar1=(fVar1 + fLocal_136);
fLocal_134=fVar1;
if(fLocal_134 < fLocal_136){
fLocal_134=fLocal_136;
}
if(fLocal_134 > fLocal_135){
fLocal_134=fLocal_135;
}
PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), fLocal_134);
}}}}}}}


var func__362(int iParam0, int iParam1){
struct<2> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
var uVar4;
int iVar5;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
Var0.f_0=ENTITY::GET_ENTITY_FORWARD_X(iParam0);
Var0.f_1=ENTITY::GET_ENTITY_FORWARD_Y(iParam0);
}
if(!ENTITY::IS_ENTITY_DEAD(iParam1, 0)){
Var1={
ENTITY::GET_ENTITY_COORDS(iParam1, 1) 
};
if(PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0)){
iVar5=PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
Var3.f_0=ENTITY::GET_ENTITY_FORWARD_X(iVar5);
Var3.f_1=ENTITY::GET_ENTITY_FORWARD_Y(iVar5);
}else{
Var2={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 5f, 0f) 
};
Var3={
Var2 - Var1 
};
}}
uVar4=MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1);
return uVar4;
}


float func_363(int iParam0, int iParam1){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
float fVar3;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
}
if(!ENTITY::IS_ENTITY_DEAD(iParam1, 0)){
Var1={
ENTITY::GET_ENTITY_COORDS(iParam1, 1) 
};
}
Var2={
Var1 - Var0 
};
Var2.f_2=0f;
fVar3=vmag(Var2);
return fVar3;
}


float func_364(int iParam0, int iParam1){
struct<2> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
float fVar4;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
Var0.f_0=ENTITY::GET_ENTITY_FORWARD_X(iParam0);
Var0.f_1=ENTITY::GET_ENTITY_FORWARD_Y(iParam0);
Var2={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
}
if(!ENTITY::IS_ENTITY_DEAD(iParam1, 0)){
Var3={
ENTITY::GET_ENTITY_COORDS(iParam1, 1) 
};
}
Var1={
Var3 - Var2 
};
fVar4=MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var1.f_0, Var1.f_1, Var0.f_0, Var0.f_1);
fVar4=(fVar4 + -90f);
if(fVar4 < 0f){
fVar4=(fVar4 * -1f);
}
Var1.f_2=0f;
return (vmag(Var1) * sin(fVar4));
}

int func_365(){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_276)){
iLocal_394=1;
}else{
iLocal_394=0;
}}else{
iLocal_394=1;
}}else{
iLocal_394=1;
}
iLocal_230=0;
while (iLocal_230 <=24){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[iLocal_230])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[iLocal_230], 0)){
if(!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_202[iLocal_230])){
iLocal_395[iLocal_230]=1;
}else{
iLocal_395[iLocal_230]=0;
}}else{
iLocal_395[iLocal_230]=1;
}}else{
iLocal_395[iLocal_230]=1;
}
iLocal_230++;
}
if(((((((((((((((((((((((((iLocal_394==1 && iLocal_395[0]==1) && iLocal_395[1]==1) && iLocal_395[2]==1) && iLocal_395[3]==1) && iLocal_395[4]==1) && iLocal_395[5]==1) && iLocal_395[6]==1) && iLocal_395[7]==1) && iLocal_395[8]==1) && iLocal_395[9]==1) && iLocal_395[10]==1) && iLocal_395[11]==1) && iLocal_395[12]==1) && iLocal_395[13]==1) && iLocal_395[14]==1) && iLocal_395[15]==1) && iLocal_395[16]==1) && iLocal_395[17]==1) && iLocal_395[18]==1) && iLocal_395[19]==1) && iLocal_395[20]==1) && iLocal_395[21]==1) && iLocal_395[22]==1) && iLocal_395[23]==1) && iLocal_395[24]==1){
return 1;
}
return 0;
}


void func_366(){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[4])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[4], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_202[4])){
Local_307={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
Var1={
ENTITY::GET_ENTITY_COORDS(iLocal_202[4], 1) 
};
if(Local_307.f_0 < (Var1.f_0 - 10f) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_202[4])){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_202[4]);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_202[4]));
}}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[3])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[3], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_202[3])){
Local_307={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
Var0={
ENTITY::GET_ENTITY_COORDS(iLocal_202[3], 1) 
};
if(Local_307.f_0 < (Var0.f_0 - 10f) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_202[3])){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_202[3]);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_202[3]));
}}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[21])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[21], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_202[21])){
Local_307={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
Var2={
ENTITY::GET_ENTITY_COORDS(iLocal_202[21], 1) 
};
if(Local_307.f_0 < (Var2.f_0 - 10f) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_202[21])){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_202[21]);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_202[21]));
}}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[0])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[0], 0)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 50000f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_202[0])){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_202[0])){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_202[0]);
}
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_202[0]));
}}}}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_280)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_280, 0)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 90000f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_280)){
GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_665[0], 0);
GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_665[1], 0);
GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_665[2], 0);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_263[0])){
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_263[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_263[1])){
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_263[1]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_263[2])){
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_263[2]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_263[3])){
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_263[3]));
}
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_280);
STREAMING::REMOVE_ANIM_DICT("missheist_agency3aig_lift_waitped_a");
}}}}}}}


void func_367(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4){
int iVar0;
float fVar1;
float fVar2;
fVar2=(fParam2 * fParam3);
if(HUD::DOES_BLIP_EXIST(uParam0)){
if((ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(ENTITY::IS_ENTITY_A_VEHICLE(iParam1)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1), 0)){
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
if(fVar1 >=fVar2 || iParam4){
iVar0=round((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
if(iVar0 <=0){
iVar0=0;
}
if(iVar0 >=255){
iVar0=255;
}
HUD::SET_BLIP_FLASHES(uParam0, 1);
HUD::SET_BLIP_ALPHA(uParam0, (255 - iVar0));
}else{
HUD::SET_BLIP_FLASHES(uParam0, 0);
HUD::SET_BLIP_ALPHA(uParam0, 255);
}}}elseif(ENTITY::IS_ENTITY_A_PED(iParam1)){
if(!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1))){
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
if(fVar1 >=fVar2 || iParam4){
iVar0=round(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
if(iVar0 <=0){
iVar0=0;
}
if(iVar0 >=255){
iVar0=255;
}
HUD::SET_BLIP_FLASHES(uParam0, 1);
HUD::SET_BLIP_ALPHA(uParam0, (255 - iVar0));
}else{
HUD::SET_BLIP_FLASHES(uParam0, 0);
HUD::SET_BLIP_ALPHA(uParam0, 255);
}}}}}}


void func_368(){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[2])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[2], 0)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 50530f){
if(!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_202[2])){
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_202[2], 1, 1, 0);
}
}
elseif(VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_202[2])){
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_202[2], 0, 0, 0);
}}}}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[5])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[5], 0)){
if(!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_202[5])){
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_202[5], 1, 1, 0);
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_278[0])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278[0], 0)){
if(!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_278[0])){
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_278[0], 1, 1, 0);
}
if(VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_278[0], -1, 0)){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_274[0])){
STREAMING::REQUEST_MODEL(joaat("s_m_m_gentransport"));
if(STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_gentransport"))){
iLocal_274[0]=PED::CREATE_PED_INSIDE_VEHICLE(iLocal_278[0], 26, joaat("s_m_m_gentransport"), -1, 1, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_gentransport"));
}}}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_278[1])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278[1], 0)){
if(!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_278[1])){
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_278[1], 1, 1, 0);
}
if(VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_278[1], -1, 0)){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_274[1])){
STREAMING::REQUEST_MODEL(joaat("s_m_m_gentransport"));
if(STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_gentransport"))){
iLocal_274[1]=PED::CREATE_PED_INSIDE_VEHICLE(iLocal_278[1], 26, joaat("s_m_m_gentransport"), -1, 1, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_gentransport"));
}}}}}}


void func_369(){
if(iLocal_221==0){
AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Cop_Cars", 0, -1);
AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Plane_Explosion", 0, -1);
AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Tanker_Explosion", 0, -1);
AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\TV_Monitors", 0, -1);
if(iLocal_383==0){
iLocal_253=AUDIO::GET_SOUND_ID();
iLocal_383=1;
}
if(iLocal_384==0){
iLocal_254=AUDIO::GET_SOUND_ID();
iLocal_384=1;
}
if(iLocal_385==0){
iLocal_255=AUDIO::GET_SOUND_ID();
iLocal_385=1;
}
if(iLocal_386==0){
iLocal_256=AUDIO::GET_SOUND_ID();
iLocal_386=1;
}
if(iLocal_387==0){
iLocal_257=AUDIO::GET_SOUND_ID();
iLocal_387=1;
}
if(iLocal_382==0){
iLocal_258=AUDIO::GET_SOUND_ID();
iLocal_382=1;
}
if(iLocal_388==0){
iLocal_259=AUDIO::GET_SOUND_ID();
iLocal_388=1;
}
if(iLocal_341==1){
func_127();
iLocal_341=0;
}
if(!CAM::DOES_CAM_EXIST(uLocal_299)){
uLocal_299=CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
CAM::SET_CAM_FOV(uLocal_299, 40f);
}
iLocal_339=0;
iLocal_333=0;
iLocal_345=0;
iLocal_329=0;
iLocal_324=0;
iLocal_330=0;
iLocal_323=0;
iLocal_359=0;
iLocal_361[0]=0;
iLocal_362[0]=0;
iLocal_361[1]=0;
iLocal_362[1]=0;
iLocal_361[2]=0;
iLocal_363=0;
iLocal_364=0;
iLocal_327=0;
iLocal_328=0;
iLocal_326=0;
iLocal_368=0;
iLocal_371=0;
iLocal_372=0;
iLocal_373=0;
iLocal_375=0;
iLocal_374=0;
iLocal_376=0;
iLocal_377=0;
iLocal_378=0;
iLocal_379=0;
iLocal_380=0;
iLocal_381=0;
iLocal_389=0;
iLocal_390=0;
iLocal_392=0;
iLocal_393=0;
iLocal_400=0;
iLocal_401=0;
iLocal_465=0;
iLocal_347=1;
iLocal_348=1;
iLocal_356=1;
iLocal_406=0;
iLocal_407=0;
iLocal_413=0;
iLocal_415=0;
iLocal_422=0;
iLocal_423=0;
iLocal_425=0;
iLocal_427[0]=0;
iLocal_427[1]=0;
iLocal_428[0]=0;
iLocal_428[1]=0;
iLocal_429=0;
iLocal_430=0;
iLocal_432=0;
iLocal_437=0;
iLocal_438=0;
iLocal_439=0;
iLocal_460=0;
iLocal_461=0;
iLocal_466=0;
iLocal_225=0;
iLocal_238=0;
iLocal_229=0;
while (iLocal_229 <=2){
iLocal_463[iLocal_229]=0;
iLocal_464[iLocal_229]=0;
iLocal_229++;
}
iLocal_229=0;
while (iLocal_229 <=2){
iLocal_485[iLocal_229]=0;
iLocal_229++;
}
iLocal_229=0;
while (iLocal_229 <=6){
iLocal_433[iLocal_229]=0;
iLocal_434[iLocal_229]=0;
iLocal_229++;
}
STREAMING::REQUEST_PTFX_ASSET();
iLocal_87=1;
bLocal_93=true;
func_306();
uLocal_224=HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID();
MISC::CLEAR_AREA(-823.71f, -2548.2f, 13.75f, 20f, 1, 0, 0, 0);
PED::SET_PED_NON_CREATION_AREA(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f);
PATHFIND::SET_PED_PATHS_IN_AREA(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, 0, 0);
PATHFIND::SET_ROADS_IN_AREA(-482f, -2118f, 6f, -1072f, -2724f, 17f, 0, 1);
func_133(2, 1);
func_371("BB_Chase", 45, 0, 1);
PLAYER::SET_MAX_WANTED_LEVEL(3);
func_17(&uLocal_488, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
if(CAM::IS_SCREEN_FADED_OUT()){
if(!func_24()){
STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
}
func_21(iLocal_277, -1, 1);
}
iLocal_222=0;
iLocal_221=1;
}
if(iLocal_221==1){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
func_370();
iLocal_221=2;
}
if(iLocal_221==2){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_285)){
iLocal_285=VEHICLE::CREATE_VEHICLE(joaat("blista"), 0f, 0f, 1f, 0f, 1, 1, 0);
}
while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(45, "BB_Chase")){
wait(0);
}
if(CAM::IS_SCREEN_FADED_OUT()){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0)){
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_277, 1, 1, 0);
VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_277, 30f);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_276, 45, "BB_Chase", 1);
settimerb(0);
func_289();
MISC::SET_INSTANCE_PRIORITY_HINT(2);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_277)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_277);
}}
if(!CAM::IS_SCREEN_FADED_IN()){
CAM::DO_SCREEN_FADE_IN(800);
}
iLocal_221=0;
iLocal_220=4;
}}}}


void func_370(){
Local_172[0 /*3*/]={
-583.6427f, -2157.497f, 5.7947f 
};
fLocal_122[0]=-0.0003f;
fLocal_123[0]=-0.0085f;
fLocal_124[0]=0.9998f;
fLocal_125[0]=0.0158f;
iLocal_194[0]=joaat("blista");
Local_171[4 /*3*/]={
-827.2035f, -2575.697f, 13.5688f 
};
fLocal_107[4]=0.0004f;
fLocal_108[4]=-0.0003f;
fLocal_109[4]=-0.2526f;
fLocal_110[4]=0.9676f;
iLocal_147[4]=50;
fLocal_111[4]=20310f;
iLocal_193[4]=joaat("manana");
Local_172[1 /*3*/]={
-1033.717f, -2949.014f, 13.4922f 
};
fLocal_122[1]=0.0032f;
fLocal_123[1]=-0.0003f;
fLocal_124[1]=-0.0255f;
fLocal_125[1]=0.9997f;
iLocal_194[1]=joaat("bison2");
Local_173[0 /*3*/]={
-1178.365f, -2845.981f, 13.9027f 
};
fLocal_116[0]=0.0018f;
fLocal_117[0]=0.0123f;
fLocal_118[0]=0.9644f;
fLocal_119[0]=0.2642f;
iLocal_150[0]=9;
fLocal_120[0]=22357f;
fLocal_121[0]=1f;
iLocal_195[0]=joaat("buzzard");
Local_173[1 /*3*/]={
-1376.197f, -2755.167f, 14.0646f 
};
fLocal_116[1]=-0.0012f;
fLocal_117[1]=0.0013f;
fLocal_118[1]=0.8439f;
fLocal_119[1]=-0.5365f;
iLocal_150[1]=10;
fLocal_120[1]=27135f;
fLocal_121[1]=1f;
iLocal_195[1]=joaat("packer");
Local_173[2 /*3*/]={
-1342.543f, -2688.482f, 22.8254f 
};
fLocal_116[2]=0.0057f;
fLocal_117[2]=-0.0014f;
fLocal_118[2]=-0.2451f;
fLocal_119[2]=0.9695f;
iLocal_150[2]=11;
fLocal_120[2]=35135f;
fLocal_121[2]=1f;
iLocal_195[2]=joaat("jet");
Local_173[3 /*3*/]={
-898.3506f, -2698.965f, 20.159f 
};
fLocal_116[3]=0.0065f;
fLocal_117[3]=0.0191f;
fLocal_118[3]=-0.2629f;
fLocal_119[3]=0.9646f;
iLocal_150[3]=3;
fLocal_120[3]=6764f;
fLocal_121[3]=1f;
iLocal_195[3]=joaat("bus");
Local_173[4 /*3*/]={
-576.655f, -2231.905f, 5.2834f 
};
fLocal_116[4]=0.0043f;
fLocal_117[4]=0.0331f;
fLocal_118[4]=-0.3125f;
fLocal_119[4]=0.9493f;
iLocal_150[4]=4;
fLocal_120[4]=2102f;
fLocal_121[4]=1f;
iLocal_195[4]=joaat("bison");
Local_173[5 /*3*/]={
-994.9925f, -3154.125f, 23.1145f 
};
fLocal_116[5]=0.0056f;
fLocal_117[5]=0.0029f;
fLocal_118[5]=0.4915f;
fLocal_119[5]=0.8708f;
iLocal_150[5]=21;
fLocal_120[5]=92500f;
fLocal_121[5]=1f;
iLocal_195[5]=joaat("jet");
Local_173[7 /*3*/]={
-553.3315f, -2073.951f, 6.8909f 
};
fLocal_116[7]=0.0072f;
fLocal_117[7]=0.0176f;
fLocal_118[7]=0.9739f;
fLocal_119[7]=-0.2263f;
iLocal_150[7]=54;
fLocal_120[7]=0f;
fLocal_121[7]=1f;
iLocal_195[7]=joaat("police3");
Local_173[8 /*3*/]={
-561.7264f, -2076.761f, 6.7664f 
};
fLocal_116[8]=-0.027f;
fLocal_117[8]=0.0016f;
fLocal_118[8]=0.9169f;
fLocal_119[8]=-0.3981f;
iLocal_150[8]=108;
fLocal_120[8]=150f;
fLocal_121[8]=1f;
iLocal_195[8]=joaat("police3");
Local_173[11 /*3*/]={
-1563.918f, -2745.409f, 13.5643f 
};
fLocal_116[11]=-0.0022f;
fLocal_117[11]=-0.0019f;
fLocal_118[11]=0.928f;
fLocal_119[11]=-0.3726f;
iLocal_150[11]=111;
fLocal_120[11]=36000f;
fLocal_121[11]=1f;
iLocal_195[11]=joaat("police3");
Local_173[12 /*3*/]={
-1026.024f, -2336.396f, 13.5678f 
};
fLocal_116[12]=-0.0083f;
fLocal_117[12]=-0.0054f;
fLocal_118[12]=0.55f;
fLocal_119[12]=0.8351f;
iLocal_150[12]=112;
fLocal_120[12]=60000f;
fLocal_121[12]=1f;
iLocal_195[12]=joaat("police3");
Local_173[13 /*3*/]={
-1013.316f, -2340.457f, 13.5678f 
};
fLocal_116[13]=-0.0086f;
fLocal_117[13]=-0.005f;
fLocal_118[13]=0.5052f;
fLocal_119[13]=0.8629f;
iLocal_150[13]=113;
fLocal_120[13]=60000f;
fLocal_121[13]=1f;
iLocal_195[13]=joaat("police3");
Local_173[14 /*3*/]={
-1221.049f, -2731.169f, 13.5681f 
};
fLocal_116[14]=-0.0083f;
fLocal_117[14]=-0.0057f;
fLocal_118[14]=0.6469f;
fLocal_119[14]=0.7625f;
iLocal_150[14]=61;
fLocal_120[14]=80000f;
fLocal_121[14]=1f;
iLocal_195[14]=joaat("police3");
Local_173[15 /*3*/]={
-1227.203f, -2735.872f, 13.568f 
};
fLocal_116[15]=-0.0041f;
fLocal_117[15]=-0.0091f;
fLocal_118[15]=0.9133f;
fLocal_119[15]=0.4072f;
iLocal_150[15]=62;
fLocal_120[15]=80000f;
fLocal_121[15]=1f;
iLocal_195[15]=joaat("police3");
Local_173[19 /*3*/]={
-1240.048f, -2203.457f, 14.0347f 
};
fLocal_116[19]=0.0002f;
fLocal_117[19]=0.0018f;
fLocal_118[19]=0.9611f;
fLocal_119[19]=-0.2763f;
iLocal_150[19]=66;
fLocal_120[19]=55125f;
fLocal_121[19]=1f;
iLocal_195[19]=joaat("firetruk");
Local_173[20 /*3*/]={
-438.0192f, -2060.751f, 73.6354f 
};
fLocal_116[20]=-0.0005f;
fLocal_117[20]=0.0018f;
fLocal_118[20]=0.9559f;
fLocal_119[20]=0.2938f;
iLocal_150[20]=67;
fLocal_120[20]=0f;
fLocal_121[20]=1f;
iLocal_195[20]=joaat("maverick");
Local_173[21 /*3*/]={
-546.8047f, -2187.925f, 5.8819f 
};
fLocal_116[21]=-0.0252f;
fLocal_117[21]=-0.0034f;
fLocal_118[21]=0.9369f;
fLocal_119[21]=0.3487f;
iLocal_150[21]=5;
fLocal_120[21]=3834f;
fLocal_121[21]=1f;
iLocal_195[21]=joaat("blista");
Local_173[22 /*3*/]={
-1001.674f, -2947.732f, 13.3947f 
};
fLocal_116[22]=0.001f;
fLocal_117[22]=-0.0004f;
fLocal_118[22]=0.8616f;
fLocal_119[22]=0.5075f;
iLocal_150[22]=6;
fLocal_120[22]=20176f;
fLocal_121[22]=1f;
iLocal_195[22]=joaat("airtug");
Local_173[23 /*3*/]={
-1249.588f, -2525.9f, 13.3942f 
};
fLocal_116[23]=0.001f;
fLocal_117[23]=-0.0001f;
fLocal_118[23]=0.9749f;
fLocal_119[23]=-0.2228f;
iLocal_150[23]=7;
fLocal_120[23]=48538f;
fLocal_121[23]=1f;
iLocal_195[23]=joaat("airtug");
Local_173[24 /*3*/]={
-1362.538f, -2625.609f, 13.3895f 
};
fLocal_116[24]=-0.0001f;
fLocal_117[24]=0.0018f;
fLocal_118[24]=0.5344f;
fLocal_119[24]=0.8452f;
iLocal_150[24]=8;
fLocal_120[24]=75112f;
fLocal_121[24]=1f;
iLocal_195[24]=joaat("airtug");
}


void func_371(char* sParam0, int iParam1, bool bParam2, bool bParam3){
struct<3> Var0;
StringCopy(&cLocal_183, sParam0, 64);
bLocal_83=true;
iLocal_88=0;
iLocal_154=0;
iLocal_155=0;
iLocal_156=0;
iLocal_157=iParam1;
iLocal_158=0;
iLocal_159=0;
iLocal_160=0;
iLocal_164=0;
iLocal_167=0;
iLocal_165=-1;
iLocal_166=-1;
iLocal_168=0;
iLocal_169=0;
fLocal_142=0f;
fLocal_143=0f;
fLocal_128=0f;
iLocal_89=0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
Local_175.f_0=(Var0.f_0 - 100f);
Local_175.f_1=(Var0.f_1 - 100f);
Local_175.f_2=(Var0.f_2 - 100f);
Local_176.f_0=(Var0.f_0 + 100f);
Local_176.f_1=(Var0.f_1 + 100f);
Local_176.f_2=(Var0.f_2 + 100f);
PATHFIND::SET_ROADS_IN_AREA(Local_175, Local_176, 0, 0);
if(bParam2){
MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, 0, 0, 0, 0, 0, 0, 0);
}}
PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_192);
func_360();
if(bParam3){
func_212(1);
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
PED::SET_CREATE_RANDOM_COPS(0);
}
func_217();
}


void func_372(){
if(iLocal_221==0){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 14f, 4);
if(iLocal_341==1){
func_127();
iLocal_341=0;
}
iLocal_355=0;
iLocal_356=0;
iLocal_358=0;
iLocal_360=0;
iLocal_370=0;
iLocal_323=0;
iLocal_324=0;
iLocal_327=0;
iLocal_329=0;
iLocal_330=0;
iLocal_331=0;
iLocal_332=0;
iLocal_333=0;
iLocal_334=0;
iLocal_339=0;
iLocal_348=0;
iLocal_346=0;
iLocal_405=0;
iLocal_408=0;
iLocal_447=0;
iLocal_369=0;
iLocal_347=1;
iLocal_225=0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iLocal_357=1;
}else{
iLocal_357=0;
}
func_17(&uLocal_488, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
PATHFIND::SET_IGNORE_NO_GPS_FLAG(1);
PATHFIND::SET_ROADS_IN_AREA(-617f, -2274f, 0f, -406.01f, -2044f, 15f, 0, 1);
iLocal_228=MISC::GET_GAME_TIMER();
if(CAM::IS_SCREEN_FADED_OUT()){
if(!func_24()){
STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
}
func_21(0, -1, 1);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_277);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_288);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_289);
}
if(!CAM::IS_SCREEN_FADED_IN()){
CAM::DO_SCREEN_FADE_IN(800);
}
if(!HUD::DOES_BLIP_EXIST(uLocal_297)){
uLocal_297=func_377(Local_306, 0);
}
AUDIO::TRIGGER_MUSIC_EVENT("TRV4_GAMEPLAY_START");
Local_316={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
iLocal_221=1;
}
if(iLocal_221==1){
if(iLocal_346==0 && iLocal_360==1){
if(!func_283() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
func_20("TRV4_GO1", 7500, 1);
iLocal_346=1;
}}
if(iLocal_369==0 && !func_376()){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_306, 1) < 800f){
iLocal_227=MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
if(iLocal_227==0){
AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_Sol_3_01", 0f);
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 6f, 3);
iLocal_369=1;
}
if(iLocal_227==1){
AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_Sol_3_02", 0f);
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 6f, 3);
iLocal_369=1;
}}}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_306, 1) < 600f){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
if(STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio"))){
iLocal_276=VEHICLE::CREATE_VEHICLE(joaat("cogcabrio"), -428.0226f, -2153.558f, 9.2992f, 90.9098f, 1, 1, 0);
ENTITY::SET_ENTITY_PROOFS(iLocal_276, 0, 1, 1, 1, 0, 0, 0, 0);
VEHICLE::SET_VEHICLE_COLOURS(iLocal_276, 27, 27);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_276, "SOL_3_MOLLY_CAR_Group", 0);
}}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_262)){
STREAMING::REQUEST_MODEL(joaat("ig_molly"));
if(STREAMING::HAS_MODEL_LOADED(joaat("ig_molly"))){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
iLocal_262=PED::CREATE_PED_INSIDE_VEHICLE(iLocal_276, 26, joaat("ig_molly"), -1, 1, 1);
ENTITY::SET_ENTITY_INVINCIBLE(iLocal_262, 1);
PED::SET_PED_CAN_BE_TARGETTED(iLocal_262, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_molly"));
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_262, joaat("player"));
iLocal_356=1;
}}}}}else{
if(ENTITY::DOES_ENTITY_EXIST(iLocal_262)){
PED::DELETE_PED(&iLocal_262);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
VEHICLE::DELETE_VEHICLE(&iLocal_276);
}}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_306, 1) < 500f){
if(iLocal_358==0){
uLocal_303=GRAPHICS::REQUEST_SCALEFORM_MOVIE("BREAKING_NEWS");
STREAMING::REQUEST_MODEL(joaat("police3"));
STREAMING::REQUEST_MODEL(joaat("maverick"));
STREAMING::REQUEST_MODEL(joaat("bison"));
STREAMING::REQUEST_MODEL(joaat("blista"));
VEHICLE::REQUEST_VEHICLE_RECORDING(45, "BB_Chase");
VEHICLE::REQUEST_VEHICLE_RECORDING(35, "BB_Chase");
VEHICLE::REQUEST_VEHICLE_RECORDING(2, "BB_Chase");
VEHICLE::REQUEST_VEHICLE_RECORDING(54, "BB_Chase");
VEHICLE::REQUEST_VEHICLE_RECORDING(55, "BB_Chase");
VEHICLE::REQUEST_VEHICLE_RECORDING(67, "BB_Chase");
func_209(1, "BB_Chase");
AUDIO::PREPARE_MUSIC_EVENT("TRV4_CHASE");
iLocal_358=1;
}}elseif(iLocal_358==1){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("maverick"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blista"));
VEHICLE::REMOVE_VEHICLE_RECORDING(45, "BB_Chase");
VEHICLE::REMOVE_VEHICLE_RECORDING(35, "BB_Chase");
VEHICLE::REMOVE_VEHICLE_RECORDING(2, "BB_Chase");
VEHICLE::REMOVE_VEHICLE_RECORDING(54, "BB_Chase");
VEHICLE::REMOVE_VEHICLE_RECORDING(55, "BB_Chase");
VEHICLE::REMOVE_VEHICLE_RECORDING(67, "BB_Chase");
func_375(1, "BB_Chase");
AUDIO::CANCEL_MUSIC_EVENT("TRV4_CHASE");
iLocal_358=0;
}
if(iLocal_370==0){
if(MISC::GET_GAME_TIMER() > (iLocal_228 + 135000)){
HUD::CLEAR_PRINTS();
func_20("TRV4_WARN1", 7500, 1);
iLocal_228=MISC::GET_GAME_TIMER();
iLocal_370=1;
}}
if(iLocal_370==1){
if(MISC::GET_GAME_TIMER() > (iLocal_228 + 135000)){
func_258("TRV4_FAIL1");
}}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_DRIVE_TO_AIRPORT")){
AUDIO::START_AUDIO_SCENE("SOL_3_DRIVE_TO_AIRPORT");
}
if(iLocal_405==0){
AUDIO::TRIGGER_MUSIC_EVENT("TRV4_CAR_ENTERED");
iLocal_405=1;
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_277)){
iLocal_277=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
ENTITY::SET_ENTITY_PROOFS(iLocal_277, 0, 1, 0, 0, 0, 0, 0, 0);
VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_277);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_277, 1);
}}elseif(ENTITY::DOES_ENTITY_EXIST(iLocal_277)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0)){
if(iLocal_357==0){
ENTITY::SET_ENTITY_PROOFS(iLocal_277, 0, 0, 0, 0, 0, 0, 0, 0);
iLocal_357=1;
}
if(iLocal_349==1){
VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(iLocal_277);
iLocal_349=0;
}
if(ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_277, 1)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_277);
}}}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(iLocal_408==0){
HUD::START_GPS_MULTI_ROUTE(156, 1, 0);
HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-244f, -1842.74f, 28.48f);
HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-1.5f, -2014.4f, 11.5f);
HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-498.7f, -2136.5f, 8.4f);
HUD::SET_GPS_MULTI_ROUTE_RENDER(1);
iLocal_408=1;
}}elseif(iLocal_408==1){
HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
iLocal_408=0;
}
if((iLocal_358==1 && ENTITY::DOES_ENTITY_EXIST(iLocal_276)) && ENTITY::DOES_ENTITY_EXIST(iLocal_262)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_276, func_374(PLAYER::PLAYER_PED_ID()), 0)){
func_373();
iLocal_221=0;
iLocal_223=0;
iLocal_220=3;
}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_276)){
func_373();
iLocal_221=0;
iLocal_223=0;
iLocal_220=3;
}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_276, 1), 200f, 132f, 100f, 0, 1, 0)){
iLocal_355=0;
func_373();
iLocal_221=0;
iLocal_223=0;
iLocal_220=3;
}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -577f, -2051.5f, 7f, 84f, 87.5f, 15f, 0, 1, 0)){
iLocal_355=1;
func_373();
iLocal_221=0;
iLocal_223=0;
iLocal_220=3;
}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -703.5f, -1969.5f, 10f, 53.5f, 62.5f, 10f, 0, 1, 0)){
HUD::CLEAR_GPS_MULTI_ROUTE();
PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
iLocal_355=1;
func_373();
iLocal_221=0;
iLocal_223=0;
iLocal_220=3;
}}}}}


void func_373(){
while (((!STREAMING::HAS_MODEL_LOADED(joaat("police3")) || !STREAMING::HAS_MODEL_LOADED(joaat("maverick"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bison"))) || !STREAMING::HAS_MODEL_LOADED(joaat("blista"))){
wait(0);
}
while (((((!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(45, "BB_Chase") || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(35, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(54, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(55, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(67, "BB_Chase")){
wait(0);
}}


var func__374(int iParam0){
var uVar0;
WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1);
return uVar0;
}


void func_375(int iParam0, char* sParam1){
VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, sParam1);
}

int func_376(){
if(Global_21845==4){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
return 1;
}else{
return 0;
}}
return 0;
}


var func__377(struct<3> Param0, int iParam1){
var uVar0;
uVar0=HUD::ADD_BLIP_FOR_COORD(Param0);
HUD::SET_BLIP_SCALE(uVar0, func_255(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
HUD::SET_BLIP_ROUTE(uVar0, iParam1);
return uVar0;
}


void func_378(){
if(iLocal_221==0){
iLocal_334=1;
iLocal_414=0;
iLocal_431=0;
iLocal_435=0;
while (iLocal_334==1){
RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_LegalTrouble", 0);
switch (iLocal_223){
case 0:
CUTSCENE::REQUEST_CUTSCENE("sol_3_int", 8);
if(func_422()){
while (!func_394(61, &uLocal_653, 0, 1, 0, 0, 0)){
wait(0);
}
iLocal_404=0;
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
func_242(1, 1, 1, 0, 0, 0, 0);
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
if(ENTITY::DOES_ENTITY_EXIST(Global_97310[0])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97310[0], 0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310[0], 1, 1);
iLocal_277=Global_97310[0];
}
}
if(ENTITY::DOES_ENTITY_EXIST(Global_97310[1])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97310[1], 0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310[1], 1, 1);
iLocal_288=Global_97310[1];
}
}
if(ENTITY::DOES_ENTITY_EXIST(Global_97310[2])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97310[2], 0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310[2], 1, 1);
iLocal_289=Global_97310[2];
}
}
if(ENTITY::DOES_ENTITY_EXIST(Global_97310[3])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97310[3], 0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310[3], 1, 1);
iLocal_290=Global_97310[3];
}
}
CUTSCENE::START_CUTSCENE(0);
RECORDING::REPLAY_START_EVENT(4);
func_393();
if(!CAM::IS_SCREEN_FADED_IN()){
CAM::DO_SCREEN_FADE_IN(250);
}
iLocal_223++;
}
break;
case 1:
if(iLocal_414==0){
if(CUTSCENE::IS_CUTSCENE_ACTIVE()){
if(iLocal_435==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_290)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_290, 0)){
if(VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_290))){
VEHICLE::CONTROL_LANDING_GEAR(iLocal_290, 2);
ENTITY::SET_ENTITY_COORDS(iLocal_290, -1048.722f, -506.8387f, 35.0386f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iLocal_290, 357.1288f);
VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_290, 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_290, 1084227584);
func_383(-1048.722f, -506.8387f, 35.0386f, 357.1288f, 0, 145);
iLocal_435=1;
}
if(((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_290)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_290))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iLocal_290))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iLocal_290))){
if((((((((ENTITY::GET_ENTITY_MODEL(iLocal_290) !=joaat("bus") && ENTITY::GET_ENTITY_MODEL(iLocal_290) !=joaat("pounder")) && ENTITY::GET_ENTITY_MODEL(iLocal_290) !=joaat("packer")) && ENTITY::GET_ENTITY_MODEL(iLocal_290) !=joaat("airbus")) && ENTITY::GET_ENTITY_MODEL(iLocal_290) !=joaat("ambulance")) && ENTITY::GET_ENTITY_MODEL(iLocal_290) !=joaat("barracks")) && ENTITY::GET_ENTITY_MODEL(iLocal_290) !=joaat("barracks2")) && ENTITY::GET_ENTITY_MODEL(iLocal_290) !=joaat("benson")) && ENTITY::GET_ENTITY_MODEL(iLocal_290) !=joaat("biff")){
ENTITY::SET_ENTITY_COORDS(iLocal_290, -1027.657f, -486.6945f, 35.9571f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iLocal_290, 207.7515f);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_290, 1084227584);
func_383(-1027.657f, -486.6945f, 35.9571f, 207.7515f, 0, 145);
iLocal_435=1;
}
}
if((((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_290)) && !VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_290))) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_290))) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iLocal_290))) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iLocal_290))){
VEHICLE::DELETE_VEHICLE(&iLocal_290);
iLocal_435=1;
}
}}}
func_381(&uLocal_653, 0, 0, 2000, 1, 1, 0, 1);
iLocal_414=1;
}}
if(iLocal_404==0){
PED::ADD_RELATIONSHIP_GROUP("SecGuards", &iLocal_486);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("player"), iLocal_486);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_486, joaat("player"));
HUD::REQUEST_ADDITIONAL_TEXT("TREV4", 0);
iLocal_404=1;
}
if(iLocal_431==0){
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
if(CUTSCENE::GET_CUTSCENE_TIME() > 120000){
AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START");
iLocal_431=1;
}
}}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0)){
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1012.268f, -480.0742f, 38.9757f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 121.4087f);
PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 3000, 0, 1, 0, 0);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), 0, 0, 0);
}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0)){
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}
if(!CUTSCENE::IS_CUTSCENE_ACTIVE()){
func_380(61);
if(iLocal_431==0){
AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START_CS_SKIP");
iLocal_431=1;
}
RECORDING::REPLAY_STOP_EVENT();
func_242(0, 1, 1, 0, 0, 0, 0);
iLocal_223++;
}
break;
case 2:
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_277)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0)){
if(ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_277, 1)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_277);
}
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_288)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_288, 0)){
if(ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_288, 1)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_288);
}
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_289)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_289, 0)){
if(ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_289, 1)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_289);
}
}}
func_379();
iLocal_334=0;
iLocal_223=0;
iLocal_221=0;
iLocal_220=2;
break;
}
wait(0);
}}}


void func_379(){
Global_63491=0;
}


void func_380(int iParam0){
if(Global_97735 !=-1){
if(iParam0==Global_97735){
Global_97739=1;
return;
}}}


void func_381(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
int iVar0;
if(iParam4==1){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), 64);
}
if(!CUTSCENE::IS_CUTSCENE_PLAYING()){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam1, 0);
}
if(bParam7){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
}}
if(!bParam1 && iParam6){
CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
}else{
CAM::RENDER_SCRIPT_CAMS(bParam1, iParam2, iParam3, 1, 0, 0);
}
if(bParam1){
HUD::CLEAR_HELP(1);
}else{
if(CAM::DOES_CAM_EXIST(uParam0->f_4)){
if(CAM::IS_CAM_ACTIVE(uParam0->f_4)){
CAM::SET_CAM_ACTIVE(uParam0->f_4, 0);
}
CAM::DESTROY_CAM(uParam0->f_4, 1);
}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 0);
}
iVar0=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
ENTITY::SET_ENTITY_VISIBLE(iVar0, 1, 0);
}
AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE")){
AUDIO::STOP_SOUND(uParam0->f_10);
AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
}}
func_242(bParam1, 1, 0, 0, 0, 0, 0);
func_382();
if(!bParam1 && iParam5){
if(uParam0->f_5){
CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
}else{
CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
}}
if(!bParam1){
if(CAM::IS_SCREEN_FADED_OUT()){
CAM::DO_SCREEN_FADE_IN(250);
}}
if(!bParam1){
if(Global_113810.f_32752.f_4801 !=-15){
Global_113810.f_32752.f_4801=func_103();
}}}


void func_382(){
int iVar0;
iVar0=0;
while (iVar0 < 35){
HUD::THEFEED_REMOVE_ITEM(Global_113810.f_14144[iVar0 /*104*/].f_16);
iVar0++;
}}


void func_383(struct<3> Param0, float fParam1, int iParam2, int iParam3){
struct<3> Var0;
var uVar1;
if(ENTITY::DOES_ENTITY_EXIST(Global_104373.f_4)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Global_104373.f_4, 0)){
if(func_392(24) !=Global_104373.f_4){
if(iParam2==1){
if(func_389(ENTITY::GET_ENTITY_COORDS(Global_104373.f_4, 1), iParam3, &Var0, &uVar1)){
Param0={
Var0 
};
fParam1=uVar1;
}}
func_384(Global_104373.f_4, Param0, fParam1, 24, 0);
}}}}


void func_384(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4){
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
func_388(iParam3);
Var0.f_9=49;
Var0.f_59=2;
func_39(iParam0, &Var0);
if(func_73(Param1, 0f, 0f, 0f, 0)){
Param1={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
fParam2=ENTITY::GET_ENTITY_HEADING(iParam0);
}
if(iParam3==24){
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) !=joaat("vehicle_gen_controller")){
Global_78467=MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
}}
func_386(iParam3, &Var0, Param1, fParam2, func_34(iParam0));
func_385(iParam3, iParam0, 0);
}}


void func_385(int iParam0, int iParam1, int iParam2){
int iVar0;
if(iParam0==-1){
return;
}
if(!func_169(&(Global_77479.f_555[0 /*21*/]), iParam0)){
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
Global_113810.f_32752.f_4801=func_103();
}
if(iParam1 !=Global_77479.f_139[iParam0]){
if(iParam0==24){
iVar0=func_392(iParam0);
if((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 !=iVar0){
func_155(iVar0, 145);
}}
Global_78385=iParam1;
Global_78386=iParam0;
Global_78387=iParam2;
}}}}


void func_386(int iParam0, var uParam1, struct<3> Param2, float fParam3, int iParam4){
if(func_169(&(Global_77479.f_555[0 /*21*/]), iParam0)){
if(MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 10)){
func_387(iParam0);
func_166(uParam1, &(Global_113810.f_32752.f_69[Global_77479.f_555[0 /*21*/].f_14 /*78*/]));
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
func_162(iParam0, 1);
}}}


void func_387(int iParam0){
if(iParam0==-1){
return;
}
if(func_169(&(Global_77479.f_555[0 /*21*/]), iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77479.f_139[iParam0], 1, 1);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iParam0]));
Global_77479.f_139[iParam0]=0;
}
if(MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 13)){
func_162(iParam0, 0);
}}}


void func_388(int iParam0){
if(iParam0 !=24 && iParam0 !=25){}
func_387(iParam0);
func_162(iParam0, 0);
}

int func_389(struct<3> Param0, int iParam1, var uParam2, var uParam3){
int iVar0;
iVar0=func_390(Param0, iParam1, 1);
switch (iVar0){
case 0:
*uParam2={
-827.351f, 157.785f, 68.2143f 
};
*uParam3=85.1509f;
return 1;
break;
case 1:
case 2:
*uParam2={
1992.523f, 3813.916f, 31.1008f 
};
*uParam3=122.1498f;
return 1;
break;
case 3:
*uParam2={
-1184.258f, -1496.556f, 3.3895f 
};
*uParam3=303.2098f;
return 1;
break;
case 4:
*uParam2={
118.1067f, -1325.906f, 28.3706f 
};
*uParam3=123.5016f;
return 1;
break;
case 5:
*uParam2={
-18.118f, -1455.126f, 29.5004f 
};
*uParam3=273.2822f;
return 1;
break;
case 6:
*uParam2={
1.5947f, 543.4017f, 173.4644f 
};
*uParam3=310.7556f;
return 1;
break;
default:
break;
}
return 0;
}

int func_390(struct<3> Param0, int iParam1, int iParam2){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
fVar2=1000000f;
iVar3=10;
iVar0=0;
while (iVar0 <=(10 - 1)){
if(Global_95851[iVar0 /*10*/].f_7 !=263){
if(Global_95851[iVar0 /*10*/].f_9==iParam1 || iParam1==145){
if(func_391(iVar0) || iParam2==0){
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_95851[iVar0 /*10*/].f_3, 1);
if(fVar1 < fVar2){
fVar2=fVar1;
iVar3=iVar0;
}}}}
iVar0++;
}
return iVar3;
}


var func__391(int iParam0){
return MISC::IS_BIT_SET(Global_113810.f_7232[iParam0], 0);
}

int func_392(int iParam0){
if(iParam0==-1){
return 0;
}
return Global_77479.f_139[iParam0];
}


void func_393(){
Global_63491=1;
}


bool func_394(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6){
struct<2> Var0;
func_421(iParam0, &Var0);
func_420(iParam0, &Var0, &(Var0.f_1));
return func_395(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_395(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6){
int iVar0;
var uVar1;
int iVar2;
var uVar3;
int iVar4;
var uVar5;
uParam0->f_7=*uParam1;
uParam0->f_8=uParam1->f_1;
if((func_453(0) && !bParam2) && !bParam4){
if(uParam0->f_5){
CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
}else{
CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
}
return 1;
}
if(uParam0->f_2==0){
if(uParam0->f_7 !=-1 && uParam0->f_8 !=-1){
if(bParam2 || !func_418(uParam0->f_8, uParam0->f_7)){
if(AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", 0, -1)){
uParam0->f_6=0;
uParam0->f_2=1;
}}else{
uParam0->f_2=-1;
return 1;
}}else{
uParam0->f_2=-1;
return 1;
}}
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
if(uParam0->f_2==1){
if(bParam2){
CAM::DESTROY_CAM(uParam0->f_4, 0);
uParam0->f_4=CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
if(uParam1->f_17 < 0){
CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
}else{
CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
}
CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
if(!bParam6){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0, 0);
}
iVar0=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
}
ENTITY::SET_ENTITY_VISIBLE(iVar0, 0, 0);
}}
uVar1=CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar1, 0);
GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, uVar1);
GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, uVar1);
if(bParam3){
MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
}
func_417(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
func_381(uParam0, 1, 0, 2000, 1, 1, 0, 1);
uParam0->f_2=2;
}elseif(!func_418(uParam0->f_7, uParam0->f_8)){
if(uParam0->f_5){
CAM::DESTROY_CAM(uParam0->f_4, 0);
uParam0->f_4=CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
if(uParam1->f_17 < 0){
CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
}else{
CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
}
CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
if(!bParam6){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0, 0);
}
iVar2=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(ENTITY::DOES_ENTITY_EXIST(iVar2)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, 1, 0);
}
ENTITY::SET_ENTITY_VISIBLE(iVar2, 0, 0);
}}
uVar3=CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar3, 0);
GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, uVar3);
GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, uVar3);
if(bParam3){
MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
}
func_417(&(uParam0->f_1), 0, 0, 8, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
func_381(uParam0, 1, 0, 2000, 1, 1, 0, 1);
uParam0->f_2=2;
}else{
AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
uParam0->f_2=-1;
return 1;
}}elseif(!uParam0->f_5){
CAM::DESTROY_CAM(uParam0->f_4, 0);
uParam0->f_4=CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
if(uParam1->f_17 < 0){
CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
}else{
CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
}
CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
if(!bParam6){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0, 0);
}
iVar4=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(ENTITY::DOES_ENTITY_EXIST(iVar4)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar4, 1, 0);
}
ENTITY::SET_ENTITY_VISIBLE(iVar4, 0, 0);
}}
uVar5=CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar5, 0);
GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, uVar5);
GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, uVar5);
if(bParam3){
MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
}
func_417(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
func_381(uParam0, 1, 0, 2000, 1, 1, 0, 1);
uParam0->f_2=2;
}else{
AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
uParam0->f_2=-1;
return 1;
}}
if(uParam0->f_2==2){
if(bParam3){
MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
}
if(!uParam0->f_5){
if(func_398(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216)){
if(uParam1->f_17 < 0){
uParam0->f_9=MISC::GET_GAME_TIMER();
uParam0->f_2=3;
}else{
uParam0->f_4=CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
uParam0->f_9=MISC::GET_GAME_TIMER();
uParam0->f_2=22;
}}}elseif(func_398(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216)){
if(uParam1->f_17 < 0){
uParam0->f_9=MISC::GET_GAME_TIMER();
uParam0->f_2=3;
}else{
uParam0->f_4=CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
uParam0->f_9=MISC::GET_GAME_TIMER();
uParam0->f_2=22;
}}
if(!bParam5){
if(func_396(1000) || uParam0->f_6){
uParam0->f_6=1;
if(!CAM::IS_SCREEN_FADING_OUT()){
CAM::DO_SCREEN_FADE_OUT(250);
}
if(!CAM::IS_SCREEN_FADED_OUT()){
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
return 0;
}
if(uParam0->f_3 !=0){
func_398(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
}
uParam0->f_2=4;
}}}
if(uParam0->f_2==22){
if(bParam3){
MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
}
if(CAM::DOES_CAM_EXIST(uParam0->f_4) && CAM::IS_CAM_INTERPOLATING(uParam0->f_4)){
}else{
uParam0->f_9=MISC::GET_GAME_TIMER();
uParam0->f_2=3;
}
if(!bParam5){
if(func_396(1000) || uParam0->f_6){
uParam0->f_6=1;
if(!CAM::IS_SCREEN_FADING_OUT()){
CAM::DO_SCREEN_FADE_OUT(250);
}
if(!CAM::IS_SCREEN_FADED_OUT()){
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
return 0;
}
uParam0->f_2=4;
}}}
if(uParam0->f_2==3){
if(bParam3){
MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
}
if(uParam0->f_9 + 1000 > MISC::GET_GAME_TIMER()){
uParam0->f_2=4;
}}
if(uParam0->f_2==4){
uParam0->f_6=0;
uParam0->f_2=-1;
return 1;
}
if(uParam0->f_2==-1){
return 1;
}
return 0;
}

int func_396(int iParam0){
if(CAM::IS_SCREEN_FADED_IN()){
if((MISC::GET_GAME_TIMER() - Global_28) > iParam0){
Global_27=MISC::GET_GAME_TIMER();
}
Global_28=MISC::GET_GAME_TIMER();
if((MISC::GET_GAME_TIMER() - Global_27) > iParam0){
if(func_397()){
Global_27=MISC::GET_GAME_TIMER();
return 1;
}}}
return 0;
}

int func_397(){
if(HUD::IS_PAUSE_MENU_ACTIVE()){
return 0;
}
if(PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18)){
return 1;
}
return 0;
}

int func_398(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, float fParam8){
float fVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
var uVar6;
var uVar7;
var uVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
fVar0=-1f;
switch (uParam4->f_3){
case 0:
*uParam4=func_103();
iVar5=func_103();
func_111(&iVar5, iParam0);
func_112(&iVar5, iParam1);
func_113(&iVar5, 0);
if(func_415(*uParam4, iVar5)){
func_414(&iVar5, 0, 0, 0, 1, 0, 0);
}
func_412(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
uParam4->f_11=((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
func_405((to_float(uParam4->f_11) / 3600f));
if(bParam7){
GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.6f);
GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(0);
GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(0);
}
func_404();
uParam4->f_10=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(uParam4->f_10, "TIME_LAPSE_MASTER", 0, 1);
AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
func_382();
uParam4->f_3++;
break;
case 1:
case 2:
if((CAM::DOES_CAM_EXIST(uParam4->f_4) && CAM::IS_CAM_INTERPOLATING(uParam4->f_4)) || !(fParam5 >=0.99f || fParam5==-1f)){
if(CAM::DOES_CAM_EXIST(uParam4->f_4) && CAM::IS_CAM_INTERPOLATING(uParam4->f_4)){
fVar0=CAM::GET_CAM_SPLINE_PHASE(uParam4->f_4);
}elseif(!(fParam5 >=0.99f || fParam5==-1f)){
fVar0=fParam5;
}else{
fVar0=-1f;
}
if(fVar0 >=0.5f){
if(uParam4->f_3==1){
if(MISC::GET_HASH_KEY(sParam2) !=0){
MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST(sParam2, fParam8);
}
if(MISC::GET_HASH_KEY(sParam3) !=0){
MISC::UNLOAD_ALL_CLOUD_HATS();
MISC::LOAD_CLOUD_HAT(sParam3, 0);
}
uParam4->f_3=2;
}}}
if(fVar0 >=0.99f || fVar0==-1f){
iVar5=*uParam4;
func_414(&iVar5, uParam4->f_11, 0, 0, 0, 0, 0);
CLOCK::SET_CLOCK_TIME(func_403(iVar5), func_402(iVar5), func_401(iVar5));
if(bParam7){
GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}
AUDIO::STOP_SOUND(uParam4->f_10);
AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
if(bParam7){
GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(1);
GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(1);
}
return 1;
}
fVar11=fVar0;
fVar9=0.1f;
fVar10=0.9f;
fVar12=func_400(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
iVar4=round((IntToFloat(uParam4->f_11) * fVar12));
iVar5=*uParam4;
func_414(&iVar5, iVar4, 0, 0, 0, 0, 0);
CLOCK::SET_CLOCK_TIME(func_403(iVar5), func_402(iVar5), func_401(iVar5));
if(func_399(iVar5) !=CLOCK::GET_CLOCK_DAY_OF_MONTH()){
CLOCK::SET_CLOCK_DATE(func_399(iVar5), func_110(iVar5), func_108(iVar5));
}
func_293();
GRAPHICS::RESET_ADAPTATION(6);
break;
}
return 0;
}

int func_399(int iParam0){
return shift_right(iParam0, 4) & 31;
}


float func_400(float fParam0, float fParam1, float fParam2){
if(fParam0 > fParam2){
return fParam2;
}elseif(fParam0 < fParam1){
return fParam1;
}
return fParam0;
}

int func_401(int iParam0){
return shift_right(iParam0, 20) & 63;
}

int func_402(int iParam0){
return shift_right(iParam0, 14) & 63;
}

int func_403(int iParam0){
return shift_right(iParam0, 9) & 31;
}

int func_404(){
int iVar0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
return 0;
}
if(!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
return 0;
}
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
return 0;
}
AUDIO::SET_VEH_RADIO_STATION(iVar0, "OFF");
return 1;
}


void func_405(float fParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 9){
if(func_411(&(Global_113810.f_18106.f_175[iVar0 /*19*/].f_5))){
func_406(&(Global_113810.f_18106.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
}
iVar0++;
}
iVar1=0;
while (iVar1 < 6){
if(func_411(&(Global_113810.f_18106.f_362[iVar1 /*3*/]))){
func_406(&(Global_113810.f_18106.f_362[iVar1 /*3*/]), (fParam0 * 60f));
}
iVar1++;
}
AUDIO::SKIP_RADIO_FORWARD();
}


void func_406(var uParam0, float fParam1){
if(func_411(uParam0)){
func_407(uParam0, (func_409(uParam0) + fParam1));
}}


void func_407(var uParam0, float fParam1){
uParam0->f_1=(func_408(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
MISC::SET_BIT(uParam0, true);
MISC::CLEAR_BIT(uParam0, 2);
uParam0->f_2=0f;
}


float func_408(bool bParam0){
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


float func_409(var uParam0){
if(func_411(uParam0)){
if(func_410(uParam0)){
return uParam0->f_2;
}else{
return (func_408(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
}}
return uParam0->f_1;
}


bool func_410(var uParam0){
return MISC::IS_BIT_SET(*uParam0, 2);
}


bool func_411(var uParam0){
return MISC::IS_BIT_SET(*uParam0, 1);
}


void func_412(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
if(func_415(iParam0, iParam1)){
iVar0=func_110(iParam1);
iVar1=func_108(iParam0);
iVar2=(func_108(iParam0) - func_108(iParam1));
iVar3=(func_110(iParam0) - func_110(iParam1));
iVar4=(func_399(iParam0) - func_399(iParam1));
iVar5=(func_403(iParam0) - func_403(iParam1));
iVar6=(func_402(iParam0) - func_402(iParam1));
iVar7=(func_401(iParam0) - func_401(iParam1));
}else{
iVar0=func_110(iParam0);
iVar1=func_108(iParam1);
iVar2=(func_108(iParam1) - func_108(iParam0));
iVar3=(func_110(iParam1) - func_110(iParam0));
iVar4=(func_399(iParam1) - func_399(iParam0));
iVar5=(func_403(iParam1) - func_403(iParam0));
iVar6=(func_402(iParam1) - func_402(iParam0));
iVar7=(func_401(iParam1) - func_401(iParam0));
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
iVar4=(iVar4 + func_107(iVar0, iVar1));
iVar3=(iVar3 - 1);
iVar0=round(func_413(to_float(iVar0 + 1), 0f, 12f));
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


float func_413(float fParam0, float fParam1, float fParam2){
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


void func_414(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
iVar0=func_108(*iParam0);
iVar1=func_110(*iParam0);
iVar2=func_399(*iParam0);
iVar3=func_403(*iParam0);
iVar4=func_402(*iParam0);
iVar5=func_401(*iParam0);
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
iVar6=func_107(iVar1, iVar0);
while (iVar2 > iVar6){
iVar1++;
iVar2=(iVar2 - iVar6);
if(iVar1 > 11){
iVar0++;
iVar1=(iVar1 - 12);
}
iVar6=func_107(iVar1, iVar0);
}
iVar1=(iVar1 + iParam5);
while (iVar1 > 11){
iParam6++;
iVar1=(iVar1 - 12);
}
iVar0=(iVar0 + iParam6);
func_417(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_415(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(!func_416(iParam1) || !func_416(iParam0)){
return 1;
}
iVar0=func_108(iParam0);
iVar1=func_108(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_110(iParam0);
iVar1=func_110(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_399(iParam0);
iVar1=func_399(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_403(iParam0);
iVar1=func_403(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_402(iParam0);
iVar1=func_402(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_401(iParam0);
iVar1=func_401(iParam1);
if(iVar0 > iVar1){
return 1;
}
return 0;
}

int func_416(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(iParam0==-15){
return 0;
}
iVar0=func_401(iParam0);
if(iVar0 < 0 || iVar0 >=60){
return 0;
}
iVar1=func_402(iParam0);
if(iVar1 < 0 || iVar1 >=60){
return 0;
}
iVar2=func_403(iParam0);
if(iVar2 < 0 || iVar2 > 23){
return 0;
}
iVar3=func_108(iParam0);
if((iVar3 <=0 || iVar3 > 2043) || iVar3 < 1979){
return 0;
}
iVar4=func_110(iParam0);
if(iVar4 < 0 || iVar4 > 11){
return 0;
}
iVar5=func_399(iParam0);
if(iVar5 < 1 || iVar5 > func_107(iVar4, iVar3)){
return 0;
}
return 1;
}


void func_417(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_113(uParam0, iParam1);
func_112(uParam0, iParam2);
func_111(uParam0, iParam3);
func_105(uParam0, iParam5);
func_106(uParam0, iParam4);
func_104(uParam0, iParam6);
}


bool func_418(int iParam0, int iParam1){
return func_419(CLOCK::GET_CLOCK_HOURS(), iParam0, iParam1);
}

int func_419(int iParam0, int iParam1, int iParam2){
bool bVar0;
int iVar1;
int iVar2;
if(iParam1==24){
iParam1=0;
}
if(iParam1 < 0 || iParam1 >=24){
return 0;
}
if(iParam2==24){
iParam2=0;
}
if(iParam2 < 0 || iParam2 >=24){
return 0;
}
if(iParam1==iParam2){
return 1;
}
bVar0=iParam2 < iParam1;
iVar1=iParam1;
iVar2=iParam2;
if(bVar0){
iVar2=24;
}
if(iParam0 >=iVar1 && iParam0 < iVar2){
return 1;
}
if(!bVar0){
return 0;
}
iVar1=0;
iVar2=iParam2;
if(iParam0 >=iVar1 && iParam0 < iVar2){
return 1;
}
return 0;
}


void func_420(int iParam0, var uParam1, var uParam2){
switch (iParam0){
case 65:
*uParam1=20;
*uParam2=22;
break;
case 27:
*uParam1=20;
*uParam2=20;
break;
default:
*uParam1=Global_91601[iParam0 /*34*/].f_14;
*uParam2=Global_91601[iParam0 /*34*/].f_13;
break;
}}


void func_421(int iParam0, var uParam1){
uParam1->f_17=-1;
switch (iParam0){
case 1:
case 2:
uParam1->f_2={
-58.1338f, -1115.653f, 25.8856f 
};
uParam1->f_5={
18.4907f, 0f, 3.566f 
};
uParam1->f_8={
-58.3857f, -1115.083f, 26.0824f 
};
uParam1->f_11={
18.4907f, 0f, 2.0628f 
};
uParam1->f_14=40.0256f;
uParam1->f_15=4000;
StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
uParam1->f_16=0;
break;
case 17:
case 18:
uParam1->f_2={
-830.1f, 171.4f, 71.5f 
};
uParam1->f_5={
17.5f, 0f, -76f 
};
uParam1->f_8={
-829.5f, 171.6f, 71.7f 
};
uParam1->f_11={
17.9f, 0f, -75.4f 
};
uParam1->f_14=47.9931f;
uParam1->f_15=6600;
uParam1->f_16=0;
StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
break;
case 21:
case 22:
uParam1->f_2={
-776.5807f, 181.1033f, 72.2059f 
};
uParam1->f_5={
11.8135f, 0f, 95.7275f 
};
uParam1->f_8={
-776.8288f, 181.0926f, 72.2551f 
};
uParam1->f_11={
11.8134f, 0f, 95.7284f 
};
uParam1->f_14=46.7255f;
uParam1->f_15=5500;
uParam1->f_16=0;
StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
break;
case 20:
switch (func_114()){
case 0:
uParam1->f_2={
-846.3013f, 186.777f, 72.0316f 
};
uParam1->f_5={
4.202026f, 0f, -111.2882f 
};
uParam1->f_8={
-846.1907f, 186.7339f, 72.0403f 
};
uParam1->f_11={
4.202f, 0f, -111.2882f 
};
uParam1->f_14=47f;
uParam1->f_15=5500;
uParam1->f_16=0;
break;
case 2:
uParam1->f_2={
-846.3013f, 186.777f, 72.0316f 
};
uParam1->f_5={
4.202026f, 0f, -111.2882f 
};
uParam1->f_8={
-846.1907f, 186.7339f, 72.0403f 
};
uParam1->f_11={
4.202f, 0f, -111.2882f 
};
uParam1->f_14=47f;
uParam1->f_15=5500;
uParam1->f_16=0;
break;
}
break;
case 40:
uParam1->f_2={
-8.0845f, -1450.367f, 36.8585f 
};
uParam1->f_5={
13.3776f, 0f, 4.513f 
};
uParam1->f_8={
-9.0519f, -1450.444f, 36.8585f 
};
uParam1->f_11={
13.3776f, 0f, 4.513f 
};
uParam1->f_14=39.9659f;
uParam1->f_15=7200;
uParam1->f_16=0;
break;
case 27:
uParam1->f_2={
-1576.132f, 5160.888f, 24.1175f 
};
uParam1->f_5={
4.8389f, -0.011f, 92.1057f 
};
uParam1->f_8={
-1576.132f, 5160.888f, 24.1175f 
};
uParam1->f_11={
4.8389f, -0.011f, 92.1057f 
};
uParam1->f_14=40f;
uParam1->f_15=7200;
uParam1->f_16=0;
break;
case 43:
uParam1->f_2={
-7.205f, -1471.656f, 31.1614f 
};
uParam1->f_5={
9.3776f, 0f, 11.4737f 
};
uParam1->f_8={
-7.2909f, -1471.232f, 31.2546f 
};
uParam1->f_11={
9.3776f, 0f, 11.4737f 
};
uParam1->f_14=38.5265f;
uParam1->f_15=5000;
uParam1->f_16=0;
break;
case 61:
uParam1->f_2={
-1060.658f, -464.0052f, 44.994f 
};
uParam1->f_5={
5.6441f, 0f, -138.7474f 
};
uParam1->f_8={
-1060.658f, -464.0052f, 44.994f 
};
uParam1->f_11={
4.8242f, 0f, -118.3167f 
};
uParam1->f_14=37f;
uParam1->f_15=5000;
uParam1->f_16=0;
break;
case 91:
case 93:
uParam1->f_2={
1406.112f, 3590.231f, 34.4113f 
};
uParam1->f_5={
17.5005f, 0f, 55.9579f 
};
uParam1->f_8={
1405.673f, 3590.525f, 34.4113f 
};
uParam1->f_11={
18.4979f, 0f, 55.9579f 
};
uParam1->f_14=56.3199f;
uParam1->f_15=6000;
uParam1->f_16=0;
break;
case 69:
case 86:
case 90:
uParam1->f_2={
739.1493f, -990.3961f, 29.85194f 
};
uParam1->f_5={
17.19917f, 0f, 44.21184f 
};
uParam1->f_8={
738.4197f, -989.6462f, 30.17581f 
};
uParam1->f_11={
17.19917f, 0f, 44.21184f 
};
uParam1->f_14=47.56362f;
uParam1->f_15=6000;
StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
uParam1->f_16=0;
break;
case 70:
uParam1->f_2={
2503.9f, -288.8f, 112.8f 
};
uParam1->f_5={
-0.2f, 0f, -169.6f 
};
uParam1->f_8={
2503.9f, -288.8f, 112.8f 
};
uParam1->f_11={
-0.2f, 0f, -169.6f 
};
uParam1->f_14=47.6f;
uParam1->f_15=5000;
StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
uParam1->f_16=1;
break;
case 45:
uParam1->f_2={
-458.5666f, 1010.097f, 316.3736f 
};
uParam1->f_5={
14.47186f, 0f, -18.28884f 
};
uParam1->f_8={
-457.3f, 1011.6f, 316.9f 
};
uParam1->f_11={
14.5f, 0f, -18.5f 
};
uParam1->f_14=50f;
uParam1->f_15=6000;
uParam1->f_16=0;
break;
case 49:
uParam1->f_2={
-723.9982f, -155.7184f, 38.12362f 
};
uParam1->f_5={
30.12048f, 0f, -99.11243f 
};
uParam1->f_8={
-722.4385f, -155.7817f, 37.4443f 
};
uParam1->f_11={
2.0429f, 0f, -101.5132f 
};
uParam1->f_14=45f;
uParam1->f_15=6000;
uParam1->f_16=0;
break;
case 9:
switch (func_114()){
case 2:
uParam1->f_2={
416.3221f, -960.2586f, 30.6696f 
};
uParam1->f_5={
21.5747f, 0f, -135.2969f 
};
uParam1->f_8={
416.8894f, -960.832f, 30.9887f 
};
uParam1->f_11={
21.9916f, 0f, -135.2969f 
};
uParam1->f_14=47.1057f;
uParam1->f_15=6000;
uParam1->f_16=0;
break;
case 1:
uParam1->f_2={
1393.363f, -2052.581f, 65.4054f 
};
uParam1->f_5={
2.5107f, 0f, 51.1167f 
};
uParam1->f_8={
1393.456f, -2052.656f, 68.146f 
};
uParam1->f_11={
2.5107f, 0f, 51.1167f 
};
uParam1->f_14=35.9859f;
uParam1->f_15=6000;
uParam1->f_16=0;
break;
}
break;
case 30:
uParam1->f_2={
59.3f, -751.7f, 46.8f 
};
uParam1->f_5={
61.9f, 0f, -63.8f 
};
uParam1->f_8={
59.3f, -751.7f, 46.8f 
};
uParam1->f_11={
61.9f, 0f, -63.8f 
};
uParam1->f_14=46.6f;
uParam1->f_15=6000;
uParam1->f_16=0;
break;
case 39:
uParam1->f_2={
3841.93f, 4464.658f, 2.6587f 
};
uParam1->f_5={
8.4859f, 0.0024f, 143.0775f 
};
uParam1->f_8={
3842.54f, 4464.184f, 2.6587f 
};
uParam1->f_11={
8.4859f, 0.0024f, 142.0089f 
};
uParam1->f_14=34.1544f;
uParam1->f_15=3000;
uParam1->f_16=0;
break;
case 71:
uParam1->f_2={
-1193.1f, -1525.3f, 4.4f 
};
uParam1->f_5={
9.4f, 0f, -78.8f 
};
uParam1->f_8={
-1192.2f, -1525.1f, 4.4f 
};
uParam1->f_11={
9.4f, 0f, -78.5f 
};
uParam1->f_14=30.4f;
uParam1->f_15=6000;
uParam1->f_16=0;
break;
case 74:
uParam1->f_2={
-24.2f, -2417.6f, 7.8f 
};
uParam1->f_5={
10.4f, 0f, 80.4f 
};
uParam1->f_8={
-23.8f, -2414.8f, 7.8f 
};
uParam1->f_11={
10.4f, 0f, 81.4f 
};
uParam1->f_14=48.1095f;
uParam1->f_15=6000;
uParam1->f_16=0;
break;
case 84:
case 85:
case 65:
uParam1->f_2={
146.9733f, -1310.644f, 30.85177f 
};
uParam1->f_5={
16.26885f, -2.1E-05f, 45.00475f 
};
uParam1->f_8={
146.9733f, -1310.644f, 30.85177f 
};
uParam1->f_11={
16.26885f, -2.1E-05f, 45.00475f 
};
uParam1->f_14=39.4027f;
uParam1->f_15=6000;
uParam1->f_16=0;
break;
case 62:
case 15:
case 16:
uParam1->f_2={
1998.215f, 3816.983f, 33.0117f 
};
uParam1->f_5={
5.9088f, 0f, 89.1989f 
};
uParam1->f_8={
1997.154f, 3817.004f, 33.1215f 
};
uParam1->f_11={
5.9088f, 0f, 89.1989f 
};
uParam1->f_14=36.8186f;
uParam1->f_15=6000;
uParam1->f_16=0;
if(iParam0==62){
if(func_114() !=2){
uParam1->f_2={
0f, 0f, 0f 
};
uParam1->f_5={
0f, 0f, 0f 
};
uParam1->f_8={
0f, 0f, 0f 
};
uParam1->f_11={
0f, 0f, 0f 
};
uParam1->f_14=-1f;
uParam1->f_15=-1;
uParam1->f_16=0;
}}
break;
case 63:
uParam1->f_2={
1576f, 3363.9f, 55.5f 
};
uParam1->f_5={
0.5f, 0f, -123.8f 
};
uParam1->f_8={
1575.2f, 3364.4f, 49.2f 
};
uParam1->f_11={
-4.3f, 0f, -124.1f 
};
uParam1->f_14=50f;
uParam1->f_15=8000;
uParam1->f_16=0;
break;
case 64:
uParam1->f_2={
1566f, 3378.8f, 42.8f 
};
uParam1->f_5={
-2.4f, 0f, -126.3f 
};
uParam1->f_8={
1567.6f, 3376.9f, 45f 
};
uParam1->f_11={
1.6f, 0f, -124.6f 
};
uParam1->f_14=34.7f;
uParam1->f_15=8000;
uParam1->f_16=0;
break;
case 24:
uParam1->f_2={
1339.573f, -2550.873f, 56.28254f 
};
uParam1->f_5={
-2.348373f, -2.1E-05f, 159.736f 
};
uParam1->f_8={
1334.491f, -2549.345f, 47.69109f 
};
uParam1->f_11={
2.789334f, -2.1E-05f, -156.4397f 
};
uParam1->f_14=25.66f;
uParam1->f_15=8000;
uParam1->f_16=0;
break;
case 25:
uParam1->f_2={
2383.651f, 2624.787f, 46.9527f 
};
uParam1->f_5={
14.6191f, 0f, 64.366f 
};
uParam1->f_8={
2383.929f, 2622.802f, 47.2707f 
};
uParam1->f_11={
33.17714f, -0.13073f, 12.31436f 
};
uParam1->f_14=35.31843f;
uParam1->f_15=6000;
uParam1->f_16=0;
break;
case 26:
uParam1->f_2={
1755.519f, -1474.981f, 126.1743f 
};
uParam1->f_5={
4.5341f, 0f, 89.6405f 
};
uParam1->f_8={
1772.26f, -1475.085f, 125.9465f 
};
uParam1->f_11={
5.8327f, 0f, 89.6405f 
};
uParam1->f_14=32.7f;
uParam1->f_15=6500;
uParam1->f_16=0;
break;
case 3:
uParam1->f_2={
-1514.257f, -947.7281f, 15.0253f 
};
uParam1->f_5={
-3.5807f, -0.0001f, -46.3209f 
};
uParam1->f_8={
-1512.601f, -949.2796f, 14.8827f 
};
uParam1->f_11={
-4.7682f, -0.0001f, -34.1393f 
};
uParam1->f_14=29.9555f;
uParam1->f_15=6000;
uParam1->f_16=0;
break;
case 4:
uParam1->f_2={
-698.2578f, -934.4238f, 31.6909f 
};
uParam1->f_5={
-22.0467f, 0f, 32.1888f 
};
uParam1->f_8={
-697.8695f, -935.0406f, 31.9861f 
};
uParam1->f_11={
-20.6093f, 0f, 32.1888f 
};
uParam1->f_14=30f;
uParam1->f_15=6000;
uParam1->f_16=0;
break;
case 5:
uParam1->f_2={
221.8613f, -830.6434f, 45.3154f 
};
uParam1->f_5={
-13.9263f, 0f, 140.7092f 
};
uParam1->f_8={
227.5233f, -832.8285f, 45.3154f 
};
uParam1->f_11={
-13.9263f, 0f, 140.7092f 
};
uParam1->f_14=35f;
uParam1->f_15=6000;
uParam1->f_16=0;
break;
case 6:
uParam1->f_2={
-23.3747f, -120.3161f, 64.139f 
};
uParam1->f_5={
-5.7232f, 0f, 5.1015f 
};
uParam1->f_8={
-22.5824f, -122.52f, 64.139f 
};
uParam1->f_11={
-5.7232f, 0f, 6.6362f 
};
uParam1->f_14=35f;
uParam1->f_15=6000;
uParam1->f_16=0;
break;
case 7:
uParam1->f_2={
803.5977f, -1075.869f, 37.1981f 
};
uParam1->f_5={
-10.7685f, 0f, -38.1705f 
};
uParam1->f_8={
803.5977f, -1075.869f, 32.7981f 
};
uParam1->f_11={
-10.7685f, 0f, -38.1705f 
};
uParam1->f_14=35f;
uParam1->f_15=6000;
uParam1->f_16=0;
break;
default:
uParam1->f_2={
0f, 0f, 0f 
};
uParam1->f_5={
0f, 0f, 0f 
};
uParam1->f_8={
0f, 0f, 0f 
};
uParam1->f_11={
0f, 0f, 0f 
};
uParam1->f_14=-1f;
uParam1->f_15=-1;
uParam1->f_16=0;
break;
}
if(MISC::GET_HASH_KEY("RAIN")==MISC::GET_PREV_WEATHER_TYPE_HASH_NAME()){
if(MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_18))){
StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_22))){
StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
}}}


bool func_422(){
bool bVar0;
bVar0=CUTSCENE::HAS_CUTSCENE_LOADED();
if(!Global_78688){
if(!bVar0){
Global_78688=1;
}}
return bVar0;
}


void func_423(){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
if(!func_23()){
if(func_453(0)){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
STREAMING::REQUEST_MODEL(joaat("rapidgt"));
STREAMING::REQUEST_MODEL(joaat("surano"));
STREAMING::REQUEST_MODEL(joaat("carbonizzare"));
while ((!STREAMING::HAS_MODEL_LOADED(joaat("rapidgt")) || !STREAMING::HAS_MODEL_LOADED(joaat("surano"))) || !STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare"))){
wait(0);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_277)){
MISC::CLEAR_AREA(Local_304, 5f, 1, 0, 0, 0);
iLocal_277=VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_304, fLocal_317, 1, 1, 0);
VEHICLE::SET_VEHICLE_COLOURS(iLocal_277, 112, 112);
ENTITY::SET_ENTITY_HEALTH(iLocal_277, 3000, 0);
VEHICLE::SET_VEHICLE_STRONG(iLocal_277, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rapidgt"), 1);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_277, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_277, 1);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_288)){
if(STREAMING::HAS_MODEL_LOADED(joaat("surano"))){
MISC::CLEAR_AREA(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, 0);
iLocal_288=VEHICLE::CREATE_VEHICLE(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, 1, 1, 0);
VEHICLE::SET_VEHICLE_COLOURS(iLocal_288, 0, 0);
ENTITY::SET_ENTITY_HEALTH(iLocal_288, 3000, 0);
VEHICLE::SET_VEHICLE_STRONG(iLocal_288, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("surano"));
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("surano"), 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_288, 1);
}}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_289)){
if(STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare"))){
MISC::CLEAR_AREA(Local_304, 5f, 1, 0, 0, 0);
iLocal_289=VEHICLE::CREATE_VEHICLE(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, 1, 1, 0);
VEHICLE::SET_VEHICLE_COLOURS(iLocal_289, 89, 89);
ENTITY::SET_ENTITY_HEALTH(iLocal_289, 3000, 0);
VEHICLE::SET_VEHICLE_STRONG(iLocal_289, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("carbonizzare"));
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("carbonizzare"), 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_289, 1);
}}}
iLocal_221=0;
iLocal_223=0;
iLocal_341=0;
iLocal_220=1;
}else{
PED::ADD_RELATIONSHIP_GROUP("SecGuards", &iLocal_486);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("player"), iLocal_486);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_486, joaat("player"));
if(Global_94990==1){
if(func_426()==0){
func_425(Local_314, fLocal_321, 1, 0);
iLocal_221=0;
iLocal_341=1;
AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START_RT");
iLocal_220=3;
}
if(func_426()==1){
func_425(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
iLocal_221=0;
iLocal_341=1;
AUDIO::TRIGGER_MUSIC_EVENT("TRV4_FOOT_CHASE_RT");
iLocal_220=5;
}
if(func_426()==2){
func_425(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
iLocal_221=0;
iLocal_341=1;
AUDIO::TRIGGER_MUSIC_EVENT("TRV4_EVADE_RT");
iLocal_220=8;
}
if(func_426()==3){
func_425(-920.0547f, -2744.661f, 12.9322f, 357.1374f, 1, 0);
func_424();
}}else{
if(func_426()==0){
func_425(-1019.579f, -484.872f, 36.0795f, 93.7701f, 1, 0);
iLocal_221=0;
iLocal_341=1;
AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START_RT");
iLocal_220=2;
}
if(func_426()==1){
func_425(Local_314, fLocal_321, 1, 0);
iLocal_221=0;
iLocal_341=1;
AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START_RT");
iLocal_220=3;
}
if(func_426()==2){
func_425(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
iLocal_221=0;
iLocal_341=1;
AUDIO::TRIGGER_MUSIC_EVENT("TRV4_FOOT_CHASE_RT");
iLocal_220=5;
}
if(func_426()==3){
func_425(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
iLocal_221=0;
iLocal_341=1;
AUDIO::TRIGGER_MUSIC_EVENT("TRV4_EVADE_RT");
iLocal_220=8;
}}
HUD::REQUEST_ADDITIONAL_TEXT("TREV4", 0);
while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0)){
wait(0);
}}}


void func_424(){
if(iLocal_221==0){
MISC::CLEAR_AREA(-920.0547f, -2744.662f, 12.8434f, 20f, 1, 0, 0, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
iLocal_221++;
}
if(iLocal_221==1){
STREAMING::LOAD_SCENE(-920.0547f, -2744.662f, 12.8434f);
if(!CAM::IS_SCREEN_FADED_IN()){
func_21(0, -1, 1);
CAM::DO_SCREEN_FADE_IN(800);
}
func_6();
}}


void func_425(struct<3> Param0, float fParam1, int iParam2, int iParam3){
if(func_23()){
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
MISC::CLEAR_BIT(&(Global_100833.f_20), 2);
MISC::SET_GAME_PAUSED(1);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
}
Global_100829={
Param0 
};
Global_100832=fParam1;
Global_100828=1;
if(iParam2==1){
MISC::SET_BIT(&(Global_100833.f_20), 14);
}else{
MISC::CLEAR_BIT(&(Global_100833.f_20), 14);
}
if(iParam3==1){
MISC::SET_BIT(&(Global_100833.f_20), 24);
}else{
MISC::CLEAR_BIT(&(Global_100833.f_20), 24);
}
func_22(1);
}}

int func_426(){
if(!Global_100833==10 && !Global_100833==9){
return 0;
}
return Global_100833.f_2;
}


void func_427(){
if(iLocal_433[0]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[7])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[7], 0)){
AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_202[7], "SOL_3_POLICE_CARS_Group", 0);
iLocal_433[0]=1;
}}}
if(iLocal_434[0]==0){
if(iLocal_433[0]==1){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[7])){
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[7], 0)){
AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_202[7], 0);
iLocal_434[0]=1;
}elseif(iLocal_220==5){
AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_202[7], 0);
iLocal_434[0]=1;
}}else{
iLocal_434[0]=1;
}}}
if(iLocal_433[1]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[8])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[8], 0)){
AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_202[8], "SOL_3_POLICE_CARS_Group", 0);
iLocal_433[1]=1;
}}}
if(iLocal_434[1]==0){
if(iLocal_433[1]==1){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[8])){
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[8], 0)){
AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_202[8], 0);
iLocal_434[1]=1;
}elseif(iLocal_220==5){
AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_202[8], 0);
iLocal_434[1]=1;
}}else{
iLocal_434[1]=1;
}}}
if(iLocal_433[2]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[11])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[11], 0)){
AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_202[11], "SOL_3_POLICE_CARS_Group", 0);
iLocal_433[2]=1;
}}}
if(iLocal_434[2]==0){
if(iLocal_433[2]==1){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[11])){
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[11], 0)){
AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_202[11], 0);
iLocal_434[2]=1;
}elseif(iLocal_220==5){
AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_202[11], 0);
iLocal_434[2]=1;
}}else{
iLocal_434[2]=1;
}}}
if(iLocal_433[3]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[12])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[12], 0)){
AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_202[12], "SOL_3_POLICE_CARS_Group", 0);
iLocal_433[3]=1;
}}}
if(iLocal_434[3]==0){
if(iLocal_433[3]==1){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[12])){
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[12], 0)){
AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_202[12], 0);
iLocal_434[3]=1;
}elseif(iLocal_220==5){
AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_202[12], 0);
iLocal_434[3]=1;
}}else{
iLocal_434[3]=1;
}}}
if(iLocal_433[4]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[13])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[13], 0)){
AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_202[13], "SOL_3_POLICE_CARS_Group", 0);
iLocal_433[4]=1;
}}}
if(iLocal_434[4]==0){
if(iLocal_433[4]==1){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[13])){
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[13], 0)){
AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_202[13], 0);
iLocal_434[4]=1;
}elseif(iLocal_220==5){
AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_202[13], 0);
iLocal_434[4]=1;
}}else{
iLocal_434[4]=1;
}}}
if(iLocal_433[5]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[14])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[14], 0)){
AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_202[14], "SOL_3_POLICE_CARS_Group", 0);
iLocal_433[5]=1;
}}}
if(iLocal_434[5]==0){
if(iLocal_433[5]==1){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[14])){
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[14], 0)){
AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_202[14], 0);
iLocal_434[5]=1;
}elseif(iLocal_220==5){
AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_202[14], 0);
iLocal_434[5]=1;
}}else{
iLocal_434[5]=1;
}}}
if(iLocal_433[6]==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[15])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[15], 0)){
AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_202[15], "SOL_3_POLICE_CARS_Group", 0);
iLocal_433[6]=1;
}}}
if(iLocal_434[6]==0){
if(iLocal_433[6]==1){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[15])){
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[15], 0)){
AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_202[15], 0);
iLocal_434[6]=1;
}elseif(iLocal_220==5){
AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_202[15], 0);
iLocal_434[6]=1;
}}else{
iLocal_434[6]=1;
}}}}


void func_428(){
switch (iLocal_220){
case 2:
if(iLocal_221 > 0){
if(iLocal_225==0){
iLocal_360=0;
iLocal_447=0;
iLocal_470=0;
iLocal_471=0;
func_17(&uLocal_488, 1, 0, "Devin", 0, 1);
func_17(&uLocal_488, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
iLocal_225=1;
}
if(iLocal_225==1){
if(iLocal_360==0){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_316, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 2f){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "T1M4_CHASE", 3, 0, 0, 0)){
iLocal_360=1;
}}
}}
if(iLocal_447==0){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_316, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 100f){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(func_431(&uLocal_488, 29, "T1M4AUD", "SOL3_DEVCALL", 7, 0, 0, 1)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 10f, 4);
iLocal_447=1;
}}
}}
if(iLocal_470==0 && iLocal_447==1){
if(func_430()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "T1M4_REACT", 3, 0, 0, 0)){
iLocal_470=1;
}}
}}
if(iLocal_471==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(func_16(PLAYER::PLAYER_PED_ID(), iLocal_276, 1) < 200f && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_276)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 12f, 4);
iLocal_471=1;
}
}
}}}
}}}}
break;
case 4:
if(iLocal_221 >=0){
if(iLocal_225==0){
iLocal_448[0]=0;
iLocal_448[1]=0;
iLocal_448[2]=0;
iLocal_448[3]=0;
iLocal_467=0;
iLocal_468=0;
iLocal_469=0;
iLocal_472=0;
iLocal_473=0;
iLocal_474=0;
iLocal_475=0;
iLocal_476=0;
iLocal_239=MISC::GET_GAME_TIMER();
func_17(&uLocal_488, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
func_17(&uLocal_488, 4, 0, "SOL3COP", 0, 1);
iLocal_225=1;
}
if(iLocal_225==1){
if(iLocal_471==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(func_16(PLAYER::PLAYER_PED_ID(), iLocal_276, 1) < 200f && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_276)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0)){
iLocal_471=1;
}
}
}}}
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(iLocal_448[0]==0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[7], 0) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[8], 0)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 7000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 28000f){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "T1M4_POLICE", 7, 0, 0, 0)){
iLocal_448[0]=1;
}}}
}
}}
if(iLocal_448[1]==0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[7], 0) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[8], 0)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 28000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 34500f){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "T1M4_POLICE2", 7, 0, 0, 0)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
iLocal_448[1]=1;
}}}
}
}}
if(iLocal_448[2]==0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[7], 0) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202[8], 0)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 36000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 41000f){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "T1M4_POLICE3", 7, 0, 0, 0)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 4f, 4);
iLocal_448[2]=1;
}}}
}
}}
if(iLocal_468==0){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 41000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 43500f){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_281) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_281)){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "T1M4_BOOM", 7, 0, 0, 0)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
iLocal_468=1;
}}}
}
}}
if(iLocal_469==0){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 50509f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 50872f){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_281) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_281)){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "T1M4_BLOW", 7, 0, 0, 0)){
iLocal_469=1;
}}}
}
}}
if(iLocal_448[3]==0){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 58000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 68000f){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "T1M4_POLICE4", 7, 0, 0, 0)){
iLocal_448[3]=1;
}}
}
}}
if(iLocal_472==0 && iLocal_448[3]==1){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 76000f){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "T1M4_CHASE3", 7, 0, 0, 0)){
iLocal_472=1;
}}
}
}}
if(iLocal_467==0){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 80000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 82000f){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_278[0])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278[0], 0)){
if(ENTITY::IS_ENTITY_ON_SCREEN(iLocal_278[0])){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "T1M4_CHASE4", 7, 0, 0, 0)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 4);
iLocal_467=1;
}
}
}}}
}
}}
if(iLocal_473==0){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 82100f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 83500f){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_202[11])){
if(ENTITY::IS_ENTITY_ON_SCREEN(iLocal_202[11])){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0)){
iLocal_473=1;
}
}}}
}
elseif(ENTITY::DOES_ENTITY_EXIST(iLocal_202[12])){
if(ENTITY::IS_ENTITY_ON_SCREEN(iLocal_202[12])){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0)){
iLocal_473=1;
}
}}}
}
}}
if(iLocal_476==0){
if((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 101891f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 105000f) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_276)){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "T1M4_CHASE7", 7, 0, 0, 0)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 4);
iLocal_476=1;
}}
}
}}
if(((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 105500f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 119000f) && MISC::GET_GAME_TIMER() > iLocal_239 + 7000) && iLocal_475==0){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0)){
iLocal_239=MISC::GET_GAME_TIMER();
iLocal_475=1;
}
}
}}
if(iLocal_474==0 && iLocal_475==1){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "T1M4_CHASE6", 7, 0, 0, 0)){
iLocal_474=1;
}
}
}}
if(((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 105500f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 119000f) && MISC::GET_GAME_TIMER() > iLocal_239 + 7000) && iLocal_474==1){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0)){
iLocal_239=MISC::GET_GAME_TIMER();
}
}
}}}
}}}}
break;
case 5:
if(iLocal_221 > 0){
if(iLocal_225==0){
iLocal_450=0;
iLocal_477=0;
iLocal_483=0;
iLocal_478=1;
iLocal_244=MISC::GET_GAME_TIMER();
func_17(&uLocal_488, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
if(!PED::IS_PED_INJURED(iLocal_262)){
func_17(&uLocal_488, 2, iLocal_262, "MOLLY", 0, 1);
}
iLocal_225=1;
}
if(iLocal_225==1){
if(iLocal_483==0){
AUDIO::PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE("T1M4_BBAA", "AIRPORTANNO", -939.5f, -2932.2f, 16f, "SPEECH_PARAMS_FORCE_FRONTEND");
iLocal_483=1;
}
if(iLocal_478==1){
if(iLocal_450==0){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 6f, 4);
iLocal_240=MISC::GET_GAME_TIMER();
iLocal_450=1;
iLocal_477=1;
iLocal_478=0;
}}}
}
if(MISC::GET_GAME_TIMER() > iLocal_240 + 5000){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 6f, 4);
iLocal_240=MISC::GET_GAME_TIMER();
}}}
}}
if(iLocal_477==1 && MISC::GET_GAME_TIMER() > iLocal_244 + 4000){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "T1M4_SHOUT1", 7, 0, 0, 0)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 6f, 4);
iLocal_244=MISC::GET_GAME_TIMER();
iLocal_478=1;
iLocal_477=0;
}}
}}}}
break;
case 6:
if(iLocal_221 > 0){
if(iLocal_225==0){
iLocal_451=0;
iLocal_452=0;
iLocal_453=0;
iLocal_479=0;
iLocal_480=0;
func_17(&uLocal_488, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
if(!PED::IS_PED_INJURED(iLocal_262)){
func_17(&uLocal_488, 2, iLocal_262, "MOLLY", 0, 1);
}
iLocal_225=1;
}
if(iLocal_225==1){
if(iLocal_451==0){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "SOL3_PAST", 7, 0, 0, 0)){
iLocal_451=1;
}}
}}
if(iLocal_451==1 && iLocal_453==0){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "SOL3_WATCH", 7, 0, 0, 0)){
iLocal_453=1;
}}
}}
if(iLocal_452==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_262)){
if(!PED::IS_PED_INJURED(iLocal_262)){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_249)){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_249) > 0.65f && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_249) < 0.835f){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "SOL3_SUCKS", 7, 0, 0, 0)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 8f, 4);
iLocal_452=1;
}}
}
}}}
}}
if(iLocal_479==0){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_262)){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "T1M4_SMUSH", 7, 0, 0, 0)){
iLocal_479=1;
}}}
}}
if(iLocal_479==1 && iLocal_480==0){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "T1M4_SMUSH2", 7, 0, 0, 0)){
iLocal_480=1;
}}
}}}}
break;
case 8:
if(iLocal_221 > 0){
if(iLocal_225==0){
iLocal_481=0;
iLocal_245=MISC::GET_GAME_TIMER();
func_17(&uLocal_488, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
iLocal_225=1;
}
if(iLocal_225==1){
if(iLocal_481==0){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iLocal_275=func_429(PLAYER::PLAYER_PED_ID(), joaat("COP"), 0, 0, 28);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_275)){
if(func_16(PLAYER::PLAYER_PED_ID(), iLocal_275, 1) < 40f){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0)){
iLocal_481=1;
}
}
}}}
}}
if(iLocal_481==1 && MISC::GET_GAME_TIMER() > iLocal_245 + 5000){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iLocal_275=func_429(PLAYER::PLAYER_PED_ID(), joaat("COP"), 0, 0, 28);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_275)){
if(func_16(PLAYER::PLAYER_PED_ID(), iLocal_275, 1) < 40f){
if(!func_283()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_284(&uLocal_488, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0)){
iLocal_245=MISC::GET_GAME_TIMER();
}
}
}}}
}}}}
break;
}}

int func_429(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
int iVar0[16];
int iVar1;
iVar1=0;
if(!PED::IS_PED_INJURED(iParam0)){
PED::GET_PED_NEARBY_PEDS(iParam0, &iVar0, iParam4);
iVar1=0;
while (iVar1 <=(iVar0 - 1)){
if(ENTITY::DOES_ENTITY_EXIST(iVar0[iVar1])){
if(!PED::IS_PED_INJURED(iVar0[iVar1])){
if(PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar1])==iParam1){
if(iParam2 <=0){
if(iParam3==1){
if(ENTITY::IS_ENTITY_ON_SCREEN(iVar0[iVar1])){
return iVar0[iVar1];
}}else{
return iVar0[iVar1];
}
}
elseif(iVar1 + iParam2) <=(iVar0 - 1){
if(ENTITY::DOES_ENTITY_EXIST(iVar0[(iVar1 + iParam2)])){
if(!PED::IS_PED_INJURED(iVar0[(iVar1 + iParam2)])){
if(PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[(iVar1 + iParam2)])==iParam1){
if(iParam3==1){
if(ENTITY::IS_ENTITY_ON_SCREEN(iVar0[(iVar1 + iParam2)])){
return iVar0[(iVar1 + iParam2)];
}
}
else{
return iVar0[(iVar1 + iParam2)];
}
}}}
}}}}
iVar1++;
}}
return 0;
}

int func_430(){
if(Global_21845==0){
return 1;
}
return 0;
}


bool func_431(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
func_282(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
Global_21893=1;
Global_21852=1;
Global_21859=0;
Global_21854=0;
Global_22836=0;
Global_22838=0;
Global_22842=0;
Global_21850=0;
Global_21897=0;
Global_21899=0;
Global_2883585=0;
return func_272(sParam3, iParam4, bParam7);
}


void func_432(){
if(((iLocal_220==4 || iLocal_220==5) || iLocal_220==8) || iLocal_220==6){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_433(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2, 200, 0)){
PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
}}}
if(iLocal_439==0){
if(iLocal_220==4){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_433(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2, 200, 0)){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
iLocal_439=1;
}}}}}

int func_433(struct<3> Param0, int iParam1, int iParam2, bool bParam3){
struct<3> Var0[15];
struct<3> Var1[15];
float fVar2[15];
int iVar3;
int iVar4;
int iVar5;
int iVar6;
iVar5=0;
switch (iParam1){
case 1:
Var0[0 /*3*/]={
-1332.211f, 100.4608f, 40.38437f 
};
Var1[0 /*3*/]={
-1094.238f, 148.4274f, 73f 
};
fVar2[0]=171.25f;
Var0[1 /*3*/]={
-999.7344f, -110.2231f, 25.25706f 
};
Var1[1 /*3*/]={
-1149.494f, 109.2558f, 73f 
};
fVar2[1]=132f;
Var0[2 /*3*/]={
-1035.113f, -84.95885f, 28.2746f 
};
Var1[2 /*3*/]={
-1261.103f, 50.08148f, 73f 
};
fVar2[2]=132f;
iVar3=3;
break;
case 2:
Var0[0 /*3*/]={
-804.3439f, -3346.5f, 10f 
};
Var1[0 /*3*/]={
-1816.954f, -2768.893f, IntToFloat((250 + iParam2)) 
};
fVar2[0]=247f;
Var0[1 /*3*/]={
-1911.488f, -2934.197f, 10f 
};
Var1[1 /*3*/]={
-968.6236f, -3477.748f, IntToFloat((250 + iParam2)) 
};
fVar2[1]=149f;
Var0[2 /*3*/]={
-844.9433f, -2802.785f, 10f 
};
Var1[2 /*3*/]={
-1011.081f, -3086.904f, IntToFloat((250 + iParam2)) 
};
fVar2[2]=185.5f;
Var0[3 /*3*/]={
-1021.086f, -2952.277f, 10f 
};
Var1[3 /*3*/]={
-1599.008f, -2616.271f, IntToFloat((250 + iParam2)) 
};
fVar2[3]=250f;
Var0[4 /*3*/]={
-1027.136f, -2436.457f, 10f 
};
Var1[4 /*3*/]={
-1392.61f, -2226.763f, IntToFloat((250 + iParam2)) 
};
fVar2[4]=193.5f;
Var0[5 /*3*/]={
-1497.549f, -2408.712f, 10f 
};
Var1[5 /*3*/]={
-1136.917f, -2617.955f, IntToFloat((250 + iParam2)) 
};
fVar2[5]=234.5f;
Var0[6 /*3*/]={
-982.7924f, -2831.709f, 12.93313f 
};
Var1[6 /*3*/]={
-966.4677f, -2803.458f, 16.68313f 
};
fVar2[6]=16f;
Var0[7 /*3*/]={
-1110.083f, -3496.806f, 12f 
};
Var1[7 /*3*/]={
-1955.298f, -3010.431f, IntToFloat((250 + iParam2)) 
};
fVar2[7]=80f;
Var0[8 /*3*/]={
-1886.899f, -3193.024f, 12f 
};
Var1[8 /*3*/]={
-1836.143f, -3105.268f, IntToFloat((250 + iParam2)) 
};
fVar2[8]=142f;
Var0[9 /*3*/]={
-1134.337f, -3535.648f, 12f 
};
Var1[9 /*3*/]={
-1259.649f, -3463.486f, IntToFloat((250 + iParam2)) 
};
fVar2[9]=30.75f;
Var0[10 /*3*/]={
-969.1279f, -3463.899f, 12f 
};
Var1[10 /*3*/]={
-896.3734f, -3505.715f, IntToFloat((250 + iParam2)) 
};
fVar2[10]=150f;
Var0[11 /*3*/]={
-1369.491f, -2173.579f, 10f 
};
Var1[11 /*3*/]={
-1685.626f, -2720.364f, IntToFloat((250 + iParam2)) 
};
fVar2[11]=29.25f;
Var0[12 /*3*/]={
-1010.926f, -3550.943f, 10f 
};
Var1[12 /*3*/]={
-1110.198f, -3493.617f, IntToFloat((250 + iParam2)) 
};
fVar2[12]=43f;
iVar3=13;
break;
case 3:
Var0[0 /*3*/]={
-1773.944f, 3287.334f, 30f 
};
Var1[0 /*3*/]={
-2029.776f, 2845.083f, IntToFloat((250 + iParam2)) 
};
fVar2[0]=255f;
Var0[1 /*3*/]={
-2725.889f, 3291.099f, 30f 
};
Var1[1 /*3*/]={
-2009.182f, 2879.835f, IntToFloat((250 + iParam2)) 
};
fVar2[1]=180f;
Var0[2 /*3*/]={
-2442.026f, 3326.699f, 30f 
};
Var1[2 /*3*/]={
-2033.928f, 3089.049f, IntToFloat((250 + iParam2)) 
};
fVar2[2]=205f;
Var0[3 /*3*/]={
-1917.165f, 3374.209f, 30f 
};
Var1[3 /*3*/]={
-2016.791f, 3195.058f, IntToFloat((250 + iParam2)) 
};
fVar2[3]=86.25f;
Var0[4 /*3*/]={
-2192.753f, 3373.278f, 30f 
};
Var1[4 /*3*/]={
-2191.544f, 3150.417f, IntToFloat((250 + iParam2)) 
};
fVar2[4]=150.5f;
Var0[5 /*3*/]={
-2077.663f, 3344.514f, 30f 
};
Var1[5 /*3*/]={
-2191.544f, 3150.417f, IntToFloat((250 + iParam2)) 
};
fVar2[5]=140.5f;
Var0[6 /*3*/]={
-2861.755f, 3352.661f, 30f 
};
Var1[6 /*3*/]={
-2715.871f, 3269.916f, IntToFloat((250 + iParam2)) 
};
fVar2[6]=90f;
Var0[7 /*3*/]={
-2005.574f, 3364.533f, 30f 
};
Var1[7 /*3*/]={
-1977.569f, 3330.888f, IntToFloat((250 + iParam2)) 
};
fVar2[7]=100f;
Var0[8 /*3*/]={
-1682.235f, 3004.285f, 30f 
};
Var1[8 /*3*/]={
-1942.747f, 2947.441f, IntToFloat((250 + iParam2)) 
};
fVar2[8]=248.75f;
Var0[9 /*3*/]={
-2393.295f, 2936.406f, 31.6801f 
};
Var1[9 /*3*/]={
-2453.037f, 3006.863f, 52.31003f 
};
fVar2[9]=128f;
Var0[10 /*3*/]={
-2347.185f, 3023.83f, 31.56573f 
};
Var1[10 /*3*/]={
-2517.33f, 2989.063f, 49.95644f 
};
fVar2[10]=140f;
Var0[11 /*3*/]={
-2259.922f, 3358.04f, 29.99972f 
};
Var1[11 /*3*/]={
-2299.772f, 3385.79f, 38.06014f 
};
fVar2[11]=16f;
Var0[12 /*3*/]={
-2476.309f, 3363.914f, 31.67933f 
};
Var1[12 /*3*/]={
-2431.981f, 3287.669f, 39.97826f 
};
fVar2[12]=214.25f;
Var0[13 /*3*/]={
-2103.081f, 2797.783f, 29.37864f 
};
Var1[13 /*3*/]={
-2096.821f, 2874.423f, 57.80989f 
};
fVar2[13]=65.75f;
if(bParam3){
iVar6=iParam2;
}else{
iVar6=0;
}
Var1[9 /*3*/].f_2=(Var1[9 /*3*/].f_2 + IntToFloat(iVar6));
Var1[10 /*3*/].f_2=(Var1[10 /*3*/].f_2 + IntToFloat(iVar6));
Var1[11 /*3*/].f_2=(Var1[11 /*3*/].f_2 + IntToFloat(iVar6));
Var1[12 /*3*/].f_2=(Var1[12 /*3*/].f_2 + IntToFloat(iVar6));
Var1[13 /*3*/].f_2=(Var1[13 /*3*/].f_2 + IntToFloat(iVar6));
iVar3=14;
break;
case 4:
Var0[0 /*3*/]={
1541.607f, 2527.555f, 40f 
};
Var1[0 /*3*/]={
1815.575f, 2535.06f, IntToFloat((150 + iParam2)) 
};
fVar2[0]=114f;
Var0[1 /*3*/]={
1788.879f, 2445.727f, 40f 
};
Var1[1 /*3*/]={
1716.96f, 2502.957f, IntToFloat((150 + iParam2)) 
};
fVar2[1]=88.5f;
Var0[2 /*3*/]={
1601.157f, 2436.244f, 40f 
};
Var1[2 /*3*/]={
1650.078f, 2515.923f, IntToFloat((150 + iParam2)) 
};
fVar2[2]=133.25f;
Var0[3 /*3*/]={
1706.331f, 2407.597f, 40f 
};
Var1[3 /*3*/]={
1698.555f, 2460.208f, IntToFloat((150 + iParam2)) 
};
fVar2[3]=104.5f;
Var0[4 /*3*/]={
1712.452f, 2756.218f, 40f 
};
Var1[4 /*3*/]={
1718.848f, 2589.162f, IntToFloat((150 + iParam2)) 
};
fVar2[4]=121.75f;
Var0[5 /*3*/]={
1830.228f, 2661.24f, 40f 
};
Var1[5 /*3*/]={
1774.812f, 2679.419f, IntToFloat((150 + iParam2)) 
};
fVar2[5]=84.5f;
Var0[6 /*3*/]={
1559.05f, 2632.22f, 40f 
};
Var1[6 /*3*/]={
1657.208f, 2595.484f, IntToFloat((150 + iParam2)) 
};
fVar2[6]=103.75f;
Var0[7 /*3*/]={
1612.021f, 2716.869f, 40f 
};
Var1[7 /*3*/]={
1657.165f, 2669.721f, IntToFloat((150 + iParam2)) 
};
fVar2[7]=104.25f;
Var0[8 /*3*/]={
1809.872f, 2729.827f, 40f 
};
Var1[8 /*3*/]={
1789.855f, 2705.037f, IntToFloat((150 + iParam2)) 
};
fVar2[8]=91f;
Var0[9 /*3*/]={
1818.789f, 2605.948f, 40f 
};
Var1[9 /*3*/]={
1783.114f, 2606.783f, IntToFloat((150 + iParam2)) 
};
fVar2[9]=51.25f;
iVar3=10;
break;
case 5:
Var0[0 /*3*/]={
3411.002f, 3663.185f, 20f 
};
Var1[0 /*3*/]={
3615.583f, 3626.194f, IntToFloat((40 + iParam2)) 
};
fVar2[0]=45.75f;
Var0[1 /*3*/]={
3426.66f, 3733.078f, 20f 
};
Var1[1 /*3*/]={
3643.801f, 3694.362f, IntToFloat((40 + iParam2)) 
};
fVar2[1]=99f;
Var0[2 /*3*/]={
3446.036f, 3795.688f, 20f 
};
Var1[2 /*3*/]={
3650.914f, 3766.152f, IntToFloat((40 + iParam2)) 
};
fVar2[2]=81.5f;
iVar3=3;
break;
case 6:
Var0[0 /*3*/]={
526.053f, -3391.497f, -10f 
};
Var1[0 /*3*/]={
523.2289f, -3118.678f, IntToFloat((10 + iParam2)) 
};
fVar2[0]=120f;
Var0[1 /*3*/]={
459.4397f, -3199.99f, 4.819676f 
};
Var1[1 /*3*/]={
593.8928f, -3199.998f, 30.06926f 
};
fVar2[1]=170f;
Var0[2 /*3*/]={
552.8467f, -3111.054f, 4.819394f 
};
Var1[2 /*3*/]={
585.3137f, -3111.844f, 17.56923f 
};
fVar2[2]=12.5f;
Var0[3 /*3*/]={
598.4666f, -3140.147f, 4.819257f 
};
Var1[3 /*3*/]={
597.4973f, -3117.063f, 17.31926f 
};
fVar2[3]=9.75f;
iVar3=4;
break;
case 7:
Var0[0 /*3*/]={
-1108.55f, -570.8798f, 20f 
};
Var1[0 /*3*/]={
-1187.811f, -477.5037f, IntToFloat((50 + iParam2)) 
};
fVar2[0]=162f;
Var0[1 /*3*/]={
-1201.378f, -485.9673f, 20f 
};
Var1[1 /*3*/]={
-1215.796f, -464.8281f, IntToFloat((50 + iParam2)) 
};
fVar2[1]=124f;
Var0[2 /*3*/]={
-985.6311f, -525.4233f, 20f 
};
Var1[2 /*3*/]={
-1013.393f, -475.2057f, IntToFloat((50 + iParam2)) 
};
fVar2[2]=55f;
Var0[3 /*3*/]={
-1055.849f, -477.8226f, 20f 
};
Var1[3 /*3*/]={
-1073.333f, -498.717f, IntToFloat((50 + iParam2)) 
};
fVar2[3]=142f;
iVar3=4;
break;
case 8:
Var0[0 /*3*/]={
461.5684f, -984.572f, 29.43951f 
};
Var1[0 /*3*/]={
471.17f, -984.4292f, 40.14212f 
};
fVar2[0]=7.75f;
Var0[1 /*3*/]={
457.3404f, -984.756f, 34.43951f 
};
Var1[1 /*3*/]={
457.2084f, -993.7189f, 29.38958f 
};
fVar2[1]=14.75f;
Var0[2 /*3*/]={
477.6227f, -986.6f, 40.00819f 
};
Var1[2 /*3*/]={
424.8687f, -986.3279f, 48.71241f 
};
fVar2[2]=31.5f;
Var0[3 /*3*/]={
474.3889f, -974.4613f, 39.55761f 
};
Var1[3 /*3*/]={
474.0358f, -1021.972f, 49.10033f 
};
fVar2[3]=30.5f;
Var0[4 /*3*/]={
442.1768f, -974.1888f, 29.68951f 
};
Var1[4 /*3*/]={
442.1855f, -979.8635f, 33.43951f 
};
fVar2[4]=6.75f;
iVar3=5;
break;
}
iVar4=0;
while (iVar4 < iVar3){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar4 /*3*/], Var1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1)){
return 1;
}
iVar4++;
}
return 0;
}


void func_434(){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iLocal_277=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
}}}


void func_435(){
if(iLocal_347==1){
if(iLocal_220==4){
if(iLocal_222 > 1 && iLocal_422==0){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -828.6987f, -2938.073f, 12.21745f, -807.6911f, -2905.148f, 16.35626f, 28f, 0, 1, 0)){
func_258("TRV4_FAIL1");
}}}
if(iLocal_220==6){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_293)){
if(HUD::DOES_BLIP_EXIST(uLocal_298)){
if(func_16(PLAYER::PLAYER_PED_ID(), iLocal_293, 1) > 100f){
func_258("TRV4_FAIL6");
}}}}
if(iLocal_220==4){
if(iLocal_222==2){
if(MISC::GET_GAME_TIMER() > iLocal_234 + 7000 && iLocal_437==0){
func_258("TRV4_FAIL1");
}}}
if(iLocal_220==4){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 62000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 77000f){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1219f, -2570f, 13f, 1) < 210f){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::GET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) < 200f && ENTITY::GET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) > 125f){
if(iLocal_436==0){
iLocal_237=MISC::GET_GAME_TIMER();
iLocal_436=1;
}
if(iLocal_436==1 && MISC::GET_GAME_TIMER() > iLocal_237 + 4000){
func_258("TRV4_FAIL1");
}
}
elseif(iLocal_436==1){
iLocal_436=0;
}}}
}}}}}
if(iLocal_220==5 || iLocal_220==6){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -928.9f, -2935f, 13f, 1) < 5f && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
func_258("TRV4_FAIL1");
}}
if(iLocal_220==2 || iLocal_220==4){
if(PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())){
if(func_433(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2, 200, 0)){
func_258("TRV4_FAIL2");
}elseif(!func_233("TRV4_HELP3")){
func_438("TRV4_HELP3");
}}elseif(func_233("TRV4_HELP3")){
HUD::CLEAR_HELP(1);
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_262)){
if(!PED::IS_PED_INJURED(iLocal_262)){
ENTITY::SET_ENTITY_INVINCIBLE(iLocal_262, 0);
ENTITY::SET_ENTITY_HEALTH(iLocal_262, 0, 0);
}}}}
if(iLocal_356==1){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_262)){
if(PED::IS_PED_INJURED(iLocal_262)){
func_258("TRV4_FAIL3");
}}}
if(iLocal_220==4){
if(iLocal_348==1){
if(!PED::IS_PED_INJURED(iLocal_262)){
if(func_13(PLAYER::PLAYER_PED_ID(), iLocal_262) > 300f){
if(iLocal_402==1){
HUD::CLEAR_PRINTS();
func_20("TRV4_WARN1", 7500, 1);
iLocal_402=0;
}}elseif(iLocal_402==0){
iLocal_402=1;
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) < 40000f){
if(func_13(PLAYER::PLAYER_PED_ID(), iLocal_262) > 400f){
func_258("TRV4_FAIL1");
}}elseif(func_13(PLAYER::PLAYER_PED_ID(), iLocal_262) > 350f){
func_258("TRV4_FAIL1");
}
}}}}
if(iLocal_222==3){
if(iLocal_423==1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -934.4f, -2927.2f, 13.2f, 1) > 25f || MISC::GET_GAME_TIMER() > iLocal_235 + 12000){
func_258("TRV4_FAIL1");
}}}}
if(iLocal_220==2 || iLocal_220==4){
if(PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID())){
func_258("TRV4_FAIL1");
}}
if(iLocal_220==4){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_276)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 111509f){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1070.838f, -2942.241f, 12.19534f, -1009.038f, -2977.609f, 17.44443f, 89.5f, 0, 1, 0)){
func_258("TRV4_FAIL1");
}}
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_276) > 122000f){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::IS_ENTITY_UPSIDEDOWN(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))){
if(iLocal_438==0){
iLocal_238=MISC::GET_GAME_TIMER();
iLocal_438=1;
}
if(iLocal_438==1){
if(MISC::GET_GAME_TIMER() > iLocal_238 + 4000){
func_258("TRV4_FAIL1");
}}}else{
iLocal_438=0;
}
}}}}}
if(iLocal_220==2){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.4108f, -2173.417f, -1.911488f, -605.6846f, -2358.229f, 27.32842f, 250f, 0, 1, 0)){
func_258("TRV4_FAIL1");
}}
if(iLocal_403==1){
if(func_437()){
func_436();
}}}}


void func_436(){
func_444(PLAYER::PLAYER_PED_ID(), 0);
func_440();
}

int func_437(){
if(Global_3){
return 1;
}
if(Global_100833==7 || Global_100833==8){
return 1;
}
return 0;
}


void func_438(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}


void func_439(bool bParam0){
if(bParam0){
StringCopy(&Global_112866, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
Global_112860=1;
}else{
StringCopy(&Global_112866, "NULL", 24);
Global_112860=0;
}}


void func_440(){
func_446(24, 1);
AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", 0);
VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 1, 1);
func_441();
func_232(&uLocal_26, 0, 0);
MISC::SET_INSTANCE_PRIORITY_HINT(0);
PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
if(ENTITY::DOES_ENTITY_EXIST(iLocal_285)){
VEHICLE::DELETE_VEHICLE(&iLocal_285);
}
func_439(0);
if(PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_261)){
PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_261);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_262)){
if(!PED::IS_PED_INJURED(iLocal_262)){
PED::SET_PED_KEEP_TASK(iLocal_262, 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_262);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_264)){
if(!PED::IS_PED_INJURED(iLocal_264)){
PED::SET_PED_KEEP_TASK(iLocal_264, 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_264);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_267)){
if(!PED::IS_PED_INJURED(iLocal_267)){
PED::SET_PED_KEEP_TASK(iLocal_267, 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_267);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_268)){
if(!PED::IS_PED_INJURED(iLocal_268)){
PED::SET_PED_KEEP_TASK(iLocal_268, 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_268);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_269)){
if(!PED::IS_PED_INJURED(iLocal_269)){
PED::SET_PED_KEEP_TASK(iLocal_269, 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_269);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_270)){
if(!PED::IS_PED_INJURED(iLocal_270)){
PED::SET_PED_KEEP_TASK(iLocal_270, 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_270);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_271)){
if(!PED::IS_PED_INJURED(iLocal_271)){
PED::SET_PED_KEEP_TASK(iLocal_271, 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_271);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_272)){
if(!PED::IS_PED_INJURED(iLocal_272)){
PED::SET_PED_KEEP_TASK(iLocal_272, 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_272);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_263[0])){
if(!PED::IS_PED_INJURED(iLocal_263[0])){
PED::SET_PED_KEEP_TASK(iLocal_263[0], 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_263[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_263[1])){
if(!PED::IS_PED_INJURED(iLocal_263[1])){
PED::SET_PED_KEEP_TASK(iLocal_263[1], 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_263[1]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_263[2])){
if(!PED::IS_PED_INJURED(iLocal_263[2])){
PED::SET_PED_KEEP_TASK(iLocal_263[2], 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_263[2]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_263[3])){
if(!PED::IS_PED_INJURED(iLocal_263[3])){
PED::SET_PED_KEEP_TASK(iLocal_263[3], 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_263[3]));
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_265[0])){
if(!PED::IS_PED_INJURED(uLocal_265[0])){
PED::SET_PED_KEEP_TASK(uLocal_265[0], 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_265[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_265[1])){
if(!PED::IS_PED_INJURED(uLocal_265[1])){
PED::SET_PED_KEEP_TASK(uLocal_265[1], 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_265[1]));
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_265[2])){
if(!PED::IS_PED_INJURED(uLocal_265[2])){
PED::SET_PED_KEEP_TASK(uLocal_265[2], 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_265[2]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[0])){
if(!PED::IS_PED_INJURED(iLocal_266[0])){
PED::SET_PED_KEEP_TASK(iLocal_266[0], 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_266[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[1])){
if(!PED::IS_PED_INJURED(iLocal_266[1])){
PED::SET_PED_KEEP_TASK(iLocal_266[1], 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_266[1]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[2])){
if(!PED::IS_PED_INJURED(iLocal_266[2])){
PED::SET_PED_KEEP_TASK(iLocal_266[2], 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_266[2]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[3])){
if(!PED::IS_PED_INJURED(iLocal_266[3])){
PED::SET_PED_KEEP_TASK(iLocal_266[3], 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_266[3]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[4])){
if(!PED::IS_PED_INJURED(iLocal_266[4])){
PED::SET_PED_KEEP_TASK(iLocal_266[4], 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_266[4]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[5])){
if(!PED::IS_PED_INJURED(iLocal_266[5])){
PED::SET_PED_KEEP_TASK(iLocal_266[5], 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_266[5]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[6])){
if(!PED::IS_PED_INJURED(iLocal_266[6])){
PED::SET_PED_KEEP_TASK(iLocal_266[6], 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_266[6]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[7])){
if(!PED::IS_PED_INJURED(iLocal_266[7])){
PED::SET_PED_KEEP_TASK(iLocal_266[7], 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_266[7]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[8])){
if(!PED::IS_PED_INJURED(iLocal_266[8])){
PED::SET_PED_KEEP_TASK(iLocal_266[8], 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_266[8]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[9])){
if(!PED::IS_PED_INJURED(iLocal_266[9])){
PED::SET_PED_KEEP_TASK(iLocal_266[9], 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_266[9]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_266[10])){
if(!PED::IS_PED_INJURED(iLocal_266[10])){
PED::SET_PED_KEEP_TASK(iLocal_266[10], 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_266[10]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_273[0])){
if(!PED::IS_PED_INJURED(iLocal_273[0])){
PED::SET_PED_KEEP_TASK(iLocal_273[0], 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_273[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_274[0])){
if(!PED::IS_PED_INJURED(iLocal_274[0])){
PED::SET_PED_KEEP_TASK(iLocal_274[0], 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_274[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_274[1])){
if(!PED::IS_PED_INJURED(iLocal_274[1])){
PED::SET_PED_KEEP_TASK(iLocal_274[1], 1);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_274[1]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_276)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_276);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_277)){
if(ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_277, 0)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_277);
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_280)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_280);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_281)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_281);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_282)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_282);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_283)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_283);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_285)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_285);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_287)){
if(ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_287, 0)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_287);
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_291[0])){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_291[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_291[1])){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_291[1]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_278[0])){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_278[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_278[1])){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_278[1]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_291[0])){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_291[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_291[1])){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_291[1]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_284[0])){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_284[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_284[1])){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_284[1]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_286[0])){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_286[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_279)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_279);
}
AUDIO::CANCEL_MUSIC_EVENT("TRV4_START");
AUDIO::CANCEL_MUSIC_EVENT("TRV4_GAMEPLAY_START");
AUDIO::CANCEL_MUSIC_EVENT("TRV4_START_CS_SKIP");
AUDIO::CANCEL_MUSIC_EVENT("TRV4_START_RT");
AUDIO::CANCEL_MUSIC_EVENT("TRV4_FOOT_CHASE_RT");
AUDIO::CANCEL_MUSIC_EVENT("TRV4_EVADE_RT");
AUDIO::CANCEL_MUSIC_EVENT("TRV4_CAR_ENTERED");
AUDIO::CANCEL_MUSIC_EVENT("TRV4_AIRPORT_ENTERED");
AUDIO::CANCEL_MUSIC_EVENT("TRV4_CHASE");
AUDIO::CANCEL_MUSIC_EVENT("TRV4_JET_ENTERED");
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_260)){
OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_260, 0);
}
if(GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_670)){
GRAPHICS::REMOVE_PARTICLE_FX(uLocal_670, 0);
}
HUD::CLEAR_GPS_MULTI_ROUTE();
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_303);
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("digitalOverlay");
PATHFIND::SET_ROADS_IN_AREA(-617f, -2274f, 0f, -406.01f, -2044f, 15f, 1, 1);
PATHFIND::SET_ROADS_IN_AREA(-482f, -2118f, 6f, -1072f, -2724f, 17f, 1, 1);
if(TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5")){
TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Trev4_5", 0, 0.5f, 1f);
}
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
MISC::SET_TIME_SCALE(1f);
HUD::DISPLAY_RADAR(1);
HUD::DISPLAY_HUD(1);
STREAMING::REMOVE_ANIM_DICT("missheist_agency3aig_lift_waitped_a");
func_314(0);
CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
if(func_19(2)){
func_18(2, 0);
}
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_441(){
int iVar0;
Global_63514=0;
iVar0=0;
iVar0=0;
while (iVar0 < 64){
Global_63515[iVar0 /*2*/]=0;
iVar0++;
}}


void func_442(){
int iVar0;
if(SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse")){
start_new_script("buddyDeathResponse", 1424);
}
if(Global_113810.f_9088 || func_453(0)){
if(!func_443()){
iVar0=func_8();
if(iVar0 !=-1){
if(!func_261(iVar0)){
return;
}
MISC::SET_BIT(&(Global_91565[iVar0 /*5*/].f_1), 5);
return;
}}else{
func_266();
}}}

int func_443(){
if(((Global_100833==13 || Global_100833==10) || Global_100833==11) || Global_100833==12){
return 0;
}
return 1;
}


void func_444(int iParam0, int iParam1){
int iVar0;
iVar0=0;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
if(WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 0)){
if(iVar0 !=0 && iVar0 !=joaat("weapon_unarmed")){
if(!func_445(iParam1, iVar0)){
iVar0=0;
}}}}
if(Global_100870 > 0){
Global_107357.f_21[iParam1]=iVar0;
}else{
Global_104373.f_21[iParam1]=iVar0;
}}

int func_445(int iParam0, int iParam1){
int iVar0;
iVar0=0;
if(Global_100870 > 0){
iVar0=0;
while (iVar0 < 44){
if(Global_107357.f_812[iParam0 /*477*/][iVar0 /*5*/]==iParam1){
if(Global_107357.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0){
return 1;
}}
iVar0++;
}
iVar0=0;
while (iVar0 < 51){
if(Global_107357.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/]==iParam1){
if(Global_107357.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0){
return 1;
}}
iVar0++;
}}else{
iVar0=0;
while (iVar0 < 44){
if(Global_104373.f_812[iParam0 /*477*/][iVar0 /*5*/]==iParam1){
if(Global_104373.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0){
return 1;
}}
iVar0++;
}
iVar0=0;
while (iVar0 < 51){
if(Global_104373.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/]==iParam1){
if(Global_104373.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0){
return 1;
}}
iVar0++;
}}
return 0;
}


void func_446(int iParam0, bool bParam1){
char* sVar0;
int iVar1;
int iVar2;
sVar0="NULL";
iVar1=0;
sVar0=func_450(iParam0, &iVar1);
if(!MISC::ARE_STRINGS_EQUAL("NONE", sVar0) && iVar1 !=0){
if(bParam1){
if(INTERIOR::IS_INTERIOR_DISABLED(iVar1)){
return;
}
if(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==iVar1){
func_449(iParam0, 1);
return;
}
iVar2=INTERIOR::GET_INTERIOR_FROM_PRIMARY_VIEW();
if(iVar2 !=0 && iVar2==iVar1){
func_449(iParam0, 1);
return;
}}else{
if(!INTERIOR::IS_INTERIOR_DISABLED(iVar1)){
return;
}
if(func_447(iParam0)){
func_449(iParam0, 0);
}}
INTERIOR::DISABLE_INTERIOR(iVar1, bParam1);
if(bParam1){
}}}

int func_447(int iParam0){
struct<2> Var0;
Var0={
func_448(iParam0) 
};
if(Var0.f_1 !=-1 && MISC::IS_BIT_SET(Global_38726[Var0.f_1], Var0.f_0)){
return 1;
}
return 0;
}


struct<2> func_448(int iParam0){
struct<2> Var0;
Var0.f_0=(iParam0 % 32);
Var0.f_1=(iParam0 / 32);
if(Var0.f_1 >=8){
Var0.f_0=-1;
Var0.f_1=-1;
}
return Var0;
}


void func_449(int iParam0, bool bParam1){
struct<2> Var0;
Var0={
func_448(iParam0) 
};
if(Var0.f_1==-1){
return;
}
if(bParam1){
MISC::SET_BIT(&(Global_38726[Var0.f_1]), Var0.f_0);
}else{
MISC::CLEAR_BIT(&(Global_38726[Var0.f_1]), Var0.f_0);
}}


var func__450(int iParam0, int iParam1){
struct<5> Var0;
Var0={
func_451(iParam0) 
};
*iParam1=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
return Var0.f_4;
}


struct<5> func_451(int iParam0){
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
func_452(1, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (1)";
break;
case 26:
Var1={
func_452(2, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (2)";
break;
case 27:
Var1={
func_452(3, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (3)";
break;
case 28:
Var1={
func_452(4, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (4)";
break;
case 29:
Var1={
func_452(5, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (5)";
break;
case 30:
Var1={
func_452(6, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (6)";
break;
case 31:
Var1={
func_452(7, 0) 
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
func_452(35, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (9)";
break;
case 34:
Var1={
func_452(36, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (10)";
break;
case 35:
Var1={
func_452(37, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (11)";
break;
case 36:
Var1={
func_452(38, 0) 
};
Var0={
-20.1f, -580.8f, 91.3f 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (12)";
break;
case 37:
Var1={
func_452(39, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (13)";
break;
case 38:
Var1={
func_452(40, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (14)";
break;
case 39:
Var1={
func_452(41, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (15)";
break;
case 40:
Var1={
func_452(42, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (16)";
break;
case 41:
Var1={
func_452(43, 0) 
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
func_452(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01a_dlc";
Var0.f_4=Var0.f_3;
break;
case 84:
Var1={
func_452(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01b_dlc";
Var0.f_4=Var0.f_3;
break;
case 85:
Var1={
func_452(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01c_dlc";
Var0.f_4=Var0.f_3;
break;
case 86:
Var1={
func_452(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02a_dlc";
Var0.f_4=Var0.f_3;
break;
case 87:
Var1={
func_452(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02b_dlc";
Var0.f_4=Var0.f_3;
break;
case 88:
Var1={
func_452(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02c_dlc";
Var0.f_4=Var0.f_3;
break;
case 89:
Var1={
func_452(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03a_dlc";
Var0.f_4=Var0.f_3;
break;
case 90:
Var1={
func_452(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03b_dlc";
Var0.f_4=Var0.f_3;
break;
case 91:
Var1={
func_452(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03c_dlc";
Var0.f_4=Var0.f_3;
break;
case 92:
Var1={
func_452(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01a_dlc";
Var0.f_4=Var0.f_3;
break;
case 93:
Var1={
func_452(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01b_dlc";
Var0.f_4=Var0.f_3;
break;
case 94:
Var1={
func_452(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01c_dlc";
Var0.f_4=Var0.f_3;
break;
case 95:
Var1={
func_452(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02a_dlc";
Var0.f_4=Var0.f_3;
break;
case 96:
Var1={
func_452(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02b_dlc";
Var0.f_4=Var0.f_3;
break;
case 97:
Var1={
func_452(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02c_dlc";
Var0.f_4=Var0.f_3;
break;
case 98:
Var1={
func_452(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03a_dlc";
Var0.f_4=Var0.f_3;
break;
case 99:
Var1={
func_452(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03b_dlc";
Var0.f_4=Var0.f_3;
break;
case 100:
Var1={
func_452(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03c_dlc";
Var0.f_4=Var0.f_3;
break;
case 101:
Var1={
func_452(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01a_dlc";
Var0.f_4=Var0.f_3;
break;
case 102:
Var1={
func_452(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01b_dlc";
Var0.f_4=Var0.f_3;
break;
case 103:
Var1={
func_452(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01c_dlc";
Var0.f_4=Var0.f_3;
break;
case 104:
Var1={
func_452(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02a_dlc";
Var0.f_4=Var0.f_3;
break;
case 105:
Var1={
func_452(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02b_dlc";
Var0.f_4=Var0.f_3;
break;
case 106:
Var1={
func_452(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02c_dlc";
Var0.f_4=Var0.f_3;
break;
case 107:
Var1={
func_452(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03a_dlc";
Var0.f_4=Var0.f_3;
break;
case 108:
Var1={
func_452(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03b_dlc";
Var0.f_4=Var0.f_3;
break;
case 109:
Var1={
func_452(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03c_dlc";
Var0.f_4=Var0.f_3;
break;
case 110:
Var1={
func_452(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01a_dlc";
Var0.f_4=Var0.f_3;
break;
case 111:
Var1={
func_452(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01b_dlc";
Var0.f_4=Var0.f_3;
break;
case 112:
Var1={
func_452(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01c_dlc";
Var0.f_4=Var0.f_3;
break;
case 113:
Var1={
func_452(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02a_dlc";
Var0.f_4=Var0.f_3;
break;
case 114:
Var1={
func_452(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02b_dlc";
Var0.f_4=Var0.f_3;
break;
case 115:
Var1={
func_452(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02c_dlc";
Var0.f_4=Var0.f_3;
break;
case 116:
Var1={
func_452(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03a_dlc";
Var0.f_4=Var0.f_3;
break;
case 117:
Var1={
func_452(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03b_dlc";
Var0.f_4=Var0.f_3;
break;
case 118:
Var1={
func_452(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03c_dlc";
Var0.f_4=Var0.f_3;
break;
case 119:
Var1={
func_452(91, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="bkr_biker_dlc_int_01";
Var0.f_4=Var0.f_3;
break;
case 120:
Var1={
func_452(97, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="bkr_biker_dlc_int_02";
Var0.f_4=Var0.f_3;
break;
case 121:
Var1={
func_452(103, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 122:
Var1={
func_452(104, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 123:
Var1={
func_452(105, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 124:
Var1={
func_452(106, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 125:
Var1={
func_452(107, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 126:
Var1={
func_452(108, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 127:
Var1={
func_452(109, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 128:
Var1={
func_452(110, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 129:
Var1={
func_452(111, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 130:
Var1={
func_452(112, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 131:
Var1={
func_452(113, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 132:
Var1={
func_452(114, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 133:
Var1={
func_452(103, 1) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_imptexp_mod_int_01";
Var0.f_4=Var0.f_3;
break;
case 134:
Var1={
func_452(106, 1) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_imptexp_mod_int_01";
Var0.f_4=Var0.f_3;
break;
case 135:
Var1={
func_452(109, 1) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_imptexp_mod_int_01";
Var0.f_4=Var0.f_3;
break;
case 136:
Var1={
func_452(112, 1) 
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


struct<6> func_452(int iParam0, bool bParam1){
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

int func_453(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78938, 0);
}