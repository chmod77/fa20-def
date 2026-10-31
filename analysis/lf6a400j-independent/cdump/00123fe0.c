
void FUN_00123fe0(ushort param_1,char param_2,char param_3,ushort param_4,char param_5,char param_6,
                 uint param_7,uint param_8,char param_9,char param_10,byte param_11,char param_12,
                 ushort *param_13)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  undefined1 *puVar7;
  
  param_7 = param_7 & 0xff;
  param_8 = param_8 & 0xffff;
  if (param_9 == '\0') {
    param_10 = param_12;
  }
  bVar1 = param_11 < 4;
  if (bVar1) {
    uVar2 = LK_13AC68((uint)&T_030164,param_7,param_8);
  }
  else if (param_10 == '\0') {
    uVar2 = LK_13AC68((uint)&T_0300EC,param_7,param_8);
  }
  else {
    uVar2 = LK_13AC68((uint)&T_03013C,param_7,param_8);
  }
  iVar5 = (uint)param_1 - (uVar2 & 0xffff);
  puVar7 = (undefined1 *)0xffffffff;
  if ((iVar5 < (int)&DAT_0000c180) && (puVar7 = (undefined1 *)0x0, -0x3e81 < iVar5)) {
    puVar7 = &LAB_00003e80 + iVar5;
  }
  if (bVar1) {
    uVar2 = LK_13AC68((uint)&T_0300C4,param_7,param_8);
  }
  else if (param_10 == '\0') {
    uVar2 = LK_13AC68((uint)&T_030114,param_7,param_8);
  }
  else {
    uVar2 = LK_13AC68((uint)&T_03018C,param_7,param_8);
  }
  if (bVar1) {
    uVar3 = LK_13AC68((uint)&T_0300B0,param_7,param_8);
  }
  else if (param_10 == '\0') {
    uVar3 = LK_13AC68((uint)&T_030100,param_7,param_8);
  }
  else {
    uVar3 = LK_13AC68((uint)&T_030178,param_7,param_8);
  }
  if (((uint)puVar7 & 0xffff) < (uVar3 & 0xffff)) {
    if (bVar1) {
      uVar4 = LK_13AC68((uint)&T_030150,param_7,param_8);
    }
    else if (param_10 == '\0') {
      uVar4 = LK_13AC68((uint)&T_0300D8,param_7,param_8);
    }
    else {
      uVar4 = LK_13AC68((uint)&T_030128,param_7,param_8);
    }
    iVar5 = (uint)param_1 - (uVar4 & 0xffff);
    puVar7 = (undefined1 *)0xffffffff;
    if ((iVar5 < (int)&DAT_0000c180) && (puVar7 = (undefined1 *)0x0, -0x3e81 < iVar5)) {
      puVar7 = &LAB_00003e80 + iVar5;
    }
    uVar6 = (ushort)puVar7;
    if ((uVar3 & 0xffff) <= ((uint)puVar7 & 0xffff)) {
      uVar6 = (ushort)uVar3;
    }
  }
  else {
    uVar6 = (ushort)uVar2;
    if (((uint)puVar7 & 0xffff) < (uVar2 & 0xffff)) {
      uVar6 = (ushort)puVar7;
    }
  }
  if (((((uint)param_4 < (uVar2 & 0xffff)) && (param_2 == '\0')) && (param_3 == '\0')) &&
     ((param_5 == '\0' && (param_6 == '\0')))) {
    *param_13 = uVar6;
  }
  else {
    *param_13 = param_4;
  }
  return;
}

