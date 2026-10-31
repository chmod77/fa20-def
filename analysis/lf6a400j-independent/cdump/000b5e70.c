
/* WARNING: Removing unreachable block (ram,0x000b5f4a) */
/* WARNING: Removing unreachable block (ram,0x000b5f7c) */

void FUN_000b5e70(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,short *param_6,
                 undefined2 *param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  uint uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined *puStack_24;
  int iStack_20;
  
  uVar1 = LK_139254((uint)&T_02E3B8,param_1 & 0xffff,param_2);
  uVar2 = LK_138C74((uint)&T_02E3CC,param_3 & 0xffff,param_4 & 0xff);
  uVar2 = (uVar1 & 0xffff) * (uVar2 & 0xffff);
  uVar1 = LK_138C74((uint)&T_02E3CC,param_3 & 0xffff,param_4 & 0xff);
  uVar1 = uVar2 + (uVar1 & 0xffff) * -0x8000;
  iVar3 = -(uint)(uVar2 < uVar1);
  uStack_28 = uVar1 + 0x5d1745d;
  if (uStack_28 < uVar1) {
    iVar3 = iVar3 + 1;
  }
  if (iVar3 < 1) {
    if (iVar3 < 0) {
      uStack_2c = 0xffffffff;
      uStack_28 = 0;
    }
    else {
      uStack_2c = 0;
    }
    uStack_30 = uStack_28;
  }
  else {
    uStack_2c = 0;
    uStack_30 = 0xffffffff;
  }
  uVar1 = __udiv32_r1_by_r0((param_5 & 0xffff) * 0xb3b9,(int)&DAT_00010eaa);
  uVar2 = LK_133BCC((uint)&T_02E3E0,uVar1);
  uVar5 = (uVar2 & 0xff) * (uStack_30 & 0xffff);
  uVar6 = (uVar2 & 0xff) * (uStack_30 >> 0x10);
  puVar7 = (undefined *)0x0;
  uVar2 = (uVar5 >> 0x10) + uVar6;
  if (uVar2 < uVar6) {
    puVar7 = &DAT_00010000;
  }
  uVar5 = uVar2 * 0x10000 + (uVar5 & 0xffff);
  uVar6 = (uVar5 & 0xffff) * 0xb;
  uVar8 = (uVar5 >> 0x10) * 0xb;
  puVar4 = (undefined *)0x0;
  uVar5 = (uVar6 >> 0x10) + uVar8;
  if (uVar5 < uVar8) {
    puVar4 = &DAT_00010000;
  }
  iStack_20 = uVar5 * 0x10000 + (uVar6 & 0xffff);
  puStack_24 = puVar4 + (uVar5 >> 0x10) +
                        ((uint)(puVar7 + (uVar2 >> 0x10)) & 0xffff) * 0xb +
                        ((uint)(puVar7 + (uVar2 >> 0x10)) >> 0x10) * 0xb0000;
  iVar3 = FUN_0016c128(&puStack_24,0x7f8000,puStack_24,puVar4,uStack_2c);
  uVar2 = LK_133BCC((uint)&T_02E3E0,uVar1);
  uVar2 = __udiv32_r1_by_r0((uVar2 & 0xff) << 0xf,0xff);
  iVar3 = iVar3 - (uVar2 & 0xffff);
  if (iVar3 < 0x8000) {
    *param_6 = (short)iVar3 + -0x8000;
  }
  else {
    *param_6 = -1;
  }
  *param_7 = (short)uVar1;
  return;
}

