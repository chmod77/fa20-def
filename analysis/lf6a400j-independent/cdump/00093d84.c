
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00093d84(uint param_1,char param_2,uint *param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 == '\0') {
    _DAT_fffebebc = (param_1 & 0xffff) + _DAT_fffebebc;
    if (_DAT_fffebebc < (param_1 & 0xffff)) {
      _DAT_fffebebc = 0xffffffff;
    }
  }
  else {
    _DAT_fffebebc = 0;
  }
  uVar3 = (_DAT_fffebebc & 0xffff) * 0x2a27;
  uVar4 = (_DAT_fffebebc >> 0x10) * 0x2a27;
  uVar2 = (uVar3 >> 0x10) + uVar4;
  puVar1 = (undefined *)((_DAT_fffebebc >> 0x10) * 0x1f);
  if (uVar2 < uVar4) {
    puVar1 = &DAT_00010000 + (int)puVar1;
  }
  uVar4 = (_DAT_fffebebc & 0xffff) * 0x1f + uVar2;
  if (uVar4 < uVar2) {
    puVar1 = &DAT_00010000 + (int)puVar1;
  }
  *param_3 = uVar4 * 0x10000 + (uVar3 & 0xffff) >> 0x15 | (int)(puVar1 + (uVar4 >> 0x10)) * 0x800;
  return;
}

