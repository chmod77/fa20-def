
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00133528(char param_1,char param_2,char param_3,short param_4,short param_5,char *param_6,
                 ushort *param_7)

{
  bool bVar1;
  undefined *puVar2;
  
  if (param_1 == '\0') {
    DAT_fffee62f = '\0';
  }
  else {
    if (DAT_fffee62f == '\0') {
      _DAT_fffee62c = 0;
      DAT_fffee62e = '\0';
      DAT_fffee62f = '\x01';
    }
    puVar2 = &UNK_000042a9 + param_4 * 2;
    if ((int)puVar2 < 0x8000) {
      if ((int)puVar2 < -0x8000) {
        puVar2 = (undefined *)0xffff8000;
      }
    }
    else {
      puVar2 = (undefined *)0x7fff;
    }
    bVar1 = false;
    if ((param_3 != '\0') && (((param_4 < 0 && ((short)puVar2 < param_5)) || (0 < param_5)))) {
      bVar1 = true;
    }
    _DAT_fffee628 = 0;
    if (bVar1) {
      _DAT_fffee628 = _DAT_fffee62c;
      if (_DAT_fffee62c == 0xffff) {
        _DAT_fffee62c = 0xffff;
      }
      else {
        _DAT_fffee62c = _DAT_fffee62c + 1;
      }
    }
    else {
      _DAT_fffee62c = 0;
    }
    if (DAT_fffee62e == '\0') {
      if (param_3 == '\0') {
        DAT_fffee62a = '\0';
      }
      else {
        DAT_fffee62a = '\0';
        if ((bVar1) && (0x3f < _DAT_fffee628)) {
          DAT_fffee62a = '\x01';
        }
      }
    }
    else {
      DAT_fffee62a = '\x01';
    }
    DAT_fffee62e = DAT_fffee62a;
    if (param_2 == '@') {
      DAT_fffee62a = '\0';
      DAT_fffee62e = DAT_fffee62a;
    }
  }
  if (param_1 == '\0') {
    *param_6 = '\0';
    *param_7 = 0;
  }
  else {
    *param_6 = DAT_fffee62a;
    *param_7 = _DAT_fffee628;
  }
  return;
}

