
/* WARNING: Removing unreachable block (ram,0x000c44fa) */
/* WARNING: Removing unreachable block (ram,0x000c450c) */

void FUN_000c43ec(ushort param_1,uint param_2,undefined *param_3,uint param_4,byte param_5,
                 byte param_6,ushort param_7,char *param_8,undefined2 *param_9,undefined2 *param_10,
                 undefined2 *param_11,undefined1 *param_12,undefined2 *param_13,undefined1 *param_14
                 ,undefined1 *param_15,undefined2 *param_16,undefined1 *param_17,
                 undefined1 *param_18,undefined2 *param_19,undefined2 *param_20)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  short sVar6;
  float fVar7;
  
  param_2 = param_2 & 0xffff;
  uVar1 = LK_133F40((uint)&T_02E9B4,param_2);
  *param_20 = (short)uVar1;
  uVar2 = LK_133F40((uint)&T_02E9C0,param_2);
  *param_19 = (short)uVar2;
  uVar3 = LK_133F40((uint)&T_02E9CC,param_2);
  *param_16 = (short)uVar3;
  uVar3 = __udiv32_r1_by_r0((param_4 & 0xffff) * 0x100 + 0x174f5c3,
                            (int)((undefined *)0x748cd + (uVar3 & 0xffff) * 5));
  if (0xff < uVar3) {
    uVar3 = 0xff;
  }
  uVar4 = LK_133B38((uint)&T_02E9D8,uVar3);
  *param_14 = (char)uVar4;
  *param_15 = (char)uVar3;
  fVar7 = 0.0;
  if ((uVar2 & 0xffff) != 0) {
    fVar7 = ((float)param_5 + 13.299999) / ((float)(uVar2 & 0xffff) * 0.00390625);
  }
  if (4.9804688 < fVar7) {
    fVar7 = 4.9804688;
  }
  uVar2 = 0xff;
  if (fVar7 <= 4.9804688) {
    uVar2 = (uint)(fVar7 * 51.199997);
  }
  *param_18 = (char)uVar2;
  uVar2 = LK_133B38((uint)&T_02E9E4,uVar2);
  *param_17 = (char)uVar2;
  uVar1 = (uVar1 & 0xffff) * (uVar4 & 0xff) * (uVar2 & 0xff);
  puVar5 = (undefined *)(((uVar1 & 0xffff) * 0x19 >> 0x10) + (uVar1 >> 0x10) * 0x19);
  if (((undefined *)((uint)param_3 & 0xffff) < puVar5) && (param_3 = puVar5, &DAT_0000ffff < puVar5)
     ) {
    param_3 = &DAT_0000ffff;
  }
  *param_13 = (short)param_3;
  fVar7 = ((float)((uint)param_3 & 0xffff) * (float)param_7 * 0.63999987) / 6e+07;
  if (2.8632698 < fVar7) {
    fVar7 = 2.8632698;
  }
  fVar7 = fVar7 * 28345.0 * 0.005456968;
  if (255.0 < fVar7) {
    fVar7 = 255.0;
  }
  uVar1 = 0xff;
  if (fVar7 <= 255.0) {
    uVar1 = (uint)fVar7;
  }
  *param_12 = (char)uVar1;
  uVar2 = LK_136050((uint)&T_02E9F0,param_2,uVar1);
  *param_10 = (short)uVar2;
  uVar1 = LK_136050((uint)&T_02EA04,param_2,uVar1);
  *param_11 = (short)uVar1;
  puVar5 = (undefined *)
           (((int)((uVar1 & 0xffff) * (int)(short)(0x10 - (ushort)param_6)) >> 4) +
           ((uint)param_6 * (uVar2 & 0xffff) >> 4));
  if ((int)puVar5 < (int)&DAT_00010000) {
    if ((int)puVar5 < 0) {
      puVar5 = (undefined *)0x0;
    }
  }
  else {
    puVar5 = &DAT_0000ffff;
  }
  sVar6 = (short)((int)((uint)puVar5 & 0xffff) >> 4) - (short)((int)(uint)param_1 >> 4);
  if (sVar6 < -0x171) {
    if (sVar6 < -0x271) {
      *param_8 = '\0';
    }
    else {
      *param_8 = (char)sVar6 + 'q';
    }
  }
  else {
    *param_8 = -1;
  }
  *param_9 = (short)puVar5;
  return;
}

