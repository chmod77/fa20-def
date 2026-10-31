
/* WARNING: Removing unreachable block (ram,0x000a7722) */
/* WARNING: Removing unreachable block (ram,0x000a7726) */
/* WARNING: Removing unreachable block (ram,0x000a7778) */
/* WARNING: Removing unreachable block (ram,0x000a777c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a76a0(char param_1,short param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  
  sVar1 = param_2 - _DAT_fffec42c;
  if (((param_2 < 0) || (-1 < _DAT_fffec42c)) || (-1 < sVar1)) {
    if (((param_2 < 0) && (-1 < _DAT_fffec42c)) && (-1 < sVar1)) {
      sVar1 = -0x8000;
    }
  }
  else {
    sVar1 = 0x7fff;
  }
  sVar2 = param_2 - _DAT_fffec42c;
  if (((param_2 < 0) || (-1 < _DAT_fffec42c)) || (-1 < sVar2)) {
    if (((param_2 < 0) && (-1 < _DAT_fffec42c)) && (-1 < sVar2)) {
      sVar2 = -0x8000;
    }
  }
  else {
    sVar2 = 0x7fff;
  }
  if (sVar2 < 0) {
    sVar2 = _DAT_fffec42c + -0x5ccf;
    if ((_DAT_fffec42c < 0) && (-1 < sVar2)) {
      sVar2 = -0x8000;
    }
    if (param_2 < sVar2) goto LAB_000a7746;
  }
  sVar2 = param_2;
LAB_000a7746:
  if (0 < sVar1) {
    sVar2 = _DAT_fffec42c + 0x5ccf;
    if ((-1 < _DAT_fffec42c) && (sVar2 < 0)) {
      sVar2 = 0x7fff;
    }
    if (param_2 <= sVar2) {
      sVar2 = param_2;
    }
  }
  if ((DAT_fffec42e == '\0') || (param_1 == '\0')) {
    sVar2 = param_2;
  }
  *param_3 = sVar2;
  DAT_fffec42e = 1;
  _DAT_fffec42c = sVar2;
  return;
}

