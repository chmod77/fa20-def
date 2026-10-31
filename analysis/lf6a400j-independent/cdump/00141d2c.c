
uint FUN_00141d2c(uint param_1)

{
  uint uVar1;
  
  param_1 = param_1 & 0xff;
  if (param_1 == 0) {
    for (uVar1 = 0; (uVar1 & 0xff) < 0x20; uVar1 = uVar1 + 1) {
      uVar1 = uVar1 & 0xff;
      param_1 = uVar1 * 6;
      *(undefined2 *)(param_1 - 0x74d6) = (&DAT_00161764)[uVar1 * 3];
      *(undefined2 *)(param_1 - 0x74d4) = (&DAT_00161766)[uVar1 * 3];
      *(undefined2 *)(param_1 - 0x74d2) = (&DAT_00161768)[uVar1 * 3];
    }
  }
  else if (param_1 == 1) {
    for (uVar1 = 0; (uVar1 & 0xff) < 0x20; uVar1 = uVar1 + 1) {
      uVar1 = uVar1 & 0xff;
      param_1 = uVar1 * 6;
      *(undefined2 *)(param_1 - 0x74d6) = (&DAT_00161824)[uVar1 * 3];
      *(undefined2 *)(param_1 - 0x74d4) = (&DAT_00161826)[uVar1 * 3];
      *(undefined2 *)(param_1 - 0x74d2) = (&DAT_00161828)[uVar1 * 3];
    }
  }
  else if (param_1 == 2) {
    for (uVar1 = 0; (uVar1 & 0xff) < 0x20; uVar1 = uVar1 + 1) {
      uVar1 = uVar1 & 0xff;
      param_1 = uVar1 * 6;
      *(undefined2 *)(param_1 - 0x74d6) = (&DAT_001618e4)[uVar1 * 3];
      *(undefined2 *)(param_1 - 0x74d4) = (&DAT_001618e6)[uVar1 * 3];
      *(undefined2 *)(param_1 - 0x74d2) = (&DAT_001618e8)[uVar1 * 3];
    }
  }
  return param_1;
}

