
/* WARNING: Removing unreachable block (ram,0x00119f24) */

void FUN_00119ea8(char param_1,char param_2,char param_3,undefined4 param_4,undefined4 param_5,
                 ushort param_6,char param_7,undefined1 *param_8)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = false;
  if ((param_1 != '\0') && (param_2 != '\0')) {
    bVar1 = true;
  }
  if (((!bVar1) || (param_3 == '\0')) || (uVar2 = 1, param_6 < 0x1e00)) {
    uVar2 = DAT_fffedffc;
  }
  if ((param_7 != '\0') || (!bVar1)) {
    uVar2 = 0;
  }
  *param_8 = uVar2;
  DAT_fffedffc = uVar2;
  return;
}

