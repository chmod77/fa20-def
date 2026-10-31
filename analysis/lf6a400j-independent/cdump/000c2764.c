
void FUN_000c2764(char param_1,char param_2,char param_3,char param_4,char param_5,
                 undefined1 param_6,undefined1 *param_7)

{
  bool bVar1;
  byte bVar2;
  
  if (param_1 == '\0') {
    DAT_fffeca19 = '\0';
  }
  else {
    if (DAT_fffeca19 == '\0') {
      DAT_fffeca18 = 0;
      DAT_fffeca16 = 0;
      DAT_fffeca19 = '\x01';
    }
    if (param_3 == '\0') {
      bVar1 = false;
      DAT_fffeca18 = 0;
    }
    else {
      bVar1 = 0x1d < DAT_fffeca18;
      DAT_fffeca18 = DAT_fffeca18 + 1;
      if (DAT_fffeca18 == 0) {
        DAT_fffeca18 = 0xff;
      }
    }
    bVar2 = DAT_fffeca16;
    if ((param_4 == '\x01') && (bVar2 = DAT_fffeca16 + 1, DAT_fffeca16 == 0xff)) {
      bVar2 = 0xff;
    }
    DAT_fffeca16 = bVar2;
    if (bVar2 < 0x1e) {
      if (bVar1) {
        DAT_fffeca14 = 0xa5;
      }
      else {
        DAT_fffeca14 = param_6;
      }
    }
    else {
      DAT_fffeca14 = 0x5a;
    }
  }
  if (param_2 == '\0') {
    DAT_fffeca17 = '\0';
  }
  else {
    if (DAT_fffeca17 == '\0') {
      DAT_fffeca1a = 0;
      DAT_fffeca1b = 0;
      DAT_fffeca17 = '\x01';
    }
    if (param_3 == '\0') {
      bVar1 = false;
      DAT_fffeca1a = 0;
    }
    else {
      bVar1 = 0x1d < DAT_fffeca1a;
      DAT_fffeca1a = DAT_fffeca1a + 1;
      if (DAT_fffeca1a == 0) {
        DAT_fffeca1a = 0xff;
      }
    }
    bVar2 = DAT_fffeca1b;
    if ((param_5 == '\x01') && (bVar2 = DAT_fffeca1b + 1, DAT_fffeca1b == 0xff)) {
      bVar2 = 0xff;
    }
    DAT_fffeca1b = bVar2;
    if (bVar2 < 0x1e) {
      if (bVar1) {
        DAT_fffeca15 = 0xa5;
      }
      else {
        DAT_fffeca15 = param_6;
      }
    }
    else {
      DAT_fffeca15 = 0x5a;
    }
  }
  if (param_1 == '\0') {
    if (param_2 == '\0') {
      *param_7 = 0xa5;
    }
    else {
      *param_7 = DAT_fffeca15;
    }
  }
  else {
    *param_7 = DAT_fffeca14;
  }
  return;
}

