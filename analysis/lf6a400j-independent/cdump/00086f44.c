
void FUN_00086f44(ushort param_1,uint param_2,short *param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)((uint)param_1 + (param_2 & 0xffff));
  if (&DAT_00013e7f < puVar1) {
    *param_3 = -1;
    return;
  }
  if (puVar1 < &LAB_00003e80) {
    *param_3 = 0;
    return;
  }
  *param_3 = (short)puVar1 + -16000;
  return;
}

