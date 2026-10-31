
void FUN_00121068(ushort param_1,uint param_2,uint param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if ((param_3 & 0xff) < (param_2 & 0xff) + 1) {
    uVar1 = DAT_fffee1cc;
  }
  if ((int)(param_3 & 0xff) <= (int)(short)((param_1 & 0xff) - 1)) {
    uVar1 = 0;
  }
  *param_4 = uVar1;
  DAT_fffee1cc = uVar1;
  return;
}

