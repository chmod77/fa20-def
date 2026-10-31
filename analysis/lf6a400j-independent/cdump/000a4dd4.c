
void FUN_000a4dd4(undefined4 param_1,byte param_2,undefined1 *param_3,undefined4 param_4)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = false;
  if ((DAT_fffec330 == '\0') && (param_2 < 0xb)) {
    bVar1 = true;
  }
  uVar2 = 0;
  if (((DAT_fffec330 == '\0') && (param_2 >= 0xb)) && (!bVar1)) {
    uVar2 = 1;
  }
  *param_3 = uVar2;
  *(bool *)param_4 = bVar1;
  DAT_fffec330 = uVar2;
  return;
}

