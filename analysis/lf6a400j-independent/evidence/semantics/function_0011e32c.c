
void FUN_0011e32c(void)

{
  undefined4 *puVar1;
  short *psVar2;
  char *pcVar3;
  char *pcVar4;
  byte *pbVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  byte bVar10;
  code *pcVar11;
  byte local_34 [4];
  byte abStack_30 [4];
  byte abStack_2c [4];
  byte local_28 [4];
  
  pcVar3 = DAT_0011e644;
  psVar2 = DAT_0011e62c;
  puVar1 = DAT_0011e628;
  (*(code *)PTR_FUN_0011e640)
            ((int)*DAT_0011e644,(int)DAT_0011e62c[0xf],(int)DAT_0011e62c[4],DAT_0011e63c,
             DAT_0011e638,DAT_0011e634,DAT_0011e628 + 10,DAT_0011e628 + 0x14,DAT_0011e62c + 2,
             DAT_0011e62c + 1,DAT_0011e628 + 0x1e,DAT_0011e628 + 9,DAT_0011e628 + 0xb,
             DAT_0011e628 + 0x15,DAT_0011e628 + 0x11,DAT_0011e630,DAT_0011e628 + 0x13,
             DAT_0011e62c + 7);
  pcVar4 = DAT_0011e650;
  (*(code *)PTR_FUN_0011e64c)((int)psVar2[4],(int)*DAT_0011e650,(int)*DAT_0011e648);
  FUN_0011e850((int)*DAT_0011e658,(*DAT_0011e654 & 2) != 0,psVar2 + 10);
  pbVar5 = DAT_0011e660;
  FUN_0011eb78((int)(char)DAT_0011e664[9],(DAT_0011e65c[2] & 2) != 0,DAT_0011e65c[2] & 1,
               (DAT_0011e65c[2] & 4) != 0,DAT_0011e660 + 3);
  pcVar6 = DAT_0011e668;
  FUN_0011ebb4((int)DAT_0011e668[9],*DAT_0011e65c & 1,(*DAT_0011e65c & 2) != 0,
               (*DAT_0011e65c & 8) != 0,(DAT_0011e65c[1] & 0x40) != 0,pbVar5 + 5);
  FUN_0011ebe4((*DAT_0011e66c & 0x10) != 0,(int)*pcVar3,(int)*pcVar4,(int)*pcVar6,local_34);
  pcVar11 = (code *)(int)DAT_0011e60c;
  uVar9 = (*pcVar11)((int)DAT_0011e60e);
  bVar10 = *pbVar5 | 4;
  if ((local_34[0] & 1) == 0) {
    bVar10 = *pbVar5 & 0xfb;
  }
  *pbVar5 = bVar10;
  (*pcVar11)(uVar9);
  FUN_0011e868((int)*DAT_0011e670,(int)psVar2[10],puVar1 + 0x1c);
  FUN_0011e8f8((int)*DAT_0011e68c,(int)*DAT_0011e688,(int)*DAT_0011e684,(int)*DAT_0011e670,
               psVar2[10],*pcVar4,*DAT_0011e680,pcVar6[9],psVar2 + 0xc,DAT_0011e67c,pbVar5 + 2,
               DAT_0011e678,DAT_0011e674,psVar2 + 0xe,psVar2 + 0xd);
  FUN_0011eb64((int)(char)DAT_0011e660[3],psVar2 + 0xf);
  FUN_0011eba0((int)(char)DAT_0011e660[5],DAT_0011e690);
  (*(code *)PTR_FUN_0011e694)
            ((int)psVar2[0xc],puVar1[0x1c],(int)psVar2[4],psVar2,puVar1 + 0x16,puVar1 + 0x1d,
             puVar1 + 0x17,puVar1 + 0xc);
  (*(code *)PTR_FUN_0011e698)(puVar1[0x1c],psVar2 + 8);
  FUN_0011e8dc((int)psVar2[0xc],psVar2 + 0xb);
  (*(code *)PTR_FUN_0011e69c)((int)*psVar2,(int)psVar2[0xc],(int)psVar2[4],puVar1 + 7);
  (*(code *)PTR_FUN_0011e6a0)
            (puVar1[0x12],(int)*psVar2,(int)psVar2[0xc],(int)psVar2[6],puVar1 + 8,psVar2 + 5);
  (*(code *)PTR_FUN_0011e6a4)(puVar1[8],(int)psVar2[6],puVar1 + 2,puVar1 + 0x10);
  (*(code *)PTR_FUN_0011e6a8)(puVar1[8],(int)psVar2[6],puVar1 + 5);
  (*(code *)PTR_FUN_0011e6b4)
            ((int)*DAT_0011e63c,puVar1[7],(int)*pcVar4,(int)psVar2[0xf],*DAT_0011e690,*DAT_0011e664,
             pcVar6[0xb],DAT_0011e664[6],*DAT_0011e648,psVar2 + 4,DAT_0011e6b0,puVar1 + 6,psVar2 + 9
             ,pbVar5 + 4,DAT_0011e6ac,pbVar5 + 1,psVar2 + 3);
  (*(code *)PTR_FUN_0011e6b8)
            ((int)DAT_0011e658[2],(int)*(short *)(DAT_0011e664 + 0xe),(int)psVar2[4],puVar1[0x1c],
             psVar2[8],puVar1 + 1,puVar1 + 0x1a,puVar1 + 0x1b,puVar1 + 0x19);
  (*(code *)PTR_FUN_0011e6bc)(puVar1[1],puVar1[2],puVar1);
  (*(code *)PTR_FUN_0011e81c)((int)psVar2[4],puVar1[1],puVar1[8],(int)psVar2[6],puVar1 + 4);
  (*(code *)PTR_FUN_0011e820)(puVar1[4],puVar1[5],puVar1 + 3);
  (*(code *)PTR_FUN_0011e828)
            (puVar1[3],*puVar1,puVar1[0x12],(int)*pcVar4,psVar2[4],psVar2 + 6,DAT_0011e824,
             abStack_30);
  uVar9 = (*pcVar11)((int)DAT_0011e81a);
  pbVar7 = DAT_0011e82c;
  bVar10 = *DAT_0011e82c | 0x10;
  if ((abStack_30[0] & 1) == 0) {
    bVar10 = *DAT_0011e82c & 0xef;
  }
  *DAT_0011e82c = bVar10;
  (*pcVar11)(uVar9);
  puVar8 = DAT_0011e834;
  (*(code *)PTR_FUN_0011e830)(*DAT_0011e834,*puVar1,(int)*pcVar4,puVar1 + 0x12);
  (*(code *)PTR_FUN_0011e83c)((int)*pcVar4,puVar1[0x12],*puVar8,*DAT_0011e838 & 1,puVar8,puVar8 + 1)
  ;
  (*(code *)PTR_FUN_0011e848)
            ((*DAT_0011e840 & 2) != 0,(int)*pcVar4,*puVar8,(int)*(char *)(DAT_0011e844 + 3),
             *(undefined1 *)(DAT_0011e844 + 5),puVar1 + 0xd,puVar1 + 0xf);
  (*(code *)PTR_FUN_0011e84c)(puVar1[0x12],puVar1[0xd],(int)*pcVar4,puVar1 + 0xe,abStack_2c);
  uVar9 = (*pcVar11)((int)DAT_0011e81a);
  bVar10 = *pbVar7 | 0x80;
  if ((abStack_2c[0] & 1) == 0) {
    bVar10 = *pbVar7 & 0x7f;
  }
  *pbVar7 = bVar10;
  (*pcVar11)(uVar9);
  local_28[0] = *pbVar7 & 1;
  FUN_0011ec70((int)*pcVar4,(*pbVar5 & 4) != 0,puVar1[0xe],(int)psVar2[4],psVar2[6],local_28[0],
               local_28,puVar1 + 0x18);
  uVar9 = (*pcVar11)((int)DAT_0011e81a);
  bVar10 = *pbVar7 | 1;
  if ((local_28[0] & 1) == 0) {
    bVar10 = *pbVar7 & 0xfe;
  }
  *pbVar7 = bVar10;
  (*pcVar11)(uVar9);
  return;
}

