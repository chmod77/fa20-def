
void FUN_0006c28a(void)

{
  byte *pbVar1;
  
  for (pbVar1 = &DAT_fffef828; &DAT_fffef748 < pbVar1; pbVar1 = pbVar1 + -1) {
    *pbVar1 = *pbVar1 & 0x3f;
  }
  DAT_fffee706 = 0;
  return;
}

