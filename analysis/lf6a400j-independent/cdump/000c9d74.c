
void FUN_000c9d74(char param_1,uint param_2,uint param_3,uint param_4,short *param_5)

{
  if (param_1 == '\0') {
    *param_5 = ((ushort)((param_4 & 0xffff) * (param_2 & 0xffff) >> 0x11) -
               (short)((param_4 & 0xffff) * 8000 >> 0x10)) + 10000;
  }
  else if ((int)-(param_3 & 0xffff) < -20000) {
    *param_5 = 0;
  }
  else {
    *param_5 = (short)-(param_3 & 0xffff) + 20000;
  }
  return;
}

