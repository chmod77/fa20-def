
void FUN_000c25cc(char param_1,undefined1 *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = true;
  if ((param_1 != '\r') && (param_1 != '\x0e')) {
    bVar1 = false;
  }
  uVar2 = 1;
  if ((!bVar1) && (uVar2 = DAT_fffeca04, param_1 != '\x1c')) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  DAT_fffeca04 = uVar2;
  return;
}

