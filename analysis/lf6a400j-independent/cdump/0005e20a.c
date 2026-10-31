
bool FUN_0005e20a(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(char *)(param_1 + ((int)(param_2 & 0xff) >> 3));
  uVar1 = FUN_0016c9b4(param_1,uVar2);
  return (uVar1 & 0xff & uVar2) != 0;
}

