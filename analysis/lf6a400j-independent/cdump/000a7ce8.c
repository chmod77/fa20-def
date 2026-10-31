
/* WARNING: Removing unreachable block (ram,0x000a7d6e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a7ce8(char param_1,byte param_2,char param_3,uint param_4,char param_5,char param_6,
                 char param_7,uint param_8,undefined4 param_9,ushort param_10,char param_11,
                 char param_12,ushort *param_13,ushort *param_14,ushort *param_15,
                 undefined2 *param_16,undefined2 *param_17,undefined2 *param_18,undefined2 *param_19
                 ,undefined2 *param_20,undefined2 *param_21,ushort *param_22)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  
  if (param_7 == '\0') {
    param_5 = param_6;
  }
  uVar2 = LK_13852C((uint)&T_02DCC0,param_8 & 0xff,param_4);
  puVar5 = (undefined *)((uVar2 & 0xff) * 0x100);
  *param_20 = (short)puVar5;
  *param_21 = 0;
  *param_19 = (short)puVar5;
  if (((param_2 < 4) || (param_3 != '\0')) &&
     ((param_11 != '\0' || (puVar5 = (undefined *)0x0, param_12 != '\0')))) {
    puVar5 = &DAT_00000600;
  }
  *param_18 = (short)puVar5;
  if ((param_5 == '\0') || (puVar4 = (undefined *)0x0, DAT_fffec44c < 0x1e)) {
    puVar4 = (undefined *)0x1bd7;
  }
  *param_17 = (short)puVar4;
  puVar3 = puVar5;
  if (puVar5 < puVar4) {
    puVar3 = puVar4;
  }
  *param_16 = (short)puVar3;
  if ((param_4 < 0xb) && ((undefined *)0xb23 < puVar3)) {
    puVar3 = (undefined *)0xb23;
  }
  uVar8 = (ushort)puVar3;
  *param_15 = uVar8;
  uVar1 = 0x33f;
  if (param_5 == '\0') {
    DAT_fffec44c = '\0';
  }
  else {
    DAT_fffec44c = DAT_fffec44c + 1;
    if (DAT_fffec44c == '\0') {
      DAT_fffec44c = -1;
    }
  }
  if ((puVar4 == (undefined *)0x0) && (puVar5 == (undefined *)0x0)) {
    uVar1 = _DAT_fffec44a;
  }
  *param_22 = uVar1;
  uVar7 = _DAT_fffec448;
  if ((undefined *)(uint)_DAT_fffec448 < puVar3) {
    uVar6 = _DAT_fffec448 + 0x600;
    puVar5 = (undefined *)(uint)uVar6;
    if (puVar5 < &DAT_00000600) {
      uVar6 = 0xffff;
      puVar5 = &DAT_0000ffff;
    }
    uVar7 = uVar8;
    if (puVar5 < puVar3) {
      uVar7 = uVar6;
    }
  }
  if (puVar3 < (undefined *)(uint)_DAT_fffec448) {
    uVar7 = 0;
    if (uVar1 <= _DAT_fffec448) {
      uVar7 = _DAT_fffec448 - uVar1;
    }
    if ((undefined *)(uint)uVar7 <= puVar3) {
      uVar7 = uVar8;
    }
  }
  if (param_1 != '\0') {
    uVar7 = 0;
  }
  *param_14 = uVar7;
  if (uVar7 < param_10) {
    *param_13 = param_10;
  }
  else {
    *param_13 = uVar7;
  }
  _DAT_fffec44a = uVar1;
  _DAT_fffec448 = uVar7;
  return;
}

