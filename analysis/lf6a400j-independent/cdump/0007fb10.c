
void FUN_0007fb10(uint param_1,byte param_2,short param_3,short *param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  
  if (param_2 < 2) {
    *param_4 = param_3;
  }
  else {
    pcVar3 = __udiv32_r1_by_r0;
    uVar1 = __udiv32_r1_by_r0((uint)(byte)(0xff - param_2) * (param_1 & 0xffff),0xff);
    uVar1 = uVar1 & 0xffff;
    uVar2 = (*pcVar3)(0xc80);
    iVar4 = uVar1 - (uVar2 & 0xffff);
    if (iVar4 < (int)&DAT_0000c180) {
      *param_4 = (short)iVar4 + 16000;
    }
    else {
      *param_4 = -1;
    }
  }
  return;
}

