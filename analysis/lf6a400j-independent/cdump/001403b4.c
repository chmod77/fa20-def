
void FUN_001403b4(ushort param_1,uint param_2)

{
  undefined2 uVar2;
  byte bVar3;
  uint uVar1;
  
  param_2 = param_2 & 0xffff;
  if ((param_2 != 0) && (param_1 < 0x10e)) {
    if (0x6f < param_1) {
      param_1 = param_1 + 0x70;
    }
    uVar2 = FUN_00001550(0xf0);
    for (; param_2 != 0; param_2 = param_2 - 1) {
      bVar3 = FUN_00140702(param_1 & 7);
      uVar1 = (int)(uint)param_1 >> 3 & 0xff;
      (&DAT_ffff1cb1)[uVar1] = (&DAT_ffff1cb1)[uVar1] | bVar3;
      param_1 = param_1 + 1;
    }
    FUN_00001550(uVar2);
    return;
  }
  return;
}

