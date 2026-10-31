
void FUN_0007bde0(void)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  pcVar1 = DAT_0007c02c;
  if (*DAT_0007c034 == 1) {
    *DAT_0007c02c = *DAT_0007c038 + '@';
    uVar2 = 1;
    for (uVar3 = 0; (uVar3 & 0xff) < 3; uVar3 = (uVar3 & 0xff) + 1) {
      pcVar1[uVar2 & 0xff] = *(char *)(DAT_0007c03c + (uVar3 & 0xff));
      uVar2 = (uVar2 & 0xff) + 1;
    }
    uVar2 = 4;
    for (uVar3 = 0; (uVar3 & 0xff) < 5; uVar3 = (uVar3 & 0xff) + 1) {
      pcVar1[uVar2 & 0xff] = PTR_DAT_0007c040[uVar3 & 0xff];
      uVar2 = (uVar2 & 0xff) + 1;
    }
    uVar2 = 9;
    for (uVar3 = 0; (uVar3 & 0xff) < 0x60; uVar3 = (uVar3 & 0xff) + 1) {
      pcVar1[uVar2 & 0xff] = PTR_DAT_0007c044[uVar3 & 0xff];
      uVar2 = (uVar2 & 0xff) + 1;
    }
    *DAT_0007c030 = 0x69;
    return;
  }
  *DAT_0007c02c = '\x7f';
  pcVar1[1] = (char)DAT_0007bf18;
  pcVar1[2] = '\x13';
  *DAT_0007c030 = 3;
  return;
}

