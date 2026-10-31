
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004cff4(void)

{
  int iVar1;
  short sVar3;
  code *pcVar4;
  short sVar2;
  
  pcVar4 = __udiv32_r1_by_r0;
  iVar1 = __udiv32_r1_by_r0((uint)_DAT_ffff0bea * 0x9b80,(int)(undefined *)0x11e1a3);
  sVar2 = (short)iVar1;
  sVar3 = (*pcVar4)();
  _DAT_fffeeef6 = sVar3 + sVar2 * 4;
  return;
}

