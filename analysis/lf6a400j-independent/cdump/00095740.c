
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00095740(uint param_1,uint param_2,uint param_3,byte param_4,char param_5,char param_6,
                 byte *param_7,undefined1 *param_8)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  bVar1 = true;
  if ((param_6 == '\0') && (param_5 == '\0')) {
    bVar1 = false;
  }
  iVar3 = (param_2 & 0xff) * 0xff;
  *param_8 = (char)((uint)iVar3 >> 8);
  iVar3 = (iVar3 * (param_1 & 0xffff) >> 0x10) - (iVar3 >> 1);
  if (iVar3 < 0x8000) {
    if (iVar3 < -0x8000) {
      iVar3 = -0x8000;
    }
  }
  else {
    iVar3 = 0x7fff;
  }
  _DAT_fffebedc = (float)(int)(short)iVar3 * 77.0 * 1.5258789e-05 + _DAT_fffebedc * 0.69921875;
  if (bVar1) {
    *param_7 = 0x80;
  }
  else {
    fVar5 = _DAT_fffebedc + 0.001953125;
    fVar4 = 0.49609375;
    if ((fVar5 <= 0.49609375) && (fVar4 = fVar5, fVar5 < -0.5)) {
      fVar4 = -0.5;
    }
    uVar2 = 0xff;
    if ((fVar4 <= 0.49609375) && (uVar2 = 0, -0.5 <= fVar4)) {
      uVar2 = (uint)(fVar4 * 256.0 + 128.0);
    }
    if ((param_3 & 0xff) <= (uVar2 & 0xff)) {
      uVar2 = param_3;
    }
    if ((uint)param_4 < (uVar2 & 0xff)) {
      *param_7 = (byte)uVar2;
    }
    else {
      *param_7 = param_4;
    }
  }
  if (bVar1) {
    _DAT_fffebedc = 0.0;
  }
  return;
}

