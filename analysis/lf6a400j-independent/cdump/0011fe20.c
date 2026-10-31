
void FUN_0011fe20(uint param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar1 = (uint)(short)(DAT_fffee154 - 8);
  if (((int)(param_1 & 0xff) <= (int)uVar1) && (param_1 = uVar1, (int)uVar1 < 0)) {
    param_1 = 0;
  }
  uVar2 = (undefined1)param_1;
  uVar1 = DAT_fffee154 + 8;
  if ((uVar1 <= (param_1 & 0xff)) && (uVar2 = (undefined1)uVar1, 0xff < uVar1)) {
    uVar2 = 0xff;
  }
  *param_2 = uVar2;
  DAT_fffee154 = uVar2;
  return;
}

