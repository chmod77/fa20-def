
void FUN_00087478(void)

{
  short *psVar1;
  byte *pbVar2;
  byte *pbVar3;
  short *psVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  byte bVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  byte local_50 [4];
  byte abStack_4c [4];
  byte abStack_48 [4];
  byte abStack_44 [4];
  byte abStack_40 [4];
  byte abStack_3c [4];
  byte abStack_38 [4];
  byte abStack_34 [4];
  byte abStack_30 [4];
  byte abStack_2c [4];
  short *psStack_28;
  
  psVar1 = DAT_00087790;
  psStack_28 = DAT_00087790;
  iVar10 = (int)DAT_0008765c;
  (*(code *)PTR_FUN_00087798)
            ((*DAT_00087794 & 0x20) != 0,(int)*DAT_000877a4,(int)*DAT_000877a0,(int)*DAT_0008779c,
             DAT_00087790 + 0x78,(int)DAT_00087790 + iVar10);
  psVar4 = DAT_000877bc;
  pbVar2 = DAT_000877b0;
  (*(code *)PTR_FUN_000877b8)
            ((int)*psVar1,(int)*DAT_000877bc,((int)*DAT_000877a8 & 0x80U) != 0,
             (*DAT_000877ac & 0x10) != 0,(int)*(char *)(DAT_000877b4 + 4),
             (int)*(char *)(DAT_000877b4 + 3),DAT_000877b0 + 7,DAT_000877b0 + 0xc,DAT_000877b0 + 8);
  pcVar5 = DAT_000877c8;
  (*(code *)PTR_FUN_000877c4)
            ((int)*DAT_000877cc,(int)(char)DAT_000877c0[1],(int)*DAT_000877c8,(int)DAT_000877c8[1],
             *DAT_000877c0,pbVar2 + 9);
  (*(code *)PTR_FUN_000877d0)
            ((int)psVar1[3],(int)*psVar4,(int)psVar1 + iVar10 + -0x1a,(int)psVar1 + iVar10 + -0x1e);
  (*(code *)PTR_FUN_000877d8)(*DAT_000877dc,DAT_000877d4);
  (*(code *)PTR_FUN_000877e0)
            ((int)*DAT_000877e4,(int)DAT_000877e4[3],(int)*psVar4,(int)psVar1 + iVar10 + 0xc,
             psVar1 + 0x7f);
  (*(code *)PTR_FUN_000877e8)((int)pcVar5[0xf],(int)(char)pbVar2[9],(int)*DAT_000877ec,local_50);
  uVar7 = (*(code *)(int)DAT_0008765e)((int)DAT_00087660);
  bVar8 = pbVar2[0xe] | 0x20;
  if ((local_50[0] & 1) == 0) {
    bVar8 = pbVar2[0xe] & 0xdf;
  }
  pcVar9 = (code *)(int)DAT_0008765e;
  pbVar2[0xe] = bVar8;
  (*pcVar9)(uVar7);
  (*(code *)PTR_FUN_000877f0)((int)*DAT_000877ec,pbVar2 + 4);
  FUN_00088000((int)psVar1[0x10],DAT_00087662 + 0x4e + (int)psStack_28,
               (int)psStack_28 + (int)DAT_00087662);
  (*(code *)PTR_FUN_000877f8)(DAT_000877f4[4] & 1,abStack_4c);
  (*pcVar9)((int)DAT_00087660);
  bVar8 = pbVar2[0xf] | 2;
  if ((abStack_4c[0] & 1) == 0) {
    bVar8 = pbVar2[0xf] & 0xfd;
  }
  pcVar9 = (code *)(int)DAT_0008765e;
  pbVar2[0xf] = bVar8;
  (*pcVar9)();
  (*(code *)PTR_FUN_000877fc)((*DAT_000877f4 & 2) != 0,abStack_48);
  uVar7 = (*pcVar9)((int)DAT_00087660);
  bVar8 = pbVar2[0xf] | 1;
  if ((abStack_48[0] & 1) == 0) {
    bVar8 = pbVar2[0xf] & 0xfe;
  }
  pcVar9 = (code *)(int)DAT_0008765e;
  pbVar2[0xf] = bVar8;
  (*pcVar9)(uVar7);
  psVar4 = psStack_28;
  pcVar5 = DAT_000877c8;
  pbVar3 = DAT_000877b0;
  (*(code *)PTR_FUN_00087804)
            ((int)*(char *)(DAT_000877b4 + 6),(int)(char)DAT_000877b0[7],(int)DAT_000877c8[0xf],
             (int)*(char *)(DAT_000877b4 + 0xc),(int)*DAT_00087800,psStack_28 + 0x7a);
  pcVar6 = DAT_00087800;
  (*(code *)PTR_FUN_00087808)
            ((int)pcVar5[0xf],(int)(char)pbVar3[9],(int)*DAT_000877ec,(*DAT_00087794 & 0x20) != 0,
             *(undefined2 *)(DAT_000877f4 + 0x1c),DAT_00087800[0xf] & 1,(pbVar2[0xe] & 0x20) != 0,
             (int)psVar4 + (int)DAT_00087786,abStack_44);
  (*pcVar9)((int)DAT_00087788);
  bVar8 = pbVar2[0xe] | 0x40;
  if ((abStack_44[0] & 1) == 0) {
    bVar8 = pbVar2[0xe] & 0xbf;
  }
  pcVar9 = (code *)(int)DAT_0008778a;
  pbVar2[0xe] = bVar8;
  (*pcVar9)();
  iVar10 = (int)DAT_0008778c;
  (*(code *)PTR_FUN_00087818)
            ((*DAT_0008780c & 0x40) != 0,(DAT_00087810[2] & 4) != 0,(DAT_00087810[2] & 2) != 0,
             (DAT_00087810[7] & 0x10) != 0,*DAT_00087814 & 1,(*DAT_00087814 & 0x10) != 0,
             (*DAT_00087810 & 0x20) != 0,(DAT_00087810[2] & 0x20) != 0,psVar1[0x94],psVar1[0x9a],
             (int)psStack_28 + iVar10 + -0x2e,(int)psStack_28 + iVar10 + -4,
             (int)psStack_28 + iVar10 + -2,(int)psStack_28 + iVar10);
  (*(code *)PTR_FUN_0008781c)
            ((int)DAT_000877c8[0xf],(int)(char)DAT_000877b0[9],(int)*DAT_000877ec,pcVar6[0xf] & 1,
             (*DAT_00087794 & 0x20) != 0,(pbVar2[0xe] & 0x20) != 0,abStack_40);
  uVar7 = (*(code *)(int)DAT_0008778a)((int)DAT_00087788);
  bVar8 = pbVar2[0xe] | 0x80;
  if ((abStack_40[0] & 1) == 0) {
    bVar8 = pbVar2[0xe] & 0x7f;
  }
  pcVar9 = (code *)(int)DAT_000879fc;
  pbVar2[0xe] = bVar8;
  (*pcVar9)(uVar7);
  iVar10 = (int)DAT_000879fe;
  (*(code *)PTR_FUN_00087b48)((int)psVar1[0x93],(int)psVar1[0x2a],(int)psStack_28 + iVar10);
  (*(code *)PTR_FUN_00087b4c)((int)psVar1[0x93],(int)psVar1[0x5e],(int)psStack_28 + iVar10 + 0x40);
  (*(code *)PTR_FUN_00087b50)
            ((int)psVar1[0x9a],(int)psVar1[0xa5],(int)*DAT_00087b54,psStack_28 + 0x7b,
             (int)psStack_28 + iVar10 + 0x3a);
  (*(code *)PTR_FUN_00087b58)
            ((int)psVar1[0xae],(int)psVar1[0x94],(int)psVar1[0xa5],(int)psStack_28 + iVar10 + 0x22);
  (*(code *)PTR_FUN_00087b60)
            ((int)*(char *)(DAT_00087b5c + 7),(int)psVar1[0x7a],(int)*DAT_00087b64,
             (int)*DAT_00087b54,psVar1[0x96],psVar1[0x97],psVar1[0xad],psVar1[0x78],
             (int)*(char *)(DAT_00087b5c + 9),psVar1[0x8a],(int)psStack_28 + iVar10 + 0x14,
             (int)psStack_28 + iVar10 + 0x38,(int)psStack_28 + iVar10 + 0x18,
             (int)psStack_28 + iVar10 + 0x16);
  (*(code *)PTR_FUN_00087b6c)
            ((int)psVar1[0x7b],((int)(char)PTR_DAT_00087b68[1] & 0x80U) != 0,(int)*DAT_00087b70,
             (int)*DAT_00087b54,(int)psStack_28 + iVar10 + 0x3e,(int)psStack_28 + iVar10 + 0x20,
             (int)psStack_28 + iVar10 + 0x28,(int)psStack_28 + iVar10 + 4,
             (int)psStack_28 + iVar10 + 0x32);
  (*(code *)PTR_FUN_00087b74)
            ((int)psVar1[0x8f],(int)*(short *)(DAT_00087b78 + 0x1c),(int)psStack_28 + iVar10 + 0x12,
             pbVar2 + 6);
  (*(code *)PTR_FUN_00087b80)
            ((int)psVar1[0x8f],(int)psVar1[0x85],(int)psVar1[0xad],(int)psVar1[0x7b],
             *(undefined1 *)(DAT_00087b54 + 4),psVar1[0xa4],psVar1[0x7a],psVar1[0x8a],pbVar2 + 0xd,
             (int)psStack_28 + iVar10 + -4,DAT_00087b7c);
  (*(code *)PTR_FUN_00087b88)
            ((int)psVar1[0x7b],(int)*(char *)(DAT_00087b54 + 4),(int)psVar1[0xa4],(int)psVar1[0xad],
             psVar1[0x8a],(int)psStack_28 + iVar10 + -2,DAT_00087b84,(int)psStack_28 + iVar10 + -6);
  FUN_00087ee4((int)psVar1[0x85],(int)psVar1[0x84],DAT_00087b8c);
  (*(code *)PTR_FUN_00087b90)
            ((int)psVar1[0x7b],(int)psVar1[0x84],psStack_28 + 0x7c,(int)psStack_28 + iVar10 + 0x54,
             (int)psStack_28 + iVar10 + 0x1a);
  (*(code *)PTR_FUN_00087b94)((int)psVar1[0x93],(int)psVar1[0x84],(int)psStack_28 + iVar10 + -8);
  pcVar5 = DAT_00087b98;
  psVar4 = DAT_00087b54;
  (*(code *)PTR_FUN_00087bb8)
            ((int)*DAT_00087b8c,(int)*DAT_00087bbc,(int)DAT_00087b98[1],DAT_00087b98[3] & 1,
             (*DAT_00087b9c & 0x20) != 0,((int)(char)*DAT_00087b9c & 0x80U) != 0,
             (*DAT_00087ba0 & 4) != 0,(*DAT_00087ba4 & 2) != 0,(*DAT_00087ba4 & 4) != 0,
             *DAT_00087bb4,*DAT_00087b54,(*DAT_00087ba8 & 4) != 0,*(undefined1 *)(DAT_00087b54 + 7),
             *DAT_00087bb0,(*DAT_00087bac & 0x40) != 0,pbVar2 + 5,(int)psStack_28 + iVar10 + 8,
             (int)psStack_28 + iVar10 + 6);
  (*(code *)PTR_FUN_00087bc0)
            ((int)*psVar4,*DAT_00087bc4,(int)psVar1[0x7c],psStack_28 + 0x7d,
             (int)psStack_28 + iVar10 + 0x56,(int)psStack_28 + iVar10 + 0x2e,
             (int)psStack_28 + iVar10 + 0x2c,psStack_28 + 0x7e,(int)psStack_28 + iVar10 + 0x30,
             (int)psStack_28 + iVar10 + 0x4c);
  (*(code *)PTR_FUN_00087bc8)((int)*(char *)(DAT_00087b5c + 5),abStack_3c);
  uVar7 = (*(code *)(int)DAT_00087b44)((int)DAT_00087b42);
  bVar8 = pbVar2[0xe] | 2;
  if ((abStack_3c[0] & 1) == 0) {
    bVar8 = pbVar2[0xe] & 0xfd;
  }
  pcVar9 = (code *)(int)DAT_00087b44;
  pbVar2[0xe] = bVar8;
  (*pcVar9)(uVar7);
  (*(code *)PTR_FUN_00087bcc)((int)*(char *)(DAT_00087b5c + 5),(int)*pcVar5,*pbVar2 & 1,abStack_38);
  uVar7 = (*pcVar9)((int)DAT_00087b42);
  bVar8 = pbVar2[0xe] | 4;
  if ((abStack_38[0] & 1) == 0) {
    bVar8 = pbVar2[0xe] & 0xfb;
  }
  pcVar9 = (code *)(int)DAT_00087da0;
  pbVar2[0xe] = bVar8;
  (*pcVar9)(uVar7);
  (*(code *)PTR_FUN_00087e2c)((int)*(char *)(DAT_00087e30 + 5),abStack_34);
  uVar7 = (*pcVar9)((int)DAT_00087da2);
  bVar8 = pbVar2[0xe] | 1;
  if ((abStack_34[0] & 1) == 0) {
    bVar8 = pbVar2[0xe] & 0xfe;
  }
  pcVar9 = (code *)(int)DAT_00087da0;
  pbVar2[0xe] = bVar8;
  (*pcVar9)(uVar7);
  psVar4 = psStack_28;
  (*(code *)PTR_FUN_00087e34)((int)psVar1[0x93],(int)psVar1[0x7d],psStack_28 + 0x79);
  iVar10 = DAT_00087e30;
  iVar11 = (int)DAT_00087da4;
  (*(code *)PTR_FUN_00087e48)
            ((int)psVar1[0x93],(int)*DAT_00087e4c,(int)psVar1[0x84],(int)*(char *)(DAT_00087e30 + 5)
             ,(int)*DAT_00087e44,*DAT_00087e40,(int)*DAT_00087e3c,(*PTR_DAT_00087e38 & 8) != 0,
             (int)psVar4 + iVar11);
  (*(code *)PTR_FUN_00087e50)
            ((int)psVar1[0x94],(int)psVar1[0x7d],(int)psVar1[0x8e],(int)*(char *)(iVar10 + 4),
             (int)psVar4 + iVar11 + 0x58);
  (*(code *)PTR_FUN_00087e54)((pbVar2[0xe] & 2) != 0,(int)pcVar5[1],*pbVar2 & 1,abStack_30);
  (*pcVar9)((int)DAT_00087da2);
  bVar8 = *DAT_00087e58 | 0x20;
  if ((abStack_30[0] & 1) == 0) {
    bVar8 = *DAT_00087e58 & 0xdf;
  }
  pcVar9 = (code *)(int)DAT_00087da0;
  *DAT_00087e58 = bVar8;
  (*pcVar9)();
  (*(code *)PTR_FUN_00087e5c)((pbVar2[0xe] & 2) != 0,(int)pcVar5[1],abStack_2c);
  uVar7 = (*pcVar9)((int)DAT_00087da2);
  bVar8 = *DAT_00087e58 | 0x10;
  if ((abStack_2c[0] & 1) == 0) {
    bVar8 = *DAT_00087e58 & 0xef;
  }
  pcVar9 = (code *)(int)DAT_00087da0;
  *DAT_00087e58 = bVar8;
  (*pcVar9)(uVar7);
  psVar4 = psStack_28;
  iVar10 = (int)DAT_00087da6;
  (*(code *)PTR_FUN_00087e60)((int)psVar1[0xae],(int)psVar1[0xac],(int)psStack_28 + iVar10);
  pcVar5 = DAT_00087e64;
  FUN_00087f78((int)psVar1[0xac],(int)*DAT_00087e68,(int)*DAT_00087e64,(int)psVar1[0x5d],
               (int)psVar4 + iVar10 + 0x1c);
  (*(code *)PTR_FUN_00087e6c)((int)psVar1[0xae]);
  (*(code *)PTR_FUN_00087e70)
            (*PTR_DAT_00087e38 & 1,(*PTR_DAT_00087e38 & 0x40) != 0,
             ((int)(char)*PTR_DAT_00087e38 & 0x80U) != 0,(int)*(short *)(DAT_00087e74 + 4),*pcVar5,
             psVar1[0x10],psVar1[0xb1],(int)psVar4 + iVar10 + -6);
  psStack_28 = (short *)((int)psVar4 + iVar10 + 0x20);
  FUN_00088054((int)psVar1[0xa0],(int)*DAT_00087e68,(*DAT_00087e78 & 4) != 0,pbVar2[0xf] & 1,
               *DAT_00087e90,*DAT_00087e8c,(pbVar2[0xf] & 2) != 0,(*DAT_00087e7c & 0x40) != 0,
               *(undefined2 *)(DAT_00087e88 + 0x1c),(*DAT_00087e80 & 4) != 0,
               (*DAT_00087e84 & 4) != 0,(*DAT_00087e84 & 0x10) != 0,(*DAT_00087e80 & 8) != 0,
               psVar1[0xb2],psStack_28,(int)psVar4 + iVar10 + 6);
  return;
}

