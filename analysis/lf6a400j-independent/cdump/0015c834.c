
/* WARNING: Removing unreachable block (ram,0x0015c8d0) */
/* WARNING: Removing unreachable block (ram,0x0015c8fe) */
/* WARNING: Removing unreachable block (ram,0x0015c916) */
/* WARNING: Removing unreachable block (ram,0x0015c91a) */
/* WARNING: Removing unreachable block (ram,0x0015c920) */
/* WARNING: Removing unreachable block (ram,0x0015c924) */
/* WARNING: Removing unreachable block (ram,0x0015c928) */
/* WARNING: Removing unreachable block (ram,0x0015c902) */
/* WARNING: Removing unreachable block (ram,0x0015c908) */
/* WARNING: Removing unreachable block (ram,0x0015c90c) */
/* WARNING: Removing unreachable block (ram,0x0015c8d4) */
/* WARNING: Removing unreachable block (ram,0x0015c8da) */
/* WARNING: Removing unreachable block (ram,0x0015c8de) */
/* WARNING: Removing unreachable block (ram,0x0015c8e4) */
/* WARNING: Removing unreachable block (ram,0x0015c8ec) */
/* WARNING: Removing unreachable block (ram,0x0015c8f0) */
/* WARNING: Removing unreachable block (ram,0x0015c8f4) */
/* WARNING: Removing unreachable block (ram,0x0015c8fa) */

uint FUN_0015c834(uint param_1,uint param_2,short *param_3,short *param_4)

{
  uint uVar1;
  int iVar2;
  int b;
  short sVar3;
  short sVar4;
  
  param_2 = param_2 & 0xffff;
  uVar1 = __sdiv32_r1_by_r0(param_2,100);
  uVar1 = uVar1 & 0xffff;
  iVar2 = __sdiv32b_r1_by_r0(param_2,b);
  sVar3 = (short)iVar2;
  param_1 = param_1 & 0xff;
  if (uVar1 != 0) {
    uVar1 = uVar1 - 1;
    sVar3 = sVar3 + 100;
  }
  sVar4 = (short)uVar1;
  if (param_1 == 1) {
    param_1 = uVar1 & 0xffff;
    if (param_1 != 9) {
      if (param_1 != 10) {
        if (param_1 != 0xb) {
          if (0xb < param_1) {
            sVar4 = sVar4 + -3;
          }
          goto LAB_0015c946;
        }
        sVar4 = sVar4 + -3;
LAB_0015c934:
        param_1 = uVar1 & 0xffff;
        sVar3 = sVar3 + 300;
        goto LAB_0015c946;
      }
LAB_0015c93a:
      sVar4 = sVar4 + -2;
LAB_0015c93c:
      param_1 = uVar1 & 0xffff;
      sVar3 = sVar3 + 200;
      goto LAB_0015c946;
    }
LAB_0015c942:
    sVar4 = sVar4 + -1;
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) goto LAB_0015c946;
      param_1 = uVar1 & 0xffff;
      if (param_1 != 0x10) {
        if (param_1 != 0x11) {
          if (param_1 < 0x12) goto LAB_0015c946;
LAB_0015c912:
          param_1 = uVar1 & 0xffff;
          sVar4 = sVar4 + -2;
          goto LAB_0015c946;
        }
        goto LAB_0015c93a;
      }
      goto LAB_0015c942;
    }
    param_1 = uVar1 & 0xffff;
    if (param_1 == 4) goto LAB_0015c942;
    if (param_1 == 5) goto LAB_0015c93a;
    if (param_1 < 6) goto LAB_0015c946;
    if (param_1 < 0x15) goto LAB_0015c912;
    if (param_1 != 0x15) {
      if (param_1 != 0x16) {
        if (param_1 != 0x17) goto LAB_0015c946;
        sVar4 = sVar4 + -5;
        goto LAB_0015c934;
      }
      sVar4 = sVar4 + -4;
      goto LAB_0015c93c;
    }
    sVar4 = sVar4 + -3;
  }
  param_1 = uVar1 & 0xffff;
  sVar3 = sVar3 + 100;
LAB_0015c946:
  *param_3 = sVar4;
  *param_4 = sVar3;
  return param_1;
}

