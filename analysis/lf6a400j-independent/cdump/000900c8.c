
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000900c8(char param_1,ushort param_2,char param_3,char param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8,char param_9,uint param_10,ushort *param_11)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  code *pcVar6;
  ushort uVar7;
  ushort uVar8;
  char cVar9;
  code *pcVar10;
  undefined *puVar11;
  
  param_5 = param_5 & 0xffff;
  uVar2 = LK_1361C8((uint)&T_02D0E4,param_6 & 0xff,param_5);
  puVar11 = (undefined *)0xffffffff;
  if ((int)-(param_8 & 0xffff) < 0) {
    puVar11 = &DAT_00010000 + (-(param_8 & 0xffff) & 0xffff);
  }
  pcVar5 = LK_1361C8;
  uVar3 = LK_1361C8((uint)&T_02D0D0,param_6 & 0xff,param_5);
  uVar4 = LK_13503C((uint)&T_02D0F8,param_7 & 0xffff);
  uVar3 = (((uint)puVar11 & 0xffff) * (uVar3 & 0xffff) >> 0x10) * (uVar4 & 0xff);
  puVar11 = &DAT_0000ffff;
  if (uVar3 < 0x7fff81) {
    puVar11 = (undefined *)(uVar3 >> 7);
  }
  pcVar6 = (code *)(puVar11 + ((param_8 & 0xffff) * (uVar2 & 0xffff) >> 0x10));
  if (((uint)pcVar6 & 0xffff) < ((uint)puVar11 & 0xffff)) {
    pcVar6 = (code *)0xffffffff;
  }
  if (param_9 != '\0') {
    pcVar5 = pcVar6 + param_10._2_2_;
    if (((uint)pcVar5 & 0xffff) < (param_10 & 0xffff)) {
      pcVar5 = (code *)0xffffffff;
    }
  }
  bVar1 = true;
  if ((param_1 != '\x02') && (param_1 != '\x03')) {
    bVar1 = false;
  }
  uVar7 = _DAT_fffebd6a - 1;
  puVar11 = (undefined *)(uint)uVar7;
  if (puVar11 < &DAT_0000ffff) {
    uVar7 = 0xffff;
    puVar11 = &DAT_0000ffff;
  }
  pcVar10 = (code *)0x0;
  if (0xfffe < _DAT_fffebd6a) {
    pcVar10 = (code *)((short)_DAT_fffebd6a + 1);
  }
  if (((800 < param_2) || (param_3 != '\0' || DAT_fffebd6c < 0x28)) || (cVar9 = '\x01', !bVar1)) {
    cVar9 = DAT_fffebd6d;
  }
  if (!bVar1) {
    cVar9 = '\0';
  }
  if ((param_4 == '\0') && (cVar9 == '\0')) {
    pcVar6 = (code *)LK_133F40((uint)&T_02D0C4,param_5);
  }
  else if (param_9 != '\0') {
    pcVar6 = pcVar5;
  }
  if (((uint)pcVar6 & 0xffff) <= ((uint)pcVar10 & 0xffff)) {
    pcVar6 = pcVar10;
  }
  if ((undefined *)((uint)pcVar6 & 0xffff) < puVar11) {
    uVar7 = (ushort)pcVar6;
  }
  uVar8 = uVar7;
  if (!bVar1) {
    uVar8 = _DAT_fffebd68;
  }
  *param_11 = uVar8;
  if (param_3 != '\0') {
    DAT_fffebd6c = '\0';
  }
  else {
    DAT_fffebd6c = DAT_fffebd6c + 1;
    if (DAT_fffebd6c == '\0') {
      DAT_fffebd6c = -1;
    }
  }
  _DAT_fffebd68 = uVar8;
  _DAT_fffebd6a = uVar7;
  DAT_fffebd6d = cVar9;
  return;
}

