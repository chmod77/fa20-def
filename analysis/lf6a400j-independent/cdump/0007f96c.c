
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007f96c(uint param_1,uint param_2,uint param_3,uint param_4,byte param_5,uint param_6,
                 undefined1 *param_7)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  
  uVar2 = LK_133BCC((uint)&T_02C1DC,param_2);
  uVar3 = LK_133BCC((uint)&T_02C1E8,param_4);
  uVar2 = (uVar3 & 0xff) + (uVar2 & 0xff);
  uVar3 = (int)(param_1 & 0xffff) >> 2;
  if (DAT_fffeba8d != '\0') {
    if (uVar2 < 4) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar2 - 4;
    }
    uVar2 = uVar2 & 0xffff;
  }
  bVar6 = uVar2 <= uVar3;
  if (bVar6) {
    DAT_fffeba8c = '\0';
    uVar1 = _DAT_fffeba8a;
  }
  else {
    if (DAT_fffeba8c == '\0') {
      _DAT_fffeba8a = 0;
      DAT_fffeba8c = '\x01';
    }
    if (((short)((int)((param_1 & 0xffff) + (param_6 & 0xff) * -4) >> 2) < -2) || (uVar3 < 0x1a)) {
      uVar2 = 0;
    }
    else {
      uVar2 = LK_133F40((uint)&T_02C1D0,param_3);
      uVar2 = uVar2 & 0xffff;
    }
    DAT_fffeba88 = uVar2 <= _DAT_fffeba8a;
    uVar1 = 0xffff;
    if (_DAT_fffeba8a != 0xffff) {
      uVar1 = _DAT_fffeba8a + 1;
    }
  }
  _DAT_fffeba8a = uVar1;
  cVar4 = '\0';
  if (!bVar6) {
    cVar4 = DAT_fffeba88;
  }
  uVar5 = 1;
  if (!bVar6) {
    uVar5 = DAT_fffeba8e;
  }
  if ((param_5 < 4) || (cVar4 != '\0')) {
    uVar5 = 0;
  }
  *param_7 = uVar5;
  DAT_fffeba8e = uVar5;
  DAT_fffeba8d = bVar6;
  return;
}

