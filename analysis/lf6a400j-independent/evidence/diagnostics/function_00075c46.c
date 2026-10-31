
int FUN_00075c46(void)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  char cStack_8;
  char cStack_7;
  char cStack_6;
  char cStack_5;
  
  puVar5 = DAT_00076104;
  pbVar4 = pbRam00075e78;
  iVar7 = iRam00075e60;
  puVar3 = DAT_00075dc0;
  if (((*(char *)(iRam00075e60 + 1) == '\x01') || (*(char *)(iRam00075e60 + 1) == '\x03')) ||
     (*(char *)(iRam00075e60 + 1) == '\x05')) {
    if (*DAT_00076110 == 2) {
      if (*pcRam00076114 == '\0') {
        func_0x00075f66(*(char *)(iRam00075e60 + 1) == '\x01');
        puVar5 = puRam0007611c;
        iVar7 = DAT_00076118;
        puVar3 = DAT_00076104;
        if (*(char *)(DAT_00076118 + 1) == '\x01') {
          DAT_00076104[2] = *puRam0007611c;
          puVar3[3] = puVar5[1];
          puVar3[4] = puVar5[2];
        }
        else {
          if (*(char *)(DAT_00076118 + 1) != '\x03') {
            if (*(char *)(DAT_00076118 + 1) == '\x05') {
              DAT_00076104[2] = puRam0007611c[3];
              puVar3[3] = puVar5[1];
              puVar3[4] = *puVar5;
              puVar3[5] = puVar5[2];
            }
            goto LAB_00075f24;
          }
          DAT_00076104[2] = puRam0007611c[1];
          puVar3[3] = puVar5[2];
          puVar3[4] = *puVar5;
        }
        puVar3[5] = puVar5[3];
      }
      else {
        if (*pcRam00076114 != *(char *)(iRam00075e60 + 1)) {
          *DAT_00076104 = 0x7f;
          puVar5[1] = 0x27;
          iVar7 = 0x7f;
          puVar5[2] = 0x7f;
          goto LAB_00075f58;
        }
        DAT_00076104[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
      }
LAB_00075f24:
      *puRam0007610c = *(undefined1 *)(iVar7 + 1);
      puVar3 = DAT_00076104;
      *DAT_00076104 = 0x67;
      cVar1 = *(char *)(iVar7 + 1);
      puVar3[1] = cVar1;
      *DAT_00076108 = 6;
      return (int)cVar1;
    }
    *DAT_00076104 = 0x7f;
    puVar5[1] = 0x27;
    iVar7 = 0x13;
    puVar5[2] = 0x13;
LAB_00075f58:
    *DAT_00076108 = 3;
    return iVar7;
  }
  if (((*(char *)(iRam00075e60 + 1) != '\x02') && (*(char *)(iRam00075e60 + 1) != '\x04')) &&
     (*(char *)(iRam00075e60 + 1) != '\x06')) {
    *DAT_00075dc0 = 0x7f;
    puVar3[1] = 0x27;
    iVar7 = 0x12;
    puVar3[2] = 0x12;
    goto LAB_00075f58;
  }
  if (*psRam00075e64 == 6) {
    if ((uint)*(byte *)(iRam00075e60 + 1) == *pbRam00075e68 + 1) {
      if (*pbRam00075e6c < *pbRam00075e70) {
        if (*psRam00075e74 == 0) {
          if (*pbRam00075e78 == 0) {
            if (*(char *)(iRam00075e60 + 1) == '\x02') {
              cStack_8 = *(char *)(iRam00075e60 + 2);
              cStack_7 = *(char *)(iRam00075e60 + 3);
              cStack_6 = *(char *)(iRam00075e60 + 4);
              cStack_5 = *(char *)(iRam00075e60 + 5);
            }
            else if (*(char *)(iRam00075e60 + 1) == '\x04') {
              cStack_8 = *(char *)(iRam00075e60 + 5);
              cStack_7 = *(char *)(iRam00075e60 + 3);
              cStack_6 = *(char *)(iRam00075e60 + 4);
              cStack_5 = *(char *)(iRam00075e60 + 2);
            }
            else if (*(char *)(iRam00075e60 + 1) == '\x06') {
              cStack_8 = *(char *)(iRam00075e60 + 3);
              cStack_7 = *(char *)(iRam00075e60 + 5);
              cStack_6 = *(char *)(iRam00075e60 + 2);
              cStack_5 = *(char *)(iRam00075e60 + 4);
            }
            if (((cStack_8 == *pcRam00075e7c) && (cStack_7 == pcRam00075e7c[1])) &&
               ((cStack_6 == pcRam00075e7c[2] && (cStack_5 == pcRam00075e7c[3]))))
            goto LAB_00075d3a;
            bVar2 = false;
          }
          else {
LAB_00075d3a:
            bVar2 = true;
          }
          if (bVar2) {
            *pbRam00075e78 = *pbRam00075e68;
            if (*pbVar4 == 1) {
              *pbRam00075e80 = *pbRam00075e80 | 0x80;
            }
            else {
              *pbRam00075e80 = *pbRam00075e80 & 0x7f;
            }
            puVar3 = DAT_00075dc0;
            *DAT_00075dc0 = 0x67;
            iVar6 = (int)*(char *)(iVar7 + 1);
            puVar3[1] = *(char *)(iVar7 + 1);
            *DAT_00075dc4 = 2;
            goto LAB_00075e9c;
          }
          *pbRam00075e6c = *pbRam00075e6c + 1;
          *psRam00075e74 = *psRam00075e84;
          puVar3 = DAT_00075dc0;
          *DAT_00075dc0 = 0x7f;
          puVar3[1] = 0x27;
          iVar6 = 0x35;
          puVar3[2] = 0x35;
        }
        else {
          *DAT_00075dc0 = 0x7f;
          puVar3[1] = 0x27;
          iVar6 = 0x37;
          puVar3[2] = 0x37;
        }
      }
      else {
        *DAT_00075dc0 = 0x7f;
        puVar3[1] = 0x27;
        iVar6 = 0x36;
        puVar3[2] = 0x36;
      }
    }
    else {
      *DAT_00075dc0 = 0x7f;
      puVar3[1] = 0x27;
      iVar6 = 0x24;
      puVar3[2] = 0x24;
    }
  }
  else {
    *DAT_00076104 = 0x7f;
    puVar5[1] = 0x27;
    iVar6 = 0x13;
    puVar5[2] = 0x13;
  }
  *DAT_00076108 = 3;
LAB_00075e9c:
  *puRam0007610c = 0;
  return iVar6;
}

