
void FUN_00123c44(ushort param_1,ushort param_2,ushort param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (param_2 <= param_1) {
    uVar1 = DAT_fffee280;
  }
  if (param_3 < param_1) {
    uVar1 = 0;
  }
  *param_4 = uVar1;
  DAT_fffee280 = uVar1;
  return;
}

