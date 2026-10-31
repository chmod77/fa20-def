
void FUN_001214e0(char param_1,char param_2,undefined1 *param_3,byte *param_4)

{
  bool bVar1;
  undefined1 uVar2;
  byte bVar3;
  
  bVar1 = false;
  if ((param_1 != '\0') && (param_2 != '\0')) {
    bVar1 = true;
  }
  if (bVar1) {
    if (DAT_fffee1ee == '\0') {
      DAT_fffee1ed = 0;
      DAT_fffee1ee = '\x01';
    }
    DAT_fffee1ec = DAT_fffee1ed;
    bVar3 = 0xff;
    if (DAT_fffee1ed != 0xff) {
      bVar3 = DAT_fffee1ed + 1;
    }
  }
  else {
    DAT_fffee1ee = '\0';
    bVar3 = DAT_fffee1ed;
  }
  DAT_fffee1ed = bVar3;
  bVar3 = 0;
  if (bVar1) {
    bVar3 = DAT_fffee1ec;
  }
  *param_4 = bVar3;
  uVar2 = 0;
  if ((bVar1) && (0x13 < bVar3)) {
    uVar2 = 1;
  }
  *param_3 = uVar2;
  return;
}

