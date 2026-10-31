
void FUN_00099d30(char param_1,short param_2,uint param_3,char param_4,ushort param_5,ushort param_6
                 ,ushort param_7,ushort param_8,ushort param_9,ushort param_10,ushort param_11,
                 ushort param_12,ushort param_13,ushort param_14,ushort param_15,ushort param_16,
                 ushort param_17,ushort param_18,ushort param_19,ushort param_20,ushort param_21,
                 ushort param_22,ushort param_23,ushort param_24,ushort param_25,ushort param_26,
                 ushort param_27,ushort param_28,ushort param_29,ushort param_30,ushort param_31,
                 ushort param_32,char *param_33)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  ushort local_30;
  ushort uStack_2e;
  
  if (param_4 == '\0') {
    uVar2 = LK_133998((uint)&T_02D644,param_3 & 0xff);
  }
  else {
    uVar2 = LK_133998((uint)&T_02D650,param_3 & 0xff);
  }
  uVar1 = 0xfe;
  if ((uVar2 & 0xff) < 0xff) {
    uVar1 = uVar2 & 0xff;
  }
  uVar3 = uVar1 + 1 & 0xff;
  uVar2 = 0xe;
  if ((uVar3 < 0xf) && (uVar2 = 1, uVar3 != 0)) {
    uVar2 = uVar1 + 1;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 1) {
    local_30 = param_5;
    uStack_2e = param_6;
  }
  else if (uVar2 == 2) {
    local_30 = param_7;
    uStack_2e = param_8;
  }
  else if (uVar2 == 3) {
    local_30 = param_9;
    uStack_2e = param_10;
  }
  else if (uVar2 == 4) {
    local_30 = param_11;
    uStack_2e = param_12;
  }
  else if (uVar2 == 5) {
    local_30 = param_13;
    uStack_2e = param_14;
  }
  else if (uVar2 == 6) {
    local_30 = param_15;
    uStack_2e = param_16;
  }
  else if (uVar2 == 7) {
    local_30 = param_17;
    uStack_2e = param_18;
  }
  else if (uVar2 == 8) {
    local_30 = param_19;
    uStack_2e = param_20;
  }
  else if (uVar2 == 9) {
    local_30 = param_21;
    uStack_2e = param_22;
  }
  else if (uVar2 == 10) {
    local_30 = param_23;
    uStack_2e = param_24;
  }
  else if (uVar2 == 0xb) {
    local_30 = param_25;
    uStack_2e = param_26;
  }
  else if (uVar2 == 0xc) {
    local_30 = param_27;
    uStack_2e = param_28;
  }
  else if (uVar2 == 0xd) {
    local_30 = param_29;
    uStack_2e = param_30;
  }
  else if (uVar2 == 0xe) {
    local_30 = param_31;
    uStack_2e = param_32;
  }
  if (param_1 == '\0') {
    *param_33 = '\0';
  }
  else {
    iVar5 = (uint)local_30 - (uint)uStack_2e;
    sVar4 = 0x7fff;
    if ((iVar5 < 0x8000) && (sVar4 = -0x8000, -0x8001 < iVar5)) {
      sVar4 = (short)iVar5;
    }
    uVar2 = LK_134E2C((uint)&T_02D638,(int)param_2);
    iVar5 = (int)(short)uVar2 + (int)((ulonglong)((longlong)(sVar4 * -3) * 0x2000000) >> 0x20);
    if (iVar5 < 0x8000) {
      if (iVar5 < -0x8000) {
        iVar5 = -0x8000;
      }
    }
    else {
      iVar5 = 0x7fff;
    }
    sVar4 = (short)((uint)((short)iVar5 * 100) >> 8);
    if (sVar4 < 0) {
      if (sVar4 < 0x80) {
        if (sVar4 < -0x80) {
          sVar4 = -0x80;
        }
      }
      else {
        sVar4 = 0x7f;
      }
    }
    else {
      sVar4 = 0;
    }
    if ((char)sVar4 < '\x01') {
      *param_33 = '\0';
    }
    else {
      *param_33 = (char)sVar4;
    }
  }
  return;
}

