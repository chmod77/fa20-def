
/* WARNING: Removing unreachable block (ram,0x000bfa86) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bfa18(char param_1,byte param_2,byte param_3,ushort param_4,undefined2 *param_5)

{
  bool bVar1;
  byte bVar3;
  ushort uVar2;
  byte bVar4;
  ushort uVar5;
  
  bVar1 = param_1 != '\x03';
  if (bVar1) {
    DAT_fffec947 = '\0';
    uVar5 = _DAT_fffec942;
  }
  else {
    if (DAT_fffec947 == '\0') {
      _DAT_fffec942 = 0;
      DAT_fffec947 = '\x01';
    }
    _DAT_fffec940 = _DAT_fffec942;
    uVar5 = 0xffff;
    if (_DAT_fffec942 != 0xffff) {
      uVar5 = _DAT_fffec942 + 1;
    }
  }
  _DAT_fffec942 = uVar5;
  uVar5 = 0;
  if (!bVar1) {
    uVar5 = _DAT_fffec940;
  }
  if (DAT_fffec946 == '\0') {
    bVar3 = 0xa0;
  }
  else {
    bVar3 = 0xa8;
  }
  if (DAT_fffec944 == '\0') {
    uVar2 = 32000;
  }
  else {
    uVar2 = 0x8340;
  }
  if (DAT_fffec945 == '\0') {
    bVar4 = 0x10;
  }
  else {
    bVar4 = 8;
  }
  if ((((bVar1) || (400 < uVar5)) || (uVar5 < 300)) ||
     (((param_2 < 0xfe || (bVar4 > param_3)) || ((param_3 > bVar3 || (param_4 > uVar2)))))) {
    *param_5 = 0x100;
  }
  else {
    *param_5 = 0x100;
  }
  DAT_fffec946 = param_3 <= bVar3;
  DAT_fffec944 = param_4 <= uVar2;
  DAT_fffec945 = bVar4 <= param_3;
  return;
}

