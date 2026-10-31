
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0013cde4(byte param_1)

{
  undefined4 uVar1;
  uint in_sr;
  undefined1 local_8 [4];
  uint local_4;
  
  local_4 = in_sr & 0xfffffffe | (uint)(2 < param_1);
  if (2 < param_1 != 0) {
    return 0;
  }
  _DAT_ffff2654 = local_8;
  _DAT_ffff2634 = 0x100;
  uVar1 = FUN_0013d6a4();
  return uVar1;
}

