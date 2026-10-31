
/* WARNING: Removing unreachable block (ram,0x000ff724) */

void FUN_000ff638(undefined4 param_1,uint param_2,uint param_3,char param_4,char param_5,int param_6
                 ,undefined4 param_7,uint param_8,uint param_9,undefined1 *param_10,uint *param_11)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  
  cVar2 = DAT_fffed9a1;
  uVar4 = (param_8 & 0xffff) - (param_3 & 0xffff);
  uVar5 = 0xffffffff;
  if (((int)uVar4 < (int)&DAT_0000c000) && (uVar5 = 0, -0x4001 < (int)uVar4)) {
    uVar5 = uVar4 + 0x4000;
  }
  if ((param_4 == '\0') && (uVar4 = param_9 + param_6, uVar4 < param_9)) {
    uVar4 = 0xffffffff;
  }
  if (((DAT_fffed9a1 == '\0') || (uVar3 = 0, DAT_fffed9a3 != '\0')) &&
     (uVar3 = uVar4, param_4 != '\0')) {
    uVar3 = param_9;
  }
  if (0x5dbffff < uVar3) {
    uVar3 = 0x5dc0000;
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = uVar3;
  }
  *param_11 = uVar4;
  uVar6 = 1;
  if (((param_5 != '\0') && (DAT_fffed9a0 == '\0')) && (0xfffe < (uVar5 & 0xffff)))
  goto LAB_000ff73a;
  bVar1 = false;
  uVar3 = (param_3 & 0xffff) >> 8;
  uVar5 = LK_133E10((uint)&T_02F888,uVar3);
  if ((param_2 & 0xffff) < (uVar5 & 0xffff)) {
    uVar5 = LK_133E10((uint)&T_02F87C,uVar3);
    uVar5 = uVar5 & 0xffff;
    uVar4 = __udiv32_r1_by_r0(uVar4,(int)&DAT_0001c200);
    if ((int)uVar5 <= (int)(uVar4 & 0xffff)) goto LAB_000ff714;
  }
  else {
LAB_000ff714:
    bVar1 = true;
  }
  if ((bVar1) || (DAT_fffed9a2 == '\0')) {
    uVar6 = 0;
  }
LAB_000ff73a:
  *param_10 = uVar6;
  DAT_fffed9a1 = uVar6;
  DAT_fffed9a3 = cVar2;
  DAT_fffed9a0 = param_5;
  DAT_fffed9a2 = uVar6;
  return;
}

