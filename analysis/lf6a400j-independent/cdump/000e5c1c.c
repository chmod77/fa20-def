
void FUN_000e5c1c(char param_1,ushort param_2,ushort param_3,char param_4,undefined1 *param_5)

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  
  bVar1 = false;
  if (((param_1 != '\0') && (0x1cb < param_2)) && (0x22e >= param_3)) {
    bVar1 = true;
  }
  bVar2 = 0;
  if (bVar1) {
    uVar3 = 1;
    bVar2 = DAT_fffed334;
    if (0x4a < DAT_fffed334) goto LAB_000e5c74;
  }
  DAT_fffed334 = bVar2;
  uVar3 = DAT_fffed335;
LAB_000e5c74:
  if ((((param_1 != '\0') && (0x1cb < param_2)) && (0x22e < param_3)) || (param_4 != '\0')) {
    uVar3 = 0;
  }
  *param_5 = uVar3;
  if (bVar1) {
    if (DAT_fffed334 == 0xff) {
      DAT_fffed334 = -1;
    }
    else {
      DAT_fffed334 = DAT_fffed334 + 1;
    }
  }
  else {
    DAT_fffed334 = '\0';
  }
  DAT_fffed335 = uVar3;
  return;
}

