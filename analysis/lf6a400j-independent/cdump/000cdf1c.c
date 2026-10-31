
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cdf1c(char param_1,int param_2,uint param_3,char param_4,byte param_5,char param_6,
                 char *param_7,undefined2 *param_8)

{
  undefined *puVar1;
  
  if (param_1 != '\0') {
    if ((param_3 & 0xffff) == 0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = (undefined *)__udiv32_r1_by_r0(param_2 << 0x10,param_3 & 0xffff);
      if (&DAT_0000ffff < puVar1) {
        puVar1 = &DAT_0000ffff;
      }
    }
    _DAT_fffeccb8 = SUB42(puVar1,0);
    if ((((undefined **)((uint)puVar1 & 0xffff) < (undefined **)0x3334) && (param_4 != '\0')) ||
       ((param_6 != '\0' && (param_5 < DAT_fffeccbb)))) {
      param_6 = '\0';
    }
    DAT_fffeccba = param_6;
    if ((&PTR_LAB_0000999a <= (undefined **)((uint)puVar1 & 0xffff)) && (param_4 != '\0')) {
      DAT_fffeccba = '\x01';
    }
    DAT_fffeccbb = param_5;
  }
  *param_8 = _DAT_fffeccb8;
  if (param_1 == '\0') {
    *param_7 = '\0';
  }
  else {
    *param_7 = DAT_fffeccba;
  }
  return;
}

