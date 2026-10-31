
/* WARNING: Removing unreachable block (ram,0x00127cb2) */
/* WARNING: Removing unreachable block (ram,0x00127cd4) */
/* WARNING: Removing unreachable block (ram,0x00127d1c) */
/* WARNING: Removing unreachable block (ram,0x00127cfa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00127c54(char param_1,ushort param_2,ushort param_3,undefined2 param_4,char param_5,
                 ushort param_6,uint param_7,uint param_8,undefined2 param_9,char param_10,
                 undefined2 *param_11)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  short sVar4;
  
  iVar3 = (param_7 & 0xffff) - (param_8 & 0xffff);
  sVar4 = 0x7fff;
  if ((iVar3 < 0x8000) && (sVar4 = -0x8000, -0x8001 < iVar3)) {
    sVar4 = (short)iVar3;
  }
  bVar1 = 0;
  if (((param_5 != '\0') && (0xa9 < sVar4)) && (0x4b < param_6)) {
    bVar1 = 1;
  }
  bVar2 = 0;
  if ((0x1c2 < param_6) && (param_5 != '\0')) {
    bVar2 = 1;
  }
  if (DAT_fffee34e < bVar2) {
    param_9 = 0xa60;
  }
  if (DAT_fffee34f < bVar1) {
    param_9 = 0xa60;
  }
  if ((param_10 == '\0') && (((param_1 == '\0' || (param_2 < 0x96)) || (0x578 < param_3)))) {
    *param_11 = param_9;
  }
  else {
    *param_11 = 0;
  }
  _DAT_fffee34c = param_4;
  DAT_fffee34f = bVar1;
  DAT_fffee34e = bVar2;
  return;
}

