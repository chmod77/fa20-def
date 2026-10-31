
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b10fc(char param_1,ushort param_2,ushort param_3,ushort param_4,undefined1 *param_5)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  if (DAT_fffec65b == '\0') {
    uVar2 = 0x163;
  }
  else {
    uVar2 = 0x11c;
  }
  if (DAT_fffec65a == '\0') {
    uVar3 = 0x1600;
  }
  else {
    uVar3 = 0x1000;
  }
  if (DAT_fffec65c == '\0') {
    uVar4 = 0xd000;
  }
  else {
    uVar4 = 0xce66;
  }
  bVar1 = false;
  if ((((param_1 != '\0') && (uVar2 <= param_2)) && (uVar3 <= param_3)) && (uVar4 <= param_4)) {
    bVar1 = true;
  }
  if (bVar1) {
    *param_5 = _DAT_fffec658 != 0;
    _DAT_fffec658 = _DAT_fffec658 + 1;
    if (_DAT_fffec658 == 0) {
      _DAT_fffec658 = -1;
    }
  }
  else {
    *param_5 = 0;
    _DAT_fffec658 = 0;
  }
  DAT_fffec65b = uVar2 <= param_2;
  DAT_fffec65a = uVar3 <= param_3;
  DAT_fffec65c = uVar4 <= param_4;
  return;
}

