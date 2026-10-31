
void FUN_00100600(ushort param_1,char param_2,char param_3,char param_4,byte param_5,char param_6,
                 char param_7,byte param_8,ushort param_9,char param_10,char param_11,char *param_12
                 )

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  uint uStack00000010;
  
  uVar3 = param_9;
  uStack00000010 = (uint)param_9;
  bVar1 = param_2 == '\x01';
  bVar2 = false;
  if (((param_4 != '\0') && (param_4 == DAT_fffed9d5)) && (!bVar1)) {
    bVar2 = true;
  }
  if (bVar2) {
    if (DAT_fffed9d1 == '\0') {
      DAT_fffed9d6 = 0;
      DAT_fffed9d1 = '\x01';
    }
    DAT_fffed9d0 = 0x18 < DAT_fffed9d6;
    bVar6 = 0xff;
    if (DAT_fffed9d6 != 0xff) {
      bVar6 = DAT_fffed9d6 + 1;
    }
  }
  else {
    DAT_fffed9d1 = '\0';
    bVar6 = DAT_fffed9d6;
  }
  DAT_fffed9d6 = bVar6;
  cVar4 = '\0';
  if (bVar2) {
    cVar4 = DAT_fffed9d0;
  }
  bVar6 = DAT_fffed9d2;
  if ((DAT_fffed9d4 == '\x01') && (bVar6 = 0xff, DAT_fffed9d2 != 0xff)) {
    bVar6 = DAT_fffed9d2 + 1;
  }
  if (bVar1) {
    bVar6 = 0;
  }
  if ((((param_7 == '\0') && (param_10 == '\0')) && ((param_11 == '\0' && (DAT_fffed9d4 == '\x04')))
      ) || (cVar5 = DAT_fffed9d4, DAT_fffed9d3 < param_8)) {
    cVar5 = '\x03';
  }
  if ((DAT_fffed9d4 == '\x03') && (((param_7 != '\0' || (param_10 != '\0')) || (param_11 != '\0'))))
  {
    cVar5 = '\x04';
  }
  if ((((199 >= bVar6) && (DAT_fffed9d4 == '\0')) &&
      (((1 < param_5 && ((param_1 < uVar3 && (param_6 != '\0')))) && (param_3 == '\0')))) ||
     (((1 < param_5 && (param_3 == '\0')) && ((param_10 != '\0' || (param_11 != '\0')))))) {
    cVar5 = '\x01';
  }
  if ((bVar1) ||
     ((((DAT_fffed9d4 == '\x01' && (param_10 == '\0')) && (param_11 == '\0')) &&
      (((cVar4 != '\0' || (199 < bVar6)) ||
       ((param_3 == '\0' && ((int)uStack00000010 < (int)(param_1 - 0x334))))))))) {
    cVar5 = '\0';
  }
  *param_12 = cVar5;
  DAT_fffed9d5 = param_4;
  DAT_fffed9d2 = bVar6;
  DAT_fffed9d4 = cVar5;
  DAT_fffed9d3 = param_8;
  return;
}

