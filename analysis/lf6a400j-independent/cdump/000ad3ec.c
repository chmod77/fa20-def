
void FUN_000ad3ec(byte param_1,char param_2,short param_3,undefined1 *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  
  if (DAT_fffec538 == '\0') {
    bVar1 = 4;
  }
  else {
    bVar1 = 2;
  }
  uVar2 = 0;
  if (((bVar1 <= param_1) && (param_2 == '\0')) && (-0x101 < param_3)) {
    uVar2 = 1;
  }
  *param_4 = uVar2;
  DAT_fffec538 = bVar1 <= param_1;
  return;
}

