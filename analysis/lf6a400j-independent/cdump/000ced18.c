
/* WARNING: Removing unreachable block (ram,0x000cedae) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ced18(float param_1,uint param_2,char param_3,undefined4 param_4,undefined4 param_5,
                 byte param_6,byte param_7,uint param_8,byte param_9,undefined2 *param_10,
                 undefined1 *param_11)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  float fVar7;
  
  fVar7 = 255996.1;
  if ((param_1 <= 255996.1) && (fVar7 = 0.0, 0.0 <= param_1)) {
    fVar7 = param_1;
  }
  uVar1 = LK_133BCC((uint)&T_02EBCC,(int)(fVar7 * 0.25599998));
  iVar6 = (param_8 & 0xffff) - (param_2 & 0xffff);
  sVar4 = 0x7fff;
  *param_11 = (char)uVar1;
  if ((iVar6 < 0x8000) && (sVar4 = (short)iVar6, iVar6 < -0x8000)) {
    sVar4 = -0x8000;
  }
  uVar2 = (uint)sVar4;
  if ((int)uVar2 < 0) {
    uVar2 = -uVar2;
  }
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  if (DAT_fffecd31 == '\0') {
    uVar3 = 0x100;
  }
  else {
    uVar3 = 0x180;
  }
  DAT_fffecd31 = (uVar2 & 0xffff) <= uVar3;
  uVar5 = 0;
  if ((bool)DAT_fffecd31) {
    uVar5 = _DAT_fffecd2c;
    if (_DAT_fffecd2c == 0xffff) {
      _DAT_fffecd2c = -1;
    }
    else {
      _DAT_fffecd2c = _DAT_fffecd2c + 1;
    }
  }
  else {
    _DAT_fffecd2c = 0;
  }
  if ((DAT_fffecd30 < (499 < uVar5)) || (param_3 == '\0')) {
    DAT_fffecd2e = 1;
  }
  if (DAT_fffecd2f < param_9) {
    DAT_fffecd2e = 0;
  }
  fVar7 = ((float)param_7 + 223.0 + 0.0) * 4.0 * 24568.0 * 7.8124995e-06 * 1.0 * (float)param_6 *
          128.0 * (float)(uVar1 & 0xff) * 4.7683716e-07;
  if (1023.9844 < fVar7) {
    fVar7 = 1023.9844;
  }
  if (fVar7 <= 1023.9844) {
    *param_10 = (short)(int)(fVar7 * 64.0);
  }
  else {
    *param_10 = 0xffff;
  }
  DAT_fffecd30 = 499 < uVar5;
  DAT_fffecd2f = param_9;
  return;
}

