
/* WARNING: Removing unreachable block (ram,0x000d8344) */
/* WARNING: Removing unreachable block (ram,0x000d8338) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d82e0(ushort param_1,ushort param_2,uint param_3,char param_4,char param_5,char param_6,
                 undefined1 *param_7,undefined2 *param_8)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  char cVar4;
  undefined1 uVar5;
  ushort uVar6;
  
  uVar6 = 0;
  if (param_2 <= param_1) {
    uVar6 = param_1 - param_2;
  }
  uVar3 = LK_133F40((uint)&T_02EDF4,param_3);
  *param_8 = (short)uVar3;
  DAT_fffecf4f = DAT_fffecf4f != '\0' || 0xfffe < uVar6;
  bVar1 = false;
  if ((param_5 == '\0') && ((bool)DAT_fffecf4f)) {
    bVar1 = true;
  }
  cVar4 = '\x01';
  if (!bVar1 || (uint)_DAT_fffecf4c < (uVar3 & 0xffff)) {
    cVar4 = DAT_fffecf4e;
  }
  if (param_4 != '\0') {
    cVar4 = '\0';
  }
  uVar5 = 0;
  if ((cVar4 != '\0') && (param_6 != '\0')) {
    uVar5 = 1;
  }
  *param_7 = uVar5;
  if (bVar1) {
    sVar2 = -1;
    if (_DAT_fffecf4c != 0xffff) {
      sVar2 = _DAT_fffecf4c + 1;
    }
  }
  else {
    _DAT_fffecf4c = 0;
    sVar2 = _DAT_fffecf4c;
  }
  _DAT_fffecf4c = sVar2;
  DAT_fffecf4e = cVar4;
  return;
}

