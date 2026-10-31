
void FUN_00093880(uint param_1,uint param_2,ushort param_3,char param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if ((param_1 != param_3) && ((param_4 == '\0' || (param_2 != param_3)))) {
    uVar1 = 0;
  }
  *param_5 = uVar1;
  return;
}

