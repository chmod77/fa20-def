
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fbc88(char param_1,uint param_2,uint param_3,char param_4,char param_5,
                 undefined1 *param_6)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  
  param_2 = param_2 & 0xffff;
  uVar4 = LK_133F40((uint)&T_02F5D0,param_2);
  bVar2 = true;
  if (((param_1 != '\0') || (param_4 == '\0')) && ((param_1 != '\0' || (DAT_fffed8c7 == '\0')))) {
    bVar2 = false;
  }
  if (param_5 == '\0') {
LAB_000fbcfe:
    bVar1 = false;
  }
  else {
    uVar5 = LK_133F40((uint)&T_02F5C4,param_2);
    if ((((param_3 & 0xffff) <= (uVar5 & 0xffff)) &&
        (uVar5 = LK_133F40((uint)&T_02F5B8,param_2), (uVar5 & 0xffff) <= (param_3 & 0xffff))) ||
       (bVar2)) goto LAB_000fbcfe;
    bVar1 = (uVar4 & 0xffff) <= (uint)_DAT_fffed8c4;
  }
  if (param_5 != '\0') {
    uVar4 = LK_133F40((uint)&T_02F5C4,param_2);
    if ((((uVar4 & 0xffff) < (param_3 & 0xffff)) ||
        (uVar4 = LK_133F40((uint)&T_02F5B8,param_2), (param_3 & 0xffff) < (uVar4 & 0xffff))) &&
       (!bVar2)) {
      sVar3 = -1;
      if (_DAT_fffed8c4 != 0xffff) {
        sVar3 = _DAT_fffed8c4 + 1;
      }
      goto LAB_000fbd44;
    }
  }
  _DAT_fffed8c4 = 0;
  sVar3 = _DAT_fffed8c4;
LAB_000fbd44:
  _DAT_fffed8c4 = sVar3;
  uVar6 = 1;
  if ((!bVar1) && ((param_4 != '\0' || (DAT_fffed8c6 == '\0')))) {
    uVar6 = 0;
  }
  *param_6 = uVar6;
  DAT_fffed8c7 = bVar2;
  DAT_fffed8c6 = uVar6;
  return;
}

