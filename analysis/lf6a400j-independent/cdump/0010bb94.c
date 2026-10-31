
void FUN_0010bb94(int param_1,char param_2,undefined2 *param_3)

{
  undefined *puVar1;
  
  if (param_2 == '\0') {
    puVar1 = (undefined *)__udiv32_r1_by_r0(param_1,0x3c);
    if (puVar1 < &DAT_00010000) {
      if (&DAT_0000ffff < puVar1) {
        puVar1 = &DAT_0000ffff;
      }
      *param_3 = (short)puVar1;
    }
    else {
      *param_3 = 0xffff;
    }
  }
  else {
    *param_3 = 0;
  }
  return;
}

