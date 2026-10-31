
void FUN_000d8038(ushort param_1,undefined1 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  if (DAT_fffecf41 == '\0') {
    uVar1 = 7000;
  }
  else {
    uVar1 = 0x1af4;
  }
  if (DAT_fffecf40 == '\0') {
    uVar2 = 0x5dc;
  }
  else {
    uVar2 = 0x578;
  }
  if (uVar1 <= param_1) {
    *param_2 = 3;
  }
  else if (uVar2 <= param_1) {
    *param_2 = 2;
  }
  else {
    *param_2 = 1;
  }
  DAT_fffecf41 = uVar1 <= param_1;
  DAT_fffecf40 = uVar2 <= param_1;
  return;
}

