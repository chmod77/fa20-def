
void FUN_000b61a4(uint param_1,char param_2,undefined4 param_3,uint param_4,char param_5,
                 char param_6,char param_7,char param_8,undefined1 *param_9)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar1 = LK_133F40((uint)&T_02E40C,param_1);
  uVar2 = 0;
  if ((((((param_2 == '\0') && ((uVar1 & 0xffff) <= (param_4 & 0xffff))) && (param_5 == '\0')) &&
       ((param_6 == '\0' && (param_7 != '\x02')))) &&
      ((param_7 != '\x06' && ((param_7 != '\t' && (param_7 != '\n')))))) && (param_8 != '\0')) {
    uVar2 = 1;
  }
  *param_9 = uVar2;
  return;
}

