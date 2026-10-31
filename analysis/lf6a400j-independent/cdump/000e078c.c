
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e078c(char param_1,char param_2,uint param_3,uint param_4,char param_5,char param_6,
                 char param_7,undefined2 *param_8)

{
  undefined2 uVar1;
  uint local_24;
  undefined *puStack_20;
  
  param_3 = param_3 & 0xffff;
  puStack_20 = (undefined *)0x0;
  if (param_3 != 0) {
    puStack_20 = (undefined *)(param_4 << 0xb);
    local_24 = param_4 >> 0x15;
    FUN_0016c364(&local_24,param_3 * 0x19,param_3,local_24,&local_24);
    if ((local_24 != 0) || (&DAT_0000ffff < puStack_20)) {
      puStack_20 = &DAT_0000ffff;
    }
  }
  uVar1 = (short)puStack_20;
  if (param_5 == '\0') {
    uVar1 = _DAT_fffed1d8;
  }
  if ((((param_7 != '\0') || (param_1 != '\0')) || (param_2 != '\0')) || (param_6 != '\0')) {
    uVar1 = 0;
  }
  *param_8 = uVar1;
  _DAT_fffed1d8 = uVar1;
  return;
}

