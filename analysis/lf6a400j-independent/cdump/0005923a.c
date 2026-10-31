
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005923a(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  uVar3 = (uint)_v_Control_Module_Voltage_EF18 * (int)_DAT_ffff353c;
  bVar1 = (int)uVar3 < 0;
  if (bVar1) {
    uVar3 = -uVar3;
  }
  puVar4 = (undefined *)((0xfa - (uint)DAT_ffff0e20) * (uVar3 & 0xffff));
  if ((int)puVar4 < 0) {
    puVar4 = &DAT_0000ffff + (int)puVar4;
  }
  iVar2 = __sdiv32_r1_by_r0((int)(short)((uint)puVar4 >> 0x10) +
                            (0xfa - (uint)DAT_ffff0e20) * (uVar3 >> 0x10),0xaf);
  if (bVar1) {
    iVar2 = iVar2 + ((uint)_DAT_fffef252 - (uint)uRamffff3534);
  }
  else {
    iVar2 = ((uint)_DAT_fffef252 - (uint)uRamffff3534) - iVar2;
  }
  _DAT_fffef276 = FUN_0016b5d4(iVar2,FUN_0016b5d4);
  uVar3 = (uint)_v_Control_Module_Voltage_EF18 * (int)sRamffff353e;
  bVar1 = (int)uVar3 < 0;
  if (bVar1) {
    uVar3 = -uVar3;
  }
  puVar4 = (undefined *)((0xfa - (uint)DAT_ffff0e21) * (uVar3 & 0xffff));
  if ((int)puVar4 < 0) {
    puVar4 = &DAT_0000ffff + (int)puVar4;
  }
  iVar2 = __sdiv32_r1_by_r0((int)(short)((uint)puVar4 >> 0x10) +
                            (0xfa - (uint)DAT_ffff0e21) * (uVar3 >> 0x10),0xaf);
  if (bVar1) {
    iVar2 = iVar2 + ((uint)_DAT_fffef254 - (uint)uRamffff3536);
  }
  else {
    iVar2 = ((uint)_DAT_fffef254 - (uint)uRamffff3536) - iVar2;
  }
  _DAT_fffef278 = FUN_0016b5d4(iVar2,FUN_0016b5d4);
  return;
}

