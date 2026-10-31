
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ae058(char param_1,byte param_2,ushort param_3,uint param_4,char param_5,uint param_6,
                 char param_7,uint param_8,char param_9,ushort *param_10,undefined1 *param_11,
                 undefined1 *param_12,undefined1 *param_13)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  undefined *puVar8;
  uint uVar9;
  float fVar10;
  
  bVar1 = false;
  if (((param_1 == '\x03') && (param_2 < 0x50)) && (param_9 == '\x04')) {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = LK_134FA8((uint)&T_02DF80,(uint)param_2);
    DAT_fffec587 = (undefined1)uVar3;
    uVar4 = LK_133B38((uint)&T_02DF8C,param_4 & 0xff);
    DAT_fffec588 = (undefined1)uVar4;
    if (param_5 == '\0') {
      uVar5 = LK_133BCC((uint)&T_02DF98,param_6 & 0xffff);
    }
    else {
      uVar5 = LK_133BCC((uint)&T_02DFA4,param_6 & 0xffff);
    }
    DAT_fffec586 = (undefined1)uVar5;
    uVar9 = (param_8 & 0xffff) * 0xb66;
    uVar6 = uVar9 + 0xfa4d0000;
    iVar2 = -(uint)(uVar9 < uVar6);
    if ((0 < iVar2) || ((iVar2 == 0 && (0x7fffffff < uVar6)))) {
      uVar6 = 0x7fffffff;
    }
    fVar10 = (float)(int)uVar6 * 47554.0 * 48867.0 * (float)param_3 * 64.0 * 6.4108865e-19;
    uVar6 = 0xffffffff;
    if ((fVar10 <= 209712.0) && (uVar6 = 0, 0.0 <= fVar10)) {
      uVar6 = (uint)(fVar10 * 0.3125);
    }
    uVar5 = (uVar5 & 0xff) * (uVar6 & 0xffff);
    if (uVar5 < 0x3fffc1) {
      puVar8 = (undefined *)(uVar5 >> 6);
    }
    else {
      puVar8 = &DAT_0000ffff;
    }
    uVar3 = (uVar3 & 0xff) * ((uint)puVar8 & 0xffff);
    puVar8 = &DAT_0000ffff;
    if (uVar3 < 0x7fff81) {
      puVar8 = (undefined *)(uVar3 >> 7);
    }
    uVar3 = (uVar4 & 0xff) * ((uint)puVar8 & 0xffff);
    puVar8 = &DAT_0000ffff;
    if (uVar3 < 0x7fff81) {
      puVar8 = (undefined *)(uVar3 >> 7);
    }
    _DAT_fffec584 = (ushort)(int)((float)((uint)puVar8 & 0xffff) * 0.99999994);
  }
  uVar7 = 0;
  if (bVar1) {
    uVar7 = _DAT_fffec584;
  }
  *param_11 = DAT_fffec586;
  *param_12 = DAT_fffec587;
  *param_13 = DAT_fffec588;
  if ((param_7 == DAT_fffec58c) && (uVar7 <= _DAT_fffec58a)) {
    uVar7 = _DAT_fffec58a;
  }
  if (!bVar1) {
    uVar7 = 0;
  }
  *param_10 = uVar7;
  _DAT_fffec58a = uVar7;
  DAT_fffec58c = param_7;
  return;
}

