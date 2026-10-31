
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d5098(ushort param_1,ushort param_2,ushort param_3,char param_4,char param_5,
                 undefined1 param_6,uint param_7,uint param_8,undefined4 *param_9,
                 undefined2 *param_10)

{
  if (0x5db < param_1) {
    param_9 = (undefined4 *)((uint)_DAT_fffece9c - (param_8 & 0xffff));
    if ((int)param_9 < 0x2c09) {
      if ((int)param_9 < 0) {
        param_9 = (undefined4 *)0x0;
      }
    }
    else {
      param_9 = &DAT_00002c08;
    }
  }
  if (((param_2 < 0x5666) && (((0x42a < param_3 || (param_4 != '\0')) && (param_5 != '\0')))) &&
     ((DAT_fffece9e == '\0' &&
      (param_9 = (undefined4 *)((uint)_DAT_fffece9c + (param_7 & 0xffff)), &DAT_00002c08 < param_9))
     )) {
    param_9 = &DAT_00002c08;
  }
  *param_10 = (short)param_9;
  _DAT_fffece9c = (short)param_9;
  DAT_fffece9e = param_6;
  return;
}

