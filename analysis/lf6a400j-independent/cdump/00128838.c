
/* WARNING: Removing unreachable block (ram,0x0012889c) */
/* WARNING: Removing unreachable block (ram,0x00128876) */
/* WARNING: Removing unreachable block (ram,0x001288d6) */
/* WARNING: Removing unreachable block (ram,0x001288ac) */

void FUN_00128838(byte param_1,ushort param_2,undefined4 param_3,undefined4 param_4,char param_5,
                 undefined1 *param_6)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = false;
  if ((0x4b < param_2) && (param_1 != 0)) {
    bVar1 = true;
  }
  uVar2 = 0;
  if (DAT_fffee374 <= param_1) {
    uVar2 = DAT_fffee375;
  }
  if ((param_5 == '\0') && ((param_1 == 0 || (0x4b < param_2)))) {
    if (bVar1) {
      uVar2 = 1;
      goto LAB_001288ea;
    }
    if ((param_1 == 0) || (param_2 < 0x1c3)) goto LAB_001288ea;
  }
  uVar2 = 0;
LAB_001288ea:
  *param_6 = uVar2;
  DAT_fffee375 = uVar2;
  DAT_fffee374 = param_1;
  return;
}

