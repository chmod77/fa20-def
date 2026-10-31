
void FUN_00082fa0(void)

{
  byte bVar1;
  byte bVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  ushort *puVar6;
  byte *pbVar7;
  short *psVar8;
  char *pcVar9;
  char *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  short *psVar13;
  byte bVar16;
  undefined4 uVar14;
  int iVar15;
  byte bVar17;
  uint uVar18;
  code *pcVar19;
  int local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  byte *local_c4;
  short *local_c0;
  short *local_bc;
  short *local_b8;
  short *local_b4;
  short *local_b0;
  short *local_ac;
  byte *local_a8;
  byte *local_a4;
  byte *local_a0;
  byte *local_9c;
  byte local_98 [4];
  byte abStack_94 [4];
  byte abStack_90 [4];
  byte abStack_8c [4];
  byte abStack_88 [4];
  byte abStack_84 [4];
  byte abStack_80 [4];
  byte abStack_7c [4];
  byte abStack_78 [4];
  byte abStack_74 [4];
  byte bStack_70;
  byte abStack_6c [4];
  byte abStack_68 [4];
  byte abStack_64 [4];
  byte abStack_60 [4];
  byte abStack_5c [4];
  byte bStack_58;
  short *psStack_54;
  char cStack_50;
  char cStack_4c;
  char cStack_48;
  char cStack_44;
  byte bStack_40;
  char cStack_3c;
  char cStack_38;
  char cStack_34;
  char cStack_30;
  char cStack_2c;
  uint uStack_28;
  
  iVar15 = DAT_000832b0;
  psVar3 = DAT_000832a8;
  (*(code *)PTR_FUN_000832b4)
            ((int)*DAT_000832ac,(int)DAT_000832ac[1],(DAT_000832ac[2] & 4U) != 0,DAT_000832b0 + 2);
  psVar4 = DAT_000832a8;
  psStack_54 = DAT_000832a8;
  (*(code *)PTR_FUN_000832b8)((int)psVar3[0x71],DAT_000832a8 + 0x1b);
  puVar6 = DAT_000832c8;
  local_b0 = (short *)(uint)(((int)(char)*PTR_DAT_000832bc & 0x80U) != 0);
  local_9c = (byte *)(psVar4 + 0x1e);
  local_a0 = (byte *)(psVar4 + 0x23);
  local_a4 = (byte *)(psVar4 + 0x22);
  local_a8 = (byte *)(psVar4 + 0x1f);
  local_ac = (short *)(uint)*DAT_000832c0;
  local_b4 = (short *)(uint)*DAT_000832c4;
  local_b8 = (short *)(uint)*DAT_000832c8;
  (*(code *)PTR_FUN_000832cc)
            ((int)*DAT_000832d4,(int)*(short *)(DAT_000832d0 + 0x12),(int)psVar3[0x74],
             (int)psVar3[0x83]);
  (*(code *)PTR_FUN_000832d8)((int)psVar3[0x84],(int)psVar3[0x83],psVar4 + 0x25);
  psVar8 = DAT_000832e8;
  pbVar7 = DAT_000832dc;
  local_9c = (byte *)(psVar4 + 0x2d);
  local_a0 = (byte *)(uint)*DAT_000832dc;
  local_a4 = (byte *)(uint)*DAT_000832e0;
  (*(code *)PTR_FUN_000832e4)
            ((int)(short)*puVar6,(int)psVar3[0x71],(int)psVar3[0x83],(int)*DAT_000832e8);
  local_9c = (byte *)(psVar4 + 0x67);
  (*(code *)PTR_FUN_000832ec)((int)(char)*pbVar7,(int)psVar3[0x71],(int)psVar3[0x83],(int)*psVar8);
  psVar8 = DAT_000832f4;
  (*(code *)PTR_FUN_000832f0)((int)*DAT_000832f8,(int)*DAT_000832f4,psVar4);
  pcVar9 = DAT_00083300;
  (*(code *)PTR_FUN_000832fc)((int)*DAT_00083300,psVar4 + 5);
  (*(code *)PTR_FUN_00083304)((int)*(short *)(DAT_00083308 + 10),(int)psVar8[2]);
  pbVar7 = DAT_0008330c;
  local_9c = (byte *)(psVar4 + 0x5e);
  local_a0 = (byte *)(psVar4 + 0x3b);
  (*(code *)PTR_FUN_00083310)
            ((int)(short)*puVar6,(int)psVar8[0xd],((int)(char)*DAT_0008330c & 0x80U) != 0,
             (int)*pcVar9);
  iVar5 = DAT_00083314;
  local_9c = (byte *)(psVar4 + 0x5f);
  local_a0 = (byte *)(psVar4 + 0x3d);
  local_a4 = (byte *)(uint)*(byte *)(DAT_00083314 + 1);
  (*(code *)PTR_FUN_00083318)
            ((int)(short)*puVar6,(int)psVar8[0xd],((int)(char)*pbVar7 & 0x80U) != 0,(int)*pcVar9);
  local_9c = (byte *)(psVar4 + 0x60);
  local_a0 = (byte *)(psVar4 + 0x3f);
  local_a4 = (byte *)(uint)*(byte *)(iVar5 + 1);
  (*(code *)PTR_FUN_0008331c)
            ((int)(short)*puVar6,(int)psVar8[0xd],((int)(char)*pbVar7 & 0x80U) != 0,(int)*pcVar9);
  local_9c = (byte *)(psVar4 + 0x61);
  local_a0 = (byte *)(psVar4 + 0x41);
  (*(code *)PTR_FUN_00083320)
            ((int)(short)*puVar6,(int)psVar8[0xd],((int)(char)*pbVar7 & 0x80U) != 0);
  (*(code *)PTR_FUN_00083324)();
  local_a4 = (byte *)((int)(char)*PTR_DAT_00083334 & 1);
  local_9c = (byte *)(iVar5 + 0xb);
  local_a0 = (byte *)(uint)*(byte *)(DAT_00083338 + 4);
  (*(code *)PTR_FUN_0008333c)
            ((*pbVar7 & 0x40) != 0,((int)(char)*pbVar7 & 0x80U) != 0,
             ((int)*DAT_0008332c & 0x80U) != 0,(*DAT_00083330 & 0x40) != 0);
  (*(code *)PTR_FUN_00083340)();
  local_a0 = (byte *)(uint)((*(byte *)(DAT_000832d0 + 3) & 2) != 0);
  local_9c = local_98;
  (*(code *)PTR_FUN_00083344)
            ((*pbVar7 & 0x40) != 0,((int)(char)*pbVar7 & 0x80U) != 0,
             (*(byte *)(DAT_000832d0 + 3) & 4) != 0,(int)*DAT_00083348);
  (*(code *)(int)DAT_000832a2)((int)DAT_000832a4);
  iVar5 = DAT_000832b0;
  bVar16 = *(byte *)(iVar15 + 9) | 2;
  if ((local_98[0] & 1) == 0) {
    bVar16 = *(byte *)(iVar15 + 9) & 0xfd;
  }
  pcVar19 = (code *)(int)DAT_000832a2;
  *(byte *)(DAT_000832b0 + 9) = bVar16;
  (*pcVar19)();
  (*(code *)PTR_FUN_0008334c)
            ((DAT_0008332c[0xc] & 4U) != 0,(int)*(short *)(DAT_00083350 + 6),
             (int)*(short *)(DAT_00083350 + 4),abStack_94);
  (*pcVar19)((int)DAT_000832a4);
  iVar15 = DAT_000832b0;
  bVar16 = *(byte *)(iVar5 + 9) | 8;
  if ((abStack_94[0] & 1) == 0) {
    bVar16 = *(byte *)(iVar5 + 9) & 0xf7;
  }
  pcVar19 = (code *)(int)DAT_000832a2;
  *(byte *)(DAT_000832b0 + 9) = bVar16;
  (*pcVar19)();
  local_9c = abStack_90;
  (*(code *)PTR_FUN_00083354)
            ((DAT_0008332c[0xc] & 4U) != 0,(int)*(short *)(DAT_00083350 + 6),
             (int)*(short *)(DAT_00083350 + 4));
  uVar14 = (*pcVar19)((int)DAT_000832a4);
  bVar16 = *(byte *)(iVar15 + 9) | 0x10;
  if ((abStack_90[0] & 1) == 0) {
    bVar16 = *(byte *)(iVar15 + 9) & 0xef;
  }
  pcVar19 = (code *)(int)DAT_000832a2;
  *(byte *)(DAT_000832b0 + 9) = bVar16;
  (*pcVar19)(uVar14);
  cStack_50 = '\x01' - ((*DAT_00083358 & 2) == 0);
  cStack_4c = '\x01' - ((*DAT_00083358 & 4) == 0);
  cStack_48 = '\x01' - ((*DAT_00083358 & 8) == 0);
  cStack_44 = '\x01' - ((*DAT_00083358 & 0x10) == 0);
  bStack_40 = *DAT_0008369c & 1;
  cStack_3c = '\x01' - ((*DAT_0008369c & 2) == 0);
  cStack_38 = '\x01' - ((*DAT_0008369c & 4) == 0);
  cStack_34 = '\x01' - ((*DAT_0008369c & 8) == 0);
  cStack_30 = '\x01' - ((*DAT_0008369c & 0x10) == 0);
  local_9c = abStack_8c;
  local_a0 = (byte *)(uint)((*DAT_000836a4 & 2) != 0);
  local_a4 = (byte *)((int)(char)*DAT_000836a4 & 1);
  local_a8 = (byte *)(uint)((DAT_0008369c[2] & 8) != 0);
  local_ac = (short *)(uint)((*DAT_000836a0 & 8) != 0);
  local_b0 = (short *)(uint)((*DAT_000836a0 & 4) != 0);
  local_b4 = (short *)(uint)((DAT_0008369c[2] & 4) != 0);
  local_b8 = (short *)(uint)((DAT_0008369c[2] & 2) != 0);
  local_bc = (short *)((int)(char)DAT_0008369c[2] & 1);
  local_c0 = (short *)(uint)((DAT_0008369c[1] & 2) != 0);
  local_c4 = (byte *)((int)(char)DAT_0008369c[1] & 1);
  local_c8 = (uint)((*DAT_0008369c & 0x20) != 0);
  iVar15 = (int)DAT_0008360e;
  local_cc = (uint)*(byte *)((int)&local_cc + iVar15);
  local_d0 = (uint)*(byte *)((int)&local_d0 + iVar15);
  local_d4 = (uint)*(byte *)((int)&local_d4 + iVar15);
  local_d8 = (uint)*(byte *)((int)&local_d8 + iVar15);
  local_dc = (uint)*(byte *)((int)&local_dc + iVar15);
  local_e0 = (uint)*(byte *)((int)&local_e0 + iVar15);
  (*(code *)PTR_FUN_000836a8)
            (*DAT_00083358 & 1,(int)*(char *)((int)&local_ec + iVar15),
             (int)*(char *)((int)&local_e8 + iVar15),(int)*(char *)((int)&local_e4 + iVar15));
  uVar14 = (*(code *)(int)DAT_00083612)((int)DAT_00083610);
  iVar15 = DAT_000836ac;
  bVar16 = *(byte *)(DAT_000836ac + 0xc) | 8;
  if ((abStack_8c[0] & 1) == 0) {
    bVar16 = *(byte *)(DAT_000836ac + 0xc) & 0xf7;
  }
  pcVar19 = (code *)(int)DAT_00083612;
  *(byte *)(DAT_000836ac + 0xc) = bVar16;
  (*pcVar19)(uVar14);
  psVar13 = psStack_54;
  (*(code *)PTR_FUN_000836b0)((int)psVar3[0x71]);
  psVar8 = DAT_000836cc;
  psVar4 = DAT_000836c8;
  local_b0 = (short *)(uint)((*DAT_000836bc & 4) != 0);
  local_ac = (short *)(uint)((*(byte *)(iVar15 + 0xc) & 8) != 0);
  local_9c = (byte *)(psVar13 + 0x66);
  local_a0 = (byte *)(uint)(ushort)psVar3[0x71];
  local_a4 = (byte *)(uint)*DAT_000836c0;
  local_a8 = (byte *)(uint)(ushort)psVar3[0x83];
  (*(code *)PTR_FUN_000836c4)
            ((int)*DAT_000836cc,(int)*DAT_000836c8,(*DAT_000836b8 & 0x20) != 0,
             (*DAT_000836bc & 2) != 0);
  pbVar7 = DAT_000836d0;
  (*(code *)PTR_FUN_000836d4)
            ((*DAT_000836d0 & 4) != 0,DAT_000836d0[2] & 1,(int)psVar3[0x33],psVar13 + 0x34);
  (*(code *)PTR_FUN_000836d8)((*pbVar7 & 4) != 0,pbVar7[2] & 1,(int)psVar3[0x33],psVar13 + 0x35);
  local_9c = (byte *)(psVar13 + 0x2b);
  local_a0 = (byte *)(psVar13 + 0x48);
  (*(code *)PTR_FUN_000836dc)((int)psVar3[0x25],(int)*psVar4,(int)*DAT_000836e0);
  pbVar7 = DAT_000836e8;
  local_d0 = (uint)((*PTR_DAT_000836e4 & 2) != 0);
  local_c8 = (uint)((*PTR_DAT_000836e4 & 0x20) != 0);
  local_c4 = (byte *)(uint)((DAT_000836e8[3] & 0x20) != 0);
  local_c0 = (short *)((int)(char)DAT_000836e8[3] & 1);
  local_bc = (short *)((int)(char)DAT_000836e8[4] & 1);
  local_9c = abStack_88;
  local_a0 = (byte *)(psVar13 + 0x16);
  local_a4 = (byte *)(psVar13 + 0x3a);
  local_a8 = (byte *)(psVar13 + 0x3c);
  local_ac = psVar13 + 0x3e;
  local_b0 = psVar13 + 0x40;
  local_b4 = psVar13 + 0x5c;
  local_b8 = (short *)(uint)(ushort)psVar3[0x41];
  local_cc = (uint)*DAT_000836ec;
  local_d4 = (uint)(ushort)psVar3[0x3b];
  (*(code *)PTR_FUN_000836f0)((int)*(short *)(DAT_000836f4 + 0x1a),(int)*psVar8,(int)psVar3[0x3f]);
  uVar14 = (*pcVar19)((int)DAT_00083610);
  bVar16 = *(byte *)(iVar15 + 0xc);
  bVar17 = bVar16 | 1;
  if ((abStack_88[0] & 1) == 0) {
    bVar17 = bVar16 & 0xfe;
  }
  pcVar19 = (code *)(int)DAT_00083698;
  *(byte *)(DAT_000836ac + 0xc) = bVar17;
  (*pcVar19)(uVar14);
  pcVar9 = DAT_00083a84;
  bVar16 = *DAT_000836f8;
  bVar17 = *DAT_000836fc;
  bVar1 = *PTR_DAT_00083700;
  bVar2 = pbVar7[3];
  local_e8 = (uint)(((int)(char)*DAT_00083704 & 0x80U) != 0);
  local_e4 = (uint)((*DAT_00083704 & 0x40) != 0);
  local_dc = (uint)((*(byte *)(DAT_00083708 + 0xf) & 8) != 0);
  uStack_28 = (uint)((*DAT_0008370c & 4) != 0);
  local_9c = (byte *)(DAT_00083714 + 10);
  local_a0 = (byte *)(DAT_00083714 + 0xe);
  local_a4 = (byte *)(DAT_00083714 + 8);
  local_a8 = abStack_84;
  local_ac = (short *)(DAT_00083714 + 0xc);
  local_b0 = (short *)(DAT_00083714 + 0xd);
  local_b4 = (short *)(DAT_00083714 + 9);
  local_b8 = (short *)DAT_00083a5c;
  local_bc = (short *)DAT_00083a60;
  local_c0 = (short *)DAT_00083a64;
  local_c4 = (byte *)DAT_00083a68;
  local_c8 = DAT_00083714 + 0xf;
  local_cc = (uint)((*(byte *)(DAT_000836ac + 9) & 0x10) != 0);
  local_d0 = (uint)((*(byte *)(DAT_000836ac + 9) & 8) != 0);
  local_d4 = (int)*DAT_00083710 & 1;
  uVar18 = *(uint *)((int)&local_d8 + (int)DAT_00083916) & 0xff;
  *(uint *)((int)&local_d8 + (int)DAT_00083916) = uVar18;
  local_e0 = (uint)*DAT_00083a6c;
  local_ec = (int)(short)DAT_00083a6c[5];
  local_d8 = uVar18;
  (*(code *)PTR_FUN_00083a74)
            ((int)*DAT_00083a84,(int)*(char *)(DAT_00083a80 + 0xb),(int)*DAT_00083a7c,
             (int)*DAT_00083a78,(bVar16 & 2) != 0,*(undefined1 *)(DAT_00083a70 + 4),
             (bVar17 & 0x40) != 0,bVar1 & 1,(bVar2 & 0x20) != 0);
  (*(code *)(int)DAT_0008391a)((int)DAT_00083918);
  pcVar10 = DAT_00083a84;
  bVar16 = pcVar9[9] | 4;
  if ((abStack_84[0] & 1) == 0) {
    bVar16 = pcVar9[9] & 0xfb;
  }
  pcVar19 = (code *)(int)DAT_0008391a;
  DAT_00083a84[9] = bVar16;
  (*pcVar19)();
  (*(code *)PTR_FUN_00083a88)((pcVar10[9] & 2U) != 0,(int)(short)*DAT_00083a6c,abStack_80);
  uVar14 = (*pcVar19)((int)DAT_00083918);
  pcVar9 = DAT_00083a84;
  bVar16 = pcVar10[9];
  bVar17 = bVar16 | 1;
  if ((abStack_80[0] & 1) == 0) {
    bVar17 = bVar16 & 0xfe;
  }
  pcVar19 = (code *)(int)DAT_0008391a;
  DAT_00083a84[9] = bVar17;
  (*pcVar19)(uVar14);
  local_9c = (byte *)(psStack_54 + 0xd);
  local_a0 = abStack_7c;
  local_a4 = (byte *)(psStack_54 + 0x4b);
  local_a8 = (byte *)(psStack_54 + 0x4a);
  local_ac = psStack_54 + 0x49;
  (*(code *)PTR_FUN_00083a94)
            ((int)*(char *)(DAT_00083a80 + 0xf),(int)(short)*DAT_00083a6c,
             (*DAT_00083a8c & 0x40) != 0,(*DAT_00083a90 & 0x20) != 0);
  (*pcVar19)((int)DAT_00083918);
  pcVar10 = DAT_00083a84;
  bVar16 = pcVar9[0xb] | 8;
  if ((abStack_7c[0] & 1) == 0) {
    bVar16 = pcVar9[0xb] & 0xf7;
  }
  pcVar19 = (code *)(int)DAT_0008391a;
  DAT_00083a84[0xb] = bVar16;
  (*pcVar19)();
  pbVar11 = DAT_00083a98;
  local_bc = (short *)(uint)((*pbVar7 & 4) != 0);
  local_b8 = (short *)(uint)((*pbVar7 & 2) != 0);
  local_b4 = (short *)(uint)(((int)(char)*pbVar7 & 0x80U) != 0);
  local_b0 = (short *)(uint)((DAT_00083a98[5] & 4) != 0);
  local_ac = (short *)((int)(char)*DAT_00083a9c & 1);
  local_a8 = (byte *)(uint)((*DAT_00083a9c & 8) != 0);
  local_a4 = (byte *)((int)*DAT_00083aa0 & 1);
  local_a0 = (byte *)(uint)((*(byte *)(DAT_00083aa4 + 1) & 0x10) != 0);
  local_9c = abStack_78;
  (*(code *)PTR_FUN_00083aa8)
            ((*DAT_00083a90 & 0x20) != 0,(int)(short)*DAT_00083a6c,
             (int)*(char *)(DAT_00083a80 + 0xf));
  uVar14 = (*(code *)(int)DAT_0008391a)((int)DAT_00083918);
  pcVar9 = DAT_00083a84;
  bVar16 = pcVar10[0xb] | 4;
  if ((abStack_78[0] & 1) == 0) {
    bVar16 = pcVar10[0xb] & 0xfb;
  }
  pcVar19 = (code *)(int)DAT_0008391a;
  DAT_00083a84[0xb] = bVar16;
  (*pcVar19)(uVar14);
  iVar15 = DAT_00083a80;
  (*(code *)PTR_FUN_00083ab0)
            ((int)*(char *)(DAT_00083a80 + 0xf),(int)psVar3[0x49],psStack_54 + 0x4c);
  local_a0 = (byte *)(uint)((*DAT_00083a90 & 0x20) != 0);
  local_9c = abStack_74;
  local_a4 = (byte *)(uint)*(byte *)(iVar15 + 0xf);
  (*(code *)PTR_FUN_00083ab8)(pcVar9[0xb] & 1,(int)(short)*DAT_00083a6c,(int)psVar3[0x4c]);
  (*pcVar19)((int)DAT_00083a56);
  pcVar10 = DAT_00083a84;
  bVar16 = pcVar9[0xb];
  bVar17 = bVar16 | 2;
  if ((abStack_74[0] & 1) == 0) {
    bVar17 = bVar16 & 0xfd;
  }
  pcVar19 = (code *)(int)DAT_00083a58;
  DAT_00083a84[0xb] = bVar17;
  (*pcVar19)();
  (*(code *)PTR_FUN_00083abc)((pcVar10[0xb] & 2U) != 0,(pcVar10[0xb] & 4U) != 0);
  uVar14 = (*pcVar19)((int)DAT_00083a56);
  pcVar9 = DAT_00083a84;
  bVar16 = pcVar10[0xb] | 1;
  if ((bStack_70 & 1) == 0) {
    bVar16 = pcVar10[0xb] & 0xfe;
  }
  pcVar19 = (code *)(int)DAT_00083a58;
  DAT_00083a84[0xb] = bVar16;
  (*pcVar19)(uVar14);
  local_e8 = (uint)((pbVar7[5] & 0x10) != 0);
  local_e4 = (uint)((*DAT_00083ac0 & 0x40) != 0);
  local_d0 = (uint)((pcVar9[0xb] & 4U) != 0);
  local_cc = (uint)(((int)(char)*DAT_00083a8c & 0x80U) != 0);
  local_9c = (byte *)(DAT_00083a80 + 5);
  local_a0 = (byte *)(DAT_00083a80 + 7);
  local_a4 = abStack_6c;
  local_a8 = abStack_68;
  local_ac = psStack_54 + 7;
  local_b0 = psStack_54 + 0xb;
  local_b4 = psStack_54 + 10;
  local_b8 = psStack_54 + 9;
  local_bc = psStack_54 + 8;
  local_c0 = psStack_54 + 0xc;
  local_c4 = abStack_64;
  local_c8 = DAT_00083a80 + 6;
  local_d4 = (uint)(ushort)psVar3[5];
  local_d8 = (uint)*DAT_00083de4;
  local_dc = (uint)*DAT_00083de8;
  local_e0 = (uint)*DAT_00083dec;
  local_ec = (int)*DAT_00083df0;
  (*(code *)PTR_FUN_00083df4)
            (pcVar9[0xb] & 1,(int)*(char *)(DAT_00083a80 + 6),(pbVar11[1] & 2) != 0,
             (*pbVar11 & 0x40) != 0);
  uVar14 = (*pcVar19)((int)DAT_00083cca);
  iVar15 = DAT_00083df8;
  bVar16 = pcVar9[10] | 8;
  if ((abStack_64[0] & 1) == 0) {
    bVar16 = pcVar9[10] & 0xf7;
  }
  *(byte *)(DAT_00083df8 + 10) = bVar16;
  iVar5 = DAT_00083df8;
  bVar16 = *(byte *)(iVar15 + 10) | 4;
  if ((abStack_68[0] & 1) == 0) {
    bVar16 = *(byte *)(iVar15 + 10) & 0xfb;
  }
  *(byte *)(DAT_00083df8 + 10) = bVar16;
  iVar15 = DAT_00083df8;
  bVar16 = *(byte *)(iVar5 + 10) | 2;
  if ((abStack_6c[0] & 1) == 0) {
    bVar16 = *(byte *)(iVar5 + 10) & 0xfd;
  }
  pcVar19 = (code *)(int)DAT_00083ccc;
  *(byte *)(DAT_00083df8 + 10) = bVar16;
  (*pcVar19)(uVar14);
  local_bc = (short *)((int)*(char *)(iVar15 + 0xb) & 1);
  local_b8 = (short *)(uint)(((int)*DAT_00083dfc & 0x80U) != 0);
  local_b4 = (short *)((int)*DAT_00083e00 & 1);
  local_a4 = (byte *)(uint)(((int)*DAT_00083e04 & 0x80U) != 0);
  local_a0 = (byte *)((int)*DAT_00083e08 & 1);
  local_9c = (byte *)(iVar15 + 6);
  local_a8 = (byte *)(uint)*DAT_00083e0c;
  local_ac = (short *)(uint)*(byte *)(DAT_00083e10 + 1);
  local_b0 = (short *)(uint)*DAT_00083e14;
  local_c0 = (short *)(uint)*DAT_00083e18;
  local_c4 = (byte *)(uint)*(byte *)(DAT_00083e10 + 7);
  (*(code *)PTR_FUN_00083e1c)
            ((int)*DAT_00083e24,(int)*DAT_00083e20,(int)psVar3[0x1a],(int)psVar3[0x71]);
  psVar4 = psStack_54;
  local_9c = (byte *)(psStack_54 + 0x1c);
  (*(code *)PTR_FUN_00083e28)();
  pbVar12 = DAT_00083e30;
  local_c8 = (uint)((*pbVar7 & 4) != 0);
  local_c4 = (byte *)(uint)((pbVar7[3] & 0x40) != 0);
  local_c0 = (short *)((int)*(char *)(iVar15 + 0xd) & 1);
  local_bc = (short *)(uint)((pbVar11[1] & 2) != 0);
  local_ac = (short *)(uint)((*DAT_00083e2c & 0x20) != 0);
  local_a8 = (byte *)(uint)((*DAT_00083e30 & 2) != 0);
  local_a4 = (byte *)(uint)((*DAT_00083e30 & 4) != 0);
  local_a0 = (byte *)(uint)((*(byte *)(iVar15 + 0xc) & 8) != 0);
  local_9c = (byte *)(iVar15 + 7);
  local_b0 = (short *)(uint)*DAT_00083de8;
  local_b4 = (short *)(uint)*DAT_00083dec;
  local_b8 = (short *)(uint)*DAT_00083e34;
  local_cc = (uint)*(byte *)(DAT_00083e10 + 4);
  local_d0 = (uint)*DAT_00083e38;
  local_d4 = (uint)*DAT_00083e3c;
  (*(code *)PTR_FUN_00083e40)
            ((int)*(char *)(iVar15 + 6),(int)*DAT_00083e24,(int)*DAT_00083e10,(int)*DAT_00083e20);
  (*(code *)PTR_FUN_00083e44)((int)*(char *)(iVar15 + 7),iVar15 + 3);
  (*(code *)PTR_FUN_00083e48)((int)*(char *)(iVar15 + 7),iVar15 + 4);
  local_a8 = (byte *)((int)*(char *)(iVar15 + 9) & 1);
  local_a4 = (byte *)(uint)((*pbVar12 & 0x40) != 0);
  local_9c = (byte *)(psVar4 + 0x1a);
  local_a0 = (byte *)(uint)(ushort)psVar3[0x66];
  local_ac = (short *)(uint)(ushort)psVar3[0x83];
  local_b0 = (short *)(uint)(ushort)psVar3[6];
  local_b4 = (short *)(uint)(ushort)psVar3[0x71];
  local_b8 = (short *)(uint)(ushort)psVar3[0x1f];
  local_bc = (short *)(uint)(ushort)psVar3[0x2d];
  local_c0 = (short *)(uint)(ushort)psVar3[0x67];
  (*(code *)PTR_FUN_00083e4c)
            ((int)*(char *)(iVar15 + 6),(int)*(char *)(iVar15 + 7),(int)psVar3[0x1c],
             (int)psVar3[0x1b]);
  (*(code *)PTR_FUN_00083e50)
            ((int)DAT_00083df0[0xd],(int)psVar3[0x5c],(int)*(char *)(iVar15 + 7),psVar4 + 0x39);
  psStack_54 = psVar4 + 0x5d;
  (*(code *)PTR_FUN_00083e54)
            ((int)*(short *)(DAT_00083e58 + 0x1a),(int)*(char *)(iVar15 + 7),(int)*DAT_00083e5c,
             psStack_54);
  iVar5 = DAT_00083e6c;
  pbVar7 = DAT_00083e64;
  pcVar9 = DAT_00083e08;
  cStack_2c = '\x01' - (((int)*DAT_00083e60 & 0x80U) == 0);
  local_9c = (byte *)(DAT_00083e6c + 0xb4);
  local_a0 = (byte *)(DAT_00083e6c + 0x6c);
  local_a4 = (byte *)(uint)(ushort)psVar3[0x35];
  local_a8 = (byte *)(uint)*DAT_00083e70;
  local_ac = (short *)(uint)((*DAT_00083e68 & 4) != 0);
  local_b0 = (short *)(uint)((DAT_00083e64[3] & 2) != 0);
  (*(code *)PTR_FUN_00083e74)
            ((int)psVar3[0x39],(int)DAT_00083e08[1],
             (int)*(char *)((int)&local_b0 + (int)DAT_00083de2),*DAT_00083e64 & 1);
  iVar15 = DAT_00083e58;
  local_9c = (byte *)(iVar5 + 0x9e);
  local_a0 = (byte *)(iVar5 + 0x8c);
  local_a4 = (byte *)(iVar5 + 0x88);
  (*(code *)PTR_FUN_00083e78)
            ((int)psVar3[0x36],(int)*(short *)(DAT_00083e58 + 4),(int)*(char *)(DAT_00083df8 + 5));
  psVar4 = DAT_000841d0;
  local_bc = (short *)(uint)((pbVar7[3] & 2) != 0);
  local_b8 = (short *)((int)(char)*pbVar7 & 1);
  local_b4 = (short *)(uint)((*pbVar7 & 8) != 0);
  local_b0 = (short *)((int)(char)pbVar7[2] & 1);
  local_ac = (short *)(uint)((*DAT_000841c0 & 8) != 0);
  local_9c = abStack_60;
  local_a0 = (byte *)(uint)*DAT_000841c4;
  local_a4 = (byte *)(uint)(byte)pcVar9[1];
  local_a8 = (byte *)(uint)*(ushort *)(DAT_000841c8 + 10);
  local_c0 = (short *)(uint)*(ushort *)(iVar15 + 0x1a);
  (*(code *)PTR_FUN_000841cc)((int)*DAT_000841d0);
  pcVar19 = (code *)(int)DAT_000840a6;
  uVar14 = (*pcVar19)((int)DAT_000840a8);
  iVar15 = DAT_000841d4;
  bVar16 = *(byte *)(DAT_000841d4 + 0xb) | 0x10;
  if ((abStack_60[0] & 1) == 0) {
    bVar16 = *(byte *)(DAT_000841d4 + 0xb) & 0xef;
  }
  *(byte *)(DAT_000841d4 + 0xb) = bVar16;
  (*pcVar19)(uVar14);
  pbVar7 = DAT_000841dc;
  local_e8 = (int)(char)*DAT_000841dc & 1;
  local_e0 = (uint)((*(byte *)(iVar15 + 0xb) & 0x10) != 0);
  local_d0 = (uint)(((int)(char)*DAT_000841d8 & 0x80U) != 0);
  local_9c = (byte *)(iVar5 + 0x42);
  local_a0 = (byte *)(iVar5 + 0x2a);
  local_a4 = (byte *)(iVar5 + 0x52);
  local_a8 = (byte *)(iVar5 + 0x40);
  local_ac = (short *)(iVar5 + 0x50);
  local_b0 = (short *)(iVar5 + 0x28);
  local_b4 = (short *)(iVar5 + 0x4e);
  local_b8 = (short *)(iVar5 + 0x26);
  local_bc = (short *)(iVar5 + 0x4c);
  local_c0 = (short *)(iVar5 + 0x24);
  local_c4 = (byte *)(iVar5 + 0x86);
  local_c8 = iVar5 + 0x84;
  local_cc = (uint)(ushort)psVar3[5];
  local_d4 = (uint)*DAT_000841e0;
  local_d8 = (uint)(ushort)psVar3[0x5d];
  local_dc = (uint)(byte)pcVar9[1];
  local_e4 = (uint)*DAT_000841e4;
  (*(code *)PTR_FUN_000841e8)((int)psVar3[0x44],(int)psVar3[0x45],(int)*psVar4);
  pbVar11 = DAT_000841ec;
  local_cc = (uint)((*DAT_000841ec & 4) != 0);
  local_c8 = (uint)((*DAT_000841ec & 2) != 0);
  local_bc = (short *)(uint)((*(byte *)(iVar15 + 0xc) & 4) != 0);
  local_b8 = (short *)(uint)(((int)*DAT_000841f0 & 0x80U) != 0);
  local_9c = abStack_5c;
  local_a0 = (byte *)(iVar5 + 8);
  local_a4 = (byte *)(iVar5 + 6);
  local_a8 = (byte *)(iVar5 + 4);
  local_ac = (short *)(iVar5 + 2);
  local_b0 = (short *)(iVar5 + 0x6e);
  local_b4 = (short *)(uint)*DAT_000841f4;
  local_c0 = (short *)(uint)*DAT_000841e0;
  local_c4 = (byte *)(uint)(byte)pcVar9[1];
  (*(code *)PTR_FUN_000841f8)
            ((int)psVar3[0x45],(*DAT_000841d8 & 0x40) != 0,*pbVar7 & 1,(int)psVar3[0x42]);
  uVar14 = (*pcVar19)((int)DAT_000840a8);
  bVar16 = *(byte *)(iVar15 + 0xc) | 2;
  if ((abStack_5c[0] & 1) == 0) {
    bVar16 = *(byte *)(iVar15 + 0xc) & 0xfd;
  }
  *(byte *)(iVar15 + 0xc) = bVar16;
  (*pcVar19)(uVar14);
  (*(code *)PTR_FUN_000841fc)((int)psVar3[0x37],(int)psVar3[0x42],iVar5 + 0x8a);
  psVar4 = DAT_00084210;
  local_b4 = (short *)(uint)((*DAT_00084200 & 4) != 0);
  local_b0 = (short *)(uint)((pbVar11[8] & 0x10) != 0);
  local_ac = (short *)(uint)((*(byte *)(DAT_00084204 + 1) & 2) != 0);
  local_9c = (byte *)(iVar5 + 0x48);
  local_a0 = (byte *)(iVar5 + 0x54);
  local_a4 = (byte *)(iVar5 + 0x70);
  local_a8 = (byte *)(uint)(ushort)psVar3[0x44];
  (*(code *)PTR_FUN_00084208)
            ((int)psVar3[0x45],(int)*(short *)(DAT_00084214 + 0x1a),(int)DAT_00084210[5],
             (int)*(char *)(DAT_0008420c + 0xe));
  (*(code *)PTR_FUN_00084218)((int)psVar3[0x42],(int)psVar3[0x45]);
  uVar14 = (*pcVar19)((int)DAT_000841bc);
  bVar16 = *(byte *)(iVar15 + 0xc) | 4;
  if ((bStack_58 & 1) == 0) {
    bVar16 = *(byte *)(iVar15 + 0xc) & 0xfb;
  }
  *(byte *)(iVar15 + 0xc) = bVar16;
  (*pcVar19)(uVar14);
  (*(code *)PTR_FUN_0008421c)((int)*psVar4,(int)psVar3[0x38],(pbVar11[3] & 0x40) != 0,iVar5 + 0x8e);
  (*(code *)PTR_FUN_00084220)();
  puVar6 = DAT_000841e0;
  local_e0 = (uint)((pbVar11[8] & 0x10) != 0);
  local_dc = (uint)((*(byte *)(DAT_00084204 + 1) & 2) != 0);
  local_d8 = (uint)((*(byte *)(DAT_00084204 + 1) & 0x20) != 0);
  local_9c = (byte *)(iVar5 + 0xaa);
  local_a0 = (byte *)(iVar5 + 0xa8);
  local_a4 = (byte *)(iVar5 + 0xca);
  local_a8 = (byte *)(iVar5 + 200);
  local_ac = (short *)(iVar5 + 100);
  local_b0 = (short *)(iVar5 + 0x62);
  local_b4 = (short *)(iVar5 + 0x32);
  local_b8 = (short *)(iVar5 + 0xb0);
  local_bc = (short *)(iVar5 + 0xb2);
  local_c0 = (short *)(iVar5 + 0xac);
  local_c4 = (byte *)(iVar5 + 0xae);
  local_c8 = iVar5 + 0x60;
  local_cc = iVar5 + 0x5e;
  local_d0 = iVar15 + 1;
  local_d4 = iVar5 + 0xc6;
  (*(code *)PTR_FUN_00084224)
            ((int)(short)*DAT_000841e0,(int)psVar3[0x47],(int)*DAT_0008422c,(int)*DAT_00084228);
  (*(code *)PTR_FUN_00084300)((int)*psVar3,(int)psVar3[99],iVar5 + 0x9a,DAT_00084230);
  (*(code *)PTR_FUN_00084304)((int)(short)*puVar6,(int)psVar3[0x4d],(int)psVar3[0x84],iVar5 + 0xa6);
  local_9c = (byte *)(iVar5 + 0x2e);
  local_a0 = (byte *)(iVar5 + 0x30);
  (*(code *)PTR_FUN_00084308)
            ((int)psVar3[0x53],(int)psVar3[0x83],(int)psVar3[0x52],(int)psVar3[0x48]);
  (*(code *)PTR_FUN_0008430c)((int)(short)*puVar6,(int)psVar3[0x18],(int)*DAT_00084310,iVar5 + 0x5c)
  ;
  local_9c = (byte *)(iVar5 + 0xa2);
  (*(code *)PTR_FUN_00084318)
            ((int)*(char *)(DAT_0008431c + 7),(int)psVar3[0x18],*PTR_DAT_00084314 & 1,
             (int)psVar3[0x2e]);
  (*(code *)PTR_FUN_00084320)((int)psVar3[0x51],iVar5 + 0x3a);
  (*(code *)PTR_FUN_00084324)((int)psVar3[0x51],iVar5 + 0xa0);
  (*(code *)PTR_FUN_00084328)((int)psVar3[0x51],iVar5 + 0xc4);
  (*(code *)PTR_FUN_0008432c)((int)psVar3[0x51],iVar5 + 0x9c);
  return;
}

