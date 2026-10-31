
void FUN_0010ae28(int param_1,int param_2,int param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,char param_11,char param_12,
                 char param_13,char param_14,char param_15,char param_16,char param_17,byte param_18
                 ,char param_19,byte param_20,byte *param_21)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  
  bVar1 = *(byte *)(param_2 + 0x54);
  bVar2 = *(byte *)(param_3 + 0x12);
  bVar3 = *(byte *)(param_3 + 0x15);
  bVar4 = *(byte *)(param_3 + 0x16);
  bVar5 = *(byte *)(param_3 + 0x28);
  bVar6 = *(byte *)(param_3 + 0x4d);
  bVar7 = *(byte *)(param_3 + 0x54);
  bVar8 = *(byte *)(param_3 + 0x55);
  bVar9 = *(byte *)(param_1 + 0x12);
  bVar10 = *(byte *)(param_1 + 0x4d);
  bVar11 = *(byte *)(param_1 + 0x54);
  if (param_4 == -0x5b) {
    if ((param_5 == '\0') && (DAT_fffedc9d == -0x5b)) {
      DAT_fffedc9c = param_20 & 0xe5;
      if (((bVar2 & 0x10) == 0) || (param_9 == '\x01')) {
        DAT_fffedc9c = param_20 & 0x65;
      }
      uVar12 = (uint)(char)bVar4;
      if (((((uVar12 & 0x80) == 0) && ((uVar12 & 0x20) == 0)) || (param_10 == '\x01')) &&
         ((((bVar5 & 0x20) == 0 || (param_11 == '\x01')) &&
          (((uVar12 & 0x10) == 0 &&
           (((uVar12 & 0x40) == 0 && ((*(byte *)(param_3 + 0x10) & 0x20) == 0)))))))) {
        DAT_fffedc9c = DAT_fffedc9c & 0xbf;
      }
      if ((((((((*(byte *)(param_3 + 0x11) & 1) == 0) &&
              (uVar12 = (uint)*(char *)(param_3 + 0x4c), (uVar12 & 0x80) == 0)) &&
             ((uVar12 & 0x40) == 0)) && (((uVar12 & 8) == 0 && ((uVar12 & 4) == 0)))) ||
           (param_12 == '\x01')) &&
          ((((bVar8 & 8) == 0 && ((bVar8 & 0x10) == 0)) || (param_13 == '\x01')))) &&
         (((((uVar12 = (uint)*(char *)(param_3 + 0x4f), (uVar12 & 0x80) == 0 &&
             ((param_6 == '\0' || ((param_6 != '\0' && ((uVar12 & 8) == 0)))))) &&
            ((param_7 == '\0' ||
             (((param_7 != '\0' && ((uVar12 & 0x40) == 0)) && ((uVar12 & 4) == 0)))))) ||
           (param_14 == '\x01')) &&
          ((((*(byte *)(param_3 + 0x39) & 1) == 0 || (param_15 == '\x01')) &&
           (((((bVar3 & 1) == 0 &&
              (((bVar3 & 0x40) == 0 && (((int)*(char *)(param_3 + 0x66) & 0x80U) == 0)))) ||
             (param_16 == '\x01')) &&
            (((((bVar3 & 0x10) == 0 && ((bVar3 & 4) == 0)) && ((bVar5 & 2) == 0)) ||
             (param_19 == '\x01')))))))))) {
        DAT_fffedc9c = DAT_fffedc9c & 0xdf;
      }
      if (((param_8 != '\0') &&
          ((((bVar6 & 8) == 0 || ((*(byte *)(param_3 + 0x4e) & 0x20) == 0)) || ((bVar6 & 0x20) == 0)
           ))) || (param_8 == '\0')) {
        DAT_fffedc9c = DAT_fffedc9c & 0xfb;
      }
      if (((bVar2 & 1) != 0) && (param_17 != '\x01')) goto LAB_0010b4ec;
      goto LAB_0010b4dc;
    }
  }
  else if (param_5 == '\0') {
    DAT_fffedc9c = param_20 & 0xe5;
    if (((((((((*(byte *)(param_2 + 0x12) & 0x10) == 0) && ((bVar2 & 0x10) == 0)) &&
            ((bVar1 & 1) == 0)) &&
           (((((bVar7 & 1) == 0 && ((bVar1 & 4) == 0)) &&
             (((bVar7 & 4) == 0 &&
              (((*(byte *)(param_2 + 0xc) & 4) == 0 && ((*(byte *)(param_3 + 0xc) & 4) == 0)))))) &&
            ((*(byte *)(param_2 + 0xc) & 8) == 0)))) &&
          (((((*(byte *)(param_3 + 0xc) & 8) == 0 && ((bVar1 & 2) == 0)) && ((bVar7 & 2) == 0)) &&
           (((bVar1 & 8) == 0 && ((bVar7 & 8) == 0)))))) &&
         (((*(byte *)(param_2 + 0x3b) & 2) == 0 &&
          (((*(byte *)(param_3 + 0x3b) & 2) == 0 && ((*(byte *)(param_2 + 0x3b) & 1) == 0)))))) &&
        ((*(byte *)(param_3 + 0x3b) & 1) == 0)) ||
       ((((((((bVar9 & 0x10) != 0 || ((bVar11 & 1) != 0)) || ((bVar11 & 4) != 0)) ||
           (((*(byte *)(param_1 + 0xc) & 4) != 0 || ((*(byte *)(param_1 + 0xc) & 8) != 0)))) ||
          ((bVar11 & 2) != 0)) || (((bVar11 & 8) != 0 || ((*(byte *)(param_1 + 0x3b) & 2) != 0))))
        || ((*(byte *)(param_1 + 0x3b) & 1) != 0)))) {
      DAT_fffedc9c = param_20 & 0x65;
    }
    uVar12 = (uint)*(char *)(param_2 + 0x16);
    if ((((((uVar12 & 0x20) == 0) && ((bVar4 & 0x20) == 0)) && ((uVar12 & 0x80) == 0)) &&
        (((((bVar4 & 0x80) == 0 && ((*(byte *)(param_2 + 0x28) & 0x20) == 0)) &&
          (((bVar5 & 0x20) == 0 && (((uVar12 & 0x10) == 0 && ((bVar4 & 0x10) == 0)))))) &&
         (((uVar12 & 0x40) == 0 &&
          ((((bVar4 & 0x40) == 0 && ((*(byte *)(param_2 + 0x10) & 0x20) == 0)) &&
           ((*(byte *)(param_3 + 0x10) & 0x20) == 0)))))))) ||
       ((((uVar12 = (uint)*(char *)(param_1 + 0x16), (uVar12 & 0x20) != 0 || ((uVar12 & 0x80) != 0))
         || (((*(byte *)(param_1 + 0x28) & 0x20) != 0 ||
             (((uVar12 & 0x10) != 0 || ((uVar12 & 0x40) != 0)))))) ||
        ((*(byte *)(param_1 + 0x10) & 0x20) != 0)))) {
      DAT_fffedc9c = DAT_fffedc9c & 0xbf;
    }
    if ((((((((((*(byte *)(param_2 + 0x11) & 1) == 0) && ((*(byte *)(param_3 + 0x11) & 1) == 0)) &&
             (uVar12 = (uint)*(char *)(param_2 + 0x4c), (uVar12 & 0x80) == 0)) &&
            ((uVar13 = (uint)*(char *)(param_3 + 0x4c), (uVar13 & 0x80) == 0 &&
             ((uVar12 & 0x40) == 0)))) &&
           (((uVar13 & 0x40) == 0 && (((uVar12 & 8) == 0 && ((uVar13 & 8) == 0)))))) &&
          (((uVar12 & 4) == 0 &&
           (((((((uVar13 & 4) == 0 && ((*(byte *)(param_2 + 0x55) & 8) == 0)) && ((bVar8 & 8) == 0))
              && ((((*(byte *)(param_2 + 0x55) & 0x10) == 0 && ((bVar8 & 0x10) == 0)) &&
                  ((((int)*(char *)(param_2 + 0x4f) & 0x80U) == 0 &&
                   ((((int)*(char *)(param_3 + 0x4f) & 0x80U) == 0 &&
                    ((*(byte *)(param_2 + 0x39) & 1) == 0)))))))) &&
             ((*(byte *)(param_3 + 0x39) & 1) == 0)) &&
            ((((*(byte *)(param_2 + 0x15) & 1) == 0 && ((bVar3 & 1) == 0)) &&
             ((*(byte *)(param_2 + 0x15) & 0x40) == 0)))))))) &&
         (((bVar3 & 0x40) == 0 && (((int)*(char *)(param_2 + 0x66) & 0x80U) == 0)))) &&
        (((int)*(char *)(param_3 + 0x66) & 0x80U) == 0)) ||
       (((((*(byte *)(param_1 + 0x11) & 1) != 0 ||
          (uVar12 = (uint)*(char *)(param_1 + 0x4c), (uVar12 & 0x80) != 0)) ||
         (((uVar12 & 0x40) != 0 ||
          (((((uVar12 & 8) != 0 || ((uVar12 & 4) != 0)) || ((*(byte *)(param_1 + 0x55) & 8) != 0))
           || (((*(byte *)(param_1 + 0x55) & 0x10) != 0 ||
               (((int)*(char *)(param_1 + 0x4f) & 0x80U) != 0)))))))) ||
        ((((*(byte *)(param_1 + 0x39) & 1) != 0 ||
          (((*(byte *)(param_1 + 0x15) & 1) != 0 || ((*(byte *)(param_1 + 0x15) & 0x40) != 0)))) ||
         (((int)*(char *)(param_1 + 0x66) & 0x80U) != 0)))))) {
      DAT_fffedc9c = DAT_fffedc9c & 0xdf;
    }
    if ((((((*(byte *)(param_2 + 0x4d) & 8) == 0) && ((bVar6 & 8) == 0)) &&
         ((*(byte *)(param_2 + 0x4d) & 0x20) == 0)) && ((bVar6 & 0x20) == 0)) ||
       (((((bVar9 & 8) != 0 || ((bVar10 & 8) != 0)) ||
         (((*(byte *)(param_1 + 0x4e) & 0x20) != 0 ||
          (((bVar10 & 2) != 0 || ((bVar10 & 0x20) != 0)))))) || (2 < param_18)))) {
      DAT_fffedc9c = DAT_fffedc9c & 0xfb;
    }
    if ((((*(byte *)(param_2 + 0x12) & 1) != 0) || ((bVar2 & 1) != 0)) && ((bVar9 & 1) == 0))
    goto LAB_0010b4ec;
LAB_0010b4dc:
    DAT_fffedc9c = DAT_fffedc9c & 0xfe;
    goto LAB_0010b4ec;
  }
  DAT_fffedc9c = 0xff;
LAB_0010b4ec:
  *param_21 = DAT_fffedc9c;
  DAT_fffedc9d = param_4;
  return;
}

