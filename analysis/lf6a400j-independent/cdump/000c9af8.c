
/* WARNING: Removing unreachable block (ram,0x000c9baa) */

void FUN_000c9af8(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,undefined1 *param_8)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = true;
  if (((param_1 == '\0') || (param_3 != '\x01')) && ((param_2 == '\0' || (param_4 != '\x01')))) {
    bVar2 = false;
  }
  if (bVar2) {
    bVar1 = param_7 != '\0';
    if (((param_5 == '\0') || (param_6 == '\0')) || (bVar1)) {
      if (((param_5 == '\0') || (param_6 != '\0')) || (bVar1)) {
        if (((param_5 != '\0') || (param_6 == '\0')) || (bVar1)) {
          if (((param_5 != '\0') || (param_6 != '\0')) || (param_7 == '\0')) {
            DAT_fffecb74 = 0;
          }
          else {
            DAT_fffecb74 = 4;
          }
        }
        else {
          DAT_fffecb74 = 3;
        }
      }
      else {
        DAT_fffecb74 = 2;
      }
    }
    else {
      DAT_fffecb74 = 1;
    }
  }
  if (bVar2) {
    DAT_fffecb75 = DAT_fffecb74;
  }
  *param_8 = DAT_fffecb75;
  return;
}

