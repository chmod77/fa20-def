
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001002e8(char param_1,uint param_2,uint param_3,uint param_4,char param_5,uint param_6,
                 short param_7,undefined2 *param_8,undefined2 *param_9,undefined2 *param_10)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = LK_133E10((uint)&T_02F8B4,param_2);
  *param_9 = (short)uVar1;
  if (param_1 == '\x03') {
    iVar4 = (param_3 & 0xffff) - (param_4 & 0xffff);
    iVar3 = -iVar4;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    uVar2 = LK_133F40((uint)&T_02F8A8,param_6 & 0xffff);
    _DAT_fffed9ca = (undefined2)uVar2;
    DAT_fffed9ce = iVar3 < (int)(uVar2 & 0xffff);
    if (iVar4 < (int)(uVar2 & 0xffff)) {
      iVar3 = (int)_DAT_fffed9cc + (uVar1 & 0xffff);
    }
    else {
      iVar3 = (int)_DAT_fffed9cc - (uVar1 & 0xffff);
    }
    if (((param_7 == 0xd7a) || (param_7 == 0x8ca)) || ((bool)DAT_fffed9ce)) {
      iVar3 = (int)_DAT_fffed9cc;
    }
    if (iVar3 < 0x4b01) {
      _DAT_fffed9c8 = (undefined2)iVar3;
      if (iVar3 < -0x4b00) {
        _DAT_fffed9c8 = 0xb500;
      }
    }
    else {
      _DAT_fffed9c8 = 0x4b00;
    }
  }
  _DAT_fffed9cc = 0;
  if (param_5 != '\x01') {
    _DAT_fffed9cc = _DAT_fffed9c8;
  }
  *param_8 = _DAT_fffed9cc;
  *param_10 = _DAT_fffed9ca;
  return;
}

