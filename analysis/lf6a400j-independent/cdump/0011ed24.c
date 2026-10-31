
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011ed24(byte param_1,ushort param_2,ushort param_3,ushort *param_4)

{
  if ((param_1 == 0) || (_DAT_fffee120 <= param_2)) {
    param_2 = _DAT_fffee120;
  }
  if (param_1 <= DAT_fffee122) {
    param_3 = param_2;
  }
  *param_4 = param_3;
  DAT_fffee122 = param_1;
  _DAT_fffee120 = param_3;
  return;
}

