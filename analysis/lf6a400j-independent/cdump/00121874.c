
void FUN_00121874(char param_1,char param_2,undefined1 *param_3,byte *param_4)

{
  bool bVar1;
  undefined1 uVar2;
  byte bVar3;
  
  bVar1 = false;
  if ((param_1 != '\0') && (param_2 != '\0')) {
    bVar1 = true;
  }
  if (bVar1) {
    if (DAT_fffee202 == '\0') {
      DAT_fffee201 = 0;
      DAT_fffee202 = '\x01';
    }
    DAT_fffee200 = DAT_fffee201;
    bVar3 = 0xff;
    if (DAT_fffee201 != 0xff) {
      bVar3 = DAT_fffee201 + 1;
    }
  }
  else {
    DAT_fffee202 = '\0';
    bVar3 = DAT_fffee201;
  }
  DAT_fffee201 = bVar3;
  bVar3 = 0;
  if (bVar1) {
    bVar3 = DAT_fffee200;
  }
  *param_4 = bVar3;
  uVar2 = 0;
  if ((bVar1) && (199 < bVar3)) {
    uVar2 = 1;
  }
  *param_3 = uVar2;
  return;
}

