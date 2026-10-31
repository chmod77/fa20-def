
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00121558(char param_1,char param_2,undefined1 *param_3,ushort *param_4)

{
  bool bVar1;
  undefined1 uVar2;
  ushort uVar3;
  
  bVar1 = false;
  if ((param_1 != '\0') && (param_2 != '\0')) {
    bVar1 = true;
  }
  if (bVar1) {
    if (DAT_fffee1f4 == '\0') {
      _DAT_fffee1f2 = 0;
      DAT_fffee1f4 = '\x01';
    }
    _DAT_fffee1f0 = _DAT_fffee1f2;
    uVar3 = 0xffff;
    if (_DAT_fffee1f2 != 0xffff) {
      uVar3 = _DAT_fffee1f2 + 1;
    }
  }
  else {
    DAT_fffee1f4 = '\0';
    uVar3 = _DAT_fffee1f2;
  }
  _DAT_fffee1f2 = uVar3;
  uVar3 = 0;
  if (bVar1) {
    uVar3 = _DAT_fffee1f0;
  }
  *param_4 = uVar3;
  uVar2 = 0;
  if ((bVar1) && (199 < uVar3)) {
    uVar2 = 1;
  }
  *param_3 = uVar2;
  return;
}

