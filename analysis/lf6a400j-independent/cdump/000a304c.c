
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a304c(short param_1,char param_2,char param_3,uint param_4,ushort param_5,char param_6,
                 undefined1 *param_7)

{
  undefined2 uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  
  iVar2 = (param_4 & 0xff) * (int)(short)(0x10 - (param_5 & 0xff)) * 0x10;
  iVar4 = (int)param_1;
  if ((iVar2 < iVar4) && (iVar4 = 0x7fff, iVar2 < 0x8000)) {
    sVar3 = (short)iVar2;
    if (iVar2 < -0x8000) {
      sVar3 = -0x8000;
    }
    iVar4 = (int)sVar3;
  }
  if (DAT_fffec2b7 == '\0') {
    DAT_fffec2b6 = '\0';
    DAT_fffec2b7 = '\x01';
  }
  uVar1 = (undefined2)iVar4;
  _DAT_ffff19b8 = uVar1;
  if (DAT_fffec2b6 != '\0') {
    _DAT_ffff19b8 = _DAT_fffec2b4;
    FUN_0016b520(&DAT_ffff19b8,iVar4,0xff00);
  }
  DAT_fffec2b6 = 1;
  if (param_6 == '\0') {
    if ((param_2 != '\0') && (param_3 == '\0')) {
      uVar1 = _DAT_ffff19b8;
    }
  }
  else {
    uVar1 = 0;
  }
  *param_7 = (char)((ushort)uVar1 >> 8);
  _DAT_fffec2b4 = uVar1;
  return;
}

