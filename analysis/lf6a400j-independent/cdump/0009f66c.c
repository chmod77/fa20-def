
/* WARNING: Removing unreachable block (ram,0x0009f690) */

void FUN_0009f66c(ushort param_1,undefined1 param_2,undefined1 *param_3)

{
  ushort uVar1;
  
  if (DAT_fffec108 == '\0') {
    uVar1 = 0x7e00;
  }
  else {
    uVar1 = 0x8000;
  }
  if (param_1 > uVar1) {
    param_2 = DAT_fffec109;
  }
  *param_3 = param_2;
  DAT_fffec109 = param_2;
  DAT_fffec108 = param_1 <= uVar1;
  return;
}

