
void FUN_00120d40(char param_1,uint param_2,uint param_3,byte param_4,byte param_5,char param_6,
                 char param_7,char param_8,char param_9,uint param_10,undefined1 *param_11)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  uint p2;
  
  param_3 = param_3 & 0xffff;
  p2 = (uint)param_4;
  uVar1 = LK_136050((uint)&T_02FF40,param_3,p2);
  if ((param_1 != '\0') || (param_8 != '\0')) {
    uVar2 = LK_136050((uint)&T_02FF2C,param_3,p2);
    if (((((uVar2 & 0xffff) <= (param_2 & 0xffff)) && (param_9 != '\0')) ||
        ((((uVar1 & 0xffff) <= (param_2 & 0xffff) && (param_9 == '\0')) ||
         ((uVar1 & 0xffff) <= (param_10 & 0xffff))))) && (uVar3 = 1, 7 < p2)) goto LAB_00120dca;
  }
  uVar3 = DAT_fffee1b9;
LAB_00120dca:
  if (((DAT_fffee1b8 < param_5) || (param_3 < 0x42)) || ((param_6 != '\0' || (param_7 != '\0')))) {
    uVar3 = 0;
  }
  *param_11 = uVar3;
  DAT_fffee1b9 = uVar3;
  DAT_fffee1b8 = param_5;
  return;
}

