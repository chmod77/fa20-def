
void FUN_0010da4c(char param_1,char param_2,ushort param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  if ((param_2 == '\0') || (uVar1 = 1, param_3 < 100)) {
    uVar1 = DAT_fffedce0;
  }
  if (param_1 == '\x01') {
    uVar1 = 0;
  }
  *param_4 = uVar1;
  DAT_fffedce0 = uVar1;
  return;
}

