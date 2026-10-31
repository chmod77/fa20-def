
void FUN_0008223c(short param_1,uint param_2,ushort *param_3,ushort *param_4)

{
  uint uVar1;
  ushort uVar2;
  ushort extraout_r0;
  
  uVar1 = LK_133F40((uint)&T_02C7C8,param_2);
  extraout_r0 = (ushort)uVar1;
  uVar2 = extraout_r0 + param_1;
  *param_4 = extraout_r0;
  if (uVar2 < extraout_r0) {
    uVar2 = 0xffff;
  }
  *param_3 = uVar2;
  return;
}

