
void FUN_00003768(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; (uVar1 & 0xff) < (param_3 & 0xff); uVar1 = uVar1 + 1) {
    uVar1 = uVar1 & 0xff;
    *(undefined1 *)(param_1 + uVar1) = *(undefined1 *)(param_2 + uVar1);
  }
  return;
}

