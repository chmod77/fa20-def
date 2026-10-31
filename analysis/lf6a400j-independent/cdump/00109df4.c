
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00109df4(char param_1,byte param_2,char param_3,char param_4,uint param_5,uint param_6,
                 uint param_7,ushort param_8,char param_9,undefined2 param_10,ushort param_11,
                 undefined1 *param_12)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  
  bVar1 = false;
  if ((param_1 != '\0') && (DAT_fffedc20 != '\0')) {
    bVar1 = true;
  }
  if (bVar1) {
    bVar3 = true;
    if ((((param_3 == '\0') && (DAT_fffedc22 == '\0')) && (param_4 == '\0')) &&
       (DAT_fffedc21 == '\0')) {
      bVar3 = false;
    }
    iVar6 = (param_5 & 0xffff) - (param_6 & 0xffff);
    if (iVar6 < 0x8000) {
      if (iVar6 < -0x8000) {
        iVar6 = -0x8000;
      }
    }
    else {
      iVar6 = 0x7fff;
    }
    uVar4 = (uint)(short)iVar6;
    if ((int)uVar4 < 0) {
      uVar4 = -uVar4;
    }
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    iVar6 = (param_5 & 0xffff) - (param_7 & 0xffff);
    sVar7 = 0x7fff;
    if ((iVar6 < 0x8000) && (sVar7 = (short)iVar6, iVar6 < -0x8000)) {
      sVar7 = -0x8000;
    }
    uVar5 = (uint)sVar7;
    if ((int)uVar5 < 0) {
      uVar5 = -uVar5;
    }
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
    DAT_fffedc1c = 0;
    if ((((param_9 != '\0') && (param_2 < DAT_fffedc23)) && (_DAT_fffedc1e < param_11)) ||
       ((param_9 == '\0' && (DAT_fffedc23 < param_2)))) {
      bVar2 = true;
      if (((bVar3) || ((uVar4 & 0xffff) <= (uint)param_8)) &&
         (((uVar5 & 0xffff) <= (uint)param_8 || (!bVar3)))) {
        bVar2 = false;
      }
      if (!bVar2) {
        DAT_fffedc1c = 1;
      }
    }
  }
  if (bVar1) {
    *param_12 = DAT_fffedc1c;
  }
  else {
    *param_12 = 0;
  }
  DAT_fffedc23 = param_2;
  DAT_fffedc22 = param_3;
  DAT_fffedc21 = param_4;
  DAT_fffedc20 = param_1;
  _DAT_fffedc1e = param_10;
  return;
}

