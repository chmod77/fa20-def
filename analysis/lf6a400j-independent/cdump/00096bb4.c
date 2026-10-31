
/* WARNING: Removing unreachable block (ram,0x00096c62) */
/* WARNING: Removing unreachable block (ram,0x00096c58) */
/* WARNING: Removing unreachable block (ram,0x00096c6c) */

void FUN_00096bb4(char param_1,char param_2,byte param_3,byte param_4,undefined4 param_5,
                 undefined4 param_6,undefined1 *param_7)

{
  ushort uVar1;
  undefined1 uVar2;
  char cVar3;
  
  if (param_3 == 0) {
    DAT_fffebf59 = '\0';
  }
  else {
    if (DAT_fffebf59 == '\0') {
      DAT_fffebf5a = '\0';
      DAT_fffebf59 = '\x01';
    }
    DAT_fffebf58 = '\x01';
    DAT_fffebf5a = DAT_fffebf5a + '\x01';
    if (DAT_fffebf5a == '\0') {
      DAT_fffebf5a = -1;
    }
  }
  cVar3 = '\0';
  if (param_3 != 0) {
    cVar3 = DAT_fffebf58;
  }
  uVar1 = (ushort)param_3 - (ushort)DAT_fffebf5b;
  if ((short)uVar1 < 0) {
    uVar1 = -uVar1;
  }
  uVar2 = 0;
  if ((((param_1 != '\0') && (param_2 != '\0')) && ((uVar1 & 0xff) < 0x100)) &&
     ((param_4 < 0x87 && (cVar3 != '\0')))) {
    uVar2 = 1;
  }
  *param_7 = uVar2;
  DAT_fffebf5b = param_3;
  return;
}

