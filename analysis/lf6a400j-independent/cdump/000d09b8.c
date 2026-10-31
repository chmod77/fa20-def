
void FUN_000d09b8(uint param_1,char *param_2)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xffff) >> 7;
  if (uVar1 < 0xe4) {
    *param_2 = (char)uVar1 + '\x1c';
    return;
  }
  *param_2 = -1;
  return;
}

