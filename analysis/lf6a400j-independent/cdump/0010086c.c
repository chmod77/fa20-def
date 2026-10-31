
void FUN_0010086c(uint param_1,uint param_2,uint param_3,char param_4,short *param_5,
                 undefined2 *param_6)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = LK_1361C8((uint)&T_02F8EC,param_2,param_3);
  *param_6 = (short)uVar1;
  if (param_4 != '\x01') {
    iVar2 = (uVar1 & 0xffff) - (param_1 & 0xffff);
    if (0x7fff < iVar2) {
      *param_5 = -1;
      return;
    }
    if (-0x8001 < iVar2) {
      *param_5 = (short)iVar2 + -0x8000;
      return;
    }
  }
  *param_5 = 0;
  return;
}

