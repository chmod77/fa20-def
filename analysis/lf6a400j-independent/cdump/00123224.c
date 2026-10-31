
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00123224(short param_1,uint param_2,undefined4 param_3,short param_4,undefined2 *param_5)

{
  uint uVar1;
  
  if (DAT_fffee274 == '\0') {
    DAT_fffee275 = '\0';
    DAT_fffee274 = '\x01';
  }
  _DAT_ffff19f6 = param_1;
  if (DAT_fffee275 != '\0') {
    _DAT_ffff19f6 = param_4;
    FUN_0016b55c(&DAT_ffff19f6,param_1,0xffffffff);
  }
  DAT_fffee275 = 1;
  uVar1 = LK_1390DC((uint)&T_02FFE0,param_2,(int)_DAT_ffff19f6);
  *param_5 = (short)uVar1;
  return;
}

