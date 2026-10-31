
/* WARNING: Removing unreachable block (ram,0x000a729a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a7260(char param_1,char param_2,char param_3,char param_4,uint param_5,uint param_6,
                 undefined2 *param_7,undefined2 *param_8)

{
  bool bVar1;
  uint uVar2;
  short sVar3;
  undefined1 *p1;
  int iVar4;
  
  bVar1 = false;
  if (((param_1 == '\0') && (param_2 != -1)) && (param_3 != '\0')) {
    bVar1 = true;
  }
  if (bVar1) {
    iVar4 = (param_5 & 0xffff) - ((int)(param_6 & 0xffff) >> 2);
    sVar3 = 0x7fff;
    if (iVar4 < 0x8000) {
      sVar3 = (short)iVar4;
    }
    p1 = (undefined1 *)(int)sVar3;
    if (0x1400 < (int)p1) {
      p1 = &LAB_00001400;
    }
    _DAT_fffec41a = SUB42(p1,0);
    if (param_4 == '\0') {
      uVar2 = LK_134E2C((uint)&T_02DC54,(uint)p1);
      _DAT_fffec418 = (undefined2)uVar2;
    }
    else {
      uVar2 = LK_134E2C((uint)&T_02DC48,(uint)p1);
      _DAT_fffec418 = (undefined2)uVar2;
    }
  }
  if (bVar1) {
    *param_7 = _DAT_fffec418;
  }
  else {
    *param_7 = 0;
  }
  *param_8 = _DAT_fffec41a;
  DAT_fffec41c = param_2 != -1;
  return;
}

