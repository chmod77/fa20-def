
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00099630(uint param_1,uint param_2,char param_3,ushort param_4,char param_5,
                 undefined4 param_6,byte param_7,short param_8,undefined4 param_9,char param_10,
                 undefined2 *param_11)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int extraout_r2;
  int iVar4;
  undefined2 uVar5;
  code *pcVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  
  bVar2 = true;
  if (((param_3 != '\0') && (-0x9b < param_8)) && (param_10 == '\0')) {
    bVar2 = false;
  }
  puVar10 = (undefined *)(_DAT_fffebfac + 0x404d);
  uVar7 = 0xffffffff;
  if ((puVar10 < &DAT_00014000) && (uVar7 = 0, (undefined *)0x3fff < puVar10)) {
    uVar7 = _DAT_fffebfac + 0x4d;
  }
  uVar5 = (undefined2)uVar7;
  if (DAT_fffebfb1 < param_7) {
    pcVar6 = __udiv32_r1_by_r0;
    __udiv32_r1_by_r0((uVar7 & 0xffff) * 0xff,0xff);
    uVar7 = (*pcVar6)();
    iVar4 = extraout_r2 - (uVar7 & 0xffff);
    uVar7 = 0xffffffff;
    if (iVar4 < (int)&DAT_0000c000) {
      uVar7 = iVar4 + 0x4000;
    }
    uVar5 = (undefined2)uVar7;
    if ((uVar7 & 0xffff) < 0x4001) goto LAB_00099718;
  }
  else if ((uVar7 & 0xffff) < 0x4000) goto LAB_00099718;
  uVar5 = 0x4000;
LAB_00099718:
  if (((param_1 & 0xff) <=
       (uint)((ulonglong)((longlong)(int)(param_2 & 0xffff) * 0x2000000) >> 0x20)) ||
     (cVar8 = '\x01', param_5 == '\0')) {
    cVar8 = DAT_fffebfb2;
  }
  if ((bVar2) || (DAT_fffebfb0 != '\0')) {
    cVar8 = '\0';
  }
  bVar11 = false;
  if (cVar8 == '\0') {
    DAT_fffebfb6 = '\0';
    cVar9 = DAT_fffebfb6;
  }
  else {
    bVar11 = DAT_fffebfb6 == '\0';
    cVar9 = -1;
    if (DAT_fffebfb6 != -1) {
      cVar9 = DAT_fffebfb6 + '\x01';
    }
  }
  DAT_fffebfb6 = cVar9;
  bVar1 = bVar11 < DAT_fffebfb4;
  cVar9 = '\x01';
  if (!bVar1) {
    cVar9 = DAT_fffebfae;
  }
  if ((bVar2) || (DAT_fffebfaf != '\0')) {
    cVar9 = '\0';
  }
  bVar12 = false;
  if (cVar9 == '\0') {
    DAT_fffebfb5 = '\0';
    cVar3 = DAT_fffebfb5;
  }
  else {
    bVar12 = DAT_fffebfb5 == '\0';
    cVar3 = -1;
    if (DAT_fffebfb5 != -1) {
      cVar3 = DAT_fffebfb5 + '\x01';
    }
  }
  DAT_fffebfb5 = cVar3;
  DAT_fffebfaf = bVar12 < DAT_fffebfb3;
  DAT_fffebfae = cVar9;
  DAT_fffebfb2 = cVar8;
  if ((bVar2) || (bVar11 != false)) {
    uVar5 = 0x4000;
  }
  else if (bVar12 != false) {
    uVar7 = LK_133BCC((uint)&T_02D5F0,(uint)param_4);
    uVar5 = (undefined2)((uVar7 & 0xff) << 7);
  }
  *param_11 = uVar5;
  DAT_fffebfb4 = bVar11;
  DAT_fffebfb3 = bVar12;
  DAT_fffebfb1 = param_7;
  _DAT_fffebfac = uVar5;
  DAT_fffebfb0 = bVar1;
  return;
}

