
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d27b8(ushort param_1,ushort *param_2,char param_3,undefined2 *param_4)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar2 = _DAT_fffecda4;
  if (param_1 < 0x2801) {
    if (*param_2 == 0) {
      uVar2 = 0;
    }
    else {
      puVar1 = (undefined *)__sdiv32_r1_by_r0(12500000,(uint)*param_2);
      if (&DAT_0000ffff < puVar1) {
        puVar1 = &DAT_0000ffff;
      }
      uVar2 = SUB42(puVar1,0);
    }
    if (param_2[1] == 0) {
      uVar3 = 0;
    }
    else {
      puVar1 = (undefined *)__sdiv32_r1_by_r0(12500000,(uint)param_2[1]);
      if (&DAT_0000ffff < puVar1) {
        puVar1 = &DAT_0000ffff;
      }
      uVar3 = SUB42(puVar1,0);
    }
    if (param_2[2] == 0) {
      uVar4 = 0;
    }
    else {
      puVar1 = (undefined *)__sdiv32_r1_by_r0(12500000,(uint)param_2[2]);
      if (&DAT_0000ffff < puVar1) {
        puVar1 = &DAT_0000ffff;
      }
      uVar4 = SUB42(puVar1,0);
    }
    puVar1 = (undefined *)0x0;
    if ((param_2[3] != 0) &&
       (puVar1 = (undefined *)__sdiv32_r1_by_r0(12500000,(uint)param_2[3]), &DAT_0000ffff < puVar1))
    {
      puVar1 = &DAT_0000ffff;
    }
    _DAT_fffecda2 = SUB42(puVar1,0);
    _DAT_fffecd9c = uVar2;
    if (param_3 != '\0') {
      _DAT_fffecd9c = _DAT_fffecdaa;
    }
    _DAT_fffecd9e = uVar3;
    if (param_3 != '\x01') {
      _DAT_fffecd9e = _DAT_fffecda8;
    }
    _DAT_fffecda0 = uVar4;
    if (param_3 != '\x02') {
      _DAT_fffecda0 = _DAT_fffecda6;
    }
    uVar2 = _DAT_fffecda2;
    _DAT_fffecda6 = _DAT_fffecda0;
    _DAT_fffecda8 = _DAT_fffecd9e;
    _DAT_fffecdaa = _DAT_fffecd9c;
    if (param_3 != '\x03') {
      _DAT_fffecda2 = _DAT_fffecda4;
      uVar2 = _DAT_fffecda4;
    }
  }
  _DAT_fffecda4 = uVar2;
  *param_4 = _DAT_fffecd9c;
  param_4[1] = _DAT_fffecd9e;
  param_4[2] = _DAT_fffecda0;
  param_4[3] = _DAT_fffecda2;
  return;
}

