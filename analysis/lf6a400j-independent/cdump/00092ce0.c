
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00092ce0(ushort param_1,int param_2,short param_3,ushort param_4,char param_5,uint param_6,
                 char param_7,char param_8,char param_9,char param_10,byte param_11,ushort param_12,
                 char param_13,int param_14,undefined4 *param_15)

{
  uint uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  float fVar6;
  float fVar7;
  
  if (0x5000 < param_1) goto LAB_00092e52;
  uVar2 = 0;
  if (param_11 != 0) {
    uVar2 = _DAT_fffebe44;
  }
  if (DAT_fffebe46 < param_11) {
    uVar2 = param_12;
  }
  if (param_5 == '\0') {
    if ((param_10 == '\x04') && (param_11 != 0)) {
      fVar6 = (float)uVar2;
      fVar7 = 0.012499999;
    }
    else {
      fVar6 = (float)param_2;
      if (param_2 < 0) {
        fVar6 = fVar6 + 4.2949673e+09;
      }
      fVar7 = 0.0031249998;
    }
    fVar7 = fVar6 * (float)param_4 * fVar7 + (float)(int)param_3 * 0.79999995;
    fVar6 = 13421772.0;
    if ((fVar7 <= 13421772.0) && (fVar6 = fVar7, fVar7 < 0.0)) {
      fVar6 = 0.0;
    }
    if (fVar6 <= 3.4359736e+09) {
      if (0.0 <= fVar6) {
        fVar6 = fVar6 * 1.25;
        if (2.1474836e+09 <= fVar6) {
          fVar6 = fVar6 - 4.2949673e+09;
        }
        puVar3 = (undefined1 *)(int)fVar6;
      }
      else {
        puVar3 = (undefined1 *)0x0;
      }
    }
    else {
      puVar3 = (undefined1 *)0xffffffff;
    }
    puVar5 = (undefined1 *)(param_6 & 0xffff);
    if ((undefined1 *)(param_6 & 0xffff) < puVar3) {
      puVar5 = puVar3;
    }
  }
  else {
    puVar5 = (undefined1 *)0x0;
  }
  if ((undefined *)0x1312cf < puVar5) {
    puVar5 = &LAB_001312d0;
  }
  if (param_9 == '\0') {
    if (param_13 == '\x02') {
      uVar4 = 0;
      uVar1 = __udiv32_r1_by_r0(param_14,10);
      if (uVar1 <= uVar4) goto LAB_00092e42;
    }
    _DAT_fffebe40 = puVar5;
    if ((param_8 != '\0') && ((param_7 == '\x06' || (param_7 == '\b')))) goto LAB_00092e42;
  }
  else {
LAB_00092e42:
    _DAT_fffebe40 = (undefined1 *)0x0;
  }
  DAT_fffebe46 = param_11;
  _DAT_fffebe44 = uVar2;
LAB_00092e52:
  if (0x5000 < param_1) {
    *param_15 = 0;
  }
  else {
    *param_15 = _DAT_fffebe40;
  }
  return;
}

