
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000066e4(void)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  
  _DAT_ffffa2ec = _DAT_ffff92d2;
  sVar3 = (short)((int)(short)_DAT_ffffab1a - (int)(short)_DAT_ffffab1c);
  uVar2 = (int)(short)_DAT_ffffab1a - (int)(short)_DAT_ffffab1c & 0xffff;
  if (7 < uVar2) {
    sVar3 = 7;
    uVar2 = 7;
  }
  if (DAT_ffffa2d5 == '\0') {
    DAT_ffffa2ee = (char)sVar3 + '\x01';
  }
  else {
    DAT_ffffa2ee = '\b';
    for (uVar1 = 0; (uVar1 & 0xff) < 8; uVar1 = (uVar1 & 0xff) + 1) {
      (&DAT_ffffa2f2)[uVar1 & 0xff] = 0;
    }
  }
  if (DAT_ffffab1e == '\x0f') {
    DAT_ffffab1e = 0;
  }
  else {
    DAT_ffffab1e = DAT_ffffab1e + 1;
  }
  DAT_ffffa2f2 = DAT_ffffab1e | 0x20;
  for (uVar1 = 0; (uVar1 & 0xff) < uVar2; uVar1 = uVar1 + 1) {
    uVar1 = uVar1 & 0xff;
    (&DAT_ffffa2f3)[uVar1] = *(undefined1 *)(_DAT_ffffab1c + uVar1 + -0x6d2a);
  }
  _DAT_ffffab1c = _DAT_ffffab1c + sVar3;
  if (_DAT_ffffab1a <= _DAT_ffffab1c) {
    DAT_ffffab1f = 1;
  }
  DAT_ffffab21 = DAT_ffffab21 + '\x01';
  FUN_000050f4();
  return;
}

