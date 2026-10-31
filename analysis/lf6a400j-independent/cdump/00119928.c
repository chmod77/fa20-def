
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00119928(char param_1,uint param_2,uint param_3,ushort *param_4)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((param_3 & 0xffff) <= (param_2 & 0xffff)) {
    iVar2 = param_2 - param_3;
  }
  if (param_1 == '\0') {
    DAT_fffedfd9 = '\0';
  }
  else {
    if (DAT_fffedfd9 == '\0') {
      DAT_fffedfd8 = '\0';
      DAT_fffedfd9 = '\x01';
    }
    uVar1 = _DAT_fffedfd6 << 5;
    if (DAT_fffedfd8 != '\0') {
      FUN_0016b4d8(&DAT_ffff19e6,iVar2,0xd00);
      uVar1 = _DAT_ffff19e6;
    }
    _DAT_ffff19e6 = uVar1;
    _DAT_fffedfd4 = _DAT_ffff19e6;
    DAT_fffedfd8 = '\x01';
  }
  uVar1 = 0;
  if ((param_1 != '\0') && (uVar1 = (ushort)iVar2, param_1 != '\0')) {
    uVar1 = _DAT_fffedfd4;
  }
  *param_4 = uVar1;
  _DAT_fffedfd6 = (short)((int)(uint)uVar1 >> 5);
  return;
}

