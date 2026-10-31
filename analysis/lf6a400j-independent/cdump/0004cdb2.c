
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0004cdb2(void)

{
  uint uVar1;
  int iVar2;
  
  if ((DAT_fffef18d & 1) == 0) {
    _DAT_fffef18e = _v_Control_Module_Voltage_EF18;
    uVar1 = (int)(char)DAT_fffef18d | 1;
    DAT_fffef18d = (byte)uVar1;
  }
  else {
    iVar2 = (uint)_v_Control_Module_Voltage_EF18 - (uint)_DAT_fffef18e;
    if (iVar2 < 1) {
      uVar1 = iVar2 * -0x4000 + 0x7fff;
      iVar2 = (uint)_DAT_fffef18e -
              ((uint)((uVar1 & 0x80000000) != 0) * -0x10000 | (uVar1 & 0x7fffffff) >> 0xf);
    }
    else {
      uVar1 = iVar2 * 0x4000 + 0x7fff;
      iVar2 = ((uint)((uVar1 & 0x80000000) != 0) * -0x10000 | (uVar1 & 0x7fffffff) >> 0xf) +
              (uint)_DAT_fffef18e;
    }
    uVar1 = FUN_0016b5d4(iVar2);
    _DAT_fffef18e = (ushort)uVar1;
  }
  return uVar1;
}

