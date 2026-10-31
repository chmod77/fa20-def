
void FUN_000ad510(char param_1,byte param_2,ushort param_3,undefined4 param_4,undefined1 *param_5)

{
  bool bVar1;
  undefined1 uVar2;
  ushort uVar3;
  
  if (DAT_fffec544 == '\0') {
    uVar3 = 0x1e00;
  }
  else {
    uVar3 = 0x1f00;
  }
  bVar1 = param_3 <= uVar3;
  if (param_2 < 0xfb) {
    bVar1 = param_3 == 0;
  }
  if ((param_1 == '\0') || (uVar2 = 1, !bVar1)) {
    uVar2 = DAT_fffec545;
  }
  if (param_1 == '\0') {
    uVar2 = 0;
  }
  *param_5 = uVar2;
  DAT_fffec545 = uVar2;
  DAT_fffec544 = param_3 <= uVar3;
  return;
}

