
void FUN_000b3330(uint param_1,uint param_2,undefined2 *param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = (param_1 & 0xffff) - (param_2 & 0xffff);
  uVar2 = 0x7fff;
  if ((iVar1 < 0x8000) && (uVar2 = (undefined2)iVar1, iVar1 < -0x8000)) {
    uVar2 = 0x8000;
  }
  *param_3 = uVar2;
  return;
}

