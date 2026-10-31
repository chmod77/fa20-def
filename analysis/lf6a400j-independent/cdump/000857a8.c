
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000857a8(uint param_1,char param_2,undefined2 param_3,byte param_4,char param_5,
                 ushort param_6,char param_7,char param_8,short *param_9)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (-0x101 < (short)((ushort)param_4 * -0x40)) {
    uVar6 = (int)(short)((ushort)param_4 * -0x40) + 0x100;
  }
  if (param_6 < 0x1981) {
    param_6 = 0x1980;
  }
  if (param_6 < 0x80) {
    param_6 = 0x80;
  }
  if (param_6 == 0) {
    puVar3 = (undefined *)0xffffffff;
  }
  else {
    if (param_8 == '\0') {
      param_2 = param_7;
    }
    uVar2 = (uint)(short)((short)param_5 - (short)param_2);
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    uVar2 = LK_133E10((uint)&T_02C918,uVar2);
    puVar1 = (undefined *)__udiv32_r1_by_r0((uVar2 & 0xffff) << 0xe,(uint)param_6);
    puVar3 = (undefined *)((uint)puVar1 & 0xffff);
    if (&DAT_0000ffff < puVar1) {
      puVar3 = &DAT_0000ffff;
    }
  }
  uVar6 = ((uVar6 & 0xffff) * (uint)_DAT_fffebb7c >> 8) - ((uVar6 & 0xffff) * 16000 >> 8);
  puVar4 = (undefined1 *)0xffffffff;
  if (((int)uVar6 < (int)&DAT_0000c180) && (puVar4 = (undefined1 *)0x0, -0x3e81 < (int)uVar6)) {
    puVar4 = &LAB_00003e80 + (uVar6 & 0xffff);
  }
  iVar5 = (((uint)puVar4 & 0xffff) * ((uint)puVar3 & 0xffff) >> 0xe) -
          (((uint)puVar3 & 0xffff) * 0xfa >> 8);
  puVar4 = (undefined1 *)0xffffffff;
  if ((iVar5 < (int)&DAT_0000c180) && (puVar4 = (undefined1 *)0x0, -0x3e81 < iVar5)) {
    puVar4 = &LAB_00003e80 + iVar5;
  }
  iVar5 = ((uint)puVar4 & 0xffff) - (param_1 & 0xffff);
  if (iVar5 < (int)&DAT_0000c180) {
    if (iVar5 < -16000) {
      *param_9 = 0;
    }
    else {
      *param_9 = (short)iVar5 + 16000;
    }
  }
  else {
    *param_9 = -1;
  }
  _DAT_fffebb7c = param_3;
  return;
}

