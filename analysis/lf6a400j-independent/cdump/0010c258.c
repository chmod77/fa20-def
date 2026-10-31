
void FUN_0010c258(ushort param_1,ushort param_2,undefined1 *param_3)

{
  uint uVar1;
  ushort uVar2;
  
  uVar2 = 0;
  if (param_2 <= param_1) {
    uVar2 = param_1 - param_2;
  }
  uVar1 = __udiv32_r1_by_r0((uint)uVar2 * 0xff,0xffff);
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  if ((uVar1 & 0xff) == 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = (char)uVar1;
  }
  return;
}

