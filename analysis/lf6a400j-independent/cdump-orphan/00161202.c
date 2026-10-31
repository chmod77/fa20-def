
undefined8 FUN_00161202(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint in_sr;
  uint in_mach;
  uint in_macl;
  undefined8 uVar11;
  
  DAT_00000400 = 0;
  uVar11 = FUN_0016140a();
  puVar10 = (uint *)((ulonglong)uVar11 >> 0x20);
  uVar7 = *(uint *)uVar11;
  puVar9 = (uint *)uVar11 + 1;
  uVar6 = *puVar10;
  uVar8 = uVar7 ^ uVar6;
  if ((int)uVar7 < 0) {
    uVar7 = -uVar7;
  }
  if ((int)uVar6 < 0) {
    uVar6 = -uVar6;
  }
  uVar4 = (uVar6 & 0xffff) * (uVar7 & 0xffff);
  iVar5 = (uVar6 >> 0x10) * (uVar7 & 0xffff);
  iVar3 = 0;
  uVar2 = iVar5 + (uVar6 & 0xffff) * (uVar7 >> 0x10);
  if (iVar5 != 0) {
    iVar3 = 0x10000;
  }
  uVar1 = uVar4 + uVar2 * 0x10000;
  uVar6 = iVar3 + (uint)(uVar1 < uVar4) + (uVar2 >> 0x10) + (uVar6 >> 0x10) * (uVar7 >> 0x10);
  if ((int)-(uint)((int)uVar8 < 0) < 0) {
    uVar6 = ~uVar6;
    if (uVar1 == 0) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar1 = ~uVar1 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar6 = uVar6 + (in_macl + uVar1 < in_macl) + (in_mach & 0xffff);
    if ((int)uVar6 < -0x8000) {
      uVar6 = 0xffff8000;
    }
    if (0x7fff < (int)uVar6) {
      uVar6 = 0x7fff;
    }
    in_mach = uVar6 & 0xffff | in_mach & 0xffff0000;
  }
  else {
    in_mach = uVar6 + (in_macl + uVar1 < in_macl) + in_mach;
  }
  *(short *)((int)puVar9 * 2) = (short)puVar9;
  *(uint **)((int)puVar9 * 2) = puVar9;
  return CONCAT44(puVar10 + 1,(int)*(char *)(in_mach * 2));
}

