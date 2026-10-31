
/* WARNING: Removing unreachable block (ram,0x00091620) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00091590(char param_1,uint param_2,uint param_3,uint param_4,char param_5,uint param_6,
                 uint param_7,uint param_8,char param_9,uint param_10,uint *param_11,
                 undefined1 *param_12,undefined2 *param_13)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (param_5 != '\0') {
    if ((param_1 == '\x01') || (param_1 == '\x02')) {
      param_8 = param_7;
    }
    if (((param_1 != '\0') && (param_2 = param_3, param_1 != '\x01')) &&
       (param_2 = 0, param_1 == '\x02')) {
      param_2 = param_4;
    }
    _DAT_fffebdcc = (undefined2)param_2;
    uVar1 = LK_13A54C((uint)&T_02D2F0,param_2,param_6 & 0xff);
    DAT_fffebdce = (undefined1)uVar1;
    uVar1 = (uVar1 & 0xff) * (param_2 & 0xffff);
    uVar2 = (param_10 & 0xffff) * (uVar1 & 0xffff);
    uVar3 = (param_10 & 0xffff) * (uVar1 >> 0x10);
    puVar4 = (undefined *)0x0;
    uVar1 = (uVar2 >> 0x10) + uVar3;
    if (uVar1 < uVar3) {
      puVar4 = &DAT_00010000;
    }
    uVar1 = uVar1 * 0x10000 + (uVar2 & 0xffff) >> 0x16 | (int)(puVar4 + (uVar1 >> 0x10)) * 0x400;
    if (param_9 == '\x03') {
      _DAT_fffebdc8 = (param_8 & 0xffff) * 10;
      if (_DAT_fffebdc8 < uVar1) {
        _DAT_fffebdc8 = uVar1;
      }
    }
    else if (param_9 == '\x02') {
      _DAT_fffebdc8 = (param_8 & 0xffff) * 10;
    }
    else {
      _DAT_fffebdc8 = 0;
    }
  }
  *param_11 = _DAT_fffebdc8;
  *param_12 = DAT_fffebdce;
  *param_13 = _DAT_fffebdcc;
  return;
}

