
void FUN_000fff34(char param_1,short param_2,short param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  int iVar2;
  
  if (param_1 == '\x01') {
    iVar2 = 0;
  }
  else {
    iVar2 = param_3 * 0x10 + (int)param_2;
  }
  uVar1 = 0x7fff;
  if ((iVar2 < (int)(undefined *)0x7fff1) && (uVar1 = 0x8000, -0x7fff2 < iVar2)) {
    uVar1 = (undefined2)(iVar2 >> 4);
  }
  *param_4 = uVar1;
  return;
}

