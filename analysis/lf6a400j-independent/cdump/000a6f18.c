
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a6f18(char param_1,undefined2 param_2,uint param_3,undefined2 *param_4,
                 undefined2 *param_5,undefined2 *param_6)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  
  bVar1 = param_1 != '\x01';
  if (bVar1) {
    uVar3 = FUN_0016bc68(&DAT_00014028,param_2);
    if ((param_3 & 0xffff) <= (uVar3 & 0xffff)) {
      param_3 = (uVar3 & 0xffff) - param_3;
      goto LAB_000a6f58;
    }
  }
  param_3 = 0;
LAB_000a6f58:
  *param_5 = (short)param_3;
  uVar5 = 0;
  if (param_1 == '\x05') {
    uVar3 = LK_133BCC((uint)&T_02DC24,(uint)param_2);
    param_3 = param_3 & 0xffff;
    uVar5 = (undefined2)(param_3 * (uVar3 & 0xff) >> 8);
  }
  bVar2 = true;
  if ((((param_1 != '\x02') && (param_1 != '\x03')) && (param_1 != '\x04')) && (param_1 != '\x06'))
  {
    bVar2 = false;
  }
  if (bVar2) {
    uVar3 = FUN_0016bc68(&DAT_00014068,param_2);
    param_2 = (undefined2)uVar3;
    iVar4 = 0;
    if ((uVar3 & 0xffff) <= (uint)_DAT_fffec40c) {
      iVar4 = (int)(short)_DAT_fffec40c - (uVar3 & 0xffff);
    }
  }
  else {
    iVar4 = FUN_0016bc68(&DAT_00014048);
  }
  if (!bVar1) {
    iVar4 = 0;
  }
  *param_6 = (short)iVar4;
  if ((bVar2) &&
     (param_2 = (undefined2)(param_3 + iVar4), (param_3 + iVar4 & 0xffff) < (param_3 & 0xffff))) {
    param_2 = 0xffff;
  }
  if (bVar1) {
    if (bVar2) {
      *param_4 = param_2;
    }
    else {
      *param_4 = uVar5;
    }
  }
  else {
    *param_4 = 0;
  }
  _DAT_fffec40c = (short)iVar4;
  return;
}

