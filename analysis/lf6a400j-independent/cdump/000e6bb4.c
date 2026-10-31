
void FUN_000e6bb4(char param_1,char param_2,undefined1 *param_3,byte *param_4)

{
  undefined1 uVar1;
  byte bVar2;
  
  bVar2 = 0;
  if (param_1 != '\0') {
    bVar2 = DAT_fffed378;
  }
  if (param_2 == '\0') {
    uVar1 = 0;
    if ((0x4a < bVar2) && (param_1 != '\0')) {
      uVar1 = 1;
    }
    *param_3 = uVar1;
  }
  else {
    *param_3 = 0;
  }
  *param_4 = bVar2;
  if (param_1 == '\0') {
    DAT_fffed378 = '\0';
  }
  else if (bVar2 == 0xff) {
    DAT_fffed378 = -1;
  }
  else {
    DAT_fffed378 = bVar2 + 1;
  }
  return;
}

