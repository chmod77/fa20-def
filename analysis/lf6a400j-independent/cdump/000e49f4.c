
void FUN_000e49f4(uint param_1,ushort param_2,byte param_3,ushort param_4,uint param_5,short param_6
                 ,undefined4 param_7,byte param_8,char param_9,char param_10,char param_11,
                 char param_12,char param_13,ushort param_14,char param_15,byte param_16,
                 undefined1 *param_17)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar8;
  undefined *puVar7;
  int iVar9;
  uint uVar10;
  
  uVar10 = (uint)param_4;
  cVar6 = '\0';
  if (DAT_fffed2e6 == '\0') {
    if ((0x4f < param_3) && (param_3 < 0xda)) goto LAB_000e4aa6;
  }
  else if ((0x47 < param_3) && (param_3 < 0xe2)) {
LAB_000e4aa6:
    cVar6 = '\x01';
  }
  bVar8 = DAT_fffed2e8 == '\0';
  DAT_fffed2e8 = false;
  if (bVar8) {
    if (uVar10 < 0x4601) goto LAB_000e4aea;
  }
  else if ((-0x201 < (int)uVar10) && (param_4 < 0x4801)) {
LAB_000e4aea:
    DAT_fffed2e8 = true;
  }
  bVar8 = DAT_fffed2e5 == '\0';
  DAT_fffed2e5 = false;
  if (bVar8) {
    if (0x33 < uVar10) goto LAB_000e4b2c;
  }
  else if (((int)uVar10 < -0x200) || (0x233 < param_4)) goto LAB_000e4b2c;
  DAT_fffed2e5 = true;
LAB_000e4b2c:
  bVar8 = true;
  if ((!(bool)DAT_fffed2e5) && (!(bool)DAT_fffed2e8)) {
    bVar8 = false;
  }
  DAT_fffed2e6 = cVar6;
  uVar10 = LK_133F40((uint)&T_02F1A8,param_1);
  puVar7 = (undefined *)(uVar10 & 0xffff);
  if (DAT_fffed2e4 == '\0') {
    DAT_fffed2e4 = false;
    if ((puVar7 <= (undefined *)(param_5 & 0xffff)) &&
       ((undefined *)(param_5 & 0xffff) < &UNK_0000ccce)) {
      DAT_fffed2e4 = true;
    }
  }
  else {
    puVar4 = (undefined *)0x0;
    if ((undefined *)0xa3c < puVar7) {
      puVar4 = puVar7 + -0xa3d;
    }
    DAT_fffed2e4 = false;
    if ((puVar4 <= (undefined *)(param_5 & 0xffff)) &&
       ((undefined *)(param_5 & 0xffff) < &UNK_0000d70b)) {
      DAT_fffed2e4 = true;
    }
  }
  iVar9 = (int)param_6;
  if (iVar9 < 0) {
    iVar9 = -iVar9;
    if (iVar9 < 0) {
      iVar9 = 0;
    }
  }
  else if (iVar9 < 0) {
    iVar9 = 0;
  }
  DAT_fffed2e7 = (iVar9 + 1U & 0xffff) < 0xc6;
  bVar1 = false;
  if ((((param_10 == '\0') && (param_9 == '\x04')) ||
      ((param_10 != '\0' && ((2 < param_8 && (param_8 < 6)))))) && (0xbccc < param_2)) {
    bVar1 = true;
  }
  bVar2 = false;
  if (((param_13 == '\0') && (param_11 == '\0')) && (param_12 == '\0')) {
    bVar2 = true;
  }
  bVar3 = false;
  if (((param_14 < 500) || (param_15 == '\0')) && (param_16 < 0x11)) {
    bVar3 = true;
  }
  uVar5 = 0;
  if (((((bool)DAT_fffed2e4) && ((bool)DAT_fffed2e7)) &&
      ((bVar8 && (((cVar6 != '\0' && (bVar1)) && (bVar2)))))) && (bVar3)) {
    uVar5 = 1;
  }
  *param_17 = uVar5;
  return;
}

