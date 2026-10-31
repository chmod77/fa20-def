
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00126cf8(char param_1,char param_2,char param_3,char param_4,undefined1 *param_5,
                 undefined4 param_6,ushort *param_7)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  ushort uVar4;
  
  bVar1 = true;
  if (((param_2 != '\x05') && (param_2 != '\x06')) && (param_2 != '\n')) {
    bVar1 = false;
  }
  uVar4 = 0;
  if (bVar1) {
    uVar4 = _DAT_fffee2fc;
  }
  *param_7 = uVar4;
  bVar2 = false;
  if ((bVar1) && (2 < uVar4)) {
    bVar2 = true;
  }
  uVar3 = 0;
  if (((param_1 == '\0') && (bVar2)) && ((param_3 != '\0' && (param_4 == '\0')))) {
    uVar3 = 1;
  }
  *param_5 = uVar3;
  *(bool *)param_6 = bVar2;
  if (bVar1) {
    if (uVar4 == 0xffff) {
      _DAT_fffee2fc = -1;
    }
    else {
      _DAT_fffee2fc = uVar4 + 1;
    }
  }
  else {
    _DAT_fffee2fc = 0;
  }
  return;
}

