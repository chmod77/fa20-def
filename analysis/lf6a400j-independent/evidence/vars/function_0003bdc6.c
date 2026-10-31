
void FUN_0003bdc6(void)

{
  short *psVar1;
  short *psVar2;
  char *pcVar3;
  short sVar4;
  char cVar5;
  undefined1 uVar6;
  short *psVar7;
  
  sVar4 = (*(code *)PTR_FUN_0003beac)
                    (DAT_0003bea8,(int)*DAT_0003beb4,(int)*(short *)PTR_DAT_0003beb0);
  psVar1 = DAT_0003bea8;
  *DAT_0003bea8 = sVar4;
  *DAT_0003beb8 = (char)((ushort)*psVar1 >> 8);
  *DAT_0003bebc = (char)((ushort)*psVar1 >> 8);
  psVar7 = DAT_0003c10c;
  psVar2 = DAT_0003bec8;
  if ((*DAT_0003bec0 & 4) == 0) {
    *DAT_0003c10c = *psVar1;
  }
  else {
    *DAT_0003bec8 = (ushort)(byte)*PTR_DAT_0003bec4 << 8;
    psVar7 = psVar2;
  }
  cVar5 = (*(code *)PTR_FUN_0003c114)(PTR_PTR_0003c110,(int)*psVar7);
  pcVar3 = DAT_0003c118;
  *DAT_0003c118 = cVar5;
  uVar6 = (*(code *)PTR_FUN_0003c114)(PTR_PTR_0003c110,(int)*DAT_0003c11c);
  *DAT_0003c120 = uVar6;
  if ((*DAT_0003c124 & 0x40) == 0) {
    cVar5 = (*(code *)PTR_FUN_0003c128)((int)*pcVar3,(int)*DAT_0003c12c);
    *DAT_0003c12c = cVar5;
    cVar5 = (*(code *)PTR_FUN_0003c130)((int)*pcVar3,(int)*DAT_0003c134);
    *DAT_0003c134 = cVar5;
  }
  else {
    *DAT_0003c12c = *pcVar3;
    *DAT_0003c134 = *pcVar3;
  }
  return;
}

