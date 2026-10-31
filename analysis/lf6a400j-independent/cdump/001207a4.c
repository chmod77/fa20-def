
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001207a4(byte param_1,char param_2,undefined2 *param_3,ushort *param_4)

{
  undefined *puVar1;
  ushort uVar2;
  undefined2 uVar3;
  
  if ((param_2 == '\0') || (uVar2 = _DAT_fffee18e, param_1 != 0)) {
    uVar2 = 0;
  }
  if ((param_2 == '\0') || (param_1 != 0)) {
    _DAT_fffee18e = 0;
  }
  else if (uVar2 == 0xffff) {
    _DAT_fffee18e = -1;
  }
  else {
    _DAT_fffee18e = uVar2 + 1;
  }
  if (499 < uVar2) {
    uVar2 = 500;
  }
  *param_4 = uVar2;
  if (param_1 == 0) {
    *param_3 = 0;
  }
  else {
    puVar1 = (undefined *)__udiv32_r1_by_r0((uint)_DAT_fffee18c * 10,(uint)param_1);
    uVar3 = SUB42(puVar1,0);
    if (&DAT_0000ffff < puVar1) {
      uVar3 = 0xffff;
    }
    *param_3 = uVar3;
  }
  _DAT_fffee18c = uVar2;
  return;
}

