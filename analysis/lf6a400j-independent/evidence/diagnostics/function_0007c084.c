
void FUN_0007c084(void)

{
  bool bVar1;
  undefined1 *puVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar2 = DAT_0007c254;
  bVar1 = false;
  bVar4 = false;
  if ((*DAT_0007c250 == '\x03') || (*DAT_0007c250 == '\x05')) {
    if ((*(char *)(DAT_0007c258 + 1) == '\x01') ||
       ((*(char *)(DAT_0007c258 + 1) == '\x02' || (*(char *)(DAT_0007c258 + 1) == '\x03')))) {
      uVar6 = (uint)*(byte *)(DAT_0007c258 + 2) * 0x100 + (uint)*(byte *)(DAT_0007c258 + 3);
      if (*DAT_0007c25c < 4) {
        *DAT_0007c254 = 0x7f;
        puVar2[1] = 0x31;
        puVar2[2] = 0x13;
      }
      else {
        if ((((*(char *)(DAT_0007c258 + 1) == '\x01') && ((int)DAT_0007c1e0 <= (int)uVar6)) &&
            ((int)uVar6 <= (int)DAT_0007c1e2)) && ((*DAT_0007c260 & 2) == 0)) {
          bVar1 = true;
        }
        if (((((((*DAT_0007c264 == 1) || (*DAT_0007c268 == 1)) ||
               ((*DAT_0007c26c == 1 || ((*DAT_0007c270 == 1 || (*DAT_0007c274 == 1)))))) ||
              ((*DAT_0007c278 == 1 ||
               (((((*DAT_0007c27c == 1 || (*DAT_0007c280 == 1)) || (*DAT_0007c284 == 1)) ||
                 ((*DAT_0007c288 == 1 || (*DAT_0007c28c == 1)))) ||
                (((*DAT_0007c290 == 1 || ((*DAT_0007c294 == 1 || (*DAT_0007c298 == 1)))) ||
                 (*DAT_0007c29c == 1)))))))) ||
             ((((*DAT_0007c2a0 == 1 || (*DAT_0007c2a4 == 1)) || (*DAT_0007c2a8 == 1)) ||
              (((*DAT_0007c2ac == 1 || (*DAT_0007c2b0 == 1)) ||
               ((*DAT_0007c2b4 == 1 || ((*DAT_0007c2b8 == 1 || (*DAT_0007c2bc == 1)))))))))) ||
            ((*DAT_0007c2c0 == 1 || (*DAT_0007c2c4 == 1)))) &&
           (*(char *)(DAT_0007c258 + 1) == '\x01')) {
          bVar4 = true;
        }
        if ((bVar1) || (bVar4)) {
          *DAT_0007c254 = 0x7f;
          puVar2[1] = 0x31;
          puVar2[2] = 0x22;
        }
        else {
          for (uVar5 = 0; uVar3 = uVar5 & 0xff, uVar3 < 0x11; uVar5 = uVar5 + 1) {
            uVar5 = uVar5 & 0xff;
            if (*(ushort *)(PTR_DAT_0007c2c8 + uVar5 * 8) == uVar6) break;
          }
          UNRECOVERED_JUMPTABLE = (code *)0x0;
          if (uVar3 < 0x11) {
            UNRECOVERED_JUMPTABLE = *(code **)(PTR_PTR_0007c2cc + (uVar5 & 0xff) * 8);
          }
          if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0007c24a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)();
            return;
          }
          *DAT_0007c254 = 0x7f;
          puVar2[1] = 0x31;
          puVar2[2] = 0x31;
        }
      }
    }
    else {
      *DAT_0007c254 = 0x7f;
      puVar2[1] = 0x31;
      puVar2[2] = 0x12;
    }
  }
  else {
    *DAT_0007c254 = 0x7f;
    puVar2[1] = 0x31;
    puVar2[2] = 0x33;
  }
  *DAT_0007c2d0 = 3;
  return;
}

