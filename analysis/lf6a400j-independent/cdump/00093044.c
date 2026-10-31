
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00093044(char param_1,char param_2,ushort param_3,uint param_4,undefined1 *param_5)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  
  uVar2 = 0;
  if (param_1 != '\0') {
    uVar2 = _DAT_fffebe50;
  }
  puVar3 = (undefined *)(uint)uVar2;
  if (param_1 == '\0') {
    _DAT_fffebe50 = 0;
  }
  else if (puVar3 < &DAT_0000ffff) {
    _DAT_fffebe50 = uVar2 + 1;
  }
  else {
    _DAT_fffebe50 = -1;
  }
  uVar1 = LK_133F40((uint)&T_02D33C,param_4);
  if ((((&UNK_00000031 < puVar3) && (param_2 == '\0')) && (param_3 < 0x8ccd)) ||
     (((undefined *)(uVar1 & 0xffff) <= puVar3 && (param_2 == '\0')))) {
    DAT_fffebe52 = 1;
  }
  if (param_2 != '\0') {
    DAT_fffebe52 = 0;
  }
  *param_5 = DAT_fffebe52;
  return;
}

