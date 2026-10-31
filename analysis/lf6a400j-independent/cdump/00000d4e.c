
undefined4 FUN_00000d4e(void)

{
  undefined2 uVar1;
  undefined1 *in_r0;
  uint uVar2;
  uint uVar3;
  uint *unaff_r14;
  
  uVar1 = CONCAT11(*in_r0,*in_r0);
  uVar3 = CONCAT22(uVar1,uVar1) & unaff_r14[2];
  uVar2 = *unaff_r14;
  *unaff_r14 = uVar3 | uVar2;
  unaff_r14[4] = uVar3 & uVar2 | unaff_r14[4];
  return 0x10;
}

