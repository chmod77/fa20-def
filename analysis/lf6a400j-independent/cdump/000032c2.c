
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000032c2(void)

{
  uint uVar1;
  
  if (DAT_ffffab30 == '\x01') {
    DAT_ffffab30 = '\0';
    DAT_ffffab38 = 0;
    if (_DAT_ffff7b98 != 0) {
      if (_DAT_ffff7b98 < 8) {
        _DAT_ffffa2ec = 0x7e8;
        if (DAT_ffffa2d5 == '\0') {
          DAT_ffffa2ee = (char)_DAT_ffff7b98 + 1;
        }
        else {
          DAT_ffffa2ee = 8;
          for (uVar1 = 0; (uVar1 & 0xffff) < (uint)DAT_ffffa2ee; uVar1 = (uVar1 & 0xffff) + 1) {
            (&DAT_ffffa2f2)[uVar1 & 0xffff] = 0;
          }
        }
        _DAT_ffffa2f2 = CONCAT11((char)_DAT_ffff7b98,DAT_ffffa2f3);
        for (uVar1 = 0; (uVar1 & 0xffff) < (uint)(byte)_DAT_ffff7b98; uVar1 = uVar1 + 1) {
          uVar1 = uVar1 & 0xffff;
          (&DAT_ffffa2f3)[uVar1] = (&DAT_ffff6b91)[uVar1];
        }
        FUN_00003736();
        DAT_ffffab38 = 1;
      }
      else {
        if (300 < _DAT_ffff7b98) {
          DAT_ffffab30 = 0;
          DAT_ffffab38 = 0;
          return;
        }
        _DAT_ffffa2ec = 0x7e8;
        DAT_ffffa2ee = 8;
        _DAT_ffffa2f2 = _DAT_ffff7b98 | 0x1000;
        for (uVar1 = 0; (uVar1 & 0xffff) < 6; uVar1 = uVar1 + 1) {
          uVar1 = uVar1 & 0xffff;
          (&DAT_ffffa2f4)[uVar1] = (&DAT_ffff6b91)[uVar1];
        }
        _DAT_ffffab1a = _DAT_ffff7b98;
        _DAT_ffffab1c = 6;
        DAT_ffffab1e = 0;
        DAT_ffffab1f = 0;
        FUN_00003736();
        DAT_ffffab38 = 2;
      }
      FUN_00003784(0x1e);
      return;
    }
  }
  return;
}

