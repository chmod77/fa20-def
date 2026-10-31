
void FUN_000e8d98(char param_1,short param_2,byte param_3,byte param_4,undefined1 *param_5,
                 byte *param_6)

{
  undefined1 uVar1;
  byte bVar2;
  
  bVar2 = 0;
  if (param_1 != '\0') {
    if (DAT_fffed3f8 == -1) {
      bVar2 = 0xff;
    }
    else {
      bVar2 = DAT_fffed3f8 + 1;
    }
  }
  uVar1 = 0;
  if (((param_1 != '\0') && (0x7c < bVar2)) && ((0x7ffe < param_2 || (param_3 < param_4)))) {
    uVar1 = 1;
  }
  *param_5 = uVar1;
  *param_6 = bVar2;
  DAT_fffed3f8 = bVar2;
  return;
}

