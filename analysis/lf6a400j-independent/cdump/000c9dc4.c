
void FUN_000c9dc4(uint param_1,uint param_2,char *param_3)

{
  uint uVar1;
  
  uVar1 = (int)((ulonglong)((longlong)(int)(param_1 & 0xffff) * 0x2000000) >> 0x20) +
          (int)((ulonglong)((longlong)(int)(param_2 & 0xffff) * 0x2000000) >> 0x20);
  if (uVar1 < 0x1fa) {
    if (uVar1 < 0xfa) {
      *param_3 = '\0';
    }
    else {
      *param_3 = (char)uVar1 + '\x06';
    }
  }
  else {
    *param_3 = -1;
  }
  return;
}

