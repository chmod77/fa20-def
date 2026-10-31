
void FUN_000cb1e0(char param_1,char param_2,short param_3,ushort param_4,char param_5,ushort param_6
                 ,char param_7,char param_8,undefined1 *param_9,undefined1 *param_10)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  
  if ((param_7 != '\0') || (param_8 != '\0')) {
    if ((param_7 == '\0') && (param_8 != '\0')) {
      uVar1 = 1;
      goto LAB_000cb230;
    }
    if ((param_7 != '\0') && (param_8 == '\0')) {
      uVar1 = 2;
      goto LAB_000cb230;
    }
  }
  uVar1 = 0;
LAB_000cb230:
  *param_10 = uVar1;
  if (DAT_fffecbd0 == '\0') {
    uVar3 = 0xc800;
  }
  else {
    uVar3 = 0;
  }
  if (DAT_fffecbd1 == '\0') {
    uVar2 = 0xffff;
  }
  else {
    uVar2 = 0;
  }
  if ((((param_1 == '\0') || (param_2 != '\0')) || (param_3 != -1)) ||
     (((uVar3 > param_4 || (param_5 != '\0')) || (uVar2 > param_6)))) {
    *param_9 = uVar1;
  }
  else {
    *param_9 = 2;
  }
  DAT_fffecbd0 = uVar3 <= param_4;
  DAT_fffecbd1 = uVar2 <= param_6;
  return;
}

