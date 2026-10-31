
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009ad2c(uint param_1,char param_2,uint param_3,char param_4,byte *param_5)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  byte bVar4;
  short sVar6;
  uint uVar5;
  char cVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  undefined *local_24;
  int iStack_20;
  
  sVar6 = 0;
  if (_DAT_fffebfec != 0) {
    sVar6 = _DAT_fffebfec + -1;
  }
  if ((param_4 == '\x03') || (param_4 != DAT_fffebfee)) {
    sVar8 = 100;
  }
  else {
    sVar8 = 0;
    if (sVar6 != 0) {
      sVar8 = sVar6;
    }
  }
  if (param_2 == '\x02') {
    bVar4 = 0x1a;
  }
  else {
    uVar9 = (param_1 & 0xff) * (param_3 & 0xffff);
    uVar5 = uVar9 & 0xffff;
    puVar3 = (undefined *)(uVar9 >> 0x10);
    uVar10 = uVar5 * 0x3d65;
    uVar9 = (uVar10 >> 0x10) + (int)puVar3 * 0x3d65;
    if (uVar9 < (uint)((int)puVar3 * 0x3d65)) {
      puVar3 = &DAT_00010000 + (int)puVar3;
    }
    uVar5 = uVar5 + uVar9;
    if (uVar5 < uVar9) {
      puVar3 = &DAT_00010000 + (int)puVar3;
    }
    puVar3 = puVar3 + (uVar5 >> 0x10);
    if ((&UNK_00000013 < puVar3) ||
       ((puVar3 == &UNK_00000013 && (iVar1 = FUN_0016caac(), iVar1 != 0)))) {
      bVar2 = 0xff;
    }
    else {
      local_24 = puVar3;
      iStack_20 = uVar5 * 0x10000 + (uVar10 & 0xffff);
      bVar2 = FUN_0016c128(&local_24,0x13d650d5);
    }
    cVar7 = '\0';
    if (sVar8 != 0) {
      cVar7 = '\x14';
    }
    bVar4 = bVar2 + cVar7;
    if (bVar4 < bVar2) {
      bVar4 = 0xff;
    }
  }
  if (bVar4 < 0xf) {
    bVar4 = 0xe;
  }
  if (bVar4 < 0xf1) {
    *param_5 = bVar4;
  }
  else {
    *param_5 = 0xf0;
  }
  DAT_fffebfee = param_4;
  _DAT_fffebfec = sVar8;
  return;
}

