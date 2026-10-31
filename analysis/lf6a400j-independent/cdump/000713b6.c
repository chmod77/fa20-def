
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000713b6(byte *param_1,int param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined **ppuVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  short sStack_24;
  
  ppuVar4 = &PTR_LAB_0003185c;
  if (_DAT_ffff316c != 0) {
    ppuVar4 = &PTR_LAB_0003169c;
  }
  if ((((((_DAT_ffff316c == 0x2419) || (_DAT_ffff316c == 0x2420)) || (_DAT_ffff316c == 0x2401)) ||
       ((_DAT_ffff316c == 0x2402 || (_DAT_ffff316c == 0x452)))) ||
      ((_DAT_ffff316c == 0x453 || ((_DAT_ffff316c == 0x2404 || (_DAT_ffff316c == 0x1451)))))) ||
     ((_DAT_ffff316c == 0x456 || (_DAT_ffff316c == 0x455)))) {
    DAT_fffef591 = 1;
  }
  else {
    DAT_fffef591 = 0;
  }
  pbVar7 = param_1;
  for (uVar8 = 0; (uVar8 & 0xff) < (uint)((int)(param_3 & 0xff) >> 1); uVar8 = uVar8 + 1) {
    iVar5 = (uVar8 & 0xff) * 2;
    bVar3 = *(byte *)(param_2 + iVar5);
    uVar9 = (uint)bVar3;
    cVar1 = *(char *)(iVar5 + param_2 + 1);
    pbVar6 = pbVar7;
    if (uVar9 < 0x70) {
      cVar2 = FUN_000714e0(uVar9);
      if ((ppuVar4[uVar9] != (undefined *)0x0) && (cVar2 != '\0')) {
        *pbVar7 = bVar3;
        pbVar6 = pbVar7 + 1;
        if (cVar1 == '\0') {
          *pbVar6 = 0;
          pbVar6 = (byte *)(*(code *)ppuVar4[uVar9])(pbVar7 + 2);
        }
      }
    }
    pbVar7 = pbVar6;
  }
  bVar3 = 0;
  if (2 < (int)pbVar7 - (int)param_1) {
    bVar3 = (byte)((int)pbVar7 - (int)param_1);
  }
  sStack_24 = (ushort)bVar3 << 8;
  return (int)sStack_24;
}

