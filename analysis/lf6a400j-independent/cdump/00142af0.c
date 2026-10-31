
void FUN_00142af0(void)

{
  uint uVar1;
  
  for (uVar1 = 0; (uVar1 & 0xff) < 4; uVar1 = uVar1 + 1) {
    uVar1 = uVar1 & 0xff;
    if (*(char *)(uVar1 - 0xd3fd) != '\0') {
      FUN_0014fa7c(uVar1);
    }
  }
  return;
}

