
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011dfb0(uint param_1,int param_2,char param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uStack_28;
  uint uStack_20;
  uint uStack_18;
  
  iVar4 = 0x7fffffff;
  if ((param_2 < 0xaaaaab) && (iVar4 = -0x80000000, -0xaaaaab < param_2)) {
    iVar4 = param_2 * 0xc0;
  }
  puVar5 = (uint *)&DAT_fffee0f8;
  iVar1 = iVar4 - _DAT_fffee0fc;
  if (((iVar4 < 0) || (-1 < _DAT_fffee0fc)) || (-1 < iVar1)) {
    if (((iVar4 < 0) && (-1 < _DAT_fffee0fc)) && (-1 < iVar1)) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  uStack_20 = __sdiv32_r1_by_r0((iVar1 >> 1) << 1,0x19);
  if ((*(char *)(puVar5 + 2) == '\x02') && (param_3 == '\x03')) {
    uVar2 = param_1 * 0x40 + *puVar5;
    uVar3 = param_1 >> 0x1a;
    if (uVar2 < param_1 * 0x40) {
      uVar3 = uVar3 + 1;
    }
    if (uVar3 != 0) {
      uVar2 = 0xffffffff;
    }
    iVar4 = 0;
    if ((int)uStack_20 < 0) {
      iVar4 = -1;
    }
    uStack_20 = uVar2 + uStack_20;
    if (uStack_20 < uVar2) {
      iVar4 = iVar4 + 1;
    }
    if (iVar4 < 1) {
      if (iVar4 < 0) {
        uStack_20 = 0;
      }
      uStack_28 = uStack_20;
      goto LAB_0011e0c4;
    }
  }
  else {
    iVar4 = 0;
    if ((int)uStack_20 < 0) {
      iVar4 = -1;
    }
    uStack_18 = uStack_20 + *puVar5;
    if (uStack_18 < uStack_20) {
      iVar4 = iVar4 + 1;
    }
    if (iVar4 < 1) {
      if (iVar4 < 0) {
        uStack_18 = 0;
      }
      uStack_28 = uStack_18;
      goto LAB_0011e0c4;
    }
  }
  uStack_28 = 0xffffffff;
LAB_0011e0c4:
  *param_4 = uStack_28 >> 6;
  puVar5[1] = param_2 << 6;
  *puVar5 = uStack_28;
  *(char *)(puVar5 + 2) = param_3;
  return;
}

