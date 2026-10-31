
int FUN_0016a974(ushort param_1,ushort param_2,short param_3,short param_4,short param_5)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_14 [2];
  
  iVar4 = (int)param_3;
  iVar3 = (int)param_4;
  if (param_2 != param_1) {
    sVar1 = param_1 - param_2;
    param_5 = param_1 - param_5;
    if (param_1 <= param_2) {
      sVar1 = -sVar1;
      param_5 = -param_5;
    }
    if (iVar3 < iVar4) {
      uVar2 = iVar4 - iVar3;
    }
    else {
      uVar2 = iVar3 - iVar4;
    }
    local_14[0] = FUN_0016a87c(param_5,uVar2 & 0xffff);
    uVar2 = FUN_0016a764(local_14,sVar1);
    uVar2 = uVar2 & 0xffff;
    if (iVar3 < iVar4) {
      uVar2 = -uVar2;
    }
    iVar4 = iVar4 + uVar2;
    if (iVar4 < -0x8000) {
      iVar4 = -0x8000;
    }
    if (0x7fff < iVar4) {
      iVar4 = 0x7fff;
    }
  }
  return iVar4;
}

