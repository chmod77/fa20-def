
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bfb7c(ushort param_1,uint param_2,uint param_3,char param_4,char param_5,short *param_6)

{
  uint uVar1;
  ushort uVar2;
  
  if (param_1 < 0x5001) {
    if (param_4 == '\0') {
      if (param_5 == '\0') {
        uVar1 = LK_138810((uint)&T_02E7A8,param_2,param_3);
        uVar2 = (ushort)uVar1;
      }
      else {
        uVar2 = 0xff80;
      }
    }
    else {
      uVar2 = 0xff80;
    }
    _DAT_fffec948 = (uVar2 & 0xff) + 0x80;
  }
  *param_6 = _DAT_fffec948;
  return;
}

