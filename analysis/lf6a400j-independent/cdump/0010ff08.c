
void FUN_0010ff08(ushort param_1,byte param_2,ushort param_3,char param_4,char param_5,char param_6,
                 char param_7,ushort param_8,byte param_9,ushort param_10,char param_11,
                 undefined1 *param_12)

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  
  if (param_11 == '\0') {
    *param_12 = 0;
    return;
  }
  bVar2 = 0xeb;
  if (param_2 < 0xec) {
    bVar2 = param_2;
  }
  bVar4 = 0;
  if (0x13 < param_2) {
    bVar4 = param_2 - 0x14;
  }
  uVar5 = 0xffff;
  if (param_1 < 0xf880) {
    uVar5 = param_1 + 0x780;
  }
  if (param_1 < 0x780) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 - 0x780;
  }
  uVar3 = 0;
  if (((((param_4 != '\0') || (param_6 != '\0')) || (param_5 != '\0')) || (param_7 != '\0')) &&
     (((param_1 <= param_8 && (param_8 <= uVar5)) &&
      ((bVar4 <= param_9 && (param_9 <= (byte)(bVar2 + 0x14))))))) {
    if ((0xb199 < param_10) || (0xb199 < param_3)) {
      bVar1 = true;
      if ((0xb199 < param_10) && (0xb199 < param_3)) {
        bVar1 = false;
      }
      if (bVar1) goto LAB_0010ffe4;
    }
    uVar3 = 1;
  }
LAB_0010ffe4:
  *param_12 = uVar3;
  return;
}

