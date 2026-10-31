
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000780a2(void)

{
  uint uVar1;
  ushort uVar2;
  
  DAT_ffff855f = DAT_ffff6794;
  if ((DAT_ffff19fa & 0x40) != 0) {
    if (DAT_ffff8566 == 0) {
      _DAT_ffff7b98 = 0;
    }
    for (uVar2 = 0; uVar2 < 0x118; uVar2 = uVar2 + 1) {
      uVar1 = (uint)(ushort)((ushort)DAT_ffff8566 * 0x118 + uVar2);
      if ((DAT_ffff855f & *(byte *)(uVar1 - 0xce90)) != 0) {
        if ((&DAT_0001b2d8)[uVar1] != 0) {
          (&DAT_ffff6b94)[_DAT_ffff7b98] = 0;
          (&DAT_ffff6b95)[_DAT_ffff7b98] = (char)((ushort)(&DAT_0001b2d8)[uVar1] >> 8);
          (&DAT_ffff6b96)[_DAT_ffff7b98] = (char)(&DAT_0001b2d8)[uVar1];
          (&DAT_ffff6b97)[_DAT_ffff7b98] = *(undefined1 *)(uVar1 - 0xce90);
          _DAT_ffff7b98 = _DAT_ffff7b98 + 4;
        }
      }
    }
    DAT_ffff8566 = DAT_ffff8566 + 1;
  }
  return;
}

