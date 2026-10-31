
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001311c4(char param_1,ushort param_2,ushort param_3,char param_4,ushort param_5,
                 short *param_6)

{
  short sVar1;
  
  sVar1 = _DAT_fffee4bc;
  if ((((param_1 != '\0') && (0x4b0e < param_2)) && (0x3553 < param_3)) &&
     (((param_4 == '\0' && (0x2ca < param_5)) && (sVar1 = -1, _DAT_fffee4bc != -1)))) {
    sVar1 = _DAT_fffee4bc + 1;
  }
  *param_6 = sVar1;
  _DAT_fffee4bc = sVar1;
  return;
}

