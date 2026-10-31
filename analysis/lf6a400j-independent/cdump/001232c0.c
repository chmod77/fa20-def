
/* WARNING: Removing unreachable block (ram,0x00123366) */
/* WARNING: Removing unreachable block (ram,0x0012339c) */

void FUN_001232c0(uint param_1,uint param_2,char param_3,char param_4,char param_5,uint param_6,
                 char param_7,uint param_8,uint param_9,undefined4 param_10,undefined2 *param_11,
                 undefined2 *param_12)

{
  uint uVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  if (param_7 != '\x02') {
    param_9 = LK_1390DC((uint)&T_02FFF4,param_2 & 0xffff,param_1 & 0xffff);
  }
  *param_12 = (short)param_9;
  if (((param_3 != '\0') || (param_4 != '\0')) || (param_7 == '\x01')) {
    param_9 = param_8;
  }
  if ((param_9 & 0xffff) <= (param_8 & 0xffff)) {
    param_9 = param_8;
  }
  uVar4 = 8;
  uVar1 = LK_133FD8((uint)&T_030008,param_9);
  puVar2 = (undefined *)__udiv32_r1_by_r0((uVar1 & 0xffff) * 400,0x2b1);
  if (&DAT_0000ffff < puVar2) {
    puVar2 = &DAT_0000ffff;
  }
  uVar1 = (param_6 & 0xffff) * 100 >> 8;
  uVar3 = SUB42(puVar2 + uVar1,0);
  if (((uint)(puVar2 + uVar1) & 0xffff) < uVar1) {
    uVar3 = 0xffff;
  }
  if (param_4 != '\0') {
    uVar4 = (short)puVar2;
  }
  if (param_3 == '\0') {
    if (param_4 != '\0') {
      *param_11 = uVar4;
      return;
    }
    if (param_5 != '\0') {
      *param_11 = 0;
      return;
    }
    if (param_7 != '\x01') {
      *param_11 = (short)puVar2;
      return;
    }
  }
  *param_11 = uVar3;
  return;
}

