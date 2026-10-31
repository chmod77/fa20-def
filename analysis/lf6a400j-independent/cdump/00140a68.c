
/* WARNING: Removing unreachable block (ram,0x00140bb2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00140a68(ushort param_1,ushort param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort uVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = (uint)_DAT_ffff6784;
  puVar3 = (ushort *)(&DAT_ffff3500 + uVar8 * 2);
  if (param_1 == (ushort)~param_2) {
    if (*puVar3 == param_1) {
      DAT_ffff1ce0 = 1;
    }
    else {
      DAT_ffff1ce0 = 2;
      *puVar3 = param_1;
    }
  }
  else {
    if (*puVar3 == param_1) {
      DAT_ffff1ce0 = 3;
    }
    else {
      if (*puVar3 != (ushort)~param_2) {
        DAT_ffff1ce0 = 5;
        DAT_ffff1cec = DAT_ffff1cec | 0x80;
        uVar7 = 0;
        iVar6 = 0;
        while ((uVar7 < 0x1d &&
               (puVar3 = (ushort *)
                         ((int)*(short *)((int)&DAT_001610d0 + iVar6) +
                         (int)*(short *)((int)&DAT_001610d2 + iVar6)),
               ((uint)puVar3 & 0xffff) <= uVar8))) {
          uVar7 = uVar7 + 1;
          iVar6 = iVar6 + 8;
        }
        _DAT_ffff6784 = (ushort)(undefined1 *)((int)puVar3 + -1);
        uVar8 = ((int)puVar3 + -1) - uVar8;
        uVar4 = 1;
        if ((uVar8 & 0xffff) < (uint)_DAT_ffff1cde) {
          uVar4 = _DAT_ffff1cde - (short)uVar8;
        }
        uVar8 = (uint)(short)(&DAT_001610d2)[uVar7 * 4];
        uVar2 = (&DAT_001610d0)[uVar7 * 4];
        puVar5 = (undefined2 *)(&PTR_DAT_001610d4)[uVar7 * 2];
        _DAT_ffff1cde = uVar4;
        for (iVar6 = 0; iVar6 < (int)(uint)uVar2; iVar6 = iVar6 + 1) {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          *(undefined2 *)(&DAT_ffff3500 + (uVar8 & 0xffff) * 2) = uVar1;
          uVar8 = (uVar8 & 0xffff) + 1;
        }
        goto LAB_00140b54;
      }
      DAT_ffff1ce0 = 4;
    }
    DAT_ffff1cec = DAT_ffff1cec | 0x80;
    FUN_001403b4(uVar8,1);
  }
LAB_00140b54:
  if (_DAT_ffff6784 == 0) {
    if ((_DAT_ffff3500 < 32000) || (0x8300 < _DAT_ffff3500)) {
      _DAT_ffffabd0 = 0x8000;
      DAT_ffff1cd2 = DAT_ffff1cd2 | 1;
      DAT_ffff1cb0 = DAT_ffff1cb0 | 0x80;
    }
    else {
      _DAT_ffffabd0 = _DAT_ffff3500;
    }
  }
  return;
}

