
/* WARNING: Removing unreachable block (ram,0x0011d0de) */

void FUN_0011d0a4(uint param_1,uint param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  bool bVar2;
  uint local_24;
  int iStack_20;
  int iStack_18;
  
  uVar1 = LK_1346FC((uint)&T_02FD88,param_2 & 0xffff);
  *param_4 = uVar1;
  bVar2 = (param_2 & 0xffff) < 0x2ea6;
  DAT_fffee0b0 = bVar2;
  if ((uVar1 == 0) || (uVar1 == 0)) {
    iStack_18 = -1;
  }
  else {
    iStack_20 = param_1 << 0x18;
    local_24 = param_1 >> 8;
    FUN_0016c364(&local_24);
    iStack_18 = iStack_20;
    if (local_24 != 0) {
      iStack_18 = -1;
    }
  }
  if ((bVar2) || (iStack_18 == 0)) {
    *param_3 = 0;
  }
  else {
    *param_3 = iStack_18;
  }
  return;
}

