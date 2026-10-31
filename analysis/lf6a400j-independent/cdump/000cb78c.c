
/* WARNING: Removing unreachable block (ram,0x000cb854) */
/* WARNING: Removing unreachable block (ram,0x000cb892) */

void FUN_000cb78c(char param_1,ushort param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,ushort param_8,ushort param_9,short *param_10,undefined2 *param_11,
                 short *param_12)

{
  short sVar1;
  int iVar2;
  short sVar4;
  uint uVar3;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *local_28;
  uint uStack_24;
  
  iVar2 = (param_6 & 0xffff) - (param_7 & 0xffff);
  sVar4 = 0x7fff;
  if ((iVar2 < 0x8000) && (sVar4 = -0x8000, -0x8001 < iVar2)) {
    sVar4 = (short)iVar2;
  }
  uVar3 = 0;
  if (-0x11 < (short)-(param_8 & 0xff)) {
    uVar3 = (int)(short)-(param_8 & 0xff) + 0x10;
  }
  iVar2 = (int)sVar4 * (uVar3 & 0xff);
  sVar4 = 0x7fff;
  if (iVar2 < 0x7fff1) {
    if (iVar2 < -0x7fff1) {
      sVar4 = -0x8000;
    }
    else {
      sVar4 = (short)(iVar2 >> 4);
    }
  }
  *param_12 = sVar4;
  if (0x400f < param_9) {
    uVar5 = ((param_4 & 0xffff) - (param_5 & 0xffff)) - 0xd4d;
    uVar6 = (uVar5 & 0xffff) * 0x8ef;
    uVar7 = (uVar5 >> 0x10) * 0x8ef;
    puVar8 = (undefined *)0x0;
    uVar3 = (uVar6 >> 0x10) + uVar7;
    if (uVar3 < uVar7) {
      puVar8 = &DAT_00010000;
    }
    uVar6 = uVar3 * 0x10000 + (uVar6 & 0xffff);
    puVar8 = puVar8 + (uVar3 >> 0x10);
    if ((int)uVar5 < 0) {
      puVar8 = puVar8 + -0x8ef;
    }
    uVar3 = (uVar6 & 0xffff) * 3;
    uVar5 = (uVar6 >> 0x10) * 3;
    local_28 = (undefined *)0x0;
    uVar6 = (uVar3 >> 0x10) + uVar5;
    if (uVar6 < uVar5) {
      local_28 = &DAT_00010000;
    }
    uStack_24 = uVar6 * 0x10000 + (uVar3 & 0xffff);
    local_28 = local_28 +
               (uVar6 >> 0x10) + ((uint)puVar8 & 0xffff) * 3 + ((uint)puVar8 >> 0x10) * 0x30000;
    if (((int)local_28 < 1) && ((local_28 != (undefined *)0x0 || (uStack_24 < 0x18ffce01)))) {
      if (((int)local_28 < -1) ||
         ((local_28 == (undefined *)0xffffffff && (uStack_24 < 0xe70031ff)))) {
        sVar1 = -0x8000;
      }
      else {
        sVar1 = FUN_0016c500(&local_28,0x3200);
      }
    }
    else {
      sVar1 = 0x7fff;
    }
    iVar2 = (int)sVar1;
    if (-1 < iVar2) goto LAB_000cb914;
  }
  iVar2 = 0;
LAB_000cb914:
  *param_11 = (short)iVar2;
  if (param_1 == '\0') {
    sVar4 = (short)((int)((iVar2 - sVar4) + (param_3 & 0xffff) + -16000) >> 3);
    if (sVar4 < -10000) {
      *param_10 = 0;
    }
    else {
      *param_10 = sVar4 + 10000;
    }
  }
  else {
    *param_10 = (param_2 & 0xff) * -0x10 + 10000;
  }
  return;
}

