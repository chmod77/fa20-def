
void FUN_000ae80c(ushort *param_1,char param_2,ushort *param_3,short *param_4)

{
  undefined *puVar1;
  undefined2 *puVar2;
  
  if (param_2 != '\x03') {
    *param_4 = -0x8000;
    param_4[1] = -0x8000;
    param_4[2] = -0x8000;
    param_4[3] = -0x8000;
    return;
  }
  puVar1 = (undefined *)((uint)*param_1 + (uint)*param_3);
  if (puVar1 < &DAT_00018000) {
    if (&DAT_00007fff < puVar1) {
      *param_4 = (short)puVar1 + -0x8000;
    }
    else {
      *param_4 = 0;
    }
  }
  else {
    *param_4 = -1;
  }
  puVar1 = (undefined *)((uint)param_1[1] + (uint)param_3[1]);
  if (puVar1 < &DAT_00018000) {
    if (&DAT_00007fff < puVar1) {
      param_4[1] = (short)puVar1 + -0x8000;
    }
    else {
      param_4[1] = 0;
    }
  }
  else {
    param_4[1] = -1;
  }
  puVar1 = (undefined *)((uint)param_1[2] + (uint)param_3[2]);
  if (puVar1 < &DAT_00018000) {
    if (&DAT_00007fff < puVar1) {
      param_4[2] = (short)puVar1 + -0x8000;
    }
    else {
      param_4[2] = 0;
    }
  }
  else {
    param_4[2] = -1;
  }
  puVar2 = (undefined2 *)((uint)param_1[3] + (uint)param_3[3]);
  if (puVar2 < &DAT_00018000) {
    if (puVar2 < &DAT_00008000) {
      param_4[3] = 0;
      return;
    }
    param_4[3] = (short)puVar2 + -0x8000;
    return;
  }
  param_4[3] = -1;
  return;
}

