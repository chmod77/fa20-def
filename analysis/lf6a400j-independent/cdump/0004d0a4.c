
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004d0a4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  _DAT_fffeef16 = _DAT_fffeef14;
  if ((DAT_fffef32a & 4) == 0) {
    if ((_DAT_fffeef10 < 200) && (_DAT_fffeeede < 0x8000)) {
      iVar1 = FUN_0016caec((uint)_DAT_fffeeede - (uint)_DAT_fffeeee2);
      if (iVar1 < 0x801) {
        _DAT_fffeef14 = FUN_0016bd78((int)(short)_DAT_fffeeee2,(int)(short)_DAT_fffeeede);
        goto LAB_0004d220;
      }
    }
    uVar2 = FUN_00001540(_DAT_ffff2f9a + 0x333);
    uVar2 = FUN_0016bd78(uVar2,(int)(short)_DAT_fffeeee2);
    uVar2 = FUN_0016bd78(uVar2,(int)(short)_DAT_fffeeede);
    _DAT_fffeef14 = FUN_0016bd78(uVar2,(int)_DAT_fffeef14);
  }
  else {
    _DAT_fffeef14 = 0x9000;
  }
LAB_0004d220:
  uVar2 = FUN_00001550(0x70);
  DAT_fffeeec4 = DAT_fffeeec4 | 1;
  FUN_00001550(uVar2);
  return;
}

