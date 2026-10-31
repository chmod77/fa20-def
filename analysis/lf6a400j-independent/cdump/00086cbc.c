
void FUN_00086cbc(undefined1 param_1,char *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = DAT_fffebbd2;
  DAT_fffebbd2 = DAT_fffebbd1;
  uVar3 = (uint)DAT_fffebbd0 + (uint)DAT_fffebbd5 + (uint)DAT_fffebbd4;
  uVar2 = uVar3 + DAT_fffebbd3;
  if ((uVar2 < uVar3) || (0xff < uVar2)) {
    uVar2 = 0xff;
  }
  DAT_fffebbd3 = DAT_fffebbd4;
  DAT_fffebbd4 = DAT_fffebbd5;
  uVar3 = 0xff;
  DAT_fffebbd5 = DAT_fffebbd0;
  if ((uVar2 & 0xff) < 8) {
    uVar3 = (uVar2 & 0xff) << 5;
  }
  if ((uVar3 & 0xff) < 0x81) {
    *param_2 = -0x80 - (char)uVar3;
  }
  else {
    *param_2 = '\0';
  }
  DAT_fffebbd0 = uVar1;
  DAT_fffebbd1 = param_1;
  return;
}

