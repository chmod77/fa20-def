
/* WARNING: Removing unreachable block (ram,0x000d5398) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d5348(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5
                 ,undefined2 *param_6,ushort *param_7,undefined2 *param_8)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  uint uVar4;
  
  if ((int)-(param_5 & 0xffff) < -0x8000) {
    uVar4 = 0;
  }
  else {
    uVar4 = -(param_5 & 0xffff) - 0x8000;
  }
  sVar3 = -1;
  if (_DAT_fffecec0 != 0xffff) {
    sVar3 = _DAT_fffecec0 + 1;
  }
  if (499 < _DAT_fffecec0) {
    param_4 = 0;
  }
  _DAT_fffecec0 = sVar3;
  *param_7 = (ushort)param_4;
  if (DAT_fffecec3 == '\0') {
    DAT_fffecec2 = '\0';
    DAT_fffecec3 = '\x01';
  }
  uVar1 = (ushort)param_4;
  if (DAT_fffecec2 != '\0') {
    FUN_0016b4d8(&DAT_ffff19d2,param_4,0xffffffff);
    uVar1 = _DAT_ffff19d2;
  }
  _DAT_ffff19d2 = uVar1;
  DAT_fffecec2 = 1;
  if ((uint)_DAT_ffff19d2 <= (uVar4 & 0xffff)) {
    uVar4 = (uint)(short)_DAT_ffff19d2;
  }
  *param_8 = (short)uVar4;
  if (param_1 == '\x03') {
    uVar2 = (undefined2)(uVar4 + param_5);
    if ((uVar4 + param_5 & 0xffff) < (uVar4 & 0xffff)) {
      uVar2 = 0xffff;
    }
    *param_6 = uVar2;
  }
  else {
    *param_6 = 0x8000;
  }
  return;
}

