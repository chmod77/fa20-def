
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012853c(char param_1,short param_2,char param_3,uint param_4,undefined2 param_5,
                 uint param_6,uint param_7,uint *param_8)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  short sVar5;
  uint uVar4;
  
  iVar3 = (param_6 & 0xffff) - (param_7 & 0xffff);
  sVar5 = 0x7fff;
  if ((iVar3 < 0x8000) && (sVar5 = (short)iVar3, iVar3 < -0x8000)) {
    sVar5 = -0x8000;
  }
  bVar2 = false;
  if ((((param_1 != '\0') && (param_2 == 0)) && (param_3 == '\0')) && (-1 < sVar5)) {
    bVar2 = true;
  }
  bVar1 = false;
  if (bVar2) {
    bVar1 = 0x31 < _DAT_fffee35e;
    sVar5 = -1;
    if (_DAT_fffee35e != 0xffff) {
      sVar5 = _DAT_fffee35e + 1;
    }
  }
  else {
    _DAT_fffee35e = 0;
    sVar5 = _DAT_fffee35e;
  }
  _DAT_fffee35e = sVar5;
  if ((bVar1) &&
     (uVar4 = _DAT_fffee358 + (param_4 & 0xffff), bVar1 = uVar4 < _DAT_fffee358,
     _DAT_fffee358 = uVar4, bVar1)) {
    _DAT_fffee358 = 0xffffffff;
  }
  if ((!bVar2) || (0xf9 < _DAT_fffee35c)) {
    _DAT_fffee358 = 0;
  }
  *param_8 = _DAT_fffee358;
  _DAT_fffee35c = param_5;
  return;
}

