
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001336f0(char param_1,char param_2,char param_3,char param_4,char param_5,char *param_6,
                 ushort *param_7)

{
  bool bVar1;
  
  if (param_2 == '\0') {
    DAT_fffee63a = '\0';
  }
  else {
    if (DAT_fffee63a == '\0') {
      _DAT_fffee638 = 0;
      DAT_fffee63b = '\0';
      DAT_fffee63a = '\x01';
    }
    bVar1 = false;
    if (((param_5 != '\0') && (param_1 == '\0')) && (param_4 != '\0')) {
      bVar1 = true;
    }
    _DAT_fffee634 = 0;
    if (bVar1) {
      _DAT_fffee634 = _DAT_fffee638;
      if (_DAT_fffee638 == 0xffff) {
        _DAT_fffee638 = 0xffff;
      }
      else {
        _DAT_fffee638 = _DAT_fffee638 + 1;
      }
    }
    else {
      _DAT_fffee638 = 0;
    }
    if (DAT_fffee63b == '\0') {
      if (param_5 == '\0') {
        DAT_fffee636 = '\0';
      }
      else {
        DAT_fffee636 = '\0';
        if ((bVar1) && (0x3f < _DAT_fffee634)) {
          DAT_fffee636 = '\x01';
        }
      }
    }
    else {
      DAT_fffee636 = '\x01';
    }
    DAT_fffee63b = DAT_fffee636;
    if (param_3 == '@') {
      DAT_fffee636 = '\0';
      DAT_fffee63b = DAT_fffee636;
    }
  }
  if (param_2 == '\0') {
    *param_6 = '\0';
    *param_7 = 0;
  }
  else {
    *param_6 = DAT_fffee636;
    *param_7 = _DAT_fffee634;
  }
  return;
}

