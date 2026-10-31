
void FUN_00088588(byte param_1,ushort param_2,byte param_3,uint param_4,uint param_5,byte param_6,
                 uint param_7,char param_8,char param_9,byte param_10,char param_11,uint param_12,
                 undefined4 param_13,uint param_14,uint param_15,char param_16,short param_17,
                 short param_18,uint param_19,char param_20,undefined4 param_21,uint param_22,
                 char param_23,undefined4 param_24,uint param_25,undefined2 *param_26,
                 undefined1 *param_27,undefined1 *param_28,undefined1 *param_29,char *param_30,
                 char *param_31,byte *param_32)

{
  short sVar2;
  uint uVar1;
  char cVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar7 = (undefined *)((param_4 & 0xffff) + (param_5 & 0xffff));
  puVar4 = puVar7 + (param_22 & 0xff);
  if ((puVar4 < puVar7) || (&DAT_0000ffff < puVar4)) {
    puVar4 = (undefined *)0xffffffff;
  }
  if (((param_8 == '\x03') && (param_9 != '\0')) && (param_10 < 0x6e)) {
    sVar2 = 0x6e - (ushort)param_10;
  }
  else {
    sVar2 = 0;
  }
  uVar5 = param_1 + 0x80;
  if (uVar5 < 0x180) {
    if (uVar5 < 0x80) {
      *param_30 = '\0';
    }
    else {
      *param_30 = (char)uVar5 + -0x80;
    }
  }
  else {
    *param_30 = -1;
  }
  *param_29 = 0;
  uVar5 = 0;
  if (param_11 == '\x0e') {
    uVar5 = LK_133B38((uint)&T_02CAD8,param_12 & 0xff);
    uVar5 = uVar5 & 0xff;
  }
  *param_28 = (char)uVar5;
  if ((param_20 != '\0') || (param_23 != '\0')) {
    param_6 = 0;
  }
  *param_32 = param_6;
  puVar7 = (undefined *)(uint)param_6 + param_17;
  puVar6 = (undefined *)((uint)puVar7 & 0xffff);
  if (puVar6 < (undefined *)(uint)param_6) {
    puVar7 = (undefined *)0xffffffff;
    puVar6 = &DAT_0000ffff;
  }
  if (puVar6 <= (undefined *)(param_25 & 0xff)) {
    puVar7 = (undefined *)(param_25 & 0xff);
  }
  puVar6 = &UNK_000001fe;
  if (((uint)puVar7 & 0xffff) < 0x1fe) {
    puVar6 = puVar7;
  }
  if (((uint)puVar4 & 0xffff) < ((uint)puVar6 & 0xffff)) {
    puVar4 = puVar6;
  }
  puVar6 = (undefined *)(uint)(param_2 >> 8);
  puVar7 = (undefined *)((uint)puVar4 & 0xffff);
  if ((undefined *)((uint)puVar4 & 0xffff) < puVar6) {
    puVar7 = puVar6;
    puVar4 = puVar6;
  }
  if (puVar7 < (undefined *)(param_19 & 0xff)) {
    puVar4 = (undefined *)(param_19 & 0xff);
  }
  cVar3 = '\0';
  if (param_16 != '\0') {
    uVar1 = LK_13AF58((uint)&T_02CAE4,param_15 & 0xff,param_14 & 0xffff);
    cVar3 = (char)uVar1;
  }
  *param_31 = cVar3;
  puVar4 = (undefined *)
           ((uint)param_1 + (uint)param_3 + (param_7 & 0xff) + (int)sVar2 + uVar5 + 0x80 +
            (int)cVar3 + (int)(short)((ulonglong)((longlong)(int)param_18 * 0x2000000) >> 0x20) +
            ((uint)puVar4 & 0xffff) + (int)(char)((uint)param_24 >> 8));
  if ((int)puVar4 < (int)&DAT_00010000) {
    if ((int)puVar4 < 0) {
      puVar4 = (undefined *)0x0;
    }
  }
  else {
    puVar4 = &DAT_0000ffff;
  }
  uVar5 = ((uint)puVar4 & 0xffff) >> 1;
  if (0xff < uVar5) {
    uVar5 = 0xff;
  }
  *param_27 = (char)uVar5;
  *param_26 = (short)puVar4;
  return;
}

