
/* WARNING: Removing unreachable block (ram,0x000add4e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000adcfc(char param_1,short param_2,short param_3,ushort param_4,undefined1 *param_5)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  sVar3 = param_2 - param_3;
  if (((param_2 < 0) || (-1 < param_3)) || (-1 < sVar3)) {
    if (((param_2 < 0) && (-1 < param_3)) && (-1 < sVar3)) {
      sVar3 = -0x8000;
    }
  }
  else {
    sVar3 = 0x7fff;
  }
  if (DAT_fffec56a == '\0') {
    sVar4 = 0x80;
  }
  else {
    sVar4 = -0x80;
  }
  if (param_1 == '\0' && _DAT_fffec568 < 200) {
    bVar1 = true;
    if ((sVar4 > sVar3) && (199 < param_4)) {
      bVar1 = false;
    }
    if (!bVar1) {
      *param_5 = 0;
      goto LAB_000adda8;
    }
  }
  *param_5 = 1;
LAB_000adda8:
  if (param_1 != '\0') {
    _DAT_fffec568 = 0;
    sVar2 = _DAT_fffec568;
  }
  else {
    sVar2 = -1;
    if (_DAT_fffec568 != 0xffff) {
      sVar2 = _DAT_fffec568 + 1;
    }
  }
  _DAT_fffec568 = sVar2;
  DAT_fffec56a = sVar4 <= sVar3;
  return;
}

