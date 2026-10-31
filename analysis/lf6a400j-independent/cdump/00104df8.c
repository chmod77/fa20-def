
void FUN_00104df8(byte param_1,char param_2,char param_3,byte param_4,byte param_5,ushort param_6,
                 short param_7,char param_8,byte param_9,char param_10,char param_11,ushort param_12
                 ,ushort param_13,ushort param_14,char param_15,ushort param_16,ushort param_17,
                 ushort param_18,char param_19,char param_20,char param_21,char *param_22,
                 char *param_23,char *param_24,char *param_25,char *param_26)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  
  bVar1 = DAT_fffeda3c <= param_1;
  bVar2 = true;
  if (((param_4 <= DAT_fffeda3d) && (param_5 <= DAT_fffeda3e)) && (bVar1)) {
    bVar2 = false;
  }
  cVar10 = '\0';
  if (param_3 == '\0') {
    cVar10 = DAT_fffeda42;
  }
  if (bVar2) {
    if ((param_6 < 32000) && ((param_7 < 0x400 || (param_8 == '\0')))) {
      bVar3 = false;
      if ((param_9 < 7) && (1 < param_9)) {
        bVar3 = true;
      }
      if (((bVar3) || (((param_9 == 1 && (param_10 != '\0')) && (param_11 != '\0')))) &&
         (param_21 != '\x04')) goto LAB_00104f3e;
    }
    cVar10 = '\x01';
  }
LAB_00104f3e:
  cVar8 = '\0';
  if (cVar10 != '\0') {
    cVar8 = '\x10';
  }
  *param_24 = cVar10;
  cVar9 = '\0';
  if (param_3 == '\0') {
    cVar9 = DAT_fffeda41;
  }
  if (bVar2) {
    bVar3 = false;
    if ((param_12 < param_13) && (param_14 <= param_12)) {
      bVar3 = true;
    }
    if (bVar3) goto LAB_00104f80;
  }
  else {
LAB_00104f80:
    if (((bVar1) || (param_15 == '\0')) || (param_16 <= param_17)) {
      if (param_4 > DAT_fffeda3d) {
        bVar3 = false;
        if ((param_17 < param_18) && (param_16 <= param_17)) {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_0010500c;
      }
      if (param_5 <= DAT_fffeda3e) goto LAB_00105012;
      bVar3 = false;
      if (((param_12 <= param_18) && (param_16 <= param_12)) && (0xeff < param_17)) {
        bVar3 = true;
      }
      if ((bVar3) &&
         ((((param_10 == '\0' || (param_11 == '\0')) || (param_19 == '\0')) || (param_12 != 0))))
      goto LAB_00105012;
    }
  }
LAB_0010500c:
  cVar9 = '\x01';
LAB_00105012:
  cVar11 = '\0';
  if (cVar9 != '\0') {
    cVar11 = '\b';
  }
  *param_25 = cVar9;
  cVar6 = '\0';
  if (param_3 == '\0') {
    cVar6 = DAT_fffeda3f;
  }
  if ((bVar2) && (param_20 != '\0')) {
    cVar6 = '\x01';
  }
  cVar5 = '\0';
  if (cVar6 != '\0') {
    cVar5 = '\x02';
  }
  *param_26 = cVar6;
  cVar7 = '\0';
  if (param_3 == '\0') {
    cVar7 = DAT_fffeda40;
  }
  if ((!bVar1) && (param_2 == '\0')) {
    cVar7 = '\x01';
  }
  cVar4 = '\0';
  if (cVar7 != '\0') {
    cVar4 = '@';
  }
  *param_22 = cVar4 + cVar8 + cVar11 + cVar5;
  *param_23 = cVar7;
  DAT_fffeda3e = param_5;
  DAT_fffeda3d = param_4;
  DAT_fffeda3c = param_1;
  DAT_fffeda42 = cVar10;
  DAT_fffeda41 = cVar9;
  DAT_fffeda3f = cVar6;
  DAT_fffeda40 = cVar7;
  return;
}

