
void FUN_00096cc8(char param_1,ushort param_2,undefined4 param_3,char param_4,char param_5,
                 undefined1 *param_6,char *param_7)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  
  bVar1 = false;
  if ((0x7dff < param_2) && (param_2 < 0x8200)) {
    bVar1 = true;
  }
  cVar3 = DAT_fffebf60;
  if (((!bVar1) && (param_1 != '\0')) && (cVar3 = -1, DAT_fffebf60 != -1)) {
    cVar3 = DAT_fffebf60 + '\x01';
  }
  if (param_4 != '\0') {
    cVar3 = '\0';
  }
  *param_7 = cVar3;
  uVar2 = 0;
  if ((param_1 != '\0') && (param_5 == '\0')) {
    uVar2 = 1;
  }
  *param_6 = uVar2;
  DAT_fffebf60 = cVar3;
  return;
}

