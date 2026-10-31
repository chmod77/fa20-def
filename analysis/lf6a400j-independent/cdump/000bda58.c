
void FUN_000bda58(uint param_1,uint param_2,short *param_3,byte *param_4)

{
  uint uVar1;
  
  uVar1 = LK_135BE8((uint)&T_02E620,param_1,param_2);
  *param_4 = (byte)uVar1;
  *param_3 = (ushort)(byte)uVar1 << 8;
  return;
}

