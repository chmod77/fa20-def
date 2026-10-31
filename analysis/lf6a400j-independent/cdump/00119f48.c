
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00119f48(char param_1,undefined1 param_2,byte param_3,ushort param_4,char param_5,
                 ushort param_6,undefined4 param_7,undefined2 param_8,char param_9,
                 undefined1 *param_10)

{
  bool bVar1;
  ushort uVar2;
  
  if (param_5 == -0x5b) {
    uVar2 = 0x4b;
  }
  else {
    uVar2 = 0x7d;
  }
  bVar1 = false;
  if (((DAT_fffee002 != '\0') && (param_3 < DAT_fffee004)) && (uVar2 < param_4)) {
    bVar1 = true;
  }
  if ((param_1 != '\0') && (bVar1)) {
    DAT_fffee003 = 1;
  }
  if (((param_1 != '\0') && (DAT_fffee002 != '\0')) &&
     ((param_3 < DAT_fffee004 && ((uVar2 < param_4 && (0x3200 < param_6)))))) {
    DAT_fffee003 = 1;
  }
  if ((param_9 != '\0') || (param_1 == '\0')) {
    DAT_fffee003 = 0;
  }
  *param_10 = DAT_fffee003;
  DAT_fffee004 = param_3;
  DAT_fffee002 = param_2;
  _DAT_fffee000 = param_8;
  return;
}

