
/* WARNING: Removing unreachable block (ram,0x000a4d0c) */

void FUN_000a4ce4(ushort param_1,ushort param_2,undefined1 *param_3)

{
  ushort uVar1;
  undefined1 uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  
  if (DAT_fffec32d == '\0') {
    uVar5 = 0x7e00;
  }
  else {
    uVar5 = 0x8000;
  }
  if (DAT_fffec32e == '\0') {
    uVar4 = 0xff00;
  }
  else {
    uVar4 = 0xffff;
  }
  if (DAT_fffec32f == '\0') {
    uVar3 = 0x1a00;
  }
  else {
    uVar3 = 0x1800;
  }
  if (DAT_fffec32c == '\0') {
    uVar1 = 0x3c00;
  }
  else {
    uVar1 = 0x3822;
  }
  uVar2 = 0;
  if ((((uVar3 <= param_1) && (param_1 <= uVar5)) && (uVar1 <= param_2)) && (param_2 <= uVar4)) {
    uVar2 = 1;
  }
  *param_3 = uVar2;
  DAT_fffec32d = param_1 <= uVar5;
  DAT_fffec32e = param_2 <= uVar4;
  DAT_fffec32f = uVar3 <= param_1;
  DAT_fffec32c = uVar1 <= param_2;
  return;
}

