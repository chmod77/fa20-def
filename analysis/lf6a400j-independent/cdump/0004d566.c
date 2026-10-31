
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004d566(void)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  byte bVar5;
  
  sVar3 = _DAT_ffff2b20;
  uVar2 = _DAT_ffff2b1e;
  uVar4 = FUN_0016b428(0xffffc800,(int)_v_Engine_Speed_OBD_copy_2ADA,&LAB_00001400,DAT_fffef357 & 1)
  ;
  bVar1 = (uVar4 & 1) == 0;
  bVar5 = DAT_fffef357 | 1;
  if (bVar1) {
    bVar5 = DAT_fffef357 & 0xfe;
  }
  bVar1 = !bVar1;
  DAT_fffef357 = bVar5;
  if ((((DAT_fffef32a & 8) != 0) ||
      (((((DAT_fffef32a & 8) == 0 && (bVar1)) && (-0x100 < sVar3)) && (sVar3 < 0xff)))) ||
     ((((DAT_fffef32a & 8) == 0 && (!bVar1)) && ((-0x100 < sVar3 && (sVar3 < 0xff)))))) {
    _v_Manifold_Absolute_Pressure_EECE = (undefined2)((uint)_DAT_fffef362 + (uint)uVar2 >> 1);
  }
  else {
    _v_Manifold_Absolute_Pressure_EECE = _DAT_fffee6f8;
  }
  _DAT_fffef362 = uVar2;
  return;
}

