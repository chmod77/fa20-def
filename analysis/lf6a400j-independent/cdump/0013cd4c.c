
/* WARNING: Removing unreachable block (ram,0x0013cda8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0013cd4c(void)

{
  undefined4 uVar1;
  uint in_sr;
  
  if ((_DAT_ffff2634 & 0xffffefff) == 0) {
    if ((in_sr & 0xf0) == 0) goto LAB_0013cd98;
    FUN_0013d054(2,0x1c,_DAT_ffff2634);
  }
  else {
    if ((_DAT_ffff2634 & 0xfffbe0ff) == 0) {
LAB_0013cd98:
      FUN_0013d910();
      uVar1 = FUN_0013ce14();
      return uVar1;
    }
    FUN_0013d054(2,0x1c,_DAT_ffff2634);
  }
  return 2;
}

