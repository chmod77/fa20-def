
void FUN_0007e214(byte param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  short sVar2;
  
  sVar2 = (ushort)param_1 - (ushort)LAB_fffeba00;
  if (sVar2 < 0) {
    sVar2 = -sVar2;
  }
  uVar1 = (undefined1)sVar2;
  if (sVar2 < 0) {
    uVar1 = 0;
  }
  *param_2 = uVar1;
  LAB_fffeba00 = param_1;
  return;
}

