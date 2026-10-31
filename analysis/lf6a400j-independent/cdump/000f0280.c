
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f0280(char param_1,short param_2,char param_3,short *param_4)

{
  short sVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  if ((iVar2 < 0) && (iVar2 = -iVar2, 0x7fff < iVar2)) {
    iVar2 = 0x7fff;
  }
  sVar1 = _DAT_fffed608;
  if (((param_1 != '\0') && (0x16c < (short)iVar2)) && (sVar1 = -1, _DAT_fffed608 != -1)) {
    sVar1 = _DAT_fffed608 + 1;
  }
  if (param_1 == '\0') {
    sVar1 = _DAT_fffed608;
  }
  if (param_3 != '\0') {
    sVar1 = 0;
  }
  *param_4 = sVar1;
  _DAT_fffed608 = sVar1;
  return;
}

