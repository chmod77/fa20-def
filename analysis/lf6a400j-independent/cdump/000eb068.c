
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eb068(char param_1,char param_2,undefined2 param_3,uint *param_4)

{
  if (((param_1 != '\0') && (param_2 != DAT_fffed4d2)) &&
     (_DAT_fffed4cc = _DAT_fffed4d0 + _DAT_fffed4cc, _DAT_fffed4cc < _DAT_fffed4d0)) {
    _DAT_fffed4cc = 0xffffffff;
  }
  *param_4 = _DAT_fffed4cc;
  DAT_fffed4d2 = param_2;
  _DAT_fffed4d0 = param_3;
  return;
}

