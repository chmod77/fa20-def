
/* WARNING: Removing unreachable block (ram,0x000914f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00091450(char param_1,uint param_2,uint param_3,uint param_4,char param_5,uint param_6,
                 uint param_7,uint param_8,char param_9,uint param_10,uint *param_11,
                 undefined1 *param_12,undefined2 *param_13)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_5 != '\0') {
    bVar1 = true;
    if ((param_1 != '\x01') && (param_1 != '\x02')) {
      bVar1 = false;
    }
    if (bVar1) {
      param_8 = param_7;
    }
    if (((param_1 != '\0') && (param_2 = param_3, param_1 != '\x01')) &&
       (param_2 = 0, param_1 == '\x02')) {
      param_2 = param_4;
    }
    _DAT_fffebdc4 = (undefined2)param_2;
    uVar2 = LK_13A54C((uint)&T_02D2DC,param_2,param_6 & 0xff);
    DAT_fffebdc6 = (undefined1)uVar2;
    uVar2 = (uVar2 & 0xff) * (param_2 & 0xffff);
    if (bVar1) {
      uVar3 = (param_10 & 0xffff) * (uVar2 & 0xffff);
      uVar4 = (param_10 & 0xffff) * (uVar2 >> 0x10);
      puVar5 = (undefined *)0x0;
      uVar2 = (uVar3 >> 0x10) + uVar4;
      if (uVar2 < uVar4) {
        puVar5 = &DAT_00010000;
      }
      uVar2 = uVar2 * 0x10000 + (uVar3 & 0xffff) >> 0x16 | (int)(puVar5 + (uVar2 >> 0x10)) * 0x400;
    }
    else {
      uVar2 = uVar2 >> 7;
    }
    if (param_9 == '\x03') {
      _DAT_fffebdc0 = (param_8 & 0xffff) * 10;
      if (_DAT_fffebdc0 < uVar2) {
        _DAT_fffebdc0 = uVar2;
      }
    }
    else if (param_9 == '\x02') {
      _DAT_fffebdc0 = (param_8 & 0xffff) * 10;
    }
    else {
      _DAT_fffebdc0 = 0;
    }
  }
  *param_11 = _DAT_fffebdc0;
  *param_12 = DAT_fffebdc6;
  *param_13 = _DAT_fffebdc4;
  return;
}

