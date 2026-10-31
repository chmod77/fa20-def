
undefined1 *
FUN_000b3350(char param_1,char param_2,byte param_3,char param_4,byte param_5,byte param_6,
            char *param_7)

{
  bool bVar1;
  undefined1 *puVar2;
  
  puVar2 = &DAT_00029045;
  if (param_1 != '\0') {
    if ((param_6 < 0xf) || (0x18 < param_6)) {
      if ((param_6 < 0x19) || (0x22 < param_6)) {
        if ((param_6 < 0x23) || (0x2c < param_6)) {
          if ((param_6 < 0x2d) || (0x3b < param_6)) {
            if ((param_6 < 0x3c) || (0x4f < param_6)) {
              DAT_fffec6e8 = '\0';
            }
            else {
              DAT_fffec6e8 = '\x05';
            }
          }
          else {
            DAT_fffec6e8 = '\x04';
          }
        }
        else {
          DAT_fffec6e8 = '\x03';
        }
      }
      else {
        DAT_fffec6e8 = '\x02';
      }
    }
    else {
      DAT_fffec6e8 = '\x01';
    }
    if (0x4f < param_3) {
      if ((((param_3 < 0x50) || (0xbf < param_3)) || (param_6 < 0xf)) || (0x4f < param_6)) {
        DAT_fffec6e8 = '\0';
      }
      else {
        DAT_fffec6e8 = DAT_fffec6e8 + '\x05';
      }
    }
    if (DAT_fffec6e9 == '\0') {
      bVar1 = 0x28 < param_3;
    }
    else {
      bVar1 = 0x2c < param_3;
    }
    puVar2 = (undefined1 *)(bVar1 ^ 1);
    if (param_2 != '\0') {
      if (((puVar2 == (undefined1 *)0x0) || (param_4 != '\0')) || (2 < param_5)) {
        if (((puVar2 == (undefined1 *)0x0) || (param_4 == '\0')) || (2 < param_5)) {
          DAT_fffec6e8 = '\0';
        }
        else {
          DAT_fffec6e8 = '\f';
        }
      }
      else {
        DAT_fffec6e8 = '\v';
      }
    }
    DAT_fffec6e9 = (char)puVar2;
  }
  if (param_1 == '\0') {
    *param_7 = '\0';
  }
  else {
    *param_7 = DAT_fffec6e8;
  }
  return puVar2;
}

