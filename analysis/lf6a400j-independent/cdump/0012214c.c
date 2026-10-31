
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012214c(char param_1,char param_2,undefined1 *param_3,ushort *param_4)

{
  bool bVar1;
  undefined1 uVar2;
  ushort uVar3;
  
  bVar1 = false;
  if ((param_1 != '\0') && (param_2 != '\0')) {
    bVar1 = true;
  }
  if (bVar1) {
    if (DAT_fffee220 == '\0') {
      _DAT_fffee21e = 0;
      DAT_fffee220 = '\x01';
    }
    _DAT_fffee21c = _DAT_fffee21e;
    uVar3 = 0xffff;
    if (_DAT_fffee21e != 0xffff) {
      uVar3 = _DAT_fffee21e + 1;
    }
  }
  else {
    DAT_fffee220 = '\0';
    uVar3 = _DAT_fffee21e;
  }
  _DAT_fffee21e = uVar3;
  uVar3 = 0;
  if (bVar1) {
    uVar3 = _DAT_fffee21c;
  }
  *param_4 = uVar3;
  uVar2 = 0;
  if ((bVar1) && (199 < uVar3)) {
    uVar2 = 1;
  }
  *param_3 = uVar2;
  return;
}

