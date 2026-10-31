
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00131138(char param_1,char param_2,ushort param_3,short *param_4)

{
  short sVar1;
  
  sVar1 = _DAT_fffee4b4;
  if ((((param_1 != '\0') && (param_2 == '\0')) && (0x471a < param_3)) &&
     ((param_3 < 0x7801 && (sVar1 = -1, _DAT_fffee4b4 != -1)))) {
    sVar1 = _DAT_fffee4b4 + 1;
  }
  *param_4 = sVar1;
  _DAT_fffee4b4 = sVar1;
  return;
}

