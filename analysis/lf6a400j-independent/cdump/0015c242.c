
undefined4 FUN_0015c242(uint param_1,uint param_2,byte *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = (param_1 & 0xff) * 2;
  uVar1 = (int)(param_2 & 0x30) >> 4;
  uVar2 = 0;
  if ((DAT_ffff20e2 & 0x10) == 0) {
    if (uVar1 == (byte)(&DAT_00163878)[iVar3]) {
      *param_3 = (byte)((param_2 & 0xf) << 4);
      DAT_ffff20e2 = DAT_ffff20e2 | 0x10;
      return 0;
    }
  }
  else if (uVar1 == (byte)(&DAT_00163879)[iVar3]) {
    *param_3 = *param_3 | (byte)param_2 & 0xf;
    uVar2 = 1;
    goto LAB_0015c2aa;
  }
  DAT_ffff20e1 = 0;
LAB_0015c2aa:
  DAT_ffff20e2 = DAT_ffff20e2 & 0xef;
  return uVar2;
}

