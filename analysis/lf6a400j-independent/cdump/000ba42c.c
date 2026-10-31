
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ba42c(ushort param_1,byte param_2,byte param_3,char *param_4,char param_5,char *param_6,
                 char param_7,char param_8,undefined1 *param_9)

{
  bool bVar1;
  ushort uVar2;
  
  bVar1 = false;
  if ((((((4999 < param_1) && (0x31 < param_2)) && (99 < param_3)) &&
       ((param_8 == '\x03' && (param_5 != '\0')))) && ((*param_4 != '\0' && (param_4[1] != '\0'))))
     && (((*param_6 != '\0' || (param_7 == '\0')) && ((param_6[1] != '\0' || (param_7 == '\0'))))))
  {
    bVar1 = true;
  }
  if (bVar1) {
    if (DAT_fffec86c == '\0') {
      _DAT_fffec86a = 0;
      DAT_fffec86c = '\x01';
    }
    DAT_fffec868 = 499 < _DAT_fffec86a;
    uVar2 = 0xffff;
    if (_DAT_fffec86a != 0xffff) {
      uVar2 = _DAT_fffec86a + 1;
    }
  }
  else {
    DAT_fffec86c = '\0';
    uVar2 = _DAT_fffec86a;
  }
  _DAT_fffec86a = uVar2;
  if (bVar1) {
    *param_9 = DAT_fffec868;
  }
  else {
    *param_9 = 0;
  }
  return;
}

