
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c87bc(char param_1,char param_2,uint param_3,ushort param_4,ushort param_5,char param_6,
                 char param_7,char param_8,ushort param_9,undefined2 *param_10)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  
  if (param_1 != '\0') {
    bVar1 = false;
    if ((DAT_fffecb10 != '\x01') && (param_2 == '\x01')) {
      bVar1 = true;
    }
    uVar3 = _DAT_fffecb0e;
    if (bVar1) {
      iVar2 = __sdiv32_r1_by_r0((param_3 & 0xffff) * 3,200);
      uVar3 = 0x7fff;
      if ((iVar2 < 0x8000) && (uVar3 = (undefined2)iVar2, iVar2 < -0x8000)) {
        uVar3 = 0x8000;
      }
    }
    _DAT_fffecb0c = uVar3;
    if ((((bVar1) && (param_5 < param_9)) && (param_6 == '\0')) &&
       ((param_7 == '\0' && (param_8 == '\0')))) {
      _DAT_fffecb0c = _DAT_fffecb0e;
    }
    if ((bVar1) && (param_9 < param_4)) {
      _DAT_fffecb0c = _DAT_fffecb0e;
    }
  }
  *param_10 = _DAT_fffecb0c;
  _DAT_fffecb0e = _DAT_fffecb0c;
  DAT_fffecb10 = param_2;
  return;
}

