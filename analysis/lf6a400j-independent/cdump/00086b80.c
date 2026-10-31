
void FUN_00086b80(char param_1,ushort param_2,undefined4 param_3,ushort *param_4)

{
  ushort uVar1;
  
  if ((DAT_fffebbcc == '\0') || (param_1 != '\x02')) {
    uVar1 = 100;
  }
  else {
    uVar1 = 200;
  }
  *param_4 = uVar1;
  *(bool *)param_3 = uVar1 < param_2;
  DAT_fffebbcc = uVar1 < param_2;
  return;
}

