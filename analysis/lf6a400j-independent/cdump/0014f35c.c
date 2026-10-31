
void FUN_0014f35c(void)

{
  byte bVar1;
  char cVar2;
  
  cVar2 = DAT_ffff2090;
  if (DAT_ffff2090 == '\x01') {
    if ((DAT_ffff1e16 & 2) != 0) {
      if (((int)DAT_ffff2b64 & 0x80U) == 0) goto LAB_0014f48e;
LAB_0014f47c:
      cVar2 = '\x02';
      goto LAB_0014f48e;
    }
LAB_0014f3c2:
    cVar2 = '\x04';
  }
  else {
    if (DAT_ffff2090 == '\x02') {
      if ((DAT_ffff1e16 & 2) == 0) goto LAB_0014f3c2;
      if (DAT_ffff2093 == '\0') {
        if (DAT_ffff2c84 != '\0') {
          cVar2 = '\x03';
        }
        goto LAB_0014f48e;
      }
    }
    else if (DAT_ffff2090 == '\x03') {
      if ((DAT_ffff1e16 & 2) == 0) {
        if ((DAT_ffff2ca8 == '\0') && (DAT_ffff2093 == '\0')) goto LAB_0014f48e;
        goto LAB_0014f3c2;
      }
      if (DAT_ffff2093 == '\0') {
        bVar1 = FUN_0016acd6(&DAT_00014db0,(int)DAT_ffff2c71);
        if (bVar1 <= DAT_ffff1a3c) goto LAB_0014f48e;
        goto LAB_0014f47c;
      }
    }
    else if ((DAT_ffff2090 != '\x04') || ((DAT_ffff1e16 & 2) == 0)) goto LAB_0014f48e;
    cVar2 = '\x01';
  }
LAB_0014f48e:
  DAT_ffff2091 = DAT_ffff2090;
  DAT_ffff2090 = cVar2;
  cVar2 = FUN_0014e89c();
  if (cVar2 == '\0') {
    return;
  }
  FUN_0014e754();
  return;
}

