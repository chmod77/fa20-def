
void FUN_0009ae9c(char param_1,uint param_2,uint param_3,ushort param_4,uint param_5,char *param_6)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  
  cVar9 = '\x01';
  if (param_1 == '\0') {
    DAT_fffebff1 = '\0';
    cVar1 = DAT_fffebff1;
    cVar9 = DAT_fffebff2;
  }
  else {
    cVar1 = -1;
    if (DAT_fffebff1 != -1) {
      cVar1 = DAT_fffebff1 + '\x01';
    }
  }
  DAT_fffebff1 = cVar1;
  if (param_1 == '\0' && 0x40 < DAT_fffebff0) {
    cVar9 = '\0';
  }
  if (cVar9 == '\0') {
    *param_6 = -0x80;
  }
  else {
    iVar7 = -(param_5 & 0xffff);
    if (iVar7 < 0) {
      uVar8 = (int)&DAT_00010000 + iVar7;
    }
    else {
      uVar8 = 0xffffffff;
    }
    uVar2 = LK_138984((uint)&T_02D824,param_2 & 0xffff,param_3 & 0xffff);
    iVar7 = ((param_5 & 0xffff) * (uVar2 & 0xff) >> 8) - ((int)(param_5 & 0xffff) >> 1);
    uVar2 = 0xffffffff;
    if (iVar7 < 0x8000) {
      uVar2 = iVar7 - 0x8000;
    }
    uVar3 = LK_138984((uint)&T_02D810,param_2 & 0xffff,param_3 & 0xffff);
    iVar7 = ((uVar8 & 0xffff) * (uVar3 & 0xff) >> 8) - ((int)(uVar8 & 0xffff) >> 1);
    uVar8 = 0xffffffff;
    if (iVar7 < 0x8000) {
      uVar8 = iVar7 - 0x8000;
    }
    puVar5 = (undefined *)((uVar8 & 0xffff) + (uVar2 & 0xffff));
    puVar4 = (undefined *)0xffffffff;
    if ((puVar5 < &DAT_00018000) && (puVar4 = (undefined *)0x0, &DAT_00007fff < puVar5)) {
      puVar4 = puVar5 + 0x8000;
    }
    iVar7 = (((uint)puVar4 & 0xffff) * (uint)param_4 >> 0x10) - ((int)(uint)param_4 >> 1);
    if (iVar7 < 0x80) {
      if (iVar7 < -0x80) {
        *param_6 = '\0';
      }
      else {
        *param_6 = (char)iVar7 + -0x80;
      }
    }
    else {
      *param_6 = -1;
    }
  }
  if (param_1 != '\0') {
    DAT_fffebff0 = '\0';
  }
  else {
    bVar6 = 0xfe;
    if (DAT_fffebff0 != 0xff) {
      bVar6 = DAT_fffebff0;
    }
    DAT_fffebff0 = bVar6 + 1;
  }
  DAT_fffebff2 = cVar9;
  return;
}

