
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0004b7ec(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar10 = 5;
  uVar1 = (uint)DAT_fffeed8a;
  uVar12 = 6;
  if (DAT_fffeed8a == -0x58) {
    if ((DAT_fffeed8b & 1) == 0) {
      DAT_fffeeea8 = DAT_fffeeea8 & 0xfe | 0x20;
    }
    else {
      DAT_fffeeea8 = DAT_fffeeea8 & 0xdf | 1;
    }
    pcVar8 = &DAT_0000dabe;
    DAT_fffeee16 = 0x80;
    pcVar6 = &DAT_0000dac0;
    DAT_fffeee17 = 0xf0;
    pcVar7 = "\x10";
    DAT_fffeee18 = 0x10;
    DAT_fffeee1a = 0xe8;
    iVar2 = __sdiv32_r1_by_r0(DAT_fffeed89 - 2,3);
    DAT_fffeee19 = (char)iVar2 + 1;
    cVar9 = *pcVar8 + *pcVar6 + *pcVar7 + DAT_fffeee19 + -0x18;
    for (uVar1 = 0; (int)(uVar1 & 0xff) < (int)(DAT_fffeee19 - 1); uVar1 = uVar1 + 1) {
      _DAT_fffeed80 = (char *)0x0;
      uVar13 = uVar12 & 0xff;
      uVar11 = uVar10 & 0xff;
      uVar10 = uVar11 + 1;
      if (0xfd < (byte)(&DAT_fffeed86)[uVar13]) {
        _DAT_fffeed80 = (char *)0xff000000;
      }
      uVar3 = uVar13 + 1 & 0xff;
      uVar4 = uVar3 + 1 & 0xff;
      uVar12 = uVar4 + 1;
      pcVar6 = (char *)((int)_DAT_fffeed80 + (uint)(byte)(&DAT_fffeed86)[uVar13] * 0x10000 +
                        (uint)(byte)(&DAT_fffeed86)[uVar3] * 0x100 +
                       (uint)(byte)(&DAT_fffeed86)[uVar4]);
      _DAT_fffeed80 = pcVar6;
      if (&UNK_0000018f < pcVar6) {
        if ((pcVar6 < "") || (&DAT_0017ffff < pcVar6)) {
          if ((pcVar6 < (char *)0x180000) || ((char *)0xfffe7fff < pcVar6)) {
            (&DAT_fffeee16)[uVar11] = *pcVar6;
            cVar5 = *pcVar6;
          }
          else {
            cVar5 = -1;
            (&DAT_fffeee16)[uVar11] = 0xff;
          }
        }
        else {
          (&DAT_fffeee16)[uVar11] = 0;
          cVar5 = '\0';
        }
      }
      else {
        (&DAT_fffeee16)[uVar11] = *(&PTR_DAT_0015f9d8)[(int)pcVar6];
        cVar5 = *(&PTR_DAT_0015f9d8)[(int)_DAT_fffeed80];
      }
      cVar9 = cVar9 + cVar5;
    }
    (&DAT_fffeee16)[uVar10 & 0xff] = cVar9;
    uVar1 = (int)(char)DAT_fffeeea8 | 2;
    DAT_fffeeea8 = (byte)uVar1;
  }
  return uVar1;
}

