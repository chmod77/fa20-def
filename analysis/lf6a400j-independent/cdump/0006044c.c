
void FUN_0006044c(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  
  for (uVar3 = 0; (uVar3 & 0xff) < 0x67; uVar3 = uVar3 + 1) {
    iVar4 = (uVar3 & 0xff) * 8 + -0xce90;
    uVar5 = 0;
    while ((uVar5 & 0xff) < 8) {
      uVar6 = uVar5 & 0xff;
      bVar1 = *(byte *)(iVar4 + uVar6);
      bVar7 = bVar1 & 0xfd;
      uVar3 = uVar3 & 0xff;
      uVar2 = (uint)(char)(&DAT_ffff37d9)[uVar3];
      uVar5 = __shl_r0_by_r1(1,uVar5 & 0xff);
      if ((uVar5 & 0xff & uVar2) == 0) {
        bVar7 = bVar1 & 0xf9;
      }
      *(byte *)(iVar4 + uVar6) = bVar7;
      uVar5 = uVar6 + 1;
    }
  }
  return;
}

