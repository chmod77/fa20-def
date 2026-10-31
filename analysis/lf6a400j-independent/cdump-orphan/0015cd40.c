
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015cd40(undefined4 param_1,short *param_2)

{
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar1;
  
  if (*param_2 == 0) {
    if (DAT_ffff2f59 != '\x01') {
      return;
    }
    iVar1 = FUN_0015c440();
    if (iVar1 == 0) {
      return;
    }
    uVar2 = FUN_00001550(0xf0);
  }
  else {
    *param_2 = *param_2 + -1;
    if (*param_2 == 0) {
      uVar2 = FUN_00001550();
      uVar3 = FUN_0016b3dc((uint)_DAT_ffff2f68 * _DAT_ffff2b78,0xc80);
      FUN_0015c446(uVar3);
      goto LAB_0015c5ce;
    }
    uVar2 = FUN_00001550(0xf0);
    iVar1 = FUN_0015c440();
    if (iVar1 == 0) goto LAB_0015c5ce;
  }
  FUN_0015c446(&DAT_0000ffff);
LAB_0015c5ce:
  FUN_00001550(uVar2);
  return;
}

