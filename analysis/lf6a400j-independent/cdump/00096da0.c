
void FUN_00096da0(char param_1,char param_2,uint param_3,ushort param_4,uint param_5,byte param_6,
                 byte param_7,byte param_8,undefined4 param_9,undefined1 *param_10,char *param_11)

{
  bool bVar1;
  uint uVar2;
  char cVar4;
  uint uVar3;
  
  if (param_2 == '\0') {
    bVar1 = DAT_fffebf6b <= param_7;
  }
  else {
    bVar1 = DAT_fffebf68 <= param_6;
  }
  if ((((0xcccc < param_4) || (!(bool)(bVar1 ^ 1))) || (3 < param_8)) ||
     ((param_5 = param_5 & 0xffff, param_5 < 0xa00 || (0xfffe < param_5)))) {
    cVar4 = '\0';
    if (DAT_fffebf6a != '\0') {
      cVar4 = DAT_fffebf6a + -1;
    }
  }
  else {
    uVar2 = LK_13503C((uint)&T_02D494,param_5);
    cVar4 = (char)uVar2;
  }
  if ((param_1 != '\0') || (0xcccc < param_4)) {
    cVar4 = '\0';
  }
  *param_11 = cVar4;
  if (cVar4 == '\0') {
    uVar3 = __sdiv32_r1_by_r0((uint)DAT_fffebf69 << 6,0x19);
    uVar2 = 0;
    if (((uVar3 & 0xffff) != 0) && (uVar2 = 0xff, (uVar3 - 1 & 0xffff) < 0x100)) {
      uVar2 = uVar3 - 1;
    }
    uVar2 = (uVar2 & 0xff) * 100;
    DAT_fffebf69 = (byte)(uVar2 >> 8);
    if (uVar2 >> 8 == 0) {
      DAT_fffebf69 = 0;
    }
  }
  else if (param_2 == '\0') {
    DAT_fffebf69 = 6;
  }
  else {
    uVar2 = LK_133B38((uint)&T_02D488,param_3 & 0xff);
    DAT_fffebf69 = (byte)uVar2;
  }
  if (param_1 != '\0') {
    DAT_fffebf69 = 0;
  }
  *param_10 = DAT_fffebf69;
  DAT_fffebf68 = param_6;
  DAT_fffebf6b = param_7;
  DAT_fffebf6a = cVar4;
  return;
}

