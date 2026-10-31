
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bb00c(char param_1,ushort *param_2,char param_3,byte *param_4,char *param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined *puVar9;
  code *pcVar10;
  ushort local_3c;
  short sStack_2c;
  
  iVar6 = (uint)*param_4 * 0x40 + -0x2000;
  if (iVar6 < 0x8000) {
    local_3c = (short)iVar6 + 0x8000;
  }
  else {
    local_3c = 0xffff;
  }
  iVar6 = (uint)param_4[1] * 0x40 + -0x2000;
  uVar1 = 0xffff;
  if (iVar6 < 0x8000) {
    uVar1 = (short)iVar6 + 0x8000;
  }
  iVar6 = (((uint)_DAT_fffec88c * 0x80c0 >> 8) - 0x406000) + (uint)_DAT_fffec88c * -0x80;
  uVar2 = 0xffff;
  if ((iVar6 < -0x3f8000) && (uVar2 = 0, -0x408001 < iVar6)) {
    uVar2 = (short)iVar6 + 0x8000;
  }
  iVar6 = (((uint)_DAT_fffec88e * 0x80c0 >> 8) - 0x406000) + (uint)_DAT_fffec88e * -0x80;
  uVar3 = 0xffff;
  if ((iVar6 < -0x3f8000) && (uVar3 = 0, -0x408001 < iVar6)) {
    uVar3 = (short)iVar6 + 0x8000;
  }
  puVar9 = (undefined *)((uint)local_3c + (uint)uVar2);
  uVar2 = 0xffff;
  if ((puVar9 < &DAT_00018000) && (uVar2 = 0, &DAT_00007fff < puVar9)) {
    uVar2 = (short)puVar9 + 0x8000;
  }
  puVar9 = (undefined *)((uint)uVar1 + (uint)uVar3);
  uVar1 = 0xffff;
  if ((puVar9 < &DAT_00018000) && (uVar1 = 0, &DAT_00007fff < puVar9)) {
    uVar1 = (short)puVar9 + 0x8000;
  }
  if (param_1 == '\x02') {
    iVar7 = (uint)_DAT_fffec888 - (uint)*param_2;
    iVar6 = 0x7fff;
    if ((iVar7 < 0x8000) && (iVar6 = iVar7, iVar7 < -0x8000)) {
      iVar6 = -0x8000;
    }
    sStack_2c = (short)iVar6;
    iVar6 = (uint)_DAT_fffec88a - (uint)param_2[1];
    uVar8 = 0x7fff;
    if ((iVar6 < 0x8000) && (uVar8 = (undefined2)iVar6, iVar6 < -0x8000)) {
      uVar8 = 0x8000;
    }
  }
  else {
    sStack_2c = _DAT_fffec890;
    uVar8 = _DAT_fffec892;
  }
  if (param_3 == '\0') {
    sVar5 = (uVar2 >> 8) - (ushort)DAT_fffec894;
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
    sVar5 = (uVar1 >> 8) - (ushort)DAT_fffec895;
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
    pcVar10 = __sdiv32_r1_by_r0;
    iVar6 = __sdiv32_r1_by_r0((int)sStack_2c,10);
    *param_5 = (char)iVar6 + -0x80;
    cVar4 = (*pcVar10)();
    param_5[1] = cVar4 + -0x80;
  }
  DAT_fffec894 = (char)(uVar2 >> 8);
  DAT_fffec895 = (char)(uVar1 >> 8);
  _DAT_fffec88c = uVar2;
  _DAT_fffec88e = uVar1;
  _DAT_fffec890 = sStack_2c;
  _DAT_fffec892 = uVar8;
  _DAT_fffec888 = *param_2;
  _DAT_fffec88a = param_2[1];
  return;
}

