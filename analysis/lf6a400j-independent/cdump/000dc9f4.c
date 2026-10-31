
void FUN_000dc9f4(byte param_1,uint param_2,undefined2 param_3,undefined2 *param_4,
                 undefined2 *param_5)

{
  uint uVar1;
  byte bVar2;
  
  if (DAT_fffed120 == '\0') {
    bVar2 = 0xff;
  }
  else {
    bVar2 = 0xfb;
  }
  if (bVar2 <= param_1) {
    uVar1 = LK_135164((uint)&T_02F01C,param_2);
    param_3 = (short)uVar1;
  }
  *param_5 = param_3;
  *param_4 = param_3;
  DAT_fffed120 = bVar2 <= param_1;
  return;
}

