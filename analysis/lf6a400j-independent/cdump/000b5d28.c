
/* WARNING: Removing unreachable block (ram,0x000b5d58) */

void FUN_000b5d28(uint param_1,short param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 *param_5)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = (int)param_2 + (param_1 & 0xffff);
  if (iVar1 < (int)&DAT_00010000) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    uVar2 = (undefined2)iVar1;
  }
  else {
    uVar2 = 0xffff;
  }
  *param_5 = uVar2;
  return;
}

