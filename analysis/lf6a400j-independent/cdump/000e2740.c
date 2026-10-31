
void FUN_000e2740(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = 1;
  if ((DAT_fffed260 == '\0') && (bVar1 = 0xff, DAT_fffed261 != -1)) {
    bVar1 = DAT_fffed261 + 1;
  }
  *param_2 = bVar1;
  *(bool *)param_1 = 5 < bVar1;
  DAT_fffed261 = bVar1;
  DAT_fffed260 = 5 < bVar1;
  return;
}

