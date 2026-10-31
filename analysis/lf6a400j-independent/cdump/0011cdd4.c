
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011cdd4(byte param_1,short param_2,undefined1 *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar6;
  uint uVar5;
  ushort uVar7;
  int iVar8;
  short sVar9;
  
  iVar8 = (int)param_2;
  uVar7 = 0;
  if ((param_1 != 0) && (uVar7 = 0xffff, _DAT_fffee0a4 != -1)) {
    uVar7 = _DAT_fffee0a4 + 1;
  }
  if (DAT_fffee0a8 != 0) {
    uVar7 = 1;
  }
  bVar3 = param_1 != 0 && (999 < uVar7) < DAT_fffee0a8;
  bVar2 = true;
  if ((iVar8 < 0x4000) && (0x2000 < iVar8)) {
    bVar2 = false;
  }
  bVar1 = true;
  if ((param_1 <= DAT_fffee0a7) && (DAT_fffee0a6 == '\0')) {
    bVar1 = false;
  }
  if ((!bVar1) || (cVar6 = '\x01', !bVar2)) {
    cVar6 = DAT_fffee0a9;
  }
  if (!bVar2) {
    cVar6 = '\0';
  }
  sVar9 = -0x8000;
  if ((!bVar1) && (sVar9 = param_2, iVar8 <= _DAT_fffee0a2)) {
    sVar9 = _DAT_fffee0a2;
  }
  if (bVar1) {
    iVar8 = 0x7fff;
  }
  else if (_DAT_fffee0a0 <= iVar8) {
    iVar8 = (int)_DAT_fffee0a0;
  }
  uVar5 = sVar9 - iVar8;
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  uVar4 = 0;
  if (((bVar3) && ((uVar5 & 0xffff) < 0x7001)) && (cVar6 != '\0')) {
    uVar4 = 1;
  }
  _DAT_fffee0a4 = uVar7;
  DAT_fffee0a8 = 999 < uVar7;
  DAT_fffee0a9 = cVar6;
  *param_3 = uVar4;
  DAT_fffee0a7 = param_1;
  _DAT_fffee0a2 = sVar9;
  _DAT_fffee0a0 = (short)iVar8;
  DAT_fffee0a6 = bVar3;
  return;
}

