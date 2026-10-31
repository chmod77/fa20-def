
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009de28(byte param_1,char param_2,char param_3,uint param_4,ushort param_5,char param_6,
                 byte param_7,ushort param_8,uint param_9,byte param_10,undefined2 *param_11,
                 char *param_12)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char cVar6;
  short sVar5;
  undefined *puVar7;
  undefined *puVar8;
  short sVar9;
  
  sVar9 = (param_5 & 0xff) + (short)param_6 + (short)param_3 + -0x20;
  bVar2 = param_7 <= DAT_fffec061;
  cVar6 = '\x01';
  if (bVar2) {
    cVar6 = DAT_fffec062;
  }
  if (param_7 == 0) {
    cVar6 = '\0';
  }
  bVar1 = false;
  if (cVar6 == '\0') {
    _DAT_fffec05e = 0;
  }
  else {
    bVar1 = _DAT_fffec05e < 0xc;
    _DAT_fffec05e = (param_8 & 0xff) + _DAT_fffec05e;
    if (_DAT_fffec05e < (param_8 & 0xff)) {
      _DAT_fffec05e = 0xffff;
    }
  }
  sVar5 = -0x8000;
  if (-0x8021 < (int)((int)sVar9 - (uint)_DAT_fffec05c)) {
    sVar5 = (short)((int)sVar9 - (uint)_DAT_fffec05c) + 0x20;
  }
  DAT_fffec062 = cVar6;
  if (((sVar5 < 0x15) || (param_7 == 0)) || (!bVar1)) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = LK_135164((uint)&T_02D9EC,param_9 & 0xff);
  }
  puVar7 = (undefined *)((uVar3 & 0xffff) + (uint)_DAT_fffec05c);
  puVar8 = (undefined *)0xffffffff;
  if ((puVar7 < &DAT_00010020) && (puVar8 = (undefined *)0x0, &UNK_0000001f < puVar7)) {
    puVar8 = puVar7 + -0x20;
  }
  cVar6 = DAT_fffec060;
  if (!bVar2) {
    cVar6 = param_1 - 0x20;
  }
  *param_12 = cVar6;
  if (param_7 == 0) {
    sVar5 = (ushort)param_1 + (ushort)param_10 + (short)param_2 + (short)param_3 + -0xa0;
  }
  else {
    sVar5 = (short)cVar6;
  }
  iVar4 = __sdiv32_r1_by_r0((param_4 & 0xff) * (int)(short)(sVar5 - sVar9),0xff);
  iVar4 = (int)(short)((short)iVar4 + sVar9);
  uVar3 = 0;
  if (-0x21 < iVar4) {
    uVar3 = iVar4 + 0x20;
  }
  _DAT_fffec05c = (short)uVar3;
  if (((uint)puVar8 & 0xffff) <= (uVar3 & 0xffff)) {
    _DAT_fffec05c = (short)puVar8;
  }
  *param_11 = _DAT_fffec05c;
  DAT_fffec061 = param_7;
  DAT_fffec060 = cVar6;
  return;
}

