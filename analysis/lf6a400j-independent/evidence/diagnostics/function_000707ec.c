
int FUN_000707ec(void)

{
  undefined1 *puVar1;
  byte extraout_var;
  int iVar2;
  
  puVar1 = DAT_000709d8;
  if ((*DAT_000709d0 < 3) || ((*DAT_000709d0 & 1) == 0)) {
    *DAT_000709d8 = 0x7f;
    puVar1[1] = 2;
    iVar2 = 0x12;
    puVar1[2] = 0x12;
    *DAT_000709ec = 3;
  }
  else {
    FUN_000713b6(DAT_000709d8 + 1,DAT_000709d4,(short)*DAT_000709d0 + -1);
    iVar2 = (int)(char)extraout_var;
    if (extraout_var == 0) {
      *DAT_000709e0 = *(undefined2 *)PTR_DAT_000709dc;
      *DAT_000709e4 = 1;
      *DAT_000709e8 = 1;
    }
    else {
      *DAT_000709ec = extraout_var + 1;
      *puVar1 = 0x42;
    }
  }
  return iVar2;
}

