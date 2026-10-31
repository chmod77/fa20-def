
void FUN_000c43b0(uint param_1,char *param_2)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xffff) * 0x3333 >> 0x15;
  if (uVar1 < 0x164) {
    if (uVar1 < 100) {
      *param_2 = '\0';
    }
    else {
      *param_2 = (char)uVar1 + -100;
    }
  }
  else {
    *param_2 = -1;
  }
  return;
}

