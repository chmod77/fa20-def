
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c4328(char param_1,uint param_2,uint param_3,char param_4,undefined2 *param_5,
                 undefined2 *param_6)

{
  uint uVar1;
  undefined *puVar2;
  
  if (param_1 != '\0') {
    if (param_4 == '\x02') {
      uVar1 = LK_133E10((uint)&T_02E9A8,param_2 & 0xff);
    }
    else {
      uVar1 = LK_133E10((uint)&T_02E99C,param_2 & 0xff);
    }
    _DAT_fffecad6 = (undefined2)uVar1;
    if ((uVar1 & 0xffff) == 0) {
      _DAT_fffecad4 = 0;
    }
    else {
      puVar2 = (undefined *)__udiv32_r1_by_r0((param_3 & 0xffff) * 0x7080,uVar1 & 0xffff);
      if (&DAT_0000ffff < puVar2) {
        puVar2 = &DAT_0000ffff;
      }
      _DAT_fffecad4 = SUB42(puVar2,0);
    }
  }
  *param_5 = _DAT_fffecad4;
  *param_6 = _DAT_fffecad6;
  return;
}

