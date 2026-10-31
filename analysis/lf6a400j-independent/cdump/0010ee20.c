
/* WARNING: Removing unreachable block (ram,0x0010ee80) */

void FUN_0010ee20(char param_1,ushort param_2,char param_3,char param_4,ushort param_5,
                 undefined4 param_6,char param_7,char param_8,char param_9,char param_10,
                 byte param_11,char param_12,char *param_13)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = false;
  if (((param_2 < 2000) && (param_3 != '\0')) && (param_4 != '\0')) {
    bVar1 = true;
  }
  if (((((bVar1) && (param_5 < 0x100)) &&
       (((param_7 != '\0' || ((param_8 != '\0' || (param_9 != '\0')))) || (param_10 != '\0')))) ||
      (((cVar2 = DAT_fffedced, bVar1 && (param_5 >= 0x100)) && (DAT_fffedcec < param_11)))) &&
     (cVar2 = -1, DAT_fffedced != -1)) {
    cVar2 = DAT_fffedced + '\x01';
  }
  if ((param_12 != '\0') || (param_1 != '\0')) {
    cVar2 = '\0';
  }
  *param_13 = cVar2;
  DAT_fffedced = cVar2;
  DAT_fffedcec = param_11;
  return;
}

