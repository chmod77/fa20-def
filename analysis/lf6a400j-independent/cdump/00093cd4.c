
/* WARNING: Removing unreachable block (ram,0x00093d1e) */
/* WARNING: Removing unreachable block (ram,0x00093d2a) */

void FUN_00093cd4(byte param_1,byte param_2,uint param_3,int param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_1c;
  int iStack_18;
  
  if ((DAT_fffebeb9 < param_1) || (DAT_fffebeb8 < param_2)) {
    *param_5 = 0;
  }
  else {
    uVar2 = (param_3 & 0xffff) * 0x9b80;
    iStack_18 = (uVar2 & 0xffff0000) + (uVar2 & 0xffff);
    local_1c = 0;
    uVar2 = FUN_0016c128(&local_1c,&DAT_00009fab);
    uVar1 = uVar2 + param_4;
    if (uVar1 < uVar2) {
      uVar1 = 0xffffffff;
    }
    *param_5 = uVar1;
  }
  DAT_fffebeb9 = param_1;
  DAT_fffebeb8 = param_2;
  return;
}

