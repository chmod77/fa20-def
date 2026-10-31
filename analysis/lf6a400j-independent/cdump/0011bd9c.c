
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011bd9c(short param_1,short param_2,undefined2 param_3,char param_4,undefined2 *param_5)

{
  bool bVar1;
  ushort uVar2;
  
  uVar2 = 0xffff;
  if (_DAT_fffee068 != -1) {
    uVar2 = _DAT_fffee068 + 1;
  }
  if (DAT_fffee06a != 0) {
    uVar2 = 1;
  }
  bVar1 = 999 < uVar2;
  _DAT_fffee068 = uVar2;
  if (param_4 == '\0') {
    if (DAT_fffee06a <= bVar1) {
      DAT_fffee06a = bVar1;
      *param_5 = param_3;
      return;
    }
    if ((0x3fff < param_2) || (param_2 < 0x2001)) {
      DAT_fffee06a = bVar1;
      *param_5 = (short)((ulonglong)((longlong)(param_1 * 0x80) * 0x2000000) >> 0x20);
      return;
    }
  }
  DAT_fffee06a = bVar1;
  *param_5 = 0;
  return;
}

