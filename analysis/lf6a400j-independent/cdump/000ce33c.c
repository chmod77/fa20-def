
void FUN_000ce33c(char param_1,short param_2,undefined4 param_3,char param_4,uint param_5,
                 ushort param_6,undefined1 *param_7)

{
  ushort uVar1;
  undefined1 uVar2;
  
  uVar1 = 0;
  if (0x7fff < param_6) {
    uVar1 = param_6 + 0x8000;
  }
  uVar2 = 0;
  if ((((param_1 == '\x04') && (param_2 != 0)) && (param_4 != '\0')) &&
     ((param_5 & 0xff) <= (uint)((ulonglong)((longlong)(int)(uint)uVar1 * 0x2000000) >> 0x20))) {
    uVar2 = 1;
  }
  *param_7 = uVar2;
  return;
}

