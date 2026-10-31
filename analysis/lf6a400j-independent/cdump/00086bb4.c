
/* WARNING: Removing unreachable block (ram,0x00086c20) */
/* WARNING: Removing unreachable block (ram,0x00086c58) */

void FUN_00086bb4(char param_1,char param_2,char param_3,uint param_4,char param_5,uint param_6,
                 uint param_7,undefined2 *param_8)

{
  uint uVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  if (((param_1 != '\0') || (param_2 != '\0')) || (param_5 == '\x01')) {
    param_7 = param_6;
  }
  if ((param_7 & 0xffff) <= (param_6 & 0xffff)) {
    param_7 = param_6;
  }
  uVar4 = 0xca14;
  uVar1 = LK_133F40((uint)&T_02CA14,param_7);
  puVar2 = (undefined *)__udiv32_r1_by_r0((uVar1 & 0xffff) * 400,0x2b1);
  if (&DAT_0000ffff < puVar2) {
    puVar2 = &DAT_0000ffff;
  }
  uVar1 = (param_4 & 0xffff) * 100 >> 8;
  uVar3 = SUB42(puVar2 + uVar1,0);
  if (((uint)(puVar2 + uVar1) & 0xffff) < uVar1) {
    uVar3 = 0xffff;
  }
  if (param_2 != '\0') {
    uVar4 = (short)puVar2;
  }
  if (param_1 == '\0') {
    if (param_2 != '\0') {
      *param_8 = uVar4;
      return;
    }
    if (param_3 != '\0') {
      *param_8 = 0;
      return;
    }
    if (param_5 != '\x01') {
      *param_8 = (short)puVar2;
      return;
    }
  }
  *param_8 = uVar3;
  return;
}

