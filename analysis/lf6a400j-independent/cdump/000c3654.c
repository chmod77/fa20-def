
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c3654(char param_1,short param_2,uint param_3,short *param_4)

{
  uint uVar1;
  short sVar2;
  
  uVar1 = LK_133F40((uint)&T_02E930,param_3 & 0xffff);
  if ((int)(short)((uint)(param_2 * 0xffff) >> 0x10) < (int)(uVar1 & 0xffff)) {
    sVar2 = 0;
    if (_DAT_fffeca60 != 0) {
      sVar2 = _DAT_fffeca60 + -1;
    }
    if (sVar2 == 0) {
      sVar2 = 0;
    }
  }
  else {
    uVar1 = LK_133F40((uint)&T_02E93C,param_3 & 0xffff);
    sVar2 = (short)uVar1;
  }
  if (param_1 == '\0') {
    sVar2 = 0;
  }
  *param_4 = sVar2;
  _DAT_fffeca60 = sVar2;
  return;
}

