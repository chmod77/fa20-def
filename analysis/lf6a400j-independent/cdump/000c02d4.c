
void FUN_000c02d4(char param_1,char param_2,ushort param_3,undefined2 param_4,undefined1 *param_5)

{
  ushort uVar1;
  undefined1 uVar2;
  
  if (param_1 == '\0') {
    uVar1 = FUN_0016bc68(&DAT_000158fe,param_4);
    uVar2 = 1;
    if (uVar1 <= param_3) goto LAB_000c02fa;
  }
  uVar2 = DAT_fffec988;
LAB_000c02fa:
  if ((param_2 != '\x02') && (param_2 != '\x03')) {
    uVar2 = 0;
  }
  *param_5 = uVar2;
  DAT_fffec988 = uVar2;
  return;
}

