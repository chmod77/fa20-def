
/* WARNING: Removing unreachable block (ram,0x001287f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001287d0(char param_1,ushort param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  
  uVar1 = _DAT_fffee370;
  if ((((param_1 != '\0') && (param_2 < 0x4c)) && (0x25 < param_2)) &&
     (uVar1 = _DAT_fffee370 + (param_3 & 0xffff), uVar1 < _DAT_fffee370)) {
    uVar1 = 0xffffffff;
  }
  if (param_1 == '\0') {
    uVar1 = 0;
  }
  *param_4 = uVar1;
  _DAT_fffee370 = uVar1;
  return;
}

