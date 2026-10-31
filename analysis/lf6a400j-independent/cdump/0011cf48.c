
void FUN_0011cf48(uint param_1,uint param_2,uint param_3,int param_4,ushort param_5,int *param_6,
                 uint *param_7,uint *param_8,int *param_9)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = LK_1346FC((uint)&T_02FD7C,param_3 & 0xffff);
  *param_8 = uVar1;
  if ((param_2 & 0xffff) * 1000 < (param_1 & 0xffff) * 1000) {
    iVar2 = __udiv32_r1_by_r0((param_1 & 0xffff) * 4000,0x7d);
  }
  else {
    iVar2 = __udiv32_r1_by_r0((param_2 & 0xffff) * 4000,0x7d);
  }
  *param_9 = iVar2;
  uVar3 = (uint)(iVar2 * 0x27) >> 8;
  *param_7 = uVar3;
  if (iVar2 == 0) {
    fVar4 = 127.99999;
  }
  else {
    uVar1 = uVar3 - uVar1;
    if (((int)-(uint)(uVar3 < uVar1) < -1) ||
       ((-(uint)(uVar3 < uVar1) == -1 && (uVar1 < 0x80000000)))) {
      uVar1 = 0x80000000;
    }
    fVar4 = (float)param_4;
    if (param_4 < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    fVar5 = (float)iVar2;
    if (iVar2 < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    fVar4 = ((float)param_5 * fVar4 * 162.0 * (float)(int)uVar1 * 6.9388934e-16) /
            (fVar5 * 0.12207031);
  }
  fVar5 = 127.99999;
  if ((fVar4 <= 127.99999) && (fVar5 = fVar4, fVar4 < -128.0)) {
    fVar5 = -128.0;
  }
  iVar2 = 0x7fffffff;
  if ((fVar5 <= 127.99999) && (iVar2 = -0x80000000, -128.0 <= fVar5)) {
    iVar2 = (int)(fVar5 * 16777216.0);
  }
  if (iVar2 < 1) {
    *param_6 = 0;
  }
  else {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    *param_6 = iVar2;
  }
  return;
}

