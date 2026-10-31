
void FUN_000b3b00(short param_1,char param_2,short param_3,char param_4,char param_5,char param_6,
                 char *param_7,char *param_8)

{
  int iVar1;
  short sVar2;
  short sVar4;
  int iVar3;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  char cStack_3c;
  char cStack_3b;
  char cStack_3a;
  char cStack_39;
  char cStack_38;
  
  if (param_2 != '\0') {
    if (param_3 < -0x105) {
      cStack_40 = *param_7 - param_6;
      cStack_3f = param_7[1] - param_6;
      cStack_3e = param_7[2] - param_6;
      cStack_3d = param_7[3] - param_6;
      cStack_3c = param_7[4] - param_6;
      cStack_3b = param_7[5] - param_6;
      cStack_3a = param_7[6] - param_6;
      cStack_39 = param_7[7] - param_6;
      cStack_38 = param_7[8] - param_6;
    }
    else {
      cStack_40 = *param_7;
      cStack_3f = param_7[1];
      cStack_3e = param_7[2];
      cStack_3d = param_7[3];
      cStack_3c = param_7[4];
      cStack_3b = param_7[5];
      cStack_3a = param_7[6];
      cStack_39 = param_7[7];
      cStack_38 = param_7[8];
    }
    if (0x105 < param_3) {
      cStack_40 = *param_7 + param_6;
      cStack_3f = param_7[1] + param_6;
      cStack_3e = param_7[2] + param_6;
      cStack_3d = param_7[3] + param_6;
      cStack_3c = param_7[4] + param_6;
      cStack_3b = param_7[5] + param_6;
      cStack_3a = param_7[6] + param_6;
      cStack_39 = param_7[7] + param_6;
      cStack_38 = param_7[8] + param_6;
    }
    if (param_4 != '\x01') {
      cStack_40 = *param_7;
    }
    if (param_4 != '\x02') {
      cStack_3f = param_7[1];
    }
    if (param_4 != '\x03') {
      cStack_3e = param_7[2];
    }
    if (param_4 != '\x04') {
      cStack_3d = param_7[3];
    }
    if (param_4 != '\x05') {
      cStack_3c = param_7[4];
    }
    if (param_4 != '\x06') {
      cStack_3b = param_7[5];
    }
    if (param_4 != '\a') {
      cStack_3a = param_7[6];
    }
    if (param_4 != '\b') {
      cStack_39 = param_7[7];
    }
    if (param_4 != '\t') {
      cStack_38 = param_7[8];
    }
    if (param_4 == '\n') {
      if (param_3 < 0x106) {
        if (param_3 < -0x105) {
          param_6 = param_7[9] - param_6;
        }
        else {
          param_6 = param_7[9];
        }
      }
      else {
        param_6 = param_7[9] + param_6;
      }
    }
    else {
      param_6 = param_7[9];
    }
    if (param_5 == '\0') {
      iVar1 = (int)param_6;
    }
    else {
      sVar4 = (short)((ulonglong)((longlong)(int)param_1 * 0x2000000) >> 0x20);
      sVar2 = 0x7f;
      if ((sVar4 < 0x80) && (sVar2 = -0x80, -0x81 < sVar4)) {
        sVar2 = sVar4;
      }
      cStack_40 = (char)sVar2;
      sVar2 = 0x7f;
      if ((sVar4 < 0x80) && (sVar2 = -0x80, -0x81 < sVar4)) {
        sVar2 = sVar4;
      }
      cStack_3f = (char)sVar2;
      if (sVar4 < 0x80) {
        sVar2 = sVar4;
        if (sVar4 < -0x80) {
          sVar2 = -0x80;
        }
      }
      else {
        sVar2 = 0x7f;
      }
      cStack_3e = (char)sVar2;
      sVar2 = 0x7f;
      if ((sVar4 < 0x80) && (sVar2 = -0x80, -0x81 < sVar4)) {
        sVar2 = sVar4;
      }
      cStack_3d = (char)sVar2;
      if (sVar4 < 0x80) {
        sVar2 = sVar4;
        if (sVar4 < -0x80) {
          sVar2 = -0x80;
        }
      }
      else {
        sVar2 = 0x7f;
      }
      cStack_3c = (char)sVar2;
      if (sVar4 < 0x80) {
        sVar2 = sVar4;
        if (sVar4 < -0x80) {
          sVar2 = -0x80;
        }
      }
      else {
        sVar2 = 0x7f;
      }
      cStack_3b = (char)sVar2;
      sVar2 = 0x7f;
      if ((sVar4 < 0x80) && (sVar2 = -0x80, -0x81 < sVar4)) {
        sVar2 = sVar4;
      }
      cStack_3a = (char)sVar2;
      sVar2 = 0x7f;
      if ((sVar4 < 0x80) && (sVar2 = -0x80, -0x81 < sVar4)) {
        sVar2 = sVar4;
      }
      cStack_39 = (char)sVar2;
      if (sVar4 < 0x80) {
        sVar2 = sVar4;
        if (sVar4 < -0x80) {
          sVar2 = -0x80;
        }
      }
      else {
        sVar2 = 0x7f;
      }
      cStack_38 = (char)sVar2;
      iVar3 = (int)sVar4;
      iVar1 = 0x7f;
      if ((iVar3 < 0x80) && (iVar1 = -0x80, -0x81 < iVar3)) {
        iVar1 = iVar3;
      }
    }
    DAT_fffec70d = (char)iVar1;
    if (cStack_40 < -0x65) {
      cStack_40 = -0x66;
    }
    if (cStack_3f < -0x65) {
      cStack_3f = -0x66;
    }
    if (cStack_3e < -0x65) {
      cStack_3e = -0x66;
    }
    if (cStack_3d < -0x65) {
      cStack_3d = -0x66;
    }
    if (cStack_3c < -0x65) {
      cStack_3c = -0x66;
    }
    if (cStack_3b < -0x65) {
      cStack_3b = -0x66;
    }
    if (cStack_3a < -0x65) {
      cStack_3a = -0x66;
    }
    if (cStack_39 < -0x65) {
      cStack_39 = -0x66;
    }
    if (cStack_38 < -0x65) {
      cStack_38 = -0x66;
    }
    if (DAT_fffec70d < -0x65) {
      DAT_fffec70d = -0x66;
    }
    DAT_fffec704 = cStack_40;
    if ('e' < cStack_40) {
      DAT_fffec704 = 'f';
    }
    DAT_fffec705 = cStack_3f;
    if ('e' < cStack_3f) {
      DAT_fffec705 = 'f';
    }
    DAT_fffec706 = cStack_3e;
    if ('e' < cStack_3e) {
      DAT_fffec706 = 'f';
    }
    DAT_fffec707 = cStack_3d;
    if ('e' < cStack_3d) {
      DAT_fffec707 = 'f';
    }
    DAT_fffec708 = cStack_3c;
    if ('e' < cStack_3c) {
      DAT_fffec708 = 'f';
    }
    DAT_fffec709 = cStack_3b;
    if ('e' < cStack_3b) {
      DAT_fffec709 = 'f';
    }
    DAT_fffec70a = cStack_3a;
    if ('e' < cStack_3a) {
      DAT_fffec70a = 'f';
    }
    DAT_fffec70b = cStack_39;
    if ('e' < cStack_39) {
      DAT_fffec70b = 'f';
    }
    DAT_fffec70c = cStack_38;
    if ('e' < cStack_38) {
      DAT_fffec70c = 'f';
    }
    if ('e' < DAT_fffec70d) {
      DAT_fffec70d = 'f';
    }
  }
  if (param_2 == '\0') {
    *param_8 = *param_7;
    param_8[1] = param_7[1];
    param_8[2] = param_7[2];
    param_8[3] = param_7[3];
    param_8[4] = param_7[4];
    param_8[5] = param_7[5];
    param_8[6] = param_7[6];
    param_8[7] = param_7[7];
    param_8[8] = param_7[8];
    param_8[9] = param_7[9];
  }
  else {
    *param_8 = DAT_fffec704;
    param_8[1] = DAT_fffec705;
    param_8[2] = DAT_fffec706;
    param_8[3] = DAT_fffec707;
    param_8[4] = DAT_fffec708;
    param_8[5] = DAT_fffec709;
    param_8[6] = DAT_fffec70a;
    param_8[7] = DAT_fffec70b;
    param_8[8] = DAT_fffec70c;
    param_8[9] = DAT_fffec70d;
  }
  return;
}

