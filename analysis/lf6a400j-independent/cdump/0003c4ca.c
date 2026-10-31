
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003c4ca(void)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  _DAT_fffee7bc = 0;
  uVar3 = (uint)_DAT_fffeec56 * 2;
  bVar1 = false;
  if ((_DAT_fffeec56 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
  }
  uVar3 = uVar3 ^ (int)(short)_DAT_fffeec56;
  _DAT_fffeec58 = (short)uVar3;
  uVar4 = (uint)_DAT_fffeec56;
  for (bVar2 = 0; bVar2 < 0x20; bVar2 = bVar2 + 1) {
    _DAT_fffee7bc = _DAT_fffee7bc * 2;
    if (bVar1) {
      if ((uVar3 & 0x8000) != 0) {
        _DAT_fffee7bc = _DAT_fffee7bc + 1;
      }
      uVar3 = (uVar3 & 0xffff) << 1;
      bVar1 = false;
    }
    else {
      if ((uVar4 & (uint)&DAT_00008000) != 0) {
        _DAT_fffee7bc = _DAT_fffee7bc + 1;
      }
      uVar4 = uVar4 << 1;
      bVar1 = true;
    }
  }
  DAT_fffee7a1 = DAT_fffee7a1 | 0x80;
  return;
}

