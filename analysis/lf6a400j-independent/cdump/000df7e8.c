
void FUN_000df7e8(byte param_1,char param_2,char param_3,undefined4 param_4)

{
  byte bVar1;
  
  if (param_2 != '\0') {
    if (((0x1f < param_1) && (param_1 < 0x4c)) && (param_3 == '\0')) {
      bVar1 = 0xff;
      if (DAT_fffed16c != -1) {
        bVar1 = DAT_fffed16c + 1;
      }
      goto LAB_000df81e;
    }
  }
  bVar1 = 0;
LAB_000df81e:
  *(bool *)param_4 = 4 < bVar1;
  DAT_fffed16c = bVar1;
  return;
}

