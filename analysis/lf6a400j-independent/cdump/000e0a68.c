
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e0a68(ushort param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,uint param_8,char param_9,ushort *param_10)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = LK_133F40((uint)&T_02F0C8,param_8 & 0xffff);
  puVar3 = (undefined *)0x0;
  if ((uVar1 & 0xffff) != 0) {
    puVar3 = (undefined *)((param_8 & 0xffff) * 0x8000);
    if (&DAT_0000ffff < puVar3) {
      puVar3 = &DAT_0000ffff;
    }
    puVar2 = (undefined *)__udiv32_r1_by_r0(((uint)puVar3 & 0xffff) * 0xa00,uVar1 & 0xffff);
    puVar3 = (undefined *)((uint)puVar2 & 0xffff);
    if (&DAT_0000ffff < puVar2) {
      puVar3 = &DAT_0000ffff;
    }
  }
  if ((((param_2 != '\0') && (param_4 != '\0')) && (param_7 != '\0')) &&
     ((param_5 == '\0' && (param_9 == '\0')))) {
    puVar2 = &DAT_0000ffff;
    if ((int)puVar3 * (uint)param_1 < 0xffff01) {
      puVar2 = (undefined *)((int)puVar3 * (uint)param_1 >> 8);
    }
    _DAT_fffed1e0 = (ushort)(puVar2 + (short)param_1);
    if (((uint)(puVar2 + (short)param_1) & 0xffff) < (uint)param_1) {
      _DAT_fffed1e0 = 0xffff;
    }
  }
  if ((param_6 == '\0') && (param_3 == '\0')) {
    if ((((param_2 != '\0') && (param_4 != '\0')) && (param_7 != '\0')) &&
       ((param_5 != '\0' && (param_9 == '\0')))) {
      _DAT_fffed1e0 = param_1;
    }
  }
  else {
    _DAT_fffed1e0 = 0;
  }
  *param_10 = _DAT_fffed1e0;
  return;
}

