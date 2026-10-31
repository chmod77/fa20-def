
void FUN_000b8bc8(ushort *param_1,byte *param_2,char *param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  short sVar4;
  byte local_14;
  
  sVar4 = 0x53;
  iVar1 = __sdiv32_r1_by_r0((uint)*param_1,10);
  sVar4 = sVar4 - (short)iVar1;
  if (sVar4 < 0x80) {
    if (sVar4 < -0x80) {
      local_14 = 0;
    }
    else {
      local_14 = (char)sVar4 + 0x80;
    }
  }
  else {
    local_14 = 0xff;
  }
  sVar4 = 0x53;
  iVar1 = __sdiv32_r1_by_r0((uint)param_1[1],10);
  sVar4 = sVar4 - (short)iVar1;
  bVar2 = 0xff;
  if ((sVar4 < 0x80) && (bVar2 = 0, -0x81 < sVar4)) {
    bVar2 = (char)sVar4 + 0x80;
  }
  uVar3 = (uint)local_14 + (uint)*param_2;
  if (uVar3 < 0x180) {
    if (uVar3 < 0x80) {
      *param_3 = '\0';
    }
    else {
      *param_3 = (char)uVar3 + -0x80;
    }
  }
  else {
    *param_3 = -1;
  }
  uVar3 = (uint)bVar2 + (uint)param_2[1];
  if (uVar3 < 0x180) {
    if (uVar3 < 0x80) {
      param_3[1] = '\0';
    }
    else {
      param_3[1] = (char)uVar3 + -0x80;
    }
  }
  else {
    param_3[1] = -1;
  }
  return;
}

