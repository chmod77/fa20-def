
void FUN_000b9718(uint param_1,uint param_2,byte *param_3,byte *param_4,byte *param_5,byte *param_6,
                 short param_7,short param_8,byte *param_9,byte *param_10,byte *param_11)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  
  uVar1 = LK_13503C((uint)&T_02E490,param_1 & 0xffff);
  uVar2 = LK_133B38((uint)&T_02E4A8,param_2 & 0xff);
  puVar6 = (undefined *)((uVar1 & 0xff) * (uVar2 & 0xff));
  bVar4 = 0xff;
  if (puVar6 < &UNK_00007f81) {
    bVar4 = (byte)((ulonglong)((longlong)(int)puVar6 * 0x2000000) >> 0x20);
  }
  uVar1 = LK_13503C((uint)&T_02E49C,param_1 & 0xffff);
  uVar2 = LK_133B38((uint)&T_02E4B4,param_2 & 0xff);
  puVar6 = (undefined *)((uVar1 & 0xff) * (uVar2 & 0xff));
  uVar1 = 0xff;
  if (puVar6 < &UNK_00007f81) {
    uVar1 = (uint)((ulonglong)((longlong)(int)puVar6 * 0x2000000) >> 0x20);
  }
  *param_10 = bVar4;
  param_10[1] = (byte)uVar1;
  if (param_7 < 0x16c) {
    bVar5 = 0x80;
    if (param_7 < -0x16b) {
      bVar5 = *param_4;
    }
  }
  else {
    bVar5 = *param_3;
  }
  if (param_8 < 0x16c) {
    bVar3 = 0x80;
    if (param_8 < -0x16b) {
      bVar3 = param_4[1];
    }
  }
  else {
    bVar3 = param_3[1];
  }
  *param_11 = bVar5;
  param_11[1] = bVar3;
  uVar2 = (uint)*param_6 + (uint)bVar4 + (uint)*param_5 + (uint)bVar5;
  bVar4 = 0xff;
  if ((uVar2 < 0x280) && (bVar4 = 0, 0x17f < uVar2)) {
    bVar4 = (char)uVar2 + 0x80;
  }
  uVar1 = (uint)param_6[1] + (uVar1 & 0xff) + (uint)param_5[1] + (uint)bVar3;
  bVar5 = 0xff;
  if ((uVar1 < 0x280) && (bVar5 = 0, 0x17f < uVar1)) {
    bVar5 = (char)uVar1 + 0x80;
  }
  if (0xfa < bVar4) {
    bVar4 = 0xfa;
  }
  *param_9 = bVar4;
  if (0xfa < bVar5) {
    bVar5 = 0xfa;
  }
  param_9[1] = bVar5;
  return;
}

