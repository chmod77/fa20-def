
void FUN_00131780(char param_1,char param_2,ushort param_3,char param_4,char *param_5)

{
  char cVar1;
  byte bVar2;
  
  bVar2 = DAT_fffee4f8;
  if (((param_3 < 0xb001) && (param_4 != '\0')) && (bVar2 = 0xff, DAT_fffee4f8 != 0xff)) {
    bVar2 = DAT_fffee4f8 + 1;
  }
  if (((param_1 != '\0') || (param_2 == '\0')) ||
     ((bVar2 < 10 || (cVar1 = '\x01', DAT_fffee4f9 != '\0')))) {
    cVar1 = DAT_fffee4f9;
  }
  *param_5 = cVar1;
  DAT_fffee4f9 = cVar1;
  DAT_fffee4f8 = bVar2;
  return;
}

