
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007579e(void)

{
  bool bVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcStack_14;
  char *pcStack_10;
  
  uVar5 = (uint)DAT_ffff6798;
  bVar1 = false;
  if (((uVar5 == 0) || ((uint)_DAT_ffff7b96 != uVar5 + 7)) && ((uVar5 != 0 || (_DAT_ffff7b96 != 8)))
     ) {
    DAT_ffff6b93 = 0x13;
  }
  else {
    if ((uVar5 < 0x100) && (DAT_ffff6793 == '\x14')) {
      pcStack_14 = (char *)(DAT_ffff6794 * 0x1000000 + (uint)DAT_ffff6795 * 0x10000 +
                            (uint)DAT_ffff6796 * 0x100 + (uint)DAT_ffff6797);
      pcVar3 = pcStack_14;
      if (uVar5 != 0) {
        pcVar3 = pcStack_14 + (uVar5 - 1);
      }
      if (((((char *)0xfffee64f < pcStack_14) && (pcStack_14 < (char *)0xffff6050)) &&
          ((char *)0xfffee64f < pcVar3)) && (pcVar3 < (char *)0xffff6050)) {
        if (((DAT_ffff8574 != '\x01') && (DAT_ffff8574 != '\x03')) && (DAT_ffff8574 != '\x05')) {
          DAT_ffff6b91 = 0x7f;
          DAT_ffff6b92 = 0x3d;
          DAT_ffff6b93 = 0x33;
          _DAT_ffff7b98 = 3;
          return;
        }
        pcStack_10 = &DAT_ffff6799;
        uVar2 = FUN_00001550(0xf0);
        uVar4 = 0;
        do {
          if (uVar5 <= (uVar4 & 0xffff)) {
LAB_00075890:
            FUN_00001550(uVar2);
            if (bVar1) {
              DAT_ffff6b91 = 0x7f;
              DAT_ffff6b92 = 0x3d;
              DAT_ffff6b93 = 0x72;
              _DAT_ffff7b98 = 3;
              return;
            }
            for (uVar5 = 0; (uVar5 & 0xffff) < 7; uVar5 = uVar5 + 1) {
              uVar5 = uVar5 & 0xffff;
              (&DAT_ffff6b91)[uVar5] = (&DAT_ffff6792)[uVar5];
            }
            DAT_ffff6b91 = DAT_ffff6792 + '@';
            _DAT_ffff7b98 = 7;
            return;
          }
          *pcStack_14 = *pcStack_10;
          if ((*pcStack_14 != *pcStack_10) &&
             (*pcStack_14 = *pcStack_10, *pcStack_14 != *pcStack_10)) {
            bVar1 = true;
            goto LAB_00075890;
          }
          uVar4 = (uVar4 & 0xffff) + 1;
          pcStack_10 = pcStack_10 + 1;
          pcStack_14 = pcStack_14 + 1;
        } while( true );
      }
    }
    DAT_ffff6b93 = 0x31;
  }
  _DAT_ffff7b98 = 3;
  DAT_ffff6b92 = 0x3d;
  DAT_ffff6b91 = 0x7f;
  return;
}

