
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011b494(char param_1,undefined1 param_2,byte param_3,ushort param_4,char param_5,
                 ushort param_6,undefined4 param_7,undefined2 param_8,char param_9,
                 undefined1 *param_10)

{
  ushort uVar1;
  
  if (param_5 == -0x5b) {
    uVar1 = 0x4b;
  }
  else {
    uVar1 = 0x7d;
  }
  if ((((param_1 != '\0') && (DAT_fffee032 != '\0')) && (param_3 < DAT_fffee034)) &&
     ((uVar1 < param_4 && (0x3200 < param_6)))) {
    DAT_fffee033 = 1;
  }
  if (param_9 != '\0') {
    DAT_fffee033 = 0;
  }
  *param_10 = DAT_fffee033;
  DAT_fffee034 = param_3;
  DAT_fffee032 = param_2;
  _DAT_fffee030 = param_8;
  return;
}

