
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000598d2(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  uVar3 = (uint)_v_Control_Module_Voltage_EF18 * (int)_DAT_ffff3538;
  bVar1 = (int)uVar3 < 0;
  if (bVar1) {
    uVar3 = -uVar3;
  }
  puVar4 = (undefined *)((0xfa - (uint)DAT_ffff0e06) * (uVar3 & 0xffff));
  if ((int)puVar4 < 0) {
    puVar4 = &DAT_0000ffff + (int)puVar4;
  }
  iVar2 = __sdiv32_r1_by_r0((int)(short)((uint)puVar4 >> 0x10) +
                            (0xfa - (uint)DAT_ffff0e06) * (uVar3 >> 0x10),0xaf);
  if (bVar1) {
    iVar2 = iVar2 + ((uint)_DAT_fffef24e - (uint)_DAT_ffff3530);
  }
  else {
    iVar2 = ((uint)_DAT_fffef24e - (uint)_DAT_ffff3530) - iVar2;
  }
  _DAT_fffef262 = FUN_0016b5d4(iVar2,FUN_0016b5d4);
  uVar3 = (uint)_v_Control_Module_Voltage_EF18 * (int)_DAT_ffff353a;
  bVar1 = (int)uVar3 < 0;
  if (bVar1) {
    uVar3 = -uVar3;
  }
  puVar4 = (undefined *)((0xfa - (uint)DAT_ffff0e07) * (uVar3 & 0xffff));
  if ((int)puVar4 < 0) {
    puVar4 = &DAT_0000ffff + (int)puVar4;
  }
  iVar2 = __sdiv32_r1_by_r0((int)(short)((uint)puVar4 >> 0x10) +
                            (0xfa - (uint)DAT_ffff0e07) * (uVar3 >> 0x10),0xaf);
  if (bVar1) {
    iVar2 = iVar2 + ((uint)_DAT_fffef250 - (uint)_DAT_ffff3532);
  }
  else {
    iVar2 = ((uint)_DAT_fffef250 - (uint)_DAT_ffff3532) - iVar2;
  }
  _DAT_fffef264 = FUN_0016b5d4(iVar2,FUN_0016b5d4);
  return;
}

