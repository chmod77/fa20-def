
void FUN_0007f71c(ushort param_1,char param_2,char param_3,char *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  
  bVar1 = false;
  if ((param_1 < 0x8c00) && (0x59ff < param_1)) {
    bVar1 = true;
  }
  bVar3 = false;
  if ((param_1 < 0x3b00) && (0x24ff < param_1)) {
    bVar3 = true;
  }
  bVar6 = false;
  if ((param_1 < 0x1801) && (0x13ff < param_1)) {
    bVar6 = true;
  }
  bVar2 = false;
  if ((param_1 < 0x5a00) && (0x3aff < param_1)) {
    bVar2 = true;
  }
  bVar4 = false;
  if ((param_1 < 0x2500) && (0x1cff < param_1)) {
    bVar4 = true;
  }
  bVar5 = false;
  if ((param_1 < 0x1d00) && (0x17ff < param_1)) {
    bVar5 = true;
  }
  if ((((!bVar1) && (DAT_fffeba84 == '\x01')) || ((!bVar2 && (DAT_fffeba84 == '\x02')))) ||
     ((((!bVar3 && (DAT_fffeba84 == '\x03')) || ((!bVar4 && (DAT_fffeba84 == '\x04')))) ||
      (((!bVar5 && (DAT_fffeba84 == '\x05')) ||
       ((cVar7 = DAT_fffeba84, !bVar6 && (DAT_fffeba84 == '\x06')))))))) {
    cVar7 = '\0';
  }
  if (((((DAT_fffeba84 == '\0') && (cVar7 = '\x01', !bVar1)) && (cVar7 = '\x02', !bVar2)) &&
      ((cVar7 = '\x03', !bVar3 && (cVar7 = '\x04', !bVar4)))) &&
     ((cVar7 = '\x05', !bVar5 && (cVar7 = '\0', bVar6)))) {
    cVar7 = '\x06';
  }
  if (param_2 != '\0') {
    param_3 = cVar7;
  }
  *param_4 = param_3;
  DAT_fffeba84 = param_3;
  return;
}

