
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00156800(void)

{
  uint uVar1;
  
  _DAT_ffff2986 = FUN_001426aa();
  DAT_ffff29d3 = FUN_001426a4();
  uVar1 = FUN_00149652(0);
  uVar1 = (uVar1 & 0xffff) >> 8;
  if (uVar1 * 32000 < 0x7fff8000) {
    DAT_fffee6de = (undefined1)((uint)(&DAT_0000ffff + uVar1 * 64000) >> 0x10);
  }
  else {
    DAT_fffee6de = 0xff;
  }
  DAT_fffee6df = DAT_fffee6de;
  DAT_fffee6e0 = DAT_fffee6de;
  DAT_fffef89a = FUN_0014278c(0);
  DAT_fffef89b = FUN_0014278c(1);
  DAT_fffef89c = FUN_0014278c(2);
  DAT_fffef89d = FUN_0014278c(3);
  DAT_fffefa02 = FUN_0014278c(0);
  DAT_fffefa03 = FUN_0014278c(1);
  DAT_fffefa04 = FUN_0014278c(2);
  DAT_fffefa05 = FUN_0014278c(3);
  DAT_ffff2ade = FUN_0014f72e();
  DAT_fffefa06 = FUN_00142830();
  return;
}

