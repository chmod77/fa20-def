
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c26e8(char param_1,char param_2,char param_3,char param_4,uint param_5,
                 undefined2 *param_6)

{
  bool bVar1;
  undefined1 *puVar2;
  
  bVar1 = true;
  if (((param_1 == '\0') || (param_3 != '\x01')) && ((param_2 == '\0' || (param_4 != '\x01')))) {
    bVar1 = false;
  }
  if (bVar1) {
    puVar2 = &DAT_ffff0600 + (param_5 & 0xffff) * 8;
    if ((int)puVar2 < 0x3e81) {
      _DAT_fffeca10 = 16000;
    }
    else if ((int)puVar2 < (int)&DAT_00010000) {
      if ((int)puVar2 < 0) {
        puVar2 = (undefined1 *)0x0;
      }
      _DAT_fffeca10 = SUB42(puVar2,0);
    }
    else {
      _DAT_fffeca10 = 0xffff;
    }
  }
  if (bVar1) {
    _DAT_fffeca12 = _DAT_fffeca10;
  }
  *param_6 = _DAT_fffeca12;
  return;
}

