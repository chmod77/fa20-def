
int FUN_000bf890(ushort param_1,ushort param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  
  iVar2 = (uint)param_1 * 0x100 + -0x3e8000;
  if (param_2 < 0x3e81) {
    param_2 = 0x3e81;
  }
  if ((ushort)(param_2 + 0xc180) == 0) {
    iVar1 = 0;
    if (iVar2 < 0) {
      *param_3 = 0;
    }
    else {
      *param_3 = 0xff;
    }
  }
  else {
    iVar1 = __sdiv32_r1_by_r0(iVar2,(uint)(ushort)(param_2 + 0xc180));
    if (iVar1 < 0x100) {
      iVar2 = iVar1;
      if (iVar1 < 0) {
        iVar2 = 0;
      }
      uVar3 = (undefined1)iVar2;
    }
    else {
      uVar3 = 0xff;
    }
    *param_3 = uVar3;
  }
  return iVar1;
}

