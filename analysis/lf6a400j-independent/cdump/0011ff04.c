
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011ff04(ushort param_1,byte param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,ushort *param_8)

{
  ushort uVar1;
  
  if ((((param_2 != 0) || (param_3 != '\0')) || (param_4 != '\0')) ||
     (((param_5 != '\0' || (param_6 != '\0')) || (uVar1 = 0xffff, param_7 != '\0')))) {
    uVar1 = _DAT_fffee15c;
  }
  if (DAT_fffee15e < param_2) {
    uVar1 = param_1 - 1;
    if (uVar1 < param_1) {
      uVar1 = 0xffff;
    }
    if (uVar1 < 0x43) {
      uVar1 = 0x42;
    }
    if (0xfffe < uVar1) {
      uVar1 = 0xffff;
    }
  }
  *param_8 = uVar1;
  DAT_fffee15e = param_2;
  _DAT_fffee15c = uVar1;
  return;
}

