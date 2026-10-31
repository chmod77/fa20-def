
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0007ba44(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = (uint)DAT_ffff19fa;
  if ((uVar1 & 0x20) != 0) {
    if (DAT_ffff8569 == 0) {
      _DAT_ffff7b98 = 0;
    }
    uVar1 = (uint)DAT_ffff8569 * 0x22;
    if (DAT_ffff8569 < 3) {
      uVar3 = uVar1 + 0x22;
    }
    else {
      uVar3 = uVar1 + 1;
    }
    for (; (uVar1 & 0xffff) < uVar3; uVar1 = uVar1 + 1) {
      uVar1 = uVar1 & 0xffff;
      for (uVar6 = 0; (uVar6 & 0xff) < 8; uVar6 = uVar6 + 1) {
        uVar4 = (uint)(byte)(&DAT_00023b08)[uVar1];
        uVar2 = FUN_0016c834();
        if ((uVar2 & uVar4) != 0) {
          uVar6 = uVar6 & 0xff;
          uVar4 = uVar1 * 8 + uVar6;
          uVar2 = uVar4 & 0xffff;
          if ((&DAT_0001b2d8)[uVar2] != 0) {
            (&DAT_ffff6b94)[_DAT_ffff7b98] = 0;
            (&DAT_ffff6b95)[_DAT_ffff7b98] = (char)((ushort)(&DAT_0001b2d8)[uVar2] >> 8);
            (&DAT_ffff6b96)[_DAT_ffff7b98] = (char)(&DAT_0001b2d8)[uVar2];
            (&DAT_ffff6b97)[_DAT_ffff7b98] = *(undefined1 *)((uVar4 & 0xffff) - 0xce90);
            _DAT_ffff7b98 = _DAT_ffff7b98 + 4;
          }
        }
      }
    }
    DAT_ffff8569 = DAT_ffff8569 + 1;
    uVar1 = (uint)(char)DAT_ffff8569;
    if (uVar1 == 4) {
      for (uVar3 = 0; (uVar3 & 0xff) < 8; uVar3 = uVar3 + 1) {
        uVar3 = uVar3 & 0xff;
        iVar5 = uVar3 + 0x338;
        uVar1 = iVar5 * 2;
        if ((&DAT_0001b2d8)[iVar5] != 0) {
          (&DAT_ffff6b94)[_DAT_ffff7b98] = 0;
          (&DAT_ffff6b95)[_DAT_ffff7b98] = (char)((ushort)(&DAT_0001b2d8)[iVar5] >> 8);
          (&DAT_ffff6b96)[_DAT_ffff7b98] = (char)(&DAT_0001b2d8)[iVar5];
          uVar1 = (uint)_DAT_ffff7b98;
          (&DAT_ffff6b97)[uVar1] = *(undefined1 *)(uVar3 - 0xcb58);
          _DAT_ffff7b98 = _DAT_ffff7b98 + 4;
        }
      }
      for (uVar3 = 0; (uVar3 & 0xff) < 8; uVar3 = uVar3 + 1) {
        uVar3 = uVar3 & 0xff;
        iVar5 = uVar3 + 0x340;
        uVar1 = iVar5 * 2;
        if ((&DAT_0001b2d8)[iVar5] != 0) {
          (&DAT_ffff6b94)[_DAT_ffff7b98] = 0;
          (&DAT_ffff6b95)[_DAT_ffff7b98] = (char)((ushort)(&DAT_0001b2d8)[iVar5] >> 8);
          (&DAT_ffff6b96)[_DAT_ffff7b98] = (char)(&DAT_0001b2d8)[iVar5];
          uVar1 = (uint)_DAT_ffff7b98;
          (&DAT_ffff6b97)[uVar1] = *(undefined1 *)(uVar3 - 0xcb50);
          _DAT_ffff7b98 = _DAT_ffff7b98 + 4;
        }
      }
    }
  }
  return uVar1;
}

