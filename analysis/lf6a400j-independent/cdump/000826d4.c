
void FUN_000826d4(uint param_1,uint param_2,uint param_3,short *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = LK_138F64((uint)&T_02C7E8,param_1 & 0xffff,param_2 & 0xffff);
  uVar2 = LK_138F64((uint)&T_02C7E8,param_1 & 0xffff,param_2 & 0xffff);
  iVar3 = ((param_3 & 0xffff) * (uVar1 & 0xffff) >> 0xf) - ((uVar2 & 0xffff) * 32000 >> 0x10);
  if (iVar3 < (int)&DAT_0000c180) {
    if (iVar3 < -16000) {
      *param_4 = 0;
    }
    else {
      *param_4 = (short)iVar3 + 16000;
    }
  }
  else {
    *param_4 = -1;
  }
  return;
}

