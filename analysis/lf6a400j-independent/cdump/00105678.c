
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00105678(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 byte param_7,byte param_8,char param_9,char param_10,char param_11,char param_12,
                 char param_13,char param_14,char param_15,short param_16,byte param_17,
                 uint param_18,byte param_19,uint param_20,byte param_21,byte param_22,
                 ushort param_23,undefined2 *param_24)

{
  uint uVar1;
  ushort uVar4;
  uint uVar2;
  uint uVar3;
  undefined *puVar5;
  uint uVar6;
  undefined *p1;
  undefined *puVar7;
  
  if (param_1 == '\0') {
    DAT_fffeda76 = '\0';
  }
  else {
    if (DAT_fffeda76 == '\0') {
      _DAT_fffeda72 = 0;
      DAT_fffeda7a = 0;
      _DAT_fffeda70 = 0;
      DAT_fffeda79 = 0;
      DAT_fffeda76 = '\x01';
    }
    p1 = (undefined *)(param_18 & 0xffff);
    uVar1 = LK_133F40((uint)&T_02FAF0,(uint)p1);
    uVar4 = (ushort)uVar1;
    uVar2 = LK_133F40((uint)&T_02FB08,(uint)p1);
    uVar2 = uVar2 & 0xffff;
    if (((param_7 == 0) || (DAT_fffeda78 == 0)) && ((param_19 == 0 || (DAT_fffeda74 == 0)))) {
      uVar6 = (uint)(short)_DAT_fffeda6e;
    }
    else {
      uVar3 = (int)(short)_DAT_fffeda6e + uVar2;
      puVar5 = (undefined *)(uVar3 & 0xffff);
      if (puVar5 < (undefined *)(uint)_DAT_fffeda6e) {
        uVar3 = 0xffffffff;
        puVar5 = &DAT_0000ffff;
      }
      uVar6 = param_18 + uVar2;
      puVar7 = (undefined *)(uVar6 & 0xffff);
      if (puVar7 < p1) {
        uVar6 = 0xffffffff;
        puVar7 = &DAT_0000ffff;
      }
      if (puVar7 <= puVar5) {
        uVar6 = uVar3;
      }
      if ((param_20 & 0xffff) < (uVar6 & 0xffff)) {
        uVar6 = param_20;
      }
    }
    if ((DAT_fffeda78 < param_7) || (DAT_fffeda74 < param_19)) {
      uVar2 = (int)(short)_DAT_fffeda6e + uVar2;
      puVar5 = (undefined *)(uVar2 & 0xffff);
      if (puVar5 < (undefined *)(uint)_DAT_fffeda6e) {
        uVar2 = 0xffffffff;
        puVar5 = &DAT_0000ffff;
      }
      uVar6 = LK_133F40((uint)&T_02FAFC,(uint)p1);
      uVar6 = param_18 + uVar6;
      puVar7 = (undefined *)(uVar6 & 0xffff);
      if (puVar7 < p1) {
        uVar6 = 0xffffffff;
        puVar7 = &DAT_0000ffff;
      }
      if (puVar7 <= puVar5) {
        uVar6 = uVar2;
      }
      if ((param_20 & 0xffff) < (uVar6 & 0xffff)) {
        uVar6 = param_20;
      }
    }
    if (((param_8 != 0) && (DAT_fffeda77 != 0)) || ((param_17 != 0 && (DAT_fffeda75 != 0)))) {
      uVar2 = 0;
      if ((undefined *)(uVar1 & 0xffff) <= (undefined *)(uint)_DAT_fffeda6e) {
        uVar2 = (int)(short)_DAT_fffeda6e - (int)(short)uVar4;
      }
      uVar6 = 0;
      if ((undefined *)(uVar1 & 0xffff) <= p1) {
        uVar6 = param_18 - (int)(short)uVar4;
      }
      if ((uVar2 & 0xffff) <= (uVar6 & 0xffff)) {
        uVar6 = uVar2;
      }
    }
    if ((DAT_fffeda77 < param_8) || (DAT_fffeda75 < param_17)) {
      uVar6 = 0;
      if (uVar4 <= _DAT_fffeda6e) {
        uVar6 = (int)(short)_DAT_fffeda6e - (int)(short)uVar4;
      }
      uVar1 = LK_133F40((uint)&T_02FAE4,(uint)p1);
      uVar2 = 0;
      if ((undefined *)(uVar1 & 0xffff) <= p1) {
        uVar2 = param_18 - (int)(uVar1 & 0xffff);
      }
      if ((uVar2 & 0xffff) < (uVar6 & 0xffff)) {
        uVar6 = uVar2;
      }
    }
    uVar4 = 0;
    if (_DAT_fffeda72 < param_23) {
      uVar4 = _DAT_fffeda72;
    }
    _DAT_fffeda72 = uVar4;
    if ((param_21 != 0) && (_DAT_fffeda72 = 0xffff, uVar4 != 0xffff)) {
      _DAT_fffeda72 = uVar4 + 1;
    }
    if (DAT_fffeda7a < param_21) {
      _DAT_fffeda72 = param_23;
    }
    if (param_21 == 0) {
      _DAT_fffeda72 = 0;
    }
    uVar4 = 0;
    if (_DAT_fffeda70 < param_23) {
      uVar4 = _DAT_fffeda70;
    }
    _DAT_fffeda70 = uVar4;
    if ((param_22 != 0) && (_DAT_fffeda70 = 0xffff, uVar4 != 0xffff)) {
      _DAT_fffeda70 = uVar4 + 1;
    }
    if (DAT_fffeda79 < param_22) {
      _DAT_fffeda70 = param_23;
    }
    if (param_22 == 0) {
      _DAT_fffeda70 = 0;
    }
    if (((((((param_4 != '\0') || (param_5 != '\0')) || (param_6 != '\0')) ||
          ((param_7 < DAT_fffeda78 || (param_8 < DAT_fffeda77)))) ||
         ((param_9 != '\0' && (param_10 == '\0')))) ||
        (((((param_9 != '\0' && (param_8 == 0)) && (param_7 == 0)) && (param_10 != '\0')) ||
         ((param_11 != '\0' && (param_10 == '\0')))))) ||
       ((((param_11 != '\0' && (((param_8 == 0 && (param_7 == 0)) && (param_10 != '\0')))) ||
         ((param_12 != '\0' || (param_13 != '\0')))) ||
        ((param_14 != '\0' ||
         (((param_15 != '\0' || (param_23 <= _DAT_fffeda72)) || (param_23 <= _DAT_fffeda70)))))))) {
      uVar6 = (uint)param_16;
    }
    if ((param_2 != '\0') || (param_3 == '\0')) {
      uVar6 = 0;
    }
    if (0x6745 < (uVar6 & 0xffff)) {
      uVar6 = 0x6746;
    }
    if ((uVar6 & 0xffff) == 0) {
      _DAT_fffeda6c = 0;
    }
    else {
      _DAT_fffeda6c = (undefined2)uVar6;
    }
    DAT_fffeda7a = param_21;
    DAT_fffeda79 = param_22;
  }
  _DAT_fffeda6e = 0;
  if (param_1 != '\0') {
    _DAT_fffeda6e = _DAT_fffeda6c;
  }
  *param_24 = _DAT_fffeda6e;
  DAT_fffeda78 = param_7;
  DAT_fffeda77 = param_8;
  DAT_fffeda75 = param_17;
  DAT_fffeda74 = param_19;
  return;
}

