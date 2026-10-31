
void FUN_00050d88(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  
  if (DAT_fffeef9c == '\x06') {
    DAT_fffeef98 = DAT_fffeef98 & 0x1f | 0x40;
  }
  else if ((((DAT_fffeef9c == '\x04') || (DAT_fffeef9c == '\x05')) ||
           ((DAT_fffeef9c == '\t' && (DAT_fffeef9d != '\t')))) || (DAT_fffeef9c == '\n')) {
    DAT_fffeef98 = DAT_fffeef98 & 0x1f | 0x20;
  }
  else {
    DAT_fffeef98 = DAT_fffeef98 & 0x1f;
  }
  if (((DAT_fffeef9b & 3) != 0) || ((DAT_fffeef99 & 0x40) != 0)) {
    if (((DAT_fffeef9b & 3) == 0) && (((DAT_fffeef99 & 0x40) != 0 && ((DAT_fffeef9a & 4) == 0)))) {
      DAT_fffeef98 = DAT_fffeef98 & 0xe3 | 0x10;
      goto LAB_00050e80;
    }
    if ((((DAT_fffeef9b & 3) != 0) || (((DAT_fffeef99 & 0x40) == 0 || ((DAT_fffeef9a & 4) == 0))))
       && (((DAT_fffeef9b & 3) != 1 ||
           (((DAT_fffeef99 & 0x20) != 0 || ((DAT_fffeef9a & 0x20) != 0)))))) {
      if (((DAT_fffeef9b & 3) != 1) ||
         (((DAT_fffeef99 & 0x20) == 0 || ((DAT_fffeef9a & 0x20) != 0)))) {
        if (((DAT_fffeef9b & 3) == 1) &&
           (((DAT_fffeef99 & 0x20) == 0 && ((DAT_fffeef9a & 0x20) != 0)))) {
          DAT_fffeef98 = DAT_fffeef98 & 0xe3 | 8;
          goto LAB_00050e80;
        }
        if ((DAT_fffeef9b & 3) != 2) goto LAB_00050e80;
      }
      DAT_fffeef98 = DAT_fffeef98 & 0xe3 | 0xc;
      goto LAB_00050e80;
    }
  }
  DAT_fffeef98 = DAT_fffeef98 & 0xe3;
LAB_00050e80:
  if (((DAT_fffeef9b & 3) == 2) && ((DAT_fffeef9a & 2) != 0)) {
    DAT_fffeef98 = DAT_fffeef98 | 2;
  }
  else {
    DAT_fffeef98 = DAT_fffeef98 & 0xfd;
  }
  uVar3 = 0x80;
  bVar1 = 0;
  uVar2 = uVar3;
  for (cVar4 = '\a'; cVar4 != '\0'; cVar4 = cVar4 + -1) {
    if ((uVar2 & (int)(char)DAT_fffeef98) != 0) {
      bVar1 = bVar1 + 1;
    }
    uVar2 = uVar2 >> 1;
  }
  if ((bool)(bVar1 & 1)) {
    DAT_fffeef98 = DAT_fffeef98 & 0xfe;
  }
  else {
    DAT_fffeef98 = DAT_fffeef98 | 1;
  }
  if (((((DAT_fffeef9c == '\x03') || (DAT_fffeef9c == '\x04')) || (DAT_fffeef9c == '\x05')) ||
      ((DAT_fffeef9c == '\x06' || (DAT_fffeef9c == '\b')))) ||
     ((DAT_fffeef9c == '\t' || (DAT_fffeef9c == '\n')))) {
    DAT_fffeef99 = DAT_fffeef99 | 0xc0;
  }
  else {
    DAT_fffeef99 = DAT_fffeef99 & 0xbf | 0x80;
  }
  if ((((DAT_fffeef9b & 3) == 1) && ((DAT_fffeef9a & 1) != 0)) || ((DAT_fffeef9b & 3) == 2)) {
    DAT_fffeef99 = DAT_fffeef99 | 0x20;
  }
  else {
    DAT_fffeef99 = DAT_fffeef99 & 0xdf;
  }
  if ((DAT_fffeef9a & 0x10) == 0) {
    DAT_fffeef99 = DAT_fffeef99 & 0xef;
  }
  else {
    DAT_fffeef99 = DAT_fffeef99 | 0x10;
  }
  if (((DAT_fffeef9b & 3) == 1) && ((DAT_fffeef9a & 8) != 0)) {
    DAT_fffeef99 = DAT_fffeef99 | 8;
    DAT_ffff2ae6 = DAT_ffff2ae6 | 0x80;
  }
  else {
    DAT_fffeef99 = DAT_fffeef99 & 0xf7;
  }
  if ((DAT_fffeef99 & 4) == 0) {
    DAT_fffeef99 = DAT_fffeef99 | 4;
  }
  else {
    DAT_fffeef99 = DAT_fffeef99 & 0xfb;
  }
  bVar1 = 0;
  for (cVar4 = '\a'; cVar4 != '\0'; cVar4 = cVar4 + -1) {
    if ((uVar3 & (int)(char)(DAT_fffeef99 & 0xfd)) != 0) {
      bVar1 = bVar1 + 1;
    }
    uVar3 = uVar3 >> 1;
  }
  if ((bool)(bVar1 & 1)) {
    DAT_fffeef99 = DAT_fffeef99 & 0xfc;
  }
  else {
    DAT_fffeef99 = DAT_fffeef99 & 0xfd | 1;
  }
  DAT_fffeef9d = DAT_fffeef9c;
  return;
}

