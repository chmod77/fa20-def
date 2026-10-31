
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00120be4(byte param_1,byte param_2,char param_3,char param_4,char param_5,byte param_6,
                 byte param_7,undefined1 *param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  undefined1 uVar6;
  char cVar7;
  char cVar8;
  
  bVar4 = true;
  if ((param_4 == '\0') && (param_5 == '\0')) {
    bVar4 = false;
  }
  cVar7 = '\x01';
  if (param_2 <= DAT_fffee1b1) {
    cVar7 = DAT_fffee1b0;
  }
  if (param_2 == 0) {
    cVar7 = '\0';
  }
  bVar1 = false;
  if (cVar7 == '\0') {
    _DAT_fffee1ae = 0;
    sVar5 = _DAT_fffee1ae;
  }
  else {
    bVar1 = 799 < _DAT_fffee1ae;
    sVar5 = -1;
    if (_DAT_fffee1ae != 0xffff) {
      sVar5 = _DAT_fffee1ae + 1;
    }
  }
  _DAT_fffee1ae = sVar5;
  cVar8 = '\x01';
  if (param_1 <= DAT_fffee1b5) {
    cVar8 = DAT_fffee1b3;
  }
  if (param_1 == 0) {
    cVar8 = '\0';
  }
  bVar2 = false;
  if (cVar8 == '\0') {
    _DAT_fffee1ac = 0;
    sVar5 = _DAT_fffee1ac;
  }
  else {
    bVar2 = 299 < _DAT_fffee1ac;
    sVar5 = -1;
    if (_DAT_fffee1ac != 0xffff) {
      sVar5 = _DAT_fffee1ac + 1;
    }
  }
  _DAT_fffee1ac = sVar5;
  bVar3 = true;
  if ((((!bVar2) && (param_1 != 0)) && (!bVar1)) && (param_2 != 0)) {
    bVar3 = false;
  }
  if (((bVar3) || (param_3 != '\0')) || (uVar6 = 1, bVar4)) {
    uVar6 = DAT_fffee1b2;
  }
  if (((bVar3) || (param_3 != '\0')) || ((bVar4 || ((DAT_fffee1b4 < param_6 || (199 < param_7))))))
  {
    uVar6 = 0;
  }
  DAT_fffee1b0 = cVar7;
  DAT_fffee1b3 = cVar8;
  *param_8 = uVar6;
  DAT_fffee1b1 = param_2;
  DAT_fffee1b5 = param_1;
  DAT_fffee1b4 = param_6;
  DAT_fffee1b2 = uVar6;
  return;
}

