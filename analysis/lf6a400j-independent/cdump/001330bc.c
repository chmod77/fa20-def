
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001330bc(char param_1,short param_2,undefined2 *param_3)

{
  int iVar1;
  
  if (param_1 == '\0') {
    DAT_fffee620 = '\0';
  }
  else {
    if (DAT_fffee620 == '\0') {
      _DAT_fffee61e = 0;
      DAT_fffee620 = '\x01';
    }
    iVar1 = (int)param_2 - (int)_DAT_fffee61e;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    _DAT_fffee61c = (undefined2)iVar1;
    _DAT_fffee61e = param_2;
    if (iVar1 < 0) {
      _DAT_fffee61c = 0;
    }
  }
  if (param_1 == '\0') {
    *param_3 = 0;
  }
  else {
    *param_3 = _DAT_fffee61c;
  }
  return;
}

