
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00064e3a(void)

{
  int iVar1;
  ushort *puVar2;
  
  if (0x2fff < _DAT_ffff002e) {
    puVar2 = &DAT_00019986;
    iVar1 = __sdiv32_r1_by_r0(0xbb8000,(uint)_DAT_ffff002e);
    if (iVar1 <= (int)(uint)*puVar2) {
      _v_Throttle_Motor_Duty_0128 = -(short)iVar1;
      return;
    }
  }
  _v_Throttle_Motor_Duty_0128 = 0xfc18;
  return;
}

