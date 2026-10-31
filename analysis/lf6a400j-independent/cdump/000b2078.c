
void FUN_000b2078(uint param_1,uint param_2,undefined1 *param_3,undefined2 *param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = __udiv32_r1_by_r0((param_1 & 0xffff) * 0x1c3,0x398);
  uVar2 = ((int)(short)iVar1 - ((int)(param_2 & 0xffff) >> 1)) + 500;
  *param_4 = (short)uVar2;
  uVar2 = LK_133D38((uint)&T_02E124,uVar2);
  *param_3 = (char)uVar2;
  return;
}

