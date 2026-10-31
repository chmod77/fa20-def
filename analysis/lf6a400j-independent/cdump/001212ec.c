
void FUN_001212ec(byte param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  short sVar2;
  
  sVar2 = (ushort)param_1 - (ushort)DAT_fffee1e8;
  if (sVar2 < 0) {
    sVar2 = -sVar2;
  }
  uVar1 = (undefined1)sVar2;
  if (sVar2 < 0) {
    uVar1 = 0;
  }
  *param_2 = uVar1;
  DAT_fffee1e8 = param_1;
  return;
}

