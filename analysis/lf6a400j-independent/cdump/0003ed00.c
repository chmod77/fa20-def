
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003ed00(void)

{
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  
  FUN_0003ee3a();
  if ((DAT_fffee693 & 8) == 0) {
    DAT_fffee6da = '\0';
    _DAT_fffee6dc = 0;
  }
  else {
    if (DAT_fffee6da == '\0') {
      DAT_fffee6da = '\x18';
      _DAT_fffee6dc = (ushort)DAT_ffff2a4f;
    }
    else {
      DAT_fffee6da = DAT_fffee6da + -1;
      if (_DAT_fffee6dc == 0) goto LAB_0003ee16;
      _DAT_fffee6dc = _DAT_fffee6dc - 1;
    }
    if (_DAT_fffee6dc != 0) {
      bVar1 = true;
      goto LAB_0003ee18;
    }
  }
LAB_0003ee16:
  bVar1 = false;
LAB_0003ee18:
  uVar2 = FUN_00001550(0x70);
  bVar3 = DAT_ffff655e | 4;
  if (!bVar1) {
    bVar3 = DAT_ffff655e & 0xfb;
  }
  DAT_ffff655e = bVar3;
  FUN_00001550(uVar2);
  return;
}

