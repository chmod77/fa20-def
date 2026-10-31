
void FUN_000bee80(char param_1,undefined1 param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  uVar1 = DAT_fffec91d;
  if ((param_1 != '\0') && (DAT_fffec91c = param_2, uVar1 = param_2, param_3 == '\0')) {
    DAT_fffec91c = DAT_fffec91d;
    uVar1 = DAT_fffec91d;
  }
  DAT_fffec91d = uVar1;
  *param_4 = DAT_fffec91c;
  return;
}

