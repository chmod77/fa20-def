
void FUN_001217fc(char param_1,char param_2,undefined1 *param_3,byte *param_4)

{
  bool bVar1;
  undefined1 uVar2;
  byte bVar3;
  
  bVar1 = false;
  if ((param_1 != '\0') && (param_2 != '\0')) {
    bVar1 = true;
  }
  if (bVar1) {
    if (DAT_fffee1fe == '\0') {
      DAT_fffee1fd = 0;
      DAT_fffee1fe = '\x01';
    }
    DAT_fffee1fc = DAT_fffee1fd;
    bVar3 = 0xff;
    if (DAT_fffee1fd != 0xff) {
      bVar3 = DAT_fffee1fd + 1;
    }
  }
  else {
    DAT_fffee1fe = '\0';
    bVar3 = DAT_fffee1fd;
  }
  DAT_fffee1fd = bVar3;
  bVar3 = 0;
  if (bVar1) {
    bVar3 = DAT_fffee1fc;
  }
  *param_4 = bVar3;
  uVar2 = 0;
  if ((bVar1) && (0x13 < bVar3)) {
    uVar2 = 1;
  }
  *param_3 = uVar2;
  return;
}

