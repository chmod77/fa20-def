
void FUN_00120850(char param_1,uint param_2,uint param_3,uint param_4,char param_5,char param_6,
                 undefined1 *param_7)

{
  uint uVar1;
  
  uVar1 = LK_135904((uint)&T_02FED0,param_3,param_4);
  if (((param_6 != '\0') || ((param_5 != '\0' && (param_1 == '\0')))) ||
     ((param_1 != '\0' && ((uVar1 & 0xff) <= (param_2 & 0xff))))) {
    DAT_fffee190 = 1;
  }
  if ((((param_2 & 0xff) < 2) || ((param_1 == '\0' && (param_5 == '\0')))) && (param_6 == '\0')) {
    DAT_fffee190 = 0;
  }
  *param_7 = DAT_fffee190;
  return;
}

