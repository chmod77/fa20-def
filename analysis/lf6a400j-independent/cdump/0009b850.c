
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009b850(char param_1,uint param_2,ushort param_3,byte param_4,uint param_5,uint param_6,
                 ushort param_7,char param_8,char param_9,byte param_10,char param_11,char param_12,
                 undefined1 *param_13,ushort *param_14)

{
  uint uVar1;
  int iVar2;
  short sVar4;
  uint uVar3;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  ushort uVar9;
  uint uStack_34;
  
  if (param_1 != '\x03') {
    DAT_fffec016 = '\0';
    goto LAB_0009b9ec;
  }
  if (DAT_fffec016 == '\0') {
    _DAT_fffec014 = 0;
    DAT_fffec016 = '\x01';
  }
  uStack_34 = LK_134560((uint)&T_02D89C,param_2 & 0xff);
  if (uStack_34 < 0x100000) {
    uStack_34 = uStack_34 << 0xc;
  }
  else {
    uStack_34 = 0xffffffff;
  }
  sVar4 = (param_7 & 0xff) - (short)param_8;
  if (sVar4 < 0) {
    sVar4 = 0;
  }
  if (param_6 < uStack_34) {
LAB_0009b90e:
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar3 = 0;
    if (4 < _DAT_fffec014) {
      uVar3 = (int)(short)_DAT_fffec014 - 5;
    }
    puVar6 = (undefined *)(uVar3 & 0xffff);
    if (puVar6 == (undefined *)0x0) goto LAB_0009b90e;
  }
  if ((((param_6 < uStack_34) && (param_9 == '\0')) && (4 < param_10)) &&
     ((param_11 == '\0' && (param_12 == '\x01')))) {
    uVar3 = LK_13869C((uint)&T_02D8A8,(uint)param_3,(uint)param_4);
    uVar1 = LK_133BCC((uint)&T_02D8BC,param_5 & 0xffff);
    puVar6 = (undefined *)((short)_DAT_fffec014 + 0xb3);
    puVar5 = (undefined *)((uint)puVar6 & 0xffff);
    if (puVar5 < (undefined *)(uint)_DAT_fffec014) {
      puVar6 = (undefined *)0xffffffff;
      puVar5 = &DAT_0000ffff;
    }
    puVar8 = (undefined *)((uVar3 & 0xff) * (uVar1 & 0xff) >> 1);
    if (puVar8 <= puVar5) {
      puVar6 = puVar8;
    }
  }
  puVar7 = &DAT_fffec010;
  uVar9 = (ushort)puVar6;
  _DAT_fffec010 = uVar9;
  iVar2 = __sdiv32_r1_by_r0((uint)puVar6 & 0xffff,0x5a);
  sVar4 = (short)((uint)((short)((short)iVar2 - sVar4) * 0xb4) >> 8);
  _DAT_fffec014 = uVar9;
  if (sVar4 < 0) {
    puVar7[2] = 0;
  }
  else if (sVar4 < 0x100) {
    if (sVar4 < 0) {
      sVar4 = 0;
    }
    DAT_fffec012 = (undefined1)sVar4;
  }
  else {
    DAT_fffec012 = 0xff;
  }
LAB_0009b9ec:
  *param_14 = _DAT_fffec010;
  if (param_1 != '\x03') {
    *param_13 = 0;
  }
  else {
    *param_13 = DAT_fffec012;
  }
  return;
}

