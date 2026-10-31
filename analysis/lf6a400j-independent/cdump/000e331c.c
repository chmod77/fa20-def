
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e331c(uint param_1,uint param_2,uint param_3,undefined2 *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = (undefined *)((param_1 & 0xffff) * 0x4e);
  puVar3 = _DAT_fffed278;
  if (DAT_fffed27c == '\0') {
    puVar3 = &UNK_00015984;
  }
  if ((int)puVar4 < (int)puVar3) {
    puVar2 = puVar3 + -(param_2 & 0xffff);
    if (((int)puVar3 < 0) && (-1 < (int)puVar2)) {
      puVar2 = (undefined *)0x80000000;
    }
    if ((int)puVar4 <= (int)puVar2) goto LAB_000e3384;
  }
  else {
    puVar2 = puVar3 + (param_3 & 0xffff);
    if ((int)(puVar3 + (param_3 & 0xffff)) < (int)puVar4) goto LAB_000e3384;
  }
  puVar2 = puVar4;
LAB_000e3384:
  puVar3 = &DAT_0001a2f2;
  if ((int)puVar2 < 0x1a2f3) {
    puVar3 = puVar2;
  }
  puVar4 = (undefined *)0x58f8;
  if (0x58f8 < (int)puVar3) {
    puVar4 = puVar3;
  }
  iVar1 = __sdiv32_r1_by_r0((int)puVar4,0x4e);
  *param_4 = (short)iVar1;
  DAT_fffed27c = 1;
  _DAT_fffed278 = puVar4;
  return;
}

