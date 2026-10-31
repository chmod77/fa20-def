
/* WARNING: Removing unreachable block (ram,0x0005ff40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005febe(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  for (uVar3 = 0; (uVar3 & 0xff) < 6; uVar3 = (uVar3 & 0xff) + 1) {
    iVar2 = (uVar3 & 0xff) * 3;
    if ((&DAT_fffefd4b)[iVar2] != '\0') {
      uVar1 = FUN_00001550(0xf0);
      DAT_fffefa46 = (&DAT_fffefd4b)[iVar2];
      DAT_fffefa47 = (&DAT_fffefd4c)[iVar2];
      DAT_fffefa48 = (&DAT_fffefd4d)[iVar2];
      (&DAT_fffefd4b)[iVar2] = 0;
      (&DAT_fffefd4c)[iVar2] = 0;
      (&DAT_fffefd4d)[iVar2] = 0;
      FUN_00001550(uVar1);
      FUN_001128d0();
      if (_DAT_ffff1308 != 0) {
        if (_DAT_ffff1308 != -1) {
          DAT_fffefa47 = (char)((ushort)_DAT_ffff1308 >> 8);
          DAT_fffefa48 = (byte)_DAT_ffff1308;
        }
        if (DAT_ffff316e == '\0') {
          if (_DAT_ffff1308 == -1) {
            if (DAT_fffefa47 == '\x12') {
              if (DAT_fffefa48 == 0x80) {
                _DAT_ffff316c = 0x172;
              }
              else {
                _DAT_ffff316c = 0x171;
              }
            }
            else if (DAT_fffefa47 == ',') {
              _DAT_ffff316c = 0x2096;
            }
            else {
              _DAT_ffff316c = 0x2097;
            }
          }
          else {
            iVar2 = 0x98;
            if (((int)(char)DAT_fffefa48 & 0x80U) != 0) {
              iVar2 = 0x2c7;
            }
            if ((DAT_fffefa48 & 8) != 0) {
              iVar2 = 0x9b;
            }
            if ((DAT_fffefa48 & 4) != 0) {
              iVar2 = 0x9a;
            }
            if ((DAT_fffefa48 & 2) != 0) {
              iVar2 = 0x99;
            }
            if ((DAT_fffefa48 & 1) != 0) {
              iVar2 = 0x98;
            }
            _DAT_ffff316c = (&DAT_0001b2d8)[iVar2];
          }
          DAT_ffff316e = '\x01';
          FUN_0010cd5c();
          if (DAT_fffef590 == '\0') {
            FUN_0010d144();
          }
        }
        if (_DAT_ffff1308 == -1) {
          if (DAT_fffefa47 == '\x12') {
            uVar1 = 0x96;
            if (DAT_fffefa48 == 0x80) {
              uVar1 = 0x97;
            }
          }
          else {
            uVar1 = 0x16f;
            if (DAT_fffefa47 == ',') {
              uVar1 = 0x166;
            }
          }
          FUN_0006098c(uVar1);
        }
        else {
          if ((DAT_fffefa48 & 1) != 0) {
            FUN_0006098c(0x98);
          }
          if ((DAT_fffefa48 & 2) != 0) {
            FUN_0006098c(0x99);
          }
          if ((DAT_fffefa48 & 4) != 0) {
            FUN_0006098c(0x9a);
          }
          if ((DAT_fffefa48 & 8) != 0) {
            FUN_0006098c(0x9b);
          }
          if (((int)(char)DAT_fffefa48 & 0x80U) != 0) {
            FUN_0006098c(0x2c7);
          }
        }
        if (_DAT_ffff1308 != -1) {
          DAT_fffefa47 = '\x14';
        }
      }
      FUN_00060320((int)DAT_fffefa47,(int)(char)DAT_fffefa48);
      DAT_fffefa46 = 0;
    }
  }
  return;
}

