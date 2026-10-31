
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000636ae(ushort param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int unaff_r12;
  
  param_2 = param_2 & 0xffff;
  _DAT_ffff0224 = param_2;
  if (_DAT_ffff0220 != 0) {
    _DAT_ffff0224 = _DAT_ffff0220;
  }
  if (param_1 < 0x4c2) {
    param_1 = 0x4c2;
  }
  _DAT_ffff0228 = (uint)param_1;
  _DAT_ffff0290 = _DAT_ffff0238;
  iVar3 = param_2 - _DAT_ffff0224;
  _DAT_ffff0230 = _DAT_ffff022c;
  iVar4 = _DAT_ffff0228 - param_2;
  _DAT_ffff02bc = iVar4 - _DAT_ffff022c;
  _DAT_ffff0240 = 0x1d;
  if ((iVar4 < 0x1d) && (-0x1d < iVar4)) {
    bVar1 = false;
    _DAT_ffff023e = 0;
  }
  else {
    _DAT_ffff023e = _DAT_ffff023e + 1;
    bVar1 = true;
    if ((_DAT_ffff023e == 0) || (3 < _DAT_ffff023e)) {
      if ((3 < _DAT_ffff023e) && (_DAT_ffff023e < 6)) {
        unaff_r12 = 0;
      }
    }
    else {
      unaff_r12 = 1;
    }
    if (5 < _DAT_ffff023e) {
      unaff_r12 = 0;
      _DAT_ffff023e = 0;
    }
  }
  _DAT_ffff0234 = iVar4;
  if (iVar4 < 0) {
    _DAT_ffff0234 = -iVar4;
  }
  if (_DAT_ffff0234 < 0xefd) {
    bVar5 = 0;
    if ((-1 < _DAT_ffff0234) && (bVar5 = 0x26, _DAT_ffff0234 < 0x26)) {
      bVar5 = 0;
    }
    if ((0x25 < _DAT_ffff0234) && (_DAT_ffff0234 < 0x73)) {
      bVar5 = 1;
    }
    if ((0x72 < _DAT_ffff0234) && (_DAT_ffff0234 < 0x17f)) {
      bVar5 = 2;
    }
    if ((0x17e < _DAT_ffff0234) && (_DAT_ffff0234 < 0x77e)) {
      bVar5 = 3;
    }
    if ((0x77d < _DAT_ffff0234) && (_DAT_ffff0234 < 0xefd)) {
      bVar5 = 4;
    }
  }
  else {
    bVar5 = 0xfd;
    if ((0xefc < _DAT_ffff0234) && (bVar5 = 0x7b, _DAT_ffff0234 < 0x167b)) {
      bVar5 = 5;
    }
    if ((0x167a < _DAT_ffff0234) && (_DAT_ffff0234 < 0x1df9)) {
      bVar5 = 6;
    }
    if ((0x1df8 < _DAT_ffff0234) && (_DAT_ffff0234 < 0x2cf6)) {
      bVar5 = 7;
    }
    if ((0x2cf5 < _DAT_ffff0234) && (_DAT_ffff0234 < 0x59ed)) {
      bVar5 = 8;
    }
    if (0x59ec < _DAT_ffff0234) {
      bVar5 = 9;
    }
  }
  if (9 < bVar5) {
    bVar5 = 9;
  }
  iVar2 = (uint)bVar5 * 2;
  _DAT_ffff0242 = *(ushort *)(&DAT_00019750 + iVar2);
  if (iVar4 < 0) {
    _DAT_ffff0270 = *(ushort *)(&DAT_00019764 + iVar2);
  }
  else {
    _DAT_ffff0270 = *(ushort *)(&DAT_00019778 + iVar2);
  }
  _DAT_ffff02b0 = 0x2b0;
  _DAT_ffff02b2 = 0x14f;
  _DAT_ffff02b4 = *(ushort *)(&DAT_00019790 + iVar2);
  _DAT_ffff02b6 = *(ushort *)(&DAT_000197a4 + iVar2);
  _DAT_ffff02b8 = *(ushort *)(&DAT_000197b8 + iVar2);
  _DAT_ffff0248 =
       (int)((ulonglong)((longlong)(int)((uint)_DAT_ffff0242 * _DAT_ffff02bc) * 0x2000000) >> 0x20);
  _DAT_ffff026c =
       (int)((int)(char)((uint)_DAT_ffff0270 * iVar4 >> 0x18) << 0x10 |
            (uint)_DAT_ffff0270 * iVar4 >> 8 & 0xffff) >> 2;
  param_3 = param_3 & 0xffff;
  if (param_3 < 0xa1) {
    _DAT_ffff0268 = (undefined1 *)(param_3 * 100);
  }
  else {
    _DAT_ffff0268 = &LAB_00003e80;
  }
  _DAT_ffff02a8 = (int)_DAT_ffff0264;
  _DAT_ffff029c = _DAT_ffff0298;
  _DAT_ffff0298 =
       ((int)((int)(char)(_DAT_ffff0298 >> 0x18) << 0x10 | _DAT_ffff0298 >> 8 & 0xffff) >> 2) *
       0x2b0 + (int)_DAT_ffff0264 * 0x14f;
  _DAT_ffff02a4 = _DAT_ffff02a0;
  _DAT_ffff02a0 =
       ((uint)_DAT_ffff02b4 *
        ((int)((int)(char)(_DAT_ffff02a0 >> 0x18) << 0x10 | _DAT_ffff02a0 >> 8 & 0xffff) >> 2) +
       iVar3 * (uint)_DAT_ffff02b6) - _DAT_ffff0238 * (uint)_DAT_ffff02b8;
  _DAT_ffff0294 =
       (int)((int)(char)(_DAT_ffff0298 - _DAT_ffff02a0 >> 0x18) << 0x10 |
            _DAT_ffff0298 - _DAT_ffff02a0 >> 8 & 0xffff) >> 2;
  _DAT_ffff0264 = (undefined1 *)(_DAT_ffff026c + _DAT_ffff0248 + _DAT_ffff0294);
  if ((int)_DAT_ffff0268 < (int)_DAT_ffff0264) {
    _DAT_ffff0264 = _DAT_ffff0268;
  }
  else if ((int)_DAT_ffff0264 < -(int)_DAT_ffff0268) {
    _DAT_ffff0264 = (undefined1 *)-(int)_DAT_ffff0268;
  }
  _DAT_ffff0220 = param_2;
  _DAT_ffff022c = iVar4;
  _DAT_ffff0238 = iVar3;
  if (_DAT_ffff0268 == (undefined1 *)0x0) {
    _DAT_ffff0260 = 0;
  }
  else {
    _DAT_ffff0260 = __sdiv32_r1_by_r0((int)_DAT_ffff0264 * 1000,(int)_DAT_ffff0268);
  }
  if (param_3 == 0) {
    _DAT_ffff023c = 0;
  }
  else {
    iVar3 = __sdiv32_r1_by_r0(0x23280,param_3 << 4);
    _DAT_ffff023c = (ushort)iVar3;
  }
  if (((bVar1) && (_DAT_ffff022c < 0x16b3)) && (-0x16b3 < _DAT_ffff022c)) {
    if (unaff_r12 == 1) {
      _DAT_ffff025c = _DAT_ffff0260 - (uint)_DAT_ffff023c;
    }
    else {
      _DAT_ffff025c = _DAT_ffff0260 + (uint)_DAT_ffff023c;
    }
  }
  else {
    _DAT_ffff025c = _DAT_ffff0260;
  }
  if (_DAT_ffff025c < 0x3e9) {
    iVar3 = _DAT_ffff025c;
    if (_DAT_ffff025c < -1000) {
      iVar3 = -1000;
    }
  }
  else {
    iVar3 = 1000;
  }
  return iVar3;
}

