
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a5e18(short param_1,byte param_2,short param_3,uint param_4,short *param_5,
                 short *param_6,short *param_7,short *param_8,undefined2 *param_9,
                 undefined2 *param_10)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  
  uVar1 = LK_1343B8((uint)&T_02DB88,(int)param_3);
  *param_9 = (short)uVar1;
  uVar2 = LK_1343B8((uint)&T_02DB94,(int)param_3);
  *param_10 = (short)uVar2;
  if (_DAT_fffec3aa < 0) {
    iVar3 = (int)_DAT_fffec3aa;
    uVar4 = LK_133BCC((uint)&T_02DB70,param_4 & 0xffff);
    iVar3 = __sdiv32_r1_by_r0((uVar4 & 0xff) * iVar3,0xff);
    _DAT_fffec3a4 = (short)iVar3;
  }
  *param_8 = _DAT_fffec3a4;
  if (0 < _DAT_fffec3aa) {
    iVar3 = (int)_DAT_fffec3aa;
    uVar4 = LK_133BCC((uint)&T_02DB7C,param_4 & 0xffff);
    iVar3 = __sdiv32_r1_by_r0((uVar4 & 0xff) * iVar3,0xff);
    _DAT_fffec3a6 = (short)iVar3;
  }
  *param_7 = _DAT_fffec3a6;
  if (_DAT_fffec3a8 < 1) {
    iVar3 = (int)_DAT_fffec3a8 + (uVar2 & 0xffff);
    if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    sVar5 = (short)iVar3;
    if ((short)iVar3 <= _DAT_fffec3a4) {
      sVar5 = _DAT_fffec3a4;
    }
    if (0 < sVar5) {
      sVar5 = 0;
    }
  }
  else {
    iVar3 = (int)_DAT_fffec3a8 - (uVar1 & 0xffff);
    sVar5 = -0x8000;
    if (-0x8001 < iVar3) {
      sVar5 = (short)iVar3;
    }
    if (sVar5 < 1) {
      sVar5 = 0;
    }
    if (_DAT_fffec3a6 < sVar5) {
      sVar5 = _DAT_fffec3a6;
    }
  }
  if (param_2 < DAT_fffec3ac) {
    sVar5 = param_1 + _DAT_fffec3a8;
    if (((param_1 < 0) || (_DAT_fffec3a8 < 0)) || (-1 < sVar5)) {
      if (((param_1 < 0) && (_DAT_fffec3a8 < 0)) && (-1 < sVar5)) {
        sVar5 = -0x8000;
      }
    }
    else {
      sVar5 = 0x7fff;
    }
    if (sVar5 < -0x947) {
      sVar5 = -0x947;
    }
    if (0x128f < sVar5) {
      sVar5 = 0x128f;
    }
  }
  *param_5 = sVar5;
  sVar6 = sVar5;
  if (param_2 >= DAT_fffec3ac) {
    sVar6 = _DAT_fffec3aa;
  }
  *param_6 = sVar6;
  _DAT_fffec3a8 = sVar5;
  _DAT_fffec3aa = sVar6;
  DAT_fffec3ac = param_2;
  return;
}

