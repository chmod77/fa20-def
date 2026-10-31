
void FUN_00120ae0(char param_1,uint param_2,uint param_3,uint param_4,char param_5,
                 undefined1 *param_6)

{
  uint uVar1;
  
  uVar1 = LK_135904((uint)&T_02FF18,param_3,param_4);
  if (((param_5 != '\0') && (param_1 == '\0')) ||
     ((param_1 != '\0' && ((uVar1 & 0xff) <= (param_2 & 0xff))))) {
    DAT_fffee1a4 = 1;
  }
  if (((param_2 & 0xff) < 2) || ((param_1 == '\0' && (param_5 == '\0')))) {
    DAT_fffee1a4 = 0;
  }
  *param_6 = DAT_fffee1a4;
  return;
}

