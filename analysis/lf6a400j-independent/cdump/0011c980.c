
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011c980(char param_1,char param_2,short param_3,short param_4,short param_5,byte param_6,
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
  if ((bVar1) && (param_3 < param_4)) {
    bVar2 = true;
  }
  uVar6 = 0;
  if (bVar2) {
    uVar6 = _DAT_fffee088;
    if (_DAT_fffee088 == 0xffff) {
      _DAT_fffee088 = -1;
    }
    else {
      _DAT_fffee088 = _DAT_fffee088 + 1;
    }
  }
  else {
    _DAT_fffee088 = 0;
  }
  *param_10 = uVar6;
  if (DAT_fffee08a < param_6) {
    if ((*(byte *)(param_7 + 0x2c) & 0x40) == 0 && (*(byte *)(param_8 + 0x2c) & 0x40) == 0) {
      _DAT_fffee084 = -0x510;
    }
    else {
      _DAT_fffee084 = -0x6c0;
    }
  }
  bVar3 = false;
  if ((bVar1) && (param_5 < _DAT_fffee084)) {
    bVar3 = true;
  }
  uVar4 = 0;
  if (bVar3) {
    uVar4 = _DAT_fffee086;
    if (_DAT_fffee086 == 0xffff) {
      _DAT_fffee086 = -1;
    }
    else {
      _DAT_fffee086 = _DAT_fffee086 + 1;
    }
  }
  else {
    _DAT_fffee086 = 0;
  }
  uVar5 = 1;
  if (((uVar6 < 8) || (!bVar2)) && ((uVar4 < 5 || (!bVar3)))) {
    uVar5 = 0;
  }
  *param_9 = uVar5;
  *param_11 = uVar4;
  DAT_fffee08a = param_6;
  return;
}

