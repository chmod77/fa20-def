
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a7024(char param_1,char param_2,char param_3,char param_4,short param_5,uint param_6,
                 ushort param_7,byte param_8,char param_9,undefined1 *param_10)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  uint uVar6;
  short sVar7;
  ushort uVar8;
  char cVar9;
  short sVar10;
  
  bVar3 = param_2 != '\0';
  bVar4 = param_3 != '\0';
  param_6 = param_6 & 0xffff;
  uVar6 = LK_134C84((uint)&T_02DC30,param_6);
  sVar7 = (short)uVar6;
  uVar6 = LK_134C84((uint)&T_02DC3C,param_6);
  uVar8 = FUN_0016bc68(&DAT_00013ff8,param_6);
  bVar1 = 3 < param_8;
  if ((param_2 != '\0') || (cVar9 = '\x01', param_9 != '\0')) {
    cVar9 = DAT_fffec412;
  }
  if (param_9 != '\0') {
    cVar9 = '\0';
  }
  sVar10 = (short)uVar6;
  if ((DAT_fffec414 != '\0') && (0x7fff < sVar10)) {
    sVar10 = 0x7fff;
  }
  if (bVar3) {
    bVar2 = false;
    _DAT_fffec410 = 0;
    sVar5 = _DAT_fffec410;
  }
  else {
    bVar2 = uVar8 <= _DAT_fffec410;
    sVar5 = -1;
    if (_DAT_fffec410 != 0xffff) {
      sVar5 = _DAT_fffec410 + 1;
    }
  }
  _DAT_fffec410 = sVar5;
  if ((DAT_fffec413 != '\0') && (sVar7 < -0x8000)) {
    sVar7 = -0x8000;
  }
  DAT_fffec413 = sVar7 <= param_5;
  if (param_1 == '\0') {
    if ((bVar3) || (param_3 == '\0')) {
      if ((bVar3) || ((bVar4 || (!bVar1)))) {
        if ((bVar1) || ((((!(bool)DAT_fffec413 || (bVar4)) || (param_4 == '\0')) || (!bVar2)))) {
          if ((((bVar3) || (bVar1)) || ((bVar4 || (param_4 == '\0')))) ||
             (((bool)DAT_fffec413 && (bVar2)))) {
            if ((param_2 == '\0') ||
               ((((param_5 <= sVar10 || (bVar1)) || (bVar4)) ||
                ((param_7 < 0xc9 || (cVar9 == '\0')))))) {
              *param_10 = 0;
            }
            else {
              *param_10 = 6;
            }
          }
          else {
            *param_10 = 5;
          }
        }
        else {
          *param_10 = 4;
        }
      }
      else {
        *param_10 = 3;
      }
    }
    else {
      *param_10 = 2;
    }
  }
  else {
    *param_10 = 1;
  }
  DAT_fffec412 = cVar9;
  DAT_fffec414 = param_5 <= sVar10;
  return;
}

