
void FUN_000b38d8(char param_1,char param_2,char *param_3,char *param_4)

{
  if (param_1 != '\0') {
    if (param_2 == '\x01') {
      if (*param_3 == -1) {
        DAT_fffec6f8 = -1;
      }
      else {
        DAT_fffec6f8 = *param_3 + '\x01';
      }
    }
    else {
      DAT_fffec6f8 = *param_3;
    }
    if (param_2 == '\x02') {
      if (param_3[1] == -1) {
        DAT_fffec6f9 = -1;
      }
      else {
        DAT_fffec6f9 = param_3[1] + '\x01';
      }
    }
    else {
      DAT_fffec6f9 = param_3[1];
    }
    if (param_2 == '\x03') {
      if (param_3[2] == -1) {
        DAT_fffec6fa = -1;
      }
      else {
        DAT_fffec6fa = param_3[2] + '\x01';
      }
    }
    else {
      DAT_fffec6fa = param_3[2];
    }
    if (param_2 == '\x04') {
      if (param_3[3] == -1) {
        DAT_fffec6fb = -1;
      }
      else {
        DAT_fffec6fb = param_3[3] + '\x01';
      }
    }
    else {
      DAT_fffec6fb = param_3[3];
    }
    if (param_2 == '\x05') {
      if (param_3[4] == -1) {
        DAT_fffec6fc = -1;
      }
      else {
        DAT_fffec6fc = param_3[4] + '\x01';
      }
    }
    else {
      DAT_fffec6fc = param_3[4];
    }
    if (param_2 == '\x06') {
      if (param_3[5] == -1) {
        DAT_fffec6fd = -1;
      }
      else {
        DAT_fffec6fd = param_3[5] + '\x01';
      }
    }
    else {
      DAT_fffec6fd = param_3[5];
    }
    if (param_2 == '\a') {
      if (param_3[6] == -1) {
        DAT_fffec6fe = -1;
      }
      else {
        DAT_fffec6fe = param_3[6] + '\x01';
      }
    }
    else {
      DAT_fffec6fe = param_3[6];
    }
    if (param_2 == '\b') {
      if (param_3[7] == -1) {
        DAT_fffec6ff = -1;
      }
      else {
        DAT_fffec6ff = param_3[7] + '\x01';
      }
    }
    else {
      DAT_fffec6ff = param_3[7];
    }
    if (param_2 == '\t') {
      if (param_3[8] == -1) {
        DAT_fffec700 = -1;
      }
      else {
        DAT_fffec700 = param_3[8] + '\x01';
      }
    }
    else {
      DAT_fffec700 = param_3[8];
    }
    if (param_2 == '\n') {
      if (param_3[9] == -1) {
        DAT_fffec701 = -1;
      }
      else {
        DAT_fffec701 = param_3[9] + '\x01';
      }
    }
    else {
      DAT_fffec701 = param_3[9];
    }
    if (param_2 == '\v') {
      if (param_3[10] == -1) {
        DAT_fffec702 = -1;
      }
      else {
        DAT_fffec702 = param_3[10] + '\x01';
      }
    }
    else {
      DAT_fffec702 = param_3[10];
    }
    if (param_2 == '\f') {
      if (param_3[0xb] == -1) {
        DAT_fffec703 = -1;
      }
      else {
        DAT_fffec703 = param_3[0xb] + '\x01';
      }
    }
    else {
      DAT_fffec703 = param_3[0xb];
    }
  }
  if (param_1 == '\0') {
    *param_4 = *param_3;
    param_4[1] = param_3[1];
    param_4[2] = param_3[2];
    param_4[3] = param_3[3];
    param_4[4] = param_3[4];
    param_4[5] = param_3[5];
    param_4[6] = param_3[6];
    param_4[7] = param_3[7];
    param_4[8] = param_3[8];
    param_4[9] = param_3[9];
    param_4[10] = param_3[10];
    param_4[0xb] = param_3[0xb];
  }
  else {
    *param_4 = DAT_fffec6f8;
    param_4[1] = DAT_fffec6f9;
    param_4[2] = DAT_fffec6fa;
    param_4[3] = DAT_fffec6fb;
    param_4[4] = DAT_fffec6fc;
    param_4[5] = DAT_fffec6fd;
    param_4[6] = DAT_fffec6fe;
    param_4[7] = DAT_fffec6ff;
    param_4[8] = DAT_fffec700;
    param_4[9] = DAT_fffec701;
    param_4[10] = DAT_fffec702;
    param_4[0xb] = DAT_fffec703;
  }
  return;
}

