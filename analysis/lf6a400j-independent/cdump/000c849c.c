
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c849c(char param_1,char param_2,uint param_3,uint param_4,ushort param_5,ushort param_6,
                 char param_7,char param_8,char param_9,ushort param_10,undefined2 *param_11)

{
  bool bVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 extraout_r0;
  
  if (param_1 != '\0') {
    bVar1 = false;
    if ((DAT_fffecaf0 != '\x01') && (param_2 == '\x01')) {
      bVar1 = true;
    }
    uVar3 = _DAT_fffecaee;
    if (bVar1) {
      uVar2 = LK_13ADE0((uint)&T_02EA2C,param_3,param_4);
      extraout_r0 = (undefined2)uVar2;
      uVar3 = extraout_r0;
      if ((((param_6 < param_10) && (uVar3 = extraout_r0, param_7 == '\0')) &&
          (uVar3 = extraout_r0, param_8 == '\0')) && (uVar3 = extraout_r0, param_9 == '\0')) {
        uVar3 = _DAT_fffecaee;
      }
    }
    _DAT_fffecaec = uVar3;
    if ((bVar1) && (param_10 < param_5)) {
      _DAT_fffecaec = _DAT_fffecaee;
    }
  }
  *param_11 = _DAT_fffecaec;
  DAT_fffecaf0 = param_2;
  _DAT_fffecaee = _DAT_fffecaec;
  return;
}

