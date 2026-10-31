
void FUN_00110194(char param_1,char param_2,ushort param_3,ushort param_4,byte param_5,byte param_6,
                 ushort param_7,ushort param_8,undefined1 *param_9)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  
  bVar6 = 0xff;
  if (param_6 < 0xec) {
    bVar6 = param_6 + 0x14;
  }
  bVar5 = 0;
  if (0x13 < param_6) {
    bVar5 = param_6 - 0x14;
  }
  bVar2 = false;
  if ((param_5 <= bVar6) && (bVar5 <= param_5)) {
    bVar2 = true;
  }
  uVar7 = 0xffff;
  if (param_4 < 0xf880) {
    uVar7 = param_4 + 0x780;
  }
  uVar3 = 0;
  if (0x77f < param_4) {
    uVar3 = param_4 - 0x780;
  }
  bVar1 = false;
  if ((param_3 <= uVar7) && (uVar3 <= param_3)) {
    bVar1 = true;
  }
  uVar4 = 0;
  if ((((param_1 != '\0') || (param_2 != '\0')) && (bVar1)) && (bVar2)) {
    if ((0xb199 < param_7) || (0xb199 < param_8)) {
      bVar2 = true;
      if ((0xb199 < param_8) && (0xb199 < param_7)) {
        bVar2 = false;
      }
      if (bVar2) goto LAB_00110254;
    }
    uVar4 = 1;
  }
LAB_00110254:
  *param_9 = uVar4;
  return;
}

