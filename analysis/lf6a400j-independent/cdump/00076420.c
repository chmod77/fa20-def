
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00076420(uint param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  byte bVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined **local_8;
  
  ppuVar4 = (undefined **)(param_1 & 0xff00);
  bVar2 = true;
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar4 = (undefined **)&UNK_00000035;
    local_8 = &PTR_DAT_00030a6c;
  }
  else if (ppuVar4 == (undefined **)&UNK_00000100) {
    ppuVar4 = (undefined **)&UNK_00000041;
    local_8 = (undefined **)&DAT_00030c14;
  }
  else if (ppuVar4 == (undefined **)&DAT_00000200) {
    ppuVar4 = (undefined **)&UNK_00000015;
    local_8 = (undefined **)&DAT_00030e1c;
  }
  else if (ppuVar4 == (undefined **)&DAT_00001000) {
    ppuVar4 = (undefined **)&UNK_0000004d;
    local_8 = (undefined **)&DAT_00030ec4;
  }
  else if (ppuVar4 == &PTR_DAT_00001100) {
    ppuVar4 = (undefined **)&UNK_0000003a;
    local_8 = (undefined **)&DAT_0003112c;
  }
  else if (ppuVar4 == (undefined **)&LAB_00001200) {
    ppuVar4 = (undefined **)&UNK_0000002a;
    local_8 = (undefined **)&DAT_000312fc;
  }
  else if (ppuVar4 == (undefined **)&DAT_00002000) {
    ppuVar4 = (undefined **)&UNK_0000000c;
    local_8 = (undefined **)&DAT_0003144c;
  }
  else if (ppuVar4 == (undefined **)0x3000) {
    ppuVar4 = (undefined **)&UNK_0000000c;
    local_8 = (undefined **)&DAT_000314ac;
  }
  else if (ppuVar4 == (undefined **)&DAT_0000f100) {
    ppuVar4 = (undefined **)&UNK_00000006;
    local_8 = (undefined **)&DAT_0003150c;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    for (uVar6 = 0; (undefined **)(uVar6 & 0xff) < ppuVar4; uVar6 = uVar6 + 1) {
      if ((param_1 & 0xffff) == (uint)*(ushort *)local_8) {
        if (0xfff < (ushort)(_DAT_ffff7b98 + *(byte *)((int)local_8 + 2) + 2)) {
          return 0x31;
        }
        if (((((DAT_ffff8574 != '\0') || (((int)*(char *)((int)local_8 + 3) & 0x80U) == 0)) &&
             ((DAT_ffff8574 != '\x01' || (((uint)*local_8 & 0x10) == 0)))) &&
            ((DAT_ffff8574 != '\x03' || (((uint)*local_8 & 0x40) == 0)))) &&
           ((DAT_ffff8574 != '\x05' || (((uint)*local_8 & 0x20) == 0)))) {
          return 0x33;
        }
        (&DAT_ffff6b91)[_DAT_ffff7b98] = (char)((param_1 & 0xffff) >> 8);
        (&DAT_ffff6b92)[_DAT_ffff7b98] = (char)param_1;
        puVar7 = local_8[1];
        puVar3 = &DAT_ffff6b93 + _DAT_ffff7b98;
        for (bVar5 = 0; bVar5 < *(byte *)((int)local_8 + 2); bVar5 = bVar5 + 1) {
          uVar1 = *puVar7;
          puVar7 = puVar7 + 1;
          *puVar3 = uVar1;
          puVar3 = puVar3 + 1;
        }
        _DAT_ffff7b98 = *(byte *)((int)local_8 + 2) + _DAT_ffff7b98 + 2;
        return 0;
      }
      local_8 = local_8 + 2;
    }
  }
  return 0;
}

