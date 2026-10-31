
void FUN_000a3780(char param_1,char param_2,uint param_3,char param_4,byte param_5,char param_6,
                 undefined1 *param_7)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = (int)param_4;
  uVar1 = 1;
  if ((param_6 != '\0') && (param_1 != '\0')) {
    param_3 = param_3 & 0xff;
    if ((((0xfe < param_3) &&
         (((-1 < iVar2 && ((int)(param_3 * 0x66) <= iVar2 << 8)) ||
          ((iVar2 < 0 && (iVar2 << 8 <= (int)(param_3 * -0x66))))))) &&
        (((-1 < iVar2 && (10 < iVar2)) || ((iVar2 < 0 && (iVar2 < -10)))))) &&
       ((5 < param_5 || (-1 < iVar2)))) goto LAB_000a3808;
  }
  if (param_2 != '\0') {
    if ((0x1f < param_5) && (param_5 < 0x31)) goto LAB_000a3808;
  }
  uVar1 = 0;
LAB_000a3808:
  *param_7 = uVar1;
  return;
}

