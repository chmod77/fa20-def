
uint FUN_00077808(void)

{
  char cVar1;
  bool bVar2;
  short *psVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  
  puVar4 = DAT_00077d34;
  psVar3 = DAT_00077ab0;
  iVar5 = DAT_00077a9c;
  puVar7 = (undefined *)
           ((uint)*(byte *)(DAT_00077a9c + 1) * 0x100 + (uint)*(byte *)(DAT_00077a9c + 2));
  bVar2 = false;
  if (puVar7 == PTR_DAT_00077aa0) {
    if (*DAT_00077aa4 != 0x14) {
LAB_00077b6e:
      *DAT_00077d34 = 0x7f;
      puVar4[1] = 0x2e;
      uVar6 = 0x13;
      puVar4[2] = 0x13;
      goto LAB_00077b8c;
    }
    for (uVar6 = 0; (uVar6 & 0xff) < 0x11; uVar6 = (uVar6 & 0xff) + 1) {
      if (DAT_00077998 < (short)(ushort)*(byte *)(DAT_00077a9c + 3 + (uVar6 & 0xff))) {
        bVar2 = true;
        break;
      }
    }
    if (!bVar2) {
      if ((*DAT_00077aa8 == '\x03') || (*DAT_00077aa8 == '\x05')) {
        bVar2 = true;
        if (((int)(char)*DAT_00077aac & 0x80U) == 0) {
          *DAT_00077ab0 =
               (ushort)*(byte *)(DAT_00077a9c + 3) * 0x100 + (ushort)*(byte *)(DAT_00077a9c + 4);
          psVar3[1] = (ushort)*(byte *)(iVar5 + 5) * 0x100 + (ushort)*(byte *)(iVar5 + 6);
          psVar3[2] = (ushort)*(byte *)(iVar5 + 7) * 0x100 + (ushort)*(byte *)(iVar5 + 8);
          psVar3[3] = (ushort)*(byte *)(iVar5 + 9) * 0x100 + (ushort)*(byte *)(iVar5 + 10);
          psVar3[4] = (ushort)*(byte *)(iVar5 + 0xb) * 0x100 + (ushort)*(byte *)(iVar5 + 0xc);
          psVar3[5] = (ushort)*(byte *)(iVar5 + 0xd) * 0x100 + (ushort)*(byte *)(iVar5 + 0xe);
          psVar3[6] = (ushort)*(byte *)(iVar5 + 0xf) * 0x100 + (ushort)*(byte *)(iVar5 + 0x10);
          psVar3[7] = (ushort)*(byte *)(iVar5 + 0x11) * 0x100 + (ushort)*(byte *)(iVar5 + 0x12);
          psVar3[8] = (ushort)*(byte *)(iVar5 + 0x13) * 0x100 + DAT_00077998;
          (*(code *)PTR_FUN_00077ab8)
                    ((int)(((int)psVar3 - DAT_00077ab4) + (uint)((int)psVar3 - DAT_00077ab4 < 0)) >>
                     1,9);
          *DAT_00077aac = *DAT_00077aac | 0x80;
          *DAT_00077abc = 0;
          *DAT_00077ac0 = 0;
          *DAT_00077ac4 = *DAT_00077ac4 & 0xbf;
          iVar5 = DAT_00077ab4;
          *(undefined2 *)(DAT_00077ab4 + 10) = 0;
          *(undefined2 *)(iVar5 + 0xc) = 0;
          (*(code *)PTR_FUN_00077ab8)
                    ((int)((DAT_00077ac8 - DAT_00077ab4) + (uint)(DAT_00077ac8 - DAT_00077ab4 < 0))
                     >> 1,2);
        }
        iVar5 = (*(code *)PTR_FUN_00077acc)
                          ((int)(((int)DAT_00077ab0 - DAT_00077ab4) +
                                (uint)((int)DAT_00077ab0 - DAT_00077ab4 < 0)) >> 1,9);
        puVar4 = DAT_00077ad4;
        if ((iVar5 == 0) && (((int)(char)*DAT_00077aac & 0x80U) != 0)) {
          if ((*DAT_00077ad0 & 1) == 0) {
            *DAT_00077ad4 = 0x6e;
            iVar5 = DAT_00077a9c;
            puVar4[1] = *(undefined1 *)(DAT_00077a9c + 1);
            puVar4[2] = *(undefined1 *)(iVar5 + 2);
          }
          else {
            *DAT_00077ad4 = 0x7f;
            puVar4[1] = 0x2e;
            puVar4[2] = 0x72;
          }
          *DAT_00077ad8 = 3;
          bVar2 = false;
          *DAT_00077aac = *DAT_00077aac & 0x7f;
        }
        if (bVar2) {
          cVar1 = *DAT_00077adc;
          *DAT_00077adc = (char)((int)cVar1 | 0x80U);
          *DAT_00077ae0 = 0x2e;
          return (int)cVar1 | 0x80U;
        }
        cVar1 = *DAT_00077adc;
        *DAT_00077adc = (char)((int)cVar1 & 0x7fU);
        return (int)cVar1 & 0x7fU;
      }
LAB_00077b5e:
      *DAT_00077d34 = 0x7f;
      puVar4[1] = 0x2e;
      uVar6 = 0x33;
      puVar4[2] = 0x33;
      goto LAB_00077b8c;
    }
  }
  else if (puVar7 == (undefined *)(int)DAT_00077a92) {
    if (*DAT_00077aa4 != 4) goto LAB_00077b6e;
    if ((short)(ushort)*(byte *)(DAT_00077a9c + 3) <= DAT_00077a94) {
      if (*DAT_00077aa8 != '\x05') goto LAB_00077b5e;
      *DAT_00077ae4 = *(undefined1 *)(DAT_00077a9c + 3);
LAB_00077b4e:
      puVar4 = DAT_00077d34;
      *DAT_00077d34 = 0x6e;
      puVar4[1] = *(undefined1 *)(iVar5 + 1);
      uVar6 = (uint)*(char *)(iVar5 + 2);
      puVar4[2] = *(char *)(iVar5 + 2);
      goto LAB_00077b8c;
    }
  }
  else if (puVar7 == (undefined *)(int)DAT_00077a96) {
    if (*DAT_00077aa4 != 4) goto LAB_00077b6e;
    if ((-1 < (int)(uint)*(byte *)(DAT_00077a9c + 3)) &&
       ((short)(ushort)*(byte *)(DAT_00077a9c + 3) <= DAT_00077a94)) {
      if (*DAT_00077aa8 != '\x05') goto LAB_00077b5e;
      *DAT_00077ae8 = *(undefined1 *)(DAT_00077a9c + 3);
      goto LAB_00077b4e;
    }
  }
  else if (puVar7 == (undefined *)(int)DAT_00077a98) {
    if (*DAT_00077aa4 != 4) goto LAB_00077b6e;
    if ((-1 < (int)(uint)*(byte *)(DAT_00077a9c + 3)) &&
       ((short)(ushort)*(byte *)(DAT_00077a9c + 3) <= DAT_00077a94)) {
      if (*DAT_00077aa8 != '\x05') goto LAB_00077b5e;
      *DAT_00077aec = *(undefined1 *)(DAT_00077a9c + 3);
      goto LAB_00077b4e;
    }
  }
  else if (puVar7 == (undefined *)(int)DAT_00077bdc) {
    if (*DAT_00077d24 != 4) goto LAB_00077b6e;
    if ((short)(ushort)*(byte *)(DAT_00077a9c + 3) <= DAT_00077bde) {
      if (*DAT_00077d28 != '\x05') goto LAB_00077b5e;
      *DAT_00077d2c = *(undefined1 *)(DAT_00077a9c + 3);
      goto LAB_00077b4e;
    }
  }
  else if (puVar7 == (undefined *)(int)DAT_00077be0) {
    if (*DAT_00077d24 != 4) goto LAB_00077b6e;
    if ((short)(ushort)*(byte *)(DAT_00077a9c + 3) <= DAT_00077bde) {
      if (*DAT_00077d28 != '\x05') goto LAB_00077b5e;
      *DAT_00077d30 = *(undefined1 *)(DAT_00077a9c + 3);
      goto LAB_00077b4e;
    }
  }
  *DAT_00077d34 = 0x7f;
  puVar4[1] = 0x2e;
  uVar6 = 0x31;
  puVar4[2] = 0x31;
LAB_00077b8c:
  *DAT_00077d38 = 3;
  return uVar6;
}

