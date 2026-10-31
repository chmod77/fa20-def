
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001228c4(char param_1,char param_2,char param_3,char param_4,char param_5,
                 undefined1 *param_6,ushort *param_7)

{
  bool bVar1;
  undefined1 uVar2;
  ushort uVar3;
  
  bVar1 = false;
  if ((((param_1 != '\0') && (param_2 != '\0')) && (param_3 != '\0')) &&
     ((param_4 != '\0' && (param_5 == '\0')))) {
    bVar1 = true;
  }
  if (bVar1) {
    if (DAT_fffee238 == '\0') {
      _DAT_fffee236 = 0;
      DAT_fffee238 = '\x01';
    }
    _DAT_fffee234 = _DAT_fffee236;
    uVar3 = 0xffff;
    if (_DAT_fffee236 != 0xffff) {
      uVar3 = _DAT_fffee236 + 1;
    }
  }
  else {
    DAT_fffee238 = '\0';
    uVar3 = _DAT_fffee236;
  }
  _DAT_fffee236 = uVar3;
  uVar3 = _DAT_fffee234;
  if (!bVar1) {
    uVar3 = 0;
  }
  *param_7 = uVar3;
  uVar2 = 0;
  if ((bVar1) && (199 < uVar3)) {
    uVar2 = 1;
  }
  *param_6 = uVar2;
  return;
}

