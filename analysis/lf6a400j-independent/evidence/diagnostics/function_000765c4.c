
uint FUN_000765c4(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar8;
  int iVar6;
  uint uVar7;
  undefined *puVar9;
  byte bVar10;
  ushort uVar12;
  uint uVar11;
  byte bVar13;
  ushort unaff_r8;
  uint uVar14;
  int iVar15;
  int iVar16;
  char cVar18;
  uint uVar17;
  uint uVar19;
  byte bStack_48;
  ushort uStack_44;
  ushort *puStack_34;
  byte bStack_24;
  
  puVar1 = DAT_0007682c;
  iVar6 = DAT_00076828;
  iVar15 = 0;
  uStack_44 = 0;
  uVar12 = (ushort)*(byte *)(DAT_00076828 + 2) * 0x100 + (ushort)*(byte *)(DAT_00076828 + 3);
  *DAT_0007682c = 0x6c;
  puVar1[1] = *(undefined1 *)(iVar6 + 1);
  *(ushort *)(puVar1 + 2) = uVar12;
  *DAT_00076830 = 4;
  puVar2 = DAT_00077078;
  bVar13 = (byte)uVar12;
  if (*(char *)(iVar6 + 1) == '\x01') {
    if ((*DAT_00076834 < 8) || ((*DAT_00076834 & 3) != 0)) {
      *puVar1 = 0x7f;
      puVar1[1] = 0x2c;
      puVar1[2] = 0x13;
      *DAT_00076da0 = 3;
      return 0x13;
    }
    uVar5 = (uint)uVar12;
    if ((((int)uVar5 < (int)PTR_DAT_00076838) || ((int)PTR_DAT_0007683c < (int)uVar5)) &&
       (((int)uVar5 < (int)PTR_DAT_00076840 || ((int)PTR_DAT_00076844 < (int)uVar5)))) {
      *puVar1 = 0x7f;
      puVar1[1] = 0x2c;
      puVar1[2] = 0x31;
      *DAT_00076da0 = 3;
      return 0x31;
    }
    uVar5 = ((int)(uint)*DAT_00076834 >> 2) - 1;
    bStack_48 = 0;
    if (10 < (uVar5 & 0xff)) {
      *puVar1 = 0x7f;
      puVar1[1] = 0x2c;
      puVar1[2] = 0x31;
      *DAT_00076da0 = 3;
      return 0x31;
    }
    uVar4 = 0;
    uVar12 = uVar12 & DAT_00076780;
    do {
      iVar16 = DAT_00076874;
      uVar17 = uVar4 & 0xff;
      if ((uVar5 & 0xff) <= uVar17) {
        return 0x1c;
      }
      iVar3 = uVar17 * 4;
      uVar7 = (uint)*(byte *)(iVar6 + 5 + iVar3) + (uint)*(byte *)(iVar6 + 4 + iVar3) * 0x100;
      uVar14 = (uint)*(byte *)(iVar6 + 6 + iVar3);
      bVar10 = *(byte *)(iVar6 + 7 + iVar3);
      puVar9 = (undefined *)(uVar7 & (uint)PTR_DAT_00076848);
      uVar19 = (uint)bVar10;
      if (puVar9 == (undefined *)0x0) {
        unaff_r8 = 0x35;
        puStack_34 = (ushort *)PTR_PTR_00076850;
      }
      else if (puVar9 == (undefined *)(int)DAT_00076782) {
        unaff_r8 = 0x41;
        puStack_34 = (ushort *)PTR_DAT_00076854;
      }
      else if (puVar9 == (undefined *)(int)DAT_00076784) {
        unaff_r8 = 0x15;
        puStack_34 = (ushort *)PTR_DAT_00076858;
      }
      else if (puVar9 == (undefined *)(int)DAT_00076786) {
        unaff_r8 = 0x4d;
        puStack_34 = (ushort *)PTR_DAT_0007685c;
      }
      else if (puVar9 == (undefined *)(int)DAT_00076788) {
        unaff_r8 = 0x3a;
        puStack_34 = (ushort *)PTR_DAT_00076860;
      }
      else if (puVar9 == (undefined *)(int)DAT_0007678a) {
        unaff_r8 = 0x2a;
        puStack_34 = (ushort *)PTR_DAT_00076864;
      }
      else if (puVar9 == (undefined *)(int)DAT_0007678c) {
        unaff_r8 = 0xc;
        puStack_34 = (ushort *)PTR_DAT_00076868;
      }
      else if (puVar9 == (undefined *)(int)DAT_0007678e) {
        unaff_r8 = 0xc;
        puStack_34 = (ushort *)PTR_DAT_0007686c;
      }
      else if (puVar9 == PTR_DAT_0007684c) {
        unaff_r8 = 6;
        puStack_34 = (ushort *)PTR_DAT_00076870;
      }
      else {
        iVar15 = 1;
      }
      if (uVar12 == DAT_00076790) {
        iVar3 = (uint)bVar13 * 10;
        uVar4 = uVar4 & 0xff;
        if (*(char *)(DAT_00076874 + iVar3 + uVar4) != '\0') {
          *puVar1 = 0x7f;
          puVar1[1] = 0x2c;
          puVar1[2] = 0x22;
          *DAT_00076b14 = 3;
          return 0x22;
        }
        if (iVar15 == 0) {
          for (uVar8 = 0; (uVar8 & 0xff) < unaff_r8; uVar8 = uVar8 + 1) {
            if ((uVar7 == *puStack_34) && ((*(byte *)((int)puStack_34 + 3) & 1) != 0)) {
              if (((uVar14 == 0) ||
                  (((*(byte *)(puStack_34 + 1) < uVar14 || (uVar19 == 0)) ||
                   ((int)((*(byte *)(puStack_34 + 1) - uVar14) + 1) < (int)uVar19)))) ||
                 (uStack_44 = uStack_44 + bVar10, *(ushort *)PTR_DAT_00076878 < uStack_44)) {
                iVar15 = 1;
              }
              else if (((((*DAT_0007687c == '\0') &&
                         (((int)*(char *)((int)puStack_34 + 3) & 0x80U) != 0)) ||
                        ((*DAT_0007687c == '\x01' && ((*(byte *)((int)puStack_34 + 3) & 0x10) != 0))
                        )) || ((*DAT_0007687c == '\x03' &&
                               ((*(byte *)((int)puStack_34 + 3) & 0x40) != 0)))) ||
                      ((*DAT_0007687c == '\x05' && ((*(byte *)((int)puStack_34 + 3) & 0x20) != 0))))
              {
                *(uint *)(DAT_00076b10 + (uint)bStack_48 * 4 + (uint)bVar13 * 0x28) =
                     *(int *)(puStack_34 + 2) + uVar14 + -1;
                *(byte *)(iVar16 + iVar3 + (uint)bStack_48) = bVar10;
                bStack_48 = bStack_48 + 1;
              }
              else {
                iVar15 = 2;
              }
              break;
            }
            puStack_34 = puStack_34 + 4;
          }
          if (unaff_r8 <= (uVar8 & 0xff)) {
            iVar15 = 1;
          }
        }
        if (iVar15 != 0) {
          if (iVar15 == 1) {
            *puVar1 = 0x7f;
            puVar1[1] = 0x2c;
            puVar1[2] = 0x31;
          }
          else {
            if (iVar15 != 2) goto LAB_0007691e;
            *puVar1 = 0x7f;
            puVar1[1] = 0x2c;
            puVar1[2] = 0x33;
          }
          *DAT_00076b14 = 3;
LAB_0007691e:
          puVar9 = PTR_DAT_00076b18;
          uVar5 = 0x40;
          uVar4 = 0;
          while ((uVar4 & 0xff) < (uint)*(ushort *)puVar9) {
            uVar5 = uVar4 & 0xff;
            *(undefined4 *)(DAT_00076b10 + uVar5 * 4 + (uint)bVar13 * 0x28) = 0;
            *(undefined1 *)(iVar16 + iVar3 + uVar5) = 0;
            uVar4 = uVar5 + 1;
          }
          return uVar5;
        }
      }
      else {
        if ((uVar17 == 0) && (*(char *)(DAT_00076b1c + (uint)bVar13) != '\0')) {
          *puVar1 = 0x7f;
          puVar1[1] = 0x2c;
          puVar1[2] = 0x22;
          *DAT_00076b14 = 3;
          return 0x22;
        }
        if (iVar15 == 0) {
          for (uVar8 = 0; (uVar8 & 0xff) < unaff_r8; uVar8 = uVar8 + 1) {
            if ((uVar7 == *puStack_34) && ((*(byte *)((int)puStack_34 + 3) & 1) != 0)) {
              if ((uVar14 == 0) ||
                 ((((*(byte *)(puStack_34 + 1) < uVar14 || (uVar19 == 0)) ||
                   ((int)((*(byte *)(puStack_34 + 1) - uVar14) + 1) < (int)uVar19)) ||
                  (uStack_44 = uStack_44 + bVar10, 7 < uStack_44)))) {
                iVar15 = 1;
              }
              else if ((((*DAT_00076b20 == '\0') &&
                        (((int)*(char *)((int)puStack_34 + 3) & 0x80U) != 0)) ||
                       ((*DAT_00076b20 == '\x01' && ((*(byte *)((int)puStack_34 + 3) & 0x10) != 0)))
                       ) || (((*DAT_00076b20 == '\x03' &&
                              ((*(byte *)((int)puStack_34 + 3) & 0x40) != 0)) ||
                             ((*DAT_00076b20 == '\x05' &&
                              ((*(byte *)((int)puStack_34 + 3) & 0x20) != 0)))))) {
                iVar16 = *(int *)(puStack_34 + 2) + uVar14 + -1;
                for (bStack_24 = 0; bStack_24 < uVar19; bStack_24 = bStack_24 + 1) {
                  *(int *)(DAT_00076b24 + (uint)bStack_48 * 4 + (uint)bVar13 * 0x1c) = iVar16;
                  *(char *)(DAT_00076b1c + (uint)bVar13) =
                       *(char *)(DAT_00076b1c + (uint)bVar13) + '\x01';
                  bStack_48 = bStack_48 + 1;
                  iVar16 = iVar16 + 1;
                }
              }
              else {
                iVar15 = 2;
              }
              break;
            }
            puStack_34 = puStack_34 + 4;
          }
          if (unaff_r8 <= (uVar8 & 0xff)) {
            iVar15 = 1;
          }
        }
        if (iVar15 != 0) {
          uVar5 = (uint)bVar13;
          if (iVar15 == 1) {
            *puVar1 = 0x7f;
            puVar1[1] = 0x2c;
            puVar1[2] = 0x31;
          }
          else {
            if (iVar15 != 2) goto LAB_00076afa;
            *puVar1 = 0x7f;
            puVar1[1] = 0x2c;
            puVar1[2] = 0x33;
          }
          *DAT_00076b14 = 3;
LAB_00076afa:
          iVar15 = 0;
          iVar6 = uVar5 * 0x1c + DAT_00076b24;
          for (bVar13 = 0; 6 >= bVar13; bVar13 = bVar13 + 1) {
            *(uint *)(iVar6 + iVar15) = (uint)(6 < bVar13);
            iVar15 = iVar15 + 4;
          }
          *(undefined1 *)(DAT_00076d9c + uVar5) = 0;
          return uVar5;
        }
      }
      uVar4 = uVar4 + 1;
    } while( true );
  }
  if (*(char *)(iVar6 + 1) == '\x02') {
    if ((9 < *DAT_00076da4) && (iVar15 = (*(code *)PTR_FUN_00076da8)(), iVar15 == 0)) {
      uVar5 = (uint)uVar12;
      if (((((int)PTR_DAT_00076dac <= (int)uVar5) && ((int)uVar5 <= (int)PTR_DAT_00076db0)) ||
          (((int)PTR_DAT_00076db4 <= (int)uVar5 && ((int)uVar5 <= (int)PTR_DAT_00076db8)))) &&
         (*(char *)(iVar6 + 4) == '\x14')) {
        iVar15 = (*(code *)PTR_FUN_00076dbc)();
        puVar1 = DAT_00077078;
        iVar6 = DAT_00077054;
        uVar5 = iVar15 - 1;
        bStack_48 = 0;
        if ((uVar5 & 0xff) <= (uint)*(ushort *)PTR_DAT_00076dc0) {
          if ((uVar12 & DAT_00076d7c) == DAT_00076d7e) {
            if (*(char *)(DAT_00076d9c + (uint)bVar13) == '\0') {
              uVar17 = (uint)bVar13;
              cVar18 = '\0';
              uVar4 = 0x20;
              uVar19 = 0;
              for (uVar14 = 0; iVar6 = DAT_00076d9c, (uVar14 & 0xff) < (uVar5 & 0xff);
                  uVar14 = uVar14 + 1) {
                uVar4 = (uVar14 & 0xff) * 5;
                uVar11 = (uint)*(byte *)(DAT_00076dc4 + 8 + uVar4) +
                         (uint)*(byte *)(DAT_00076dc4 + 7 + uVar4) * 0x100 +
                         (uint)*(byte *)(DAT_00076dc4 + 6 + uVar4) * 0x10000 +
                         *(char *)(DAT_00076dc4 + 5 + uVar4) * 0x1000000;
                uVar7 = (uint)*(byte *)(DAT_00076dc4 + 9 + uVar4);
                if ((uVar7 == 0) || (uVar4 = uVar17, 7 < *(byte *)(DAT_00076d9c + uVar17) + uVar7))
                {
LAB_00076d28:
                  cVar18 = '\x01';
                }
                else {
                  for (bVar10 = 0; bVar10 < uVar7; bVar10 = bVar10 + 1) {
                    if (((uVar11 < *(uint *)PTR_DAT_00076dc8) ||
                        (*(uint *)PTR_PTR_00076dcc < uVar11)) &&
                       ((uVar11 < *(uint *)PTR_DAT_00076dd0 || (*(uint *)PTR_DAT_00076dd4 < uVar11))
                       )) goto LAB_00076d28;
                    if ((((uVar11 < *(uint *)PTR_DAT_00076dc8) ||
                         (*(uint *)PTR_PTR_00076dcc < uVar11)) || (*DAT_00076dd8 == '\x01')) ||
                       ((*DAT_00076dd8 == '\x03' || (uVar4 = (uint)*DAT_00076dd8, uVar4 == 5)))) {
                      *(uint *)(DAT_00076ddc + (uVar19 & 0xff) * 4 + uVar17 * 0x1c) = uVar11;
                      uVar4 = (uint)bVar13;
                      *(char *)(iVar6 + uVar4) = *(char *)(iVar6 + uVar4) + '\x01';
                      uVar19 = (uVar19 & 0xff) + 1;
                    }
                    else {
                      cVar18 = '\x02';
                    }
                    uVar11 = uVar11 + 1;
                  }
                }
                if (cVar18 != '\0') break;
              }
              puVar1 = DAT_00076de0;
              iVar6 = DAT_00076d9c;
              if (cVar18 == '\0') {
                return uVar4;
              }
              if (cVar18 == '\x01') {
                *DAT_00076de0 = 0x7f;
                puVar1[1] = 0x2c;
                puVar1[2] = 0x31;
              }
              else {
                if (cVar18 != '\x02') goto LAB_00076d72;
                *DAT_00076de0 = 0x7f;
                puVar1[1] = 0x2c;
                puVar1[2] = 0x33;
              }
              *DAT_00076da0 = 3;
LAB_00076d72:
              iVar16 = 0;
              iVar15 = DAT_00076ddc + uVar17 * 0x1c;
              for (bVar13 = 0; 6 >= bVar13; bVar13 = bVar13 + 1) {
                *(uint *)(iVar15 + iVar16) = (uint)(6 < bVar13);
                iVar16 = iVar16 + 4;
              }
              *(undefined1 *)(iVar6 + uVar17) = 0;
              return uVar17;
            }
          }
          else {
            iVar15 = (uint)bVar13 * 10;
            if (*(char *)(DAT_00077054 + iVar15) == '\0') {
              iVar16 = (uint)bVar13 * 0x28;
              uVar14 = 0;
              uVar4 = 0x1c;
              uVar17 = 0;
              for (uVar19 = 0; (uVar19 & 0xff) < (uVar5 & 0xff); uVar19 = uVar19 + 1) {
                uVar4 = (uVar19 & 0xff) * 5;
                bVar13 = *(byte *)(DAT_00077058 + 9 + uVar4);
                uVar11 = (uint)bVar13;
                uVar7 = (uint)*(byte *)(DAT_00077058 + 8 + uVar4) +
                        (uint)*(byte *)(DAT_00077058 + 7 + uVar4) * 0x100 +
                        (uint)*(byte *)(DAT_00077058 + 6 + uVar4) * 0x10000 +
                        *(char *)(DAT_00077058 + 5 + uVar4) * 0x1000000;
                if (((((uVar11 == 0) || (100 < uVar11)) ||
                     (uVar14 = uVar14 + uVar11,
                     (uint)*(ushort *)PTR_DAT_0007705c < (uVar14 & 0xffff))) ||
                    (((uVar11 = uVar7 + uVar11, uVar7 < *(uint *)PTR_DAT_00077060 ||
                      (*(uint *)PTR_PTR_00077064 < uVar7)) &&
                     ((uVar7 < *(uint *)PTR_DAT_00077068 || (*(uint *)PTR_DAT_0007706c < uVar7))))))
                   || (((uVar11 < *(uint *)PTR_DAT_00077060 || (*(uint *)PTR_PTR_00077064 < uVar11))
                       && ((uVar11 < *(uint *)PTR_DAT_00077068 ||
                           (*(uint *)PTR_DAT_0007706c < uVar11)))))) {
                  uVar17 = 1;
                }
                else if ((((uVar7 < *(uint *)PTR_DAT_00077060) ||
                          (*(uint *)PTR_PTR_00077064 < uVar7)) || (*DAT_00077070 == '\x01')) ||
                        ((*DAT_00077070 == '\x03' || (uVar4 = (uint)*DAT_00077070, uVar4 == 5)))) {
                  *(uint *)(DAT_00077074 + (uint)bStack_48 * 4 + iVar16) = uVar7;
                  *(byte *)(iVar6 + iVar15 + (uint)bStack_48) = bVar13;
                  uVar4 = 0x20;
                  bStack_48 = bStack_48 + 1;
                }
                else {
                  uVar17 = 2;
                }
                if (uVar17 != 0) break;
              }
              puVar1 = DAT_00077078;
              if (uVar17 == 0) {
                return uVar4;
              }
              if (uVar17 == 1) {
                *DAT_00077078 = 0x7f;
                puVar1[1] = 0x2c;
                uVar17 = 0x31;
                puVar1[2] = 0x31;
              }
              else {
                if (uVar17 != 2) goto LAB_00076f48;
                *DAT_00077078 = 0x7f;
                puVar1[1] = 0x2c;
                uVar17 = 0x33;
                puVar1[2] = 0x33;
              }
              *DAT_0007707c = 3;
LAB_00076f48:
              puVar9 = PTR_DAT_00077080;
              uVar5 = 0;
              while ((uVar5 & 0xff) < (uint)*(ushort *)puVar9) {
                uVar17 = uVar5 & 0xff;
                *(undefined4 *)(DAT_00077074 + uVar17 * 4 + iVar16) = 0;
                *(undefined1 *)(iVar6 + iVar15 + uVar17) = 0;
                uVar5 = uVar17 + 1;
              }
              return uVar17;
            }
          }
          *DAT_00077078 = 0x7f;
          puVar1[1] = 0x2c;
          uVar5 = 0x22;
          puVar1[2] = 0x22;
          goto LAB_00076fee;
        }
      }
      puVar1 = DAT_00077078;
      *DAT_00077078 = 0x7f;
      puVar1[1] = 0x2c;
      uVar5 = 0x31;
      puVar1[2] = 0x31;
      goto LAB_00076fee;
    }
  }
  else {
    if (*(char *)(DAT_00077058 + 1) != '\x03') {
      *DAT_00077078 = 0x7f;
      puVar2[1] = 0x2c;
      uVar5 = 0x12;
      puVar2[2] = 0x12;
      goto LAB_00076fee;
    }
    if (*DAT_00077084 < 5) {
      FUN_00077008();
      puVar1 = DAT_00077078;
      *DAT_00077078 = 0x6c;
      iVar6 = DAT_00077058;
      puVar1[1] = *(undefined1 *)(DAT_00077058 + 1);
      if (*DAT_00077084 == 2) {
        *DAT_0007707c = 2;
        return 2;
      }
      puVar1[2] = *(undefined1 *)(iVar6 + 2);
      cVar18 = *(char *)(iVar6 + 3);
      puVar1[3] = cVar18;
      *DAT_0007707c = 4;
      return (int)cVar18;
    }
  }
  puVar1 = DAT_00077078;
  *DAT_00077078 = 0x7f;
  puVar1[1] = 0x2c;
  uVar5 = 0x13;
  puVar1[2] = 0x13;
LAB_00076fee:
  *DAT_0007707c = 3;
  return uVar5;
}

