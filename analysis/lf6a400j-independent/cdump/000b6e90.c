
/* WARNING: Removing unreachable block (ram,0x000b6f26) */
/* WARNING: Removing unreachable block (ram,0x000b6f2c) */
/* WARNING: Removing unreachable block (ram,0x000b6eb6) */
/* WARNING: Removing unreachable block (ram,0x000b6f4e) */
/* WARNING: Removing unreachable block (ram,0x000b6f54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b6e90(char param_1,short param_2,uint param_3,undefined2 *param_4)

{
  uint uVar1;
  byte bVar2;
  
  if (((param_1 == '\0') || (uVar1 = (param_3 & 0xffff) >> 8, uVar1 < 0x22)) || (0x4c < uVar1)) {
    if (DAT_fffec7c1 != '\0') {
      _DAT_fffec7bc = 0;
      DAT_fffec7c1 = '\0';
      DAT_fffec7be = '\0';
    }
  }
  else {
    if (DAT_fffec7be == '\0') {
      DAT_fffec7c0 = '\0';
      DAT_fffec7bf = '\0';
      DAT_fffec7be = '\x01';
      DAT_fffec7c1 = '\x01';
    }
    _DAT_fffec7bc = 0xffa7;
    bVar2 = 0;
    if (DAT_fffec7c0 != '\0') {
      bVar2 = 5;
    }
    DAT_fffec7c0 = (short)(0x91 - (ushort)bVar2) < param_2;
    bVar2 = 0;
    if (DAT_fffec7bf != '\0') {
      bVar2 = 5;
    }
    DAT_fffec7bf = param_2 < (short)(bVar2 - 0x22);
    if ((!(bool)DAT_fffec7c0) || (0x45 < uVar1)) {
      if (((bool)DAT_fffec7bf) && (0x45 < uVar1)) {
        _DAT_fffec7bc = 0x59;
      }
      else {
        _DAT_fffec7bc = 0;
      }
    }
  }
  *param_4 = _DAT_fffec7bc;
  return;
}

