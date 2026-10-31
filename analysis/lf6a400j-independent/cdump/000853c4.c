
void FUN_000853c4(ushort param_1,char param_2,char param_3,byte param_4,char param_5,
                 undefined2 *param_6)

{
  int iVar1;
  uint uVar2;
  
  if ((param_3 == '\x03') || (param_3 == '\x04')) {
    uVar2 = (uint)(short)((short)param_2 -
                         ((short)((uint)((short)((ushort)param_4 + (short)param_5) * 0xb4) >> 8) +
                          (param_1 & 0xff) + -0x20));
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
  }
  else {
    iVar1 = (int)(short)((short)param_2 - (param_1 & 0xff));
    uVar2 = 0;
    if (-0x21 < iVar1) {
      uVar2 = iVar1 + 0x20;
    }
  }
  uVar2 = LK_133E10((uint)&T_02C8DC,uVar2);
  *param_6 = (short)uVar2;
  return;
}

