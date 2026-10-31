
void FUN_000bbbf4(char *param_1,byte *param_2,byte *param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (*param_1 == '\0') {
    uVar1 = (uint)*param_3 + (uint)*param_2;
    uVar2 = 0xff;
    if ((uVar1 < 0x180) && (uVar2 = 0, 0x7f < uVar1)) {
      uVar2 = uVar1 - 0x80;
    }
    uVar1 = uVar2 & 0xff;
    if (0x99 < uVar1) {
      uVar2 = 0xc9;
    }
    if (uVar1 < 0x67) {
      uVar2 = 0x37;
    }
    DAT_fffec8c0 = (undefined1)uVar2;
    if ((uVar2 & 0xff) < 0x9a) {
      if ((uVar2 & 0xff) < 0x67) {
        DAT_fffec8c0 = 0x67;
      }
    }
    else {
      DAT_fffec8c0 = 0x99;
    }
  }
  if (param_1[1] == '\0') {
    uVar1 = (uint)param_3[1] + (uint)param_2[1];
    uVar2 = 0xff;
    if ((uVar1 < 0x180) && (uVar2 = 0, 0x7f < uVar1)) {
      uVar2 = uVar1 - 0x80;
    }
    uVar1 = uVar2 & 0xff;
    if (0x99 < uVar1) {
      uVar2 = 0xc9;
    }
    if (uVar1 < 0x67) {
      uVar2 = 0x37;
    }
    DAT_fffec8c1 = (undefined1)uVar2;
    if ((uVar2 & 0xff) < 0x9a) {
      if ((uVar2 & 0xff) < 0x67) {
        DAT_fffec8c1 = 0x67;
      }
    }
    else {
      DAT_fffec8c1 = 0x99;
    }
  }
  *param_4 = DAT_fffec8c0;
  param_4[1] = DAT_fffec8c1;
  return;
}

