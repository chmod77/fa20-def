
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004a40(undefined4 param_1)

{
  uint uVar1;
  
  DAT_ffff8a81 = DAT_ffff8a81 & 0xbf;
  FUN_00004ad4();
  if ((DAT_ffff8a81 & 0x40) == 0) {
    _DAT_ffff65a8 = param_1;
    for (uVar1 = 0; (uVar1 & 0xff) < 0x80; uVar1 = uVar1 + 1) {
      uVar1 = uVar1 & 0xff;
      *(undefined1 *)(uVar1 - 0x9a50) = (&DAT_ffff8869)[uVar1];
    }
    FUN_00004b3e();
    return;
  }
  return;
}

