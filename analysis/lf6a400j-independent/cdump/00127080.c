
/* WARNING: Removing unreachable block (ram,0x001270a2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00127080(char param_1,ushort param_2,byte param_3,ushort param_4,ushort *param_5)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  ushort uVar4;
  
  bVar2 = false;
  if (((param_1 != '\0') && (1 < param_2)) && (0x57 < param_3)) {
    bVar2 = true;
  }
  bVar1 = false;
  if (bVar2) {
    bVar1 = 0x31 < _DAT_fffee314;
    sVar3 = -1;
    if (_DAT_fffee314 != 0xffff) {
      sVar3 = _DAT_fffee314 + 1;
    }
  }
  else {
    _DAT_fffee314 = 0;
    sVar3 = _DAT_fffee314;
  }
  _DAT_fffee314 = sVar3;
  uVar4 = _DAT_fffee316;
  if ((bVar1) && (uVar4 = 0xffff, _DAT_fffee316 != 0xffff)) {
    uVar4 = _DAT_fffee316 + 1;
  }
  if ((((param_1 != '\0') && (0x95 < _DAT_fffee316)) && (param_4 < 0x579)) ||
     ((!bVar2 || ((0x95 < _DAT_fffee316 && (param_4 >= 0x579)))))) {
    uVar4 = 0;
  }
  *param_5 = uVar4;
  _DAT_fffee316 = uVar4;
  return;
}

