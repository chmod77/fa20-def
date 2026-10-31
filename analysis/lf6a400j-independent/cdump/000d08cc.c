
void FUN_000d08cc(short param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = (char)((param_1 * 0x2d & 0x3fffffffU) >> 0xe);
  if (cVar1 < -0x32) {
    *param_2 = '\0';
  }
  else {
    *param_2 = cVar1 + '2';
  }
  return;
}

