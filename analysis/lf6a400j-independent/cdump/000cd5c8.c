
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cd5c8(char param_1,ushort param_2,ushort param_3,char param_4,uint param_5,uint param_6,
                 undefined1 *param_7)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  
  if (param_1 != '\0') {
    bVar2 = false;
    if ((((0xfffe < param_2) || (0xcccc < param_3)) || ((0xcccc < param_3 && (param_4 != '\0')))) &&
       (uVar4 = LK_133E10((uint)&T_02EB6C,param_6 & 0xff), (param_5 & 0xffff) < (uVar4 & 0xffff))) {
      bVar2 = true;
    }
    bVar1 = false;
    if (bVar2) {
      _DAT_fffecc7e = 0;
      sVar3 = _DAT_fffecc7e;
    }
    else {
      bVar1 = true;
      sVar3 = -1;
      if (_DAT_fffecc7e != -1) {
        sVar3 = _DAT_fffecc7e + 1;
      }
    }
    _DAT_fffecc7e = sVar3;
    DAT_fffecc7c = 0;
    if (!bVar1) {
      DAT_fffecc7c = DAT_fffecc80;
    }
    if (bVar2) {
      DAT_fffecc7c = 1;
    }
  }
  *param_7 = DAT_fffecc7c;
  DAT_fffecc80 = DAT_fffecc7c;
  return;
}

