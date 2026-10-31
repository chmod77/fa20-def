
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00103cf4(char param_1,uint param_2,uint param_3,char param_4,char param_5,uint param_6,
                 char param_7,undefined2 *param_8,undefined2 *param_9,undefined2 *param_10)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_1 == '\0') {
    DAT_fffed9e8 = '\0';
  }
  else {
    param_6 = param_6 & 0xffff;
    param_2 = param_2 & 0xffff;
    param_3 = param_3 & 0xffff;
    if (DAT_fffed9e8 == '\0') {
      DAT_fffed9e9 = '\0';
      DAT_fffed9e8 = '\x01';
    }
    bVar1 = param_5 != '\0';
    if (((param_4 == '\x02') || (param_4 == '\x03')) || (bVar1)) {
      if ((bVar1) || (param_4 != '\x02')) {
        if (bVar1) {
          if ((param_4 == '\x02') || (param_4 == '\x03')) {
            if (param_4 == '\x02') {
              uVar2 = LK_133F40((uint)&T_02FAA8,param_6);
            }
            else {
              uVar2 = LK_133F40((uint)&T_02FAB4,param_6);
            }
          }
          else {
            uVar2 = LK_133F40((uint)&T_02FA9C,param_6);
          }
        }
        else {
          uVar2 = LK_133F40((uint)&T_02FA90,param_6);
        }
      }
      else {
        uVar2 = LK_133F40((uint)&T_02FA84,param_6);
      }
    }
    else {
      uVar2 = LK_133F40((uint)&T_02FA78,param_6);
    }
    if (param_7 == '\0') {
      uVar3 = (int)_DAT_fffed9e6 + 0x1a;
      puVar5 = (undefined *)(uVar3 & 0xffff);
      if (puVar5 < &UNK_0000001a) {
        uVar3 = 0xffffffff;
        puVar5 = &DAT_0000ffff;
      }
      uVar4 = 0xffffffff;
      if (puVar5 < &DAT_0000ffff) {
        uVar4 = uVar3;
      }
    }
    else {
      uVar4 = 0xffff8000;
    }
    if (((param_4 == '\x02') || (param_4 == '\x03')) || (bVar1)) {
      if ((bVar1) || (param_4 != '\x02')) {
        if (bVar1) {
          if ((param_4 == '\x02') || (param_4 == '\x03')) {
            if (param_4 == '\x02') {
              uVar3 = LK_1364B8((uint)&T_02FA50,param_2,param_3);
            }
            else {
              uVar3 = LK_1364B8((uint)&T_02FA64,param_2,param_3);
            }
          }
          else {
            uVar3 = LK_1364B8((uint)&T_02FA3C,param_2,param_3);
          }
        }
        else {
          uVar3 = LK_1364B8((uint)&T_02FA28,param_2,param_3);
        }
      }
      else {
        uVar3 = LK_1364B8((uint)&T_02FA14,param_2,param_3);
      }
    }
    else {
      uVar3 = LK_1364B8((uint)&T_02FA00,param_2,param_3);
    }
    if (DAT_fffed9e9 == '\0') {
      uVar4 = 0xffffffff;
    }
    _DAT_fffed9e4 = (undefined2)uVar4;
    if ((uVar2 & 0xffff) < (uVar4 & 0xffff)) {
      uVar4 = uVar2 & 0xffff;
    }
    _DAT_fffed9e2 = (undefined2)uVar4;
    _DAT_fffed9e0 = _DAT_fffed9e2;
    if ((uVar3 & 0xffff) < (uVar4 & 0xffff)) {
      _DAT_fffed9e0 = (short)uVar3;
    }
    DAT_fffed9e9 = '\x01';
  }
  if (param_1 == '\0') {
    *param_8 = 0;
    *param_9 = 0xffff;
  }
  else {
    *param_8 = _DAT_fffed9e0;
    *param_9 = _DAT_fffed9e2;
  }
  _DAT_fffed9e6 = 0xffff;
  if (param_1 != '\0') {
    _DAT_fffed9e6 = _DAT_fffed9e4;
  }
  *param_10 = _DAT_fffed9e6;
  return;
}

