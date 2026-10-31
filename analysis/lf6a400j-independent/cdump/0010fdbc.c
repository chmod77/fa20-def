
void FUN_0010fdbc(ushort param_1,byte param_2,ushort param_3,char param_4,char param_5,char param_6,
                 char param_7,ushort param_8,byte param_9,ushort param_10,undefined1 *param_11)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 uVar4;
  ushort uVar5;
  
  uVar3 = 0;
  if (0x77f < param_1) {
    uVar3 = param_1 - 0x780;
  }
  uVar5 = 0xffff;
  if (param_1 < 0xf880) {
    uVar5 = param_1 + 0x780;
  }
  bVar1 = 0;
  if (0x13 < param_2) {
    bVar1 = param_2 - 0x14;
  }
  bVar2 = param_2 + 0x14;
  if (0xeb < param_2) {
    bVar2 = 0xff;
  }
  uVar4 = 0;
  if (((((param_4 != '\0') || (param_6 != '\0')) || (param_5 != '\0')) || (param_7 != '\0')) &&
     (((uVar3 <= param_8 && (param_8 <= uVar5)) && ((bVar1 <= param_9 && (param_9 <= bVar2)))))) {
    if (((param_10 < 0xb19a) && (param_3 < 0xb19a)) || ((0xb199 < param_10 && (0xb199 < param_3))))
    {
      uVar4 = 1;
    }
  }
  *param_11 = uVar4;
  return;
}

