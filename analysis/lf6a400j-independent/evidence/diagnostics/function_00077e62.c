
uint FUN_00077e62(void)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar1 = DAT_00077fb0;
  if (((*(char *)(DAT_00077fbc + 1) == '\0') ||
      (uVar2 = (uint)*(char *)(DAT_00077fbc + 1), 5 < uVar2)) &&
     (uVar2 = (uint)*(char *)(DAT_00077fbc + 1), uVar2 != 10)) {
    *DAT_00077fb0 = 0x7f;
    puVar1[1] = 0x19;
    uVar2 = 0x12;
    puVar1[2] = 0x12;
    *DAT_00077fb4 = 3;
  }
  else {
    for (uVar4 = 0; uVar3 = uVar4 & 0xff, uVar3 < 6; uVar4 = uVar4 + 1) {
      uVar4 = uVar4 & 0xff;
      uVar2 = (uint)*(char *)(DAT_00077fbc + 1);
      if ((int)(char)PTR_DAT_00077fc0[uVar4 * 8] == uVar2) break;
    }
    UNRECOVERED_JUMPTABLE = (code *)0x0;
    if (uVar3 < 6) {
      uVar2 = (uVar4 & 0xff) * 8;
      UNRECOVERED_JUMPTABLE = *(code **)(PTR_PTR_00077fc4 + uVar2);
    }
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00077eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
  }
  return uVar2;
}

