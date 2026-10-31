
/* WARNING: Removing unreachable block (ram,0x000ac9ba) */
/* WARNING: Removing unreachable block (ram,0x000ac982) */
/* WARNING: Removing unreachable block (ram,0x000ac9dc) */
/* WARNING: Removing unreachable block (ram,0x000ac9ec) */
/* WARNING: Removing unreachable block (ram,0x000ac9ee) */
/* WARNING: Removing unreachable block (ram,0x000aca00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ac870(undefined *param_1,char param_2,uint param_3,ushort param_4,byte param_5,
                 char param_6,char param_7,ushort param_8,char param_9,char *param_10,char *param_11
                 ,undefined4 param_12)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  
  uVar6 = (uint)param_5;
  bVar3 = true;
  if ((((param_7 == '\0') || (param_6 != '\0')) && ((param_6 == '\0' || (param_8 < 0x11b5)))) &&
     ((param_9 != '\0' || (param_8 < 0x11b5)))) {
    bVar3 = false;
  }
  *(bool *)param_12 = bVar3;
  bVar2 = DAT_fffec4fc != '\x01';
  if (!bVar2) {
    if (&UNK_0000b7ff < param_1) {
      DAT_fffec4f4 = '\x03';
    }
    else {
      DAT_fffec4f4 = '\x02';
    }
  }
  bVar5 = true;
  if ((DAT_fffec4fc != '\x02') && (DAT_fffec4fc != '\x03')) {
    bVar5 = false;
  }
  if (bVar5) {
    if ((bVar3) ||
       (uVar6 = LK_133F40((uint)&T_02DF30,(uint)param_1), DAT_fffec4f5 = DAT_fffec4fc,
       (uVar6 & 0xffff) <= (param_3 & 0xffff))) {
      DAT_fffec4f5 = '\x05';
    }
    uVar6 = (uint)(char)param_5;
    if (uVar6 != 0) {
      DAT_fffec4f5 = DAT_fffec4fc;
    }
    if (param_4 < 200) {
      DAT_fffec4f5 = DAT_fffec4fc;
    }
    else if ((uVar6 != 0) && (bVar3)) {
      DAT_fffec4f5 = '\a';
    }
  }
  if (DAT_fffec4fc == '\x04') {
    DAT_fffec4f6 = '\x05';
  }
  if (DAT_fffec4fc != '\x05') {
    DAT_fffec4fd = '\0';
  }
  else {
    if (DAT_fffec4fd == '\0') {
      DAT_fffec4fd = '\x01';
    }
    _DAT_fffec4fa = 0;
    DAT_fffec4f7 = '\x05';
  }
  if (DAT_fffec4fc == '\a') {
    if (uVar6 == 0) {
      DAT_fffec4f8 = '\x05';
    }
    else {
      DAT_fffec4f8 = '\a';
    }
  }
  cVar1 = DAT_fffec4fc;
  if (DAT_fffec4fc == '\a') {
    cVar1 = DAT_fffec4f8;
  }
  if (param_2 == '\0') {
    cVar4 = DAT_fffec4f4;
    if ((((bVar2) && (cVar4 = DAT_fffec4f5, !bVar5)) &&
        (cVar4 = DAT_fffec4f6, DAT_fffec4fc != '\x04')) && (cVar4 = cVar1, DAT_fffec4fc == '\x05'))
    {
      cVar4 = DAT_fffec4f7;
    }
  }
  else {
    cVar4 = '\x01';
  }
  *param_10 = cVar4;
  *param_11 = DAT_fffec4fc;
  DAT_fffec4fc = cVar4;
  return;
}

