
/* WARNING: Removing unreachable block (ram,0x0012863c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012861c(char param_1,ushort param_2,ushort *param_3)

{
  ushort uVar1;
  
  if ((param_1 != '\0') && (0x4b < param_2)) {
    uVar1 = _DAT_fffee360 + 0x1068;
    if (uVar1 < _DAT_fffee360) {
      uVar1 = 0xffff;
    }
    _DAT_fffee360 = 0x8000;
    if (uVar1 < 0x8000) {
      _DAT_fffee360 = uVar1;
    }
  }
  if (param_1 == '\0') {
    _DAT_fffee360 = 0;
  }
  *param_3 = _DAT_fffee360;
  return;
}

