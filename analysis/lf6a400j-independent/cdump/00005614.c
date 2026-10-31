
/* WARNING: Removing unreachable block (ram,0x00005840) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00005614(void)

{
  ushort uVar2;
  undefined4 uVar1;
  short sVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uStack_28;
  uint uStack_24;
  
  uVar7 = 0;
  uStack_28 = 0;
  uStack_24 = 1;
  uVar6 = 0;
  do {
    if (0x1f < (int)uVar6) {
      uStack_28 = ~uStack_28;
      _DAT_ffffd050 = (short)(uStack_28 >> 0x10);
      _DAT_ffffd052 = (undefined2)uStack_28;
      iVar9 = (int)_DAT_ffffd050;
      uVar6 = 1;
      for (iVar4 = 0; iVar4 < 0x20; iVar4 = iVar4 + 1) {
        if ((uVar6 & (uStack_28 ^ iVar9 * 0x10000 + (uStack_28 & 0xffff))) != 0) {
          *(undefined1 *)(iVar4 + -0x7512) = 1;
          uVar7 = uVar7 | 4;
        }
        uVar6 = uVar6 << 1;
      }
      _DAT_ffffd004 = 0xd410;
      _DAT_ffffd006 = 1;
      return uVar7;
    }
    iVar9 = uVar6 * 6;
    if (DAT_ffffab9d == '\0') {
      uVar2 = *(ushort *)(iVar9 + -0x74d2) >> 8 & 7;
      if (uVar2 == 1) {
LAB_00005688:
        sVar3 = 2;
      }
      else {
        if (uVar2 == 2) {
LAB_0000568c:
          sVar3 = 2;
          goto LAB_00005696;
        }
        if (uVar2 == 3) {
LAB_00005690:
          sVar3 = 0;
        }
        else {
          if (uVar2 == 4) goto LAB_00005694;
LAB_000056a0:
          sVar3 = 7;
        }
      }
    }
    else {
      uVar2 = (ushort)(&DAT_000074ac)[uVar6 * 3] >> 8 & 7;
      if (uVar2 == 1) goto LAB_00005688;
      if (uVar2 == 2) goto LAB_0000568c;
      if (uVar2 == 3) goto LAB_00005690;
      if (uVar2 != 4) goto LAB_000056a0;
LAB_00005694:
      sVar3 = 0;
LAB_00005696:
      uStack_28 = uStack_28 | uStack_24;
    }
    iVar4 = uVar6 * 0x20;
    psVar5 = (short *)(iVar4 + -0x2f00);
    if (DAT_ffffab9d == '\0') {
      *psVar5 = *(short *)(iVar9 + -0x74d6);
      *(undefined2 *)(iVar4 + -0x2efe) = *(undefined2 *)(iVar9 + -0x74d4);
      uVar2 = *(ushort *)(iVar9 + -0x74d2);
    }
    else {
      *psVar5 = (&DAT_000074a8)[uVar6 * 3];
      *(undefined2 *)(iVar4 + -0x2efe) = (&DAT_000074aa)[uVar6 * 3];
      uVar2 = (&DAT_000074ac)[uVar6 * 3];
    }
    sVar3 = sVar3 * 0x100 + (uVar2 & 0xf8ff);
    *(short *)(iVar4 + -0x2efc) = sVar3;
    *(undefined2 *)(iVar4 + -0x2efa) = 0;
    *(undefined2 *)(iVar4 + -0x2ef0) = 0;
    *(undefined2 *)(iVar4 + -0x2eee) = 0;
    if (DAT_ffffab9d == '\0') {
      if (((*psVar5 != *(short *)(iVar9 + -0x74d6)) ||
          (*(short *)(iVar4 + -0x2efe) != *(short *)(iVar9 + -0x74d4))) ||
         ((*(short *)(iVar4 + -0x2efc) != sVar3 ||
          ((*(short *)(iVar4 + -0x2efa) != 0 || (*(short *)(iVar4 + -0x2ef0) != 0))))))
      goto LAB_0000577e;
      sVar3 = *(short *)(iVar4 + -0x2eee);
joined_r0x0000577c:
      if (sVar3 != 0) goto LAB_0000577e;
    }
    else {
      if ((((*psVar5 == (&DAT_000074a8)[uVar6 * 3]) &&
           (*(short *)(iVar4 + -0x2efe) == (&DAT_000074aa)[uVar6 * 3])) &&
          (*(short *)(iVar4 + -0x2efc) == sVar3)) &&
         ((*(short *)(iVar4 + -0x2efa) == 0 && (*(short *)(iVar4 + -0x2ef0) == 0)))) {
        sVar3 = *(short *)(iVar4 + -0x2eee);
        goto joined_r0x0000577c;
      }
LAB_0000577e:
      *(undefined1 *)(uVar6 - 0x7512) = 1;
      uVar7 = uVar7 | 1;
    }
    for (uVar8 = 0; (uVar8 & 0xff) < 8; uVar8 = uVar8 + 1) {
      uVar1 = FUN_00005a02(uVar6 & 0xff,uVar8);
      iVar9 = FUN_000059f4(uVar1,0xaa);
      if ((iVar9 == 0) || (iVar9 = FUN_000059f4(uVar1,0x55), iVar9 == 0)) {
        *(undefined1 *)(uVar6 - 0x7512) = 1;
        uVar7 = uVar7 | 2;
      }
      FUN_000059f4(uVar1,0);
    }
    uStack_24 = uStack_24 << 1;
    uVar6 = uVar6 + 1;
  } while( true );
}

