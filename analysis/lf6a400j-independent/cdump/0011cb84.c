
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011cb84(char param_1,char param_2,short param_3,short param_4,short param_5,byte param_6,
                 int param_7,int param_8,undefined1 *param_9,ushort *param_10,ushort *param_11)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  undefined1 uVar5;
  ushort uVar6;
  
  bVar1 = false;
  if ((param_1 != '\0') && (param_2 != '\0')) {
    bVar1 = true;
  }
  bVar2 = false;
  if ((bVar1) && (param_4 < param_3)) {
    bVar2 = true;
  }
  uVar6 = 0;
  if (bVar2) {
    uVar6 = _DAT_fffee094;
    if (_DAT_fffee094 == 0xffff) {
      _DAT_fffee094 = -1;
    }
    else {
      _DAT_fffee094 = _DAT_fffee094 + 1;
    }
  }
  else {
    _DAT_fffee094 = 0;
  }
  *param_10 = uVar6;
  if (DAT_fffee096 < param_6) {
    if (((int)*(char *)(param_7 + 0x2d) & 0x80U) == 0 &&
        ((int)*(char *)(param_8 + 0x2d) & 0x80U) == 0) {
      _DAT_fffee090 = 0x510;
    }
    else {
      _DAT_fffee090 = 0x6c0;
    }
  }
  bVar3 = false;
  if ((bVar1) && (_DAT_fffee090 < param_5)) {
    bVar3 = true;
  }
  uVar4 = 0;
  if (bVar3) {
    uVar4 = _DAT_fffee092;
    if (_DAT_fffee092 == 0xffff) {
      _DAT_fffee092 = -1;
    }
    else {
      _DAT_fffee092 = _DAT_fffee092 + 1;
    }
  }
  else {
    _DAT_fffee092 = 0;
  }
  uVar5 = 1;
  if (((uVar6 < 8) || (!bVar2)) && ((uVar4 < 5 || (!bVar3)))) {
    uVar5 = 0;
  }
  *param_9 = uVar5;
  *param_11 = uVar4;
  DAT_fffee096 = param_6;
  return;
}

