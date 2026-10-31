
void FUN_00082c34(ushort param_1,char param_2,ushort param_3,ushort *param_4)

{
  if ((param_2 == '\x18') && (param_1 <= param_3)) {
    *param_4 = param_3;
    return;
  }
  *param_4 = param_1;
  return;
}

