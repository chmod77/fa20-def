
/* WARNING: Removing unreachable block (ram,0x0010efbe) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010ef68(ushort param_1,char param_2,char param_3,ushort param_4,undefined4 param_5,
                 char param_6,char param_7,char param_8,char param_9,ushort param_10,char param_11,
                 char *param_12)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = false;
  if (((param_1 < 400) && (param_2 != '\0')) && (param_3 != '\0')) {
    bVar1 = true;
  }
  if (((((bVar1) && (param_4 < 0x100)) &&
       (((param_6 != '\0' || ((param_7 != '\0' || (param_8 != '\0')))) || (param_9 != '\0')))) ||
      (((cVar2 = DAT_fffedcf6, bVar1 && (param_4 >= 0x100)) && (_DAT_fffedcf4 < param_10)))) &&
     (cVar2 = -1, DAT_fffedcf6 != -1)) {
    cVar2 = DAT_fffedcf6 + '\x01';
  }
  if (param_11 != '\0') {
    cVar2 = '\0';
  }
  *param_12 = cVar2;
  DAT_fffedcf6 = cVar2;
  _DAT_fffedcf4 = param_10;
  return;
}

