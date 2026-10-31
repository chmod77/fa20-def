
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009d68c(char param_1,char param_2,ushort param_3,byte param_4,byte param_5,char param_6,
                 uint param_7,uint param_8,uint param_9,char param_10,uint param_11,
                 undefined2 *param_12)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte local_28;
  
  if (param_1 != '\x01') {
    uVar2 = (param_11 & 0xffff) >> 7;
    uVar3 = uVar2 - 8;
    if (uVar2 < 8) {
      local_28 = 0;
    }
    else if ((uVar3 & 0xffff) < 0x100) {
      local_28 = (byte)uVar3;
    }
    else {
      local_28 = 0xff;
    }
    bVar1 = false;
    uVar2 = LK_1346FC((uint)&T_02D970,param_9 & 0xffff);
    if (((((param_8 <= uVar2) && (param_2 != '\0')) && (0x4dfd < param_3)) &&
        ((param_4 < 2 && (param_10 == '\x01')))) && (local_28 <= param_5)) {
      bVar1 = true;
    }
    if ((param_6 == '\0') && (bVar1)) {
      uVar2 = LK_133BCC((uint)&T_02D958,param_7 & 0xffff);
      _DAT_fffec028 = (undefined2)((uVar2 & 0xff) << 7);
    }
    else {
      if ((param_6 == '\x01') && (bVar1)) {
        uVar2 = LK_133BCC((uint)&T_02D94C,param_7 & 0xffff);
        uVar2 = uVar2 & 0xff;
      }
      else if ((param_6 == '\x02') && (bVar1)) {
        uVar2 = LK_133BCC((uint)&T_02D964,param_7 & 0xffff);
        uVar2 = uVar2 & 0xff;
      }
      else {
        uVar2 = 0;
      }
      _DAT_fffec028 = (undefined2)(uVar2 << 7);
    }
  }
  *param_12 = _DAT_fffec028;
  return;
}

