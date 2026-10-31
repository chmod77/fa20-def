
void FUN_000b047c(char param_1,ushort param_2,undefined1 *param_3)

{
  ushort uVar1;
  
  if (param_1 == '\0') {
    if (DAT_fffec61c == '\0') {
      DAT_fffec619 = '\0';
      DAT_fffec61d = '\0';
      DAT_fffec61a = '\0';
      DAT_fffec61c = '\x01';
      DAT_fffec61b = '\x01';
    }
    if (DAT_fffec619 == '\0') {
      uVar1 = 0x163;
    }
    else {
      uVar1 = 0xb2;
    }
    DAT_fffec619 = uVar1 <= param_2;
    if (DAT_fffec61d == '\0') {
      uVar1 = 0x4dc;
    }
    else {
      uVar1 = 0x471;
    }
    DAT_fffec61d = uVar1 <= param_2;
    if (DAT_fffec61a == '\0') {
      uVar1 = 0x960;
    }
    else {
      uVar1 = 0x8f5;
    }
    DAT_fffec61a = uVar1 <= param_2;
    if ((bool)DAT_fffec61a) {
      DAT_fffec618 = 4;
    }
    else if ((bool)DAT_fffec61d) {
      DAT_fffec618 = 3;
    }
    else if ((bool)DAT_fffec619) {
      DAT_fffec618 = 2;
    }
    else {
      DAT_fffec618 = 1;
    }
  }
  else if (DAT_fffec61b != '\0') {
    DAT_fffec618 = 1;
    DAT_fffec61b = '\0';
    DAT_fffec61c = '\0';
  }
  *param_3 = DAT_fffec618;
  return;
}

