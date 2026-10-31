
/* WARNING: Removing unreachable block (ram,0x000af7cc) */
/* WARNING: Removing unreachable block (ram,0x000af744) */
/* WARNING: Removing unreachable block (ram,0x000af794) */
/* WARNING: Removing unreachable block (ram,0x000af7e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000af64c(char param_1,char param_2,ushort param_3,byte param_4,char param_5,uint param_6,
                 uint param_7,uint param_8,uint param_9,char param_10,char param_11,char param_12,
                 uint param_13,short *param_14)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 == '\x03') {
    param_9 = param_9 & 0xffff;
    if ((param_10 == '\0') || ((param_12 == '\0' && (param_11 != '\0')))) {
      if (param_11 != '\0') {
        uVar1 = LK_133BCC((uint)&T_02E0A8,param_9);
      }
      else {
        uVar1 = LK_133BCC((uint)&T_02E09C,param_9);
      }
    }
    else {
      uVar1 = LK_133BCC((uint)&T_02E090,param_9);
    }
    uVar2 = LK_133B38((uint)&T_02E0B4,param_13 & 0xff);
    iVar4 = (uVar1 & 0xff) * (uVar2 & 0xff);
    puVar3 = (undefined2 *)(param_8 & 0xffff);
    if (puVar3 < &DAT_00008000) {
      param_8 = 0x7fff;
      if (-(int)puVar3 < 0) {
        param_8 = (-(int)puVar3 & 0xffffU) - 0x8000;
      }
    }
    else {
      param_8 = param_8 - 0x8000;
    }
    uVar1 = __udiv32_r1_by_r0((param_8 & 0xffff) * 0x1a34,0x28);
    uVar2 = ((uVar1 & 0xffff) >> 5) + (uVar1 >> 0x10) * 0x800;
    uVar1 = uVar2 * 0x10000 + ((uVar1 & 0xffff) * 0x800 & 0xffff) >> 0xb;
    uVar5 = iVar4 * (uVar1 & 0xffff);
    uVar1 = (uVar5 >> 0x10) + iVar4 * ((uVar1 | (uVar2 >> 0x10) * 0x200000) >> 0x10);
    uVar2 = uVar1 * 0x10000 + (uVar5 & 0xffff) >> 0x10;
    if (puVar3 < &DAT_00008000) {
      iVar4 = __udiv32_r1_by_r0(uVar2 | uVar1 & 0xffff0000,0xcc);
      if (-iVar4 < -0x8000) {
        _DAT_fffec5d4 = 0;
      }
      else {
        _DAT_fffec5d4 = (short)-iVar4 + -0x8000;
      }
    }
    else {
      _DAT_fffec5d4 = (short)(uVar2 * 0x140 >> 0x10) + (short)(uVar1 >> 0x10) * 0x140 + -0x8000;
    }
    uVar2 = param_6 >> 6 & 0x3ff;
    uVar1 = 0;
    if ((3 < uVar2) && (uVar1 = 0xff, (uVar2 - 4 & 0xffff) < 0x100)) {
      uVar1 = uVar2 - 4;
    }
    uVar5 = uVar2 + 4;
    if ((uVar5 < uVar2) || (0xff < uVar5)) {
      uVar5 = 0xff;
    }
    if (((param_2 != '\0') && (param_3 < 100)) ||
       (((0x6b < param_4 &&
         (((param_4 < 0x94 && (param_5 == '\0')) && ((uVar1 & 0xff) <= (param_7 & 0xff))))) &&
        ((param_7 & 0xff) < (uVar5 & 0xff))))) {
      _DAT_fffec5d4 = -0x8000;
    }
  }
  *param_14 = _DAT_fffec5d4;
  return;
}

