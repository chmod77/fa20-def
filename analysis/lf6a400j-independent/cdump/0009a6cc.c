
/* WARNING: Removing unreachable block (ram,0x0009a76c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009a6cc(char param_1,ushort param_2,char param_3,undefined1 param_4,char param_5,
                 ushort param_6,short *param_7)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  
  bVar1 = false;
  if (param_5 == '\0') {
    _DAT_fffebfd8 = 0;
    sVar5 = _DAT_fffebfd8;
  }
  else {
    bVar1 = 0x59 < _DAT_fffebfd8;
    sVar5 = -1;
    if (_DAT_fffebfd8 != 0xffff) {
      sVar5 = _DAT_fffebfd8 + 1;
    }
  }
  _DAT_fffebfd8 = sVar5;
  if (param_3 == '\0') {
    uVar3 = 0x21;
    uVar4 = 0xa4;
  }
  else {
    uVar3 = 0x83;
    uVar4 = 0x21;
  }
  if ((DAT_fffebfde != '\0') && (bVar2 = uVar4 < uVar3, uVar4 = uVar4 - uVar3, bVar2)) {
    uVar4 = 0;
  }
  DAT_fffebfde = uVar4 <= param_2;
  if (DAT_fffebfdc == '\0') {
    uVar3 = 0x3333;
  }
  else {
    uVar3 = 0x5c29;
  }
  DAT_fffebfdc = param_6 <= uVar3;
  sVar5 = _DAT_fffebfda;
  if ((((param_1 != '\0') && ((bool)DAT_fffebfde)) && ((bool)DAT_fffebfdc)) &&
     (sVar5 = -1, _DAT_fffebfda != -1)) {
    sVar5 = _DAT_fffebfda + 1;
  }
  if (((param_1 == '\0') || (8 < DAT_fffebfdd)) || (bVar1)) {
    sVar5 = 0;
  }
  *param_7 = sVar5;
  _DAT_fffebfda = sVar5;
  DAT_fffebfdd = param_4;
  return;
}

