
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000da828(undefined2 param_1,char param_2,undefined2 *param_3,undefined2 *param_4,
                 undefined2 *param_5,undefined2 *param_6)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar1 = 0x8000;
  if (param_2 == '\0') {
    uVar1 = _DAT_fffed018;
  }
  *param_4 = uVar1;
  uVar3 = 0x8000;
  if (param_2 == '\0') {
    uVar3 = _DAT_fffed01c;
  }
  *param_5 = uVar3;
  uVar2 = 0x8000;
  if (param_2 == '\0') {
    uVar2 = _DAT_fffed01e;
  }
  *param_6 = uVar2;
  if (param_2 == '\0') {
    *param_3 = _DAT_fffed01a;
  }
  else {
    *param_3 = 0x8000;
  }
  _DAT_fffed018 = param_1;
  _DAT_fffed01c = uVar1;
  _DAT_fffed01e = uVar3;
  _DAT_fffed01a = uVar2;
  return;
}

