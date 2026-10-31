
void FUN_000d4ba0(char param_1,char param_2,undefined4 param_3,byte param_4,byte param_5,
                 byte param_6,char param_7,char param_8,undefined1 *param_9,undefined4 param_10,
                 undefined1 *param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14)

{
  bool bVar1;
  undefined1 uVar2;
  
  *(bool *)param_10 = param_2 == '\x03';
  *(bool *)param_12 = 0x7c < param_4;
  *param_11 = 1;
  bVar1 = false;
  if ((param_5 < 0x79) && (0x27 < param_5)) {
    bVar1 = true;
  }
  *(bool *)param_13 = bVar1;
  *(bool *)param_14 = param_6 < 0x65;
  uVar2 = 0;
  if ((((param_1 == '\0') && (param_2 == '\x03')) && (0x7c < param_4)) &&
     (((bVar1 && (param_6 < 0x65)) && ((param_7 != '\0' && (param_8 == '\0')))))) {
    uVar2 = 1;
  }
  *param_9 = uVar2;
  return;
}

