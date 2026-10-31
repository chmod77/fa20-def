
/* WARNING: Removing unreachable block (ram,0x0006a498) */
/* WARNING: Removing unreachable block (ram,0x0006a4a0) */
/* WARNING: Removing unreachable block (ram,0x0006a4aa) */

uint FUN_0006a444(void)

{
  byte bVar1;
  uint uVar2;
  char cStack_8;
  
  bVar1 = DAT_fffee6d0;
  uVar2 = (uint)DAT_fffee68d;
  if (((((uVar2 & 0x20) == 0) || (uVar2 = (uint)DAT_fffee68d, (uVar2 & 8) != 0)) ||
      (DAT_ffff2a22 != '\0')) ||
     ((uVar2 = (uint)DAT_ffffab40, (uVar2 & 0x40) != 0 ||
      (uVar2 = (uint)DAT_ffff6553, (uVar2 & 0x20) == 0)))) {
    DAT_ffff2abb = 4;
    DAT_ffff2abc = 4;
    return uVar2;
  }
  DAT_fffef741 = DAT_fffef741 & 0xfe;
  DAT_fffef7f1 = DAT_fffef7f1 | 0x80;
  DAT_ffff2abb = 4;
  DAT_fffee7c7 = 0xff;
  DAT_fffee7c6 = DAT_fffee6d0;
  cStack_8 = '\0';
  DAT_ffff2aba = FUN_0016b9a4(&PTR_DAT_00168ba4,(int)DAT_ffffab41);
  if (DAT_ffffab41 == '\0') {
    if (bVar1 < DAT_ffff2aba) {
      if (DAT_ffff2abc != '\0') {
        DAT_ffff2abc = DAT_ffff2abc + -1;
        goto LAB_0006a5ec;
      }
      DAT_fffef741 = DAT_fffef741 | 2;
    }
    else {
      DAT_ffff2abc = '\x04';
      DAT_fffef741 = DAT_fffef741 & 0xfd;
    }
    DAT_fffef7f2 = DAT_fffef7f2 | 0x80;
    cStack_8 = '\x01';
  }
  else {
    DAT_ffff2abc = '\x04';
  }
LAB_0006a5ec:
  if ((int)cStack_8 != 0) {
    DAT_fffee7c4 = bVar1;
    DAT_fffee7c5 = DAT_ffff2aba;
  }
  return (int)cStack_8;
}

