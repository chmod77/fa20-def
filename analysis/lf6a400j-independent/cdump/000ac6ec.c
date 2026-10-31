
/* WARNING: Removing unreachable block (ram,0x000ac794) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ac6ec(char param_1,char param_2,uint param_3,uint param_4,short *param_5)

{
  uint uVar1;
  int iVar2;
  short local_10;
  uint uStack_c;
  
  if ((param_2 == '\0') || (param_1 == '\0')) goto LAB_000ac762;
  uStack_c = (param_3 & 0xffff) - (param_4 & 0xffff);
  if ((int)uStack_c < 0x8000) {
    if ((int)uStack_c < -0x8000) {
      uStack_c = 0xffff8000;
    }
  }
  else {
    uStack_c = 0x7fff;
  }
  iVar2 = (int)(short)uStack_c;
  if (iVar2 < 0) {
    if (-iVar2 < 0) goto LAB_000ac734;
    uStack_c = -iVar2 & 0xffff;
  }
  else if (iVar2 < 0) {
LAB_000ac734:
    uStack_c = 0;
  }
  else {
    uStack_c = uStack_c & 0xffff;
  }
  uVar1 = LK_133BCC((uint)&T_02DF24,(int)_DAT_fffec4e8);
  DAT_fffec4e4 = (uint)((int)uStack_c >> 6) <= (uVar1 & 0xff);
LAB_000ac762:
  if ((param_1 == '\0') || (DAT_fffec4e4 == '\0')) {
    _DAT_fffec4e6 = 0;
    local_10 = 0;
  }
  else {
    local_10 = _DAT_fffec4e6 + 1;
    if (local_10 == 0) {
      local_10 = -1;
    }
  }
  *param_5 = _DAT_fffec4e6;
  _DAT_fffec4e8 = _DAT_fffec4e6;
  _DAT_fffec4e6 = local_10;
  return;
}

