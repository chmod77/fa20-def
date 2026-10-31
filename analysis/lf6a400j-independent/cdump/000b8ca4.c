
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b8ca4(char param_1,ushort *param_2,char param_3,byte *param_4,char *param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  undefined *puVar8;
  ushort local_3c;
  short sStack_2c;
  
  iVar6 = (uint)*param_4 * 0x1a + -0xd00;
  if (iVar6 < 0x8000) {
    local_3c = (short)iVar6 + 0x8000;
  }
  else {
    local_3c = 0xffff;
  }
  iVar6 = (uint)param_4[1] * 0x1a + -0xd00;
  uVar1 = 0xffff;
  if (iVar6 < 0x8000) {
    uVar1 = (short)iVar6 + 0x8000;
  }
  iVar6 = (((uint)_DAT_fffec82c * 0x80e6 >> 8) - 0x407300) + (uint)_DAT_fffec82c * -0x80;
  if (iVar6 < -0x3f8000) {
    if (iVar6 < -0x408000) {
      uVar3 = 0;
    }
    else {
      uVar3 = (short)iVar6 + 0x8000;
    }
  }
  else {
    uVar3 = 0xffff;
  }
  iVar6 = (((uint)_DAT_fffec82e * 0x80e6 >> 8) - 0x407300) + (uint)_DAT_fffec82e * -0x80;
  uVar2 = 0xffff;
  if ((iVar6 < -0x3f8000) && (uVar2 = 0, -0x408001 < iVar6)) {
    uVar2 = (short)iVar6 + 0x8000;
  }
  puVar8 = (undefined *)((uint)local_3c + (uint)uVar3);
  uVar3 = 0xffff;
  if ((puVar8 < &DAT_00018000) && (uVar3 = 0, &DAT_00007fff < puVar8)) {
    uVar3 = (short)puVar8 + 0x8000;
  }
  puVar8 = (undefined *)((uint)uVar1 + (uint)uVar2);
  uVar1 = 0xffff;
  if ((puVar8 < &DAT_00018000) && (uVar1 = 0, &DAT_00007fff < puVar8)) {
    uVar1 = (short)puVar8 + 0x8000;
  }
  if (param_1 == '\x02') {
    iVar6 = (uint)_DAT_fffec828 - (uint)*param_2;
    if (iVar6 < 0x8000) {
      if (iVar6 < -0x8000) {
        iVar6 = -0x8000;
      }
    }
    else {
      iVar6 = 0x7fff;
    }
    sStack_2c = (short)iVar6;
    iVar6 = (uint)_DAT_fffec82a - (uint)param_2[1];
    sVar7 = 0x7fff;
    if ((iVar6 < 0x8000) && (sVar7 = (short)iVar6, iVar6 < -0x8000)) {
      sVar7 = -0x8000;
    }
  }
  else {
    sStack_2c = _DAT_fffec830;
    sVar7 = _DAT_fffec832;
  }
  if (param_3 == '\0') {
    sVar5 = (uVar3 >> 8) - (ushort)DAT_fffec834;
    if (sVar5 < 0x80) {
      if (sVar5 < -0x80) {
        *param_5 = '\0';
      }
      else {
        *param_5 = (char)sVar5 + -0x80;
      }
    }
    else {
      *param_5 = -1;
    }
    sVar5 = (uVar1 >> 8) - (ushort)DAT_fffec835;
    if (sVar5 < 0x80) {
      if (sVar5 < -0x80) {
        param_5[1] = '\0';
      }
      else {
        param_5[1] = (char)sVar5 + -0x80;
      }
    }
    else {
      param_5[1] = -1;
    }
  }
  else {
    iVar6 = __sdiv32_r1_by_r0((int)sStack_2c,10);
    sVar4 = (short)iVar6 + 0x80;
    sVar5 = 0xff;
    if ((sVar4 < 0x100) && (sVar5 = sVar4, sVar4 < 0)) {
      sVar5 = 0;
    }
    *param_5 = (char)sVar5;
    iVar6 = __sdiv32_r1_by_r0((int)sVar7,10);
    sVar4 = (short)iVar6 + 0x80;
    sVar5 = 0xff;
    if ((sVar4 < 0x100) && (sVar5 = sVar4, sVar4 < 0)) {
      sVar5 = 0;
    }
    param_5[1] = (char)sVar5;
  }
  DAT_fffec834 = (char)(uVar3 >> 8);
  DAT_fffec835 = (char)(uVar1 >> 8);
  _DAT_fffec82c = uVar3;
  _DAT_fffec82e = uVar1;
  _DAT_fffec830 = sStack_2c;
  _DAT_fffec832 = sVar7;
  _DAT_fffec828 = *param_2;
  _DAT_fffec82a = param_2[1];
  return;
}

