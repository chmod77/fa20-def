
void FUN_000ebd2c(uint param_1,uint param_2,undefined2 *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = LK_133BCC((uint)&T_02F2E0,param_2);
  fVar3 = (float)(uVar1 & 0xff) * (float)(int)((param_1 & 0xffff) - 0x2000) * 9.536743e-07 + 1.0;
  fVar2 = 7.999878;
  if ((fVar3 <= 7.999878) && (fVar2 = fVar3, fVar3 < 0.0)) {
    fVar2 = 0.0;
  }
  if (fVar2 <= 7.999878) {
    if (0.0 <= fVar2) {
      *param_3 = (short)(int)(fVar2 * 8192.0);
    }
    else {
      *param_3 = 0;
    }
  }
  else {
    *param_3 = 0xffff;
  }
  return;
}

