
/* WARNING: Removing unreachable block (ram,0x00127218) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001271cc(char param_1,ushort param_2,byte param_3,ushort param_4,ushort param_5,
                 ushort param_6,ushort param_7,short *param_8)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  
  bVar2 = false;
  if (((param_1 != '\0') && (1 < param_2)) && (0x57 < param_3)) {
    bVar2 = true;
  }
  bVar1 = false;
  if (bVar2) {
    bVar1 = 0x31 < _DAT_fffee322;
    sVar3 = -1;
    if (_DAT_fffee322 != 0xffff) {
      sVar3 = _DAT_fffee322 + 1;
    }
  }
  else {
    _DAT_fffee322 = 0;
    sVar3 = _DAT_fffee322;
  }
  _DAT_fffee322 = sVar3;
  sVar3 = _DAT_fffee320;
  if (((bVar1) && (param_6 < param_7)) && (sVar3 = -1, _DAT_fffee320 != -1)) {
    sVar3 = _DAT_fffee320 + 1;
  }
  if ((((param_1 != '\0') && (0x95 < param_4)) && (param_5 < 0x579)) ||
     ((!bVar2 || ((0x95 < param_4 && (param_5 >= 0x579)))))) {
    sVar3 = 0;
  }
  *param_8 = sVar3;
  _DAT_fffee320 = sVar3;
  return;
}

