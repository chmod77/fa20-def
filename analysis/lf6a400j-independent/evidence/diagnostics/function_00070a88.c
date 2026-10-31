
void FUN_00070a88(void)

{
  undefined1 *puVar1;
  byte extraout_var;
  
  puVar1 = DAT_00070c74;
  if (*DAT_00070c7c < 2) {
    *DAT_00070c74 = 0x7f;
    puVar1[1] = 9;
    puVar1[2] = 0x12;
    *DAT_00070c78 = 3;
  }
  else {
    (*(code *)PTR_FUN_00070c8c)(DAT_00070c74 + 1,DAT_00070c88,(short)*DAT_00070c7c + -1);
    if (extraout_var == 0) {
      *DAT_00070c94 = *(undefined2 *)PTR_DAT_00070c90;
      *DAT_00070c98 = 1;
      *DAT_00070c9c = 1;
    }
    else {
      *DAT_00070c78 = extraout_var + 1;
      *puVar1 = 0x49;
      *DAT_00070c9c = 0;
    }
  }
  return;
}

