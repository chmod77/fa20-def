
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00087ee4(uint param_1,undefined2 param_2,undefined1 *param_3)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = _DAT_fffebc06 == 16000;
  if (!bVar1) {
    iVar2 = (param_1 & 0xffff) * 0x100 + -0x3e8000;
    if (_DAT_fffebc06 - 16000 == 0) {
      if (iVar2 < 0) {
        DAT_fffebc04 = 0;
      }
      else {
        DAT_fffebc04 = 0xff;
      }
    }
    else {
      iVar2 = __sdiv32_r1_by_r0(iVar2,_DAT_fffebc06 - 16000);
      if (iVar2 < 0x100) {
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        DAT_fffebc04 = (undefined1)iVar2;
      }
      else {
        DAT_fffebc04 = 0xff;
      }
    }
  }
  if (bVar1) {
    *param_3 = 0xff;
  }
  else {
    *param_3 = DAT_fffebc04;
  }
  _DAT_fffebc06 = param_2;
  return;
}

