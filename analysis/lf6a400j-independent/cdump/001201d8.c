
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001201d8(char param_1,char param_2,uint param_3,uint param_4,char param_5,char param_6,
                 uint param_7,ushort param_8,ushort param_9,short param_10,undefined2 *param_11,
                 undefined2 *param_12)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  undefined *puVar9;
  
  bVar2 = false;
  if ((param_1 != '\0') && (param_2 != '\0')) {
    bVar2 = true;
  }
  uVar6 = (param_3 & 0xffff) - (param_4 & 0xffff);
  if ((int)uVar6 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = uVar6 & 0xffff;
    if ((int)uVar6 < 0) {
      uVar8 = 0;
    }
  }
  bVar1 = false;
  if (((param_1 == '\0') && ((int)(uint)_DAT_fffee16a < (int)uVar6)) &&
     (uVar5 = (uint)_DAT_fffee16a, uVar6 = LK_133F40((uint)&T_02FEAC,param_3 & 0xffff),
     uVar5 < (uVar6 & 0xffff))) {
    bVar1 = true;
  }
  if ((param_1 == '\0') || (param_2 == '\0')) {
    puVar9 = (undefined *)(int)_DAT_fffee168;
  }
  else {
    iVar3 = __sdiv32_r1_by_r0((short)((param_8 & 0xff) - (param_9 & 0xff)) * 0xcd9,100);
    uVar6 = (param_7 & 0xffff) - iVar3;
    if ((int)uVar6 < 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = &DAT_0000ffff;
      if (((int)uVar6 < (int)&DAT_00010000) &&
         (puVar9 = (undefined *)(uVar6 & 0xffff), (int)uVar6 < 0)) {
        puVar9 = (undefined *)0x0;
      }
    }
  }
  *param_12 = (short)puVar9;
  uVar7 = (ushort)uVar8;
  if (DAT_fffee16d == '\0') {
    uVar7 = _DAT_fffee16a;
  }
  if (bVar1) {
    if (DAT_fffee171 == '\0') {
      DAT_fffee170 = '\0';
      DAT_fffee171 = '\x01';
    }
    if (DAT_fffee170 != '\0') {
      FUN_0016b4d8(&DAT_ffff19f2,uVar8,0x51f);
      uVar7 = _DAT_ffff19f2;
    }
    _DAT_ffff19f2 = uVar7;
    _DAT_fffee166 = _DAT_ffff19f2;
    DAT_fffee170 = '\x01';
  }
  else {
    DAT_fffee171 = '\0';
  }
  if (bVar1) {
    if (bVar1) {
      uVar8 = (uint)(short)_DAT_fffee166;
    }
  }
  else {
    uVar8 = (uint)(short)_DAT_fffee16a;
  }
  if ((param_2 == '\0') && (param_1 != '\0')) {
    uVar8 = (uint)(short)_DAT_fffee16a;
  }
  puVar4 = puVar9;
  if (DAT_fffee16c == '\0') {
    puVar4 = (undefined *)(int)(short)_DAT_fffee16a;
  }
  if (bVar2) {
    if (DAT_fffee16f == '\0') {
      DAT_fffee16e = '\0';
      DAT_fffee16f = '\x01';
    }
    if (DAT_fffee16e == '\0') {
      _DAT_ffff19f0 = (short)puVar4;
    }
    else {
      FUN_0016b4d8(&DAT_ffff19f0,puVar9,&DAT_00004ccd);
    }
    _DAT_fffee164 = _DAT_ffff19f0;
    DAT_fffee16e = '\x01';
  }
  else {
    DAT_fffee16f = '\0';
  }
  if (param_5 == '\0') {
    if (param_6 == '\0') {
      if (bVar2) {
        uVar8 = (uint)_DAT_fffee164;
      }
    }
    else {
      uVar8 = 0x3200;
    }
  }
  else {
    uVar8 = -(int)param_10;
    if ((int)uVar8 < 0) {
      uVar8 = 0;
    }
  }
  *param_11 = (short)uVar8;
  _DAT_fffee16a = (short)uVar8;
  _DAT_fffee168 = (short)puVar9;
  DAT_fffee16d = bVar1;
  DAT_fffee16c = bVar2;
  return;
}

