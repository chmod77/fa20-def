
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00127160(ushort param_1,char param_2,short *param_3)

{
  short sVar1;
  
  sVar1 = 0;
  if (param_1 < 0xfa) {
    sVar1 = -1;
    if (_DAT_fffee318 != -1) {
      sVar1 = _DAT_fffee318 + 1;
    }
  }
  if (param_2 != '\0') {
    sVar1 = -1;
  }
  *param_3 = sVar1;
  _DAT_fffee318 = sVar1;
  return;
}

