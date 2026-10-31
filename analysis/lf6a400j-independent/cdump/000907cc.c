
/* WARNING: Removing unreachable block (ram,0x00090952) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000907cc(char param_1,uint param_2,uint param_3,ushort param_4,uint param_5,char param_6,
                 char param_7,uint param_8,uint param_9,char param_10,ushort *param_11)

{
  bool bVar1;
  bool bVar2;
  char cVar7;
  uint uVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  ushort uVar8;
  
  cVar7 = (char)param_4;
  param_2 = param_2 & 0xffff;
  param_3 = param_3 & 0xff;
  uVar3 = LK_139C18((uint)&T_02D1D4,param_2,param_3);
  uVar8 = (ushort)uVar3;
  if (param_10 == '\0') {
    uVar3 = LK_139C18((uint)&T_02D1C0,param_2,param_3);
    uVar4 = LK_13852C((uint)&T_02D1FC,param_8 & 0xff,param_9 & 0xff);
    iVar5 = __sdiv32_r1_by_r0((uVar4 & 0xff) * (int)(short)uVar3,0xff);
    sVar6 = (short)iVar5;
    param_4 = uVar8 + sVar6;
    if ((((short)uVar8 < 0) || (sVar6 < 0)) || (-1 < (short)param_4)) {
      if ((((short)uVar8 < 0) && (sVar6 < 0)) && (-1 < (short)param_4)) {
        param_4 = 0x8000;
      }
    }
    else {
      param_4 = 0x7fff;
    }
  }
  bVar1 = false;
  if (param_1 == '\x03') {
    bVar1 = _DAT_fffebd84 < 0x1e;
    sVar6 = -1;
    if (_DAT_fffebd84 != 0xffff) {
      sVar6 = _DAT_fffebd84 + 1;
    }
  }
  else {
    _DAT_fffebd84 = 0;
    sVar6 = _DAT_fffebd84;
  }
  _DAT_fffebd84 = sVar6;
  bVar2 = true;
  if ((param_1 != '\x02') && (param_1 != '\x03')) {
    bVar2 = false;
  }
  if (bVar2) {
    if ((param_1 == '\x02') || (bVar1)) {
      uVar3 = LK_139FA4((uint)&T_02D1E8,param_2,param_5 & 0xffff);
      uVar8 = (ushort)uVar3;
    }
    else if (((param_6 == '\0') && (param_7 == '\0')) && (uVar8 = param_4, param_10 != '\0')) {
      uVar3 = LK_139C18((uint)&T_02D1AC,param_2,param_3);
      uVar8 = (ushort)uVar3;
    }
    if (((short)uVar8 < 1) || (uVar8 < 0x438)) {
      if (((short)uVar8 < 0) || (uVar8 < 0x168)) {
        uVar8 = 0x168;
      }
    }
    else {
      uVar8 = 0x437;
    }
  }
  else {
    uVar8 = 0x79e;
  }
  if ((bVar2) && (cVar7 != '\0')) {
    *param_11 = 0x168;
  }
  else {
    *param_11 = uVar8;
  }
  return;
}

