
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bf9c0(uint param_1,uint param_2,char param_3,ushort param_4,short *param_5)

{
  ushort uVar2;
  uint uVar1;
  
  if (param_4 < 0x5001) {
    if (param_3 == '\0') {
      uVar1 = LK_13852C((uint)&T_02E794,param_1,param_2);
      uVar2 = (ushort)uVar1;
    }
    else {
      uVar2 = 0xff80;
    }
    _DAT_fffec93c = (uVar2 & 0xff) + 0x80;
  }
  *param_5 = _DAT_fffec93c;
  return;
}

