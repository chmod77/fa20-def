
/* WARNING: Removing unreachable block (ram,0x001277dc) */
/* WARNING: Removing unreachable block (ram,0x00127822) */
/* WARNING: Removing unreachable block (ram,0x00127800) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00127784(char param_1,ushort param_2,ushort param_3,undefined2 param_4,char param_5,
                 ushort param_6,uint param_7,uint param_8,undefined2 param_9,char param_10,
                 undefined2 *param_11)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  byte bVar4;
  int iVar5;
  
  iVar5 = (param_7 & 0xffff) - (param_8 & 0xffff);
  sVar2 = 0x7fff;
  if ((iVar5 < 0x8000) && (sVar2 = -0x8000, -0x8001 < iVar5)) {
    sVar2 = (short)iVar5;
  }
  bVar1 = 0;
  if (((param_5 != '\0') && (0xa9 < sVar2)) && (0x4b < param_6)) {
    bVar1 = 1;
  }
  bVar4 = 0;
  if ((0x1c2 < param_6) && (param_5 != '\0')) {
    bVar4 = 1;
  }
  iVar5 = sVar2 * 4000;
  uVar3 = 0x7fff;
  if (iVar5 < 0x7fff01) {
    if (iVar5 < -0x7fff01) {
      uVar3 = 0x8000;
    }
    else {
      uVar3 = (undefined2)((uint)iVar5 >> 8);
    }
  }
  if (DAT_fffee33f < bVar4) {
    param_9 = uVar3;
  }
  if (DAT_fffee33e < bVar1) {
    param_9 = uVar3;
  }
  if ((param_10 == '\0') && (((param_1 == '\0' || (param_2 < 0x96)) || (0x578 < param_3)))) {
    *param_11 = param_9;
  }
  else {
    *param_11 = 0;
  }
  _DAT_fffee33c = param_4;
  DAT_fffee33e = bVar1;
  DAT_fffee33f = bVar4;
  return;
}

