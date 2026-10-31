
/* WARNING: Removing unreachable block (ram,0x00061d5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00061d48(void)

{
  byte bVar2;
  ushort uVar1;
  byte bVar3;
  
  if ((DAT_fffef63d & 4) == 0) {
    bVar3 = DAT_fffef638 | 0x40;
    if ((DAT_ffff064a & 0x40) == 0) {
      bVar3 = DAT_fffef638 & 0xbf;
    }
    bVar2 = DAT_fffef639 | 0x40;
    if ((DAT_fffeef76 & 0x40) == 0) {
      bVar2 = DAT_fffef639 & 0xbf;
    }
    _DAT_fffef5c8 = 0;
    _DAT_fffef5ca = 0;
    DAT_fffef63d = DAT_fffef63d | 4;
    DAT_fffef638 = bVar3;
    DAT_fffef639 = bVar2;
  }
  if (-(uint)((DAT_fffef638 & 0x40) == 0) != -(uint)((DAT_ffff064a & 0x40) == 0)) {
    DAT_fffef63d = DAT_fffef63d | 1;
    _DAT_fffef5c8 = 1;
  }
  if (-(uint)((DAT_fffef639 & 0x40) == 0) != -(uint)((DAT_fffeef76 & 0x40) == 0)) {
    DAT_fffef63d = DAT_fffef63d | 2;
    _DAT_fffef5ca = 1;
  }
  if (((((((DAT_ffff04c8 & 0x10) == 0) ||
         (uVar1 = FUN_0016caec((uint)_DAT_ffff0d06 - (uint)_v_Engine_Speed_OBD_copy_2ADA),
         0x200 < uVar1)) || (_DAT_fffeeede < 0x8333)) ||
       (((DAT_fffef63d & 1) != 0 && (_DAT_fffef5c8 != 0)))) ||
      (((DAT_fffef63d & 2) != 0 && (_DAT_fffef5ca != 0)))) ||
     (((DAT_fffef3b8 & 2) != 0 || (0x1400 < _DAT_ffff0d06)))) {
    DAT_fffef63a = DAT_fffef63a & 0xfe;
    DAT_fffef5cc = 0;
  }
  else {
    if (DAT_fffef5cc != 0) {
      DAT_fffef63a = DAT_fffef63a | 1;
    }
    DAT_fffef5cc = FUN_0000152c(DAT_fffef5cc + 1);
  }
  _DAT_fffef5c8 = FUN_0016bd34(_DAT_fffef5c8 - 1);
  _DAT_fffef5ca = FUN_0016bd34(_DAT_fffef5ca - 1);
  bVar3 = DAT_fffef638 | 0x40;
  if ((DAT_ffff064a & 0x40) == 0) {
    bVar3 = DAT_fffef638 & 0xbf;
  }
  DAT_fffef638 = bVar3;
  bVar3 = DAT_fffef639 | 0x40;
  if ((DAT_fffeef76 & 0x40) == 0) {
    bVar3 = DAT_fffef639 & 0xbf;
  }
  DAT_fffef639 = bVar3;
  return;
}

