
/* WARNING: Removing unreachable block (ram,0x00065cac) */
/* WARNING: Removing unreachable block (ram,0x00065c1a) */
/* WARNING: Removing unreachable block (ram,0x00065d3e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00065a5e(void)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort uVar3;
  ushort uVar4;
  int extraout_r2;
  int extraout_r2_00;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  
  if ((_DAT_ffff008e < 0x3d) || (0x9f < _DAT_ffff008e)) {
    iVar6 = 0;
    for (uVar9 = 0; uVar9 < 9; uVar9 = uVar9 + 1) {
      *(undefined2 *)(&DAT_ffff0312 + iVar6) = 0;
      *(undefined2 *)(&DAT_ffff0324 + iVar6) = 0;
      *(undefined2 *)(&DAT_ffff0336 + iVar6) = 0;
      iVar6 = iVar6 + 2;
    }
    DAT_ffff0348 = 0;
    DAT_ffff0349 = 0;
    DAT_ffff034a = 0;
    DAT_fffef555 = DAT_fffef555 | 0x80;
  }
  _DAT_ffff034c = _DAT_ffff034c + 1;
  if (8 < _DAT_ffff034c) {
    _DAT_ffff034c = 0;
  }
  *(undefined2 *)(&DAT_ffff0312 + (uint)_DAT_ffff034c * 2) = _DAT_ffff34de;
  if (DAT_ffff0348 < 9) {
    DAT_ffff0348 = DAT_ffff0348 + 1;
  }
  if (8 < DAT_ffff0348) {
    DAT_fffef555 = DAT_fffef555 & 0x7f;
  }
  *(undefined2 *)(&DAT_ffff0324 + (uint)_DAT_ffff034c * 2) = _DAT_ffff34e0;
  if (DAT_ffff0349 < 9) {
    DAT_ffff0349 = DAT_ffff0349 + 1;
  }
  *(undefined2 *)(&DAT_ffff0336 + (uint)_DAT_ffff034c * 2) = _DAT_ffff34e2;
  if (DAT_ffff034a < 9) {
    DAT_ffff034a = DAT_ffff034a + 1;
  }
  uVar8 = 0;
  uVar9 = 0xffff;
  DAT_ffff034e = DAT_ffff034e & 0xf7;
  uVar10 = 0;
  uVar3 = 0xffff;
  uVar4 = uVar3;
  for (uVar5 = 0; (uVar5 & 0xffff) < 9; uVar5 = (uVar5 & 0xffff) + 1) {
    uVar1 = *(ushort *)(&DAT_ffff0312 + (uVar5 & 0xffff) * 2);
    if (uVar10 < uVar1) {
      uVar8 = uVar1;
      uVar10 = uVar1;
    }
    if (uVar1 < uVar4) {
      uVar9 = uVar1;
      uVar4 = uVar1;
    }
    if ((0x2b5e < uVar1) || (uVar1 < 0x7ae)) {
      DAT_ffff034e = DAT_ffff034e | 8;
    }
  }
  if ((((DAT_ffff034e & 8) == 0) && ((int)((uint)uVar8 - (uint)uVar9) < 0x10f)) &&
     (8 < DAT_ffff0348)) {
    DAT_ffff034e = DAT_ffff034e | 1;
  }
  else {
    DAT_ffff034e = DAT_ffff034e & 0xfe;
  }
  uVar8 = 0;
  uVar9 = 0xffff;
  DAT_ffff034e = DAT_ffff034e & 0xef;
  uVar4 = 0;
  uVar10 = uVar3;
  for (uVar5 = 0; (uVar5 & 0xffff) < 9; uVar5 = (uVar5 & 0xffff) + 1) {
    uVar1 = *(ushort *)(&DAT_ffff0324 + (uVar5 & 0xffff) * 2);
    if (uVar4 < uVar1) {
      uVar8 = uVar1;
      uVar4 = uVar1;
    }
    if (uVar1 < uVar10) {
      uVar9 = uVar1;
      uVar10 = uVar1;
    }
    if ((0x2b0f < uVar1) || (uVar1 < 0x823)) {
      DAT_ffff034e = DAT_ffff034e | 0x10;
    }
  }
  if ((((DAT_ffff034e & 0x10) == 0) && ((int)((uint)uVar8 - (uint)uVar9) < 0x10f)) &&
     (8 < DAT_ffff0349)) {
    DAT_ffff034e = DAT_ffff034e | 2;
  }
  else {
    DAT_ffff034e = DAT_ffff034e & 0xfd;
  }
  uVar8 = 0;
  uVar9 = 0xffff;
  DAT_ffff034e = DAT_ffff034e & 0xdf;
  uVar10 = 0;
  for (uVar5 = 0; (uVar5 & 0xffff) < 9; uVar5 = (uVar5 & 0xffff) + 1) {
    uVar4 = *(ushort *)(&DAT_ffff0336 + (uVar5 & 0xffff) * 2);
    if (uVar10 < uVar4) {
      uVar8 = uVar4;
      uVar10 = uVar4;
    }
    if (uVar4 < uVar3) {
      uVar9 = uVar4;
      uVar3 = uVar4;
    }
    if (0x71ae < uVar4) {
      DAT_ffff034e = DAT_ffff034e | 0x20;
    }
  }
  if ((((DAT_ffff034e & 0x20) == 0) && ((int)((uint)uVar8 - (uint)uVar9) < 0x43c)) &&
     (8 < DAT_ffff034a)) {
    DAT_ffff034e = DAT_ffff034e | 4;
  }
  else {
    DAT_ffff034e = DAT_ffff034e & 0xfb;
  }
  pcVar7 = __sdiv32_r1_by_r0;
  iVar6 = __sdiv32_r1_by_r0((uint)_DAT_ffff0312 + (uint)_DAT_ffff0314 + (uint)_DAT_ffff0316 +
                            (uint)_DAT_ffff0318 + (uint)_DAT_ffff031a + (uint)_DAT_ffff031c +
                            (uint)_DAT_ffff031e + (uint)_DAT_ffff0320 + (uint)_DAT_ffff0322,9);
  _DAT_ffff00ee = (undefined2)iVar6;
  uVar2 = (*pcVar7)();
  *(undefined2 *)(extraout_r2 + 2) = uVar2;
  uVar2 = (*pcVar7)();
  *(undefined2 *)(extraout_r2_00 + 4) = uVar2;
  return;
}

