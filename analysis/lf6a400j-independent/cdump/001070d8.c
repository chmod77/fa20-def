
void FUN_001070d8(char param_1,char param_2,ushort param_3,undefined1 *param_4)

{
  ushort uVar1;
  
  if (param_1 != '\0') {
    if (param_2 == '\0') {
      uVar1 = param_3 + 0x40;
      if (0xffbf < param_3) {
        uVar1 = 0xffff;
      }
      DAT_fffedacc = (undefined1)((ulonglong)((longlong)(int)(uint)uVar1 * 0x2000000) >> 0x20);
    }
    else {
      DAT_fffedacc = (undefined1)
                     ((ulonglong)
                      ((longlong)(int)(((uint)param_3 * 0xa0 >> 8) + 0x40 & 0xffff) * 0x2000000) >>
                     0x20);
    }
  }
  if (param_1 == '\0') {
    *param_4 = 0;
  }
  else {
    *param_4 = DAT_fffedacc;
  }
  return;
}

