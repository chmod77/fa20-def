
/* WARNING: Removing unreachable block (ram,0x000a6796) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a6764(char param_1,short param_2,char param_3,uint param_4,short *param_5,short *param_6
                 ,undefined1 *param_7)

{
  bool bVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  
  if (param_1 != '\0') {
    uVar2 = LK_133BCC((uint)&T_02DBC0,param_4);
    DAT_fffec3d8 = (undefined1)uVar2;
    _DAT_fffec3d4 = param_2 - _DAT_fffec3da;
    if (((param_2 < 0) || (-1 < _DAT_fffec3da)) || (-1 < _DAT_fffec3d4)) {
      if (((param_2 < 0) && (-1 < _DAT_fffec3da)) && (-1 < _DAT_fffec3d4)) {
        _DAT_fffec3d4 = -0x8000;
      }
    }
    else {
      _DAT_fffec3d4 = 0x7fff;
    }
    if (0xfffe < _DAT_fffec3d4) {
      _DAT_fffec3d4 = 0x7fff;
    }
    if (_DAT_fffec3d4 < -0x7fff) {
      _DAT_fffec3d4 = -0x8000;
    }
    if (param_3 == '\0') {
      _DAT_fffec3d6 = 0;
      _DAT_fffec3da = _DAT_fffec3d6;
    }
    else {
      iVar4 = (int)_DAT_fffec3d4 * (uVar2 & 0xff);
      sVar3 = 0x7fff;
      if (iVar4 < 0x1fffc1) {
        if (iVar4 < -0x1fffc1) {
          sVar3 = -0x8000;
        }
        else {
          sVar3 = (short)(iVar4 >> 6);
        }
      }
      _DAT_fffec3d6 = _DAT_fffec3da + sVar3;
      if (((_DAT_fffec3da < 0) || (sVar3 < 0)) || (-1 < _DAT_fffec3d6)) {
        bVar1 = _DAT_fffec3da < 0;
        _DAT_fffec3da = _DAT_fffec3d6;
        if (((bVar1) && (sVar3 < 0)) && (-1 < _DAT_fffec3d6)) {
          _DAT_fffec3d6 = -0x8000;
          _DAT_fffec3da = _DAT_fffec3d6;
        }
      }
      else {
        _DAT_fffec3d6 = 0x7fff;
        _DAT_fffec3da = _DAT_fffec3d6;
      }
    }
  }
  *param_6 = _DAT_fffec3d4;
  *param_7 = DAT_fffec3d8;
  *param_5 = _DAT_fffec3d6;
  return;
}

