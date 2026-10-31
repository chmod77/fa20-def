
void FUN_0007e298(void)

{
  char *pcVar1;
  short *psVar2;
  undefined4 *puVar3;
  short *psVar4;
  char *pcVar5;
  
  psVar4 = DAT_0007e38c;
  puVar3 = DAT_0007e388;
  psVar2 = DAT_0007e384;
  pcVar1 = DAT_0007e380;
  FUN_0007e3f8((int)*DAT_0007e38c,*DAT_0007e388,((int)*DAT_0007e380 & 0x80U) != 0,
               (int)DAT_0007e384[0xd],DAT_0007e384);
  FUN_0007e4a8((int)*DAT_0007e390,psVar2 + 1);
  FUN_0007e5c8((int)*DAT_0007e390,psVar2 + 4);
  pcVar5 = DAT_0007e394;
  FUN_0007e790((int)*(char *)(psVar4 + 4),(int)*DAT_0007e398,DAT_0007e394 + 1,psVar2 + 6);
  FUN_0007e3e8((int)*psVar2,pcVar5);
  FUN_0007e4ac(puVar3[-6],*PTR_DAT_0007e39c & 1,(int)*DAT_0007e3a0,(int)psVar2[4],psVar2 + 3);
  FUN_0007e568(*PTR_DAT_0007e39c & 1,(int)*DAT_0007e3a8,(int)*DAT_0007e3a4,(int)psVar2[4],psVar2 + 2
              );
  FUN_0007e664((int)psVar2[6],(*DAT_0007e3ac & 0x20) != 0,pcVar5[3] & 1,(int)*psVar4,*puVar3,
               ((int)*pcVar1 & 0x80U) != 0,psVar2[0xd],psVar2 + 5);
  (*(code *)PTR_FUN_0007e3b4)((int)*pcVar5,DAT_0007e3b0);
  (*(code *)PTR_FUN_0007e3bc)((int)*pcVar5,DAT_0007e3b8);
  return;
}

