
/* WARNING: Removing unreachable block (ram,0x0011d9f8) */
/* WARNING: Removing unreachable block (ram,0x0011d936) */
/* WARNING: Removing unreachable block (ram,0x0011da38) */

void FUN_0011d8f4(uint param_1,int param_2,ushort param_3,undefined2 *param_4,uint *param_5,
                 int *param_6,uint *param_7,uint *param_8)

{
  uint uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = LK_1346FC((uint)&T_02FDDC,param_1 & 0xffff);
  *param_5 = uVar1;
  DAT_fffee0c0 = param_3 < 0x2ea6;
  if ((bool)DAT_fffee0c0) {
    uVar2 = 0x72;
  }
  else {
    uVar2 = 0x8b;
  }
  fVar5 = (float)(int)uVar1;
  if ((int)uVar1 < 0) {
    fVar5 = fVar5 + 4.2949673e+09;
  }
  fVar6 = 1.4551915e-11;
  fVar3 = fVar5 * 55.0 * 1.4551915e-11;
  fVar4 = (float)param_2;
  if (param_2 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  if (fVar3 == 0.0) {
    fVar3 = 524287.97;
  }
  else {
    fVar3 = (fVar4 * 377.0 * 1.4551914e-12) / fVar3;
  }
  fVar4 = 524287.97;
  if ((fVar3 <= 524287.97) && (fVar4 = fVar3, fVar3 < 0.0)) {
    fVar4 = 0.0;
  }
  if (fVar4 <= 524287.97) {
    if (0.0 <= fVar4) {
      fVar4 = fVar4 * 8192.0;
      if (2.1474836e+09 <= fVar4) {
        fVar4 = fVar4 - 4.2949673e+09;
      }
      uVar1 = (uint)fVar4;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  *param_7 = uVar1;
  uVar1 = LK_1347A4((uint)&T_02FDE8,uVar1);
  *param_8 = uVar1;
  fVar6 = fVar5 * 1.402142e+07 * fVar6;
  fVar5 = (float)(int)uVar1;
  if ((int)uVar1 < 0) {
    fVar5 = fVar5 + 4.2949673e+09;
  }
  fVar3 = ((float)uVar2 * fVar6 * fVar5 * 4.7683716e-07) / 0.046020508;
  fVar5 = 255.9961;
  if ((fVar3 <= 255.9961) && (fVar5 = fVar3, fVar3 < 0.0)) {
    fVar5 = 0.0;
  }
  if (fVar5 <= 255.9961) {
    if (0.0 <= fVar5) {
      *param_4 = (short)(int)(fVar5 * 256.0);
    }
    else {
      *param_4 = 0;
    }
  }
  else {
    *param_4 = 0xffff;
  }
  if (511.99997 < fVar6) {
    fVar6 = 511.99997;
  }
  if (fVar6 <= 511.99997) {
    fVar6 = fVar6 * 8388608.0;
    if (2.1474836e+09 <= fVar6) {
      fVar6 = fVar6 - 4.2949673e+09;
    }
    *param_6 = (int)fVar6;
  }
  else {
    *param_6 = -1;
  }
  return;
}

