
void FUN_0011d374(uint param_1,ushort param_2,ushort param_3,ushort param_4,int *param_5,
                 undefined2 *param_6)

{
  uint uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = LK_134070((uint)&T_02FD94,param_1);
  *param_6 = (short)uVar1;
  uVar2 = 0;
  if (param_4 <= param_3) {
    uVar2 = param_3 - param_4;
  }
  fVar4 = (float)(uVar1 & 0xffff) * (float)param_2 * (float)uVar2 * 1.4901161e-08;
  fVar3 = 16777216.0;
  if (fVar4 <= 16777216.0) {
    fVar3 = fVar4;
  }
  fVar3 = fVar3 * 256.0;
  if (2.1474836e+09 <= fVar3) {
    fVar3 = fVar3 - 4.2949673e+09;
  }
  *param_5 = (int)fVar3;
  return;
}

