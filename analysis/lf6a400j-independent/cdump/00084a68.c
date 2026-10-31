
void FUN_00084a68(char param_1,uint param_2,uint param_3,char param_4,uint param_5,byte param_6,
                 undefined1 *param_7)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = (uint)((ulonglong)((longlong)(int)(param_2 & 0xffff) * 0x2000000) >> 0x20) <
          (param_5 & 0xff);
  uVar2 = 1;
  if ((((param_2 & 0xffff) < (param_3 & 0xffff)) && ((param_1 == '\0' || (bVar1)))) &&
     ((bVar1 || ((param_4 == '\0' || (param_6 <= DAT_fffebb44)))))) {
    uVar2 = 0;
  }
  *param_7 = uVar2;
  DAT_fffebb44 = param_6;
  return;
}

