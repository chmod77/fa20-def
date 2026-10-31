
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_000d8128(ushort param_1,ushort param_2,undefined4 param_3,short param_4,undefined2 *param_5,
            ushort *param_6)

{
  ushort uVar2;
  int iVar1;
  float fVar3;
  float fVar4;
  
  fVar4 = (((float)param_1 * 6.3999996 + -(float)(int)param_4 * 0.79999995) * 11359.0 *
           (float)param_2 * 4.0 * 5.9604645e-05) / 33333332.0;
  fVar3 = 655.35;
  if ((fVar4 <= 655.35) && (fVar3 = fVar4, fVar4 < 0.0)) {
    fVar3 = 0.0;
  }
  uVar2 = 0xffff;
  if ((fVar3 <= 655.35) && (uVar2 = 0, 0.0 <= fVar3)) {
    uVar2 = (ushort)(int)(fVar3 * 100.0);
  }
  *param_6 = uVar2;
  iVar1 = (int)((ulonglong)((longlong)(int)(((uint)uVar2 - (uint)_DAT_fffecf44) * 0x80) * 0x2000000)
               >> 0x20) + (uint)_DAT_fffecf44;
  if (iVar1 < (int)&DAT_00010000) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    _DAT_fffecf44 = (ushort)iVar1;
  }
  else {
    _DAT_fffecf44 = 0xffff;
  }
  *param_5 = _DAT_fffecf44;
  return 0xffffff80;
}

