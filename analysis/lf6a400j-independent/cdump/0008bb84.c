
/* WARNING: Removing unreachable block (ram,0x0008bbc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008bb84(uint param_1,uint param_2,uint param_3,char param_4,ushort param_5,
                 undefined2 *param_6,undefined2 *param_7)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = LK_13503C((uint)&T_02CCE4,param_2);
  bVar3 = (param_3 & 0xff) <= (uVar1 & 0xff);
  if (bVar3 < DAT_fffebc5d) {
    uVar2 = (uint)(short)_DAT_fffebc58;
  }
  else {
    uVar1 = LK_133F40((uint)&T_02CCC0,param_1);
    uVar2 = (uVar1 & 0xffff) + (int)(short)_DAT_fffebc5a;
    if ((uVar2 & 0xffff) < (uVar1 & 0xffff)) {
      uVar2 = 0xffffffff;
    }
  }
  uVar1 = 0xffffffff;
  if ((param_5 != 0) && (uVar1 = uVar2, bVar3)) {
    uVar1 = 0;
  }
  *param_6 = (short)uVar1;
  if (bVar3) {
    uVar2 = LK_133F40((uint)&T_02CCD8,param_1);
  }
  else {
    uVar2 = LK_133F40((uint)&T_02CCCC,param_1);
  }
  if ((bVar3) && (param_4 != '\0')) {
    uVar2 = (uint)(short)_DAT_fffebc58;
  }
  else if ((uint)_DAT_fffebc58 < (uVar2 & 0xffff)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(short)_DAT_fffebc58 - (uVar2 & 0xffff);
  }
  if ((!bVar3) && (_DAT_fffebc5a < param_5)) {
    uVar2 = uVar1;
  }
  _DAT_fffebc58 = (ushort)uVar2;
  if ((uVar2 & 0xffff) == 0) {
    _DAT_fffebc58 = 0;
  }
  *param_7 = _DAT_fffebc58;
  _DAT_fffebc5a = (short)uVar1;
  DAT_fffebc5d = bVar3;
  DAT_fffebc5c = bVar3;
  return;
}

