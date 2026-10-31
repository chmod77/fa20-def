
void FUN_000d04e8(char param_1,undefined4 param_2,undefined4 param_3,char param_4,
                 undefined1 *param_5)

{
  uint uVar1;
  
  if (param_1 == '\0') {
    for (uVar1 = 0; (uVar1 & 0xff) < 6; uVar1 = uVar1 + 1) {
      (&DAT_fffecd90)[uVar1 & 0xff] = 0;
    }
  }
  else {
    DAT_fffecd90 = (undefined1)((uint)param_3 >> 8);
    DAT_fffecd91 = (undefined1)param_3;
    DAT_fffecd92 = ((byte)((uint)param_2 >> 0x18) & 0x1f) + param_4 * ' ';
    DAT_fffecd93 = (undefined1)((uint)param_2 >> 0x10);
    DAT_fffecd94 = (undefined1)((uint)param_2 >> 8);
    DAT_fffecd95 = (undefined1)param_2;
  }
  *param_5 = DAT_fffecd90;
  param_5[1] = DAT_fffecd91;
  param_5[2] = DAT_fffecd92;
  param_5[3] = DAT_fffecd93;
  param_5[4] = DAT_fffecd94;
  param_5[5] = DAT_fffecd95;
  return;
}

