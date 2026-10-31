
void FUN_00119cf4(char param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                 undefined2 *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 != '\0') {
    uVar1 = LK_133F40((uint)&T_02FCD8,param_2);
    uVar2 = LK_133E10((uint)&T_02FCE4,param_3);
    uVar3 = LK_133F40((uint)&T_02FCF0,param_4);
    uVar4 = LK_133F40((uint)&T_02FCFC,param_5 & 0xffff);
    iVar5 = (((uVar1 & 0xffff) - (uVar2 & 0xffff)) - (uVar3 & 0xffff)) - (uVar4 & 0xffff);
    if (0 < iVar5) {
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      *param_6 = (short)iVar5;
      return;
    }
  }
  *param_6 = 0;
  return;
}

