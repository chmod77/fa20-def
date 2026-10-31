
void FUN_000d038c(char param_1,ushort param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  DAT_fffecd8c = 0x1ff < param_2;
  uVar1 = 0;
  if (((param_1 == '\x02') || (param_1 == '\x03')) && ((bool)DAT_fffecd8c)) {
    uVar1 = 1;
  }
  *param_3 = uVar1;
  return;
}

