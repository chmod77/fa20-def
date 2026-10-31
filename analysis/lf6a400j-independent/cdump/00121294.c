
void FUN_00121294(byte param_1,ushort param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  short sVar2;
  
  sVar2 = (ushort)param_1 - (param_2 & 0xff);
  if (sVar2 < 0) {
    sVar2 = -sVar2;
  }
  uVar1 = (undefined1)sVar2;
  if (sVar2 < 0) {
    uVar1 = 0;
  }
  *param_3 = uVar1;
  return;
}

