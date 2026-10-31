
uint FUN_0003c1d4(void)

{
  uint uVar1;
  
  DAT_ffff2aa4 = DAT_ffff2aa3;
  uVar1 = (uint)DAT_fffee710;
  if ((uVar1 & 0x80) == 0) {
    if (DAT_ffff2aa3 != '\0') {
      if (DAT_ffff2aa3 == '\x01') {
        if ((DAT_ffff000f & 2) != 0) {
LAB_0003c244:
          DAT_ffff2aa3 = 2;
          return (int)(char)DAT_ffff000f;
        }
        if (((int)(char)DAT_ffff000f & 0x40U) != 0) {
          DAT_ffff2aa3 = 0;
          return (int)(char)DAT_ffff000f;
        }
        if (((int)(char)DAT_ffff000f & 4U) != 0) {
          DAT_ffff2aa3 = 0;
          return (int)(char)DAT_ffff000f;
        }
      }
      else if ((((DAT_ffff000f & 0x20) == 0) && ((DAT_ffff000f & 8) == 0)) &&
              ((DAT_ffff000f & 0x10) == 0)) {
        if (((int)(char)DAT_ffff000f & 0x40U) != 0) {
          DAT_ffff2aa3 = 0;
          return (int)(char)DAT_ffff000f;
        }
        if (((int)(char)DAT_ffff000f & 4U) != 0) {
          DAT_ffff2aa3 = 0;
          return (int)(char)DAT_ffff000f;
        }
        goto LAB_0003c244;
      }
LAB_0003c24a:
      DAT_ffff2aa3 = 1;
      return (int)(char)DAT_ffff000f;
    }
    if ((DAT_ffff000f & 2) != 0) goto LAB_0003c244;
    if ((((DAT_ffff000f & 0x20) != 0) || ((DAT_ffff000f & 8) != 0)) ||
       (uVar1 = (uint)(char)DAT_ffff000f, (uVar1 & 0x10) != 0)) goto LAB_0003c24a;
  }
  DAT_ffff2aa3 = 0;
  return uVar1;
}

