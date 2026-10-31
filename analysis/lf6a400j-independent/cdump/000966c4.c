
/* WARNING: Removing unreachable block (ram,0x000966e2) */
/* WARNING: Removing unreachable block (ram,0x00096718) */

void FUN_000966c4(char param_1,char param_2,char param_3,undefined4 param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  byte bVar2;
  
  if (1 < DAT_fffebf34) {
    DAT_fffebf34 = 0;
  }
  bVar2 = DAT_fffebf34;
  if ((param_2 != '\0') && (bVar2 = 0xff, DAT_fffebf34 != 0xff)) {
    bVar2 = DAT_fffebf34 + 1;
  }
  if (param_1 != '\0') {
    bVar2 = 0;
  }
  uVar1 = 1;
  if (bVar2 < 2) {
    uVar1 = DAT_fffebf35;
  }
  if (param_3 != '\0') {
    uVar1 = 0;
  }
  *param_5 = uVar1;
  DAT_fffebf35 = uVar1;
  DAT_fffebf34 = bVar2;
  return;
}

