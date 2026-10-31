
/* WARNING: Removing unreachable block (ram,0x001410bc) */
/* WARNING: Removing unreachable block (ram,0x0014110a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00141094(void)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  
  if ((DAT_ffff1cd2 & 0x40) == 0) {
    if (((int)(char)DAT_ffff1cd4 & 0x80U) != 0) {
      uVar3 = (uint)_DAT_ffff1cd6;
      cVar2 = FUN_00140702(_DAT_ffff1cd6 & 7);
      uVar3 = (int)uVar3 >> 3 & 0xff;
      (&DAT_ffff1cb1)[uVar3] = (&DAT_ffff1cb1)[uVar3] & -cVar2 - 1U;
      DAT_ffff1cd4 = DAT_ffff1cd4 & 0x7f;
      DAT_ffff1cd2 = DAT_ffff1cd2 & 0xfb;
      _DAT_ffff1cd6 = FUN_0016b390((int)(short)_DAT_ffff1cd6,1,0x10d);
    }
    do {
      cVar2 = (&DAT_ffff1cb1)[(int)(uint)_DAT_ffff1cd6 >> 3 & 0xff];
      if ((int)cVar2 == 0) {
        bVar1 = false;
        _DAT_ffff1cd6 = FUN_00001540(_DAT_ffff1cd6 + 8);
      }
      else {
        uVar3 = FUN_00140702(_DAT_ffff1cd6 & 7);
        bVar1 = true;
        if ((uVar3 & 0xff & (int)cVar2) == 0) {
          bVar1 = false;
          _DAT_ffff1cd6 = FUN_00001540(_DAT_ffff1cd6 + 1);
        }
      }
    } while ((!bVar1) && (_DAT_ffff1cd6 < 0x10e));
    if (bVar1) {
      if ((DAT_ffff1cd2 & 4) == 0) {
        DAT_ffff1cd8 = 0;
        DAT_ffff1ce8 = 0;
        DAT_ffff1cd4 = DAT_ffff1cd4 | 0x80;
        _DAT_ffff6784 = _DAT_ffff1cd6;
        _DAT_ffff1cde = 1;
        DAT_ffff1cd2 = DAT_ffff1cd2 | 0x44;
      }
    }
    else {
      _DAT_ffff1cd6 = 0;
    }
  }
  return;
}

