
uint FUN_0004bb40(void)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  
  uVar1 = (uint)DAT_fffeed8a;
  uVar2 = 5;
  if (DAT_fffeed8a == -0x41) {
    DAT_fffeee16 = 0x80;
    DAT_fffeee17 = 0xf0;
    DAT_fffeee18 = 0x10;
    DAT_fffeee1a = 0xff;
    DAT_fffeee19 = 0x39;
    cVar3 = -0x48;
    for (uVar1 = 0; (uVar1 & 0xff) < 3; uVar1 = uVar1 + 1) {
      uVar1 = uVar1 & 0xff;
      cVar3 = cVar3 + (&DAT_0000dacb)[uVar1];
      (&DAT_fffeee16)[uVar2 & 0xff] = (&DAT_0000dacb)[uVar1];
      uVar2 = (uVar2 & 0xff) + 1;
    }
    for (uVar1 = 0; (uVar1 & 0xff) < 5; uVar1 = uVar1 + 1) {
      uVar1 = uVar1 & 0xff;
      cVar3 = cVar3 + (&DAT_0000dac6)[uVar1];
      (&DAT_fffeee16)[uVar2 & 0xff] = (&DAT_0000dac6)[uVar1];
      uVar2 = (uVar2 & 0xff) + 1;
    }
    for (uVar1 = 0; (uVar1 & 0xff) < 0x60; uVar1 = uVar1 + 1) {
      uVar1 = uVar1 & 0xff;
      cVar3 = cVar3 + (&DAT_0000dace)[uVar1];
      (&DAT_fffeee16)[uVar2 & 0xff] = (&DAT_0000dace)[uVar1];
      uVar2 = (uVar2 & 0xff) + 1;
    }
    (&DAT_fffeee16)[uVar2 & 0xff] = cVar3;
    uVar1 = (int)(char)(DAT_fffeeea8 & 0xfe | 0x20) | 2;
    DAT_fffeeea8 = (byte)uVar1;
  }
  return uVar1;
}

