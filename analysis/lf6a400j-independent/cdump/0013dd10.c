
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0013dd10(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = (int)*(char *)(param_1 + 1);
  pcVar1 = &DAT_00169248 + iVar2;
  if (*pcVar1 != '\0') {
    _DAT_fffff710 = _DAT_fffff710 & 0xfffe;
    _DAT_fffff716 = 0x9c3;
    _DAT_fffff712 = 0x40;
    _DAT_ffffed12 = _DAT_ffffed12 & 0xf0ff | 0x300;
    _DAT_fffff714 = 0;
    _DAT_ffff3d28 = 0;
    _DAT_ffff3d2c = 0;
    DAT_ffff3d30 = 1;
    iVar2 = 0;
    DAT_ffff3d31 = 0;
  }
  DAT_ffff2658 = *pcVar1;
  return iVar2;
}

