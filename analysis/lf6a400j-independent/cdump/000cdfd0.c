
void FUN_000cdfd0(char param_1,char param_2,undefined1 *param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = DAT_fffeccbd;
  if ((param_2 != '\0') && (0x4e < DAT_fffeccbd)) {
    bVar1 = 0xfe;
    if (DAT_fffeccbd != 0xff) {
      bVar1 = DAT_fffeccbd;
    }
    bVar2 = 0xb2;
    if ((byte)(bVar1 + 1) < 0xb3) {
      bVar2 = bVar1 + 1;
    }
  }
  if ((param_1 != '\0') && (DAT_fffeccbd < 0xb2)) {
    bVar2 = 0;
    if (DAT_fffeccbd != 0) {
      bVar2 = DAT_fffeccbd - 1;
    }
    if (bVar2 < 0x4e) {
      bVar2 = 0x4e;
    }
  }
  *param_4 = bVar2;
  if (bVar2 < 0x4f) {
    DAT_fffeccbc = 0;
  }
  if (0xb1 < bVar2) {
    DAT_fffeccbc = 1;
  }
  *param_3 = DAT_fffeccbc;
  DAT_fffeccbd = bVar2;
  return;
}

