
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00091aa0(int param_1,char param_2,char param_3,byte param_4,char param_5,int param_6,
                 int *param_7,ushort *param_8)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  float fVar5;
  
  if (param_5 == '\x03') {
    if ((short)-(ushort)param_4 < 0) {
      uVar4 = (int)(short)-(ushort)param_4 + 0x100;
    }
    else {
      uVar4 = 0xff;
    }
    iVar1 = ((uVar4 & 0xff) * (uint)*(ushort *)(param_6 + 2) >> 8) + (uVar4 & 0xff) * -0x80;
    if (iVar1 < 0x8000) {
      _DAT_fffebdf0 = (short)iVar1 + 0x8000;
    }
    else {
      _DAT_fffebdf0 = 0xffff;
    }
  }
  uVar2 = 0x8000;
  if (param_5 == '\x03') {
    uVar2 = _DAT_fffebdf0;
  }
  if (param_2 != '\0') {
    if (param_3 == '\0') {
      if (param_4 < 0x101) {
        uVar3 = 0x100 - param_4;
      }
      else {
        uVar3 = 0;
      }
      fVar5 = (float)param_1;
      if (param_1 < 0) {
        fVar5 = fVar5 + 4.2949673e+09;
      }
      _DAT_fffebdec = (float)uVar2 * 3.1999998 + fVar5 * (float)uVar3 * 0.0031249998 + -104857.59;
    }
    else {
      _DAT_fffebdec = 0.0;
    }
  }
  fVar5 = 13421772.0;
  if ((_DAT_fffebdec <= 13421772.0) && (fVar5 = _DAT_fffebdec, _DAT_fffebdec < 0.0)) {
    fVar5 = 0.0;
  }
  if (fVar5 <= 3.4359736e+09) {
    if (0.0 <= fVar5) {
      fVar5 = fVar5 * 1.25;
      if (2.1474836e+09 <= fVar5) {
        fVar5 = fVar5 - 4.2949673e+09;
      }
      *param_7 = (int)fVar5;
    }
    else {
      *param_7 = 0;
    }
  }
  else {
    *param_7 = -1;
  }
  *param_8 = uVar2;
  return;
}

