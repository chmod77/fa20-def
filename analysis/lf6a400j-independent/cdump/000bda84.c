
/* WARNING: Removing unreachable block (ram,0x000bdb1e) */
/* WARNING: Removing unreachable block (ram,0x000bdb02) */

void FUN_000bda84(undefined4 param_1,undefined4 param_2,char param_3,char param_4,undefined2 param_5
                 ,char param_6,char param_7,char param_8,char param_9,undefined2 *param_10)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  
  bVar1 = false;
  if ((param_3 != '\0') && (param_4 != '\0')) {
    bVar1 = true;
  }
  bVar2 = false;
  if ((bVar1) && (DAT_fffec8e8 == '\0')) {
    bVar2 = true;
  }
  if ((DAT_fffec8ea != '\0') || (cVar3 = '\x01', !bVar2)) {
    cVar3 = DAT_fffec8e9;
  }
  if ((bVar2) && (DAT_fffec8ea != '\0')) {
    cVar3 = '\0';
  }
  if (((param_6 == '\0') && (param_7 == '\0')) && (param_8 == '\0')) {
    if (bVar1) {
      if (cVar3 == '\0') {
        *param_10 = 0x6400;
        goto LAB_000bdb48;
      }
    }
    else if (param_9 == '\0') {
      *param_10 = param_5;
      goto LAB_000bdb48;
    }
  }
  *param_10 = 0;
LAB_000bdb48:
  if (bVar2) {
    DAT_fffec8e8 = 'K';
  }
  if ((bVar1) && (DAT_fffec8e8 != '\0')) {
    DAT_fffec8e8 = DAT_fffec8e8 + -1;
  }
  else {
    DAT_fffec8e8 = '\0';
  }
  DAT_fffec8e9 = cVar3;
  DAT_fffec8ea = cVar3;
  return;
}

