
void FUN_0012a49c(char param_1,char param_2,char param_3,undefined1 param_4,ushort param_5,
                 ushort param_6,char param_7,ushort *param_8)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  
  bVar1 = 9 < DAT_fffee434;
  if (param_5 < 0xfffc) {
    bVar2 = 0xfe;
    if (DAT_fffee434 != 0xff) {
      bVar2 = DAT_fffee434;
    }
    DAT_fffee434 = bVar2 + 1;
  }
  else {
    DAT_fffee434 = '\0';
  }
  uVar3 = param_6;
  if ((((param_2 == '\0') && (param_3 != '\0')) && (param_5 < 0xfffc && bVar1)) &&
     ((DAT_fffee435 == '\0' && (uVar3 = 0xffff, param_6 != 0xffff)))) {
    uVar3 = param_6 + 1;
  }
  if ((param_1 == '\x01') && (param_7 == '\x01')) {
    *param_8 = uVar3 >> 1;
  }
  else {
    *param_8 = uVar3;
  }
  DAT_fffee435 = param_4;
  return;
}

