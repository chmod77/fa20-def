
/* WARNING: Removing unreachable block (ram,0x0009f3c0) */

void FUN_0009f368(char param_1,char param_2,ushort param_3,char param_4,char param_5,char param_6,
                 ushort param_7,char *param_8)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  char cVar5;
  char cVar6;
  short sVar7;
  
  if (DAT_fffec104 == '\0') {
    uVar4 = 0x7e00;
  }
  else {
    uVar4 = 0x8000;
  }
  if (DAT_fffec105 == '\0') {
    uVar2 = 0x1800;
  }
  else {
    uVar2 = 0x1600;
  }
  bVar1 = false;
  if (((param_4 != '\0') && (uVar2 <= param_3)) && (param_3 <= uVar4)) {
    bVar1 = true;
  }
  cVar5 = DAT_fffec106;
  if ((param_2 != '\x10') &&
     (((param_2 != '\n' || (!bVar1)) || ((param_6 != '\0' || (99 < param_7)))))) {
    sVar7 = DAT_fffec106 + 1;
    cVar5 = '\0';
    if ((sVar7 < 1) && (cVar5 = (char)sVar7, 0x7f < sVar7)) {
      cVar5 = '\x7f';
    }
  }
  if ((param_2 == '\x0f') ||
     ((((param_2 == '\n' && (bVar1)) && (99 < param_7)) && (param_6 == '\0')))) {
    sVar7 = DAT_fffec106 + 1;
    cVar5 = '\0';
    if ((sVar7 < 1) && (cVar5 = (char)sVar7, 0x7f < sVar7)) {
      cVar5 = '\x7f';
    }
  }
  cVar6 = -0x22;
  if (((param_2 == '\x0e') || (((param_2 == '\n' && (bVar1)) && (param_6 != '\0')))) &&
     ((sVar7 = DAT_fffec106 + -4, cVar5 = cVar6, -0x23 < sVar7 &&
      (cVar5 = (char)sVar7, sVar7 < -0x80)))) {
    cVar5 = -0x80;
  }
  if (((param_2 == '\r') || (((param_2 == '\n' && (bVar1)) && (param_5 != '\0')))) &&
     ((sVar7 = DAT_fffec106 + -4, cVar5 = cVar6, -0x23 < sVar7 &&
      (cVar5 = (char)sVar7, sVar7 < -0x80)))) {
    cVar5 = -0x80;
  }
  if (param_2 == '\f') {
    sVar7 = DAT_fffec106 + 1;
    cVar5 = '\0';
    if ((sVar7 < 1) && (cVar5 = (char)sVar7, 0x7f < sVar7)) {
      cVar5 = '\x7f';
    }
  }
  if ((((param_2 == '\b') || (param_2 == '\t')) && (cVar5 = '\0', DAT_fffec106 < '\x01')) &&
     (cVar5 = DAT_fffec106, '\x7f' < DAT_fffec106)) {
    cVar5 = '\x7f';
  }
  if (((param_2 == '\a') && (sVar7 = DAT_fffec106 + -4, cVar5 = cVar6, -0x23 < sVar7)) &&
     (cVar5 = (char)sVar7, sVar7 < -0x80)) {
    cVar5 = -0x80;
  }
  if (((param_2 == '\x06') && (sVar7 = DAT_fffec106 + -4, cVar5 = cVar6, -0x23 < sVar7)) &&
     (cVar5 = (char)sVar7, sVar7 < -0x80)) {
    cVar5 = -0x80;
  }
  if (param_2 == '\x05') {
    iVar3 = (int)(short)(param_1 * 0x80);
    if (iVar3 < 0x3f81) {
      if (iVar3 < -0x3f81) {
        cVar5 = -0x80;
      }
      else {
        cVar5 = (char)((ulonglong)((longlong)iVar3 * 0x2000000) >> 0x20);
      }
    }
    else {
      cVar5 = '\x7f';
    }
  }
  if (param_2 == '\x02') {
    sVar7 = DAT_fffec106 + 1;
    cVar5 = '\0';
    if ((sVar7 < 1) && (cVar5 = (char)sVar7, 0x7f < sVar7)) {
      cVar5 = '\x7f';
    }
  }
  else if (param_2 == '\x03') {
    cVar5 = -0xe;
  }
  else if (param_2 == '\x04') {
    cVar5 = -0xe;
  }
  if (param_2 == '\x01') {
    cVar5 = '\0';
  }
  *param_8 = cVar5;
  DAT_fffec106 = cVar5;
  DAT_fffec104 = param_3 <= uVar4;
  DAT_fffec105 = uVar2 <= param_3;
  return;
}

