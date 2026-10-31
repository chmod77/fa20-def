
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008cbe4(uint param_1,ushort param_2,char param_3,uint param_4,undefined2 *param_5)

{
  uint uVar1;
  undefined2 uVar2;
  undefined *p1;
  
  p1 = (undefined *)(param_1 & 0xffff);
  uVar1 = LK_136050((uint)&T_02CE1C,(uint)p1,param_4 & 0xff);
  uVar2 = _DAT_fffebc9c;
  if (DAT_fffebc9e != '\0') {
    uVar2 = (short)uVar1;
  }
  if ((param_2 < 0xe000) || (&UNK_0000efff < p1)) {
    if ((param_2 < 0xdccd) || ((undefined *)0xfffe < p1)) {
      uVar2 = (short)uVar1;
    }
  }
  else {
    uVar1 = LK_136050((uint)&T_02CE08,(uint)p1,param_4 & 0xff);
    uVar2 = (short)uVar1;
  }
  if (param_3 == '\0') {
    *param_5 = 0;
  }
  else {
    *param_5 = uVar2;
  }
  _DAT_fffebc9c = uVar2;
  DAT_fffebc9e = 1;
  return;
}

