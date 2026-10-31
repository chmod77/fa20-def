
void FUN_000e06b4(char param_1,byte param_2,ushort param_3,char param_4,char param_5,ushort param_6,
                 undefined1 *param_7)

{
  ushort uVar1;
  undefined1 uVar2;
  
  uVar1 = param_6 + 0xa00;
  if (uVar1 < param_6) {
    uVar1 = 0xffff;
  }
  uVar2 = 0;
  if ((((param_1 == '\0') && (param_2 < 0x4f)) && (7 < param_2)) &&
     (((param_3 < uVar1 && (param_4 != -1)) && (param_5 != '\0')))) {
    uVar2 = 1;
  }
  *param_7 = uVar2;
  return;
}

