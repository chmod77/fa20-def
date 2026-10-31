
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d76fc(char param_1,ushort param_2,char param_3,char param_4,char param_5,ushort param_6,
                 undefined4 param_7,ushort *param_8,byte *param_9)

{
  bool bVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar1 = false;
  if ((((param_1 != '\0') && (param_6 < param_2)) && (param_3 != '\0')) && (DAT_fffecf0f == '\0')) {
    bVar1 = true;
  }
  uVar2 = 0;
  if (bVar1) {
    uVar2 = _DAT_fffecf0c;
  }
  bVar3 = DAT_fffecf10;
  if (((499 < uVar2) && (bVar1)) && (bVar3 = 0xff, DAT_fffecf10 != 0xff)) {
    bVar3 = DAT_fffecf10 + 1;
  }
  if (((param_5 != '\0') || (param_4 != '\0')) || (DAT_fffecf0e != '\0')) {
    bVar3 = 0;
  }
  *param_9 = bVar3;
  DAT_fffecf0f = bVar3 != DAT_fffecf10;
  *(bool *)param_7 = 2 < bVar3;
  if (bVar1) {
    if (uVar2 == 0xffff) {
      _DAT_fffecf0c = -1;
    }
    else {
      _DAT_fffecf0c = uVar2 + 1;
    }
  }
  else {
    _DAT_fffecf0c = 0;
  }
  *param_8 = uVar2;
  DAT_fffecf10 = bVar3;
  DAT_fffecf0e = 2 < bVar3;
  return;
}

