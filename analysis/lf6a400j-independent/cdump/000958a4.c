
undefined *
FUN_000958a4(char param_1,uint param_2,byte param_3,byte param_4,byte param_5,uint param_6,
            undefined4 param_7,undefined4 param_8,undefined2 *param_9)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  byte bVar7;
  undefined *puVar8;
  
  uVar4 = (param_2 & 0xffff) >> 1;
  uVar6 = 0xffffffff;
  if ((int)(uVar4 - 0x4000) < 0x8000) {
    uVar6 = uVar4 - 0xc000;
  }
  uVar4 = uVar6;
  if (param_4 <= param_3) {
    if (0x7fff < (uVar6 & 0xffff)) {
      uVar4 = 0xffff8000;
    }
  }
  else if ((uVar6 & 0xffff) < 0x8001) {
    uVar4 = 0xffff8000;
  }
  if ((param_4 <= param_3) || (param_3 <= param_5)) {
    uVar6 = uVar4;
  }
  puVar8 = (undefined *)(param_6 & 0xffff);
  puVar2 = puVar8 + (uVar6 & 0xffff);
  puVar5 = (undefined *)0xffffffff;
  if ((puVar2 < &DAT_00018000) && (puVar5 = (undefined *)0x0, &DAT_00007fff < puVar2)) {
    puVar5 = puVar2 + 0x8000;
  }
  if ((undefined *)((uint)puVar5 & 0xffff) < &UNK_00007f01) {
    puVar5 = &DAT_00007f00;
  }
  if (&UNK_000089ff < (undefined *)((uint)puVar5 & 0xffff)) {
    puVar5 = (undefined *)0xffff8a00;
  }
  puVar2 = puVar8;
  if (puVar8 < (undefined *)((int)&DAT_00008000 + 1)) {
    puVar2 = (undefined *)0xffff8000;
  }
  cVar1 = -2;
  if (param_1 != -1) {
    cVar1 = param_1;
  }
  bVar7 = cVar1 + 1;
  if (6 < bVar7) {
    bVar7 = 7;
  }
  puVar3 = (undefined *)(uint)bVar7;
  if (puVar3 != &UNK_00000001) {
    if (puVar3 == &UNK_00000002) {
      puVar3 = (undefined *)0xffff8000;
      puVar8 = puVar3;
    }
    else {
      puVar8 = puVar2;
      if (puVar3 != &UNK_00000003) {
        if (puVar3 == &UNK_00000004) {
          puVar3 = (undefined *)0xffff8000;
          puVar8 = puVar3;
        }
        else {
          puVar8 = puVar5;
          if (((puVar3 != &UNK_00000005) &&
              (puVar8 = (undefined *)0xffff8000, puVar3 != &UNK_00000006)) &&
             (puVar8 = puVar3, puVar3 == &UNK_00000007)) {
            puVar8 = (undefined *)0xffff8000;
          }
        }
      }
    }
  }
  *param_9 = (short)puVar8;
  return puVar3;
}

