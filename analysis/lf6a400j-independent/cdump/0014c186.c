
/* WARNING: Removing unreachable block (ram,0x0014c1c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014c186(undefined4 param_1)

{
  undefined2 uVar2;
  uint uVar1;
  int iVar3;
  
  uVar2 = FUN_00001550(0xf0);
  _DAT_ffff206e = 0x7a12;
  if (((int)DAT_ffff66c4 & 0x80U) == 0) {
    uVar1 = FUN_0016bd78(param_1,&DAT_00006400);
    uVar1 = (uVar1 & 0xffff) * 0x4e2;
    iVar3 = (int)((int)(char)(uVar1 >> 0x18) << 0x10 | uVar1 >> 8 & 0xffff) >> 2;
  }
  else {
    iVar3 = 0;
  }
  _DAT_ffff2070 = FUN_0016bd78(iVar3,(int)_DAT_ffff206e);
  FUN_00001550(uVar2);
  return;
}

