
/* WARNING: Removing unreachable block (ram,0x0008fb0a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008f9c0(ushort param_1,ushort param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 char param_7,char param_8,uint param_9,undefined1 *param_10,undefined1 *param_11,
                 undefined1 *param_12,undefined1 *param_13,undefined1 *param_14,undefined2 *param_15
                 ,undefined1 *param_16,undefined1 *param_17)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined *puVar9;
  
  bVar1 = param_1 < param_2;
  uVar2 = LK_1351FC((uint)&T_02D070,param_3);
  *param_15 = (short)uVar2;
  uVar3 = LK_133BCC((uint)&T_02D088,param_5 & 0xffff);
  *param_12 = (char)uVar3;
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = LK_133BCC((uint)&T_02D07C,param_4);
    uVar7 = uVar7 & 0xff;
  }
  *param_13 = (char)uVar7;
  uVar5 = 0;
  if (!bVar1) {
    uVar5 = LK_133BCC((uint)&T_02D094,param_6 & 0xffff);
    uVar5 = uVar5 & 0xff;
  }
  *param_14 = (char)uVar5;
  if ((bVar1) || ((param_9 & 0xff) < 5)) {
    param_9 = 0;
  }
  *param_11 = (char)param_9;
  if (uVar5 < (param_9 & 0xff)) {
    uVar5 = param_9;
  }
  if ((uVar5 & 0xff) < uVar7) {
    uVar5 = uVar7;
  }
  puVar9 = (undefined *)((uVar5 & 0xff) * (uVar3 & 0xff));
  uVar7 = 0xff;
  if (puVar9 < &UNK_00007f81) {
    uVar7 = (uint)((ulonglong)((longlong)(int)puVar9 * 0x2000000) >> 0x20);
  }
  uVar8 = (undefined1)uVar7;
  *param_16 = uVar8;
  uVar2 = (int)(short)_DAT_fffebd38 + uVar2;
  puVar9 = (undefined *)(uVar2 & 0xffff);
  if (puVar9 < (undefined *)(uint)_DAT_fffebd38) {
    uVar2 = 0xffffffff;
    puVar9 = &DAT_0000ffff;
  }
  puVar6 = (undefined *)((uVar7 & 0xff) << 8);
  _DAT_fffebd38 = (short)puVar6;
  if (puVar9 < puVar6) {
    _DAT_fffebd38 = (short)uVar2;
  }
  uVar4 = (undefined1)(_DAT_fffebd38 >> 8);
  *param_17 = uVar4;
  if ((DAT_fffebd3b == DAT_fffebd3a) && ((DAT_fffebd3a != '\0' || ((uVar7 & 0xff) == 0)))) {
    uVar4 = uVar8;
  }
  if (param_8 != '\0') {
    puVar9 = (undefined *)((uVar3 & 0xff) * (param_9 & 0xff));
    uVar2 = 0xff;
    if (puVar9 < &UNK_00007f81) {
      uVar2 = (uint)((ulonglong)((longlong)(int)puVar9 * 0x2000000) >> 0x20);
    }
  }
  if (param_7 == '\0') {
    if (param_8 != '\0') {
      uVar4 = (char)uVar2;
    }
  }
  else {
    uVar4 = 0;
  }
  *param_10 = uVar4;
  DAT_fffebd3a = uVar8;
  DAT_fffebd3b = uVar4;
  return;
}

