
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d7a30(char param_1,ushort param_2,undefined1 *param_3,short *param_4)

{
  bool bVar1;
  short sVar2;
  undefined1 uVar3;
  
  bVar1 = false;
  if (param_1 != '\0') {
    if ((param_2 < 0x24ce) && (0x1b32 < param_2)) {
      bVar1 = true;
    }
  }
  sVar2 = 0;
  if (bVar1) {
    sVar2 = _DAT_fffecf30;
  }
  uVar3 = 0;
  if ((sVar2 != 0) && (bVar1)) {
    uVar3 = 1;
  }
  *param_3 = uVar3;
  if (bVar1) {
    if (sVar2 == -1) {
      _DAT_fffecf30 = -1;
    }
    else {
      _DAT_fffecf30 = sVar2 + 1;
    }
  }
  else {
    _DAT_fffecf30 = 0;
  }
  *param_4 = sVar2;
  return;
}

