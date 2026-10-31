
void FUN_00093e1c(char param_1,uint param_2,char param_3,char param_4,uint param_5,
                 undefined1 *param_6,undefined1 *param_7,undefined1 *param_8,undefined1 *param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = LK_133BCC((uint)&T_02D384,param_5 & 0xffff);
  uVar1 = uVar1 & 0xff;
  param_2 = param_2 & 0xffff;
  uVar2 = LK_133BCC((uint)&T_02D378,param_2);
  iVar3 = __sdiv32_r1_by_r0(uVar1 * (uVar2 & 0xff),0xff);
  *param_7 = (char)iVar3;
  uVar2 = LK_133BCC((uint)&T_02D36C,param_2);
  iVar4 = __sdiv32_r1_by_r0(uVar1 * (uVar2 & 0xff),0xff);
  *param_8 = (char)iVar4;
  uVar2 = LK_133BCC((uint)&T_02D360,param_2);
  iVar5 = __sdiv32_r1_by_r0(uVar1 * (uVar2 & 0xff),0xff);
  *param_9 = (char)iVar5;
  if (param_1 == '\0') {
    if (param_3 == '\0') {
      *param_6 = (char)iVar3;
    }
    else if (param_4 == '\0') {
      *param_6 = (char)iVar4;
    }
    else {
      *param_6 = (char)iVar5;
    }
  }
  else {
    *param_6 = 0x26;
  }
  return;
}

