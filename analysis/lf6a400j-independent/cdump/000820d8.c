
void FUN_000820d8(ushort param_1,uint param_2,uint param_3,uint param_4,ushort *param_5,
                 ushort *param_6)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  
  uVar1 = LK_138F64((uint)&T_02C7B4,param_2,param_3);
  iVar2 = ((param_4 & 0xffff) * (uVar1 & 0xffff) >> 0xf) - ((param_4 & 0xffff) * 32000 >> 0x10);
  uVar3 = 0xffff;
  if ((iVar2 < (int)&DAT_0000c180) && (uVar3 = 0, -0x3e81 < iVar2)) {
    uVar3 = (short)iVar2 + 16000;
  }
  *param_6 = uVar3;
  if (uVar3 < param_1) {
    *param_5 = param_1;
  }
  else {
    *param_5 = uVar3;
  }
  return;
}

