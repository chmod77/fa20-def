
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ade98(char param_1,uint param_2,uint param_3,ushort param_4,ushort *param_5,
                 undefined2 *param_6)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (param_1 == '\x03') {
    if (*param_5 < 0x8000) {
      uVar1 = LK_133BCC((uint)&T_02DF5C,(uint)param_4);
    }
    else {
      uVar1 = LK_133BCC((uint)&T_02DF50,(uint)param_4);
    }
    uVar2 = LK_135798((uint)&T_02DF3C,param_2 & 0xff,(param_3 & 0xffff) >> 8);
    puVar4 = (undefined *)((uVar1 & 0xff) * (uVar2 & 0xff));
    puVar3 = puVar4 + (uVar1 & 0xff) * 0x300;
    if ((puVar3 < puVar4) || (&DAT_0000ffff < puVar3)) {
      _DAT_fffec570 = 0xffff;
    }
    else {
      _DAT_fffec570 = SUB42(puVar3,0);
    }
  }
  *param_6 = _DAT_fffec570;
  return;
}

