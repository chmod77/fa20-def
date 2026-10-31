
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001338a0(char param_1,char param_2,char param_3,char param_4,char *param_5,ushort *param_6)

{
  bool bVar1;
  
  if (param_1 == '\0') {
    DAT_fffee64a = '\0';
  }
  else {
    if (DAT_fffee64a == '\0') {
      _DAT_fffee648 = 0;
      DAT_fffee64b = '\0';
      DAT_fffee64a = '\x01';
    }
    bVar1 = false;
    if ((param_4 != '\0') && (param_3 != '\0')) {
      bVar1 = true;
    }
    _DAT_fffee644 = 0;
    if (bVar1) {
      _DAT_fffee644 = _DAT_fffee648;
      if (_DAT_fffee648 == 0xffff) {
        _DAT_fffee648 = 0xffff;
      }
      else {
        _DAT_fffee648 = _DAT_fffee648 + 1;
      }
    }
    else {
      _DAT_fffee648 = 0;
    }
    if (DAT_fffee64b == '\0') {
      if (param_4 == '\0') {
        DAT_fffee646 = '\0';
      }
      else {
        DAT_fffee646 = '\0';
        if ((bVar1) && (0xc34 < _DAT_fffee644)) {
          DAT_fffee646 = '\x01';
        }
      }
    }
    else {
      DAT_fffee646 = '\x01';
    }
    DAT_fffee64b = DAT_fffee646;
    if (param_2 == '@') {
      DAT_fffee646 = '\0';
      DAT_fffee64b = DAT_fffee646;
    }
  }
  if (param_1 == '\0') {
    *param_5 = '\0';
    *param_6 = 0;
  }
  else {
    *param_5 = DAT_fffee646;
    *param_6 = _DAT_fffee644;
  }
  return;
}

