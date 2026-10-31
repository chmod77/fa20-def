
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f1958(char param_1,ushort param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,undefined1 *param_8,ushort *param_9,ushort *param_10)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 uVar5;
  
  bVar1 = param_3 != DAT_fffed67d;
  bVar2 = param_4 != DAT_fffed67c;
  uVar4 = 0;
  if (!bVar1) {
    uVar4 = _DAT_fffed67a;
  }
  *param_9 = uVar4;
  if (bVar1) {
    _DAT_fffed67a = 0;
  }
  else if (uVar4 == 0xffff) {
    _DAT_fffed67a = -1;
  }
  else {
    _DAT_fffed67a = uVar4 + 1;
  }
  uVar3 = 0;
  if (!bVar2) {
    uVar3 = _DAT_fffed678;
  }
  uVar5 = 0;
  if (param_1 != '\0') {
    if (((((0x3b < param_2) && (!bVar1)) && (299 < uVar4)) && ((!bVar2 && (299 < uVar3)))) &&
       ((param_5 != '\0' && ((param_6 == '\0' && (param_7 == '\0')))))) {
      uVar5 = 1;
    }
  }
  *param_8 = uVar5;
  *param_10 = uVar3;
  if (bVar2) {
    _DAT_fffed678 = 0;
  }
  else if (uVar3 == 0xffff) {
    _DAT_fffed678 = -1;
  }
  else {
    _DAT_fffed678 = uVar3 + 1;
  }
  DAT_fffed67d = param_3;
  DAT_fffed67c = param_4;
  return;
}

