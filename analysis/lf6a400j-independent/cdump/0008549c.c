
/* WARNING: Removing unreachable block (ram,0x000854ba) */

void FUN_0008549c(ushort param_1,ushort param_2,ushort *param_3,undefined2 *param_4,
                 undefined2 *param_5)

{
  char cVar1;
  
  *param_5 = 0x8000;
  *param_4 = 0xfff0;
  cVar1 = 0xfff0 < param_2;
  if (0xfff0 >= param_2) {
    cVar1 = DAT_fffebb70;
  }
  if (param_1 < 0xfff0) {
    cVar1 = '\0';
  }
  if ((cVar1 == '\0') || (param_1 < 0xfff0)) {
    *param_3 = param_1;
  }
  else {
    *param_3 = 0xfff0;
  }
  DAT_fffebb70 = cVar1;
  return;
}

