
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007bde0(void)

{
  uint uVar1;
  uint uVar2;
  
  if (_DAT_ffff7b96 == 1) {
    DAT_ffff6b91 = DAT_ffff6792 + '@';
    uVar1 = 1;
    for (uVar2 = 0; (uVar2 & 0xff) < 3; uVar2 = (uVar2 & 0xff) + 1) {
      (&DAT_ffff6b91)[uVar1 & 0xff] = *(undefined1 *)((int)&PTR_DAT_0002b88c + (uVar2 & 0xff) + 2);
      uVar1 = (uVar1 & 0xff) + 1;
    }
    uVar1 = 4;
    for (uVar2 = 0; (uVar2 & 0xff) < 5; uVar2 = (uVar2 & 0xff) + 1) {
      (&DAT_ffff6b91)[uVar1 & 0xff] = (&DAT_0002b891)[uVar2 & 0xff];
      uVar1 = (uVar1 & 0xff) + 1;
    }
    uVar1 = 9;
    for (uVar2 = 0; (uVar2 & 0xff) < 0x60; uVar2 = (uVar2 & 0xff) + 1) {
      (&DAT_ffff6b91)[uVar1 & 0xff] = (&DAT_0000dace)[uVar2 & 0xff];
      uVar1 = (uVar1 & 0xff) + 1;
    }
    _DAT_ffff7b98 = 0x69;
    return;
  }
  DAT_ffff6b91 = 0x7f;
  DAT_ffff6b92 = 0xaa;
  DAT_ffff6b93 = 0x13;
  _DAT_ffff7b98 = 3;
  return;
}

