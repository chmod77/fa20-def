
void FUN_0012098c(char param_1,uint param_2,uint param_3,byte param_4,char param_5,byte param_6,
                 char param_7,char param_8,char param_9,char param_10,uint param_11,
                 undefined1 *param_12)

{
  uint uVar1;
  uint uVar2;
  uint p2;
  
  param_3 = param_3 & 0xffff;
  p2 = (uint)param_4;
  uVar1 = LK_136050((uint)&T_02FF04,param_3,p2);
  if ((param_1 != '\0') || (param_9 != '\0')) {
    uVar2 = LK_136050((uint)&T_02FEF0,param_3,p2);
    if (((((uVar2 & 0xffff) <= (param_2 & 0xffff)) && (param_10 != '\0')) ||
        ((((uVar1 & 0xffff) <= (param_2 & 0xffff) && (param_10 == '\0')) ||
         ((uVar1 & 0xffff) <= (param_11 & 0xffff))))) &&
       ((7 < p2 &&
        ((param_5 != '\0' || (uVar1 = LK_133E10((uint)&T_02FEE4,p2), (uVar1 & 0xffff) <= param_3))))
       )) {
      DAT_fffee19c = 1;
    }
  }
  if (((DAT_fffee19d < param_6) || (param_3 < 0x42)) || ((param_7 != '\0' || (param_8 != '\0')))) {
    DAT_fffee19c = 0;
  }
  *param_12 = DAT_fffee19c;
  DAT_fffee19d = param_6;
  return;
}

