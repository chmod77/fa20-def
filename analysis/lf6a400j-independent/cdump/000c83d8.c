
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c83d8(char param_1,char param_2,uint param_3,char param_4,char param_5,char param_6,
                 uint param_7,uint param_8,uint param_9,undefined2 *param_10)

{
  bool bVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 extraout_r0;
  
  if (param_1 != '\0') {
    bVar1 = false;
    param_3 = param_3 & 0xffff;
    if ((DAT_fffecae8 != '\x01') && (param_2 == '\x01')) {
      bVar1 = true;
    }
    uVar3 = _DAT_fffecae6;
    if (bVar1) {
      uVar2 = LK_13ADE0((uint)&T_02EA18,param_7 & 0xffff,param_3);
      extraout_r0 = (undefined2)uVar2;
      uVar3 = extraout_r0;
      if (((((param_9 & 0xffff) < param_3) && (uVar3 = extraout_r0, param_4 == '\0')) &&
          (uVar3 = extraout_r0, param_5 == '\0')) && (uVar3 = extraout_r0, param_6 == '\0')) {
        uVar3 = _DAT_fffecae6;
      }
    }
    _DAT_fffecae4 = uVar3;
    if ((param_3 < (param_8 & 0xffff)) && (bVar1)) {
      _DAT_fffecae4 = _DAT_fffecae6;
    }
  }
  *param_10 = _DAT_fffecae4;
  _DAT_fffecae6 = _DAT_fffecae4;
  DAT_fffecae8 = param_2;
  return;
}

