
void FUN_000b16cc(char param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((param_1 != '\0') && (bVar1 = DAT_fffec680 + 1, bVar1 < DAT_fffec680)) {
    bVar1 = 0xff;
  }
  *param_2 = bVar1;
  DAT_fffec680 = bVar1;
  return;
}

