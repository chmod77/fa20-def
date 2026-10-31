
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008fdc0(char param_1,uint param_2,byte param_3,ushort param_4,byte param_5,
                 undefined1 *param_6,undefined1 *param_7,undefined1 *param_8)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  ushort uVar5;
  char cVar6;
  uint b;
  
  bVar1 = false;
  if ((((param_1 == '\x01') || (param_1 == '\x02')) && (param_3 < 3)) &&
     ((param_5 != 0 && (param_4 < 0x5001)))) {
    bVar1 = true;
  }
  cVar6 = '\x01';
  if (!bVar1) {
    cVar6 = DAT_fffebd5a;
  }
  if ((0x5000 < param_4) ||
     (((param_1 == '\0' && ((DAT_fffebd5b == '\x01' || (DAT_fffebd5b == '\x02')))) ||
      (param_5 < DAT_fffebd58)))) {
    cVar6 = '\0';
  }
  if (bVar1 <= DAT_fffebd59) {
    param_2 = (uint)DAT_fffebd57;
  }
  DAT_fffebd5a = cVar6;
  if (cVar6 == '\0') {
    DAT_fffebd56 = '\0';
  }
  else {
    if (DAT_fffebd56 == '\0') {
      _DAT_fffebd54 = 0;
      DAT_fffebd56 = '\x01';
    }
    uVar2 = LK_133B38((uint)&T_02D0AC,param_2);
    DAT_fffebd51 = (undefined1)uVar2;
    uVar3 = LK_133B38((uint)&T_02D0B8,param_2);
    b = uVar3 & 0xff;
    DAT_fffebd52 = (undefined1)uVar3;
    if (b != 0) {
      uVar3 = 0;
      if ((uint)_DAT_fffebd54 <= b * 8) {
        uVar3 = b * 8 - (int)(short)_DAT_fffebd54;
      }
      if (b == 0) {
        _DAT_fffebd5c = 0xffff;
      }
      else {
        puVar4 = (undefined *)__udiv32_r1_by_r0((uVar3 & 0xffff) << 0xc,b);
        if (&DAT_0000ffff < puVar4) {
          puVar4 = &DAT_0000ffff;
        }
        _DAT_fffebd5c = (ushort)puVar4;
      }
    }
    uVar5 = 0;
    if (b != 0) {
      uVar5 = _DAT_fffebd5c;
    }
    uVar3 = (uint)uVar5 * (uVar2 & 0xff);
    uVar2 = 0xff;
    if (uVar3 < 0x7f8001) {
      uVar2 = uVar3 >> 0xf;
    }
    if ((uVar2 & 0xff) == 0) {
      DAT_fffebd50 = 0;
    }
    else {
      DAT_fffebd50 = (undefined1)uVar2;
    }
    _DAT_fffebd54 = _DAT_fffebd54 + 1;
    if (_DAT_fffebd54 == 0) {
      _DAT_fffebd54 = 0xffff;
    }
  }
  if (cVar6 == '\0') {
    *param_6 = 0;
    *param_7 = 0;
    *param_8 = 0;
  }
  else {
    *param_6 = DAT_fffebd50;
    *param_7 = DAT_fffebd51;
    *param_8 = DAT_fffebd52;
  }
  DAT_fffebd59 = bVar1;
  DAT_fffebd5b = param_1;
  DAT_fffebd58 = param_5;
  DAT_fffebd57 = (char)param_2;
  return;
}

