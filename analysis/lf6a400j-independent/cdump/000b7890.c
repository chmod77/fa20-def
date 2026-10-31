
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b7890(uint param_1,char param_2,undefined2 *param_3)

{
  uint a;
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  
  if (param_2 == '\0') {
    a = 0;
  }
  else {
    iVar2 = 0;
    if ((int)_DAT_fffec7e0 < 0) {
      iVar2 = -1;
    }
    uVar1 = _DAT_fffec7e0 + (param_1 & 0xffff) * 0xc3;
    if (uVar1 < _DAT_fffec7e0) {
      iVar2 = iVar2 + 1;
    }
    if ((0 < iVar2) || ((iVar2 == 0 && (0x7fffffff < uVar1)))) {
      uVar1 = 0x7fffffff;
    }
    a = 0x88b8000;
    if ((int)uVar1 < 0x88b8001) {
      a = uVar1;
    }
  }
  iVar2 = __sdiv32_r1_by_r0(a,0x5000);
  uVar3 = 0x7fff;
  if ((iVar2 < 0x8000) && (uVar3 = (undefined2)iVar2, iVar2 < -0x8000)) {
    uVar3 = 0x8000;
  }
  *param_3 = uVar3;
  _DAT_fffec7e0 = a;
  return;
}

