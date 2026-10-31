
/* WARNING: Removing unreachable block (ram,0x000b5c12) */

void FUN_000b5b38(uint param_1,uint param_2,char param_3,ushort param_4,char param_5,uint param_6,
                 uint param_7,ushort param_8,ushort *param_9,undefined2 *param_10,ushort *param_11,
                 ushort *param_12)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  ushort uVar5;
  float fVar6;
  
  puVar4 = &DAT_0000a8ba + (param_6 & 0xffff);
  uVar5 = 0xffff;
  if ((puVar4 < &DAT_00018000) && (uVar5 = 0, &DAT_00007fff < puVar4)) {
    uVar5 = (short)puVar4 + 0x8000;
  }
  *param_11 = uVar5;
  bVar1 = param_4 < 1000;
  if ((param_5 == '\0') || (bVar1)) {
    if ((param_5 == '\0') || (!bVar1)) {
      if ((param_5 != '\0') || (bVar1)) {
        uVar2 = LK_138AFC((uint)&T_02E368,param_1,param_2);
      }
      else {
        uVar2 = LK_138AFC((uint)&T_02E354,param_1,param_2);
      }
    }
    else {
      uVar2 = LK_138AFC((uint)&T_02E340,param_1,param_2);
    }
  }
  else {
    uVar2 = LK_138AFC((uint)&T_02E32C,param_1,param_2);
  }
  *param_10 = (short)uVar2;
  fVar6 = (float)(int)((param_7 & 0xffff) + (uVar2 & 0xffff) + -0x8000) * 0.00033569336 +
          (((float)param_8 * 3.0517578e-05) /
          ((float)(int)((int)&DAT_00008000 + (uint)param_8) * 3.0517578e-05)) * -14.499939;
  uVar2 = 0xffffffff;
  if ((fVar6 <= 21.999664) && (uVar2 = 0, 0.0 <= fVar6)) {
    uVar2 = (uint)(fVar6 * 2978.909);
  }
  if (param_3 == '\0') {
    if ((uint)uVar5 < (uVar2 & 0xffff)) {
      *param_9 = uVar5;
    }
    else {
      *param_9 = (ushort)uVar2;
    }
  }
  else {
    uVar3 = LK_138AFC((uint)&T_02E37C,param_1,param_2);
    *param_9 = (ushort)uVar3;
  }
  *param_12 = (ushort)uVar2;
  return;
}

