
/* WARNING: Removing unreachable block (ram,0x00119042) */
/* WARNING: Removing unreachable block (ram,0x001190d4) */
/* WARNING: Removing unreachable block (ram,0x001190e2) */

void FUN_00118ffc(char param_1,ushort param_2,char param_3,undefined4 param_4,undefined4 param_5,
                 undefined1 *param_6,char *param_7,char *param_8)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  
  DAT_fffedfac = param_2 < 0x4000;
  if (((!DAT_fffedfac) || (param_3 == '\0')) || (cVar2 = '\x01', DAT_fffedfab == '\0')) {
    cVar2 = DAT_fffedfa9;
  }
  if (param_1 != '\0') {
    cVar2 = '\0';
  }
  *param_7 = cVar2;
  if ((cVar2 != '\0') && ((!DAT_fffedfac || (param_3 == '\0')))) {
    DAT_fffedfa8 = '\x01';
  }
  if (param_1 != '\0') {
    DAT_fffedfa8 = '\0';
  }
  bVar1 = false;
  if (((DAT_fffedfac) && (param_3 != '\0')) && (DAT_fffedfa8 == '\0')) {
    bVar1 = true;
  }
  uVar3 = 0;
  if (bVar1) {
    uVar3 = DAT_fffedfaa;
  }
  if (param_1 != '\0') {
    uVar3 = 0;
  }
  *param_6 = uVar3;
  *param_8 = DAT_fffedfa8;
  DAT_fffedfab = 0;
  DAT_fffedfaa = uVar3;
  DAT_fffedfa9 = cVar2;
  return;
}

