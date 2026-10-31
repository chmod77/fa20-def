
void FUN_000bd720(char param_1,char param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  
  if ((param_1 == '\x01') && (param_2 == '\0')) {
    bVar1 = 0;
    if (0x7f < DAT_fffec8e4) {
      bVar1 = DAT_fffec8e4 + 0x80;
    }
    if (bVar1 < 0x81) {
      bVar1 = 0x80;
    }
  }
  else {
    bVar2 = DAT_fffec8e4 + 0x80;
    if (bVar2 < DAT_fffec8e4) {
      bVar2 = 0xff;
    }
    bVar1 = 0x80;
    if (bVar2 < 0x80) {
      bVar1 = bVar2;
    }
  }
  *param_3 = bVar1;
  DAT_fffec8e4 = bVar1;
  return;
}

