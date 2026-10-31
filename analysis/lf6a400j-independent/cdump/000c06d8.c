
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c06d8(ushort param_1,ushort param_2,undefined2 *param_3,undefined2 *param_4,
                 undefined2 *param_5)

{
  uint uVar1;
  int extraout_r2;
  undefined *puVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 uVar5;
  
  if (DAT_fffec996 == '\0') {
    uVar3 = (param_2 & 0xff) + _DAT_fffec992;
    if (uVar3 < (param_2 & 0xff)) {
      uVar3 = 0xffff;
    }
  }
  else {
    uVar3 = 0;
  }
  uVar1 = __sdiv32_r1_by_r0((uint)uVar3,900);
  *param_5 = (short)uVar1;
  if (17999 < extraout_r2) {
    puVar2 = (undefined *)((uVar1 & 0xff) + (int)_DAT_fffec994);
    if (((uint)puVar2 & 0xffff) < (uVar1 & 0xff)) {
      puVar2 = (undefined *)0xffffffff;
    }
  }
  else {
    puVar2 = (undefined *)(int)_DAT_fffec994;
  }
  uVar5 = SUB42(puVar2,0);
  *param_4 = uVar5;
  if ((undefined *)((uint)puVar2 & 0xffff) <= &UNK_0000270f) {
    puVar2 = &DAT_00002710;
  }
  uVar1 = (uint)puVar2 & 0xffff;
  if (uVar1 != 0) {
    if (uVar1 == 0) {
      _DAT_fffec990 = 0xffff;
    }
    else {
      uVar4 = 0xffff;
      if (param_1 < 0xfffe) {
        uVar4 = param_1 + 2;
      }
      puVar2 = (undefined *)__udiv32_r1_by_r0((uint)uVar4 << 0xf,(uint)puVar2 & 0xffff);
      _DAT_fffec990 = SUB42(puVar2,0);
      if (&DAT_0000ffff < puVar2) {
        _DAT_fffec990 = 0xffff;
      }
    }
  }
  if (uVar1 == 0) {
    *param_3 = 0xffff;
  }
  else {
    *param_3 = _DAT_fffec990;
  }
  DAT_fffec996 = 17999 < extraout_r2;
  _DAT_fffec992 = uVar3;
  _DAT_fffec994 = uVar5;
  return;
}

