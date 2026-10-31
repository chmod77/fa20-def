
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00126fb0(char param_1,short param_2,char param_3,uint param_4,uint param_5,ushort *param_6)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  short sVar5;
  
  iVar4 = (param_4 & 0xffff) - (param_5 & 0xffff);
  sVar5 = 0x7fff;
  if ((iVar4 < 0x8000) && (sVar5 = (short)iVar4, iVar4 < -0x8000)) {
    sVar5 = -0x8000;
  }
  bVar2 = false;
  if ((((param_1 != '\0') && (param_2 == 0)) && (param_3 == '\0')) && (-1 < sVar5)) {
    bVar2 = true;
  }
  bVar1 = false;
  if (bVar2) {
    bVar1 = 0x31 < _DAT_fffee310;
    sVar5 = -1;
    if (_DAT_fffee310 != 0xffff) {
      sVar5 = _DAT_fffee310 + 1;
    }
  }
  else {
    _DAT_fffee310 = 0;
    sVar5 = _DAT_fffee310;
  }
  _DAT_fffee310 = sVar5;
  uVar3 = _DAT_fffee312;
  if ((bVar1) && (uVar3 = 0xffff, _DAT_fffee312 != 0xffff)) {
    uVar3 = _DAT_fffee312 + 1;
  }
  if ((!bVar2) || (0xf9 < _DAT_fffee312)) {
    uVar3 = 0;
  }
  *param_6 = uVar3;
  _DAT_fffee312 = uVar3;
  return;
}

