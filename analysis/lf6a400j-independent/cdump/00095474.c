
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00095474(char param_1,uint param_2,uint param_3,char param_4,char param_5,uint param_6,
                 short *param_7,undefined1 *param_8,undefined1 *param_9,undefined1 *param_10,
                 undefined2 *param_11,undefined1 *param_12)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  short sVar5;
  uint uVar4;
  uint uVar6;
  uint p1;
  
  p1 = param_3 & 0xff;
  uVar1 = LK_133B38((uint)&T_02D428,p1);
  *param_10 = (char)uVar1;
  uVar2 = LK_133BCC((uint)&T_02D434,param_6 & 0xffff);
  *param_12 = (char)uVar2;
  *param_11 = 0x100;
  if ((int)-(param_2 & 0xffff) < -0x8100) {
    sVar5 = -0x8000;
  }
  else {
    sVar5 = (short)-(param_2 & 0xffff) + 0x100;
  }
  uVar6 = (uint)sVar5;
  if ((int)uVar6 < 0) {
    uVar4 = -uVar6;
    if ((int)uVar4 < 0x100) {
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      goto LAB_00095514;
    }
  }
  else if ((int)uVar6 < 0x100) {
    uVar4 = uVar6;
    if ((int)uVar6 < 0) {
      uVar4 = 0;
    }
    goto LAB_00095514;
  }
  uVar4 = 0xff;
LAB_00095514:
  *param_8 = (char)uVar4;
  uVar4 = LK_133B38((uint)&T_02D440,uVar4);
  *param_9 = (char)uVar4;
  if ((uVar4 & 0xff) != 0xff) {
    sVar5 = (short)((uVar4 & 0xff) * uVar6 >> 8);
  }
  if ((uVar1 & 0xff) != 0xff) {
    sVar5 = (short)((uVar1 & 0xff) * (int)sVar5 >> 8);
  }
  if ((uVar2 & 0xff) != 0xff) {
    sVar5 = (short)((uVar2 & 0xff) * (int)sVar5 >> 8);
  }
  if (p1 != 0) {
    if (p1 == 0) {
      if (sVar5 < 0) {
        _DAT_fffebed8 = -0x8000;
      }
      else {
        _DAT_fffebed8 = 0x7fff;
      }
    }
    else {
      iVar3 = __sdiv32_r1_by_r0((int)sVar5 << 8,param_3 & 0xff);
      if (iVar3 < 0x8000) {
        if (iVar3 < -0x8000) {
          iVar3 = -0x8000;
        }
      }
      else {
        iVar3 = 0x7fff;
      }
      _DAT_fffebed8 = (short)iVar3;
    }
  }
  if (param_1 != '\0') {
    uVar1 = 0;
    if (p1 != 0) {
      uVar1 = (uint)_DAT_fffebed8;
    }
    uVar2 = (int)(char)(uVar1 >> 0x10) << 0x10 | uVar1 & 0xffff;
    _DAT_fffebeda = -1;
    if (((int)uVar2 < 0x8000) && (_DAT_fffebeda = 0, -0x8001 < (int)uVar2)) {
      _DAT_fffebeda = (short)uVar1 + -0x8000;
    }
  }
  if ((param_4 != '\0') || (param_5 != '\0')) {
    _DAT_fffebeda = -0x8000;
  }
  *param_7 = _DAT_fffebeda;
  return;
}

