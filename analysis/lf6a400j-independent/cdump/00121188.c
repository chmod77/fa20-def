
void FUN_00121188(char param_1,char param_2,char param_3,char param_4,uint param_5,uint param_6,
                 uint param_7,char param_8,undefined1 *param_9)

{
  uint uVar1;
  undefined1 uVar2;
  
  if (((param_1 == '\0') && (param_3 != '\0')) && (param_4 != '\0')) {
    if (0x17 < (param_5 & 0xffff)) {
      uVar1 = LK_136050((uint)&T_02FF78,param_6 & 0xffff,param_7 & 0xff);
      uVar2 = 1;
      if ((param_5 & 0xffff) < (uVar1 & 0xffff)) goto LAB_001211da;
    }
  }
  uVar2 = DAT_fffee1d8;
LAB_001211da:
  if ((param_1 == '\0') || (param_2 == '\0')) {
    if (((param_2 == '\0') && (param_1 != '\0')) || ((param_1 == '\0' && (param_8 == '\0')))) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  *param_9 = uVar2;
  DAT_fffee1d8 = uVar2;
  return;
}

