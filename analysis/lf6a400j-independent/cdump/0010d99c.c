
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010d99c(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_18 [4];
  byte abStack_14 [8];
  
  FUN_0010da4c((int)DAT_fffefa45,(DAT_fffeeec2 & 4) != 0,(int)_DAT_fffeef10,local_18);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff07db | 1;
  if ((local_18[0] & 1) == 0) {
    bVar2 = DAT_ffff07db & 0xfe;
  }
  DAT_ffff07db = bVar2;
  FUN_00001550(uVar1);
  FUN_0010da78((int)DAT_fffefa45,(DAT_fffeeec2 & 4) != 0,(int)_DAT_fffeeee0,(int)_DAT_fffeeede,
               abStack_14);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff07dc | 1;
  if ((abStack_14[0] & 1) == 0) {
    bVar2 = DAT_ffff07dc & 0xfe;
  }
  DAT_ffff07dc = bVar2;
  FUN_00001550(uVar1);
  return;
}

