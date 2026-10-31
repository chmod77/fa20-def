
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010a3fc(ushort param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = 1;
  if ((DAT_fffedc60 == '\0') && (bVar3 = 0xff, DAT_fffedc61 != -1)) {
    bVar3 = DAT_fffedc61 + 1;
  }
  uVar1 = 0;
  if (0x18 < bVar3) {
    uVar1 = 0x84;
    _DAT_fffedc5e = param_1;
  }
  uVar2 = _DAT_fffedc5e;
  if ((_DAT_fffedc5e <= _DAT_fffedc5c) && (uVar2 = 0, uVar1 <= _DAT_fffedc5c)) {
    uVar2 = _DAT_fffedc5c - uVar1;
  }
  *param_2 = uVar2;
  DAT_fffedc61 = bVar3;
  DAT_fffedc60 = 0x18 < bVar3;
  _DAT_fffedc5c = uVar2;
  return;
}

