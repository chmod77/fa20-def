
void FUN_00085434(uint param_1,ushort param_2,uint param_3,ushort *param_4,short *param_5)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  
  uVar1 = LK_133F40((uint)&T_02C8E8,param_3);
  uVar2 = (ushort)uVar1;
  if (param_2 < (ushort)uVar1) {
    uVar2 = param_2;
  }
  *param_4 = uVar2;
  iVar3 = (uint)uVar2 - (param_1 & 0xffff);
  if (iVar3 < (int)&DAT_0000c180) {
    if (iVar3 < -16000) {
      *param_5 = 0;
    }
    else {
      *param_5 = (short)iVar3 + 16000;
    }
  }
  else {
    *param_5 = -1;
  }
  return;
}

