
void FUN_00131c74(ushort param_1,char param_2,char param_3,char *param_4)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = 9 < DAT_fffee555;
  if (param_1 < 0xfe66) {
    cVar2 = -1;
    if (DAT_fffee555 != 0xff) {
      cVar2 = DAT_fffee555 + 1;
    }
  }
  else {
    DAT_fffee555 = '\0';
    cVar2 = DAT_fffee555;
  }
  DAT_fffee555 = cVar2;
  if ((((param_2 == '\0') && (param_3 != '\0')) && (param_1 < 0xfe66 && bVar1)) &&
     (DAT_fffee554 == '\0')) {
    DAT_fffee554 = '\x01';
  }
  *param_4 = DAT_fffee554;
  return;
}

