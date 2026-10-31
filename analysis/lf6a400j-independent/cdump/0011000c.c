
void FUN_0011000c(ushort param_1,char param_2,ushort param_3,byte param_4,ushort param_5,
                 char param_6,char param_7,undefined1 *param_8)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = false;
  if ((param_4 < 0x1a) && (4 < param_4)) {
    bVar2 = true;
  }
  bVar1 = false;
  if ((param_3 < 0x2801) && (0x13ff < param_3)) {
    bVar1 = true;
  }
  if (((!bVar1) || (!bVar2)) || (uVar3 = 1, param_5 < 0xb19a)) {
    uVar3 = DAT_fffedd1c;
  }
  if ((param_7 == '\x01') && (DAT_fffedd1c = uVar3, 399 < param_1)) {
    DAT_fffedd1c = 0;
  }
  if ((param_6 != '\0') || (param_2 == '\x01')) {
    DAT_fffedd1c = 0;
  }
  *param_8 = DAT_fffedd1c;
  return;
}

