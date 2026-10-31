
void FUN_0010c3e0(ushort param_1,undefined1 *param_2)

{
  uint uVar1;
  
  uVar1 = __udiv32_r1_by_r0((uint)param_1 * 0xff,0xffff);
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *param_2 = (char)uVar1;
  return;
}

