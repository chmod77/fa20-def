
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000902cc(char param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                 undefined2 *param_6)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  
  if (param_1 != '\0') {
    uVar1 = LK_1361C8((uint)&T_02D118,param_2 & 0xff,param_3 & 0xffff);
    uVar4 = (param_5 & 0xffff) * (uVar1 & 0xffff) >> 0x10;
    uVar1 = LK_1361C8((uint)&T_02D104,param_2 & 0xff,param_3 & 0xffff);
    uVar2 = LK_13503C((uint)&T_02D12C,param_4 & 0xffff);
    uVar1 = ((uVar1 & 0xffff) * ((-((param_5 & 0xffff) >> 8) & 0xffff) + 0x100 & 0xffff) >> 8 &
            0xffff) * (uVar2 & 0xff);
    puVar3 = &DAT_0000ffff;
    if (uVar1 < 0x7fff81) {
      puVar3 = (undefined *)(uVar1 >> 7);
    }
    _DAT_fffebd70 = SUB42(puVar3 + uVar4,0);
    if (((uint)(puVar3 + uVar4) & 0xffff) < uVar4) {
      _DAT_fffebd70 = 0xffff;
    }
  }
  *param_6 = _DAT_fffebd70;
  return;
}

