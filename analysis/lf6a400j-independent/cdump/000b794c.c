
/* WARNING: Removing unreachable block (ram,0x000b7a3a) */
/* WARNING: Removing unreachable block (ram,0x000b79cc) */
/* WARNING: Removing unreachable block (ram,0x000b7ba2) */
/* WARNING: Removing unreachable block (ram,0x000b7b2e) */
/* WARNING: Removing unreachable block (ram,0x000b7b22) */
/* WARNING: Removing unreachable block (ram,0x000b7b48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b794c(uint param_1,ushort param_2,uint param_3,ushort param_4,char param_5,char param_6,
                 char param_7,undefined2 *param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  int iStack_2c;
  ushort uStack_26;
  
  if (param_5 == '\0') {
    param_1 = param_1 & 0xffff;
    iVar4 = param_2 - param_1;
    iVar1 = 0x7fff;
    if ((iVar4 < 0x8000) && (iVar1 = -0x8000, -0x8001 < iVar4)) {
      iVar1 = iVar4;
    }
    uVar2 = (int)(short)iVar1 * (param_3 & 0xffff);
    uVar6 = (uVar2 & 0xffff) * 5;
    uVar3 = (uVar6 >> 0x10) + (uVar2 >> 0x10) * 5;
    uVar6 = uVar3 * 0x10000 + (uVar6 & 0xffff);
  }
  else {
    uVar2 = 0x7fffffff;
    if ((param_3 & 0xffff) * 0x27 < 0xb02c0c) {
      uVar2 = (param_3 & 0xffff) * 0x1c56;
    }
    uVar6 = (uVar2 & 0xffff) * 5;
    uVar3 = (uVar6 >> 0x10) + (uVar2 >> 0x10) * 5;
    uVar6 = uVar3 * 0x10000 + (uVar6 & 0xffff);
  }
  uVar3 = uVar3 >> 0x10;
  if ((int)uVar2 < 0) {
    uVar3 = uVar3 - 5;
  }
  uVar6 = uVar6 >> 8 | uVar3 << 0x18;
  if ((((param_6 != '\0') && (param_4 <= _DAT_fffec7ea)) ||
      ((param_4 >> 8 < 0x46 != 0x45 < _DAT_fffec7ea >> 8 &&
       ((uint)_DAT_fffec7e8 == (param_1 & 0xffff))))) || (uVar3 = 0, param_5 != '\0')) {
    uVar3 = _DAT_fffec7e4;
  }
  uStack_26 = param_2;
  if ((param_5 == '\0') && (param_7 == '\0')) {
    uVar6 = 0;
  }
  else {
    uVar2 = uVar6 + uVar3;
    if (((int)uVar6 < 0) || (((int)uVar3 < 0 || (-1 < (int)uVar2)))) {
      if (((int)uVar6 < 0) && (((int)uVar3 < 0 && (-1 < (int)uVar2)))) {
        uVar2 = 0x80000000;
      }
    }
    else {
      uVar2 = 0x7fffffff;
    }
    uStack_34 = 0x222e0000;
    local_38 = 0;
    uVar6 = FUN_0016c500(&local_38,0xb);
    if ((int)uVar2 < (int)uVar6) {
      uVar6 = uVar2;
    }
  }
  if ((param_6 != '\0') && (0xba2e < uStack_26)) {
    uVar6 = _DAT_fffec7e4;
  }
  uVar2 = (uVar6 & 0xffff) * 0xb;
  uVar7 = (uVar6 >> 0x10) * 0xb;
  uVar3 = (uVar2 >> 0x10) + uVar7;
  puStack_30 = (undefined *)0x0;
  if (uVar3 < uVar7) {
    puStack_30 = &DAT_00010000;
  }
  iStack_2c = uVar3 * 0x10000 + (uVar2 & 0xffff);
  puStack_30 = puStack_30 + (uVar3 >> 0x10);
  if ((int)uVar6 < 0) {
    puStack_30 = puStack_30 + -0xb;
  }
  iVar1 = FUN_0016c500(&puStack_30,&DAT_00028000);
  uVar5 = 0x7fff;
  if ((iVar1 < 0x8000) && (uVar5 = (undefined2)iVar1, iVar1 < -0x8000)) {
    uVar5 = 0x8000;
  }
  *param_8 = uVar5;
  _DAT_fffec7ea = param_4;
  _DAT_fffec7e4 = uVar6;
  _DAT_fffec7e8 = (short)param_1;
  return;
}

