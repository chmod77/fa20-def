
void FUN_00104668(char param_1,uint param_2,uint param_3,undefined2 *param_4)

{
  int iVar1;
  undefined2 uVar2;
  
  if (param_1 != '\0') {
    iVar1 = (param_2 & 0xffff) - (param_3 & 0xffff);
    uVar2 = 0x7fff;
    if ((iVar1 < 0x8000) && (uVar2 = (undefined2)iVar1, iVar1 < -0x8000)) {
      uVar2 = 0x8000;
    }
    *param_4 = uVar2;
    return;
  }
  *param_4 = 0;
  return;
}

