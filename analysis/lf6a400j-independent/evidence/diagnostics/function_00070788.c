
void FUN_00070788(void)

{
  undefined1 *puVar1;
  byte extraout_var;
  
  puVar1 = DAT_000709d8;
  if (*DAT_000709d0 < 2) {
    *DAT_000709d8 = 0x7f;
    puVar1[1] = 1;
    puVar1[2] = 0x12;
    *DAT_000709ec = 3;
  }
  else {
    FUN_00070b58(DAT_000709d8 + 1,DAT_000709d4,(short)*DAT_000709d0 + -1);
    if (extraout_var == 0) {
      *DAT_000709e0 = *(undefined2 *)PTR_DAT_000709dc;
      *DAT_000709e4 = 1;
      *DAT_000709e8 = 1;
    }
    else {
      *DAT_000709ec = extraout_var + 1;
      *puVar1 = 0x41;
    }
  }
  return;
}

