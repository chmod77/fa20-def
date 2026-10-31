
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c36d0(ushort param_1,undefined4 param_2,uint param_3,char param_4,char param_5,
                 char param_6,uint param_7,short *param_8,short *param_9)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  
  iVar6 = (uint)param_1 - (uint)_DAT_fffeca66;
  iVar2 = 0x7fff;
  if ((iVar6 < 0x8000) && (iVar2 = -0x8000, -0x8001 < iVar6)) {
    iVar2 = iVar6;
  }
  sVar3 = (short)iVar2;
  *param_9 = sVar3;
  if (DAT_fffeca68 == '\0') {
    sVar4 = 0xb2;
  }
  else {
    sVar4 = 0x164;
  }
  uVar1 = LK_133F40((uint)&T_02E948,param_7 & 0xffff);
  if (((((param_3 & 0xffff) < (uVar1 & 0xffff)) || (sVar3 >= sVar4)) || (param_4 != '\0')) ||
     ((param_5 != '\0' || (param_6 != '\0')))) {
    sVar5 = 0;
  }
  else {
    sVar5 = -1;
    if (_DAT_fffeca64 != -1) {
      sVar5 = _DAT_fffeca64 + 1;
    }
  }
  *param_8 = sVar5;
  DAT_fffeca68 = sVar3 < sVar4;
  _DAT_fffeca66 = param_1;
  _DAT_fffeca64 = sVar5;
  return;
}

