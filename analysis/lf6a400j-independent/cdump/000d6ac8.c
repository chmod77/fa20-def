
/* WARNING: Removing unreachable block (ram,0x000d6b1a) */

void FUN_000d6ac8(char param_1,undefined2 param_2,uint param_3,uint param_4,undefined2 *param_5)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *local_18;
  undefined *puStack_14;
  
  if (param_1 == '\0') {
    *param_5 = param_2;
  }
  else {
    uVar5 = (param_3 & 0xffff) * 3;
    uVar1 = (uVar5 & 0xffff) * 0x78;
    uVar3 = (uVar5 >> 0x10) * 0x78;
    uVar5 = (uVar1 >> 0x10) + uVar3;
    local_18 = (undefined *)0x0;
    if (uVar5 < uVar3) {
      local_18 = &DAT_00010000;
    }
    uVar1 = uVar1 & 0xffff;
    puStack_14 = (undefined *)(uVar5 * 0x10000 + uVar1);
    FUN_0016c364(&local_18,0x29,uVar1,&DAT_0001e9d6,&local_18);
    puVar4 = local_18;
    puVar2 = puStack_14;
    uVar1 = __udiv32_r1_by_r0((param_4 & 0xffff) << 5,0x29);
    puVar2 = puVar2 + (uVar1 & 0xffff);
    if (puVar2 < puStack_14) {
      puVar4 = puVar4 + 1;
    }
    if ((puVar4 != (undefined *)0x0) || (&DAT_0000ffff < puVar2)) {
      puVar2 = &DAT_0000ffff;
    }
    if ((undefined *)((uint)puVar2 & 0xffff) < &UNK_0000aed5) {
      *param_5 = (short)puVar2;
    }
    else {
      *param_5 = 0xaed4;
    }
  }
  return;
}

