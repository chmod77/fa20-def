
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000765c4(void)

{
  uint uVar1;
  uint uVar2;
  ushort uVar4;
  undefined *puVar3;
  undefined *puVar5;
  byte bVar6;
  ushort uVar8;
  uint uVar7;
  ushort uVar9;
  byte bVar10;
  ushort unaff_r8;
  uint uVar11;
  int iVar12;
  int iVar13;
  char cVar15;
  uint uVar14;
  uint uVar16;
  byte bStack_48;
  ushort uStack_44;
  undefined **ppuStack_34;
  byte bStack_24;
  
  iVar12 = 0;
  uStack_44 = 0;
  uVar8 = (ushort)DAT_ffff6794 * 0x100 + (ushort)DAT_ffff6795;
  DAT_ffff6b91 = 0x6c;
  DAT_ffff6b92 = DAT_ffff6793;
  _DAT_ffff7b98 = 4;
  bVar10 = (byte)uVar8;
  _DAT_ffff6b93 = uVar8;
  if (DAT_ffff6793 == '\x01') {
    if ((_DAT_ffff7b96 < 8) || ((_DAT_ffff7b96 & 3) != 0)) {
      _DAT_ffff6b93 = CONCAT11(0x13,bVar10);
      DAT_ffff6b91 = 0x7f;
      DAT_ffff6b92 = 0x2c;
      _DAT_ffff7b98 = 3;
      return 0x13;
    }
    if (((uVar8 < 0xf300) || (0xf313 < uVar8)) && ((uVar8 < 0xf200 || (0xf231 < uVar8)))) {
      _DAT_ffff6b93 = CONCAT11(0x31,bVar10);
      DAT_ffff6b91 = 0x7f;
      DAT_ffff6b92 = 0x2c;
      _DAT_ffff7b98 = 3;
      return 0x31;
    }
    uVar1 = ((int)(uint)_DAT_ffff7b96 >> 2) - 1;
    bStack_48 = 0;
    if (10 < (uVar1 & 0xff)) {
      _DAT_ffff6b93 = CONCAT11(0x31,bVar10);
      DAT_ffff6b91 = 0x7f;
      DAT_ffff6b92 = 0x2c;
      _DAT_ffff7b98 = 3;
      return 0x31;
    }
    uVar2 = 0;
    do {
      uVar14 = uVar2 & 0xff;
      if ((uVar1 & 0xff) <= uVar14) {
        return 0x1c;
      }
      iVar13 = uVar14 * 4;
      uVar9 = (ushort)(byte)(&DAT_ffff6797)[iVar13] + (ushort)(byte)(&DAT_ffff6796)[iVar13] * 0x100;
      uVar11 = (uint)(byte)(&DAT_ffff6798)[iVar13];
      bVar6 = (&DAT_ffff6799)[iVar13];
      uVar4 = uVar9 & 0xff00;
      uVar16 = (uint)bVar6;
      if (uVar4 == 0) {
        ppuStack_34 = &PTR_DAT_00030a6c;
        unaff_r8 = 0x35;
      }
      else if (uVar4 == 0x100) {
        ppuStack_34 = (undefined **)&DAT_00030c14;
        unaff_r8 = 0x41;
      }
      else if (uVar4 == 0x200) {
        ppuStack_34 = (undefined **)&DAT_00030e1c;
        unaff_r8 = 0x15;
      }
      else if (uVar4 == 0x1000) {
        ppuStack_34 = (undefined **)&DAT_00030ec4;
        unaff_r8 = 0x4d;
      }
      else if (uVar4 == 0x1100) {
        ppuStack_34 = (undefined **)&DAT_0003112c;
        unaff_r8 = 0x3a;
      }
      else if (uVar4 == 0x1200) {
        ppuStack_34 = (undefined **)&DAT_000312fc;
        unaff_r8 = 0x2a;
      }
      else if (uVar4 == 0x2000) {
        ppuStack_34 = (undefined **)&DAT_0003144c;
        unaff_r8 = 0xc;
      }
      else if (uVar4 == 0x3000) {
        ppuStack_34 = (undefined **)&DAT_000314ac;
        unaff_r8 = 0xc;
      }
      else if (uVar4 == 0xf100) {
        ppuStack_34 = (undefined **)&DAT_0003150c;
        unaff_r8 = 6;
      }
      else {
        iVar12 = 1;
      }
      if ((uVar8 & 0xff00) == 0xf300) {
        iVar13 = (uint)bVar10 * 10;
        uVar2 = uVar2 & 0xff;
        if (*(char *)(iVar13 + uVar2 + -0x8120) != '\0') {
          _DAT_ffff6b93 = CONCAT11(0x22,DAT_ffff6b94);
          DAT_ffff6b91 = 0x7f;
          DAT_ffff6b92 = 0x2c;
          _DAT_ffff7b98 = 3;
          return 0x22;
        }
        if (iVar12 == 0) {
          for (uVar4 = 0; (uVar4 & 0xff) < unaff_r8; uVar4 = uVar4 + 1) {
            if ((uVar9 == *(ushort *)ppuStack_34) && (((uint)*ppuStack_34 & 1) != 0)) {
              if (((uVar11 == 0) ||
                  (((*(byte *)((int)ppuStack_34 + 2) < uVar11 || (uVar16 == 0)) ||
                   ((int)((*(byte *)((int)ppuStack_34 + 2) - uVar11) + 1) < (int)uVar16)))) ||
                 (uStack_44 = uStack_44 + bVar6, 0x3fe < uStack_44)) {
                iVar12 = 1;
              }
              else if (((((DAT_ffff8574 == '\0') &&
                         (((int)*(char *)((int)ppuStack_34 + 3) & 0x80U) != 0)) ||
                        ((DAT_ffff8574 == '\x01' && (((uint)*ppuStack_34 & 0x10) != 0)))) ||
                       ((DAT_ffff8574 == '\x03' && (((uint)*ppuStack_34 & 0x40) != 0)))) ||
                      ((DAT_ffff8574 == '\x05' && (((uint)*ppuStack_34 & 0x20) != 0)))) {
                *(undefined **)((uint)bStack_48 * 4 + (uint)bVar10 * 0x28 + -0x8440) =
                     ppuStack_34[1] + (uVar11 - 1);
                *(byte *)(iVar13 + (uint)bStack_48 + -0x8120) = bVar6;
                bStack_48 = bStack_48 + 1;
              }
              else {
                iVar12 = 2;
              }
              break;
            }
            ppuStack_34 = ppuStack_34 + 2;
          }
          if (unaff_r8 <= (uVar4 & 0xff)) {
            iVar12 = 1;
          }
        }
        if (iVar12 != 0) {
          if (iVar12 == 1) {
            _DAT_ffff6b93 = CONCAT11(0x31,DAT_ffff6b94);
          }
          else {
            if (iVar12 != 2) goto LAB_0007691e;
            _DAT_ffff6b93 = CONCAT11(0x33,DAT_ffff6b94);
          }
          DAT_ffff6b92 = ',';
          DAT_ffff6b91 = 0x7f;
          _DAT_ffff7b98 = 3;
LAB_0007691e:
          uVar1 = 0x40;
          uVar2 = 0;
          while ((uVar2 & 0xff) < 10) {
            uVar1 = uVar2 & 0xff;
            *(undefined4 *)(uVar1 * 4 + (uint)bVar10 * 0x28 + -0x8440) = 0;
            *(undefined1 *)(iVar13 + -0x8120 + uVar1) = 0;
            uVar2 = uVar1 + 1;
          }
          return uVar1;
        }
      }
      else {
        if ((uVar14 == 0) && (*(char *)(bVar10 - 0x7ae0) != '\0')) {
          _DAT_ffff6b93 = CONCAT11(0x22,DAT_ffff6b94);
          DAT_ffff6b91 = 0x7f;
          DAT_ffff6b92 = 0x2c;
          _DAT_ffff7b98 = 3;
          return 0x22;
        }
        if (iVar12 == 0) {
          for (uVar4 = 0; (uVar4 & 0xff) < unaff_r8; uVar4 = uVar4 + 1) {
            if ((uVar9 == *(ushort *)ppuStack_34) && (((uint)*ppuStack_34 & 1) != 0)) {
              if (((uVar11 == 0) ||
                  (((*(byte *)((int)ppuStack_34 + 2) < uVar11 || (uVar16 == 0)) ||
                   ((int)((*(byte *)((int)ppuStack_34 + 2) - uVar11) + 1) < (int)uVar16)))) ||
                 (uStack_44 = uStack_44 + bVar6, 7 < uStack_44)) {
                iVar12 = 1;
              }
              else if ((((DAT_ffff8574 == '\0') &&
                        (((int)*(char *)((int)ppuStack_34 + 3) & 0x80U) != 0)) ||
                       ((DAT_ffff8574 == '\x01' && (((uint)*ppuStack_34 & 0x10) != 0)))) ||
                      (((DAT_ffff8574 == '\x03' && (((uint)*ppuStack_34 & 0x40) != 0)) ||
                       ((DAT_ffff8574 == '\x05' && (((uint)*ppuStack_34 & 0x20) != 0)))))) {
                puVar3 = ppuStack_34[1] + (uVar11 - 1);
                for (bStack_24 = 0; bStack_24 < uVar16; bStack_24 = bStack_24 + 1) {
                  *(undefined **)((uint)bStack_48 * 4 + (uint)bVar10 * 0x1c + -0x8058) = puVar3;
                  *(char *)(bVar10 - 0x7ae0) = *(char *)(bVar10 - 0x7ae0) + '\x01';
                  bStack_48 = bStack_48 + 1;
                  puVar3 = puVar3 + 1;
                }
              }
              else {
                iVar12 = 2;
              }
              break;
            }
            ppuStack_34 = ppuStack_34 + 2;
          }
          if (unaff_r8 <= (uVar4 & 0xff)) {
            iVar12 = 1;
          }
        }
        if (iVar12 != 0) {
          uVar1 = (uint)bVar10;
          if (iVar12 == 1) {
            _DAT_ffff6b93 = CONCAT11(0x31,DAT_ffff6b94);
          }
          else {
            if (iVar12 != 2) goto LAB_00076afa;
            _DAT_ffff6b93 = CONCAT11(0x33,DAT_ffff6b94);
          }
          DAT_ffff6b92 = ',';
          DAT_ffff6b91 = 0x7f;
          _DAT_ffff7b98 = 3;
LAB_00076afa:
          iVar12 = 0;
          for (bVar10 = 0; 6 >= bVar10; bVar10 = bVar10 + 1) {
            *(uint *)(uVar1 * 0x1c + -0x8058 + iVar12) = (uint)(6 < bVar10);
            iVar12 = iVar12 + 4;
          }
          *(undefined1 *)(uVar1 - 0x7ae0) = 0;
          return uVar1;
        }
      }
      uVar2 = uVar2 + 1;
    } while( true );
  }
  if (DAT_ffff6793 != '\x02') {
    if (DAT_ffff6793 != '\x03') {
      _DAT_ffff6b93 = CONCAT11(0x12,bVar10);
      DAT_ffff6b91 = 0x7f;
      DAT_ffff6b92 = 0x2c;
      _DAT_ffff7b98 = 3;
      return 0x12;
    }
    if (_DAT_ffff7b96 < 5) {
      FUN_00077008();
      if (_DAT_ffff7b96 != 2) {
        _DAT_ffff6b93 = CONCAT11(DAT_ffff6794,DAT_ffff6795);
        DAT_ffff6b91 = 0x6c;
        DAT_ffff6b92 = DAT_ffff6793;
        _DAT_ffff7b98 = 4;
        return (int)(char)DAT_ffff6795;
      }
      DAT_ffff6b91 = 0x6c;
      DAT_ffff6b92 = DAT_ffff6793;
      _DAT_ffff7b98 = 2;
      return 2;
    }
LAB_00076fd0:
    _DAT_ffff6b93 = CONCAT11(0x13,DAT_ffff6b94);
    _DAT_ffff7b98 = 3;
    DAT_ffff6b92 = 0x2c;
    DAT_ffff6b91 = 0x7f;
    return 0x13;
  }
  if ((_DAT_ffff7b96 < 10) || (iVar12 = FUN_0016c6d8(), iVar12 != 0)) goto LAB_00076fd0;
  if ((((uVar8 < 0xf300) || (0xf313 < uVar8)) && ((uVar8 < 0xf200 || (0xf231 < uVar8)))) ||
     (DAT_ffff6796 != '\x14')) {
LAB_00076f7e:
    _DAT_ffff6b93 = CONCAT11(0x31,DAT_ffff6b94);
    DAT_ffff6b91 = 0x7f;
    DAT_ffff6b92 = 0x2c;
    _DAT_ffff7b98 = 3;
    return 0x31;
  }
  iVar12 = FUN_0016c580();
  uVar1 = iVar12 - 1;
  bStack_48 = 0;
  if (10 < (uVar1 & 0xff)) goto LAB_00076f7e;
  if ((uVar8 & 0xff00) == 0xf200) {
    if (*(char *)(bVar10 - 0x7ae0) != '\0') goto LAB_00076f6e;
    uVar14 = (uint)bVar10;
    cVar15 = '\0';
    uVar2 = 0x20;
    uVar16 = 0;
    for (uVar11 = 0; (uVar11 & 0xff) < (uVar1 & 0xff); uVar11 = uVar11 + 1) {
      uVar2 = (uVar11 & 0xff) * 5;
      puVar3 = (undefined *)
               ((uint)(byte)(&DAT_ffff679a)[uVar2] +
               (uint)(byte)(&DAT_ffff6799)[uVar2] * 0x100 +
               (uint)(byte)(&DAT_ffff6798)[uVar2] * 0x10000 +
               (char)(&DAT_ffff6797)[uVar2] * 0x1000000);
      uVar7 = (uint)(byte)(&DAT_ffff679b)[uVar2];
      if ((uVar7 == 0) || (uVar2 = uVar14, 7 < *(byte *)(uVar14 - 0x7ae0) + uVar7)) {
LAB_00076d28:
        cVar15 = '\x01';
      }
      else {
        for (bVar6 = 0; bVar6 < uVar7; bVar6 = bVar6 + 1) {
          if ((&DAT_0017ffff < puVar3) &&
             ((puVar3 < &DAT_fffe8000 || ((undefined *)0xffffbfff < puVar3)))) goto LAB_00076d28;
          if ((((&DAT_0017ffff < puVar3) || (DAT_ffff8574 == '\x01')) || (DAT_ffff8574 == '\x03'))
             || (uVar2 = (uint)DAT_ffff8574, uVar2 == 5)) {
            *(undefined **)((uVar16 & 0xff) * 4 + uVar14 * 0x1c + -0x8058) = puVar3;
            uVar2 = (uint)bVar10;
            *(char *)(uVar2 - 0x7ae0) = *(char *)(uVar2 - 0x7ae0) + '\x01';
            uVar16 = (uVar16 & 0xff) + 1;
          }
          else {
            cVar15 = '\x02';
          }
          puVar3 = puVar3 + 1;
        }
      }
      if (cVar15 != '\0') break;
    }
    if (cVar15 == '\0') {
      return uVar2;
    }
    if (cVar15 == '\x01') {
      _DAT_ffff6b93 = CONCAT11(0x31,DAT_ffff6b94);
    }
    else {
      if (cVar15 != '\x02') goto LAB_00076d72;
      _DAT_ffff6b93 = CONCAT11(0x33,DAT_ffff6b94);
    }
    DAT_ffff6b92 = ',';
    DAT_ffff6b91 = 0x7f;
    _DAT_ffff7b98 = 3;
LAB_00076d72:
    iVar12 = 0;
    for (bVar10 = 0; 6 >= bVar10; bVar10 = bVar10 + 1) {
      *(uint *)(uVar14 * 0x1c + -0x8058 + iVar12) = (uint)(6 < bVar10);
      iVar12 = iVar12 + 4;
    }
    *(undefined1 *)(uVar14 - 0x7ae0) = 0;
    return uVar14;
  }
  iVar12 = (uint)bVar10 * 10;
  if (*(char *)(iVar12 + -0x8120) != '\0') {
LAB_00076f6e:
    _DAT_ffff6b93 = CONCAT11(0x22,DAT_ffff6b94);
    DAT_ffff6b91 = 0x7f;
    DAT_ffff6b92 = 0x2c;
    _DAT_ffff7b98 = 3;
    return 0x22;
  }
  iVar13 = (uint)bVar10 * 0x28;
  uVar11 = 0;
  uVar2 = 0x1c;
  uVar14 = 0;
  for (uVar16 = 0; (uVar16 & 0xff) < (uVar1 & 0xff); uVar16 = uVar16 + 1) {
    uVar2 = (uVar16 & 0xff) * 5;
    bVar10 = (&DAT_ffff679b)[uVar2];
    uVar7 = (uint)bVar10;
    puVar3 = (undefined *)
             ((uint)(byte)(&DAT_ffff679a)[uVar2] +
             (uint)(byte)(&DAT_ffff6799)[uVar2] * 0x100 +
             (uint)(byte)(&DAT_ffff6798)[uVar2] * 0x10000 + (char)(&DAT_ffff6797)[uVar2] * 0x1000000
             );
    if (((((uVar7 == 0) || (100 < uVar7)) || (uVar11 = uVar11 + uVar7, 0x3fe < (uVar11 & 0xffff)))
        || ((puVar5 = puVar3 + uVar7, &DAT_0017ffff < puVar3 &&
            ((puVar3 < &DAT_fffe8000 || ((undefined *)0xffffbfff < puVar3)))))) ||
       ((&DAT_0017ffff < puVar5 && ((puVar5 < &DAT_fffe8000 || ((undefined *)0xffffbfff < puVar5))))
       )) {
      uVar14 = 1;
    }
    else if ((((&DAT_0017ffff < puVar3) || (DAT_ffff8574 == '\x01')) || (DAT_ffff8574 == '\x03')) ||
            (uVar2 = (uint)DAT_ffff8574, uVar2 == 5)) {
      *(undefined **)((uint)bStack_48 * 4 + iVar13 + -0x8440) = puVar3;
      *(byte *)(iVar12 + (uint)bStack_48 + -0x8120) = bVar10;
      uVar2 = 0x20;
      bStack_48 = bStack_48 + 1;
    }
    else {
      uVar14 = 2;
    }
    if (uVar14 != 0) break;
  }
  if (uVar14 == 0) {
    return uVar2;
  }
  if (uVar14 == 1) {
    uVar14 = 0x31;
    _DAT_ffff6b93 = CONCAT11(0x31,DAT_ffff6b94);
  }
  else {
    if (uVar14 != 2) goto LAB_00076f48;
    uVar14 = 0x33;
    _DAT_ffff6b93 = CONCAT11(0x33,DAT_ffff6b94);
  }
  DAT_ffff6b92 = ',';
  DAT_ffff6b91 = 0x7f;
  _DAT_ffff7b98 = 3;
LAB_00076f48:
  uVar1 = 0;
  while ((uVar1 & 0xff) < 10) {
    uVar14 = uVar1 & 0xff;
    *(undefined4 *)(uVar14 * 4 + iVar13 + -0x8440) = 0;
    *(undefined1 *)(iVar12 + -0x8120 + uVar14) = 0;
    uVar1 = uVar14 + 1;
  }
  return uVar14;
}

