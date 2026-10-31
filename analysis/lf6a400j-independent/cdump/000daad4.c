
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000daad4(uint param_1,char param_2,ushort *param_3,ushort *param_4,char *param_5)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = 0x8000;
  if (param_2 == '\0') {
    param_1 = param_1 & 0xffff;
    iVar2 = param_1 - _DAT_fffed034;
    uVar1 = 0xffff;
    if ((iVar2 < 0x8000) && (uVar1 = 0, -0x8001 < iVar2)) {
      uVar1 = (short)iVar2 + 0x8000;
    }
  }
  *param_3 = uVar1;
  uVar1 = uVar1 >> 4;
  if (uVar1 < 0x880) {
    if (uVar1 < 0x780) {
      *param_5 = '\0';
    }
    else {
      *param_5 = (char)uVar1 + -0x80;
    }
  }
  else {
    *param_5 = -1;
  }
  if (param_2 == '\0') {
    *param_4 = _DAT_fffed034;
  }
  else {
    *param_4 = 0;
  }
  _DAT_fffed034 = (short)param_1;
  return;
}

