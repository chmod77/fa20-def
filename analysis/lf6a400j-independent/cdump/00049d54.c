
uint FUN_00049d54(void)

{
  uint uVar1;
  undefined2 *puVar2;
  
  if (((int)DAT_fffef050 & 1U) != 0) {
    for (puVar2 = (undefined2 *)&DAT_fffef720; puVar2 < &DAT_ffff0000; puVar2 = puVar2 + 1) {
      *puVar2 = 0;
    }
    for (puVar2 = (undefined2 *)&DAT_ffff3160; puVar2 < &DAT_ffff34c0; puVar2 = puVar2 + 1) {
      *puVar2 = 0;
    }
    FUN_00049d9c();
    FUN_000493d8();
    FUN_0004689c();
    uVar1 = FUN_00060f24();
    return uVar1;
  }
  return (int)DAT_fffef050;
}

