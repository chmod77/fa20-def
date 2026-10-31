
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000393e4(int param_1)

{
  bool bVar1;
  uint uVar2;
  
  if ((DAT_fffef310 & 8) != 0) {
    func_0x000395b2();
    func_0x000395e4();
    func_0x00039616();
    func_0x00039652();
    func_0x00039690();
    func_0x0003970c();
    func_0x0003974a();
    func_0x00039788();
    func_0x000397c6();
    func_0x00039804();
    func_0x00039842();
    func_0x00039880();
    func_0x000398c0();
    func_0x00039900();
    func_0x00039940();
    param_1 = 0xf;
    goto LAB_0003954a;
  }
  if ((DAT_fffef310 & 0x10) == 0) {
    if ((DAT_fffef310 & 4) != 0) {
      FUN_0003a24c();
      FUN_0003a27e();
      FUN_0003a2b0();
      FUN_0003a2ec();
      FUN_0003a330();
      FUN_0003a36e();
      FUN_0003a3ac();
      FUN_0003a3ea();
      FUN_0003a480();
      param_1 = 9;
    }
    goto LAB_0003954a;
  }
  if (DAT_ffff0592 < 0x71) {
    DAT_fffef3e0 = '\x01';
LAB_00039466:
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if (DAT_fffef3e0 != '\0') {
      if (DAT_ffff0592 < 0x77) goto LAB_00039466;
      bVar1 = false;
      DAT_fffef3e0 = '\0';
    }
  }
  if ((DAT_ffff0592 < 0x71) || (bVar1)) {
    DAT_fffef2d3 = 1;
  }
  else {
    DAT_fffef2d3 = 0;
  }
  func_0x000399e4();
  func_0x00039a74();
  func_0x00039ab0();
  func_0x00039af4();
  func_0x00039b3a();
  func_0x00039bd4();
  func_0x00039c70();
  func_0x00039cb6();
  func_0x00039cfc();
  func_0x00039d88();
  func_0x00039dce();
  func_0x00039e72();
  func_0x00039f08();
  func_0x00039fb2();
  func_0x0003a052();
  func_0x0003a10c();
  func_0x0003a154();
  param_1 = 0x10;
LAB_0003954a:
  if (_DAT_ffff871e < 100) {
    if (DAT_ffff8720 != '\x01') {
      for (uVar2 = 0; (int)(uVar2 & 0xff) < param_1; uVar2 = (uVar2 & 0xff) + 1) {
        if (((&DAT_ffff2682)[(uVar2 & 0xff) * 0xc] & 1) != 0) {
          DAT_ffff8720 = '\x01';
          break;
        }
        DAT_ffff8720 = '\0';
      }
    }
    _DAT_ffff871e = _DAT_ffff871e + 1;
  }
  uVar2 = (uint)(short)_DAT_ffff871e;
  if (uVar2 == 100) {
    if (DAT_ffff8720 == '\0') {
      uVar2 = (int)DAT_ffff678b | 0x20;
      DAT_ffff678b = (char)uVar2;
    }
    else {
      uVar2 = (int)DAT_ffff678b & 0xdf;
      DAT_ffff678b = (char)uVar2;
    }
  }
  return uVar2;
}

