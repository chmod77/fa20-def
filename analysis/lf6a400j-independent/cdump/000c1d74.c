
uint FUN_000c1d74(uint param_1,uint param_2,uint param_3,char param_4,undefined1 *param_5,
                 undefined2 *param_6)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  uVar1 = LK_136050((uint)&T_02E838,param_2,param_3);
  *param_6 = (short)uVar1;
  if (param_4 == '\0') {
    uVar3 = (uVar1 & 0xffff) * (param_1 & 0xff);
    if (uVar3 < 0x3fc001) {
      uVar2 = (undefined1)(uVar3 >> 0xe);
    }
    else {
      uVar2 = 0xff;
    }
    *param_5 = uVar2;
  }
  else {
    *param_5 = 0x1e;
  }
  return uVar1;
}

