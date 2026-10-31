
void FUN_000e3d4c(ushort param_1,byte param_2,undefined1 *param_3)

{
  ushort uVar1;
  undefined1 uVar2;
  byte bVar3;
  
  if (DAT_fffed2ac == '\0') {
    bVar3 = 0x4e;
  }
  else {
    bVar3 = 0x4a;
  }
  if (DAT_fffed2ad == '\0') {
    uVar1 = 0x42cc;
  }
  else {
    uVar1 = 0x3cf0;
  }
  uVar2 = 1;
  if ((uVar1 > param_1) && (bVar3 > param_2)) {
    uVar2 = 0;
  }
  *param_3 = uVar2;
  DAT_fffed2ac = bVar3 <= param_2;
  DAT_fffed2ad = uVar1 <= param_1;
  return;
}

