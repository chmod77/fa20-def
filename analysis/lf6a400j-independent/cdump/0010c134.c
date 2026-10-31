
void FUN_0010c134(int param_1,byte param_2,byte param_3,char param_4,undefined2 *param_5)

{
  undefined *puVar1;
  undefined2 uVar2;
  
  puVar1 = (undefined *)__udiv32_r1_by_r0(param_1,0x3c);
  if (&DAT_0000fffe < puVar1) {
    uVar2 = 0xffff;
  }
  else {
    if (&DAT_0000ffff < puVar1) {
      puVar1 = &DAT_0000ffff;
    }
    uVar2 = SUB42(puVar1,0);
  }
  if (((DAT_fffedcbc < param_2) || (param_4 != '\0')) || (0x27 < param_3)) {
    *param_5 = 0;
  }
  else {
    *param_5 = uVar2;
  }
  DAT_fffedcbc = param_2;
  return;
}

