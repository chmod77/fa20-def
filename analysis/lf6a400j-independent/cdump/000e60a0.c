
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e60a0(ushort param_1,uint param_2,uint param_3,char param_4,char param_5,char param_6,
                 undefined2 *param_7)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = _DAT_fffed34c;
  if ((param_4 != '\0') && (param_5 != '\0')) {
    iVar1 = (uint)param_1 * 0x80 + ((param_2 & 0xffff) + (param_3 & 0xffff) >> 1) * -0x80;
    uVar2 = 0;
    if (-1 < iVar1) {
      iVar1 = __sdiv32_r1_by_r0(iVar1,0x271);
      uVar2 = (short)iVar1;
    }
  }
  if (param_6 != '\0') {
    uVar2 = 0;
  }
  *param_7 = uVar2;
  _DAT_fffed34c = uVar2;
  return;
}

