
/* WARNING: Removing unreachable block (ram,0x00099ce2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00099c1c(char param_1,uint param_2,char param_3,char param_4,char param_5,char param_6,
                 ushort *param_7,ushort *param_8)

{
  bool bVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar2 = LK_133F40((uint)&T_02D620,param_2 & 0xffff);
  if ((param_5 == '\0') && (param_6 == '\0')) {
    uVar2 = LK_133F40((uint)&T_02D62C,param_2 & 0xffff);
  }
  *param_8 = (ushort)uVar2;
  bVar1 = (uVar2 & 0xffff) == 0;
  if (((param_3 != '\0') && (param_4 == '\0')) || (uVar3 = 0, !bVar1)) {
    uVar3 = _DAT_fffebfc0;
  }
  if (((param_3 != '\0') && (param_4 == '\0')) || (bVar1)) {
    if (((param_3 == '\0') || (param_4 != '\0')) || (!bVar1)) goto LAB_00099cc0;
  }
  else {
    uVar3 = _DAT_fffebfc0;
    if (_DAT_fffebfc0 != 0) goto LAB_00099cc0;
  }
  uVar3 = 0;
LAB_00099cc0:
  if ((((param_3 != '\0') && (param_4 == '\0')) && (!bVar1)) &&
     (uVar3 = (ushort)uVar2, (uint)_DAT_fffebfc0 < (uVar2 & 0xffff))) {
    uVar3 = _DAT_fffebfc0;
  }
  if (param_1 != '\0') {
    uVar3 = 0;
  }
  *param_7 = uVar3;
  _DAT_fffebfc0 = uVar3;
  return;
}

