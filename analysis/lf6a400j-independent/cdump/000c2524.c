
void FUN_000c2524(uint param_1,uint param_2,uint param_3,uint param_4,undefined1 *param_5)

{
  ushort uVar1;
  undefined1 uVar2;
  
  if (DAT_fffec9fd == '\0') {
    uVar1 = 0x19;
  }
  else {
    uVar1 = 0x42;
  }
  DAT_fffec9fd = (int)((param_3 & 0xffff) - (uint)uVar1) < (int)(param_1 & 0xffff);
  if (DAT_fffec9fc == '\0') {
    uVar1 = 0x19;
  }
  else {
    uVar1 = 0x42;
  }
  DAT_fffec9fc = (int)((param_4 & 0xffff) - (uint)uVar1) < (int)(param_2 & 0xffff);
  uVar2 = 1;
  if ((!(bool)DAT_fffec9fd) && (!(bool)DAT_fffec9fc)) {
    uVar2 = 0;
  }
  *param_5 = uVar2;
  return;
}

