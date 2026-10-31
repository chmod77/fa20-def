
void FUN_00070980(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte extraout_var;
  
  puVar2 = DAT_00070c74;
  puVar1 = DAT_000709d8;
  if (*DAT_000709d0 < 2) {
    *DAT_00070c74 = 0x7f;
    puVar2[1] = 6;
    puVar2[2] = 0x12;
    *DAT_00070c78 = 3;
  }
  else {
    (*(code *)PTR_FUN_00070a24)(DAT_000709d8 + 1,DAT_000709d4,(short)*DAT_000709d0 + -1);
    if (extraout_var == 0) {
      *DAT_000709e0 = *(undefined2 *)PTR_DAT_000709dc;
      *DAT_000709e4 = 1;
      *DAT_000709e8 = 1;
    }
    else {
      *DAT_000709ec = extraout_var + 1;
      *puVar1 = 0x46;
    }
  }
  return;
}

