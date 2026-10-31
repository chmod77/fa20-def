
void FUN_0014c8d8(short *param_1,char param_2,short *param_3,undefined1 *param_4)

{
  if (param_2 == '\x01') {
    if (param_1[2] == *param_1) {
      if (param_1[1] == *param_1) {
        param_1[2] = param_1[1];
        param_1[3] = param_1[1];
        param_1[4] = 0;
        *param_3 = *param_1;
        goto LAB_0014c976;
      }
    }
    else if (param_1[1] == *param_1) {
      param_1[2] = param_1[1];
      param_1[3] = param_1[1];
      param_1[4] = 0;
      *param_3 = param_1[3];
      goto LAB_0014c976;
    }
    param_1[2] = param_1[1];
    param_1[3] = param_1[1];
    param_1[4] = *param_1 - param_1[3];
    *param_3 = param_1[3];
LAB_0014c94e:
    *param_4 = 0;
    return;
  }
  if (param_1[2] == 0) {
    if (param_1[1] == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = *param_1;
      *param_3 = *param_1;
      goto LAB_0014c94e;
    }
    param_1[2] = param_1[1];
    param_1[3] = param_1[1];
    param_1[4] = *param_1 - param_1[3];
    *param_3 = 2;
  }
  else {
    if (param_1[1] == 0) {
      *param_3 = param_1[4];
      *param_4 = 0;
      param_1[2] = param_1[1];
      param_1[3] = param_1[1];
      param_1[4] = *param_1 - param_1[3];
      return;
    }
    *param_3 = param_1[4];
  }
LAB_0014c976:
  *param_4 = 1;
  return;
}

