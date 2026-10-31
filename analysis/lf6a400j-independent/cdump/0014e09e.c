
void FUN_0014e09e(undefined4 *param_1,undefined1 param_2)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = false;
  if ('\0' < *(char *)param_1[1]) {
    if ((*(byte *)param_1[0x1d] & 4) == 0) {
      if (*(char *)param_1[1] != '\x02') goto LAB_0014e0cc;
      param_2 = *(undefined1 *)param_1[0xe];
    }
    else {
      param_2 = *(undefined1 *)param_1[0xd];
    }
    bVar1 = true;
  }
LAB_0014e0cc:
  if (!bVar1) {
    if ((*(byte *)*param_1 & 0x40) == 0) {
      param_2 = *(undefined1 *)param_1[0xb];
    }
    else if (*(short *)param_1[0x1b] < 0) {
      param_2 = *(undefined1 *)param_1[10];
    }
    else {
      param_2 = *(undefined1 *)param_1[0xb];
    }
    if ((*(byte *)param_1[0x1d] & 0x10) == 0) {
      if ((*(byte *)param_1[0x1d] & 8) != 0) {
        param_2 = *(undefined1 *)param_1[0xb];
      }
    }
    else {
      param_2 = *(undefined1 *)param_1[10];
    }
    if ((*(byte *)param_1[0x1d] & 4) != 0) {
      param_2 = *(undefined1 *)param_1[0xd];
    }
    if ((((*(byte *)*param_1 & 0x20) != 0) && (*(short *)param_1[0x1b] < 0)) &&
       (*(ushort *)param_1[5] < 0x11)) {
      if ((*(byte *)param_1[0x1d] & 4) == 0) {
        param_2 = *(undefined1 *)param_1[0xc];
      }
      else {
        param_2 = FUN_0016bd40((int)*(char *)param_1[0xc],(int)*(char *)param_1[0xd]);
      }
    }
  }
  *(undefined1 *)param_1[0x17] = param_2;
  if ((*(byte *)param_1[0x1d] & 0x20) == 0) {
    *(undefined1 *)param_1[0x16] = 0;
  }
  else if ((*(byte *)param_1[0x1d] & 0x10) == 0) {
    if ((*(byte *)param_1[0x1d] & 8) == 0) {
      if ((*(char *)param_1[0x16] != '\0') &&
         (*(char *)param_1[0x16] = *(char *)param_1[0x16] + -1, *(char *)param_1[0x16] == '\0')) {
        *(byte *)param_1[0x1d] = *(byte *)param_1[0x1d] & 0xdf;
      }
    }
    else {
      *(undefined1 *)param_1[0x16] = *(undefined1 *)param_1[0xf];
    }
  }
  else {
    *(undefined1 *)param_1[0x16] = *(undefined1 *)param_1[0x10];
  }
  uVar2 = FUN_0016bd34(((uint)*(byte *)param_1[0x17] - (uint)*(byte *)param_1[0x18]) +
                       (uint)*(byte *)param_1[0x15] + -1);
  *(undefined1 *)param_1[0x15] = uVar2;
  if ((*(char *)param_1[0x15] == '\0') &&
     (((*(char *)param_1[0x16] == '\0' || ((*(byte *)param_1[0x1d] & 0x10) != 0)) ||
      ((*(byte *)param_1[0x1d] & 8) != 0)))) {
    *(byte *)param_1[0x1d] = *(byte *)param_1[0x1d] | 0x80;
    *(undefined1 *)param_1[0x15] = *(undefined1 *)param_1[0x17];
  }
  else {
    *(byte *)param_1[0x1d] = *(byte *)param_1[0x1d] & 0x7f;
  }
  if (((int)*(char *)param_1[0x1d] & 0x80U) == 0) {
    uVar2 = FUN_0000152c(*(byte *)param_1[0x14] + 1);
    *(undefined1 *)param_1[0x14] = uVar2;
  }
  else {
    *(undefined1 *)param_1[0x14] = 0;
  }
  *(undefined1 *)param_1[0x18] = *(undefined1 *)param_1[0x17];
  return;
}

