
void FUN_0009c94c(void)

{
  char *pcVar1;
  short *psVar2;
  undefined4 uVar3;
  byte bVar4;
  code *pcVar5;
  byte local_20 [4];
  byte abStack_1c [4];
  byte abStack_18 [4];
  byte abStack_14 [4];
  
  psVar2 = DAT_0009ca64;
  pcVar1 = DAT_0009ca60;
  (*(code *)PTR_FUN_0009ca68)
            ((int)*DAT_0009ca6c,(int)DAT_0009ca60[0x31],(int)DAT_0009ca60[0xf7],
             (int)DAT_0009ca60[0x37],*DAT_0009ca64,DAT_0009ca60 + 0xe9);
  (*(code *)PTR_FUN_0009ca70)
            ((int)*DAT_0009ca6c,(int)pcVar1[0x31],(int)pcVar1[0xf7],(int)pcVar1[0x37],pcVar1 + 0xea)
  ;
  (*(code *)PTR_FUN_0009ca7c)
            ((int)*psVar2,(pcVar1[0x38] & 4U) != 0,(int)*DAT_0009ca80,(int)*pcVar1,*DAT_0009ca78,
             *DAT_0009ca74,pcVar1 + 0xec,abStack_18,abStack_1c,local_20);
  pcVar5 = (code *)(int)DAT_0009ca5a;
  uVar3 = (*pcVar5)((int)DAT_0009ca5c);
  bVar4 = pcVar1[0xf3] | 0x40;
  if ((abStack_18[0] & 1) == 0) {
    bVar4 = pcVar1[0xf3] & 0xbf;
  }
  pcVar1[0xf3] = bVar4;
  bVar4 = pcVar1[0xf3] | 0x20;
  if ((abStack_1c[0] & 1) == 0) {
    bVar4 = pcVar1[0xf3] & 0xdf;
  }
  pcVar1[0xf3] = bVar4;
  bVar4 = pcVar1[0xf3] | 0x80;
  if ((local_20[0] & 1) == 0) {
    bVar4 = pcVar1[0xf3] & 0x7f;
  }
  pcVar1[0xf3] = bVar4;
  (*pcVar5)(uVar3);
  (*(code *)PTR_FUN_0009ca84)((int)pcVar1[0x25],(pcVar1[0xf2] & 2U) != 0,abStack_14);
  uVar3 = (*pcVar5)((int)DAT_0009ca5c);
  bVar4 = pcVar1[0xf1] | 8;
  if ((abStack_14[0] & 1) == 0) {
    bVar4 = pcVar1[0xf1] & 0xf7;
  }
  pcVar1[0xf1] = bVar4;
  (*pcVar5)(uVar3);
  return;
}

