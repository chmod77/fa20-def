
void FUN_000a3eb0(char param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_1 == '\f') {
    uVar1 = DAT_fffec2f0;
  }
  if (((((param_1 == '\x01') || (param_1 == '\x02')) || (param_1 == '\x03')) ||
      (((param_1 == '\x04' || (param_1 == '\x05')) ||
       ((param_1 == '\x06' || ((param_1 == '\a' || (param_1 == '\b')))))))) ||
     ((param_1 == '\t' ||
      (((((param_1 == '\n' || (param_1 == '\v')) || (param_1 == '\r')) ||
        ((param_1 == '\x0e' || (param_1 == '\x0f')))) || (param_1 == '\x10')))))) {
    uVar1 = 1;
  }
  *param_2 = uVar1;
  DAT_fffec2f0 = uVar1;
  return;
}

