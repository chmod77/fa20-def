
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011a820(char param_1,char param_2,ushort param_3,undefined4 param_4,ushort param_5,
                 char param_6,ushort *param_7,undefined2 *param_8)

{
  *param_8 = 0xd;
  if (((param_1 == '\0') || (param_2 == '\0')) || (param_3 < 0xe)) {
    _DAT_fffee020 = 0xffff;
  }
  else if (param_5 < _DAT_fffee020) {
    _DAT_fffee020 = param_5;
  }
  if (((param_6 != '\0') || (param_1 == '\0')) || (DAT_fffee022 == '\0')) {
    _DAT_fffee020 = param_5;
  }
  *param_7 = _DAT_fffee020;
  DAT_fffee022 = 1;
  return;
}

