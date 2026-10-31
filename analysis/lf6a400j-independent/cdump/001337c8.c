
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001337c8(char param_1,char param_2,char param_3,char param_4,char param_5,char *param_6,
                 ushort *param_7)

{
  bool bVar1;
  
  if (param_2 == '\0') {
    DAT_fffee642 = '\0';
  }
  else {
    if (DAT_fffee642 == '\0') {
      _DAT_fffee640 = 0;
      DAT_fffee643 = '\0';
      DAT_fffee642 = '\x01';
    }
    bVar1 = false;
    if (((param_4 != '\0') && (param_1 != '\0')) && (param_5 == '\0')) {
      bVar1 = true;
    }
    _DAT_fffee63c = 0;
    if (bVar1) {
      _DAT_fffee63c = _DAT_fffee640;
      if (_DAT_fffee640 == 0xffff) {
        _DAT_fffee640 = 0xffff;
      }
      else {
        _DAT_fffee640 = _DAT_fffee640 + 1;
      }
    }
    else {
      _DAT_fffee640 = 0;
    }
    if (DAT_fffee643 == '\0') {
      if (param_4 == '\0') {
        DAT_fffee63e = '\0';
      }
      else {
        DAT_fffee63e = '\0';
        if ((bVar1) && (0x3f < _DAT_fffee63c)) {
          DAT_fffee63e = '\x01';
        }
      }
    }
    else {
      DAT_fffee63e = '\x01';
    }
    DAT_fffee643 = DAT_fffee63e;
    if (param_3 == '@') {
      DAT_fffee63e = '\0';
      DAT_fffee643 = DAT_fffee63e;
    }
  }
  if (param_2 == '\0') {
    *param_6 = '\0';
    *param_7 = 0;
  }
  else {
    *param_6 = DAT_fffee63e;
    *param_7 = _DAT_fffee63c;
  }
  return;
}

