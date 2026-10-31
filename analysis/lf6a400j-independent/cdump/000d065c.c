
void FUN_000d065c(uint param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0xff;
  if ((undefined *)(param_1 & 0xffff) < &UNK_00007f81) {
    uVar1 = (undefined1)((ulonglong)((longlong)(int)(param_1 & 0xffff) * 0x2000000) >> 0x20);
  }
  *param_2 = uVar1;
  return;
}

