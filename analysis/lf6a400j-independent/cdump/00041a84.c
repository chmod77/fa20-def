
uint FUN_00041a84(void)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = false;
  if ((DAT_fffee6d2 & 0x20) == 0) {
    DAT_ffff2a40 = '\x04';
    DAT_fffef734 = DAT_fffef734 & 0xf7;
LAB_00041ab0:
    DAT_fffef78c = DAT_fffef78c | 0x80;
    bVar1 = true;
  }
  else {
    if (DAT_ffff2a40 == '\0') {
      DAT_fffef734 = DAT_fffef734 | 8;
      goto LAB_00041ab0;
    }
    DAT_ffff2a40 = DAT_ffff2a40 + -1;
  }
  if (bVar1) {
    DAT_fffee7c2 = DAT_fffee6cf;
    DAT_fffee7c3 = 0xff;
  }
  bVar1 = false;
  if (((DAT_fffee6d2 & 2) == 0) || ((DAT_fffee6d2 & 0x40) != 0)) {
    if (((DAT_fffee6d2 & 2) == 0) || (uVar2 = (uint)(char)DAT_fffee6d2, (uVar2 & 0x40) == 0)) {
      uVar2 = (uint)(char)DAT_fffee6d2;
      DAT_ffff2a41 = '\x04';
      goto LAB_00041b3a;
    }
    if (DAT_ffff2a41 != '\0') {
      DAT_ffff2a41 = DAT_ffff2a41 + -1;
      goto LAB_00041b3a;
    }
    DAT_fffef734 = DAT_fffef734 | 4;
  }
  else {
    DAT_ffff2a41 = '\x04';
    DAT_fffef734 = DAT_fffef734 & 0xfb;
  }
  DAT_fffef78b = DAT_fffef78b | 0x80;
  uVar2 = 0x42;
  bVar1 = true;
LAB_00041b3a:
  if (bVar1) {
    DAT_fffee7c0 = DAT_fffee6cf;
    DAT_fffee7c1 = DAT_ffff2a3f;
  }
  return uVar2;
}

