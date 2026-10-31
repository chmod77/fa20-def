
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c3bf0(char param_1,char param_2,uint param_3,int param_4,undefined2 *param_5)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != '\0') {
    uVar2 = _DAT_fffeca98;
    if (DAT_fffeca9c == '\0') {
      uVar2 = param_4 << 0x10;
    }
    if (param_2 != '\0') {
      iVar1 = __udiv32_r1_by_r0((param_3 & 0xff) * (int)&DAT_0000a055,0x8d5);
      param_3 = iVar1 + uVar2;
      if (param_3 < uVar2) {
        param_3 = 0xffffffff;
      }
    }
    if (((param_2 == '\0') || (_DAT_fffeca94 = 0, DAT_fffeca9d != '\0')) &&
       (_DAT_fffeca94 = param_3, param_2 == '\0')) {
      _DAT_fffeca94 = param_4 << 0x10;
    }
    DAT_fffeca9c = '\x01';
    _DAT_fffeca98 = _DAT_fffeca94;
    DAT_fffeca9d = param_2;
  }
  *param_5 = (short)(_DAT_fffeca94 >> 0x10);
  return;
}

