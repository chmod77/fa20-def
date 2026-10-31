
int FUN_0016b26c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  if ((param_3 == 0) && ((param_4 == 0 || (iVar1 = __udiv32_r1_by_r0(param_1,param_4), iVar1 != 0)))
     ) {
    iVar3 = -1;
  }
  else if ((param_3 == 0) && (param_1 == 0)) {
    iVar3 = __udiv32_r1_by_r0(param_2,param_4);
  }
  else {
    if (param_3 != 0) {
      for (; param_3 != 0; param_3 = param_3 >> 1) {
        param_2 = param_2 >> 1;
        if ((param_1 & 1) != 0) {
          param_2 = param_2 + 0x80000000;
        }
        param_1 = param_1 >> 1;
        param_4 = param_4 >> 1;
        if ((param_3 & 1) != 0) {
          param_4 = param_4 + 0x80000000;
        }
      }
    }
    for (uVar2 = 0; uVar2 < 0x20; uVar2 = uVar2 + 1) {
      uVar4 = param_1 << 1 | (uint)((param_2 & 0x80000000) != 0);
      param_2 = param_2 << 1;
      iVar3 = iVar3 * 2;
      if (param_4 <= (uVar4 | -(uint)((param_1 & 0x80000000) != 0))) {
        uVar4 = uVar4 - param_4;
        iVar3 = iVar3 + 1;
      }
      param_1 = uVar4;
    }
  }
  return iVar3;
}

