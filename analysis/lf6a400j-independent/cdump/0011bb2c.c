
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011bb2c(char param_1,char param_2,char param_3,char param_4,char param_5,byte param_6,
                 ushort param_7,char param_8,ushort param_9,short param_10,ushort param_11,
                 char param_12,short param_13,char param_14,undefined1 *param_15,ushort *param_16,
                 undefined2 *param_17,undefined2 *param_18,ushort *param_19)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  
  if ((param_12 == '\0') && (param_13 == 0)) {
    bVar1 = 0x7c < _DAT_fffee060;
  }
  else {
    bVar1 = false;
  }
  if ((param_12 == '\0') && (param_13 == 0)) {
    sVar3 = -1;
    if (_DAT_fffee060 != 0xffff) {
      sVar3 = _DAT_fffee060 + 1;
    }
  }
  else {
    _DAT_fffee060 = 0;
    sVar3 = _DAT_fffee060;
  }
  _DAT_fffee060 = sVar3;
  if (param_8 != -0x5b) {
    uVar4 = 0x3700;
  }
  else {
    uVar4 = 0xa00;
  }
  *param_16 = uVar4;
  *param_18 = 0;
  if (param_8 != -0x5b) {
    uVar5 = 0xb800;
  }
  else {
    uVar5 = 0x4000;
  }
  *param_19 = uVar5;
  *param_17 = 0x1e00;
  bVar2 = false;
  if (((param_3 == '\0') && (param_4 != '\0')) && (param_5 != '\0')) {
    bVar2 = true;
  }
  if ((param_1 != '\0') && (((param_2 == '\0' || (!bVar2)) || (param_6 == 0)))) {
    DAT_fffee063 = 0;
  }
  if (((param_1 != '\0') && (param_2 != '\0')) &&
     (((bVar2 && ((((DAT_fffee062 < param_6 && (uVar4 < param_7)) && (0x1e00 < param_9)) &&
                  ((param_10 != 0 && (uVar5 < param_11)))))) && (bVar1)))) {
    DAT_fffee063 = 1;
  }
  if ((param_14 != '\0') || (param_1 == '\0')) {
    DAT_fffee063 = 0;
  }
  *param_15 = DAT_fffee063;
  DAT_fffee062 = param_6;
  return;
}

