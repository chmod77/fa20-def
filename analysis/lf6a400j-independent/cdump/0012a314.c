
void FUN_0012a314(ushort param_1,char param_2,char param_3,undefined1 param_4,char param_5,
                 ushort param_6,char param_7,ushort *param_8)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  
  bVar1 = 9 < DAT_fffee42d;
  if (param_1 < 0xfe66) {
    cVar2 = -1;
    if (DAT_fffee42d != 0xff) {
      cVar2 = DAT_fffee42d + 1;
    }
  }
  else {
    DAT_fffee42d = '\0';
    cVar2 = DAT_fffee42d;
  }
  DAT_fffee42d = cVar2;
  uVar3 = param_6;
  if ((((param_2 == '\0') && (param_3 != '\0')) && (param_1 < 0xfe66 && bVar1)) &&
     ((DAT_fffee42c == '\0' && (uVar3 = 0xffff, param_6 != 0xffff)))) {
    uVar3 = param_6 + 1;
  }
  if ((param_5 == '\x01') && (param_7 == '\x01')) {
    *param_8 = uVar3 >> 1;
  }
  else {
    *param_8 = uVar3;
  }
  DAT_fffee42c = param_4;
  return;
}

