
void FUN_000d07dc(uint param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = (int)PTR_DAT_000d0804 * (param_1 & 0xffff);
  if (DAT_000d0808 < uVar2) {
    uVar1 = (undefined1)DAT_000d0800;
  }
  else {
    uVar1 = (undefined1)(uVar2 >> 0x16);
  }
  *param_2 = uVar1;
  return;
}

