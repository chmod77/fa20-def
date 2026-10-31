
void FUN_000642a4(void)

{
  char cVar2;
  uint uVar1;
  byte bVar3;
  byte local_18;
  char cStack_17;
  char cStack_16;
  byte bStack_15;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined4 uStack_c;
  
  local_18 = 1 - ((DAT_fffefff5 & 2) == 0);
  cStack_17 = '\x01' - ((DAT_fffefff3 & 0x20) == 0);
  cStack_16 = '\x01' - ((DAT_fffefff3 & 0x10) == 0);
  bStack_15 = '\x01' - ((DAT_fffefff6 & 2) == 0);
  uStack_14 = 4;
  uStack_12 = 1;
  uStack_10 = 0x30;
  uStack_c = 0xffff0052;
  cVar2 = FUN_00062c40(&local_18);
  if (((cVar2 != '\0') || ((DAT_ffff035a & 0x20) != 0)) || ((DAT_ffff035a & 0x10) != 0)) {
    DAT_fffefff6 = DAT_fffefff6 | 2;
  }
  local_18 = DAT_fffefff5 & 1;
  cStack_17 = '\x01' - ((DAT_fffefff3 & 0x20) == 0);
  cStack_16 = '\x01' - ((DAT_fffefff3 & 8) == 0);
  bStack_15 = DAT_fffefff6 & 1;
  uStack_14 = 4;
  uStack_12 = 1;
  uStack_10 = 0x30;
  uStack_c = 0xffff0054;
  uVar1 = FUN_00062c40(&local_18);
  bVar3 = DAT_fffefff6 | 1;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffefff6 & 0xfe;
  }
  DAT_fffefff6 = bVar3;
  return;
}

