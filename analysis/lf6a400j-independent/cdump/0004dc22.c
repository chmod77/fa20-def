
uint FUN_0004dc22(uint param_1,undefined4 param_2,undefined1 param_3)

{
  uint uVar1;
  uint local_20;
  int aiStack_1c [3];
  
  aiStack_1c[0] = (param_1 & 0xffff) * (param_1 & 0xffff);
  FUN_0016b31c(aiStack_1c[0],0x32,aiStack_1c,&local_20);
  uVar1 = FUN_0016b26c(aiStack_1c[0],local_20,0,0x100);
  FUN_0016b31c(param_2,param_3,aiStack_1c,&local_20);
  if (local_20 < uVar1) {
    if (aiStack_1c[0] == 0) {
      if (0x7fffffff < uVar1 - local_20) {
        return 0x7fffffff;
      }
      return uVar1 - local_20;
    }
    if (aiStack_1c[0] != 1) {
      return 0x80000000;
    }
  }
  else if (aiStack_1c[0] != 0) {
    return 0x80000000;
  }
  if (0x7fffffff < local_20 - uVar1) {
    return 0x80000000;
  }
  return -(local_20 - uVar1);
}

