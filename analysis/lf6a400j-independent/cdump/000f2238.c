
void FUN_000f2238(char param_1,char param_2,uint param_3,ushort param_4,ushort param_5,short param_6
                 ,ushort param_7,char param_8,undefined1 *param_9)

{
  bool bVar1;
  
  if ((int)param_3 < 0) {
    bVar1 = 0 < (int)param_3;
    param_3 = -param_3;
    if ((0 < (int)-(uint)bVar1) || ((-(uint)bVar1 == 0 && (0x7fffffff < param_3)))) {
      param_3 = 0x7fffffff;
    }
  }
  if (param_8 == '\0') {
    if ((param_1 == '\0') || (param_2 == '\0')) {
      *param_9 = 1;
      return;
    }
    if ((((param_1 != '\0') && (param_2 != '\0')) && (-1 < (int)param_3)) &&
       ((param_4 < param_5 && (-1 < param_6)))) {
      *param_9 = 2;
      return;
    }
    if (((param_1 != '\0') && (param_2 != '\0')) &&
       ((-1 < (int)param_3 && ((-1 >= param_6 && (param_7 < param_5)))))) {
      *param_9 = 3;
      return;
    }
  }
  *param_9 = 0;
  return;
}

