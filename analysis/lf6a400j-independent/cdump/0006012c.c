
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006012c(void)

{
  bool bVar1;
  bool bVar2;
  undefined2 uVar4;
  uint uVar3;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  bVar1 = false;
  bVar2 = false;
  do {
    if (bVar2) {
LAB_0006025c:
      if (bVar1) {
        DAT_fffeff1d = 0;
      }
      else {
        DAT_fffeff1d = DAT_fffeff1d + 1;
      }
      if (9 < DAT_fffeff1d) {
        DAT_fffeff1d = 0;
        DAT_fffefa46 = 0x80;
        FUN_001128d0();
        DAT_fffefa46 = 0;
      }
      return;
    }
    uVar4 = FUN_00001550(0xf0);
    if (*(char *)((uint)DAT_fffefa4a * 3 + -0x105b5) == '\0') {
      DAT_fffefa4a = DAT_fffefa49;
      FUN_00001550(uVar4);
      goto LAB_0006025c;
    }
    DAT_fffefa46 = *(undefined1 *)((uint)DAT_fffefa4a * 3 + -0x105b5);
    DAT_fffefa47 = *(byte *)((uint)DAT_fffefa4a * 3 + -0x105b4);
    DAT_fffefa48 = *(char *)((uint)DAT_fffefa4a * 3 + -0x105b3);
    *(undefined1 *)((uint)DAT_fffefa4a * 3 + -0x105b5) = 0;
    *(undefined1 *)((uint)DAT_fffefa4a * 3 + -0x105b4) = 0;
    *(undefined1 *)((uint)DAT_fffefa4a * 3 + -0x105b3) = 0;
    DAT_fffefa4a = DAT_fffefa4a + 1;
    FUN_00001550(uVar4);
    FUN_001128d0();
    uVar7 = 0;
    if (_DAT_ffff1308 != 0) {
      for (; (uVar7 & 0xff) < 8; uVar7 = uVar7 + 1) {
        uVar6 = (uint)DAT_fffefa48;
        uVar3 = __shl_r0_by_r1(1,uVar7 & 0xff);
        if ((uVar3 & 0xff & uVar6) != 0) break;
      }
      iVar5 = (uint)DAT_fffefa47 * 8 + (uVar7 & 0xff);
      if (_DAT_ffff316c == 0) {
        _DAT_ffff316c = (&DAT_0001b2d8)[iVar5];
        FUN_0010cd5c();
        if (DAT_fffef590 == '\0') {
          FUN_0010d144();
        }
      }
      FUN_0006098c(iVar5);
    }
    FUN_00060320((int)(char)DAT_fffefa47,(int)DAT_fffefa48);
    DAT_fffefa46 = 0;
    bVar1 = true;
    bVar2 = true;
  } while( true );
}

