
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c3fa8(char param_1,char param_2,ushort param_3,ushort param_4,ushort param_5,
                 ushort param_6,ushort param_7,char param_8,char param_9,char param_10,
                 ushort *param_11)

{
  bool bVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  ushort local_2c;
  
  if (param_1 != '\0') {
    bVar1 = false;
    if ((DAT_fffecac4 != '\x01') && (param_2 == '\x01')) {
      bVar1 = true;
    }
    if (param_5 == 0) {
      fVar6 = (float)param_4 * 0.030518044;
    }
    else {
      fVar6 = ((float)param_4 * 291.42593) / ((float)param_5 * 0.1953125);
    }
    uVar4 = _DAT_fffecac2;
    if (bVar1) {
      fVar5 = 619.1875;
      if ((fVar6 <= 619.1875) && (fVar5 = fVar6, fVar6 < -200.0)) {
        fVar5 = -200.0;
      }
      if (fVar5 <= 619.1875) {
        if (-200.0 <= fVar5) {
          local_2c = (ushort)(int)(fVar5 * 80.0 + 16000.0);
        }
        else {
          local_2c = 0;
        }
      }
      else {
        local_2c = 0xffff;
      }
      uVar2 = LK_1351FC((uint)&T_02E954,(uint)param_3);
      uVar3 = (ushort)uVar2;
      if ((uint)local_2c <= (uVar2 & 0xffff)) {
        uVar3 = local_2c;
      }
      uVar2 = LK_1351FC((uint)&T_02E960,(uint)param_3);
      uVar4 = (ushort)uVar2;
      if ((uVar2 & 0xffff) <= (uint)uVar3) {
        uVar4 = uVar3;
      }
    }
    _DAT_fffecac0 = uVar4;
    if ((((bVar1) && (param_7 < param_3)) && (param_8 == '\0')) &&
       ((param_9 == '\0' && (param_10 == '\0')))) {
      _DAT_fffecac0 = _DAT_fffecac2;
    }
    if ((bVar1) && (param_3 < param_6)) {
      _DAT_fffecac0 = _DAT_fffecac2;
    }
  }
  *param_11 = _DAT_fffecac0;
  DAT_fffecac4 = param_2;
  _DAT_fffecac2 = _DAT_fffecac0;
  return;
}

