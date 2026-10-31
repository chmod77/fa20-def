
/* WARNING: Removing unreachable block (ram,0x00128784) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00128768(char param_1,ushort param_2,short *param_3)

{
  short sVar1;
  
  sVar1 = _DAT_fffee36c;
  if ((((param_1 != '\0') && (param_2 < 0x4c)) && (0x25 < param_2)) &&
     (sVar1 = -1, _DAT_fffee36c != -1)) {
    sVar1 = _DAT_fffee36c + 1;
  }
  if (param_1 == '\0') {
    sVar1 = 0;
  }
  *param_3 = sVar1;
  _DAT_fffee36c = sVar1;
  return;
}

