
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_0008ddc8(uint param_1,uint param_2,uint param_3,uint param_4,short param_5,char param_6,
                 char param_7,char param_8,char param_9,undefined2 *param_10)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  param_5 = param_5 >> 3;
  if (param_9 == '\x01') {
    puVar3 = (undefined *)((int)param_5 + (param_4 >> 3));
    if ((int)puVar3 < (int)&DAT_00010000) {
      if ((int)puVar3 < 0) {
        puVar3 = (undefined *)0x0;
      }
    }
    else {
      puVar3 = &DAT_0000ffff;
    }
  }
  else {
    puVar3 = (undefined *)(int)_DAT_fffebcb0;
  }
  if (param_8 == '\x01') {
    puVar2 = (undefined *)((int)param_5 + (param_3 >> 3));
    puVar3 = &DAT_0000ffff;
    if (((int)puVar2 < (int)&DAT_00010000) && (puVar3 = puVar2, (int)puVar2 < 0)) {
      puVar3 = (undefined *)0x0;
    }
  }
  _DAT_fffebcb0 = (short)puVar3;
  if (param_7 == '\x01') {
    iVar1 = (int)param_5 + (param_2 >> 3);
    _DAT_fffebcb0 = 0xffff;
    if (iVar1 < (int)&DAT_00010000) {
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      _DAT_fffebcb0 = (short)iVar1;
    }
  }
  if (param_6 == '\x01') {
    iVar1 = (int)param_5 + (param_1 >> 3);
    if (iVar1 < (int)&DAT_00010000) {
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      _DAT_fffebcb0 = (short)iVar1;
    }
    else {
      _DAT_fffebcb0 = 0xffff;
    }
  }
  *param_10 = _DAT_fffebcb0;
  return param_6;
}

