
void FUN_0011ed5c(byte param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
                 char param_6,char *param_7)

{
  bool bVar1;
  char cVar2;
  
  if (param_2 < param_3) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 - param_3;
  }
  bVar1 = param_2 < 0x170a;
  if (((param_1 == 0) || (DAT_fffee125 != '\x01')) || (cVar2 = '\0', bVar1)) {
    cVar2 = DAT_fffee125;
  }
  if (((param_1 != 0) && (DAT_fffee125 == '\x02')) && (0x1999 < param_5)) {
    cVar2 = '\0';
  }
  if (((param_1 != 0) && (DAT_fffee125 == '\x03')) && (!bVar1)) {
    cVar2 = '\x02';
  }
  if ((((param_1 != 0) && (DAT_fffee125 == '\x03')) && (0x1999 < param_5)) && (param_6 != '\0')) {
    cVar2 = '\x01';
  }
  if (((param_1 != 0) && (DAT_fffee125 == '\x04')) && (9 < param_4)) {
    cVar2 = '\x03';
  }
  if (((param_1 != 0) && (DAT_fffee125 == '\x04')) && (!bVar1)) {
    cVar2 = '\x02';
  }
  if (DAT_fffee124 < param_1) {
    cVar2 = '\x04';
  }
  *param_7 = cVar2;
  DAT_fffee125 = cVar2;
  DAT_fffee124 = param_1;
  return;
}

