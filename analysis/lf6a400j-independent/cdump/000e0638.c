
void FUN_000e0638(char param_1,byte param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 char param_7,undefined1 *param_8)

{
  bool bVar1;
  uint uVar2;
  undefined1 uVar3;
  
  if ((0xfe < param_2) || (bVar1 = false, param_7 != '\0')) {
    if ((int)-(param_6 & 0xffff) < -0x8000) {
      uVar2 = 0;
    }
    else {
      uVar2 = -(param_6 & 0xffff) - 0x8000;
    }
    bVar1 = false;
    if (((int)&DAT_00008000 + (param_5 & 0xffff) <= (param_3 & 0xffff)) &&
       ((param_4 & 0xffff) <= (uVar2 & 0xffff))) {
      bVar1 = true;
    }
  }
  uVar3 = 0;
  if ((param_1 != '\0') && (bVar1)) {
    uVar3 = 1;
  }
  *param_8 = uVar3;
  return;
}

