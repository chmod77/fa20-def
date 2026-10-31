
void FUN_000b25e8(uint param_1,ushort param_2,undefined1 *param_3)

{
  uint uVar1;
  int b;
  undefined1 uVar2;
  
  b = (param_1 & 0xffff) * 5 + (uint)param_2;
  if (b == 0) {
    *param_3 = 0x40;
  }
  else {
    uVar1 = __udiv32_r1_by_r0((uint)param_2 * 0x280,b);
    uVar2 = (undefined1)uVar1;
    if (0xff < uVar1) {
      uVar2 = 0xff;
    }
    *param_3 = uVar2;
  }
  return;
}

