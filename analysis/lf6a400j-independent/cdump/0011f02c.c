
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011f02c(char param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
                 ushort *param_6)

{
  ushort uVar1;
  
  if ((param_1 == '\0') || ((uVar1 = _DAT_fffee140, param_2 <= param_3 && (param_4 <= param_2)))) {
    uVar1 = 0;
  }
  if ((param_1 == '\0') || ((param_2 <= param_3 && (param_4 <= param_2)))) {
    _DAT_fffee140 = 0;
  }
  else if (uVar1 == 0xffff) {
    _DAT_fffee140 = -1;
  }
  else {
    _DAT_fffee140 = uVar1 + 1;
  }
  if (uVar1 < param_5) {
    *param_6 = uVar1;
  }
  else {
    *param_6 = param_5;
  }
  return;
}

