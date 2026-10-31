
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00077f68(void)

{
  uint uVar1;
  ushort uVar2;
  
  if (((int)DAT_ffff19fa & 0x80U) != 0) {
    if (DAT_ffff8565 == 0) {
      _DAT_ffff7b98 = 0;
    }
    DAT_ffff855f = DAT_ffff6794;
    for (uVar2 = 0; uVar2 < 0x118; uVar2 = uVar2 + 1) {
      uVar1 = (uint)(ushort)((ushort)DAT_ffff8565 * 0x118 + uVar2);
      if (((DAT_ffff6794 & *(byte *)(uVar1 - 0xce90)) != 0) && ((&DAT_0001b2d8)[uVar1] != 0)) {
        _DAT_ffff8560 = _DAT_ffff8560 + 1;
      }
    }
    DAT_ffff8565 = DAT_ffff8565 + 1;
  }
  return;
}

