
uint FUN_00077ba6(void)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  puVar2 = DAT_00077d34;
  bVar1 = false;
  if ((*DAT_00077d28 == '\x03') || (*DAT_00077d28 == '\x05')) {
    if ((*(char *)(DAT_00077d44 + 1) == '\0') || (4 < *(byte *)(DAT_00077d44 + 1))) {
LAB_00077cc4:
      *DAT_00077d34 = 0x7f;
      puVar2[1] = 0x2a;
      uVar7 = 0x31;
      puVar2[2] = 0x31;
    }
    else if (((*(char *)(DAT_00077d44 + 1) == '\0') || (3 < *(byte *)(DAT_00077d44 + 1))) ||
            (*DAT_00077d24 < 3)) {
      if ((*(char *)(DAT_00077d44 + 1) == '\x04') && (*DAT_00077d24 == 2)) {
        uVar7 = FUN_00077e28();
        *DAT_00077d34 = 0x6a;
        *DAT_00077d38 = 1;
        goto LAB_00077cd8;
      }
      *DAT_00077d34 = 0x7f;
      puVar2[1] = 0x2a;
      uVar7 = 0x13;
      puVar2[2] = 0x13;
    }
    else {
      if (*DAT_00077d48 < (byte)*(undefined2 *)PTR_DAT_00077d4c) {
        if ((((*(char *)(DAT_00077d44 + 1) == '\x01') && (uVar7 = 1, *DAT_00077d24 < 0xd)) ||
            ((*(char *)(DAT_00077d44 + 1) == '\x02' && (uVar7 = 2, *DAT_00077d24 < 8)))) ||
           ((*(char *)(DAT_00077d44 + 1) == '\x03' && (uVar7 = 3, *DAT_00077d24 < 4)))) {
          for (uVar9 = 2; (uVar9 & 0xff) < (uint)*DAT_00077d24; uVar9 = uVar9 + 1) {
            uVar9 = uVar9 & 0xff;
            if ((0x31 < *(byte *)(DAT_00077d44 + uVar9)) ||
               (uVar7 = (uint)*(byte *)(DAT_00077d44 + uVar9),
               *(char *)(DAT_00077d50 + uVar7) == '\0')) goto LAB_00077cc4;
            bVar1 = true;
          }
          goto LAB_00077cd8;
        }
        goto LAB_00077cc4;
      }
      *DAT_00077d34 = 0x7f;
      puVar2[1] = 0x2a;
      uVar7 = 0x22;
      puVar2[2] = 0x22;
    }
  }
  else {
    *DAT_00077d34 = 0x7f;
    puVar2[1] = 0x2a;
    uVar7 = 0x33;
    puVar2[2] = 0x33;
  }
  *DAT_00077d38 = 3;
LAB_00077cd8:
  iVar4 = DAT_00077d54;
  iVar3 = DAT_00077d44;
  if (bVar1) {
    if (*(char *)(DAT_00077d44 + 1) == '\x01') {
      *(undefined1 *)(DAT_00077d54 + (uint)*DAT_00077d48 * 2) = 10;
    }
    else if (*(char *)(DAT_00077d44 + 1) == '\x02') {
      *(undefined1 *)(DAT_00077d54 + (uint)*DAT_00077d48 * 2) = 5;
    }
    else {
      *(undefined1 *)(DAT_00077d54 + (uint)*DAT_00077d48 * 2) = 1;
    }
    uVar7 = 0;
    uVar10 = 0;
    for (uVar9 = 2; pbVar6 = DAT_00077fa4, puVar5 = PTR_FUN_00077f9c,
        (uVar9 & 0xff) < (uint)*DAT_00077fa8; uVar9 = uVar9 + 1) {
      uVar9 = uVar9 & 0xff;
      if (*(byte *)(iVar3 + uVar9) < 0x20) {
        uVar8 = (*(code *)PTR_FUN_00077f9c)();
        if ((uVar8 & uVar10) == 0) {
          uVar8 = (*(code *)puVar5)();
          uVar10 = uVar10 | uVar8;
          goto LAB_00077da6;
        }
LAB_00077daa:
        bVar1 = false;
      }
      else {
        uVar8 = (*(code *)PTR_FUN_00077f9c)();
        if ((uVar8 & uVar7) != 0) goto LAB_00077daa;
        uVar8 = (*(code *)puVar5)();
        uVar7 = uVar7 | uVar8;
LAB_00077da6:
        bVar1 = true;
      }
      pbVar6 = DAT_00077fa4;
      if (bVar1) {
        *(undefined1 *)(DAT_00077fa0 + (uVar9 - 2) * 0x28 + (uint)*DAT_00077fa4) =
             *(undefined1 *)(iVar3 + uVar9);
        *(char *)(iVar4 + 1 + (uint)*pbVar6 * 2) = *(char *)(iVar4 + 1 + (uint)*pbVar6 * 2) + '\x01'
        ;
      }
    }
    uVar7 = (uint)*DAT_00077fa4;
    *(undefined1 *)(DAT_00077fac + uVar7) = 0;
    *pbVar6 = *pbVar6 + 1;
    *DAT_00077fb0 = 0x6a;
    *DAT_00077fb4 = 1;
  }
  return uVar7;
}

