
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00063ee8(void)

{
  uint uVar1;
  byte bVar2;
  byte local_14;
  byte bStack_13;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  
  uVar1 = 0x3c;
  if (((0x3c < _DAT_ffff008e) && (_DAT_ffff008e != 0xffff)) &&
     (uVar1 = (uint)DAT_fffeeec2, (uVar1 & 1) != 0)) {
    DAT_ffff035c = DAT_ffff035b;
    DAT_ffff035d = DAT_fffef738;
    DAT_fffefff0 = DAT_fffeffef;
    DAT_fffeffee = DAT_fffeffed;
    _DAT_ffff0368 = _DAT_ffff0360;
    _DAT_ffff036a = _DAT_ffff0362;
    _DAT_ffff036c = _DAT_ffff0364;
    _DAT_ffff036e = _DAT_ffff0366;
    _DAT_ffff0150 = _DAT_ffff0062;
    _DAT_ffff0152 = _DAT_ffff0064;
    local_14 = DAT_ffff035b & 1;
    bStack_13 = DAT_fffef738 & 1;
    uStack_12 = 4;
    uStack_10 = 1;
    uStack_e = 0x28;
    puStack_c = &DAT_ffff0360;
    uVar1 = FUN_00062be0(&local_14);
    bVar2 = DAT_fffef738 | 1;
    if ((uVar1 & 1) == 0) {
      bVar2 = DAT_fffef738 & 0xfe;
    }
    if ((bVar2 & 1) != 0) {
      DAT_fffef7a9 = DAT_fffef7a9 | 0x80;
      DAT_fffeffed = DAT_fffeffed | 0x20;
    }
    local_14 = 1 - ((DAT_ffff035b & 4) == 0);
    bStack_13 = '\x01' - ((bVar2 & 4) == 0);
    uStack_12 = 4;
    uStack_10 = 1;
    uStack_e = 0x28;
    puStack_c = &DAT_ffff0362;
    DAT_fffef738 = bVar2;
    uVar1 = FUN_00062be0(&local_14);
    bVar2 = DAT_fffef738 | 4;
    if ((uVar1 & 1) == 0) {
      bVar2 = DAT_fffef738 & 0xfb;
    }
    if ((bVar2 & 4) != 0) {
      DAT_fffef7ab = DAT_fffef7ab | 0x80;
      DAT_fffeffed = DAT_fffeffed | 0x20;
    }
    local_14 = 1 - ((DAT_ffff035b & 2) == 0);
    bStack_13 = '\x01' - ((bVar2 & 2) == 0);
    uStack_12 = 4;
    uStack_10 = 1;
    uStack_e = 0x28;
    puStack_c = &DAT_ffff0364;
    DAT_fffef738 = bVar2;
    uVar1 = FUN_00062be0(&local_14);
    bVar2 = DAT_fffef738 | 2;
    if ((uVar1 & 1) == 0) {
      bVar2 = DAT_fffef738 & 0xfd;
    }
    if ((bVar2 & 2) != 0) {
      DAT_fffef7aa = DAT_fffef7aa | 0x80;
      DAT_fffeffed = DAT_fffeffed | 0x10;
    }
    local_14 = 1 - ((DAT_ffff035b & 8) == 0);
    bStack_13 = '\x01' - ((bVar2 & 8) == 0);
    uStack_12 = 4;
    uStack_10 = 1;
    uStack_e = 0x28;
    puStack_c = &DAT_ffff0366;
    DAT_fffef738 = bVar2;
    uVar1 = FUN_00062be0(&local_14);
    bVar2 = DAT_fffef738 | 8;
    if ((uVar1 & 1) == 0) {
      bVar2 = DAT_fffef738 & 0xf7;
    }
    if ((bVar2 & 8) != 0) {
      DAT_fffef7ac = DAT_fffef7ac | 0x80;
      DAT_fffeffed = DAT_fffeffed | 0x10;
    }
    local_14 = 1 - ((DAT_fffeffef & 4) == 0);
    bStack_13 = '\x01' - ((DAT_fffeffed & 4) == 0);
    uStack_12 = 4;
    uStack_10 = 1;
    uStack_e = 0x28;
    puStack_c = &DAT_ffff0062;
    DAT_fffef738 = bVar2;
    uVar1 = FUN_00062be0(&local_14);
    bVar2 = DAT_fffeffed | 4;
    if ((uVar1 & 1) == 0) {
      bVar2 = DAT_fffeffed & 0xfb;
    }
    local_14 = 1 - ((DAT_fffeffef & 2) == 0);
    bStack_13 = '\x01' - ((bVar2 & 2) == 0);
    uStack_12 = 4;
    uStack_10 = 1;
    uStack_e = 0x28;
    puStack_c = &DAT_ffff0064;
    DAT_fffeffed = bVar2;
    uVar1 = FUN_00062be0(&local_14);
    bVar2 = DAT_fffeffed | 2;
    if ((uVar1 & 1) == 0) {
      bVar2 = DAT_fffeffed & 0xfd;
    }
    DAT_fffeffed = bVar2;
    uVar1 = FUN_00067ec0();
  }
  return uVar1;
}

