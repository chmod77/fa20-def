
void FUN_000999a4(byte param_1,uint param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_2 & 0xffff) >> 7;
  if (uVar2 < param_1) {
    uVar1 = 0xff;
    if (uVar2 < 0x100) {
      uVar1 = uVar2;
    }
    *param_3 = (byte)uVar1;
    return;
  }
  *param_3 = param_1;
  return;
}

