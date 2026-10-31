
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dab5c(uint param_1,char param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = _DAT_fffed03c;
  _DAT_fffed03c = _DAT_fffed03a;
  if (param_2 == '\0') {
    param_1 = param_1 & 0xffff;
    iVar2 = param_1 - _DAT_fffed038;
    uVar3 = 0x7fff;
    if ((iVar2 < 0x8000) && (uVar3 = (undefined2)iVar2, iVar2 < -0x8000)) {
      uVar3 = 0x8000;
    }
    *param_3 = uVar3;
  }
  else {
    *param_3 = 0;
  }
  _DAT_fffed038 = uVar1;
  _DAT_fffed03a = (short)param_1;
  return;
}

