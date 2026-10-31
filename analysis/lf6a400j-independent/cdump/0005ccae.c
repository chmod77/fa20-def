
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0005ccae(void)

{
  short sVar1;
  undefined1 *puVar2;
  
  if ((_DAT_fffef64c & 0x100) != 0) {
    if (DAT_fffef660 == '\0') {
      DAT_fffef660 = 1;
      return 2;
    }
    _DAT_fffef6a8 = _DAT_fffef66a;
    sVar1 = FUN_0005e33a(&DAT_fffef662,&DAT_fffef668);
    if (_DAT_fffef6a8 != sVar1) {
      _DAT_ffff3148 = _DAT_ffff3148 | 8;
    }
    _DAT_fffef68e = _DAT_fffef672;
    sVar1 = FUN_0005e33a(&DAT_fffef66e,&DAT_fffef670);
    if (_DAT_fffef68e != sVar1) {
      _DAT_ffff3148 = _DAT_ffff3148 | 0x10;
    }
    if ((_DAT_fffef662 & 0x8000) == 0) {
      _DAT_ffff3508 = 0;
      puVar2 = &DAT_0002c0a8;
    }
    else {
      _DAT_ffff3508 = 0x8000;
      puVar2 = &DAT_fffef664;
    }
    FUN_0005de76(puVar2,0xfffef6aa,5);
    DAT_fffef69c = (_DAT_fffef66e & 0x8000) != 0;
    _DAT_fffef69e = _DAT_fffef670;
  }
  return 0;
}

