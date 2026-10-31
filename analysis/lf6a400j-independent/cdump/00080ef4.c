
void FUN_00080ef4(uint param_1,ushort param_2,ushort param_3,ushort *param_4)

{
  uint uVar1;
  undefined *p1;
  
  p1 = (undefined *)(param_1 & 0xffff);
  if ((&DAT_00007a00 < p1) || (0xf2b2 < param_3)) {
    uVar1 = LK_1351FC((uint)&T_02C394,(uint)p1);
  }
  else if ((&DAT_00007a00 < p1) || (0xf2b2 < param_3)) {
    uVar1 = LK_1351FC((uint)&T_02C3A0,(uint)p1);
  }
  else {
    uVar1 = LK_1351FC((uint)&T_02C3AC,(uint)p1);
  }
  if ((uint)param_2 < (uVar1 & 0xffff)) {
    *param_4 = param_2;
  }
  else {
    *param_4 = (ushort)uVar1;
  }
  DAT_fffebac5 = &DAT_00007a00 < p1;
  DAT_fffebac6 = &DAT_00007a00 < p1;
  DAT_fffebac7 = 0xf2b2 < param_3;
  DAT_fffebac4 = 0xf2b2 < param_3;
  return;
}

