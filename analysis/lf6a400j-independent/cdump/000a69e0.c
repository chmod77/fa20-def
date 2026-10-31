
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a69e0(uint param_1,short param_2,uint param_3,uint param_4,uint param_5,short param_6,
                 undefined2 *param_7)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined2 uVar4;
  
  puVar2 = (undefined *)
           ((int)param_2 + (param_1 & 0xffff) + (param_3 & 0xffff) + (param_5 & 0xffff) +
            (param_4 & 0xffff) + (int)param_6);
  puVar3 = &DAT_0000ffff;
  if (((int)puVar2 < (int)&DAT_00010000) && (puVar3 = puVar2, (int)puVar2 < 0)) {
    puVar3 = (undefined *)0x0;
  }
  uVar4 = SUB42(puVar3,0);
  uVar1 = 0;
  if (0xfffe < _DAT_fffec3e8) {
    uVar1 = (int)(short)_DAT_fffec3e8 + 1;
  }
  if (((uint)puVar3 & 0xffff) <= (uVar1 & 0xffff)) {
    uVar4 = (undefined2)uVar1;
  }
  *param_7 = uVar4;
  _DAT_fffec3e8 = uVar4;
  return;
}

