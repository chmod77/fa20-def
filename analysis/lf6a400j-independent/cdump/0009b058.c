
void FUN_0009b058(char param_1,uint param_2,uint param_3,ushort param_4,uint param_5,uint param_6,
                 char *param_7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  
  if (param_1 == '\0') {
    DAT_fffebff4 = '\0';
    cVar6 = DAT_fffebff5;
  }
  else {
    cVar6 = -2;
    if (DAT_fffebff4 != -1) {
      cVar6 = DAT_fffebff4;
    }
    DAT_fffebff4 = cVar6 + '\x01';
    cVar6 = '\x01';
  }
  if (param_1 == '\0' && 0x40 < DAT_fffebff6) {
    cVar6 = '\0';
  }
  if (cVar6 == '\0') {
    *param_7 = -0x80;
  }
  else {
    iVar7 = -(param_6 & 0xffff);
    if (iVar7 < 0) {
      uVar8 = (int)&DAT_00010000 + iVar7;
    }
    else {
      uVar8 = 0xffffffff;
    }
    uVar2 = LK_138984((uint)&T_02D84C,param_2 & 0xffff,param_3 & 0xffff);
    iVar7 = ((param_6 & 0xffff) * (uVar2 & 0xff) >> 8) - ((int)(param_6 & 0xffff) >> 1);
    uVar2 = 0xffffffff;
    if (iVar7 < 0x8000) {
      uVar2 = iVar7 - 0x8000;
    }
    uVar3 = LK_138984((uint)&T_02D838,param_2 & 0xffff,param_3 & 0xffff);
    iVar7 = ((uVar8 & 0xffff) * (uVar3 & 0xff) >> 8) - ((int)(uVar8 & 0xffff) >> 1);
    uVar8 = 0xffffffff;
    if (iVar7 < 0x8000) {
      uVar8 = iVar7 - 0x8000;
    }
    puVar5 = (undefined *)((uVar8 & 0xffff) + (uVar2 & 0xffff));
    puVar9 = (undefined *)0xffffffff;
    if ((puVar5 < &DAT_00018000) && (puVar9 = (undefined *)0x0, &DAT_00007fff < puVar5)) {
      puVar9 = puVar5 + 0x8000;
    }
    uVar8 = LK_133BCC((uint)&T_02D860,param_5 & 0xffff);
    LK_133BCC((uint)&T_02D860,param_5 & 0xffff);
    pcVar4 = __udiv32_r1_by_r0;
    uVar8 = __udiv32_r1_by_r0(((uint)puVar9 & 0xffff) * (uVar8 & 0xff),0xff);
    uVar8 = uVar8 & 0xffff;
    uVar2 = (*pcVar4)();
    uVar8 = uVar8 - (uVar2 & 0xffff);
    uVar2 = 0xffffffff;
    if ((int)uVar8 < 0x8000) {
      uVar2 = (uVar8 & 0xffff) - 0x8000;
    }
    iVar7 = ((uVar2 & 0xffff) * (uint)param_4 >> 0x10) - ((int)(uint)param_4 >> 1);
    if (iVar7 < 0x80) {
      if (iVar7 < -0x80) {
        *param_7 = '\0';
      }
      else {
        *param_7 = (char)iVar7 + -0x80;
      }
    }
    else {
      *param_7 = -1;
    }
  }
  if (param_1 != '\0') {
    DAT_fffebff6 = '\0';
    cVar1 = DAT_fffebff6;
  }
  else {
    cVar1 = -1;
    if (DAT_fffebff6 != 0xff) {
      cVar1 = DAT_fffebff6 + 1;
    }
  }
  DAT_fffebff6 = cVar1;
  DAT_fffebff5 = cVar6;
  return;
}

