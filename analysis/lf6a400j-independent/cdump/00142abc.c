
void FUN_00142abc(void)

{
  uint uVar1;
  
  thunk_FUN_00143640();
  for (uVar1 = 0; (uVar1 & 0xff) < 4; uVar1 = uVar1 + 1) {
    uVar1 = uVar1 & 0xff;
    if (*(char *)(uVar1 - 0xd3fd) != '\0') {
      FUN_0014fa78(uVar1);
    }
  }
  return;
}

