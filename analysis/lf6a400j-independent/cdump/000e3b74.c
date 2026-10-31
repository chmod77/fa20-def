
/* WARNING: Removing unreachable block (ram,0x000e3b9e) */
/* WARNING: Removing unreachable block (ram,0x000e3bc8) */

void FUN_000e3b74(char param_1,ushort param_2,byte param_3,undefined1 *param_4)

{
  ushort uVar1;
  undefined1 uVar2;
  byte bVar3;
  
  if (DAT_fffed2a1 == '\0') {
    bVar3 = 0x14;
  }
  else {
    bVar3 = 0x18;
  }
  if (DAT_fffed2a0 == '\0') {
    uVar1 = 0x690;
  }
  else {
    uVar1 = 0xc6c;
  }
  uVar2 = 0;
  if (((param_1 != '\0') && (param_2 <= uVar1)) && (param_3 <= bVar3)) {
    uVar2 = 1;
  }
  *param_4 = uVar2;
  DAT_fffed2a1 = param_3 <= bVar3;
  DAT_fffed2a0 = param_2 <= uVar1;
  return;
}

