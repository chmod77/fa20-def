
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0006c76c(void)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  for (uVar8 = 0; (uVar8 & 0xffff) < 0x12; uVar8 = (uVar8 & 0xffff) + 1) {
    iVar7 = (uVar8 & 0xffff) * 0x16;
    if (*(short *)(iVar7 + -0x117be) != 0) {
      bVar1 = *(byte *)(iVar7 + -0x117ab);
      cVar3 = FUN_0006cbe0((int)*(char *)(iVar7 + -0x117ab));
      if ((cVar3 == '\0') &&
         ((*(short *)(iVar7 + -0x117bc) == 0 || (((&DAT_fffef749)[bVar1] & 0x10) == 0)))) {
        FUN_0006cabe(iVar7 + -0x117be,&DAT_0001b968,0x16);
      }
    }
  }
  iVar7 = 0;
  if (_DAT_fffee82c != 0) {
    uVar8 = (uint)DAT_fffee83f;
    cVar3 = FUN_0006cbe0((int)(char)DAT_fffee83f);
    if ((cVar3 == '\0') && (((&DAT_fffef749)[uVar8] & 0x10) == 0)) {
      FUN_0006cabe(&DAT_fffee82c,&DAT_0001b968,0x16);
      iVar7 = 1;
    }
  }
  if (_DAT_fffee816 != 0) {
    uVar8 = (uint)DAT_fffee829;
    cVar3 = FUN_0006cbe0((int)(char)DAT_fffee829);
    if ((cVar3 == '\0') && (((&DAT_fffef749)[uVar8] & 0x10) == 0)) {
      FUN_0006cabe(&DAT_fffee816,&DAT_fffee82c,0x16);
      FUN_0006cabe(&DAT_fffee82c,&DAT_0001b968,0x16);
      iVar7 = iVar7 + 1;
    }
  }
  uVar8 = 0;
  if (_DAT_fffee800 != 0) {
    uVar10 = (uint)DAT_fffee813;
    uVar8 = FUN_0006cbe0((int)(char)DAT_fffee813);
    if (((uVar8 & 0xff) == 0) && (uVar8 = (uint)(char)(&DAT_fffef749)[uVar10], (uVar8 & 0x10) == 0))
    {
      FUN_0006cabe(&DAT_fffee800,&DAT_fffee816,0x16);
      FUN_0006cabe(&DAT_fffee816,&DAT_fffee82c,0x16);
      uVar8 = FUN_0006cabe(&DAT_fffee82c,&DAT_0001b968,0x16);
      iVar7 = iVar7 + 1;
    }
  }
  uVar10 = 0;
  iVar11 = 0;
  uVar9 = 0;
  for (uVar4 = 0; uVar4 < 0x12; uVar4 = uVar4 + 1) {
    *(undefined2 *)(iVar11 + -0x11506) = 0;
    *(undefined2 *)(iVar11 + -0x11504) = 0;
    uVar8 = uVar9;
    if (*(short *)(uVar9 - 0x117bc) != 0) {
      uVar8 = (uVar10 & 0xff) * 4;
      *(undefined2 *)(uVar8 - 0x11506) = *(undefined2 *)(uVar9 - 0x117bc);
      *(ushort *)(uVar8 - 0x11504) = uVar4;
      uVar10 = (uVar10 & 0xff) + 1;
    }
    uVar9 = uVar9 + 0x16;
    iVar11 = iVar11 + 4;
  }
  if ((iVar7 != 0) && ((uVar10 & 0xff) != 0)) {
    uVar8 = FUN_0006cad2(uVar10,0xfffeeafa);
    uVar4 = 0;
    for (uVar9 = 1; (uVar9 & 0xffff) < 4; uVar9 = (uVar9 & 0xffff) + 1) {
      uVar5 = (uVar9 & 0xffff) * 0x16;
      uVar8 = uVar5;
      if (*(short *)(uVar5 - 0x11814) == 0) {
        uVar6 = 0;
        do {
          if ((uVar10 & 0xff) <= (uVar6 & 0xffff)) goto LAB_0006c976;
          uVar8 = (uVar6 & 0xffff) * 4;
          uVar6 = (uVar6 & 0xffff) + 1;
        } while (*(ushort *)(uVar8 - 0x11506) <= uVar4);
        FUN_0006cabe(&DAT_fffee7ea + uVar5,(uint)*(ushort *)(uVar8 - 0x11504) * 0x16 + -0x117be,0x16
                    );
        uVar4 = *(ushort *)(uVar8 - 0x11506);
      }
      else {
        uVar4 = *(ushort *)(uVar5 - 0x11814);
      }
LAB_0006c976:
    }
  }
  bVar2 = false;
  uVar9 = 0;
  if ((_DAT_fffee7ea != 0) && (uVar8 = FUN_0006cbe0((int)DAT_fffee7fd), (uVar8 & 0xff) == 0)) {
    uVar10 = uVar10 & 0xff;
    if (uVar10 != 0) {
      iVar7 = 0;
      for (uVar8 = 0; uVar5 = uVar9, (uVar8 & 0xffff) < uVar10; uVar8 = (uVar8 & 0xffff) + 1) {
        uVar5 = (uint)*(ushort *)((uVar8 & 0xffff) * 4 + -0x11504);
        iVar11 = uVar5 * 0x16;
        if (*(char *)(iVar11 + -0x117aa) == '\x01') {
          bVar2 = true;
          break;
        }
        if ((iVar7 == 0) &&
           ((*(char *)(iVar11 + -0x117aa) == '\x03' || (*(char *)(iVar11 + -0x117aa) == '\x04')))) {
          bVar2 = true;
          iVar7 = 1;
          uVar9 = uVar5;
        }
      }
      if (bVar2) {
        uVar8 = FUN_0006cabe(&DAT_fffee7ea,uVar5 * 0x16 + -0x117be,0x16,iVar7,uVar10);
        return uVar8;
      }
    }
    uVar8 = FUN_0006cabe(&DAT_fffee7ea,&DAT_0001b968,0x16);
  }
  return uVar8;
}

