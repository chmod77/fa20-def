
void FUN_0009fc80(char param_1,uint param_2,uint param_3,uint param_4,uint param_5,byte *param_6,
                 byte param_7,undefined1 *param_8)

{
  uint uVar1;
  byte bVar4;
  short sVar3;
  undefined *puVar2;
  int iVar5;
  undefined *puVar6;
  short sVar8;
  undefined *puVar7;
  uint uVar9;
  
  if (DAT_fffec118 == '\0') {
    bVar4 = 0x82;
  }
  else {
    bVar4 = 0x80;
  }
  DAT_fffec118 = bVar4 <= param_7;
  if ((bool)DAT_fffec118) {
    bVar4 = 0xd;
  }
  else {
    bVar4 = 0x15;
  }
  uVar1 = (uint)(char)bVar4;
  if (param_1 == '\x01') {
    iVar5 = 0x33e - (param_2 & 0xffff);
    if (iVar5 < -0x8000) {
      iVar5 = -0x8000;
    }
    sVar8 = (ushort)param_6[1] * 10 + (short)iVar5;
    sVar3 = sVar8 + -0x500;
    if ((sVar8 < 0) && (-1 < sVar3)) {
      sVar3 = -0x8000;
    }
    iVar5 = -(int)sVar3;
    if (0x7fff < iVar5) {
      iVar5 = 0x7fff;
    }
    uVar1 = (int)(short)iVar5 + 0x938;
    puVar2 = (undefined *)(uVar1 & 0xffff);
    if ((int)uVar1 < 0) {
      puVar2 = (undefined *)0x0;
    }
    uVar1 = (uint)bVar4;
    puVar7 = puVar2 + uVar1 * 10;
    puVar6 = (undefined *)((uint)puVar7 & 0xffff);
    if (puVar6 < puVar2) {
      puVar7 = (undefined *)0xffffffff;
      puVar6 = &DAT_0000ffff;
    }
    puVar7 = puVar7 + -0x708;
    if (puVar6 < (undefined *)0x708) {
      puVar7 = (undefined *)0x0;
    }
    uVar9 = ((uint)puVar7 & 0xffff) * 0x3333;
    if (uVar9 < 0x1fe0001) {
      DAT_fffec114 = (undefined1)(uVar9 >> 0x11);
    }
    else {
      DAT_fffec114 = 0xff;
    }
  }
  if (param_1 == '\x02') {
    iVar5 = 0x33e - (param_4 & 0xffff);
    if (iVar5 < -0x8000) {
      iVar5 = -0x8000;
    }
    sVar8 = (ushort)*param_6 * 10 + (short)iVar5;
    sVar3 = sVar8 + -0x500;
    if ((sVar8 < 0) && (-1 < sVar3)) {
      sVar3 = -0x8000;
    }
    iVar5 = -(int)sVar3;
    if (0x7fff < iVar5) {
      iVar5 = 0x7fff;
    }
    uVar9 = (int)(short)iVar5 + 0x938;
    puVar2 = (undefined *)(uVar9 & 0xffff);
    if ((int)uVar9 < 0) {
      puVar2 = (undefined *)0x0;
    }
    puVar6 = puVar2 + uVar1 * 10;
    puVar7 = (undefined *)((uint)puVar6 & 0xffff);
    if (puVar7 < puVar2) {
      puVar6 = (undefined *)0xffffffff;
      puVar7 = &DAT_0000ffff;
    }
    puVar6 = puVar6 + -0x708;
    if (puVar7 < (undefined *)0x708) {
      puVar6 = (undefined *)0x0;
    }
    uVar9 = ((uint)puVar6 & 0xffff) * 0x3333;
    if (uVar9 < 0x1fe0001) {
      DAT_fffec115 = (undefined1)(uVar9 >> 0x11);
    }
    else {
      DAT_fffec115 = 0xff;
    }
  }
  if (param_1 == '\x03') {
    iVar5 = 0x33e - (param_3 & 0xffff);
    if (iVar5 < -0x8000) {
      iVar5 = -0x8000;
    }
    sVar8 = (ushort)*param_6 * 10 + (short)iVar5;
    sVar3 = sVar8 + -0x500;
    if ((sVar8 < 0) && (-1 < sVar3)) {
      sVar3 = -0x8000;
    }
    iVar5 = -(int)sVar3;
    if (0x7fff < iVar5) {
      iVar5 = 0x7fff;
    }
    uVar9 = (int)(short)iVar5 + 0x938;
    puVar2 = (undefined *)(uVar9 & 0xffff);
    if ((int)uVar9 < 0) {
      puVar2 = (undefined *)0x0;
    }
    puVar7 = puVar2 + uVar1 * 10;
    puVar6 = (undefined *)((uint)puVar7 & 0xffff);
    if (puVar6 < puVar2) {
      puVar7 = (undefined *)0xffffffff;
      puVar6 = &DAT_0000ffff;
    }
    puVar7 = puVar7 + -0x708;
    if (puVar6 < (undefined *)0x708) {
      puVar7 = (undefined *)0x0;
    }
    uVar9 = ((uint)puVar7 & 0xffff) * 0x3333;
    if (uVar9 < 0x1fe0001) {
      DAT_fffec116 = (undefined1)(uVar9 >> 0x11);
    }
    else {
      DAT_fffec116 = 0xff;
    }
  }
  if (param_1 == '\x04') {
    iVar5 = 0x33e - (param_5 & 0xffff);
    if (iVar5 < -0x8000) {
      iVar5 = -0x8000;
    }
    sVar8 = (ushort)param_6[1] * 10 + (short)iVar5;
    sVar3 = sVar8 + -0x500;
    if ((sVar8 < 0) && (-1 < sVar3)) {
      sVar3 = -0x8000;
    }
    iVar5 = -(int)sVar3;
    if (0x7fff < iVar5) {
      iVar5 = 0x7fff;
    }
    uVar9 = (int)(short)iVar5 + 0x938;
    puVar2 = (undefined *)(uVar9 & 0xffff);
    if ((int)uVar9 < 0) {
      puVar2 = (undefined *)0x0;
    }
    puVar7 = puVar2 + uVar1 * 10;
    puVar6 = (undefined *)((uint)puVar7 & 0xffff);
    if (puVar6 < puVar2) {
      puVar7 = (undefined *)0xffffffff;
      puVar6 = &DAT_0000ffff;
    }
    puVar7 = puVar7 + -0x708;
    if (puVar6 < (undefined *)0x708) {
      puVar7 = (undefined *)0x0;
    }
    uVar1 = ((uint)puVar7 & 0xffff) * 0x3333;
    if (uVar1 < 0x1fe0001) {
      DAT_fffec117 = (undefined1)(uVar1 >> 0x11);
    }
    else {
      DAT_fffec117 = 0xff;
    }
  }
  *param_8 = DAT_fffec114;
  param_8[1] = DAT_fffec115;
  param_8[2] = DAT_fffec116;
  param_8[3] = DAT_fffec117;
  return;
}

