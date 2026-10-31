
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d83e0(ushort param_1,ushort param_2,char param_3,ushort param_4,byte param_5,
                 ushort param_6,undefined4 param_7,char param_8,undefined1 *param_9)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  char cVar4;
  
  cVar4 = DAT_fffecf54;
  if (param_8 == '\0') {
    cVar4 = '\0';
  }
  uVar3 = 0;
  if (cVar4 != '\0') {
    uVar3 = _DAT_fffecf50;
  }
  uVar2 = 0;
  if ((((0xfffe < param_1) && (600 < param_2)) && (param_3 != '\0')) &&
     (((0xc7ff < param_4 && (0x86 < param_5)) && ((0xfffe < param_6 && (0x1193 < uVar3)))))) {
    uVar2 = 1;
  }
  *param_9 = uVar2;
  if (cVar4 != '\0') {
    iVar1 = FUN_0016caac();
    if (iVar1 == 0) {
      _DAT_fffecf50 = uVar3 + 1;
    }
    else {
      _DAT_fffecf50 = -1;
    }
  }
  else {
    _DAT_fffecf50 = 0;
  }
  DAT_fffecf54 = cVar4;
  return;
}

