
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001415f0(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  ushort uVar4;
  
  if ((((DAT_ffffab80 == '\x01') && (((int)(char)DAT_ffffab74 & 0x80U) != 0)) &&
      ((DAT_ffffab74 & 8) != 0)) &&
     (((DAT_ffffab74 & 0x10) == 0 &&
      (DAT_ffffab74 = DAT_ffffab74 | 0x10, ((int)(char)DAT_ffff66c4 & 0x80U) == 0)))) {
    DAT_ffff66c4 = DAT_ffff66c4 | 0x80;
    DAT_ffff1cf0 = '\x01';
    DAT_ffff1cf1 = 0;
    _DAT_ffff1cf4 = 0;
  }
  if (((int)(char)DAT_ffff66c4 & 0x80U) == 0) {
    return (int)(char)DAT_ffff66c4;
  }
  if (DAT_ffff1cf0 == '\x01') {
    if (DAT_ffff1cf1 < 0x10) {
      DAT_ffff1cf1 = FUN_0000152c(DAT_ffff1cf1 + 1);
    }
    else {
      DAT_ffff1cf1 = 0;
      DAT_ffff1cf0 = '\x02';
    }
  }
  if (DAT_ffff1cf0 == '\x02') {
    uVar4 = _DAT_ffff1f0c << 6;
    if ((uVar4 < 0xc7ae) || (0xfae1 < uVar4)) {
      _DAT_ffff3500 = 0;
    }
    else {
      _DAT_ffff1cf4 = _DAT_ffff1cf4 + (uint)uVar4;
      DAT_ffff1cf1 = FUN_0000152c(DAT_ffff1cf1 + 1);
      if (DAT_ffff1cf1 < 8) goto LAB_001416fc;
      iVar1 = __udiv32_r1_by_r0(-0x199a0000,_DAT_ffff1cf4);
      _DAT_ffff3500 = (ushort)(iVar1 << 2);
      puVar3 = (undefined *)(iVar1 << 2 & 0xffff);
      if ((puVar3 < &DAT_00007d00) || (&UNK_00008300 < puVar3)) {
        _DAT_ffff3500 = 0;
      }
    }
    DAT_ffff1cf1 = 0;
    DAT_ffff1cf0 = '\x03';
  }
LAB_001416fc:
  if (DAT_ffff1cf0 == '\x03') {
    if ((DAT_ffff66c4 & 0x20) == 0) {
      DAT_ffff1cd2 = DAT_ffff1cd2 & 0xfe;
      _DAT_ffff3502 = 0xffff;
      _DAT_ffff3504 = 0xffff;
      _DAT_ffff3506 = 0xffff;
      _DAT_ffff3508 = 0xffff;
      _DAT_ffff350a = 0;
      _DAT_ffff350c = 0;
      _DAT_ffff350e = 0;
      _DAT_ffff3510 = 0;
      _DAT_ffff3512 = 0;
      _DAT_ffff3514 = 0;
      _DAT_ffff3516 = 0;
      _DAT_ffff3518 = 0;
      _DAT_ffff351a = 0;
      _DAT_ffff351c = 0;
      _DAT_ffff351e = 0;
      _DAT_ffff3520 = 0;
      _DAT_ffff3522 = 0;
      _DAT_ffff3524 = 0;
      _DAT_ffff3526 = 0;
      _DAT_ffff3528 = 0;
      _DAT_ffff352a = 0;
      _DAT_ffff352c = 0;
      _DAT_ffff352e = 0;
      _DAT_ffff3540 = 0;
      FUN_001403b4(0,0x19);
      DAT_ffff66c4 = DAT_ffff66c4 | 0x20;
    }
    iVar1 = FUN_00140424(0,1);
    if (iVar1 == 0) {
      DAT_ffff1cf0 = '\x04';
    }
  }
  uVar2 = (uint)DAT_ffff1cf0;
  if (uVar2 == 4) {
    if ((DAT_ffff1cd2 & 1) != 0) {
      _DAT_ffff3500 = 0;
    }
    if ((_DAT_ffff3500 < 32000) || (0x8300 < _DAT_ffff3500)) {
      _DAT_ffffabd0 = 0x8000;
      DAT_ffffab74 = DAT_ffffab74 & 0xbf | 0x20;
    }
    else {
      _DAT_ffffabd0 = _DAT_ffff3500;
      DAT_ffffab74 = DAT_ffffab74 & 0xdf | 0x40;
    }
    uVar2 = (int)(char)(DAT_ffff66c4 & 0x7f) & 0xdf;
    DAT_ffff66c4 = (byte)uVar2;
    DAT_ffff1cf0 = '\0';
  }
  return uVar2;
}

