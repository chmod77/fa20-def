
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00000e34(void)

{
  undefined4 in_r0;
  undefined4 in_r1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  byte *pbVar8;
  
  _DAT_ffffab58 = 0xffffffff;
  pbVar8 = &DAT_ffffab54;
  _DAT_ffffab54 = 0xffffffff;
  uVar5 = 7;
  uVar3 = 0;
  piVar6 = _DAT_ffffab44;
  do {
    uVar1 = 0xfffffffe;
    do {
      piVar7 = piVar6;
      uVar4 = uVar3;
      if (((int *)*piVar7 == (int *)0x0) || (*(int *)*piVar7 == 0)) {
        *pbVar8 = *pbVar8 & (byte)uVar1;
      }
      uVar1 = uVar1 << 1 | (uint)((uVar1 & 0x80000000) != 0);
      uVar3 = uVar4 + 1;
      if (0x3e < uVar3) {
        iVar2 = 8;
        pbVar8 = &DAT_ffffab5b;
        goto LAB_00000e90;
      }
      piVar6 = piVar7 + 1;
    } while (uVar5 != uVar3);
    uVar3 = uVar4 + 2;
    piVar6 = piVar7 + 2;
    uVar5 = uVar5 + 8;
    pbVar8 = pbVar8 + 1;
  } while( true );
  while( true ) {
    pbVar8 = pbVar8 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) break;
LAB_00000e90:
    if ((*pbVar8 & 0x7f) != 0) break;
  }
  DAT_ffffab71 = (char)iVar2;
  return CONCAT44(in_r1,in_r0);
}

