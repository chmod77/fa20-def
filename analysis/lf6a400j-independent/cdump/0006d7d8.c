
void FUN_0006d7d8(void)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  uVar5 = 0;
  do {
    if (6 < (uVar5 & 0xff)) {
      return;
    }
    uVar5 = uVar5 & 0xff;
    iVar1 = (uint)*(byte *)((int)&PTR_DAT_0002ac10 + uVar5) * 3;
    iVar2 = uVar5 * 3;
    pbVar7 = (byte *)(iVar2 + -0x11441);
    pbVar4 = (byte *)(iVar2 + -0x1142c);
    pbVar6 = (byte *)(iVar1 + -0x11417);
    if (((&DAT_0002abe9)[(uint)*(byte *)((int)&PTR_DAT_0002ac10 + uVar5) * 6] & 0x10) != 0) {
      if (((*(char *)(uVar5 - 0x113de) != '\0') && ((*pbVar7 & 0x60) == 0)) &&
         ((DAT_fffeebb6 & 0x40) != 0)) {
        *(char *)(uVar5 - 0x113de) = *(char *)(uVar5 - 0x113de) + -1;
      }
      if (*(char *)(uVar5 - 0x113fa) != '\0') {
        if (((int)(char)*pbVar7 & 0xe0U) == 0x80) {
          if ((DAT_fffeebb6 & 0x40) != 0) goto LAB_0006d8c0;
        }
        else if (((int)(char)*pbVar7 & 0xe0U) == 0) {
          if ((DAT_fffeebb6 & 0x40) == 0) {
            uVar3 = FUN_0000152c(*(byte *)(uVar5 - 0x113ec) + 1);
            *(undefined1 *)(uVar5 - 0x113ec) = uVar3;
            if (*(byte *)(uVar5 - 0x113ec) < 0x50) goto LAB_0006d8d0;
          }
LAB_0006d8c0:
          *(char *)(uVar5 - 0x113fa) = *(char *)(uVar5 - 0x113fa) + -1;
          *(undefined1 *)(uVar5 - 0x113ec) = 0;
        }
      }
LAB_0006d8d0:
      if (*(char *)(uVar5 - 0x113f3) != '\0') {
        if (((int)(char)*pbVar4 & 0xe0U) == 0x80) {
          if ((DAT_fffeebb7 & 0x40) != 0) goto LAB_0006d9a8;
        }
        else if (((((int)(char)*pbVar4 & 0xc0U) == 0) && (*(char *)(uVar5 - 0x113bd) == '\0')) &&
                ((*(byte *)(uVar5 - 0x113cb) < 4 && (*(char *)(uVar5 - 0x113c4) == '\0')))) {
          if ((DAT_fffeebb7 & 0x40) == 0) {
            uVar3 = FUN_0000152c(*(byte *)(uVar5 - 0x113e5) + 1);
            *(undefined1 *)(uVar5 - 0x113e5) = uVar3;
            if (0x4f < *(byte *)(uVar5 - 0x113e5)) goto LAB_0006d9a8;
          }
          else if (*(char *)(uVar5 - 0x113cb) == '\0') {
LAB_0006d9a8:
            *(char *)(uVar5 - 0x113f3) = *(char *)(uVar5 - 0x113f3) + -1;
            *(undefined1 *)(uVar5 - 0x113e5) = 0;
          }
        }
      }
      if (((((int)(char)*pbVar7 & 0x80U) == 0) && (((int)(char)*pbVar4 & 0x80U) == 0)) &&
         (*(char *)(uVar5 - 0x113de) == '\0')) {
        *pbVar6 = *pbVar6 & 0x7f;
      }
      if (((*pbVar7 & 0x10) == 0) && ((*pbVar4 & 0x10) == 0)) {
        *pbVar6 = *pbVar6 & 0xef;
      }
      else {
        *pbVar6 = *pbVar6 | 0x10;
      }
      if (((*pbVar7 & 8) == 0) && ((*pbVar4 & 8) == 0)) {
        *pbVar6 = *pbVar6 & 0xf7;
      }
      if (((*pbVar7 & 4) == 0) && ((*pbVar4 & 4) == 0)) {
        *pbVar6 = *pbVar6 & 0xfb;
      }
      else {
        *pbVar6 = *pbVar6 | 4;
      }
      if (((((*pbVar7 & 1) == 0) && ((*pbVar4 & 1) == 0)) && (*(char *)(uVar5 - 0x113fa) == '\0'))
         && (*(char *)(uVar5 - 0x113f3) == '\0')) {
        *pbVar6 = *pbVar6 & 0xfe;
      }
      else {
        *pbVar6 = *pbVar6 | 1;
      }
      if (*(byte *)(iVar2 + -0x1143f) < *(byte *)(iVar2 + -0x1142a)) {
        *(byte *)(iVar1 + -0x11415) = *(byte *)(iVar2 + -0x1142a);
      }
      else {
        *(byte *)(iVar1 + -0x11415) = *(byte *)(iVar2 + -0x1143f);
      }
      if ((byte)(&DAT_fffeebc0)[iVar2] < (byte)(&DAT_fffeebd5)[iVar2]) {
        *(byte *)(iVar1 + -0x11416) = (&DAT_fffeebd5)[iVar2];
      }
      else {
        *(byte *)(iVar1 + -0x11416) = (&DAT_fffeebc0)[iVar2];
      }
    }
    if (((*pbVar7 & 2) == 0) && ((*pbVar4 & 2) == 0)) {
      *pbVar6 = *pbVar6 & 0xfd;
    }
    *pbVar7 = *pbVar7 | 0x40;
    *pbVar7 = *pbVar7 & 0xdf;
    *pbVar4 = *pbVar4 | 0x40;
    *pbVar4 = *pbVar4 & 0xdf;
    *pbVar6 = *pbVar6 | 0x40;
    *pbVar6 = *pbVar6 & 0xdf;
    uVar5 = uVar5 + 1;
  } while( true );
}

