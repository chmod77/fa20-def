
void FUN_000770bc(void)

{
  bool bVar1;
  bool bVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar3 = DAT_0007727c;
  bVar1 = false;
  bVar2 = false;
  if ((*DAT_00077278 != '\x03') && (*DAT_00077278 != '\x05')) {
    *DAT_0007727c = 0x7f;
    puVar3[1] = 0x2f;
    puVar3[2] = 0x33;
    goto LAB_00077264;
  }
  if ((*(char *)(DAT_00077280 + 3) == '\0') || (*(char *)(DAT_00077280 + 3) == '\x03')) {
    uVar5 = (uint)*(byte *)(DAT_00077280 + 1) * 0x100 + (uint)*(byte *)(DAT_00077280 + 2);
    if ((*DAT_00077284 < 4) || (6 < *DAT_00077284)) {
      *DAT_0007727c = 0x7f;
      puVar3[1] = 0x2f;
      puVar3[2] = 0x13;
      goto LAB_00077264;
    }
    if (((((((*DAT_00077288 == 1) || (*DAT_0007728c == 1)) || (*DAT_00077290 == 1)) ||
          ((*DAT_00077294 == 1 || (*DAT_00077298 == 1)))) || (*DAT_0007729c == 1)) ||
        (((((*DAT_000772a0 == 1 || (*DAT_000772a4 == 1)) ||
           ((*DAT_000772a8 == 1 ||
            (((*DAT_000772ac == 1 || (*DAT_000772b0 == 1)) || (*DAT_000772b4 == 1)))))) ||
          ((*DAT_000772b8 == 1 || (*DAT_000772bc == 1)))) || (*DAT_000772c0 == 1)))) ||
       ((((*DAT_000772c4 == 1 || (*DAT_000772c8 == 1)) ||
         ((*DAT_000772cc == 1 ||
          (((*DAT_000772d0 == 1 || (*DAT_000772d4 == 1)) || (*DAT_000772d8 == 1)))))) ||
        (*DAT_000772dc == 1)))) {
      bVar1 = true;
    }
    if ((uVar5 == (int)DAT_00077270) && ((int)(uint)*DAT_000772e0 < (int)DAT_00077272)) {
      bVar2 = true;
    }
    if (((bVar1) && (*(char *)(DAT_00077280 + 3) == '\x03')) || (bVar2)) {
      *DAT_0007727c = 0x7f;
      puVar3[1] = 0x2f;
      puVar3[2] = 0x22;
      goto LAB_00077264;
    }
    uVar6 = 0;
    while ((uVar4 = uVar6 & 0xff, uVar4 < 9 &&
           (uVar6 = uVar6 & 0xff, *(ushort *)(PTR_DAT_000772e4 + uVar6 * 8) != uVar5))) {
      uVar6 = uVar6 + 1;
    }
    if (uVar4 < 9) {
      UNRECOVERED_JUMPTABLE = *(code **)(PTR_PTR_000772e8 + (uVar6 & 0xff) * 8);
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)0x0;
    }
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00077242. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  *DAT_0007727c = 0x7f;
  puVar3[1] = 0x2f;
  puVar3[2] = 0x31;
LAB_00077264:
  *DAT_000772ec = 3;
  return;
}

