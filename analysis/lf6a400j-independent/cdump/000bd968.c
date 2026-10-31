
/* WARNING: Removing unreachable block (ram,0x000bd98e) */

void FUN_000bd968(uint param_1,uint param_2,char *param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = LK_13503C((uint)&T_02E614,param_1 & 0xffff);
  *param_4 = (char)uVar1;
  uVar2 = __udiv32_r1_by_r0((param_2 & 0xffff) * 0x85,(int)(undefined *)0x50000);
  uVar1 = (uVar2 & 0xff) + ((uVar1 & 0xff) * (param_2 & 0xffff) >> 0xf);
  if (uVar1 < 0x10d) {
    if (uVar1 < 0xd) {
      *param_3 = '\0';
    }
    else {
      *param_3 = (char)uVar1 + -0xd;
    }
  }
  else {
    *param_3 = -1;
  }
  return;
}

