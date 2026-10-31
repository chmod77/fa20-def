
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011a484(char param_1,undefined1 param_2,byte param_3,ushort param_4,char param_5,
                 ushort param_6,undefined4 param_7,undefined2 param_8,undefined1 param_9,
                 char param_10,undefined1 *param_11)

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
  if (((DAT_fffee012 != '\0') && (param_3 < DAT_fffee013)) && (uVar2 < param_4)) {
    bVar1 = true;
  }
  if ((((param_1 != '\0') && (DAT_fffee012 != '\0')) &&
      ((param_3 < DAT_fffee013 && ((uVar2 < param_4 && (0x3200 < param_6)))))) ||
     ((param_1 != '\0' && (bVar1)))) {
    param_9 = 1;
  }
  if ((param_10 == '\0') && (param_1 != '\0')) {
    *param_11 = param_9;
  }
  else {
    *param_11 = 0;
  }
  DAT_fffee013 = param_3;
  DAT_fffee012 = param_2;
  _DAT_fffee010 = param_8;
  return;
}

