
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d77e0(char param_1,ushort param_2,undefined4 param_3,undefined1 *param_4,ushort *param_5
                 )

{
  bool bVar1;
  ushort uVar2;
  undefined1 uVar3;
  
  bVar1 = false;
  if (((param_1 != '\0') && (param_2 < 0x9667)) && (0x6999 < param_2)) {
    bVar1 = true;
  }
  uVar2 = 0;
  if (bVar1) {
    uVar2 = _DAT_fffecf14;
  }
  uVar3 = 0;
  if ((499 < uVar2) && (bVar1)) {
    uVar3 = 1;
  }
  *param_4 = uVar3;
  if (bVar1) {
    if (uVar2 == 0xffff) {
      _DAT_fffecf14 = -1;
    }
    else {
      _DAT_fffecf14 = uVar2 + 1;
    }
  }
  else {
    _DAT_fffecf14 = 0;
  }
  *param_5 = uVar2;
  return;
}

