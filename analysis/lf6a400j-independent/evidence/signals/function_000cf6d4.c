
void FUN_000cf6d4(void)

{
  char *pcVar1;
  short *psVar2;
  short *psVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  byte bVar8;
  code *pcVar9;
  byte local_20 [4];
  
  psVar2 = DAT_000cf88c;
  pcVar1 = DAT_000cf884;
  (*(code *)PTR_FUN_000cf888)((int)*DAT_000cf890,(int)*DAT_000cf88c,local_20);
  uVar7 = (*(code *)(int)DAT_000cf880)((int)DAT_000cf882);
  bVar8 = pcVar1[0xbf] | 1;
  if ((local_20[0] & 1) == 0) {
    bVar8 = pcVar1[0xbf] & 0xfe;
  }
  pcVar9 = (code *)(int)DAT_000cf880;
  pcVar1[0xbf] = bVar8;
  (*pcVar9)(uVar7);
  puVar5 = DAT_000cf8ac;
  pcVar4 = DAT_000cf8a4;
  psVar3 = DAT_000cf89c;
  (*(code *)PTR_FUN_000cf8a8)
            (DAT_000cf8ac[-4],(int)*psVar2,(*DAT_000cf894 & 0x20) != 0,(int)(short)DAT_000cf8a0[1],
             (int)*DAT_000cf8b0,pcVar1[0xba],*DAT_000cf8a4,*DAT_000cf8a0,pcVar1[0xbf] & 1,
             DAT_000cf89c,DAT_000cf898 + 0x3a);
  FUN_000cfaf0(puVar5[-1],puVar5[-3],puVar5[-7],*DAT_000cf8b8,(int)*DAT_000cf8b4,pcVar1[0xbf] & 1,
               (int)pcVar1[0xc1],puVar5 + -3,puVar5 + -2);
  FUN_000cf97c(puVar5[-5],(int)*psVar3,(int)*DAT_000cf8bc,puVar5[2],(int)*pcVar1,pcVar1[0xbf] & 1,
               puVar5 + -5);
  puVar6 = DAT_000cf8c0;
  FUN_000cfc88(puVar5[-3],puVar5[-4],(int)pcVar1[0xc1],(int)(short)DAT_000cf8c0[5],pcVar1[0xbf] & 1)
  ;
  FUN_000cf8c8(puVar5[-1],puVar5[1],puVar5[-6],puVar5[-7],pcVar1[0xbf] & 1,(int)*DAT_000cf8b4,
               (int)*psVar3,(*DAT_000cf8c4 & 2) != 0,(DAT_000cf8c4[2] & 0x20) != 0,
               (DAT_000cf8c4[2] & 0x40) != 0,*puVar6,puVar5 + -6);
  FUN_000cff64(puVar5[-5],puVar5[3],(int)*psVar2,(int)*pcVar4,pcVar1[0xbf] & 1,puVar5 + 2);
  FUN_000cfa7c(puVar5[-6],psVar3 + 3);
  FUN_000cfac8(puVar5[-6],puVar5[-5],puVar5 + -4);
  FUN_000cfedc(puVar5[-6],puVar5[3],(int)*psVar2,(int)*pcVar4,pcVar1[0xbf] & 1,puVar5 + 1);
  FUN_000cfe80(puVar5[1],puVar5);
  FUN_000cfe6c(*puVar5,psVar3 + 4);
  return;
}

