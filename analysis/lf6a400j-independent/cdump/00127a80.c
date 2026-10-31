
/* WARNING: Removing unreachable block (ram,0x00127ae2) */
/* WARNING: Removing unreachable block (ram,0x00127b2c) */
/* WARNING: Removing unreachable block (ram,0x00127b08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00127a80(char param_1,ushort param_2,ushort param_3,undefined2 param_4,char param_5,
                 ushort param_6,uint param_7,uint param_8,undefined2 param_9,undefined2 param_10,
                 char param_11,undefined2 *param_12)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  short sVar4;
  
  iVar3 = (param_7 & 0xffff) - (param_8 & 0xffff);
  if (iVar3 < 0x8000) {
    sVar4 = (short)iVar3;
    if (iVar3 < -0x8000) {
      sVar4 = -0x8000;
    }
  }
  else {
    sVar4 = 0x7fff;
  }
  bVar1 = 0;
  if (((param_5 != '\0') && (0xa9 < sVar4)) && (0x4b < param_6)) {
    bVar1 = 1;
  }
  bVar2 = 0;
  if ((0x1c2 < param_6) && (param_5 != '\0')) {
    bVar2 = 1;
  }
  if (bVar2 <= DAT_fffee346) {
    param_9 = param_10;
  }
  if ((param_11 != '\0') || (DAT_fffee347 < bVar1)) {
    param_9 = 0;
  }
  if (((param_1 == '\0') || (param_2 < 0x96)) || (0x578 < param_3)) {
    *param_12 = param_9;
  }
  else {
    *param_12 = 0;
  }
  _DAT_fffee344 = param_4;
  DAT_fffee347 = bVar1;
  DAT_fffee346 = bVar2;
  return;
}

