
/* WARNING: Removing unreachable block (ram,0x000a5598) */
/* WARNING: Removing unreachable block (ram,0x000a559c) */
/* WARNING: Removing unreachable block (ram,0x000a5554) */
/* WARNING: Removing unreachable block (ram,0x000a55d2) */
/* WARNING: Removing unreachable block (ram,0x000a55d6) */

void FUN_000a5518(undefined4 param_1,char param_2,undefined4 param_3,byte param_4,char param_5,
                 char param_6,undefined1 *param_7)

{
  byte bVar1;
  
  if (param_2 != '\0') {
    if (DAT_fffec373 == '\0') {
      bVar1 = 2;
    }
    else {
      bVar1 = 3;
    }
    DAT_fffec373 = param_4 < bVar1;
    if (DAT_fffec372 == '\0') {
      bVar1 = 0xff;
    }
    else {
      bVar1 = 0xfe;
    }
    DAT_fffec372 = bVar1 <= param_4;
    if ((bool)DAT_fffec373) {
      DAT_fffec370 = 1;
    }
    else if ((bool)DAT_fffec372) {
      DAT_fffec370 = 3;
    }
    else {
      DAT_fffec370 = 2;
    }
  }
  if (param_2 == '\0') {
    if (param_5 == '\0') {
      DAT_fffec371 = 1;
    }
    else if (param_6 == '\0') {
      DAT_fffec371 = 2;
    }
    else {
      DAT_fffec371 = 3;
    }
  }
  if (param_2 == '\0') {
    *param_7 = DAT_fffec371;
  }
  else {
    *param_7 = DAT_fffec370;
  }
  return;
}

