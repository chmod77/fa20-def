
void FUN_000e8eb4(char param_1,char param_2,char param_3,ushort param_4,undefined1 *param_5,
                 byte *param_6)

{
  bool bVar1;
  undefined1 uVar2;
  byte bVar3;
  
  bVar1 = 0xab0e < param_4;
  bVar3 = 0;
  if (!bVar1) {
    bVar3 = DAT_fffed401;
  }
  if ((((param_1 == '\0') || (param_2 == '\0')) || (bVar1)) || (uVar2 = 1, bVar3 < 0x19)) {
    uVar2 = DAT_fffed400;
  }
  if (((param_1 == '\0') || (param_2 == '\0')) || (param_3 != '\0')) {
    uVar2 = 0;
  }
  *param_5 = uVar2;
  *param_6 = bVar3;
  if (bVar1) {
    DAT_fffed401 = '\0';
  }
  else if (bVar3 == 0xff) {
    DAT_fffed401 = -1;
  }
  else {
    DAT_fffed401 = bVar3 + 1;
  }
  DAT_fffed400 = uVar2;
  return;
}

