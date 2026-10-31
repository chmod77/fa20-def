
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00121e80(char param_1,char param_2,undefined1 *param_3,ushort *param_4)

{
  bool bVar1;
  undefined1 uVar2;
  ushort uVar3;
  
  bVar1 = false;
  if ((param_1 != '\0') && (param_2 != '\0')) {
    bVar1 = true;
  }
  if (bVar1) {
    if (DAT_fffee218 == '\0') {
      _DAT_fffee216 = 0;
      DAT_fffee218 = '\x01';
    }
    _DAT_fffee214 = _DAT_fffee216;
    uVar3 = 0xffff;
    if (_DAT_fffee216 != 0xffff) {
      uVar3 = _DAT_fffee216 + 1;
    }
  }
  else {
    DAT_fffee218 = '\0';
    uVar3 = _DAT_fffee216;
  }
  _DAT_fffee216 = uVar3;
  uVar3 = 0;
  if (bVar1) {
    uVar3 = _DAT_fffee214;
  }
  *param_4 = uVar3;
  uVar2 = 0;
  if ((bVar1) && (199 < uVar3)) {
    uVar2 = 1;
  }
  *param_3 = uVar2;
  return;
}

