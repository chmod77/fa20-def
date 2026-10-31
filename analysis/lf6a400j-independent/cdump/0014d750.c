
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014d750(void)

{
  byte bVar4;
  undefined4 uVar1;
  uint uVar2;
  undefined2 uVar3;
  
  bVar4 = DAT_fffff628 & 7;
  uVar1 = FUN_00001540((uint)DAT_ffff2086 * (uint)_DAT_ffff2084 >> 7);
  uVar2 = FUN_0016bd78(uVar1,(int)(short)_DAT_ffff2084);
  uVar2 = (int)(short)_DAT_ffff2084 - (uVar2 & 0xffff);
  if ((bVar4 == 2) || ((_DAT_ffff2c74 == 0 && (uVar2 = uVar2 & 0xffff, uVar2 != 0)))) {
    uVar3 = FUN_00001550(0xf0);
    _DAT_ffff203c = _DAT_ffff2084;
    _DAT_ffff203e = FUN_0016bd78(uVar2,(int)(short)_DAT_ffff2084);
    FUN_00001550(uVar3);
    _DAT_ffff2c74 = (short)uVar2;
  }
  FUN_0014cd38();
  return;
}

