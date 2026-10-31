
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a54b8(short param_1,char param_2,short *param_3)

{
  short sVar1;
  
  sVar1 = 0x7fff;
  if ((param_2 == '\0') && (sVar1 = param_1, _DAT_fffec368 < param_1)) {
    sVar1 = _DAT_fffec368;
  }
  *param_3 = sVar1;
  _DAT_fffec368 = sVar1;
  return;
}

