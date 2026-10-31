
void FUN_00131d8c(char param_1,char param_2,ushort param_3,char *param_4)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = 9 < DAT_fffee55d;
  if (param_3 < 0xfffc) {
    cVar2 = -1;
    if (DAT_fffee55d != 0xff) {
      cVar2 = DAT_fffee55d + 1;
    }
  }
  else {
    DAT_fffee55d = '\0';
    cVar2 = DAT_fffee55d;
  }
  DAT_fffee55d = cVar2;
  if ((((param_1 == '\0') && (param_2 != '\0')) && (param_3 < 0xfffc && bVar1)) &&
     (DAT_fffee55c == '\0')) {
    DAT_fffee55c = '\x01';
  }
  *param_4 = DAT_fffee55c;
  return;
}

