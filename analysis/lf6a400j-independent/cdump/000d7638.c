
void FUN_000d7638(char param_1,ushort param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((param_1 != '\0') && (0x24cd < param_2)) {
    uVar1 = 1;
  }
  *param_3 = uVar1;
  DAT_fffecf04 = 0x24cd < param_2;
  return;
}

