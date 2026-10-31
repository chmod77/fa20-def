
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00046efe(void)

{
  int iVar1;
  
  if ((_DAT_ffffd002 & 0x21) == 0) {
    if (1 < DAT_fffef8ec) {
      DAT_fffef3e1 = DAT_fffef3e1 & 0xbf;
    }
    DAT_fffef8ec = FUN_0000152c(DAT_fffef8ec + 1);
  }
  else {
    DAT_fffef3e1 = DAT_fffef3e1 | 0x40;
    DAT_fffef8ec = 0;
  }
  if (((DAT_fffef3e1 & 0x20) == 0) || ((DAT_fffef3e1 & 0x40) == 0)) {
    iVar1 = (int)(char)DAT_fffef3e1;
    _DAT_fffef8ee = 0;
  }
  else {
    if (0x1b3 < _DAT_fffef8ee) {
      DAT_fffef3e1 = DAT_fffef3e1 | 0x80;
    }
    iVar1 = FUN_00001540(_DAT_fffef8ee + 1);
    _DAT_fffef8ee = (ushort)iVar1;
  }
  return iVar1;
}

