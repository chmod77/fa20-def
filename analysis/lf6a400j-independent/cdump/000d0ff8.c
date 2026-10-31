
void FUN_000d0ff8(ushort param_1,char param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar1 = __sdiv32_r1_by_r0((int)(short)((param_1 & 0xff) * 0x13 + param_2 * 0x13) + 0xd80U & 0xffff
                            ,0x1b);
  uVar2 = (undefined1)uVar1;
  if (0xff < (uVar1 & 0xffff)) {
    uVar2 = 0xff;
  }
  *param_3 = uVar2;
  return;
}

