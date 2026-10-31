
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00120400(byte param_1,char param_2,undefined2 param_3,undefined2 *param_4)

{
  if ((param_1 <= DAT_fffee176) && (param_2 != '\0')) {
    param_3 = _DAT_fffee174;
  }
  *param_4 = param_3;
  DAT_fffee176 = param_1;
  _DAT_fffee174 = param_3;
  return;
}

