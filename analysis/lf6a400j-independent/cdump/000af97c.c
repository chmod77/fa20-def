
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000af97c(char param_1,uint param_2,undefined2 *param_3)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_1 == '\0') {
    if (DAT_fffec5df != '\0') {
      _DAT_fffec5dc = 0;
      DAT_fffec5df = '\0';
      DAT_fffec5e1 = '\0';
    }
  }
  else {
    param_2 = param_2 & 0xff;
    if (DAT_fffec5e1 == '\0') {
      DAT_fffec5e0 = '\0';
      DAT_fffec5de = '\0';
      DAT_fffec5e1 = '\x01';
      DAT_fffec5df = '\x01';
    }
    if (DAT_fffec5e0 == '\0') {
      uVar2 = 0x44;
    }
    else {
      uVar2 = 0x36;
    }
    bVar3 = uVar2 <= param_2;
    if (DAT_fffec5de == '\0') {
      uVar2 = 0xfc;
    }
    else {
      uVar2 = 0xb8;
    }
    bVar1 = uVar2 <= param_2;
    if (bVar3) {
      if (bVar1) {
        _DAT_fffec5dc = 0xffff;
        DAT_fffec5de = bVar1;
        DAT_fffec5e0 = bVar3;
      }
      else {
        uVar2 = LK_133E10((uint)&T_02E0C0,param_2);
        _DAT_fffec5dc = (undefined2)uVar2;
        DAT_fffec5de = bVar1;
        DAT_fffec5e0 = bVar3;
      }
    }
    else {
      _DAT_fffec5dc = 0;
      DAT_fffec5de = bVar1;
      DAT_fffec5e0 = bVar3;
    }
  }
  *param_3 = _DAT_fffec5dc;
  return;
}

