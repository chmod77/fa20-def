
void FUN_000a5450(uint param_1,uint param_2,char param_3,char param_4,undefined2 *param_5)

{
  int iVar1;
  undefined2 uVar2;
  
  if ((param_3 == '\0') && (param_4 == '\0')) {
    if (&UNK_0000fffa < (undefined *)(param_1 & 0xffff)) {
      param_1 = 0xfffffffb;
    }
    iVar1 = __udiv32_r1_by_r0((param_2 & 0xffff) << 7,0x19);
    iVar1 = (param_1 & 0xffff) - iVar1;
    uVar2 = 0x7fff;
    if ((iVar1 < 0x8000) && (uVar2 = (undefined2)iVar1, iVar1 < -0x8000)) {
      uVar2 = 0x8000;
    }
    *param_5 = uVar2;
  }
  else {
    *param_5 = 0;
  }
  return;
}

