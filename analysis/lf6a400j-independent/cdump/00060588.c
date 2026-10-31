
uint FUN_00060588(void)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint extraout_r2;
  uint uVar4;
  
  uVar1 = (uint)DAT_fffeeec2;
  if ((uVar1 & 4) != 0) {
    uVar1 = 0;
    while ((uVar1 & 0xff) < 8) {
      uVar4 = uVar1 & 0xff;
      bVar2 = *(byte *)(uVar4 - 0xcb58);
      uVar1 = __shl_r0_by_r1(1,uVar1 & 0xff);
      if ((uVar1 & extraout_r2) == 0) {
        bVar2 = bVar2 & 0xfe;
      }
      else {
        bVar2 = bVar2 | 7;
      }
      if ((uVar1 & DAT_ffff312b) == 0) {
        bVar2 = bVar2 & 0xf7;
      }
      else {
        if ((uVar1 & DAT_ffff3158) == 0) {
          FUN_0006098c(uVar4 + 0x338);
        }
        bVar2 = bVar2 | 0x28;
      }
      *(byte *)(uVar4 - 0xcb58) = bVar2;
      uVar1 = uVar4 + 1;
    }
    DAT_ffff3158 = DAT_ffff312b;
    if ((DAT_fffef3aa & 8) == 0) {
      bVar2 = DAT_ffff34b3 & 0xfe;
    }
    else {
      bVar2 = DAT_ffff34b3 | 7;
    }
    if ((DAT_ffff2fe9 & 8) == 0) {
      DAT_ffff34b3 = bVar2 & 0xf7;
    }
    else {
      if ((DAT_ffff3159 & 8) == 0) {
        FUN_0006098c(0x343);
      }
      DAT_ffff34b3 = bVar2 | 0x28;
    }
    if ((DAT_fffef3aa & 0x10) == 0) {
      bVar2 = DAT_ffff34b4 & 0xfe;
    }
    else {
      bVar2 = DAT_ffff34b4 | 7;
    }
    if ((DAT_ffff2fe9 & 0x10) == 0) {
      DAT_ffff34b4 = bVar2 & 0xf7;
    }
    else {
      if ((DAT_ffff3159 & 0x10) == 0) {
        FUN_0006098c(0x344);
      }
      DAT_ffff34b4 = bVar2 | 0x28;
    }
    if ((DAT_fffef3aa & 0x20) == 0) {
      bVar2 = DAT_ffff34b5 & 0xfe;
    }
    else {
      bVar2 = DAT_ffff34b5 | 7;
    }
    if ((DAT_ffff2fe9 & 0x20) == 0) {
      DAT_ffff34b5 = bVar2 & 0xf7;
    }
    else {
      if ((DAT_ffff3159 & 0x20) == 0) {
        FUN_0006098c(0x345);
      }
      DAT_ffff34b5 = bVar2 | 0x28;
    }
    if ((DAT_fffef3aa & 0x40) == 0) {
      bVar2 = DAT_ffff34b6 & 0xfe;
    }
    else {
      bVar2 = DAT_ffff34b6 | 7;
    }
    if ((DAT_ffff2fe9 & 0x40) == 0) {
      DAT_ffff34b6 = bVar2 & 0xf7;
    }
    else {
      if ((DAT_ffff3159 & 0x40) == 0) {
        FUN_0006098c(0x346);
      }
      DAT_ffff34b6 = bVar2 | 0x28;
    }
    if (((int)(char)DAT_fffef3aa & 0x80U) == 0) {
      bVar2 = DAT_ffff34b7 & 0xfe;
    }
    else {
      bVar2 = DAT_ffff34b7 | 7;
    }
    if (((int)(char)DAT_ffff2fe9 & 0x80U) == 0) {
      DAT_ffff34b7 = bVar2 & 0xf7;
    }
    else {
      if (((int)(char)DAT_ffff3159 & 0x80U) == 0) {
        FUN_0006098c(0x347);
      }
      DAT_ffff34b7 = bVar2 | 0x28;
    }
    bVar2 = DAT_ffff3159 | 8;
    if ((DAT_ffff2fe9 & 8) == 0) {
      bVar2 = DAT_ffff3159 & 0xf7;
    }
    bVar3 = bVar2 | 0x10;
    if ((DAT_ffff2fe9 & 0x10) == 0) {
      bVar3 = bVar2 & 0xef;
    }
    bVar2 = bVar3 | 0x20;
    if ((DAT_ffff2fe9 & 0x20) == 0) {
      bVar2 = bVar3 & 0xdf;
    }
    bVar3 = bVar2 | 0x40;
    if ((DAT_ffff2fe9 & 0x40) == 0) {
      bVar3 = bVar2 & 0xbf;
    }
    uVar1 = (int)(char)bVar3 | 0x80;
    if (((int)(char)DAT_ffff2fe9 & 0x80U) == 0) {
      uVar1 = (int)(char)bVar3 & 0x7f;
    }
    DAT_ffff3159 = (byte)uVar1;
  }
  return uVar1;
}

