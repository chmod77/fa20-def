
void FUN_000e5d74(char param_1,ushort param_2,ushort param_3,char param_4,undefined1 *param_5)

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  
  bVar1 = false;
  if (((param_1 != '\0') && (0x13f < param_2)) && (param_3 >= 0x22f)) {
    bVar1 = true;
  }
  bVar2 = 0;
  if (bVar1) {
    uVar3 = 1;
    bVar2 = DAT_fffed33c;
    if (0x4a < DAT_fffed33c) goto LAB_000e5dc6;
  }
  DAT_fffed33c = bVar2;
  uVar3 = DAT_fffed33d;
LAB_000e5dc6:
  if ((((param_1 != '\0') && (0x13f < param_2)) && (param_3 < 0x22f)) || (param_4 != '\0')) {
    uVar3 = 0;
  }
  *param_5 = uVar3;
  if (bVar1) {
    if (DAT_fffed33c == 0xff) {
      DAT_fffed33c = -1;
    }
    else {
      DAT_fffed33c = DAT_fffed33c + 1;
    }
  }
  else {
    DAT_fffed33c = '\0';
  }
  DAT_fffed33d = uVar3;
  return;
}

