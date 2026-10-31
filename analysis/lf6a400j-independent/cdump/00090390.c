
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00090390(char param_1,ushort param_2,char param_3,char param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8,ushort *param_9)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  ushort uVar6;
  ushort uVar7;
  undefined *puVar8;
  undefined *puStack_30;
  
  bVar1 = true;
  param_5 = param_5 & 0xffff;
  if ((param_1 != '\x02') && (param_1 != '\x03')) {
    bVar1 = false;
  }
  uVar6 = _DAT_fffebd76 - 1;
  puStack_30 = (undefined *)(uint)uVar6;
  if (puStack_30 < &DAT_0000ffff) {
    uVar6 = 0xffff;
    puStack_30 = &DAT_0000ffff;
  }
  puVar8 = (undefined *)0x0;
  if (0xfffe < _DAT_fffebd76) {
    puVar8 = (undefined *)((short)_DAT_fffebd76 + 1);
  }
  if (((800 < param_2) || (param_3 != '\0' || DAT_fffebd78 < 0x28)) || (cVar5 = '\x01', !bVar1)) {
    cVar5 = DAT_fffebd79;
  }
  if (!bVar1) {
    cVar5 = '\0';
  }
  if ((param_4 == '\0') && (cVar5 == '\0')) {
    puVar2 = (undefined *)LK_133F40((uint)&T_02D138,param_5);
  }
  else {
    puVar2 = (undefined *)0xffffffff;
    if ((int)-(param_8 & 0xffff) < 0) {
      puVar2 = &DAT_00010000 + (-(param_8 & 0xffff) & 0xffff);
    }
    uVar3 = LK_1361C8((uint)&T_02D158,param_6 & 0xff,param_5);
    uVar4 = LK_1361C8((uint)&T_02D144,param_6 & 0xff,param_5);
    uVar4 = ((uint)puVar2 & 0xffff) * (uVar4 & 0xffff) >> 0x10;
    uVar3 = uVar4 + ((param_8 & 0xffff) * (uVar3 & 0xffff) >> 0x10);
    if ((uVar3 & 0xffff) < uVar4) {
      uVar3 = 0xffffffff;
    }
    uVar4 = LK_13503C((uint)&T_02D16C,param_7 & 0xffff);
    uVar3 = (uVar3 & 0xffff) * (uVar4 & 0xff);
    if (uVar3 < 0x7fff81) {
      puVar2 = (undefined *)(uVar3 >> 7);
    }
    else {
      puVar2 = &DAT_0000ffff;
    }
  }
  if (((uint)puVar2 & 0xffff) <= ((uint)puVar8 & 0xffff)) {
    puVar2 = puVar8;
  }
  if ((undefined *)((uint)puVar2 & 0xffff) < puStack_30) {
    uVar6 = (ushort)puVar2;
  }
  uVar7 = uVar6;
  if (!bVar1) {
    uVar7 = _DAT_fffebd74;
  }
  *param_9 = uVar7;
  if (param_3 != '\0') {
    DAT_fffebd78 = '\0';
  }
  else {
    DAT_fffebd78 = DAT_fffebd78 + 1;
    if (DAT_fffebd78 == '\0') {
      DAT_fffebd78 = -1;
    }
  }
  _DAT_fffebd74 = uVar7;
  _DAT_fffebd76 = uVar6;
  DAT_fffebd79 = cVar5;
  return;
}

