
void FUN_000b246c(uint param_1,uint param_2,char param_3,char param_4,ushort param_5,byte *param_6)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  bVar3 = 0xff;
  if (499 < param_5) {
    bVar3 = DAT_fffec69c;
  }
  if (((param_3 != '\0') && (param_4 != '\0')) && (499 < param_5)) {
    uVar1 = LK_135904((uint)&T_02E198,param_2,param_1);
    uVar2 = 0;
    if (0x3f < DAT_fffec69c) {
      uVar2 = (int)(char)DAT_fffec69c - 0x40;
    }
    bVar3 = (byte)uVar2;
    if ((uVar2 & 0xff) <= (uVar1 & 0xff)) {
      bVar3 = (byte)uVar1;
    }
  }
  *param_6 = bVar3;
  DAT_fffec69c = bVar3;
  return;
}

