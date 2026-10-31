
void FUN_000ba504(char param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((param_1 == DAT_fffec870) && (bVar1 = 0xff, DAT_fffec871 != -1)) {
    bVar1 = DAT_fffec871 + 1;
  }
  *(bool *)param_2 = bVar1 < 10;
  DAT_fffec870 = param_1;
  DAT_fffec871 = bVar1;
  return;
}

