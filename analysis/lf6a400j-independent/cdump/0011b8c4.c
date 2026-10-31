
void FUN_0011b8c4(char param_1,char param_2,undefined4 param_3,ushort param_4,ushort param_5,
                 char param_6,char param_7,undefined1 *param_8,undefined2 *param_9)

{
  undefined1 uVar1;
  ushort uVar2;
  
  *param_9 = 0x6400;
  if ((param_1 == '\0') || (uVar1 = 0, param_2 != '\0')) {
    uVar1 = DAT_fffee054;
  }
  if ((param_7 == '\0') && (param_1 != '\0')) {
    uVar2 = 0;
    if (param_5 <= param_4) {
      uVar2 = param_4 - param_5;
    }
    if ((((param_1 != '\0') && (param_2 != '\0')) && (0x6400 < uVar2)) && (param_6 == '\0')) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  *param_8 = uVar1;
  DAT_fffee054 = uVar1;
  return;
}

