
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b34bc(char param_1,char param_2,uint param_3,byte param_4,uint param_5,char param_6,
                 ushort *param_7,ushort *param_8,undefined2 *param_9,undefined2 *param_10,
                 undefined2 *param_11)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar5;
  ushort uVar4;
  
  uVar1 = LK_133F40((uint)&T_02E1F8,param_3 & 0xffff);
  *param_10 = (short)uVar1;
  uVar2 = LK_133F40((uint)&T_02E204,param_3 & 0xffff);
  uVar3 = uVar2;
  if (param_2 != '\0') {
    uVar3 = uVar1;
  }
  *param_11 = (short)uVar2;
  bVar5 = 10;
  if ((param_4 < 0xb) && (bVar5 = 1, param_4 != 0)) {
    bVar5 = param_4;
  }
  if ((((bVar5 != 1) && (bVar5 != 2)) && (bVar5 != 3)) && (bVar5 != 4)) {
    if (bVar5 == 5) {
      uVar3 = 0;
      goto LAB_000b3550;
    }
    if (bVar5 != 6) {
      if (bVar5 == 7) {
        uVar3 = 0;
        goto LAB_000b3550;
      }
      if (bVar5 != 8) {
        if (bVar5 == 9) {
          uVar3 = 0;
        }
        goto LAB_000b3550;
      }
    }
  }
  uVar3 = 0;
LAB_000b3550:
  *param_9 = (short)uVar3;
  if (param_1 != '\0') {
    if (param_6 == '\0') {
      _DAT_fffec6ec = (ushort)(param_5 + uVar3);
      if ((param_5 + uVar3 & 0xffff) < (param_5 & 0xffff)) {
        _DAT_fffec6ec = 0xffff;
      }
    }
    else {
      _DAT_fffec6ec = 0x8000;
    }
  }
  uVar4 = 0x8000;
  if (param_1 != '\0') {
    uVar4 = _DAT_fffec6ec;
  }
  *param_7 = uVar4;
  *param_8 = uVar4 >> 7;
  return;
}

