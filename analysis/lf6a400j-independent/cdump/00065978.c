
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00065978(void)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if (5 < (uVar3 & 0xffff)) {
LAB_00065a10:
      if (0x117 < _DAT_ffff008e) {
        _DAT_ffff01c4 = 600;
      }
      if (_DAT_ffff008e < 0x28) {
        _DAT_ffff01c4 = 1000;
      }
      iVar2 = FUN_00062b8e(1000,(int)_DAT_ffff01c4);
      iVar2 = __sdiv32_r1_by_r0(iVar2,1000);
      _v_Throttle_Motor_Duty_0128 = -(short)iVar2;
      return;
    }
    uVar3 = uVar3 & 0xffff;
    if (((ushort)(&DAT_00019854)[uVar3] <= _DAT_ffff008e) &&
       (iVar2 = uVar3 + 1, _DAT_ffff008e < (ushort)(&DAT_00019854)[iVar2])) {
      sVar1 = (&DAT_000199ac)[iVar2];
      iVar2 = __udiv32_r1_by_r0(((uint)(ushort)(&DAT_000199ac)[uVar3] -
                                (uint)(ushort)(&DAT_000199ac)[iVar2]) *
                                (((uint)(ushort)(&DAT_00019854)[iVar2] -
                                 (uint)(ushort)(&DAT_00019854)[uVar3]) -
                                ((uint)_DAT_ffff008e - (uint)(ushort)(&DAT_00019854)[uVar3])),
                                (uint)(ushort)(&DAT_00019854)[iVar2] -
                                (uint)(ushort)(&DAT_00019854)[uVar3]);
      _DAT_ffff01c4 = (short)iVar2 + sVar1;
      goto LAB_00065a10;
    }
    uVar3 = uVar3 + 1;
  } while( true );
}

