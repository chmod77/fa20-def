
/* WARNING: Removing unreachable block (ram,0x000ce624) */

void FUN_000ce600(byte param_1,char param_2,undefined1 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  
  if (DAT_fffeccec == '\0') {
    bVar1 = 0x5a;
  }
  else {
    bVar1 = 0x5c;
  }
  uVar2 = 0;
  if ((param_2 == '\0') && (param_1 <= bVar1)) {
    uVar2 = 1;
  }
  *param_3 = uVar2;
  DAT_fffeccec = param_1 <= bVar1;
  return;
}

