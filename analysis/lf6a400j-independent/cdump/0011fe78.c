
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011fe78(ushort param_1,byte param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,ushort *param_8)

{
  if ((((param_2 == 0) && (param_3 == '\0')) && (param_4 == '\0')) &&
     (((param_5 == '\0' && (param_6 == '\0')) && (param_7 == '\0')))) {
    _DAT_fffee158 = 0x42;
  }
  if (DAT_fffee15a < param_2) {
    _DAT_fffee158 = param_1;
    if (param_1 < 0x43) {
      _DAT_fffee158 = 0x42;
    }
    if (0x3d6 < _DAT_fffee158) {
      _DAT_fffee158 = 0x3d7;
    }
  }
  *param_8 = _DAT_fffee158;
  DAT_fffee15a = param_2;
  return;
}

