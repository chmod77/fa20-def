
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005134e(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  if (DAT_fffeef9c == '\x04') {
    if (DAT_fffeeffe != '\x04') {
      DAT_fffeeff3 = DAT_fffeeff3 | 0x40;
    }
  }
  else {
    DAT_fffeeff3 = DAT_fffeeff3 & 0xbf;
  }
  if ((((DAT_fffeef9a & 1) == 0) && (DAT_fffeef9c == '\x04')) && (((int)DAT_ffff2ae6 & 0x80U) != 0))
  {
    if (DAT_fffef6ed < 5) {
      DAT_fffef6ed = DAT_fffef6ed + 1;
    }
    else {
      DAT_fffef6ed = '\x01';
      DAT_fffeefff = DAT_fffeefff + 1;
      if ((DAT_fffeef99 & 0x10) == 0) {
        if ((0x70ff < _DAT_fffeef9e) && (_DAT_fffeef9e < 0x7501)) {
          iVar1 = 0;
          iVar2 = 0;
          for (bVar3 = 0; bVar3 < 5; bVar3 = bVar3 + 1) {
            iVar1 = iVar1 + (uint)*(ushort *)(&DAT_fffeef9e + iVar2);
            iVar2 = iVar2 + 2;
          }
          iVar1 = __udiv32_r1_by_r0(iVar1,5);
          _DAT_fffeeff4 = (undefined2)iVar1;
        }
        DAT_fffeef9a = DAT_fffeef9a | 0x10;
      }
      else {
        if ((0x70ff < _DAT_fffeef9e) && (_DAT_fffeef9e < 0x7501)) {
          iVar1 = 0;
          iVar2 = 0;
          for (bVar3 = 0; bVar3 < 5; bVar3 = bVar3 + 1) {
            iVar1 = iVar1 + (uint)*(ushort *)(&DAT_fffeef9e + iVar2);
            iVar2 = iVar2 + 2;
          }
          iVar1 = __udiv32_r1_by_r0(iVar1,5);
          _DAT_fffeeff6 = (undefined2)iVar1;
        }
        DAT_fffeef9a = DAT_fffeef9a & 0xef;
      }
      if (1 < DAT_fffeefff) {
        _DAT_fffeeff8 = _DAT_fffeeff4;
        _DAT_fffeeffa = _DAT_fffeeff6;
        DAT_fffeefff = 0;
        DAT_fffeef9a = DAT_fffeef9a & 0xf7;
        DAT_fffeeff3 = DAT_fffeeff3 | 0x80;
      }
    }
    if ((((((int)(char)DAT_fffeeff3 & 0x80U) != 0) && (_DAT_fffeeffc < 0x8481)) &&
        ((DAT_fffeeff3 & 0x40) != 0)) && (0x37 < DAT_fffef032)) {
      DAT_fffeef9a = DAT_fffeef9a | 1;
    }
  }
  else {
    DAT_fffef6ed = '\0';
    DAT_fffeefff = 0;
  }
  if ((DAT_fffeeff3 & 0x40) == 0) {
    DAT_fffef032 = 0;
  }
  else {
    DAT_fffef032 = FUN_0000152c(DAT_fffef032 + 1);
  }
  DAT_fffeeffe = DAT_fffeef9c;
  return;
}

