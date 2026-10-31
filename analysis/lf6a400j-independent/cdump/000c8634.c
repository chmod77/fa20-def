
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c8634(char param_1,char param_2,uint param_3,ushort param_4,ushort param_5,char param_6,
                 char param_7,char param_8,ushort param_9,undefined2 *param_10)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  
  if (param_1 != '\0') {
    bVar1 = false;
    if ((DAT_fffecb00 != '\x01') && (param_2 == '\x01')) {
      bVar1 = true;
    }
    uVar3 = _DAT_fffecafe;
    if (bVar1) {
      iVar2 = __sdiv32_r1_by_r0((param_3 & 0xffff) * -0x1e,200);
      uVar3 = 0x7fff;
      if ((iVar2 < 0x8000) && (uVar3 = (undefined2)iVar2, iVar2 < -0x8000)) {
        uVar3 = 0x8000;
      }
    }
    _DAT_fffecafc = uVar3;
    if ((((bVar1) && (param_5 < param_9)) && (param_6 == '\0')) &&
       ((param_7 == '\0' && (param_8 == '\0')))) {
      _DAT_fffecafc = _DAT_fffecafe;
    }
    if ((bVar1) && (param_9 < param_4)) {
      _DAT_fffecafc = _DAT_fffecafe;
    }
  }
  *param_10 = _DAT_fffecafc;
  DAT_fffecb00 = param_2;
  _DAT_fffecafe = _DAT_fffecafc;
  return;
}

