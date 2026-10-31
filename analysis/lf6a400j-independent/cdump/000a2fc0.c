
void FUN_000a2fc0(char param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  
  if (param_1 == '\x01') {
    uVar1 = LK_134FA8((uint)&T_02DAA8,param_2);
    DAT_fffec2b0 = (char)uVar1;
  }
  if (param_1 == '\x04') {
    uVar1 = LK_134FA8((uint)&T_02DACC,param_2 & 0xff);
    DAT_fffec2b3 = (char)uVar1;
  }
  if (param_1 == '\x03') {
    uVar1 = LK_134FA8((uint)&T_02DAC0,param_2 & 0xff);
    DAT_fffec2b2 = (char)uVar1;
  }
  if (param_1 == '\x02') {
    uVar1 = LK_134FA8((uint)&T_02DAB4,param_2 & 0xff);
    DAT_fffec2b1 = (char)uVar1;
  }
  *param_3 = DAT_fffec2b0;
  param_3[1] = DAT_fffec2b1;
  param_3[2] = DAT_fffec2b2;
  param_3[3] = DAT_fffec2b3;
  return;
}

