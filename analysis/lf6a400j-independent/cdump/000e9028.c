
void FUN_000e9028(char param_1,char param_2,ushort param_3,char param_4,char param_5,short param_6,
                 char param_7,undefined1 *param_8)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = true;
  if ((param_1 == '\0') || (param_2 != '\0')) {
    bVar1 = false;
  }
  if (((((bVar1) && (200 < param_3)) && (param_4 != '\0')) && (param_5 != '\0')) ||
     ((bVar1 && (param_6 != 0)))) {
    DAT_fffed409 = 1;
  }
  if (((param_7 != '\0') || (param_2 != '\0')) || (uVar2 = DAT_fffed409, DAT_fffed408 != '\0')) {
    uVar2 = 0;
  }
  DAT_fffed409 = uVar2;
  *param_8 = uVar2;
  DAT_fffed408 = uVar2;
  return;
}

