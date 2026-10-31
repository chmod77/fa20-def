
/* WARNING: Removing unreachable block (ram,0x000ad6f2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ad6cc(undefined4 param_1,ushort param_2,undefined4 param_3,short param_4,ushort param_5,
                 char param_6,undefined4 param_7)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = false;
  if ((((0xbfff < param_2) && (-0xef < param_4)) && (param_4 < 0xef)) &&
     ((5999 < param_5 && (param_6 != '\0')))) {
    bVar1 = true;
  }
  bVar2 = false;
  if ((bVar1) && (_DAT_fffec550 == 0)) {
    bVar2 = true;
  }
  if (bVar2) {
    _DAT_fffec550 = 200;
  }
  if ((bVar1) && (_DAT_fffec550 != 0)) {
    _DAT_fffec550 = _DAT_fffec550 + -1;
  }
  else {
    _DAT_fffec550 = 0;
  }
  *(bool *)param_7 = bVar2;
  return;
}

