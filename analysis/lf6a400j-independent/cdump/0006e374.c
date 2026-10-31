
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0006e374(void)

{
  uint uVar1;
  undefined1 uVar2;
  byte *pbVar3;
  uint uVar4;
  
  uVar1 = (uint)DAT_fffeeab7;
  if ((uVar1 & 0x80) != 0) {
    for (uVar4 = 0; (uVar4 & 0xffff) == 0; uVar4 = uVar4 + 1) {
      uVar4 = uVar4 & 0xffff;
      pbVar3 = (byte *)(uVar4 - 0x11542);
      if ((*(byte *)(uVar4 - 0x11542) & 1) == 0) {
        uVar1 = (int)(char)*pbVar3;
        if (((int)(char)*pbVar3 & 0x40U) != 0) {
          uVar1 = (int)*(char *)(uVar4 - 0x11548);
          if (((((int)*(char *)(uVar4 - 0x11548) & 8U) == 0) &&
              (uVar1 = (int)*(char *)(uVar4 - 0x11548),
              ((int)*(char *)(uVar4 - 0x11548) & 0x40U) == 0)) &&
             (uVar1 = (int)*(char *)(uVar4 - 0x11548),
             ((int)*(char *)(uVar4 - 0x11548) & 0x80U) != 0)) {
            uVar2 = FUN_0016bd28(*(byte *)(uVar4 - 0x1152a) - 1);
            *(undefined1 *)(uVar4 - 0x1152a) = uVar2;
            uVar1 = uVar4;
            if (*(char *)(uVar4 - 0x1152a) == '\0') {
              FUN_0006cbd0(uVar4);
              *(byte *)(uVar4 - 0x11548) = *(byte *)(uVar4 - 0x11548) & 0xdf;
              FUN_0006cb8a(uVar4,0x20);
              FUN_0006e334(uVar4);
              uVar1 = FUN_0006d0b6(uVar4);
            }
          }
        }
      }
      else {
        *pbVar3 = *pbVar3 & 0xfe;
        FUN_0006cbd0(uVar4);
        if (*(char *)(uVar4 - 0x1152d) != '\0') {
          *(char *)(uVar4 - 0x1152d) = *(char *)(uVar4 - 0x1152d) + -1;
          uVar1 = uVar4;
          if (*(char *)(uVar4 - 0x1152d) != '\0') goto LAB_0006e438;
          *(byte *)(uVar4 - 0x11548) = *(byte *)(uVar4 - 0x11548) & 0xf7;
          FUN_0006cb8a(uVar4,8);
        }
        uVar1 = FUN_0006e334(uVar4);
      }
LAB_0006e438:
    }
  }
  _DAT_fffeeab4 = 0;
  DAT_fffeeab6 = 0;
  DAT_fffeeab7 = 0;
  for (uVar4 = 0; (uVar4 & 0xffff) == 0; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xffff;
    *(undefined1 *)(uVar4 - 0x11545) = 0;
    *(byte *)(uVar4 - 0x11548) = *(byte *)(uVar4 - 0x11548) & 0xbf;
    *(byte *)(uVar4 - 0x11548) = *(byte *)(uVar4 - 0x11548) & 0xfe;
    uVar1 = (int)*(char *)(uVar4 - 0x11548) & 0x7f;
    *(char *)(uVar4 - 0x11548) = (char)uVar1;
  }
  DAT_fffee706 = 0;
  return uVar1;
}

