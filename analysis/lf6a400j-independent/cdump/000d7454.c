
/* WARNING: Removing unreachable block (ram,0x000d747a) */
/* WARNING: Removing unreachable block (ram,0x000d7486) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d7454(ushort param_1,ushort param_2,ushort param_3,short param_4,char param_5,
                 undefined1 *param_6,ushort *param_7)

{
  bool bVar1;
  ushort uVar2;
  undefined1 uVar3;
  
  bVar1 = false;
  if ((param_5 != '\0') && (((param_2 < param_1 || (param_1 < param_3)) && (param_4 == 0)))) {
    bVar1 = true;
  }
  uVar2 = 0;
  if (bVar1) {
    uVar2 = _DAT_fffecef0;
    if (_DAT_fffecef0 == 0xffff) {
      _DAT_fffecef0 = -1;
    }
    else {
      _DAT_fffecef0 = _DAT_fffecef0 + 1;
    }
  }
  else {
    _DAT_fffecef0 = 0;
  }
  uVar3 = 0;
  if ((499 < uVar2) && (bVar1)) {
    uVar3 = 1;
  }
  *param_6 = uVar3;
  *param_7 = uVar2;
  return;
}

