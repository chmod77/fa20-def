
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00077ba6(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  bVar1 = false;
  if ((DAT_ffff8574 == '\x03') || (DAT_ffff8574 == '\x05')) {
    if ((DAT_ffff6793 == 0) || (4 < DAT_ffff6793)) {
LAB_00077cc4:
      uVar2 = 0x31;
      DAT_ffff6b93 = 0x31;
    }
    else if (((DAT_ffff6793 == 0) || (3 < DAT_ffff6793)) || (_DAT_ffff7b96 < 3)) {
      if ((DAT_ffff6793 == 4) && (_DAT_ffff7b96 == 2)) {
        uVar2 = FUN_00077e28();
        DAT_ffff6b91 = 0x6a;
        _DAT_ffff7b98 = 1;
        goto LAB_00077cd8;
      }
      uVar2 = 0x13;
      DAT_ffff6b93 = 0x13;
    }
    else {
      if (DAT_ffff857e < 5) {
        if ((((DAT_ffff6793 == 1) && (uVar2 = 1, _DAT_ffff7b96 < 0xd)) ||
            ((DAT_ffff6793 == 2 && (uVar2 = 2, _DAT_ffff7b96 < 8)))) ||
           ((DAT_ffff6793 == 3 && (uVar2 = 3, _DAT_ffff7b96 < 4)))) {
          for (uVar4 = 2; (uVar4 & 0xff) < (uint)_DAT_ffff7b96; uVar4 = uVar4 + 1) {
            uVar4 = uVar4 & 0xff;
            if ((0x31 < (byte)(&DAT_ffff6792)[uVar4]) ||
               (uVar2 = (uint)(byte)(&DAT_ffff6792)[uVar4], *(char *)(uVar2 - 0x7ae0) == '\0'))
            goto LAB_00077cc4;
            bVar1 = true;
          }
          goto LAB_00077cd8;
        }
        goto LAB_00077cc4;
      }
      uVar2 = 0x22;
      DAT_ffff6b93 = 0x22;
    }
  }
  else {
    uVar2 = 0x33;
    DAT_ffff6b93 = 0x33;
  }
  DAT_ffff6b92 = 0x2a;
  DAT_ffff6b91 = 0x7f;
  _DAT_ffff7b98 = 3;
LAB_00077cd8:
  if (bVar1) {
    if (DAT_ffff6793 == 1) {
      *(undefined1 *)((uint)DAT_ffff857e * 2 + -0x7a81) = 10;
    }
    else if (DAT_ffff6793 == 2) {
      *(undefined1 *)((uint)DAT_ffff857e * 2 + -0x7a81) = 5;
    }
    else {
      *(undefined1 *)((uint)DAT_ffff857e * 2 + -0x7a81) = 1;
    }
    uVar2 = 0;
    uVar5 = 0;
    for (uVar4 = 2; (uVar4 & 0xff) < (uint)_DAT_ffff7b96; uVar4 = uVar4 + 1) {
      uVar4 = uVar4 & 0xff;
      if ((byte)(&DAT_ffff6792)[uVar4] < 0x20) {
        uVar3 = FUN_0016c834();
        if ((uVar3 & uVar5) == 0) {
          uVar3 = FUN_0016c834();
          uVar5 = uVar5 | uVar3;
          goto LAB_00077da6;
        }
LAB_00077daa:
        bVar1 = false;
      }
      else {
        uVar3 = FUN_0016c834();
        if ((uVar3 & uVar2) != 0) goto LAB_00077daa;
        uVar3 = FUN_0016c834();
        uVar2 = uVar2 | uVar3;
LAB_00077da6:
        bVar1 = true;
      }
      if (bVar1) {
        *(undefined1 *)((uVar4 - 2) * 0x28 + (uint)DAT_ffff857e + -0x7a77) = (&DAT_ffff6792)[uVar4];
        *(char *)((uint)DAT_ffff857e * 2 + -0x7a80) =
             *(char *)((uint)DAT_ffff857e * 2 + -0x7a80) + '\x01';
      }
    }
    uVar2 = (uint)DAT_ffff857e;
    *(undefined1 *)(uVar2 - 0x78e7) = 0;
    DAT_ffff857e = DAT_ffff857e + 1;
    DAT_ffff6b91 = 0x6a;
    _DAT_ffff7b98 = 1;
  }
  return uVar2;
}

