
void FUN_001080d8(uint param_1,ushort param_2,short param_3,char param_4,char param_5,
                 undefined1 *param_6,undefined2 *param_7)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  undefined *puVar4;
  ushort uVar6;
  uint uVar5;
  short sVar7;
  int iVar8;
  
  bVar1 = false;
  if ((param_4 == '\0') && (param_5 != '\0')) {
    bVar1 = true;
  }
  if (bVar1) {
    uVar6 = param_2 + param_3;
    if (uVar6 < param_2) {
      uVar6 = 0xffff;
    }
    puVar4 = (undefined *)__udiv32_r1_by_r0((uint)uVar6 * 9,0x12);
    if (&DAT_0000ffff < puVar4) {
      puVar4 = &DAT_0000ffff;
    }
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  iVar8 = (param_1 & 0xffff) - ((uint)puVar4 & 0xffff);
  sVar7 = 0x7fff;
  if ((iVar8 < 0x8000) && (sVar7 = (short)iVar8, iVar8 < -0x8000)) {
    sVar7 = -0x8000;
  }
  uVar5 = (uint)sVar7;
  if ((int)uVar5 < 0) {
    uVar5 = -uVar5;
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
  }
  else if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  bVar2 = false;
  if ((bVar1) && ((uVar5 & 0xffff) < 0xb2)) {
    bVar2 = true;
  }
  if (bVar2) {
    *param_6 = 0;
  }
  else {
    *param_6 = 0x1d < DAT_fffedb3c;
  }
  bVar2 = false;
  if ((bVar1) && ((uVar5 & 0xffff) < 0xb2)) {
    bVar2 = true;
  }
  if (bVar2) {
    DAT_fffedb3c = '\0';
  }
  else {
    bVar3 = 0xfe;
    if (DAT_fffedb3c != 0xff) {
      bVar3 = DAT_fffedb3c;
    }
    DAT_fffedb3c = bVar3 + 1;
  }
  *param_7 = (short)puVar4;
  return;
}

