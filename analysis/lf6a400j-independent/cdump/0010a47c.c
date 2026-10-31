
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010a47c(ushort param_1,ushort *param_2)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  byte bVar4;
  
  bVar4 = 1;
  if ((DAT_fffedc68 == '\0') && (bVar4 = 0xff, DAT_fffedc6a != -1)) {
    bVar4 = DAT_fffedc6a + 1;
  }
  DAT_fffedc68 = 0x18 < bVar4;
  cVar1 = '\x01';
  if (!(bool)DAT_fffedc68) {
    param_1 = _DAT_fffedc64;
    cVar1 = DAT_fffedc69;
  }
  uVar3 = param_1;
  if (_DAT_fffedc66 <= param_1) {
    sVar2 = 0;
    if ((bool)DAT_fffedc68) {
      sVar2 = 0x84;
    }
    uVar3 = _DAT_fffedc66 + sVar2;
    if (uVar3 < _DAT_fffedc66) {
      uVar3 = 0xffff;
    }
  }
  if (DAT_fffedc6b != '\0') {
    uVar3 = 0xffff;
  }
  DAT_fffedc69 = cVar1;
  *param_2 = uVar3;
  DAT_fffedc6a = bVar4;
  _DAT_fffedc64 = param_1;
  DAT_fffedc6b = cVar1 == '\0';
  _DAT_fffedc66 = uVar3;
  return;
}

