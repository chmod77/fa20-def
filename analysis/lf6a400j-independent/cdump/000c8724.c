
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c8724(char param_1,char param_2,byte param_3,undefined2 *param_4)

{
  uint uVar1;
  
  if (param_1 != '\0') {
    if (param_2 == '\x02') {
      uVar1 = LK_133E10((uint)&T_02EA60,(uint)param_3);
      _DAT_fffecb04 = (undefined2)uVar1;
    }
    else {
      uVar1 = LK_133E10((uint)&T_02EA54,(uint)param_3);
      _DAT_fffecb04 = (undefined2)uVar1;
    }
  }
  *param_4 = _DAT_fffecb04;
  return;
}

