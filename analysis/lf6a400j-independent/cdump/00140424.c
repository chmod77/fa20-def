
undefined4 FUN_00140424(ushort param_1,uint param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  param_2 = param_2 & 0xffff;
  uVar2 = 0;
  if ((param_2 != 0) && (param_1 < 0x10e)) {
    if (0x6f < param_1) {
      param_1 = param_1 + 0x70;
    }
    for (; param_2 != 0; param_2 = param_2 - 1) {
      bVar1 = FUN_00140702(param_1 & 7);
      if ((bVar1 & (&DAT_ffff1cb1)[(int)(uint)param_1 >> 3 & 0xff]) != 0) {
        uVar2 = 1;
      }
      param_1 = param_1 + 1;
    }
  }
  return uVar2;
}

