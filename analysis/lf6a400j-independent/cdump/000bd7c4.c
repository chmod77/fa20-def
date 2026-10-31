
/* WARNING: Removing unreachable block (ram,0x000bd7ec) */

void FUN_000bd7c4(uint param_1,uint param_2,uint param_3,short *param_4,undefined2 *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  
  uVar1 = LK_1364B8((uint)&T_02E5F4,param_1 & 0xffff,param_2 & 0xffff);
  *param_5 = (short)uVar1;
  uVar2 = __udiv32_r1_by_r0((param_3 & 0xffff) * 0x85,0x500);
  puVar3 = (undefined *)((uVar2 & 0xffff) + ((param_3 & 0xffff) * (uVar1 & 0xffff) >> 0xf));
  if (puVar3 < &UNK_00010d4c) {
    if (&UNK_00000d4b < puVar3) {
      *param_4 = (short)puVar3 + -0xd4c;
    }
    else {
      *param_4 = 0;
    }
  }
  else {
    *param_4 = -1;
  }
  return;
}

