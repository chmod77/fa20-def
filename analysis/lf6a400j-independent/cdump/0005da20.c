
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0005da20(undefined4 param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  byte bVar5;
  int iVar4;
  int iVar6;
  uint local_18;
  
  uVar1 = _DAT_fffef6d0 | 1;
  if (DAT_fffef688 == '\x01') {
    param_2 = 1;
    if (DAT_fffef6bf != '\0') {
      if (DAT_fffef67a < DAT_fffef6c1) {
        param_2 = 0;
        if (DAT_fffef6c0 == '\0') {
          DAT_fffff022 = 0x30;
          DAT_fffef6c0 = '\x01';
        }
      }
      else {
        DAT_fffef6bf = '\0';
      }
    }
    if (param_2 == 1) {
      DAT_fffff022 = 0x30;
      DAT_fffef6cc = 0;
      DAT_fffef6c2 = 0;
      DAT_fffef688 = '\x02';
      _DAT_ffff3154 = _DAT_ffff3154 | 1;
      uVar1 = _DAT_fffef6d0 | 3;
    }
  }
  _DAT_fffef6d0 = uVar1;
  if ((int)DAT_fffef688 != 2) {
    return (int)DAT_fffef688;
  }
  if ((DAT_fffff024 & 0x38) == 0) {
    bVar5 = DAT_fffff024;
    if ((DAT_fffff024 & 0x40) != 0) {
      param_2 = (uint)DAT_fffff025;
      DAT_fffff024 = DAT_fffff024 & 0xbf;
    }
  }
  else {
    bVar5 = DAT_fffff024 | 0x40;
    DAT_fffff024 = DAT_fffff024 & 199;
  }
  local_18 = 2;
  if ((_DAT_ffff3154 & 1) == 0) {
    if ((bVar5 & 0x38) != 0) {
      local_18 = 1;
      goto LAB_0005ddc8;
    }
    if ((bVar5 & 0x40) == 0) {
      if (DAT_fffef6c1 < DAT_fffef67a) {
        local_18 = 3;
      }
      _DAT_fffef6d0 = _DAT_fffef6d0 | 0x40;
      goto LAB_0005ddc8;
    }
    bVar5 = (byte)param_2;
    if (DAT_fffef6cc == 0) {
      if ((int)param_2 < 10) {
        DAT_fffef6cc = 1;
        DAT_fffef6c3 = bVar5;
        DAT_fffef6cd = bVar5;
      }
      else {
        local_18 = 1;
      }
      _DAT_fffef6d0 = _DAT_fffef6d0 | 0x80;
    }
    else if (DAT_fffef6cc < DAT_fffef6c3) {
      uVar2 = (uint)DAT_fffef6cc;
      DAT_fffef6cc = DAT_fffef6cc + 1;
      (&DAT_fffef6c3)[uVar2] = bVar5;
      DAT_fffef6cd = DAT_fffef6cd + bVar5;
      _DAT_fffef6d0 = _DAT_fffef6d0 | 0x100;
    }
    else {
      local_18 = 1;
      if (DAT_fffef6cd == param_2) {
        if (((_DAT_fffef680 & 1) == 0) || (DAT_fffef6b8 != '\0')) {
          uVar2 = (int)(char)(&DAT_fffef6c2)[DAT_fffef6c3] & 0xf0;
          if ((uVar2 == 0x10) || (uVar2 == 0x20)) {
            _DAT_ffff3144 = _DAT_ffff3144 | 0x4000000;
          }
          else if (uVar2 == 0x30) {
LAB_0005dd78:
            _DAT_ffff3144 = _DAT_ffff3144 | 0x8000000;
          }
          else if (uVar2 == 0x40) {
            _DAT_ffff3144 = _DAT_ffff3144 | 0x1000000;
          }
          else {
            if (uVar2 == 0x50) {
              _DAT_ffff3144 = _DAT_ffff3144 | 0x1000000;
              goto LAB_0005dd78;
            }
            if (uVar2 == 0x60) {
              _DAT_ffff3144 = _DAT_ffff3144 | 0x80000000;
            }
            else if (uVar2 == 0xa0) {
              _DAT_ffff3144 = _DAT_ffff3144 | (uint)&DAT_00010000;
            }
          }
          _DAT_fffef6d0 = _DAT_fffef6d0 | 0x200;
        }
        local_18 = 0;
      }
    }
    if (local_18 == 2) {
      DAT_fffef67a = 0;
      cVar3 = '\n';
      if ((_DAT_fffef64c & 0x100) != 0) {
        cVar3 = '\t';
      }
      DAT_fffef6c1 = cVar3 + 4;
      _DAT_fffef6d0 = _DAT_fffef6d0 | 0x400;
    }
LAB_0005ddc8:
    if (local_18 == 2) {
      return 2;
    }
    DAT_fffef688 = 3;
    if (local_18 == 0) {
      iVar6 = 0x12;
    }
    else {
      FUN_0005de90(2);
      iVar4 = 0x27;
      if ((_DAT_fffef64c & 0x100) != 0) {
        iVar4 = 0x6e;
      }
      iVar6 = iVar4;
      if ((local_18 != 1) && (iVar6 = 0, -1 < (int)(iVar4 - (uint)DAT_fffef67a))) {
        iVar6 = iVar4 - (uint)DAT_fffef67a;
      }
    }
    DAT_fffef67a = 0;
    DAT_fffef6c1 = (char)iVar6;
    _DAT_fffef6d0 = _DAT_fffef6d0 | 0x800;
    return local_18;
  }
  if (DAT_fffef6cc == 0) {
    if ((bVar5 & 0x40) == 0) {
      bVar5 = DAT_fffef67a;
      if (DAT_fffef6c1 <= DAT_fffef67a) {
        DAT_fffef6cd = DAT_fffef6af;
        local_18 = 3;
        bVar5 = DAT_fffef6af;
      }
    }
    else {
      FUN_0005de90(0x21);
      local_18 = 1;
    }
    _DAT_fffef6d0 = _DAT_fffef6d0 | 4;
    goto LAB_0005dc02;
  }
  if ((_DAT_ffff3154 & 4) != 0) {
    if ((bVar5 & 0x40) == 0) {
      cVar3 = '\n';
      if ((_DAT_fffef64c & 0x100) != 0) {
        cVar3 = '\t';
      }
      bVar5 = cVar3 + 4;
      if (bVar5 < DAT_fffef67a) {
LAB_0005db7a:
        local_18 = 1;
      }
    }
    else {
      if ((((bVar5 & 0x38) != 0) ||
          ((DAT_fffef6cc <= DAT_fffef6af &&
           (bVar5 = *(byte *)(DAT_fffef6cc - 0x10952), param_2 != *(byte *)(DAT_fffef6cc - 0x10952))
           ))) || ((DAT_fffef6af < DAT_fffef6cc && (bVar5 = DAT_fffef6cd, param_2 != DAT_fffef6cd)))
         ) goto LAB_0005db7a;
      bVar5 = 0xfb;
      _DAT_ffff3154 = _DAT_ffff3154 & 0xfffffffb;
      DAT_fffef67a = 0;
    }
  }
  if ((_DAT_ffff3154 & 4) == 0) {
    if (DAT_fffef6af < DAT_fffef6cc) {
      local_18 = 0;
      bVar5 = DAT_fffef6cc;
    }
    else {
      bVar5 = 2;
      if ((1 < DAT_fffef67a) && (local_18 = 3, bVar5 = DAT_fffef6cd, DAT_fffef6cc < DAT_fffef6af)) {
        bVar5 = (&DAT_fffef6af)[DAT_fffef6cc];
        DAT_fffef6cd = DAT_fffef6cd + bVar5;
      }
    }
  }
  _DAT_fffef6d0 = _DAT_fffef6d0 | 8;
LAB_0005dc02:
  if (local_18 == 3) {
    DAT_fffff024 = DAT_fffff024 & 0x7f;
    DAT_fffef6cc = DAT_fffef6cc + 1;
    DAT_fffef67a = 0;
    _DAT_ffff3154 = _DAT_ffff3154 | 4;
    _DAT_fffef6d0 = _DAT_fffef6d0 | 0x10;
    local_18 = 2;
    DAT_fffff023 = bVar5;
  }
  if (local_18 == 2) {
    uVar2 = 2;
  }
  else {
    if ((_DAT_ffff3154 & 2) == 0) {
      _DAT_ffff3154 = _DAT_ffff3154 | 2;
      _DAT_fffef678 = 0;
    }
    if (local_18 == 0) {
      _DAT_ffff3154 = _DAT_ffff3154 & 0xfffffffe;
      DAT_fffef6cc = 0;
    }
    else {
      FUN_0005de90(1);
      DAT_fffef688 = '\x03';
    }
    DAT_fffef67a = 0;
    DAT_fffef6c1 = 0x27;
    if ((_DAT_fffef64c & 0x100) != 0) {
      DAT_fffef6c1 = 0x6e;
    }
    uVar2 = (int)(short)_DAT_fffef6d0 | 0x20;
    _DAT_fffef6d0 = (ushort)uVar2;
  }
  return uVar2;
}

