
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00084b4c(ushort param_1,uint param_2,uint param_3,uint param_4,ushort param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,uint param_11,uint param_12,
                 uint param_13,undefined1 *param_14)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  undefined1 *puVar6;
  
  iVar5 = (param_2 & 0xffff) - (param_3 & 0xffff);
  puVar6 = (undefined1 *)0xffffffff;
  if ((iVar5 < (int)&DAT_0000c180) && (puVar6 = (undefined1 *)0x0, -0x3e81 < iVar5)) {
    puVar6 = &LAB_00003e80 + iVar5;
  }
  uVar2 = LK_133BCC((uint)&T_02C8BC,param_11 & 0xffff);
  uVar3 = LK_1361C8((uint)&T_02C8C8,param_12 & 0xff,param_13 & 0xffff);
  puVar4 = (undefined *)__udiv32_r1_by_r0((uVar2 & 0xff) * (uVar3 & 0xffff) * 2,0xff);
  if (&DAT_0000ffff < puVar4) {
    puVar4 = &DAT_0000ffff;
  }
  if ((((0x46 < param_1) && ((undefined1 *)((uint)puVar6 & 0xffff) <= &LAB_000041a0)) &&
      (((uint)puVar4 & 0xffff) <= (param_4 & 0xffff))) && (0x7ad < param_5)) {
    bVar1 = true;
    if (((param_6 == '\0') && (param_7 == '\0')) &&
       ((param_8 == '\0' && ((param_9 == '\0' && (param_10 == '\0')))))) {
      bVar1 = false;
    }
    if (!bVar1) {
      *param_14 = 99 < _DAT_fffebb4c;
      goto LAB_00084c4a;
    }
  }
  *param_14 = 0;
LAB_00084c4a:
  if ((((0x46 < param_1) && (((uint)puVar6 & 0xffff) < 0x41a1)) &&
      (((uint)puVar4 & 0xffff) <= (param_4 & 0xffff))) && (0x7ad < param_5)) {
    bVar1 = true;
    if (((param_6 == '\0') && (param_7 == '\0')) &&
       ((param_8 == '\0' && ((param_9 == '\0' && (param_10 == '\0')))))) {
      bVar1 = false;
    }
    if (!bVar1) {
      if ((ushort)(_DAT_fffebb4c + 1) != 0) {
        _DAT_fffebb4c = _DAT_fffebb4c + 1;
        return;
      }
      _DAT_fffebb4c = 0xffff;
      return;
    }
  }
  _DAT_fffebb4c = 0;
  return;
}

