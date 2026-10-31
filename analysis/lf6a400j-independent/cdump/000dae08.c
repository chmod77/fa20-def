
void FUN_000dae08(ushort param_1,char param_2,byte param_3,ushort param_4,ushort *param_5)

{
  int iVar1;
  ushort uVar2;
  
  if ((param_2 == '\0') || (param_3 <= DAT_fffed050)) {
    *param_5 = param_4;
  }
  else {
    uVar2 = 0xffff;
    if (param_4 < 0x1c72) {
      uVar2 = param_4 * 9;
    }
    iVar1 = __udiv32_r1_by_r0((uint)param_1 + (uint)uVar2 + 5,10);
    *param_5 = (ushort)iVar1;
  }
  DAT_fffed050 = param_3;
  return;
}

