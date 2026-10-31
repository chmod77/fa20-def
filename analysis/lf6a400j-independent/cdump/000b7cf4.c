
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b7cf4(char param_1,ushort param_2,uint param_3,uint param_4,undefined1 *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  uint uVar5;
  
  uVar5 = LK_133F40((uint)&T_02E46C,param_4);
  bVar1 = param_1 != '\x03';
  if ((bVar1) || (0x1a00 < param_2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar1) || (0x1a00 < param_2)) {
    _DAT_fffec7ec = 0;
    sVar4 = _DAT_fffec7ec;
  }
  else {
    sVar4 = -1;
    if (_DAT_fffec7ec != -1) {
      sVar4 = _DAT_fffec7ec + 1;
    }
  }
  _DAT_fffec7ec = sVar4;
  if ((bVar1) || (param_2 < 0x2400)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((bVar1) || (param_2 < 0x2400)) {
    _DAT_fffec7ee = 0;
    sVar4 = _DAT_fffec7ee;
  }
  else {
    sVar4 = -1;
    if (_DAT_fffec7ee != -1) {
      sVar4 = _DAT_fffec7ee + 1;
    }
  }
  _DAT_fffec7ee = sVar4;
  if (((bVar3) || (bVar2)) || ((uVar5 & 0xffff) <= (param_3 & 0xffff))) {
    DAT_fffec7f0 = 1;
  }
  if (bVar1) {
    DAT_fffec7f0 = 0;
  }
  *param_5 = DAT_fffec7f0;
  return;
}

