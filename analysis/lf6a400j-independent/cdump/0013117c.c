
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013117c(char param_1,ushort param_2,ushort param_3,char param_4,short *param_5)

{
  short sVar1;
  
  sVar1 = _DAT_fffee4b8;
  if ((((param_1 != '\0') && (0x4b0e < param_2)) && (0x3553 < param_3)) &&
     ((param_4 == '\0' && (sVar1 = -1, _DAT_fffee4b8 != -1)))) {
    sVar1 = _DAT_fffee4b8 + 1;
  }
  *param_5 = sVar1;
  _DAT_fffee4b8 = sVar1;
  return;
}

