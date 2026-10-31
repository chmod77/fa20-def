
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00131218(char param_1,ushort param_2,ushort param_3,char param_4,char param_5,
                 ushort param_6,short *param_7)

{
  short sVar1;
  
  if ((((param_1 == '\0') || (param_2 < 0x4b0a)) || (param_3 < 0x3554)) ||
     (((param_4 != '\0' || (param_5 == '\0')) || (0x1d < param_6)))) {
    sVar1 = 0;
  }
  else {
    sVar1 = -1;
    if (_DAT_fffee4c0 != -1) {
      sVar1 = _DAT_fffee4c0 + 1;
    }
  }
  *param_7 = sVar1;
  _DAT_fffee4c0 = sVar1;
  return;
}

