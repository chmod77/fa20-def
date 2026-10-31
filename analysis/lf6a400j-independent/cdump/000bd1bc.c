
/* WARNING: Removing unreachable block (ram,0x000bd22a) */
/* WARNING: Removing unreachable block (ram,0x000bd248) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_000bd1bc(char param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5,ushort param_6,ushort *param_7,undefined2 *param_8,
                 undefined1 *param_9)

{
  undefined1 uVar1;
  
  uVar1 = FUN_0016ba04(&DAT_00014fae,param_4);
  *param_9 = uVar1;
  *param_8 = 0;
  if (((param_1 == '\x05') || (param_1 == '\x06')) && (param_6 < _DAT_fffec8dc)) {
    _DAT_fffec8dc = param_6;
  }
  if ((param_1 == '\x03') && (_DAT_fffec8dc = 0, param_6 == 0)) {
    _DAT_fffec8dc = param_6;
  }
  *param_7 = _DAT_fffec8dc;
  return param_1;
}

