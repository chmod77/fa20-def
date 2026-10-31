
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00126e30(undefined4 param_1,char param_2,undefined1 *param_3,ushort *param_4)

{
  bool bVar1;
  undefined1 uVar2;
  ushort uVar3;
  
  bVar1 = param_2 != '\0';
  uVar3 = 0;
  if (bVar1) {
    uVar3 = _DAT_fffee308;
  }
  uVar2 = 0;
  if ((bVar1) && (0x1e < uVar3)) {
    uVar2 = 1;
  }
  *param_3 = uVar2;
  *param_4 = uVar3;
  if (bVar1) {
    if (uVar3 == 0xffff) {
      _DAT_fffee308 = -1;
    }
    else {
      _DAT_fffee308 = uVar3 + 1;
    }
  }
  else {
    _DAT_fffee308 = 0;
  }
  return;
}

