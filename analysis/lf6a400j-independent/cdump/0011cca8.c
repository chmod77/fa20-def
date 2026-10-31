
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011cca8(char param_1,char param_2,short param_3,short param_4,short param_5,
                 undefined1 *param_6,ushort *param_7,ushort *param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  undefined1 uVar5;
  ushort uVar6;
  
  bVar1 = false;
  if ((param_1 != '\0') && (param_2 != '\0')) {
    bVar1 = true;
  }
  bVar2 = false;
  if ((bVar1) && (param_3 <= param_4)) {
    bVar2 = true;
  }
  uVar6 = 0;
  if (bVar2) {
    uVar6 = _DAT_fffee098;
    if (_DAT_fffee098 == 0xffff) {
      _DAT_fffee098 = -1;
    }
    else {
      _DAT_fffee098 = _DAT_fffee098 + 1;
    }
  }
  else {
    _DAT_fffee098 = 0;
  }
  *param_7 = uVar6;
  bVar3 = false;
  if ((bVar1) && (param_5 < 0x510)) {
    bVar3 = true;
  }
  uVar4 = 0;
  if (bVar3) {
    uVar4 = _DAT_fffee09a;
    if (_DAT_fffee09a == 0xffff) {
      _DAT_fffee09a = -1;
    }
    else {
      _DAT_fffee09a = _DAT_fffee09a + 1;
    }
  }
  else {
    _DAT_fffee09a = 0;
  }
  *param_8 = uVar4;
  uVar5 = 0;
  if ((((7 < uVar6) && (bVar2)) && (4 < uVar4)) && (bVar3)) {
    uVar5 = 1;
  }
  *param_6 = uVar5;
  return;
}

