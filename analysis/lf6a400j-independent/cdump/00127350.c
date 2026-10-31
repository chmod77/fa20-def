
/* WARNING: Removing unreachable block (ram,0x001273aa) */
/* WARNING: Removing unreachable block (ram,0x001273c0) */
/* WARNING: Removing unreachable block (ram,0x001273f0) */
/* WARNING: Removing unreachable block (ram,0x001273d2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00127350(char param_1,ushort param_2,ushort param_3,undefined2 param_4,ushort param_5,
                 uint param_6,uint param_7,char param_8,char param_9,char param_10,
                 undefined1 *param_11)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  short sVar4;
  
  iVar3 = (param_6 & 0xffff) - (param_7 & 0xffff);
  sVar4 = 0x7fff;
  if ((iVar3 < 0x8000) && (sVar4 = (short)iVar3, iVar3 < -0x8000)) {
    sVar4 = -0x8000;
  }
  if ((param_8 == '\0') || (cVar2 = '\x01', param_5 < 0x1c3)) {
    cVar2 = DAT_fffee32e;
  }
  if ((((param_1 != '\0') && (0x95 < param_2)) && (param_3 < 0x579)) ||
     (((param_8 != '\0' && (0x4b < param_5)) && (0xa9 < sVar4)))) {
    cVar2 = '\x01';
  }
  if (param_10 != '\0') {
    cVar2 = '\0';
  }
  uVar1 = 1;
  if ((param_9 != '\x01') && (cVar2 != '\x01')) {
    uVar1 = 0;
  }
  *param_11 = uVar1;
  _DAT_fffee32c = param_4;
  DAT_fffee32e = cVar2;
  return;
}

