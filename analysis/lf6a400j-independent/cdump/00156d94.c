
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00156d94(void)

{
  uint uVar1;
  byte bVar2;
  
  _DAT_fffeef56 = FUN_001493a6();
  uVar1 = thunk_FUN_0014da4a();
  bVar2 = DAT_fffee6bc | 0x10;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_fffee6bc & 0xef;
  }
  DAT_fffee6bc = bVar2;
  DAT_fffee738 = thunk_FUN_0014da1c(0);
  DAT_fffee739 = thunk_FUN_0014da1c(1);
  DAT_fffee73a = thunk_FUN_0014da1c(2);
  DAT_fffee73b = thunk_FUN_0014da1c(3);
  return;
}

