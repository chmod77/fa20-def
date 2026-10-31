
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011a89c(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte abStack_30 [4];
  byte abStack_2c [4];
  byte abStack_28 [4];
  
  FUN_00119e8c((int)_DAT_fffef0da,(int)_DAT_ffff1324,&DAT_ffff1326);
  FUN_0011a66c((int)_v_Ambient_Air_Temperature_F344,(int)_DAT_fffeef12,&DAT_ffff132c);
  FUN_0011b3ac((int)_DAT_fffeef12,(int)_v_Ambient_Air_Temperature_F344,(int)_DAT_ffff130c,abStack_30
              );
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0924 | 4;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff0924 & 0xfb;
  }
  DAT_ffff0924 = bVar2;
  FUN_00001550(uVar1);
  FUN_0011b44c(DAT_fffeeec1 & 1,abStack_2c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0924 | 2;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff0924 & 0xfd;
  }
  DAT_ffff0924 = bVar2;
  FUN_00001550(uVar1);
  FUN_0011b46c(DAT_fffeeec6 & 1,(int)DAT_ffff2a4f,abStack_28);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0924 | 1;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff0924 & 0xfe;
  }
  DAT_ffff0924 = bVar2;
  FUN_00001550(uVar1);
  FUN_00119a5c(_DAT_ffff1678,DAT_ffff0924 & 1,(int)_v_Engine_Speed_OBD_copy_2ADA,&DAT_ffff1310);
  FUN_00119c10((DAT_ffff0924 & 2) != 0,DAT_fffeeec1 & 1,(int)_DAT_fffeeede,
               (int)_v_Ambient_Air_Temperature_F344,_DAT_ffff2fcc,&DAT_ffff131a);
  FUN_00119d74(DAT_ffff0924 & 1,&DAT_ffff1320);
  FUN_00119e40((int)_DAT_fffef0da,(int)_DAT_ffff1326,&DAT_ffff1324);
  FUN_00119cf4(DAT_ffff0924 & 1,(int)_DAT_ffff1310,(int)DAT_ffff0400,(int)_DAT_ffff0b42,
               _DAT_ffff10f6,&DAT_ffff131e);
  FUN_0011a690((int)_DAT_fffeef12,(int)_v_Ambient_Air_Temperature_F344,(int)_DAT_ffff1324,
               &DAT_ffff132e);
  FUN_00119ca8(DAT_ffff0924 & 1,(int)_DAT_ffff131e,(int)_DAT_ffff131a,(int)_DAT_ffff1320,
               &DAT_ffff131c);
  FUN_0011a060((int)_DAT_ffff111c,(int)_DAT_fffeeef4,(int)_DAT_ffff1310,(int)_DAT_ffff1312,
               _DAT_ffff131c,_DAT_ffff130e,_DAT_fffeef12,_DAT_ffff1320,_DAT_ffff130c,
               (DAT_ffff0924 & 4) != 0,&DAT_ffff1328,&DAT_ffff132a);
  FUN_001199cc(DAT_ffff0924 & 1,(int)_DAT_ffff131a,(int)_DAT_ffff131c,(int)_DAT_ffff1328,
               &DAT_ffff130e);
  FUN_00119928(DAT_ffff0924 & 1,(int)_DAT_ffff131c,(int)_DAT_ffff130e,&DAT_ffff130c);
  FUN_00119e00(DAT_ffff0924 & 1,(int)_DAT_ffff131a,(int)_DAT_ffff130e,(int)DAT_ffff2a4f,
               &DAT_ffff1322);
  FUN_00119bc0((int)_DAT_ffff1322,(int)_DAT_ffff1312,(int)_DAT_ffff1310,(int)_DAT_fffeef12,
               &DAT_ffff1316);
  FUN_00119ab8(DAT_ffff0924 & 1,(int)_DAT_ffff131a,(int)_DAT_ffff130e,(int)DAT_ffff2a4f,
               _DAT_ffff1322,_DAT_ffff1316,&DAT_ffff1312);
  FUN_00119c00((int)_DAT_ffff1312,(int)_DAT_ffff132c,&DAT_ffff1318);
  FUN_00119b90((int)_DAT_fffeef12,(int)_DAT_ffff1318,(int)_DAT_ffff132e,&DAT_ffff1314);
  return;
}

