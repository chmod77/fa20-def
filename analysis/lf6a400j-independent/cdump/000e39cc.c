
void FUN_000e39cc(char param_1,char param_2,char param_3,uint param_4,uint param_5,byte param_6,
                 undefined1 *param_7)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  
  uVar1 = LK_1351FC((uint)&T_02F170,param_5 & 0xffff);
  if (DAT_fffed294 == '\0') {
    bVar2 = 10;
  }
  else {
    bVar2 = 5;
  }
  uVar3 = 0;
  if (((((int)((param_4 & 0xffff) - (uVar1 & 0xffff)) < 0) && (param_2 != '\0')) ||
      (param_1 != '\0')) && ((bVar2 <= param_6 && (param_3 == '\0')))) {
    uVar3 = 1;
  }
  *param_7 = uVar3;
  DAT_fffed294 = bVar2 <= param_6;
  return;
}

