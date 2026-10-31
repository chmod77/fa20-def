
void FUN_00124268(ushort param_1,ushort param_2,char param_3,ushort *param_4)

{
  if ((param_3 == '\x18') && (param_2 < param_1)) {
    *param_4 = param_1;
    return;
  }
  *param_4 = param_2;
  return;
}

