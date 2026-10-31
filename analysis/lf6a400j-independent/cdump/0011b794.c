
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011b794(char param_1,undefined1 param_2,byte param_3,ushort param_4,char param_5,
                 ushort param_6,undefined4 param_7,undefined2 param_8,char param_9,
                 undefined1 *param_10,ushort *param_11,undefined2 *param_12,undefined2 *param_13)

{
  bool bVar1;
  ushort uVar2;
  
  if (param_5 == -0x5b) {
    uVar2 = 0x4b;
  }
  else {
    uVar2 = 0x7d;
  }
  *param_11 = uVar2;
  *param_12 = 0x3200;
  *param_13 = 0xffff;
  bVar1 = false;
  if (((DAT_fffee04e != '\0') && (param_3 < DAT_fffee050)) && (uVar2 < param_4)) {
    bVar1 = true;
  }
  if ((param_1 != '\0') && (bVar1)) {
    DAT_fffee04f = 0;
  }
  if (((param_1 != '\0') && (DAT_fffee04e != '\0')) &&
     ((param_3 < DAT_fffee050 && ((uVar2 < param_4 && (0x3200 < param_6)))))) {
    DAT_fffee04f = 1;
  }
  if ((param_9 != '\0') || (param_1 == '\0')) {
    DAT_fffee04f = 0;
  }
  *param_10 = DAT_fffee04f;
  DAT_fffee050 = param_3;
  DAT_fffee04e = param_2;
  _DAT_fffee04c = param_8;
  return;
}

