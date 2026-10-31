
void FUN_0005e18a(undefined4 param_1,undefined1 *param_2)

{
  char cVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  
  pcVar2 = &DAT_0002c0ae;
  bVar5 = 0;
  bVar3 = 0;
  while (bVar3 < 0x14) {
    uVar4 = 0;
    uVar7 = 0x80;
    bVar6 = 0;
    while ((bVar6 < 8 && (bVar3 < 0x14))) {
      cVar1 = FUN_0005e20a(param_1,*pcVar2 + -1);
      if (cVar1 == '\x01') {
        uVar4 = uVar4 | uVar7;
      }
      uVar7 = uVar7 >> 1;
      bVar6 = bVar6 + 1;
      pcVar2 = pcVar2 + 1;
      bVar5 = bVar5 + 1;
      bVar3 = bVar5;
    }
    *param_2 = (char)uVar4;
    param_2 = param_2 + 1;
  }
  return;
}

