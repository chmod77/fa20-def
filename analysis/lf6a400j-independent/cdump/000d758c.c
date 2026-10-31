
/* WARNING: Removing unreachable block (ram,0x000d7624) */

void FUN_000d758c(ushort param_1,ushort param_2,ushort param_3,undefined1 *param_4)

{
  ushort uVar1;
  
  if (DAT_fffecf01 == '\0') {
    uVar1 = 0xffff;
  }
  else {
    uVar1 = 0xf999;
  }
  DAT_fffecf01 = uVar1 <= param_3;
  if (DAT_fffecf00 == '\0') {
    uVar1 = 0xe14;
  }
  else {
    uVar1 = 0xe07;
  }
  DAT_fffecf00 = uVar1 <= param_2;
  if ((param_1 < 0x599a) && ((bool)DAT_fffecf00)) {
    *param_4 = 1;
  }
  else {
    *param_4 = 0;
  }
  return;
}

