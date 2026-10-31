
/* WARNING: Removing unreachable block (ram,0x000e3f84) */

void FUN_000e3f4c(char param_1,char param_2,char param_3,char param_4,ushort param_5,byte param_6,
                 short param_7,undefined1 *param_8)

{
  undefined1 uVar1;
  byte bVar2;
  
  if (DAT_fffed2b4 == '\0') {
    bVar2 = 10;
  }
  else {
    bVar2 = 0xc;
  }
  uVar1 = 0;
  if ((((param_1 != '\0') || ((param_2 != '\0' && (param_3 != '\0')))) && (0xb7ff < param_5)) &&
     ((param_6 <= bVar2 && ((param_4 == '\0' || (param_7 != -1)))))) {
    uVar1 = 1;
  }
  *param_8 = uVar1;
  DAT_fffed2b4 = param_6 <= bVar2;
  return;
}

