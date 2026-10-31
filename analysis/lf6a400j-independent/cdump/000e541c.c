
/* WARNING: Removing unreachable block (ram,0x000e5686) */
/* WARNING: Removing unreachable block (ram,0x000e568c) */
/* WARNING: Removing unreachable block (ram,0x000e559c) */
/* WARNING: Removing unreachable block (ram,0x000e55ac) */
/* WARNING: Removing unreachable block (ram,0x000e55b2) */
/* WARNING: Removing unreachable block (ram,0x000e55a4) */
/* WARNING: Removing unreachable block (ram,0x000e55a8) */
/* WARNING: Removing unreachable block (ram,0x000e55b4) */
/* WARNING: Removing unreachable block (ram,0x000e55bc) */
/* WARNING: Removing unreachable block (ram,0x000e55c4) */
/* WARNING: Removing unreachable block (ram,0x000e55c0) */
/* WARNING: Removing unreachable block (ram,0x000e55cc) */
/* WARNING: Removing unreachable block (ram,0x000e55e0) */
/* WARNING: Removing unreachable block (ram,0x000e55f0) */
/* WARNING: Removing unreachable block (ram,0x000e5600) */
/* WARNING: Removing unreachable block (ram,0x000e5606) */
/* WARNING: Removing unreachable block (ram,0x000e55f4) */
/* WARNING: Removing unreachable block (ram,0x000e55e4) */
/* WARNING: Removing unreachable block (ram,0x000e55d4) */
/* WARNING: Removing unreachable block (ram,0x000e5610) */
/* WARNING: Removing unreachable block (ram,0x000e5454) */
/* WARNING: Removing unreachable block (ram,0x000e5462) */
/* WARNING: Removing unreachable block (ram,0x000e5468) */
/* WARNING: Removing unreachable block (ram,0x000e546a) */
/* WARNING: Removing unreachable block (ram,0x000e5458) */
/* WARNING: Removing unreachable block (ram,0x000e545c) */
/* WARNING: Removing unreachable block (ram,0x000e545e) */
/* WARNING: Removing unreachable block (ram,0x000e546c) */
/* WARNING: Removing unreachable block (ram,0x000e5474) */
/* WARNING: Removing unreachable block (ram,0x000e547e) */
/* WARNING: Removing unreachable block (ram,0x000e5478) */
/* WARNING: Removing unreachable block (ram,0x000e5486) */
/* WARNING: Removing unreachable block (ram,0x000e549a) */
/* WARNING: Removing unreachable block (ram,0x000e54aa) */
/* WARNING: Removing unreachable block (ram,0x000e54ba) */
/* WARNING: Removing unreachable block (ram,0x000e54c0) */
/* WARNING: Removing unreachable block (ram,0x000e54ae) */
/* WARNING: Removing unreachable block (ram,0x000e549e) */
/* WARNING: Removing unreachable block (ram,0x000e548e) */
/* WARNING: Removing unreachable block (ram,0x000e54ca) */
/* WARNING: Removing unreachable block (ram,0x000e5584) */
/* WARNING: Removing unreachable block (ram,0x000e558a) */
/* WARNING: Removing unreachable block (ram,0x000e56a6) */
/* WARNING: Removing unreachable block (ram,0x000e56ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e541c(undefined4 param_1,short param_2,undefined4 param_3,uint param_4,char param_5,
                 ushort param_6,undefined1 *param_7)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  
  if (DAT_fffed31f != '\0') {
    DAT_fffed316 = 0;
    DAT_fffed31f = '\0';
  }
  uVar2 = (uint)param_2;
  if ((int)uVar2 < 0) {
    uVar2 = -uVar2;
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
  }
  else if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  if ((param_5 == '\x05') || (param_5 == '\x06')) {
    uVar1 = LK_133F40((uint)&T_02F208,param_4 & 0xffff);
  }
  else {
    uVar1 = (uint)_DAT_fffed31a;
  }
  if (param_5 == '\x01') {
    uVar1 = LK_133F40((uint)&T_02F1D8,param_4 & 0xffff);
  }
  else if (param_5 == '\x02') {
    uVar1 = LK_133F40((uint)&T_02F1E4,param_4 & 0xffff);
  }
  else if (param_5 == '\x03') {
    uVar1 = LK_133F40((uint)&T_02F1F0,param_4 & 0xffff);
  }
  else if (param_5 == '\x04') {
    uVar1 = LK_133F40((uint)&T_02F1FC,param_4 & 0xffff);
  }
  DAT_fffed314 = (uVar1 & 0xffff) <= (uVar2 & 0xffff);
  _DAT_fffed31a = (short)uVar1;
  DAT_fffed31e = 1;
  if (DAT_fffed320 != '\0') {
    DAT_fffed315 = 0;
    DAT_fffed320 = '\0';
  }
  uVar3 = 1;
  if ((!(bool)DAT_fffed314) || (param_6 < 500)) {
    uVar3 = 0;
  }
  *param_7 = uVar3;
  return;
}

