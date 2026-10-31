
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011b580(char param_1,undefined1 param_2,byte param_3,ushort param_4,char param_5,
                 undefined2 param_6,char param_7,undefined1 *param_8)

{
  ushort uVar1;
  
  if (param_5 == -0x5b) {
    uVar1 = 0x4b;
  }
  else {
    uVar1 = 0x7d;
  }
  if ((((param_1 != '\0') && (DAT_fffee03c != '\0')) && (param_3 < DAT_fffee03b)) &&
     (uVar1 < param_4)) {
    DAT_fffee03a = 1;
  }
  if (param_7 != '\0') {
    DAT_fffee03a = 0;
  }
  *param_8 = DAT_fffee03a;
  DAT_fffee03b = param_3;
  DAT_fffee03c = param_2;
  _DAT_fffee038 = param_6;
  return;
}

