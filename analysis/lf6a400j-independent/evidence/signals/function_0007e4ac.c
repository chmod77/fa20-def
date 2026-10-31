
void FUN_0007e4ac(float param_1,char param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 *param_5)

{
  char *pcVar1;
  float fVar2;
  
  pcVar1 = DAT_0007e548;
  if (DAT_0007e548[1] == '\0') {
    *DAT_0007e548 = '\0';
    pcVar1[1] = '\x01';
  }
  if (*pcVar1 == '\0') {
    *DAT_0007e54c = param_3;
  }
  else {
    (*(code *)PTR_FUN_0007e550)(DAT_0007e54c,param_3,param_4);
  }
  *DAT_0007e548 = '\x01';
  if (param_2 == '\0') {
    param_1 = param_1 * DAT_0007e554;
    fVar2 = DAT_0007e558;
    if ((param_1 <= DAT_0007e558) && (fVar2 = param_1, param_1 < DAT_0007e55c)) {
      fVar2 = DAT_0007e55c;
    }
    if (fVar2 <= DAT_0007e558) {
      if (DAT_0007e55c <= fVar2) {
        *param_5 = (short)(int)(DAT_0007e560 + DAT_0007e564 * fVar2);
      }
      else {
        *param_5 = 0;
      }
    }
    else {
      *param_5 = 0xffff;
    }
  }
  else {
    *param_5 = *DAT_0007e54c;
  }
  return;
}

