
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013bd70(void)

{
  bool bVar1;
  char cVar2;
  
  if (((DAT_fffee693 & 8) == 0) && ((DAT_fffee694 & 8) != 0)) {
    thunk_FUN_0014e754();
    _DAT_ffff7ba6 = 0;
    DAT_ffffabc5 = DAT_ffffabc5 & 0x7f;
    DAT_ffffabc7 = 0;
    DAT_fffef713 = 0;
  }
  if ((DAT_fffee693 & 8) != 0) {
    _DAT_fffeed1c = 0;
    _DAT_fffeef3e = 0;
    _DAT_ffff65a2 = 0;
    return;
  }
  if (((DAT_ffffab41 < 0x8b) || (v_Coolant_Temperature_29A5 == 0)) ||
     (0x6d < v_Coolant_Temperature_29A5)) {
    _DAT_fffeef40 = 10;
  }
  else {
    _DAT_fffeef40 = FUN_0016bae4(&PTR_DAT_00168b98,(int)DAT_ffff29a6);
  }
  if (_DAT_ffff65a2 < 0x15e) {
    _DAT_fffeef3e = 0;
  }
  else {
    _DAT_fffeef3e = FUN_00001540(_DAT_fffeef3e + 1);
    bVar1 = true;
    if (_DAT_fffeef40 <= _DAT_fffeef3e) goto LAB_0013beb6;
  }
  bVar1 = false;
LAB_0013beb6:
  _DAT_ffff65a2 = FUN_00001540(_DAT_ffff65a2 + 1);
  cVar2 = FUN_00140424(0,0x10e);
  if (((bVar1) && (cVar2 == '\0')) || (0x9c3 < _DAT_fffeed1c)) {
    FUN_00151288(0);
  }
  _DAT_fffeed1c = _DAT_fffeed1c + 1;
  return;
}

