
void FUN_0010be88(short param_1,char param_2,char *param_3)

{
  if (param_2 == '\0') {
    *param_3 = -0x80;
    return;
  }
  *param_3 = (char)((ushort)(param_1 + -0x8000) >> 8) + -0x80;
  return;
}

