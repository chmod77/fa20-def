
void FUN_00131d00(ushort param_1,char param_2,char param_3,char *param_4)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = 9 < DAT_fffee559;
  if (param_1 < 0xfe66) {
    cVar2 = -1;
    if (DAT_fffee559 != 0xff) {
      cVar2 = DAT_fffee559 + 1;
    }
  }
  else {
    DAT_fffee559 = '\0';
    cVar2 = DAT_fffee559;
  }
  DAT_fffee559 = cVar2;
  if ((((param_2 == '\0') && (param_3 != '\0')) && (param_1 < 0xfe66 && bVar1)) &&
     (DAT_fffee558 == '\0')) {
    DAT_fffee558 = '\x01';
  }
  *param_4 = DAT_fffee558;
  return;
}

