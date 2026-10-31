
void FUN_001491b6(undefined4 param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = (undefined1)param_1;
  if ((DAT_fffffc01 & 3) == 0) {
    DAT_fffffc04 = uVar2;
    return;
  }
  uVar1 = (undefined1)((uint)param_1 >> 8);
  if ((DAT_fffffc01 & 3) == 1) {
    DAT_fffffc04 = uVar1;
    DAT_fffffc05 = uVar2;
    return;
  }
  DAT_fffffc04 = (char)((uint)param_1 >> 0x18);
  DAT_fffffc05 = (char)((uint)param_1 >> 0x10);
  DAT_fffffc06 = uVar1;
  DAT_fffffc07 = uVar2;
  return;
}

