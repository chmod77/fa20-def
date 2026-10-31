
void FUN_000b85f0(ushort *param_1,int param_2,ushort *param_3,ushort *param_4,undefined2 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = (undefined *)(((uint)*param_1 * 0x55 >> 8) + ((uint)*param_3 * 0x55 >> 8));
  puVar2 = puVar1 + ((uint)*param_4 * 0x55 >> 8);
  if ((puVar2 < puVar1) || (&DAT_0000ffff < puVar2)) {
    *param_5 = 0xffff;
  }
  else {
    *param_5 = (short)puVar2;
  }
  puVar1 = (undefined *)
           (((uint)param_1[1] * 0x55 >> 8) + ((uint)*(ushort *)(param_2 + 2) * 0x55 >> 8));
  puVar2 = puVar1 + ((uint)param_4[1] * 0x55 >> 8);
  if ((puVar2 < puVar1) || (&DAT_0000ffff < puVar2)) {
    param_5[1] = 0xffff;
  }
  else {
    param_5[1] = (short)puVar2;
  }
  return;
}

