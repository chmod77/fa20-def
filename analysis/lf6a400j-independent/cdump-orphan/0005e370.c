
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0005e370(void)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  
  if ((DAT_fffef687 == 'U') && (((int)(char)DAT_fffef455 & 0x80U) != 0)) {
    if ((_DAT_ffff3144 & 0x20000000) == 0) {
      if ((_DAT_ffff3144 & 0x4000000) == 0) {
        if ((_DAT_ffff3144 & 0x8000000) == 0) {
          if ((_DAT_ffff3144 & 0x1000000) == 0) {
            sVar4 = 0x1000;
            if ((((_DAT_ffff3144 & 0x80000000) == 0) && (sVar4 = 0x1009, (DAT_fffef455 & 0x10) == 0)
                ) && (sVar4 = 0x10, DAT_ffff3144 == '\0')) {
              if ((DAT_ffff313d == '\0') && (DAT_ffff313e == '\0')) {
                sVar4 = 2;
              }
              else {
                sVar4 = 0;
              }
            }
          }
          else {
            sVar4 = 0x1007;
          }
        }
        else {
          sVar4 = 0x1004;
          if ((_DAT_ffff3144 & 0x1000000) != 0) {
            sVar4 = 0x1008;
          }
        }
      }
      else {
        sVar4 = 0x1005;
      }
    }
    else {
      sVar4 = 0x1002;
    }
    if (_DAT_ffff8552 == 1) {
      sVar1 = sVar4;
      sVar2 = _DAT_ffff8554;
      if (sVar4 == 2) {
        DAT_fffef453 = 0xbb;
        DAT_fffef687 = 0xbb;
        return 2;
      }
    }
    else {
      sVar1 = _DAT_ffff8552;
      sVar2 = sVar4;
      if ((int)_DAT_ffff8554 != 1) {
        return (int)_DAT_ffff8554;
      }
    }
    _DAT_ffff8554 = sVar2;
    _DAT_ffff8552 = sVar1;
    uVar3 = (uint)(char)DAT_ffff855e;
    DAT_ffff855e = (char)(uVar3 & 0xfd);
    return uVar3 & 0xfd;
  }
  if ((DAT_fffef687 == -0x45) && (((int)(char)DAT_fffef455 & 0x80U) != 0)) {
    if ((_DAT_ffff3144 & 0x20000000) == 0) {
      if ((_DAT_ffff3144 & 0x40000000) == 0) {
        if ((_DAT_ffff3144 & 0x1000000) == 0) {
          sVar4 = 0x1006;
          if ((((_DAT_ffff3144 & 0x2000000) == 0) && (sVar4 = 0x10, DAT_ffff3144 == '\0')) &&
             (sVar4 = 0, _DAT_ffff3508 == -0x8000)) {
            sVar4 = 2;
          }
        }
        else {
          sVar4 = 0x1007;
        }
      }
      else {
        sVar4 = 0x1001;
      }
    }
    else {
      sVar4 = 0x1002;
    }
    if ((_DAT_ffff8552 == 1) && (sVar4 != 0)) {
      DAT_ffff855e = DAT_ffff855e & 0xfe;
      _DAT_ffff8552 = sVar4;
    }
    uVar3 = (uint)_DAT_ffff8558;
    if ((uVar3 == 1) && (sVar4 != 0)) {
LAB_0005e60e:
      _DAT_ffff8558 = sVar4;
      uVar3 = (uint)(char)DAT_ffff855e;
      DAT_ffff855e = (char)(uVar3 & 0xf7);
      return uVar3 & 0xf7;
    }
  }
  else if (DAT_fffef687 == -0x44) {
    if ((DAT_ffff312d & 2) == 0) {
      if (((DAT_ffff312d & 4) == 0) && ((DAT_ffff312d & 1) != 0)) {
        sVar4 = 2;
      }
      else {
        sVar4 = 0;
      }
    }
    else if ((_DAT_ffff3144 & 0x20000000) == 0) {
      if ((_DAT_ffff3144 & 0x40000000) == 0) {
        if ((_DAT_ffff3144 & 0x1000000) == 0) {
          sVar4 = 0x10;
          if ((_DAT_ffff3144 & 0x2000000) != 0) {
            sVar4 = 0x1006;
          }
        }
        else {
          sVar4 = 0x1007;
        }
      }
      else {
        sVar4 = 0x1001;
      }
    }
    else {
      sVar4 = 0x1002;
    }
    uVar3 = (uint)_DAT_ffff8552;
    if ((uVar3 == 1) && (sVar4 != 0)) {
      _DAT_ffff8552 = sVar4;
      uVar3 = (uint)(char)DAT_ffff855e;
      DAT_ffff855e = (char)(uVar3 & 0xfe);
      return uVar3 & 0xfe;
    }
  }
  else {
    uVar3 = (uint)DAT_fffef687;
    if (uVar3 == 0x66) {
      sVar4 = 0;
      if ((((int)(char)DAT_fffef455 & 0x80U) == 0) && (sVar4 = 2, DAT_ffff3144 != '\0')) {
        sVar4 = 0x10;
      }
      uVar3 = (uint)_DAT_ffff8556;
      if ((uVar3 == 1) && (sVar4 != 0)) {
        _DAT_ffff8556 = sVar4;
        uVar3 = (uint)(char)DAT_ffff855e;
        DAT_ffff855e = (char)(uVar3 & 0xfb);
        return uVar3 & 0xfb;
      }
    }
    else if ((DAT_fffef687 == -0x67) && (uVar3 = (uint)(char)DAT_fffef455, (uVar3 & 1) == 0)) {
      sVar4 = 0x1002;
      if (((_DAT_ffff3144 & 0x20000000) == 0) && (sVar4 = 0, DAT_ffff3144 != '\0')) {
        sVar4 = 0x10;
      }
      uVar3 = (uint)_DAT_ffff8558;
      if (uVar3 == 1) {
        if (sVar4 == 0) {
          DAT_fffef453 = 0xbb;
          DAT_fffef687 = 0xbb;
          return 1;
        }
        goto LAB_0005e60e;
      }
    }
    else if ((DAT_fffef687 == -0x56) &&
            (((DAT_fffef454 == '\0' && (0x13 < DAT_fffef6a0)) &&
             (uVar3 = (uint)_DAT_ffff855a, uVar3 == 1)))) {
      _DAT_ffff855a = 2;
    }
  }
  return uVar3;
}

