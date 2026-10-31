
void FUN_000d8638(short param_1,uint param_2,short param_3,ushort *param_4)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = LK_133F40((uint)&T_02EE00,param_2);
  if (DAT_fffecf64 == '\0') {
    param_3 = param_1;
  }
  uVar2 = param_3 - 1;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  if (uVar2 < (ushort)uVar1) {
    *param_4 = uVar2;
  }
  else {
    *param_4 = (ushort)uVar1;
  }
  DAT_fffecf64 = 1;
  return;
}

