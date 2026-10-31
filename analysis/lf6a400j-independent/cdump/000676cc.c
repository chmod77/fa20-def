
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000676cc(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00001550(0x60);
  _DAT_ffff02c2 = _DAT_ffff0100;
  if ((uint)_DAT_ffff00b4 * 32000 < 0x7fff8000) {
    _DAT_ffff02c4 = (undefined2)((uint)(&DAT_0000ffff + (uint)_DAT_ffff00b4 * 64000) >> 0x10);
  }
  else {
    _DAT_ffff02c4 = 0xffff;
  }
  _DAT_ffff02ca = _DAT_ffff34ee;
  _DAT_ffff02cc = _DAT_ffff34c0;
  _DAT_ffff02ce = _DAT_ffff34c2;
  _DAT_ffff02d0 = _DAT_ffff34c4;
  if ((((DAT_fffeffed & 0x20) == 0) && ((DAT_fffeffed & 4) == 0)) && ((DAT_ffff0082 & 4) == 0)) {
    DAT_ffff02d2 = 0;
  }
  else {
    DAT_ffff02d2 = 1;
  }
  if ((((DAT_fffeffed & 0x10) == 0) && ((DAT_fffeffed & 2) == 0)) && ((DAT_ffff0082 & 2) == 0)) {
    DAT_ffff02d3 = 0;
  }
  else {
    DAT_ffff02d3 = 1;
  }
  if ((((DAT_fffefff3 & 0x20) == 0) && ((DAT_fffefff3 & 4) == 0)) && ((DAT_ffff0080 & 2) == 0)) {
    DAT_ffff02d4 = 0;
  }
  else {
    DAT_ffff02d4 = 1;
  }
  if ((((DAT_fffefff3 & 0x10) == 0) && ((DAT_fffefff3 & 2) == 0)) && ((DAT_ffff0080 & 1) == 0)) {
    DAT_ffff02d5 = 0;
  }
  else {
    DAT_ffff02d5 = 1;
  }
  if (((DAT_fffefff3 & 8) == 0) && ((DAT_fffefff3 & 1) == 0)) {
    DAT_ffff02d6 = 0;
  }
  else {
    DAT_ffff02d6 = 1;
  }
  DAT_ffff02d7 = DAT_ffff34bd != '\0';
  if ((DAT_ffff0084 == '\0') && (DAT_fffefff7 == '\0')) {
    DAT_ffff02d8 = 0;
  }
  else {
    DAT_ffff02d8 = 1;
  }
  DAT_ffff02d9 = DAT_ffff34f7 != '\0';
  FUN_00001550(uVar1);
  return;
}

