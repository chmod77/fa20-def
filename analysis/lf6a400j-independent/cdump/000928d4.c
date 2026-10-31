
void FUN_000928d4(int param_1,short param_2,ushort param_3,char param_4,uint param_5,char param_6,
                 char param_7,char param_8,char param_9,int param_10,undefined4 *param_11)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  float fVar5;
  float fVar6;
  
  if (param_4 == '\0') {
    fVar5 = (float)param_1;
    if (param_1 < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    fVar6 = (float)(int)param_2 * 0.79999995 + fVar5 * (float)param_3 * 0.0031249998;
    fVar5 = 13421772.0;
    if ((fVar6 <= 13421772.0) && (fVar5 = fVar6, fVar6 < 0.0)) {
      fVar5 = 0.0;
    }
    if (fVar5 <= 3.4359736e+09) {
      if (0.0 <= fVar5) {
        fVar5 = fVar5 * 1.25;
        if (2.1474836e+09 <= fVar5) {
          fVar5 = fVar5 - 4.2949673e+09;
        }
        puVar2 = (undefined1 *)(int)fVar5;
      }
      else {
        puVar2 = (undefined1 *)0x0;
      }
    }
    else {
      puVar2 = (undefined1 *)0xffffffff;
    }
    puVar4 = (undefined1 *)(param_5 & 0xffff);
    if ((undefined1 *)(param_5 & 0xffff) < puVar2) {
      puVar4 = puVar2;
    }
  }
  else {
    puVar4 = (undefined1 *)0x0;
  }
  if ((undefined *)0x1312cf < puVar4) {
    puVar4 = &LAB_001312d0;
  }
  if (param_8 == '\0') {
    if (param_9 == '\x02') {
      uVar3 = 0;
      uVar1 = __udiv32_r1_by_r0(param_10,10);
      if (uVar1 <= uVar3) goto LAB_000929b0;
    }
    if ((param_7 == '\0') || ((param_6 != '\x05' && (param_6 != '\b')))) {
      *param_11 = puVar4;
      return;
    }
  }
LAB_000929b0:
  *param_11 = 0;
  return;
}

