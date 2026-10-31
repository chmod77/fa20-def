
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003c3c8(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar4 = 0;
  for (pcVar5 = "33920-82J2*"; pcVar5 < &DAT_0017fff2; pcVar5 = pcVar5 + 1) {
    if ((pcVar5 < &DAT_00008080) || (&UNK_000080a1 < pcVar5)) {
      uVar2 = (uint)(byte)*pcVar5 << 8;
      for (bVar1 = 0; bVar1 < 8; bVar1 = bVar1 + 1) {
        uVar3 = uVar4 & 0xffff;
        uVar4 = uVar3 << 1;
        if (((uVar2 & 0xffff ^ uVar3) & (uint)&DAT_00008000) != 0) {
          uVar4 = uVar4 ^ 0x1021;
        }
        uVar2 = (uVar2 & 0xffff) << 1;
      }
    }
  }
  _DAT_fffeec56 = (short)uVar4;
  return;
}

