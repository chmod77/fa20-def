
void FUN_000e0458(char param_1,undefined1 param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = DAT_fffed1c1;
  uVar1 = DAT_fffed1c0;
  DAT_fffed1c1 = DAT_fffed1c2;
  DAT_fffed1c0 = uVar2;
  if ((param_3 == '\0') && (param_1 == '\x02')) {
    *param_4 = uVar1;
  }
  else {
    *param_4 = 0;
  }
  DAT_fffed1c2 = param_2;
  return;
}

