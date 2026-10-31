
undefined * FUN_00062b62(ushort param_1,ushort param_2,uint param_3)

{
  undefined *puVar1;
  
  if (((param_3 & 0xffff) == 0) ||
     (param_3 * 0x10000 - (param_3 & 0xffff) < (uint)param_2 * (uint)param_1)) {
    puVar1 = &DAT_0000ffff;
  }
  else {
    puVar1 = (undefined *)FUN_0016c588();
  }
  return puVar1;
}

