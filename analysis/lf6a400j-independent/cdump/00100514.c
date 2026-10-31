
/* WARNING: Removing unreachable block (ram,0x00100576) */

void FUN_00100514(uint param_1,uint param_2,uint param_3,char param_4,undefined2 *param_5,
                 undefined2 *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  
  uVar1 = LK_133E10((uint)&T_02F8E0,param_1 & 0xff);
  *param_6 = (short)uVar1;
  if (param_4 == '\x01') {
    *param_5 = 0;
  }
  else {
    uVar5 = (param_3 & 0xffff) - (param_2 & 0xffff);
    uVar6 = (uVar1 & 0xffff) * (uVar5 & 0xffff);
    uVar7 = (uVar1 & 0xffff) * (uVar5 >> 0x10);
    puVar8 = (undefined *)0x0;
    uVar3 = (uVar6 >> 0x10) + uVar7;
    if (uVar3 < uVar7) {
      puVar8 = &DAT_00010000;
    }
    uVar6 = uVar3 * 0x10000 + (uVar6 & 0xffff);
    puVar8 = puVar8 + (uVar3 >> 0x10);
    if ((int)uVar5 < 0) {
      puVar8 = puVar8 + -(uVar1 & 0xffff);
    }
    if (((int)puVar8 < 1) && ((puVar8 != (undefined *)0x0 || (uVar6 < 0x80000000)))) {
      if (((int)puVar8 < -1) || ((puVar8 == (undefined *)0xffffffff && (uVar6 < 0x80000000)))) {
        uVar6 = 0x80000000;
      }
    }
    else {
      uVar6 = 0x7fffffff;
    }
    iVar2 = __sdiv32_r1_by_r0(uVar6,(int)&DAT_0000a3ef);
    uVar4 = 0x7fff;
    if ((iVar2 < 0x8000) && (uVar4 = (undefined2)iVar2, iVar2 < -0x8000)) {
      uVar4 = 0x8000;
    }
    *param_5 = uVar4;
  }
  return;
}

