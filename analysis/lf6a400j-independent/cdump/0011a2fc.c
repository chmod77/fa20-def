
/* WARNING: Removing unreachable block (ram,0x0011a3c4) */
/* WARNING: Removing unreachable block (ram,0x0011a40a) */
/* WARNING: Removing unreachable block (ram,0x0011a412) */
/* WARNING: Removing unreachable block (ram,0x0011a414) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011a2fc(char param_1,undefined1 param_2,byte param_3,ushort param_4,char param_5,
                 ushort param_6,undefined4 param_7,undefined2 param_8,undefined2 param_9,
                 char param_10,undefined2 *param_11)

{
  bool bVar1;
  ushort uVar2;
  undefined *local_24;
  
  if (param_5 == -0x5b) {
    uVar2 = 0x4b;
  }
  else {
    uVar2 = 0x7d;
  }
  bVar1 = false;
  if (((DAT_fffee00e != '\0') && (DAT_fffee00f > param_3)) && (param_4 > uVar2)) {
    bVar1 = true;
  }
  if ((param_1 != '\0') && (bVar1)) {
    local_24 = (undefined *)((uint)_DAT_fffee00c * 0x28);
  }
  if (((param_1 == '\0') || (DAT_fffee00e == '\0')) ||
     ((DAT_fffee00f <= param_3 || ((param_4 <= uVar2 || (param_6 < 0x3201)))))) {
    if ((param_1 != '\0') && (bVar1)) {
      if (local_24 < &DAT_00010000) {
        param_9 = SUB42(local_24,0);
      }
      else {
        param_9 = 0xffff;
      }
    }
  }
  else {
    param_9 = 0xffff;
  }
  if ((param_10 == '\0') && (param_1 != '\0')) {
    *param_11 = param_9;
  }
  else {
    *param_11 = 0;
  }
  DAT_fffee00f = param_3;
  DAT_fffee00e = param_2;
  _DAT_fffee00c = param_8;
  return;
}

