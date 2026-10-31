
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00091940(int param_1,char param_2,uint param_3,ushort param_4,char param_5,ushort *param_6,
                 char param_7,int *param_8,ushort *param_9)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ushort uVar4;
  float fVar5;
  
  bVar1 = 0x5000 < param_4;
  bVar2 = false;
  if ((param_5 == '\x03') && (!bVar1)) {
    bVar2 = true;
  }
  if (bVar2) {
    param_3 = param_3 & 0xff;
    iVar3 = (param_3 * *param_6 >> 8) + param_3 * -0x80;
    if (iVar3 < 0x8000) {
      _DAT_fffebde4 = (short)iVar3 + 0x8000;
    }
    else {
      _DAT_fffebde4 = 0xffff;
    }
  }
  uVar4 = 0x8000;
  if (bVar2) {
    uVar4 = _DAT_fffebde4;
  }
  if (!bVar1) {
    if ((param_7 != '\0') && (_DAT_fffebde8 = 0.0, param_2 == '\0')) {
      fVar5 = (float)param_1;
      if (param_1 < 0) {
        fVar5 = fVar5 + 4.2949673e+09;
      }
      _DAT_fffebde8 =
           (float)uVar4 * 3.1999998 + fVar5 * (float)(param_3 & 0xff) * 0.0031249998 + -104857.59;
    }
    fVar5 = 13421772.0;
    if ((_DAT_fffebde8 <= 13421772.0) && (fVar5 = _DAT_fffebde8, _DAT_fffebde8 < 0.0)) {
      fVar5 = 0.0;
    }
    if (fVar5 <= 3.4359736e+09) {
      if (0.0 <= fVar5) {
        fVar5 = fVar5 * 1.25;
        if (2.1474836e+09 <= fVar5) {
          fVar5 = fVar5 - 4.2949673e+09;
        }
        _DAT_fffebde0 = (int)fVar5;
      }
      else {
        _DAT_fffebde0 = 0;
      }
    }
    else {
      _DAT_fffebde0 = -1;
    }
  }
  if (bVar1) {
    *param_8 = 0;
  }
  else {
    *param_8 = _DAT_fffebde0;
  }
  *param_9 = uVar4;
  return;
}

