
/* WARNING: Removing unreachable block (ram,0x000e3576) */
/* WARNING: Removing unreachable block (ram,0x000e357c) */

void FUN_000e3548(ushort param_1,short param_2,short *param_3)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  
  iVar1 = __sdiv32_r1_by_r0(param_2 * 100,0x30);
  uVar2 = (uint)param_1 + iVar1;
  if (((iVar1 < 0) || (-1 < (int)uVar2)) && ((int)uVar2 < 0x8000)) {
    if ((int)uVar2 < -0x8000) {
      uVar2 = 0xffff8000;
    }
  }
  else {
    uVar2 = 0x7fff;
  }
  sVar3 = (short)uVar2;
  if ((sVar3 < 1) || ((uVar2 & 0xffff) < 0x3201)) {
    if (sVar3 < 0) {
      sVar3 = 0;
    }
  }
  else {
    sVar3 = 0x3200;
  }
  *param_3 = sVar3;
  return;
}

