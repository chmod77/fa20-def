
void FUN_000dffc0(char param_1,char param_2,byte param_3,char param_4,undefined1 *param_5,
                 undefined4 param_6)

{
  bool bVar1;
  undefined1 uVar2;
  byte bVar3;
  
  bVar3 = 0;
  if (param_2 != '\0') {
    bVar3 = 0xff;
    if (DAT_fffed18c != -1) {
      bVar3 = DAT_fffed18c + 1;
    }
  }
  bVar1 = false;
  if ((((param_1 == '\0') && (0x31 < bVar3)) && (0x1f < param_3)) && (param_3 < 0x40)) {
    bVar1 = true;
  }
  if (param_4 == '\0') {
    uVar2 = 1;
    if ((param_1 == '\0') && (!bVar1)) {
      uVar2 = 0;
    }
    *param_5 = uVar2;
  }
  else {
    *param_5 = 0;
  }
  *(bool *)param_6 = bVar1;
  DAT_fffed18c = bVar3;
  return;
}

