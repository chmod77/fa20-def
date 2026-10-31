
void FUN_0012560c(void)

{
  short *psVar1;
  byte *pbVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  short *psVar7;
  undefined4 uVar8;
  byte bVar9;
  code *pcVar10;
  byte local_28 [4];
  
  psVar1 = DAT_00125950;
  (*(code *)PTR_FUN_00125954)((int)DAT_00125950[2],DAT_00125950 + 0x13);
  pcVar3 = DAT_00125960;
  pbVar2 = DAT_00125958;
  (*(code *)PTR_FUN_0012595c)
            ((int)*DAT_00125968,(int)*DAT_00125964,((int)(char)*DAT_00125958 & 0x80U) != 0,
             (int)*DAT_00125960,psVar1 + 0x1d);
  (*(code *)PTR_FUN_00125970)
            ((int)*DAT_00125968,(int)*DAT_00125964,((int)(char)*pbVar2 & 0x80U) != 0,(int)*pcVar3,
             *DAT_0012596c,psVar1 + 0x1f);
  (*(code *)PTR_FUN_00125974)
            ((int)*DAT_00125968,(int)*DAT_00125964,((int)(char)*pbVar2 & 0x80U) != 0,(int)*pcVar3,
             *DAT_0012596c,psVar1 + 0x21);
  (*(code *)PTR_FUN_00125978)
            ((int)*DAT_00125968,(int)*DAT_00125964,((int)(char)*pbVar2 & 0x80U) != 0,(int)*pcVar3,
             psVar1 + 0x23);
  (*(code *)PTR_FUN_0012597c)((int)*DAT_00125984,(int)*DAT_00125980,(int)psVar1[0x13]);
  puVar5 = DAT_00125990;
  pbVar4 = DAT_0012598c;
  (*(code *)PTR_FUN_00125998)
            ((int)*DAT_00125964,(int)*DAT_0012599c,(int)psVar1[0x21],(int)psVar1[0x1f],psVar1[0x1d],
             (*PTR_DAT_00125988 & 2) != 0,*DAT_00125994,(*PTR_DAT_00125988 & 0x20) != 0,
             (DAT_0012598c[3] & 0x20) != 0,DAT_0012598c[3] & 1,DAT_0012598c[4] & 1,psVar1[0x23],
             psVar1[0x36],*DAT_00125990,DAT_00125990[3] & 1,psVar1[0x22],psVar1[0x1e],psVar1[0x24],
             psVar1[0x20],psVar1 + 0x35);
  pcVar3 = DAT_001259a4;
  (*(code *)PTR_FUN_001259a0)
            ((int)psVar1[0x3d],(int)psVar1[0x35],(int)DAT_001259a4[2],psVar1 + 0x1c);
  (*(code *)PTR_FUN_001259b8)
            ((int)psVar1[0x1c],(int)*DAT_0012596c,((int)(char)*pbVar2 & 0x80U) != 0,
             *DAT_001259a8 & 1,(DAT_001259a8[3] & 2) != 0,(*DAT_001259ac & 4) != 0,*DAT_001259b4,
             *DAT_001259b0,psVar1 + 0x19);
  (*(code *)PTR_FUN_001259bc)
            ((int)psVar1[0x19],(int)DAT_00125980[2],(int)*pcVar3,(int)*DAT_00125968,psVar1 + 0x26);
  pbVar6 = DAT_001259c0;
  (*(code *)PTR_FUN_001259cc)
            ((int)psVar1[0x26],(int)psVar1[0x28],(*pbVar2 & 0x40) != 0,*DAT_001259c0 & 1,
             *DAT_00125994,(DAT_001259a4[6] & 0x10U) != 0,*DAT_0012596c,*DAT_001259c8,*DAT_00125968,
             ((int)(char)*pbVar2 & 0x80U) != 0,*DAT_001259c4,(puVar5[3] & 0x20) != 0,*DAT_0012599c,
             psVar1 + 0x25);
  (*(code *)PTR_FUN_001259d8)
            ((int)psVar1[0x28],(*pbVar2 & 0x40) != 0,*pbVar6 & 1,(int)psVar1[0x25],
             (*pbVar4 & 4) != 0,(*pbVar4 & 2) != 0,*DAT_0012596c,*DAT_00125968,(puVar5[2] & 4) != 0,
             ((int)*DAT_001259d0 & 0x80U) != 0,*DAT_001259d4,(puVar5[3] & 0x40) != 0,psVar1 + 0x1a);
  (*(code *)PTR_FUN_001259dc)((int)psVar1[0x1a],(int)psVar1[0x25],psVar1 + 0x27);
  (*(code *)PTR_FUN_001259e8)
            ((int)psVar1[0x27],(int)psVar1[0x3d],(int)*(short *)(DAT_001259f0 + 10),
             (int)*DAT_001259ec,(*DAT_001259e0 & 4) != 0,(pbVar4[8] & 0x10) != 0,
             (*DAT_001259e4 & 2) != 0,psVar1[0x26],psVar1 + 0x1b);
  FUN_00125f44((int)psVar1[0x25],(int)psVar1[0x27],local_28);
  uVar8 = (*(code *)(int)DAT_0012594e)((int)DAT_00125bb6);
  bVar9 = puVar5[2] | 4;
  if ((local_28[0] & 1) == 0) {
    bVar9 = puVar5[2] & 0xfb;
  }
  pcVar10 = (code *)(int)DAT_00125bb8;
  puVar5[2] = bVar9;
  (*pcVar10)(uVar8);
  (*(code *)PTR_FUN_00125bbc)
            ((int)*DAT_00125bc0,(int)psVar1[0x1b],(pbVar4[3] & 0x40) != 0,psVar1 + 0x29);
  (*(code *)PTR_FUN_00125bc4)();
  psVar7 = DAT_00125bd0;
  FUN_00125c08((int)*DAT_00125bd0,(int)psVar1[0x29],(int)*DAT_00125bd8,(int)*DAT_00125bd4,
               (pbVar4[8] & 0x10) != 0,(*DAT_00125bcc & 2) != 0,(*DAT_00125bcc & 0x20) != 0,
               psVar1[0x3b],psVar1[0x39],psVar1[0x3c],psVar1 + 0x37,puVar5 + 1,psVar1 + 0x15,
               psVar1 + 0x16,psVar1 + 0x32,psVar1 + 0x31,psVar1 + 0x34,psVar1 + 0x33,psVar1 + 0x11,
               psVar1 + 0x17,psVar1 + 0x18,psVar1 + 0x38,psVar1 + 0x3a,psVar1 + 0x2f,psVar1 + 0x30);
  (*(code *)PTR_FUN_00125bdc)((int)psVar1[0xf],(int)psVar1[0x37],psVar1 + 0x2a);
  (*(code *)PTR_FUN_00125be0)((int)*psVar7,(int)psVar1[0x2a],(int)*psVar1,psVar1 + 0x2e);
  (*(code *)PTR_FUN_00125be4)();
  (*(code *)PTR_FUN_00125bf0)
            ((int)*psVar7,(int)psVar1[0x10],(puVar5[3] & 2) != 0,(puVar5[3] & 4) != 0,
             (puVar5[3] & 8) != 0,(puVar5[3] & 0x10) != 0,*(undefined2 *)(DAT_00125bec + 0x12),
             psVar1 + 0x12);
  (*(code *)PTR_FUN_00125bf8)
            ((int)*(char *)(DAT_00125bfc + 2),(int)psVar1[0x10],*PTR_DAT_00125bf4 & 1,
             (int)psVar1[0x12],psVar1 + 0x2c);
  (*(code *)PTR_FUN_00125c00)((int)psVar1[0x2c],psVar1 + 0x2b);
  (*(code *)PTR_FUN_00125c04)((int)psVar1[4],(int)psVar1[0x2b],psVar1 + 0x14);
  return;
}

