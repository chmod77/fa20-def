
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000aa4c0(ushort param_1,uint param_2,uint param_3,char param_4,ushort param_5,uint param_6,
                 uint param_7,ushort *param_8,undefined2 *param_9,undefined2 *param_10)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  
  if (param_5 != 16000) {
    puVar2 = (undefined *)((param_7 & 0xffff) * 8);
    puVar3 = (undefined *)0xffffffff;
    if ((puVar2 < &UNK_0001fa00) && (puVar3 = (undefined *)0x0, &UNK_0000f9ff < puVar2)) {
      puVar3 = puVar2 + 0x600;
    }
    iVar1 = ((uint)puVar3 & 0xffff) * 0x8000 + -0x1f400000;
    if (param_5 - 16000 == 0) {
      if (iVar1 < 0) {
        _DAT_fffec458 = 0;
      }
      else {
        _DAT_fffec458 = -1;
      }
    }
    else {
      iVar1 = __sdiv32_r1_by_r0(iVar1,param_5 - 16000);
      if (iVar1 < (int)&DAT_00010000) {
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        _DAT_fffec458 = (short)iVar1;
      }
      else {
        _DAT_fffec458 = -1;
      }
    }
  }
  uVar4 = 0;
  if (param_5 != 16000) {
    uVar4 = (uint)_DAT_fffec458;
  }
  uVar4 = LK_138F64((uint)&T_02DCE0,param_6 & 0xffff,uVar4);
  *param_10 = (short)uVar4;
  uVar4 = LK_133F40((uint)&T_02DCF4,uVar4);
  uVar4 = uVar4 & 0xffff;
  if (0xffff < uVar4) {
    uVar4 = 0xffffffff;
  }
  *param_9 = (short)uVar4;
  if ((param_4 == '\0') || ((uVar4 & 0xffff) <= (param_2 & 0xffff))) {
    uVar4 = param_2;
  }
  if ((uVar4 & 0xffff) < (param_3 & 0xffff)) {
    uVar4 = param_3;
  }
  if ((uint)param_1 < (uVar4 & 0xffff)) {
    *param_8 = param_1;
  }
  else {
    *param_8 = (ushort)uVar4;
  }
  return;
}

