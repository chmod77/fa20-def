
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00132d64(char param_1,char param_2,int param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1 == '\x03') && (param_2 == '\0')) {
    iVar1 = FUN_0016caac();
    uVar2 = 0xffffffff;
    if (iVar1 == 0) {
      uVar2 = _DAT_fffee600 + 10;
    }
    _DAT_fffee600 = uVar2 + param_3;
    if (_DAT_fffee600 < uVar2) {
      _DAT_fffee600 = 0xffffffff;
    }
  }
  if (param_1 != '\x03') {
    _DAT_fffee600 = 0;
  }
  *param_4 = _DAT_fffee600;
  return;
}

