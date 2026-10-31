
/* WARNING: Removing unreachable block (ram,0x0011ea0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011e8f8(ushort param_1,uint param_2,char param_3,uint param_4,uint param_5,char param_6,
                 char param_7,uint param_8,undefined2 *param_9,undefined1 *param_10,
                 undefined1 *param_11,undefined2 *param_12,short *param_13,undefined2 *param_14,
                 undefined2 *param_15)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int b;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  short sVar4;
  
  uVar1 = LK_134210((uint)&T_02FE2C,(int)param_3);
  *param_14 = (short)uVar1;
  uVar7 = (uint)(short)(((short)((param_2 & 0xff) * 0xb4 >> 8) + (param_1 & 0xff) + -0x20) -
                       (short)param_3);
  uVar5 = 0x7f;
  if (((int)uVar7 < 0x80) && (uVar5 = uVar7, (int)uVar7 < -0x80)) {
    uVar5 = 0xffffff80;
  }
  *param_10 = (char)uVar5;
  uVar5 = LK_133C68((uint)&T_02FE38,uVar5);
  *param_11 = (char)uVar5;
  uVar7 = LK_1364B8((uint)&T_02FE44,param_4 & 0xffff,param_5 & 0xffff);
  *param_12 = (short)uVar7;
  uVar2 = LK_133E10((uint)&T_02FE58,param_8 & 0xff);
  uVar6 = uVar2 & 0xffff;
  *param_15 = (short)uVar2;
  iVar3 = (param_8 & 0xff) * 0x20 + 0x1be5;
  sVar4 = (short)iVar3;
  b = (int)&DAT_00008000 + ((int)uVar6 >> 1);
  puVar8 = (undefined *)0xffffffff;
  if ((undefined *)(uVar7 & 0xffff) < &UNK_0000e41b) {
    puVar8 = (undefined *)(uVar7 & 0xffff) + 0x1be5;
  }
  uVar5 = (uVar5 & 0xff) * ((uint)puVar8 & 0xffff) * 0x80 + ((uint)puVar8 & 0xffff) * 0x4000;
  if ((int)uVar5 < 0) {
    uVar5 = 0x7fffffff;
  }
  uVar10 = (uVar1 & 0xffff) * (uVar5 & 0xffff);
  uVar11 = (uVar1 & 0xffff) * (uVar5 >> 0x10);
  puVar8 = (undefined *)0x0;
  uVar7 = (uVar10 >> 0x10) + uVar11;
  if (uVar7 < uVar11) {
    puVar8 = &DAT_00010000;
  }
  puVar8 = puVar8 + (uVar7 >> 0x10);
  if ((int)uVar5 < 0) {
    puVar8 = puVar8 + -(uVar1 & 0xffff);
  }
  puVar9 = (undefined *)((uVar7 * 0x10000 + (uVar10 & 0xffff) >> 0x16 | (int)puVar8 << 10) + 0x640);
  puVar8 = (undefined *)((uint)puVar9 & 0xffff);
  if (&DAT_0000ffff < puVar9) {
    puVar8 = &DAT_0000ffff;
  }
  *param_13 = (short)puVar8 + -0x640;
  if ((DAT_fffee114 != '\0') &&
     (sVar4 = (short)(_DAT_fffee110 >> 0xf), 0x7fff < _DAT_fffee110 >> 0xf)) {
    sVar4 = 0x7fff;
  }
  if ((param_6 == '\x03') && (param_7 == '\0')) {
    uVar5 = ((int)puVar8 * (uVar2 & 0xffff) >> 1) + uVar6 * -800;
    iVar3 = 0;
    if ((int)uVar5 < 0) {
      iVar3 = -1;
    }
    uVar1 = uVar5 + _DAT_fffee110;
    if (uVar1 < uVar5) {
      iVar3 = iVar3 + 1;
    }
    if ((0 < iVar3) || ((iVar3 == 0 && (0x7fffffff < uVar1)))) {
      uVar1 = 0x7fffffff;
    }
    uVar5 = __sdiv32_r1_by_r0(uVar1,b);
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = __sdiv32_r1_by_r0((iVar3 * uVar6 >> 1) + sVar4 * 0x8000,b);
  }
  *param_9 = (short)uVar5;
  DAT_fffee114 = 1;
  _DAT_fffee110 = (uVar5 & 0xffff) << 0xf;
  return;
}

