
/* WARNING: Removing unreachable block (ram,0x00093c7a) */
/* WARNING: Removing unreachable block (ram,0x00093c86) */

void FUN_00093c34(byte param_1,uint param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_1c;
  int iStack_18;
  
  if (DAT_fffebeb4 < param_1) {
    *param_4 = 0;
  }
  else {
    uVar2 = (param_2 & 0xffff) * 0x9b80;
    iStack_18 = (uVar2 & 0xffff0000) + (uVar2 & 0xffff);
    local_1c = 0;
    uVar2 = FUN_0016c128(&local_1c,&DAT_00009fab);
    uVar1 = uVar2 + param_3;
    if (uVar1 < uVar2) {
      uVar1 = 0xffffffff;
    }
    *param_4 = uVar1;
  }
  DAT_fffebeb4 = param_1;
  return;
}

