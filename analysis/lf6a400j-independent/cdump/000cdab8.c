
/* WARNING: Removing unreachable block (ram,0x000cdbba) */
/* WARNING: Removing unreachable block (ram,0x000cdbe4) */

void FUN_000cdab8(char param_1,ushort param_2,ushort param_3,uint param_4,byte param_5,short param_6
                 ,ushort param_7,char param_8,ushort param_9,char param_10,char param_11,
                 undefined1 *param_12,ushort *param_13)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  ushort uVar4;
  byte bVar5;
  ushort unaff_r9;
  undefined1 uVar6;
  float fVar7;
  
  if ((param_2 != 16000) && (unaff_r9 = 0, 9999 < param_3)) {
    unaff_r9 = param_3 + 0xd8f0;
  }
  puVar3 = &DAT_00006400;
  if (param_2 != 16000) {
    puVar3 = (undefined4 *)__sdiv32_r1_by_r0((param_4 & 0xff) * 0x320000,param_2 - 16000);
    if ((int)puVar3 < (int)&DAT_00010000) {
      if ((int)puVar3 < 0) {
        puVar3 = (undefined4 *)0x0;
      }
    }
    else {
      puVar3 = (undefined4 *)&DAT_0000ffff;
    }
  }
  if (param_10 == '\0') {
    if (param_2 == 16000) {
      fVar7 = 100.0;
    }
    else {
      fVar7 = ((float)unaff_r9 * 10.0) / ((float)param_2 * 0.012499999 + -200.0);
    }
    puVar3 = (undefined4 *)(int)(fVar7 * 256.0);
  }
  uVar4 = (ushort)puVar3;
  if (((param_1 == '\x01') || (param_2 == 16000)) ||
     (&DAT_00006400 < (undefined4 *)((uint)puVar3 & 0xffff))) {
    uVar4 = 0x6400;
  }
  *param_13 = uVar4;
  if (DAT_fffecca6 == '\0') {
    bVar5 = 0x36;
  }
  else {
    bVar5 = 0x38;
  }
  if (DAT_fffecca8 == '\0') {
    uVar2 = 0x8200;
  }
  else {
    uVar2 = 32000;
  }
  if (DAT_fffecca4 == '\0') {
    uVar1 = 0x5a00;
  }
  else {
    uVar1 = 0x5500;
  }
  uVar6 = 1;
  if (((((DAT_fffecca7 != '\0') && (param_11 == '\0')) &&
       ((param_6 == 0 && ((param_5 > bVar5 && (0xfffe >= param_9)))))) && (param_9 != 0)) &&
     (((uVar2 > param_7 && (uVar1 > uVar4)) && (param_8 == '\0')))) {
    uVar6 = 0;
  }
  *param_12 = uVar6;
  DAT_fffecca7 = 1;
  DAT_fffecca6 = param_5 <= bVar5;
  DAT_fffecca9 = param_9 == 0;
  DAT_fffecca5 = 0xfffe < param_9;
  DAT_fffecca8 = uVar2 <= param_7;
  DAT_fffecca4 = uVar1 <= uVar4;
  return;
}

