
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dcaac(void)

{
  uint uVar1;
  
  FUN_000defb0((int)(short)_DAT_fffeeede,DAT_ffff06bf & 1,&DAT_ffff06c7);
  FUN_000defe8((int)(short)_DAT_fffeeede,DAT_ffff06bf & 1,&DAT_ffff06c8);
  if ((DAT_ffff06bf & 1) == 0) {
    uVar1 = LK_133BCC((uint)&DAT_0002f098,(uint)_DAT_fffeeede);
    DAT_ffff06c9 = (undefined1)uVar1;
  }
  else {
    uVar1 = LK_133BCC((uint)&DAT_0002f0a4,(uint)_DAT_fffeeede);
    DAT_ffff06c9 = (undefined1)uVar1;
  }
  return;
}

