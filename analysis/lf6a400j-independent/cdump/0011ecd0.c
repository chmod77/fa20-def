
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011ecd0(undefined2 param_1,undefined2 *param_2,ushort *param_3)

{
  ushort uVar1;
  
  uVar1 = 0;
  if ((_DAT_fffee11c < 2) && (uVar1 = 0xffff, _DAT_fffee11c != 0xffff)) {
    uVar1 = _DAT_fffee11c + 1;
  }
  *param_3 = uVar1;
  if (uVar1 < 2) {
    param_1 = _DAT_fffee11e;
  }
  *param_2 = param_1;
  _DAT_fffee11c = uVar1;
  _DAT_fffee11e = param_1;
  return;
}

