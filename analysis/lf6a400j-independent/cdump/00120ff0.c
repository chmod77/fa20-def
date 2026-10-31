
/* WARNING: Removing unreachable block (ram,0x00121020) */

void FUN_00120ff0(byte param_1,short param_2,uint param_3,undefined1 *param_4)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar1 = LK_133F40((uint)&T_02FF6C,param_3);
  DAT_fffee1c8 = (int)((uVar1 & 0xffff) - 0x3200) <= (int)param_2;
  uVar2 = 0;
  if ((3 < param_1) && ((bool)DAT_fffee1c8)) {
    uVar2 = 1;
  }
  *param_4 = uVar2;
  return;
}

