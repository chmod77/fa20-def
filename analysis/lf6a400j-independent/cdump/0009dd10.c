
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009dd10(uint param_1,uint param_2,uint param_3,char param_4,byte param_5,byte param_6,
                 char param_7,undefined1 *param_8,byte *param_9)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  byte bVar4;
  
  if (((param_4 != '\0') && (param_7 == '\0')) ||
     ((param_7 == '\0' && ((param_5 != 0 && (param_5 < param_6)))))) {
    iVar2 = _DAT_fffec058 + -0x40;
    if (iVar2 < -0x8000) {
      iVar2 = -0x8000;
    }
    uVar1 = LK_13A6C0((uint)&T_02D9D8,param_2,param_3);
    _DAT_fffec058 = ((ushort)uVar1 & 0xff) * 0x40 + -0x2000;
    if (_DAT_fffec058 <= (short)iVar2) {
      _DAT_fffec058 = (short)iVar2;
    }
  }
  else {
    iVar2 = _DAT_fffec058 + 1;
    if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    _DAT_fffec058 = (short)iVar2;
    if (0 < _DAT_fffec058) {
      _DAT_fffec058 = 0;
    }
  }
  sVar3 = _DAT_fffec058 >> 6;
  bVar4 = 0xff;
  if ((sVar3 < 0x80) && (bVar4 = 0, -0x81 < sVar3)) {
    bVar4 = (char)sVar3 + 0x80;
  }
  *param_9 = bVar4;
  uVar1 = (param_1 & 0xffff) + 0x80 + (uint)bVar4;
  if (uVar1 < 0x200) {
    if (uVar1 < 0x100) {
      *param_8 = 0;
    }
    else {
      *param_8 = (char)uVar1;
    }
  }
  else {
    *param_8 = 0xff;
  }
  return;
}

