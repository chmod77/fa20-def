
void FUN_000c244c(uint param_1,char param_2,uint param_3,ushort param_4,short param_5,
                 undefined1 *param_6,undefined2 *param_7)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar1 = LK_133E10((uint)&T_02E8E8,param_3);
  *param_7 = (short)uVar1;
  uVar2 = 0;
  if (((((uVar1 & 0xffff) <= (param_1 & 0xffff)) && (299 < param_4)) &&
      ((param_3 < 4 || (param_5 == 0)))) && (param_2 == '\0')) {
    uVar2 = 1;
  }
  *param_6 = uVar2;
  return;
}

